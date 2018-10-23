
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_4.hpp"
#include "Cisco_IOS_XE_native_5.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per_flow != nullptr)
    {
        _children["per-flow"] = per_flow;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Packets()
    :
    counter(nullptr) // presence node
    , rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "media"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::has_data() const
{
    if (is_presence_container) return true;
    return (counter !=  nullptr && counter->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::Counter()
    :
    long_{YType::empty, "long"}
{

    yang_name = "counter"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Rate()
    :
    variation(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (variation !=  nullptr && variation->has_data());
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (variation !=  nullptr && variation->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "variation")
    {
        if(variation == nullptr)
        {
            variation = std::make_shared<Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation>();
        }
        return variation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(variation != nullptr)
    {
        _children["variation"] = variation;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "variation")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::Variation()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "variation"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::~Variation()
{
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "variation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Media::Packets::Rate::Variation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Name::Name()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "name"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Application::Name::~Name()
{
}

bool Native::Flow::Record::Default::Collect::Application::Name::has_data() const
{
    if (is_presence_container) return true;
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Nntp::Nntp()
    :
    group_name{YType::empty, "group-name"}
{

    yang_name = "nntp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Nntp::~Nntp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Nntp::has_data() const
{
    if (is_presence_container) return true;
    return group_name.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Nntp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Nntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Nntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Nntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Nntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Nntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Nntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Nntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Pop3::Pop3()
    :
    server{YType::empty, "server"}
{

    yang_name = "pop3"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Pop3::~Pop3()
{
}

bool Native::Flow::Record::Default::Collect::Application::Pop3::has_data() const
{
    if (is_presence_container) return true;
    return server.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Pop3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Pop3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pop3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Pop3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Pop3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Pop3::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Pop3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Pop3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Pop3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Rtmp::Rtmp()
    :
    pageurl{YType::empty, "pageUrl"}
{

    yang_name = "rtmp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Rtmp::~Rtmp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Rtmp::has_data() const
{
    if (is_presence_container) return true;
    return pageurl.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Rtmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pageurl.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Rtmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Rtmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pageurl.is_set || is_set(pageurl.yfilter)) leaf_name_data.push_back(pageurl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Rtmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Rtmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Rtmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pageUrl")
    {
        pageurl = value;
        pageurl.value_namespace = name_space;
        pageurl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Rtmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pageUrl")
    {
        pageurl.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Rtmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pageUrl")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Rtsp::Rtsp()
    :
    host{YType::empty, "host"}
{

    yang_name = "rtsp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Rtsp::~Rtsp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Rtsp::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Rtsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Rtsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Rtsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Rtsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Rtsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Rtsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Rtsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Rtsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Sip::Sip()
    :
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "sip"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Sip::~Sip()
{
}

bool Native::Flow::Record::Default::Collect::Application::Sip::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Sip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Sip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Sip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Sip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Sip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Sip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Sip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Sip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Smtp::Smtp()
    :
    sender{YType::empty, "sender"},
    server{YType::empty, "server"}
{

    yang_name = "smtp"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Smtp::~Smtp()
{
}

bool Native::Flow::Record::Default::Collect::Application::Smtp::has_data() const
{
    if (is_presence_container) return true;
    return sender.is_set
	|| server.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Smtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sender.yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Smtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Smtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sender.is_set || is_set(sender.yfilter)) leaf_name_data.push_back(sender.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Smtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Smtp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Smtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sender")
    {
        sender = value;
        sender.value_namespace = name_space;
        sender.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Smtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sender")
    {
        sender.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Smtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender" || name == "server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Application::Ssl::Ssl()
    :
    common_name{YType::empty, "common-name"}
{

    yang_name = "ssl"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Application::Ssl::~Ssl()
{
}

bool Native::Flow::Record::Default::Collect::Application::Ssl::has_data() const
{
    if (is_presence_container) return true;
    return common_name.is_set;
}

bool Native::Flow::Record::Default::Collect::Application::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common_name.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Application::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Application::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_name.is_set || is_set(common_name.yfilter)) leaf_name_data.push_back(common_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Application::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Application::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Application::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common-name")
    {
        common_name = value;
        common_name.value_namespace = name_space;
        common_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Application::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common-name")
    {
        common_name.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Application::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-name")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Connection()
    :
    id{YType::empty, "id"},
    initiator{YType::empty, "initiator"},
    new_connections{YType::empty, "new-connections"},
    sum_duration{YType::empty, "sum-duration"},
    transaction_id{YType::empty, "transaction-id"}
        ,
    client(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client>())
    , delay(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay>())
    , server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server>())
    , transaction(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction>())
{
    client->parent = this;
    delay->parent = this;
    server->parent = this;
    transaction->parent = this;

    yang_name = "connection"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::~Connection()
{
}

bool Native::Flow::Record::Default::Collect::Connection::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| initiator.is_set
	|| new_connections.is_set
	|| sum_duration.is_set
	|| transaction_id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (transaction !=  nullptr && transaction->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(initiator.yfilter)
	|| ydk::is_set(new_connections.yfilter)
	|| ydk::is_set(sum_duration.yfilter)
	|| ydk::is_set(transaction_id.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (transaction !=  nullptr && transaction->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (initiator.is_set || is_set(initiator.yfilter)) leaf_name_data.push_back(initiator.get_name_leafdata());
    if (new_connections.is_set || is_set(new_connections.yfilter)) leaf_name_data.push_back(new_connections.get_name_leafdata());
    if (sum_duration.is_set || is_set(sum_duration.yfilter)) leaf_name_data.push_back(sum_duration.get_name_leafdata());
    if (transaction_id.is_set || is_set(transaction_id.yfilter)) leaf_name_data.push_back(transaction_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client>();
        }
        return client;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server>();
        }
        return server;
    }

    if(child_yang_name == "transaction")
    {
        if(transaction == nullptr)
        {
            transaction = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction>();
        }
        return transaction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    if(transaction != nullptr)
    {
        _children["transaction"] = transaction;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initiator")
    {
        initiator = value;
        initiator.value_namespace = name_space;
        initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-connections")
    {
        new_connections = value;
        new_connections.value_namespace = name_space;
        new_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum-duration")
    {
        sum_duration = value;
        sum_duration.value_namespace = name_space;
        sum_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transaction-id")
    {
        transaction_id = value;
        transaction_id.value_namespace = name_space;
        transaction_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "initiator")
    {
        initiator.yfilter = yfilter;
    }
    if(value_path == "new-connections")
    {
        new_connections.yfilter = yfilter;
    }
    if(value_path == "sum-duration")
    {
        sum_duration.yfilter = yfilter;
    }
    if(value_path == "transaction-id")
    {
        transaction_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "delay" || name == "server" || name == "transaction" || name == "id" || name == "initiator" || name == "new-connections" || name == "sum-duration" || name == "transaction-id")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Client()
    :
    all{YType::empty, "all"}
        ,
    counter(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter>())
    , ipv4(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv6>())
    , transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "client"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::~Client()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Counter()
    :
    bytes(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes>())
    , packets(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::has_data() const
{
    if (is_presence_container) return true;
    return (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::has_operation() const
{
    return is_set(yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        _children["packets"] = packets;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
        ,
    network(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network>())
    , transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Client::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Client::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Transport::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Client::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Client::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Client::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Client::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Delay()
    :
    all{YType::empty, "all"}
        ,
    application(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Application>())
    , network(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network>())
    , response(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response>())
{
    application->parent = this;
    network->parent = this;
    response->parent = this;

    yang_name = "delay"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::~Delay()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (application !=  nullptr && application->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Application>();
        }
        return application;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network>();
        }
        return network;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(application != nullptr)
    {
        _children["application"] = application;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(response != nullptr)
    {
        _children["response"] = response;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "network" || name == "response" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Application::Application()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "application"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Application::~Application()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Application::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::Network()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer>())
    , long_lived(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived>())
    , to_client(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient>())
    , to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer>())
{
    client_to_server->parent = this;
    long_lived->parent = this;
    to_client->parent = this;
    to_server->parent = this;

    yang_name = "network"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::~Network()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::has_data() const
{
    if (is_presence_container) return true;
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (long_lived !=  nullptr && long_lived->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (long_lived !=  nullptr && long_lived->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "long-lived")
    {
        if(long_lived == nullptr)
        {
            long_lived = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived>();
        }
        return long_lived;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_to_server != nullptr)
    {
        _children["client-to-server"] = client_to_server;
    }

    if(long_lived != nullptr)
    {
        _children["long-lived"] = long_lived;
    }

    if(to_client != nullptr)
    {
        _children["to-client"] = to_client;
    }

    if(to_server != nullptr)
    {
        _children["to-server"] = to_server;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "long-lived" || name == "to-client" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::LongLived()
    :
    client_to_serve(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe>())
    , to_client(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient>())
    , to_serve(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe>())
{
    client_to_serve->parent = this;
    to_client->parent = this;
    to_serve->parent = this;

    yang_name = "long-lived"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::~LongLived()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::has_data() const
{
    if (is_presence_container) return true;
    return (client_to_serve !=  nullptr && client_to_serve->has_data())
	|| (to_client !=  nullptr && to_client->has_data())
	|| (to_serve !=  nullptr && to_serve->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_serve !=  nullptr && client_to_serve->has_operation())
	|| (to_client !=  nullptr && to_client->has_operation())
	|| (to_serve !=  nullptr && to_serve->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-lived";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-serve")
    {
        if(client_to_serve == nullptr)
        {
            client_to_serve = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe>();
        }
        return client_to_serve;
    }

    if(child_yang_name == "to-client")
    {
        if(to_client == nullptr)
        {
            to_client = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient>();
        }
        return to_client;
    }

    if(child_yang_name == "to-serve")
    {
        if(to_serve == nullptr)
        {
            to_serve = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe>();
        }
        return to_serve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_to_serve != nullptr)
    {
        _children["client-to-serve"] = client_to_serve;
    }

    if(to_client != nullptr)
    {
        _children["to-client"] = to_client;
    }

    if(to_serve != nullptr)
    {
        _children["to-serve"] = to_serve;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-serve" || name == "to-client" || name == "to-serve")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::ClientToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::~ClientToServe()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_data() const
{
    if (is_presence_container) return true;
    return sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ClientToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::ToClient()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::has_data() const
{
    if (is_presence_container) return true;
    return sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::ToServe()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "to-serve"; yang_parent_name = "long-lived"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::~ToServe()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::has_data() const
{
    if (is_presence_container) return true;
    return sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-serve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::LongLived::ToServe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::ToClient()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-client"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::~ToClient()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::ToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    num_samples{YType::empty, "num-samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| num_samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(num_samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (num_samples.is_set || is_set(num_samples.yfilter)) leaf_name_data.push_back(num_samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-samples")
    {
        num_samples = value;
        num_samples.value_namespace = name_space;
        num_samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "num-samples")
    {
        num_samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Network::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "num-samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::Response()
    :
    client_to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer>())
    , to_server(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer>())
{
    client_to_server->parent = this;
    to_server->parent = this;

    yang_name = "response"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::~Response()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::has_data() const
{
    if (is_presence_container) return true;
    return (client_to_server !=  nullptr && client_to_server->has_data())
	|| (to_server !=  nullptr && to_server->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::has_operation() const
{
    return is_set(yfilter)
	|| (client_to_server !=  nullptr && client_to_server->has_operation())
	|| (to_server !=  nullptr && to_server->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-to-server")
    {
        if(client_to_server == nullptr)
        {
            client_to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer>();
        }
        return client_to_server;
    }

    if(child_yang_name == "to-server")
    {
        if(to_server == nullptr)
        {
            to_server = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer>();
        }
        return to_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_to_server != nullptr)
    {
        _children["client-to-server"] = client_to_server;
    }

    if(to_server != nullptr)
    {
        _children["to-server"] = to_server;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-to-server" || name == "to-server")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::ClientToServer()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "client-to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::~ClientToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ClientToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::ToServer()
    :
    histogram{YType::enumeration, "histogram"},
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "to-server"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::~ToServer()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::has_data() const
{
    if (is_presence_container) return true;
    return histogram.is_set
	|| max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(histogram.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "to-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (histogram.is_set || is_set(histogram.yfilter)) leaf_name_data.push_back(histogram.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "histogram")
    {
        histogram = value;
        histogram.value_namespace = name_space;
        histogram.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "histogram")
    {
        histogram.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "histogram" || name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Server()
    :
    all{YType::empty, "all"}
        ,
    counter(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter>())
    , ipv4(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv4>())
    , ipv6(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv6>())
    , transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Transport>())
{
    counter->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    transport->parent = this;

    yang_name = "server"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::~Server()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "ipv4" || name == "ipv6" || name == "transport" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Counter()
    :
    responses{YType::empty, "responses"}
        ,
    bytes(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes>())
    , packets(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets>())
{
    bytes->parent = this;
    packets->parent = this;

    yang_name = "counter"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::has_data() const
{
    if (is_presence_container) return true;
    return responses.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(responses.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        _children["packets"] = packets;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "responses")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
        ,
    network(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network>())
    , transport(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport>())
{
    network->parent = this;
    transport->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set
	|| (network !=  nullptr && network->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network>();
        }
        return network;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network" || name == "transport" || name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::Network()
    :
    long_{YType::empty, "long"}
{

    yang_name = "network"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::~Network()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::Transport()
    :
    long_{YType::empty, "long"}
{

    yang_name = "transport"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Bytes::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::Packets()
    :
    long_{YType::empty, "long"},
    retransmitted{YType::empty, "retransmitted"}
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| retransmitted.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(retransmitted.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.yfilter)) leaf_name_data.push_back(retransmitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
        retransmitted.value_namespace = name_space;
        retransmitted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "retransmitted")
    {
        retransmitted.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "retransmitted")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::Ipv4()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv4"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::Ipv6()
    :
    address{YType::empty, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Server::Transport::Transport()
    :
    port{YType::empty, "port"}
{

    yang_name = "transport"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Server::Transport::~Transport()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Transport::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Server::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Server::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Server::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Server::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Transaction()
    :
    all{YType::empty, "all"}
        ,
    counter(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Counter>())
    , duration(std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Duration>())
{
    counter->parent = this;
    duration->parent = this;

    yang_name = "transaction"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Transaction::~Transaction()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| (counter !=  nullptr && counter->has_data())
	|| (duration !=  nullptr && duration->has_data());
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| (counter !=  nullptr && counter->has_operation())
	|| (duration !=  nullptr && duration->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Connection::Transaction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transaction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Transaction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Transaction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "duration")
    {
        if(duration == nullptr)
        {
            duration = std::make_shared<Native::Flow::Record::Default::Collect::Connection::Transaction::Duration>();
        }
        return duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Transaction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(counter != nullptr)
    {
        _children["counter"] = counter;
    }

    if(duration != nullptr)
    {
        _children["duration"] = duration;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter" || name == "duration" || name == "all")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::Counter()
    :
    complete{YType::empty, "complete"}
{

    yang_name = "counter"; yang_parent_name = "transaction"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::has_data() const
{
    if (is_presence_container) return true;
    return complete.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(complete.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (complete.is_set || is_set(complete.yfilter)) leaf_name_data.push_back(complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "complete")
    {
        complete = value;
        complete.value_namespace = name_space;
        complete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "complete")
    {
        complete.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "complete")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::Duration()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"},
    sum{YType::empty, "sum"}
{

    yang_name = "duration"; yang_parent_name = "transaction"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::~Duration()
{
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Connection::Transaction::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Counter()
    :
    flows{YType::empty, "flows"}
        ,
    bytes(nullptr) // presence node
    , packets(nullptr) // presence node
{

    yang_name = "counter"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Counter::~Counter()
{
}

bool Native::Flow::Record::Default::Collect::Counter::has_data() const
{
    if (is_presence_container) return true;
    return flows.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (packets !=  nullptr && packets->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flows.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (packets !=  nullptr && packets->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flows.is_set || is_set(flows.yfilter)) leaf_name_data.push_back(flows.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "packets")
    {
        if(packets == nullptr)
        {
            packets = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Packets>();
        }
        return packets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bytes != nullptr)
    {
        _children["bytes"] = bytes;
    }

    if(packets != nullptr)
    {
        _children["packets"] = packets;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flows")
    {
        flows = value;
        flows.value_namespace = name_space;
        flows.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flows")
    {
        flows.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "packets" || name == "flows")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Bytes()
    :
    long_{YType::empty, "long"}
        ,
    rate(nullptr) // presence node
    , squared(std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Squared>())
    , layer2(std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2>())
{
    squared->parent = this;
    layer2->parent = this;

    yang_name = "bytes"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set
	|| (rate !=  nullptr && rate->has_data())
	|| (squared !=  nullptr && squared->has_data())
	|| (layer2 !=  nullptr && layer2->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| (rate !=  nullptr && rate->has_operation())
	|| (squared !=  nullptr && squared->has_operation())
	|| (layer2 !=  nullptr && layer2->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "squared")
    {
        if(squared == nullptr)
        {
            squared = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Squared>();
        }
        return squared;
    }

    if(child_yang_name == "layer2")
    {
        if(layer2 == nullptr)
        {
            layer2 = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2>();
        }
        return layer2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    if(squared != nullptr)
    {
        _children["squared"] = squared;
    }

    if(layer2 != nullptr)
    {
        _children["layer2"] = layer2;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "squared" || name == "layer2" || name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::~Rate()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per_flow != nullptr)
    {
        _children["per-flow"] = per_flow;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::Squared()
    :
    long_{YType::empty, "long"}
{

    yang_name = "squared"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::~Squared()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "squared";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Squared::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::Layer2()
    :
    long_{YType::empty, "long"}
{

    yang_name = "layer2"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::~Layer2()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::has_data() const
{
    if (is_presence_container) return true;
    return long_.is_set;
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Bytes::Layer2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Packets::Packets()
    :
    dropped{YType::empty, "dropped"},
    long_{YType::empty, "long"}
        ,
    rate(nullptr) // presence node
{

    yang_name = "packets"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Counter::Packets::~Packets()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::has_data() const
{
    if (is_presence_container) return true;
    return dropped.is_set
	|| long_.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dropped.yfilter)
	|| ydk::is_set(long_.yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::Packets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Packets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped.is_set || is_set(dropped.yfilter)) leaf_name_data.push_back(dropped.get_name_leafdata());
    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Packets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Packets::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Packets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rate != nullptr)
    {
        _children["rate"] = rate;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Packets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dropped")
    {
        dropped = value;
        dropped.value_namespace = name_space;
        dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Packets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dropped")
    {
        dropped.yfilter = yfilter;
    }
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "dropped" || name == "long")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Packets::Rate::Rate()
    :
    per_flow(nullptr) // presence node
{

    yang_name = "rate"; yang_parent_name = "packets"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Counter::Packets::Rate::~Rate()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::Rate::has_data() const
{
    if (is_presence_container) return true;
    return (per_flow !=  nullptr && per_flow->has_data());
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::Rate::has_operation() const
{
    return is_set(yfilter)
	|| (per_flow !=  nullptr && per_flow->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Counter::Packets::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Packets::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Packets::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-flow")
    {
        if(per_flow == nullptr)
        {
            per_flow = std::make_shared<Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow>();
        }
        return per_flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Packets::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(per_flow != nullptr)
    {
        _children["per-flow"] = per_flow;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Packets::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Counter::Packets::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-flow")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::PerFlow()
    :
    max{YType::empty, "max"},
    min{YType::empty, "min"}
{

    yang_name = "per-flow"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::~PerFlow()
{
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set
	|| min.is_set;
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Counter::Packets::Rate::PerFlow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Datalink()
    :
    destination_vlan_id{YType::empty, "destination-vlan-id"},
    ethertype{YType::empty, "ethertype"},
    vlan{YType::enumeration, "vlan"},
    source_vlan_id{YType::empty, "source-vlan-id"}
        ,
    dot1q(std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Dot1q>())
    , mac(std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac>())
{
    dot1q->parent = this;
    mac->parent = this;

    yang_name = "datalink"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::~Datalink()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::has_data() const
{
    if (is_presence_container) return true;
    return destination_vlan_id.is_set
	|| ethertype.is_set
	|| vlan.is_set
	|| source_vlan_id.is_set
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Flow::Record::Default::Collect::Datalink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_vlan_id.yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(source_vlan_id.yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Datalink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datalink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_vlan_id.is_set || is_set(destination_vlan_id.yfilter)) leaf_name_data.push_back(destination_vlan_id.get_name_leafdata());
    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (source_vlan_id.is_set || is_set(source_vlan_id.yfilter)) leaf_name_data.push_back(source_vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Dot1q>();
        }
        return dot1q;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1q != nullptr)
    {
        _children["dot1q"] = dot1q;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-vlan-id")
    {
        destination_vlan_id = value;
        destination_vlan_id.value_namespace = name_space;
        destination_vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-vlan-id")
    {
        source_vlan_id = value;
        source_vlan_id.value_namespace = name_space;
        source_vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Datalink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-vlan-id")
    {
        destination_vlan_id.yfilter = yfilter;
    }
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "source-vlan-id")
    {
        source_vlan_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Datalink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1q" || name == "mac" || name == "destination-vlan-id" || name == "ethertype" || name == "vlan" || name == "source-vlan-id")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Dot1q::Dot1q()
    :
    priority{YType::empty, "priority"}
        ,
    vlan(std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan>())
{
    vlan->parent = this;

    yang_name = "dot1q"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::Dot1q::~Dot1q()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Dot1q::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Flow::Record::Default::Collect::Datalink::Dot1q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Datalink::Dot1q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::Dot1q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::Dot1q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::Dot1q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::Dot1q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Datalink::Dot1q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Datalink::Dot1q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "priority")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::Vlan()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vlan"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::~Vlan()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Datalink::Dot1q::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Mac()
    :
    destination(std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Destination>())
    , source(std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "mac"; yang_parent_name = "datalink"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::Mac::~Mac()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Datalink::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Destination()
    :
    address(std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address>())
{
    address->parent = this;

    yang_name = "destination"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "address"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::~Address()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Destination::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Source()
    :
    address(std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address>())
{
    address->parent = this;

    yang_name = "source"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Source::~Source()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Source::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Source::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Datalink::Mac::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::Mac::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::Mac::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::Mac::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::Address()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "address"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::~Address()
{
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Datalink::Mac::Source::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Flow_::Flow_()
    :
    direction{YType::empty, "direction"},
    sampler{YType::empty, "sampler"},
    end_reason{YType::empty, "end-reason"}
        ,
    cts(std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Cts>())
    , observation(std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Observation>())
{
    cts->parent = this;
    observation->parent = this;

    yang_name = "flow"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Default::Collect::Flow_::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| sampler.is_set
	|| end_reason.is_set
	|| (cts !=  nullptr && cts->has_data())
	|| (observation !=  nullptr && observation->has_data());
}

bool Native::Flow::Record::Default::Collect::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(sampler.yfilter)
	|| ydk::is_set(end_reason.yfilter)
	|| (cts !=  nullptr && cts->has_operation())
	|| (observation !=  nullptr && observation->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (sampler.is_set || is_set(sampler.yfilter)) leaf_name_data.push_back(sampler.get_name_leafdata());
    if (end_reason.is_set || is_set(end_reason.yfilter)) leaf_name_data.push_back(end_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "observation")
    {
        if(observation == nullptr)
        {
            observation = std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Observation>();
        }
        return observation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cts != nullptr)
    {
        _children["cts"] = cts;
    }

    if(observation != nullptr)
    {
        _children["observation"] = observation;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sampler")
    {
        sampler = value;
        sampler.value_namespace = name_space;
        sampler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-reason")
    {
        end_reason = value;
        end_reason.value_namespace = name_space;
        end_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "sampler")
    {
        sampler.yfilter = yfilter;
    }
    if(value_path == "end-reason")
    {
        end_reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cts" || name == "observation" || name == "direction" || name == "sampler" || name == "end-reason")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Flow_::Cts::Cts()
    :
    destination(std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Cts::Destination>())
    , source(std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Cts::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "cts"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Flow_::Cts::~Cts()
{
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Flow_::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Flow_::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Flow_::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Cts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Default::Collect::Flow_::Cts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Flow_::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Flow_::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Flow_::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::Destination()
    :
    group_tag{YType::empty, "group-tag"}
{

    yang_name = "destination"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::has_data() const
{
    if (is_presence_container) return true;
    return group_tag.is_set;
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_tag.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_tag.is_set || is_set(group_tag.yfilter)) leaf_name_data.push_back(group_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
        group_tag.value_namespace = name_space;
        group_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-tag")
    {
        group_tag.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-tag")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Flow_::Cts::Source::Source()
    :
    group_tag{YType::empty, "group-tag"}
{

    yang_name = "source"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Flow_::Cts::Source::~Source()
{
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::Source::has_data() const
{
    if (is_presence_container) return true;
    return group_tag.is_set;
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_tag.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Flow_::Cts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Flow_::Cts::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_tag.is_set || is_set(group_tag.yfilter)) leaf_name_data.push_back(group_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Flow_::Cts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Flow_::Cts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Flow_::Cts::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-tag")
    {
        group_tag = value;
        group_tag.value_namespace = name_space;
        group_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Flow_::Cts::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-tag")
    {
        group_tag.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Flow_::Cts::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-tag")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Flow_::Observation::Observation()
    :
    point{YType::empty, "point"}
{

    yang_name = "observation"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Flow_::Observation::~Observation()
{
}

bool Native::Flow::Record::Default::Collect::Flow_::Observation::has_data() const
{
    if (is_presence_container) return true;
    return point.is_set;
}

bool Native::Flow::Record::Default::Collect::Flow_::Observation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(point.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Flow_::Observation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "observation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Flow_::Observation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (point.is_set || is_set(point.yfilter)) leaf_name_data.push_back(point.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Flow_::Observation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Flow_::Observation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Flow_::Observation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "point")
    {
        point = value;
        point.value_namespace = name_space;
        point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Flow_::Observation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "point")
    {
        point.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Flow_::Observation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "point")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Interface::Interface()
    :
    input(nullptr) // presence node
    , output(nullptr) // presence node
{

    yang_name = "interface"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Interface::~Interface()
{
}

bool Native::Flow::Record::Default::Collect::Interface::has_data() const
{
    if (is_presence_container) return true;
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Flow::Record::Default::Collect::Interface::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Flow::Record::Default::Collect::Interface::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Flow::Record::Default::Collect::Interface::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(input != nullptr)
    {
        _children["input"] = input;
    }

    if(output != nullptr)
    {
        _children["output"] = output;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Interface::Input::Input()
    :
    snmp{YType::empty, "snmp"}
{

    yang_name = "input"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Interface::Input::~Input()
{
}

bool Native::Flow::Record::Default::Collect::Interface::Input::has_data() const
{
    if (is_presence_container) return true;
    return snmp.is_set;
}

bool Native::Flow::Record::Default::Collect::Interface::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Interface::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Interface::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Interface::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Interface::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Interface::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Interface::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Interface::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Interface::Output::Output()
    :
    snmp{YType::empty, "snmp"}
{

    yang_name = "output"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Interface::Output::~Output()
{
}

bool Native::Flow::Record::Default::Collect::Interface::Output::has_data() const
{
    if (is_presence_container) return true;
    return snmp.is_set;
}

bool Native::Flow::Record::Default::Collect::Interface::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Interface::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Interface::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Interface::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Interface::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Interface::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Interface::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Interface::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Ipv4()
    :
    dscp{YType::empty, "dscp"},
    header_length{YType::empty, "header-length"},
    id{YType::empty, "id"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    tos{YType::empty, "tos"},
    version{YType::empty, "version"}
        ,
    destination(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Destination>())
    , fragmentation(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Fragmentation>())
    , length(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Length>())
    , option(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Option>())
    , section(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Section>())
    , source(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Source>())
    , total_length(nullptr) // presence node
    , ttl(nullptr) // presence node
{
    destination->parent = this;
    fragmentation->parent = this;
    length->parent = this;
    option->parent = this;
    section->parent = this;
    source->parent = this;

    yang_name = "ipv4"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| header_length.is_set
	|| id.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| tos.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (total_length !=  nullptr && total_length->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(header_length.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (total_length !=  nullptr && total_length->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.yfilter)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Length>();
        }
        return length;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Option>();
        }
        return option;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Source>();
        }
        return source;
    }

    if(child_yang_name == "total-length")
    {
        if(total_length == nullptr)
        {
            total_length = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::TotalLength>();
        }
        return total_length;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(fragmentation != nullptr)
    {
        _children["fragmentation"] = fragmentation;
    }

    if(length != nullptr)
    {
        _children["length"] = length;
    }

    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(section != nullptr)
    {
        _children["section"] = section;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(total_length != nullptr)
    {
        _children["total-length"] = total_length;
    }

    if(ttl != nullptr)
    {
        _children["ttl"] = ttl;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-length")
    {
        header_length = value;
        header_length.value_namespace = name_space;
        header_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "header-length")
    {
        header_length.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "fragmentation" || name == "length" || name == "option" || name == "section" || name == "source" || name == "total-length" || name == "ttl" || name == "dscp" || name == "header-length" || name == "id" || name == "precedence" || name == "protocol" || name == "tos" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Destination::Destination()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    offset{YType::empty, "offset"}
{

    yang_name = "fragmentation"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "offset")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
        ,
    total(nullptr) // presence node
{

    yang_name = "length"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Length::~Length()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Length::has_data() const
{
    if (is_presence_container) return true;
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv4::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.yfilter)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header")
    {
        header = value;
        header.value_namespace = name_space;
        header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header")
    {
        header.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv4::Length::Total::~Total()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Length::Total::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Length::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Length::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Length::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Length::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Length::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Option::Option()
    :
    map{YType::empty, "map"}
{

    yang_name = "option"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Option::~Option()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Option::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Section::Header>())
    , payload(std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Section::Payload>())
{
    header->parent = this;
    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Section::~Section()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(payload != nullptr)
    {
        _children["payload"] = payload;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Ipv4::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{

    yang_name = "header"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Section::Header::~Header()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::Header::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Section::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Section::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Section::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Source::Source()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv4::Source::~Source()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::TotalLength::TotalLength()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total-length"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv4::TotalLength::~TotalLength()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::TotalLength::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::TotalLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::TotalLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::TotalLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::TotalLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::TotalLength::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::TotalLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::TotalLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::TotalLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv4::Ttl::Ttl()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "ttl"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv4::Ttl::~Ttl()
{
}

bool Native::Flow::Record::Default::Collect::Ipv4::Ttl::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv4::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv4::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv4::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv4::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv4::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv4::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv4::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv4::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Ipv6()
    :
    dscp{YType::empty, "dscp"},
    flow_label{YType::empty, "flow-label"},
    next_header{YType::empty, "next-header"},
    payload_length{YType::empty, "payload-length"},
    precedence{YType::empty, "precedence"},
    protocol{YType::empty, "protocol"},
    traffic_class{YType::empty, "traffic-class"},
    version{YType::empty, "version"}
        ,
    destination(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Destination>())
    , extension(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Extension>())
    , fragmentation(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Fragmentation>())
    , hop_limit(nullptr) // presence node
    , length(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Length>())
    , section(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Section>())
    , source(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Source>())
{
    destination->parent = this;
    extension->parent = this;
    fragmentation->parent = this;
    length->parent = this;
    section->parent = this;
    source->parent = this;

    yang_name = "ipv6"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| flow_label.is_set
	|| next_header.is_set
	|| payload_length.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| traffic_class.is_set
	|| version.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (extension !=  nullptr && extension->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (hop_limit !=  nullptr && hop_limit->has_data())
	|| (length !=  nullptr && length->has_data())
	|| (section !=  nullptr && section->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(next_header.yfilter)
	|| ydk::is_set(payload_length.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (extension !=  nullptr && extension->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (hop_limit !=  nullptr && hop_limit->has_operation())
	|| (length !=  nullptr && length->has_operation())
	|| (section !=  nullptr && section->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (next_header.is_set || is_set(next_header.yfilter)) leaf_name_data.push_back(next_header.get_name_leafdata());
    if (payload_length.is_set || is_set(payload_length.yfilter)) leaf_name_data.push_back(payload_length.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "extension")
    {
        if(extension == nullptr)
        {
            extension = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Extension>();
        }
        return extension;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "hop-limit")
    {
        if(hop_limit == nullptr)
        {
            hop_limit = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::HopLimit>();
        }
        return hop_limit;
    }

    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Length>();
        }
        return length;
    }

    if(child_yang_name == "section")
    {
        if(section == nullptr)
        {
            section = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Section>();
        }
        return section;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(extension != nullptr)
    {
        _children["extension"] = extension;
    }

    if(fragmentation != nullptr)
    {
        _children["fragmentation"] = fragmentation;
    }

    if(hop_limit != nullptr)
    {
        _children["hop-limit"] = hop_limit;
    }

    if(length != nullptr)
    {
        _children["length"] = length;
    }

    if(section != nullptr)
    {
        _children["section"] = section;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-header")
    {
        next_header = value;
        next_header.value_namespace = name_space;
        next_header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-length")
    {
        payload_length = value;
        payload_length.value_namespace = name_space;
        payload_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "next-header")
    {
        next_header.yfilter = yfilter;
    }
    if(value_path == "payload-length")
    {
        payload_length.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "extension" || name == "fragmentation" || name == "hop-limit" || name == "length" || name == "section" || name == "source" || name == "dscp" || name == "flow-label" || name == "next-header" || name == "payload-length" || name == "precedence" || name == "protocol" || name == "traffic-class" || name == "version")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Destination::Destination()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::~Mask()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Extension::Extension()
    :
    map{YType::empty, "map"}
{

    yang_name = "extension"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Extension::~Extension()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Extension::has_data() const
{
    if (is_presence_container) return true;
    return map.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Extension::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Extension::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Extension::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Extension::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Extension::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Extension::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Extension::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Extension::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::Fragmentation()
    :
    flags{YType::empty, "flags"},
    id{YType::empty, "id"},
    offset{YType::empty, "offset"}
{

    yang_name = "fragmentation"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::~Fragmentation()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::has_data() const
{
    if (is_presence_container) return true;
    return flags.is_set
	|| id.is_set
	|| offset.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Fragmentation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "id" || name == "offset")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::HopLimit::HopLimit()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "hop-limit"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv6::HopLimit::~HopLimit()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::HopLimit::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::HopLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::HopLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::HopLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::HopLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::HopLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::HopLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::HopLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::HopLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Length::Length()
    :
    header{YType::empty, "header"},
    payload{YType::empty, "payload"}
        ,
    total(nullptr) // presence node
{

    yang_name = "length"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Length::~Length()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Length::has_data() const
{
    if (is_presence_container) return true;
    return header.is_set
	|| payload.is_set
	|| (total !=  nullptr && total->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv6::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header.yfilter)
	|| ydk::is_set(payload.yfilter)
	|| (total !=  nullptr && total->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header.is_set || is_set(header.yfilter)) leaf_name_data.push_back(header.get_name_leafdata());
    if (payload.is_set || is_set(payload.yfilter)) leaf_name_data.push_back(payload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total")
    {
        if(total == nullptr)
        {
            total = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Length::Total>();
        }
        return total;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(total != nullptr)
    {
        _children["total"] = total;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header")
    {
        header = value;
        header.value_namespace = name_space;
        header.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload")
    {
        payload = value;
        payload.value_namespace = name_space;
        payload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header")
    {
        header.yfilter = yfilter;
    }
    if(value_path == "payload")
    {
        payload.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Length::Total::Total()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"}
{

    yang_name = "total"; yang_parent_name = "length"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv6::Length::Total::~Total()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Length::Total::has_data() const
{
    if (is_presence_container) return true;
    return maximum.is_set
	|| minimum.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Length::Total::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Length::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Length::Total::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Length::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Length::Total::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Length::Total::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Length::Total::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Length::Total::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum" || name == "minimum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Section::Section()
    :
    header(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Section::Header>())
    , payload(std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Section::Payload>())
{
    header->parent = this;
    payload->parent = this;

    yang_name = "section"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Section::~Section()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::has_data() const
{
    if (is_presence_container) return true;
    return (header !=  nullptr && header->has_data())
	|| (payload !=  nullptr && payload->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation())
	|| (payload !=  nullptr && payload->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Section::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "section";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Section::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Section::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Section::Header>();
        }
        return header;
    }

    if(child_yang_name == "payload")
    {
        if(payload == nullptr)
        {
            payload = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Section::Payload>();
        }
        return payload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Section::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(header != nullptr)
    {
        _children["header"] = header;
    }

    if(payload != nullptr)
    {
        _children["payload"] = payload;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Section::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Ipv6::Section::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header" || name == "payload")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Section::Header::Header()
    :
    size{YType::uint16, "size"}
{

    yang_name = "header"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Section::Header::~Header()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::Header::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Section::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Section::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Section::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Section::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Section::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Section::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::Payload()
    :
    size{YType::uint16, "size"}
{

    yang_name = "payload"; yang_parent_name = "section"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::~Payload()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "payload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Section::Payload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Source::Source()
    :
    address{YType::empty, "address"}
        ,
    mask(nullptr) // presence node
    , prefix(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Ipv6::Source::~Source()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (mask !=  nullptr && mask->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (mask !=  nullptr && mask->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Source::Mask>();
        }
        return mask;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix" || name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::Mask()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "mask"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::~Mask()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::Prefix()
    :
    minimum_mask{YType::uint8, "minimum-mask"}
{

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return minimum_mask.is_set;
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_mask.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_mask.is_set || is_set(minimum_mask.yfilter)) leaf_name_data.push_back(minimum_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask = value;
        minimum_mask.value_namespace = name_space;
        minimum_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-mask")
    {
        minimum_mask.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Ipv6::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-mask")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Metadata::Metadata()
    :
    clock_rate{YType::empty, "clock-rate"},
    global_session_id{YType::empty, "global-session-id"},
    multi_party_session_id{YType::empty, "multi-party-session-id"}
{

    yang_name = "metadata"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Metadata::~Metadata()
{
}

bool Native::Flow::Record::Default::Collect::Metadata::has_data() const
{
    if (is_presence_container) return true;
    return clock_rate.is_set
	|| global_session_id.is_set
	|| multi_party_session_id.is_set;
}

bool Native::Flow::Record::Default::Collect::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clock_rate.yfilter)
	|| ydk::is_set(global_session_id.yfilter)
	|| ydk::is_set(multi_party_session_id.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Metadata::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clock_rate.is_set || is_set(clock_rate.yfilter)) leaf_name_data.push_back(clock_rate.get_name_leafdata());
    if (global_session_id.is_set || is_set(global_session_id.yfilter)) leaf_name_data.push_back(global_session_id.get_name_leafdata());
    if (multi_party_session_id.is_set || is_set(multi_party_session_id.yfilter)) leaf_name_data.push_back(multi_party_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clock-rate")
    {
        clock_rate = value;
        clock_rate.value_namespace = name_space;
        clock_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-session-id")
    {
        global_session_id = value;
        global_session_id.value_namespace = name_space;
        global_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id = value;
        multi_party_session_id.value_namespace = name_space;
        multi_party_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clock-rate")
    {
        clock_rate.yfilter = yfilter;
    }
    if(value_path == "global-session-id")
    {
        global_session_id.yfilter = yfilter;
    }
    if(value_path == "multi-party-session-id")
    {
        multi_party_session_id.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate" || name == "global-session-id" || name == "multi-party-session-id")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Monitor::Monitor()
    :
    event{YType::empty, "event"}
{

    yang_name = "monitor"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Monitor::~Monitor()
{
}

bool Native::Flow::Record::Default::Collect::Monitor::has_data() const
{
    if (is_presence_container) return true;
    return event.is_set;
}

bool Native::Flow::Record::Default::Collect::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Mpls()
    :
    label(std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label>())
{
    label->parent = this;

    yang_name = "mpls"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::~Mpls()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return (label !=  nullptr && label->has_data());
}

bool Native::Flow::Record::Default::Collect::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label != nullptr)
    {
        _children["label"] = label;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Label::Label()
    :
    one(std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::One>())
    , two(std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Two>())
    , three(std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Three>())
    , four(std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Four>())
    , five(std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Five>())
    , six(std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Six>())
{
    one->parent = this;
    two->parent = this;
    three->parent = this;
    four->parent = this;
    five->parent = this;
    six->parent = this;

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::Label::~Label()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::has_data() const
{
    if (is_presence_container) return true;
    return (one !=  nullptr && one->has_data())
	|| (two !=  nullptr && two->has_data())
	|| (three !=  nullptr && three->has_data())
	|| (four !=  nullptr && four->has_data())
	|| (five !=  nullptr && five->has_data())
	|| (six !=  nullptr && six->has_data());
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (two !=  nullptr && two->has_operation())
	|| (three !=  nullptr && three->has_operation())
	|| (four !=  nullptr && four->has_operation())
	|| (five !=  nullptr && five->has_operation())
	|| (six !=  nullptr && six->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::One>();
        }
        return one;
    }

    if(child_yang_name == "two")
    {
        if(two == nullptr)
        {
            two = std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Two>();
        }
        return two;
    }

    if(child_yang_name == "three")
    {
        if(three == nullptr)
        {
            three = std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Three>();
        }
        return three;
    }

    if(child_yang_name == "four")
    {
        if(four == nullptr)
        {
            four = std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Four>();
        }
        return four;
    }

    if(child_yang_name == "five")
    {
        if(five == nullptr)
        {
            five = std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Five>();
        }
        return five;
    }

    if(child_yang_name == "six")
    {
        if(six == nullptr)
        {
            six = std::make_shared<Native::Flow::Record::Default::Collect::Mpls::Label::Six>();
        }
        return six;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(one != nullptr)
    {
        _children["one"] = one;
    }

    if(two != nullptr)
    {
        _children["two"] = two;
    }

    if(three != nullptr)
    {
        _children["three"] = three;
    }

    if(four != nullptr)
    {
        _children["four"] = four;
    }

    if(five != nullptr)
    {
        _children["five"] = five;
    }

    if(six != nullptr)
    {
        _children["six"] = six;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "two" || name == "three" || name == "four" || name == "five" || name == "six")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Label::One::One()
    :
    details{YType::empty, "details"},
    exp{YType::empty, "exp"},
    ttl{YType::empty, "ttl"},
    type{YType::empty, "type"}
{

    yang_name = "one"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::Label::One::~One()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::One::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set
	|| exp.is_set
	|| ttl.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::One::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter)
	|| ydk::is_set(exp.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Mpls::Label::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::Label::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());
    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::Label::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::Label::One::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::Label::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Mpls::Label::One::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details" || name == "exp" || name == "ttl" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Label::Two::Two()
    :
    details{YType::empty, "details"}
{

    yang_name = "two"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::Label::Two::~Two()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Two::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Two::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Mpls::Label::Two::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::Label::Two::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::Label::Two::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::Label::Two::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Two::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Two::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Two::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Label::Three::Three()
    :
    details{YType::empty, "details"}
{

    yang_name = "three"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::Label::Three::~Three()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Three::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Three::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Mpls::Label::Three::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "three";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::Label::Three::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::Label::Three::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::Label::Three::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Three::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Three::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Three::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Label::Four::Four()
    :
    details{YType::empty, "details"}
{

    yang_name = "four"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::Label::Four::~Four()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Four::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Four::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Mpls::Label::Four::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::Label::Four::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::Label::Four::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::Label::Four::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Four::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Four::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Four::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Label::Five::Five()
    :
    details{YType::empty, "details"}
{

    yang_name = "five"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::Label::Five::~Five()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Five::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Five::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Mpls::Label::Five::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "five";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::Label::Five::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::Label::Five::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::Label::Five::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Five::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Five::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Five::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Mpls::Label::Six::Six()
    :
    details{YType::empty, "details"}
{

    yang_name = "six"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Mpls::Label::Six::~Six()
{
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Six::has_data() const
{
    if (is_presence_container) return true;
    return details.is_set;
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Six::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(details.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Mpls::Label::Six::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "six";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Mpls::Label::Six::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (details.is_set || is_set(details.yfilter)) leaf_name_data.push_back(details.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Mpls::Label::Six::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Mpls::Label::Six::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Six::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "details")
    {
        details = value;
        details.value_namespace = name_space;
        details.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Mpls::Label::Six::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "details")
    {
        details.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Mpls::Label::Six::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "details")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Network::Network()
    :
    delay(std::make_shared<Native::Flow::Record::Default::Collect::Network::Delay>())
{
    delay->parent = this;

    yang_name = "network"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Network::~Network()
{
}

bool Native::Flow::Record::Default::Collect::Network::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Flow::Record::Default::Collect::Network::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Flow::Record::Default::Collect::Network::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Network::Delay::Delay()
    :
    sample{YType::empty, "sample"},
    sum{YType::empty, "sum"}
{

    yang_name = "delay"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Network::Delay::~Delay()
{
}

bool Native::Flow::Record::Default::Collect::Network::Delay::has_data() const
{
    if (is_presence_container) return true;
    return sample.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Network::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Network::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Network::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample.is_set || is_set(sample.yfilter)) leaf_name_data.push_back(sample.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Network::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Network::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Network::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample")
    {
        sample = value;
        sample.value_namespace = name_space;
        sample.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Network::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample")
    {
        sample.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Network::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Pfr()
    :
    label(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Label>())
    , one_way_delay(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::OneWayDelay>())
    , service(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Service>())
    , site(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site>())
{
    label->parent = this;
    one_way_delay->parent = this;
    service->parent = this;
    site->parent = this;

    yang_name = "pfr"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::~Pfr()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::has_data() const
{
    if (is_presence_container) return true;
    return (label !=  nullptr && label->has_data())
	|| (one_way_delay !=  nullptr && one_way_delay->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (site !=  nullptr && site->has_data());
}

bool Native::Flow::Record::Default::Collect::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| (label !=  nullptr && label->has_operation())
	|| (one_way_delay !=  nullptr && one_way_delay->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (site !=  nullptr && site->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Label>();
        }
        return label;
    }

    if(child_yang_name == "one-way-delay")
    {
        if(one_way_delay == nullptr)
        {
            one_way_delay = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::OneWayDelay>();
        }
        return one_way_delay;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Service>();
        }
        return service;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site>();
        }
        return site;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(label != nullptr)
    {
        _children["label"] = label;
    }

    if(one_way_delay != nullptr)
    {
        _children["one-way-delay"] = one_way_delay;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(site != nullptr)
    {
        _children["site"] = site;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "one-way-delay" || name == "service" || name == "site")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Label::Label()
    :
    identifier{YType::empty, "identifier"}
{

    yang_name = "label"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Label::~Label()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Label::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set;
}

bool Native::Flow::Record::Default::Collect::Pfr::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Pfr::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::OneWayDelay()
    :
    samples{YType::empty, "samples"},
    sum{YType::empty, "sum"}
{

    yang_name = "one-way-delay"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::~OneWayDelay()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::has_data() const
{
    if (is_presence_container) return true;
    return samples.is_set
	|| sum.is_set;
}

bool Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(samples.yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-way-delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (samples.is_set || is_set(samples.yfilter)) leaf_name_data.push_back(samples.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "samples")
    {
        samples = value;
        samples.value_namespace = name_space;
        samples.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "samples")
    {
        samples.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::OneWayDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "samples" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Service::Service()
    :
    provider{YType::empty, "provider"},
    tag{YType::empty, "tag"},
    identifier{YType::empty, "identifier"}
{

    yang_name = "service"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Service::~Service()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Service::has_data() const
{
    if (is_presence_container) return true;
    return provider.is_set
	|| tag.is_set
	|| identifier.is_set;
}

bool Native::Flow::Record::Default::Collect::Pfr::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(provider.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(identifier.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Pfr::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (provider.is_set || is_set(provider.yfilter)) leaf_name_data.push_back(provider.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "provider")
    {
        provider = value;
        provider.value_namespace = name_space;
        provider.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "provider")
    {
        provider.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provider" || name == "tag" || name == "identifier")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Site()
    :
    destination(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination>())
    , source(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "site"; yang_parent_name = "pfr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::~Site()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Pfr::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Destination()
    :
    id(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id>())
    , prefix(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "destination"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::~Id()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
        ,
    mask(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Destination::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::Source()
    :
    id(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id>())
    , prefix(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix>())
{
    id->parent = this;
    prefix->parent = this;

    yang_name = "source"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::~Source()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::has_data() const
{
    if (is_presence_container) return true;
    return (id !=  nullptr && id->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id>();
        }
        return id;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(id != nullptr)
    {
        _children["id"] = id;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "prefix")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::Id()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "id"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::~Id()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Prefix()
    :
    ipv4{YType::empty, "ipv4"}
        ,
    mask(std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask>())
{
    mask->parent = this;

    yang_name = "prefix"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::~Prefix()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| (mask !=  nullptr && mask->has_data());
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (mask !=  nullptr && mask->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mask")
    {
        if(mask == nullptr)
        {
            mask = std::make_shared<Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask>();
        }
        return mask;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mask != nullptr)
    {
        _children["mask"] = mask;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::Mask()
    :
    ipv4{YType::empty, "ipv4"}
{

    yang_name = "mask"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::~Mask()
{
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set;
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mask";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Pfr::Site::Source::Prefix::Mask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Policy::Policy()
    :
    performance_monitor(std::make_shared<Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor>())
    , qos(std::make_shared<Native::Flow::Record::Default::Collect::Policy::Qos>())
{
    performance_monitor->parent = this;
    qos->parent = this;

    yang_name = "policy"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Policy::~Policy()
{
}

bool Native::Flow::Record::Default::Collect::Policy::has_data() const
{
    if (is_presence_container) return true;
    return (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool Native::Flow::Record::Default::Collect::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Flow::Record::Default::Collect::Policy::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(performance_monitor != nullptr)
    {
        _children["performance-monitor"] = performance_monitor;
    }

    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "performance-monitor" || name == "qos")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::PerformanceMonitor()
    :
    classification(std::make_shared<Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification>())
{
    classification->parent = this;

    yang_name = "performance-monitor"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::has_data() const
{
    if (is_presence_container) return true;
    return (classification !=  nullptr && classification->has_data());
}

bool Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification>();
        }
        return classification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classification != nullptr)
    {
        _children["classification"] = classification;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "performance-monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::~Classification()
{
}

bool Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::has_data() const
{
    if (is_presence_container) return true;
    return hierarchy.is_set;
}

bool Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Policy::PerformanceMonitor::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Policy::Qos::Qos()
    :
    classification(std::make_shared<Native::Flow::Record::Default::Collect::Policy::Qos::Classification>())
    , queue(std::make_shared<Native::Flow::Record::Default::Collect::Policy::Qos::Queue>())
{
    classification->parent = this;
    queue->parent = this;

    yang_name = "qos"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Policy::Qos::~Qos()
{
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::has_data() const
{
    if (is_presence_container) return true;
    return (classification !=  nullptr && classification->has_data())
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (classification !=  nullptr && classification->has_operation())
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Policy::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Policy::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Policy::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Flow::Record::Default::Collect::Policy::Qos::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Flow::Record::Default::Collect::Policy::Qos::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Policy::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(classification != nullptr)
    {
        _children["classification"] = classification;
    }

    if(queue != nullptr)
    {
        _children["queue"] = queue;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Policy::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Policy::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "classification" || name == "queue")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Policy::Qos::Classification::Classification()
    :
    hierarchy{YType::empty, "hierarchy"}
{

    yang_name = "classification"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Policy::Qos::Classification::~Classification()
{
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::Classification::has_data() const
{
    if (is_presence_container) return true;
    return hierarchy.is_set;
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::Classification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hierarchy.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Policy::Qos::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Policy::Qos::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.yfilter)) leaf_name_data.push_back(hierarchy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Policy::Qos::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Policy::Qos::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Policy::Qos::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
        hierarchy.value_namespace = name_space;
        hierarchy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Policy::Qos::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hierarchy")
    {
        hierarchy.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hierarchy")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Policy::Qos::Queue::Queue()
    :
    drops{YType::empty, "drops"},
    index_{YType::empty, "index"}
{

    yang_name = "queue"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Policy::Qos::Queue::~Queue()
{
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::Queue::has_data() const
{
    if (is_presence_container) return true;
    return drops.is_set
	|| index_.is_set;
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drops.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Policy::Qos::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Policy::Qos::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drops.is_set || is_set(drops.yfilter)) leaf_name_data.push_back(drops.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Policy::Qos::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Policy::Qos::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Policy::Qos::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drops")
    {
        drops = value;
        drops.value_namespace = name_space;
        drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Policy::Qos::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drops")
    {
        drops.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Policy::Qos::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drops" || name == "index")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Routing()
    :
    is_multicast{YType::empty, "is-multicast"}
        ,
    destination(std::make_shared<Native::Flow::Record::Default::Collect::Routing::Destination>())
    , forwarding_status(nullptr) // presence node
    , next_hop(std::make_shared<Native::Flow::Record::Default::Collect::Routing::NextHop>())
    , pw(std::make_shared<Native::Flow::Record::Default::Collect::Routing::Pw>())
    , source(std::make_shared<Native::Flow::Record::Default::Collect::Routing::Source>())
    , vrf(std::make_shared<Native::Flow::Record::Default::Collect::Routing::Vrf>())
{
    destination->parent = this;
    next_hop->parent = this;
    pw->parent = this;
    source->parent = this;
    vrf->parent = this;

    yang_name = "routing"; yang_parent_name = "collect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Routing::~Routing()
{
}

bool Native::Flow::Record::Default::Collect::Routing::has_data() const
{
    if (is_presence_container) return true;
    return is_multicast.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (forwarding_status !=  nullptr && forwarding_status->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (pw !=  nullptr && pw->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_multicast.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (forwarding_status !=  nullptr && forwarding_status->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (pw !=  nullptr && pw->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast.is_set || is_set(is_multicast.yfilter)) leaf_name_data.push_back(is_multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "forwarding-status")
    {
        if(forwarding_status == nullptr)
        {
            forwarding_status = std::make_shared<Native::Flow::Record::Default::Collect::Routing::ForwardingStatus>();
        }
        return forwarding_status;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Flow::Record::Default::Collect::Routing::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Pw>();
        }
        return pw;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Source>();
        }
        return source;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(forwarding_status != nullptr)
    {
        _children["forwarding-status"] = forwarding_status;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-multicast")
    {
        is_multicast = value;
        is_multicast.value_namespace = name_space;
        is_multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-multicast")
    {
        is_multicast.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "forwarding-status" || name == "next-hop" || name == "pw" || name == "source" || name == "vrf" || name == "is-multicast")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Destination::Destination()
    :
    traffic_index{YType::empty, "traffic-index"}
        ,
    as(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Routing::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::has_data() const
{
    if (is_presence_container) return true;
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Destination::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(as != nullptr)
    {
        _children["as"] = as;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Destination::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
        ,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Routing::Destination::As::~As()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::As::has_data() const
{
    if (is_presence_container) return true;
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::Destination::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Destination::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Destination::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Destination::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Destination::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::Destination::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::Destination::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::ForwardingStatus()
    :
    reason{YType::empty, "reason"}
{

    yang_name = "forwarding-status"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::~ForwardingStatus()
{
}

bool Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::has_data() const
{
    if (is_presence_container) return true;
    return reason.is_set;
}

bool Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::ForwardingStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reason")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::NextHop::NextHop()
    :
    address(std::make_shared<Native::Flow::Record::Default::Collect::Routing::NextHop::Address>())
{
    address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Routing::NextHop::~NextHop()
{
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Flow::Record::Default::Collect::Routing::NextHop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Address()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Routing::NextHop::Address::~Address()
{
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::NextHop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::NextHop::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::NextHop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::NextHop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::Ipv4()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return bgp.is_set;
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::Ipv6()
    :
    bgp{YType::empty, "bgp"}
{

    yang_name = "ipv6"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return bgp.is_set;
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::NextHop::Address::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Pw::Pw()
    :
    destination(std::make_shared<Native::Flow::Record::Default::Collect::Routing::Pw::Destination>())
{
    destination->parent = this;

    yang_name = "pw"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Routing::Pw::~Pw()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Pw::has_data() const
{
    if (is_presence_container) return true;
    return (destination !=  nullptr && destination->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::Pw::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Pw::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Default::Collect::Routing::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Default::Collect::Routing::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Pw::Destination::Destination()
    :
    address{YType::empty, "address"}
{

    yang_name = "destination"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Routing::Pw::Destination::~Destination()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Pw::Destination::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool Native::Flow::Record::Default::Collect::Routing::Pw::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Routing::Pw::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Pw::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Pw::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Pw::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Pw::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::Pw::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::Pw::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Source::Source()
    :
    traffic_index{YType::empty, "traffic-index"}
        ,
    as(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Flow::Record::Default::Collect::Routing::Source::~Source()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Source::has_data() const
{
    if (is_presence_container) return true;
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Source::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(as != nullptr)
    {
        _children["as"] = as;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Source::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
        ,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Routing::Source::As::~As()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Source::As::has_data() const
{
    if (is_presence_container) return true;
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Default::Collect::Routing::Source::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Default::Collect::Routing::Source::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Source::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Source::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Default::Collect::Routing::Source::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Source::As::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Source::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::Source::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::Source::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Default::Collect::Routing::Source::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::all {0, "all"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket1 {1, "bucket1"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket2 {2, "bucket2"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket3 {3, "bucket3"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket4 {4, "bucket4"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket5 {5, "bucket5"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket6 {6, "bucket6"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::bucket7 {7, "bucket7"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Connection::Delay::Response::ToServer::Histogram::late {8, "late"};

const Enum::YLeaf Native::Flow::Record::Default::Collect::Datalink::Vlan::input {0, "input"};
const Enum::YLeaf Native::Flow::Record::Default::Collect::Datalink::Vlan::output {1, "output"};


}
}

