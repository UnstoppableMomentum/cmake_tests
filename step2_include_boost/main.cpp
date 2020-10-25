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

int main(int args, const char * argv[])
{
    read_file(argv[1]);
    return 0;
}
