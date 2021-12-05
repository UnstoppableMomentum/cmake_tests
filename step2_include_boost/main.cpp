#include <iostream>
#include <sstream>
#include <vector>

#include <boost/foreach.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

void read_file (const std::string& file_name) {
    std::cout << __PRETTY_FUNCTION__ << " file_name:" << file_name << std::endl;

    boost::property_tree::ptree pt;
    boost::property_tree::read_json(file_name, pt);

    std::cout << __PRETTY_FUNCTION__  << pt.get<std::string>("string") << std::endl;
    std::cout << __PRETTY_FUNCTION__  << pt.get<std::string>("color") << std::endl;
    std::cout << __PRETTY_FUNCTION__  << pt.get<bool>("boolean") << std::endl;
    std::cout << __PRETTY_FUNCTION__  << pt.get<int>("number") << std::endl;


    BOOST_FOREACH(boost::property_tree::ptree::value_type &v, pt.get_child("array.")) {
        auto i = v.second.data();
        std::cout << i << std::endl;
    }

    BOOST_FOREACH(boost::property_tree::ptree::value_type &v, pt.get_child("object.")) {
        auto i = v.first.data();
        auto j = v.second.data();
        std::cout << i << ":" << j << std::endl;
    }
}

void writeJson()
{
    std::cout << __PRETTY_FUNCTION__ << ">>>" << std::endl;

    boost::property_tree::ptree root;

    int height = 23;

    root.put("height", height);
    root.put("some.complex.path", "bonjour");
    boost::property_tree::write_json(std::cout, root);
}

void writeJson2()
{
    std::cout << __PRETTY_FUNCTION__ << ">>>" << std::endl;

    boost::property_tree::ptree root;

    int height = 23;

    root.put("height", height);
    root.put("some.complex.path", "bonjour");

    std::stringstream ss;
    boost::property_tree::write_json(ss, root);

    std::cout << "string stream" << ss.str() << std::endl;
}

int main(int args, const char * argv[])
{
    read_file(argv[1]);
    writeJson();
    writeJson2();

    return 0;
}
