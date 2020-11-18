#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>

namespace logging = boost::log;
//namespace sinks = boost::log::sinks;
//namespace src = boost::log::sources;
//namespace expr = boost::log::expressions;
//namespace attrs = boost::log::attributes;
//namespace keywords = boost::log::keywords;

void init()
{
    logging::core::get()->set_filter
    (
        logging::trivial::severity >= logging::trivial::warning
    );
}

int main(int, char*[])
{
    init();

    BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
    BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
    BOOST_LOG_TRIVIAL(info) << "An informational severity message";
    BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
    BOOST_LOG_TRIVIAL(error) << "An error severity message";
    BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";

    return 0;
}
