
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_6.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_8.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Flow::Record::Match::Routing::Pw::Pw()
    :
    destination(std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>())
{
    destination->parent = this;

    yang_name = "pw"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Pw::~Pw()
{
}

bool Native::Flow::Record::Match::Routing::Pw::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::Flow::Record::Match::Routing::Pw::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Record::Match::Routing::Pw::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Routing::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Routing::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Pw::Destination::Destination()
    :
    address{YType::empty, "address"}
{

    yang_name = "destination"; yang_parent_name = "pw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Pw::Destination::~Destination()
{
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_data() const
{
    return address.is_set;
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Pw::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Pw::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Pw::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Pw::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Routing::Pw::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Pw::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Pw::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::Source()
    :
    traffic_index{YType::empty, "traffic-index"}
    	,
    as(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Source::~Source()
{
}

bool Native::Flow::Record::Match::Routing::Source::has_data() const
{
    return traffic_index.is_set
	|| (as !=  nullptr && as->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_index.yfilter)
	|| (as !=  nullptr && as->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_index.is_set || is_set(traffic_index.yfilter)) leaf_name_data.push_back(traffic_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Record::Match::Routing::Source::As>();
        }
        return as;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(as != nullptr)
    {
        children["as"] = as;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-index")
    {
        traffic_index = value;
        traffic_index.value_namespace = name_space;
        traffic_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-index")
    {
        traffic_index.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "traffic-index")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::As::As()
    :
    as4_octet{YType::empty, "as4-octet"}
    	,
    peer(nullptr) // presence node
{

    yang_name = "as"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Source::As::~As()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::has_data() const
{
    return as4_octet.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Flow::Record::Match::Routing::Source::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as4_octet.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Flow::Record::Match::Routing::Source::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as4_octet.is_set || is_set(as4_octet.yfilter)) leaf_name_data.push_back(as4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Flow::Record::Match::Routing::Source::As::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Flow::Record::Match::Routing::Source::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as4-octet")
    {
        as4_octet = value;
        as4_octet.value_namespace = name_space;
        as4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as4-octet")
    {
        as4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "as4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Source::As::Peer::Peer()
    :
    peer4_octet{YType::empty, "peer4-octet"}
{

    yang_name = "peer"; yang_parent_name = "as"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Source::As::Peer::~Peer()
{
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_data() const
{
    return peer4_octet.is_set;
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer4_octet.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Source::As::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Source::As::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer4_octet.is_set || is_set(peer4_octet.yfilter)) leaf_name_data.push_back(peer4_octet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Source::As::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Source::As::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Routing::Source::As::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet = value;
        peer4_octet.value_namespace = name_space;
        peer4_octet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Routing::Source::As::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer4-octet")
    {
        peer4_octet.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Routing::Source::As::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer4-octet")
        return true;
    return false;
}

Native::Flow::Record::Match::Routing::Vrf::Vrf()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "vrf"; yang_parent_name = "routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Routing::Vrf::~Vrf()
{
}

bool Native::Flow::Record::Match::Routing::Vrf::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Flow::Record::Match::Routing::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Flow::Record::Match::Routing::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Routing::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Routing::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Routing::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Routing::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Flow::Record::Match::Routing::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Flow::Record::Match::Routing::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Services()
    :
    waas(std::make_shared<Native::Flow::Record::Match::Services::Waas>())
{
    waas->parent = this;

    yang_name = "services"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Services::~Services()
{
}

bool Native::Flow::Record::Match::Services::has_data() const
{
    return (waas !=  nullptr && waas->has_data());
}

bool Native::Flow::Record::Match::Services::has_operation() const
{
    return is_set(yfilter)
	|| (waas !=  nullptr && waas->has_operation());
}

std::string Native::Flow::Record::Match::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        if(waas == nullptr)
        {
            waas = std::make_shared<Native::Flow::Record::Match::Services::Waas>();
        }
        return waas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(waas != nullptr)
    {
        children["waas"] = waas;
    }

    return children;
}

void Native::Flow::Record::Match::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Waas::Waas()
    :
    passthrough_reason{YType::empty, "passthrough-reason"}
    	,
    segment(nullptr) // presence node
{

    yang_name = "waas"; yang_parent_name = "services"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Services::Waas::~Waas()
{
}

bool Native::Flow::Record::Match::Services::Waas::has_data() const
{
    return passthrough_reason.is_set
	|| (segment !=  nullptr && segment->has_data());
}

bool Native::Flow::Record::Match::Services::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passthrough_reason.yfilter)
	|| (segment !=  nullptr && segment->has_operation());
}

std::string Native::Flow::Record::Match::Services::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passthrough_reason.is_set || is_set(passthrough_reason.yfilter)) leaf_name_data.push_back(passthrough_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        if(segment == nullptr)
        {
            segment = std::make_shared<Native::Flow::Record::Match::Services::Waas::Segment>();
        }
        return segment;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(segment != nullptr)
    {
        children["segment"] = segment;
    }

    return children;
}

void Native::Flow::Record::Match::Services::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason = value;
        passthrough_reason.value_namespace = name_space;
        passthrough_reason.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Services::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passthrough-reason")
    {
        passthrough_reason.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Services::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "passthrough-reason")
        return true;
    return false;
}

Native::Flow::Record::Match::Services::Waas::Segment::Segment()
    :
    account_on_resolution{YType::empty, "account-on-resolution"}
{

    yang_name = "segment"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Services::Waas::Segment::~Segment()
{
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_data() const
{
    return account_on_resolution.is_set;
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(account_on_resolution.yfilter);
}

std::string Native::Flow::Record::Match::Services::Waas::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Services::Waas::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (account_on_resolution.is_set || is_set(account_on_resolution.yfilter)) leaf_name_data.push_back(account_on_resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Services::Waas::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Services::Waas::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Services::Waas::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution = value;
        account_on_resolution.value_namespace = name_space;
        account_on_resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Services::Waas::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "account-on-resolution")
    {
        account_on_resolution.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Services::Waas::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-on-resolution")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Timestamp()
    :
    absolute(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>())
{
    absolute->parent = this;

    yang_name = "timestamp"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Timestamp::~Timestamp()
{
}

bool Native::Flow::Record::Match::Timestamp::has_data() const
{
    return (absolute !=  nullptr && absolute->has_data());
}

bool Native::Flow::Record::Match::Timestamp::has_operation() const
{
    return is_set(yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::Flow::Record::Match::Timestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Timestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Timestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Absolute::Absolute()
    :
    monitoring_interval(std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>())
{
    monitoring_interval->parent = this;

    yang_name = "absolute"; yang_parent_name = "timestamp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Timestamp::Absolute::~Absolute()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_data() const
{
    return (monitoring_interval !=  nullptr && monitoring_interval->has_data());
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring_interval !=  nullptr && monitoring_interval->has_operation());
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring-interval")
    {
        if(monitoring_interval == nullptr)
        {
            monitoring_interval = std::make_shared<Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval>();
        }
        return monitoring_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(monitoring_interval != nullptr)
    {
        children["monitoring-interval"] = monitoring_interval;
    }

    return children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Timestamp::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring-interval")
        return true;
    return false;
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::MonitoringInterval()
    :
    start{YType::empty, "start"}
{

    yang_name = "monitoring-interval"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::~MonitoringInterval()
{
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_data() const
{
    return start.is_set;
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter);
}

std::string Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Timestamp::Absolute::MonitoringInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Transport()
    :
    destination_port{YType::empty, "destination-port"},
    source_port{YType::empty, "source-port"}
    	,
    bytes(std::make_shared<Native::Flow::Record::Match::Transport::Bytes>())
	,rtp(std::make_shared<Native::Flow::Record::Match::Transport::Rtp>())
	,icmp(std::make_shared<Native::Flow::Record::Match::Transport::Icmp>())
	,igmp(std::make_shared<Native::Flow::Record::Match::Transport::Igmp>())
	,tcp(std::make_shared<Native::Flow::Record::Match::Transport::Tcp>())
	,udp(std::make_shared<Native::Flow::Record::Match::Transport::Udp>())
{
    bytes->parent = this;
    rtp->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::~Transport()
{
}

bool Native::Flow::Record::Match::Transport::has_data() const
{
    return destination_port.is_set
	|| source_port.is_set
	|| (bytes !=  nullptr && bytes->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Flow::Record::Match::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| (bytes !=  nullptr && bytes->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Flow::Record::Match::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes")
    {
        if(bytes == nullptr)
        {
            bytes = std::make_shared<Native::Flow::Record::Match::Transport::Bytes>();
        }
        return bytes;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Flow::Record::Match::Transport::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Flow::Record::Match::Transport::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Flow::Record::Match::Transport::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Flow::Record::Match::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Flow::Record::Match::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bytes != nullptr)
    {
        children["bytes"] = bytes;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes" || name == "rtp" || name == "icmp" || name == "igmp" || name == "tcp" || name == "udp" || name == "destination-port" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Bytes::Bytes()
    :
    expected{YType::empty, "expected"}
    	,
    lost(nullptr) // presence node
{

    yang_name = "bytes"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Bytes::~Bytes()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::has_data() const
{
    return expected.is_set
	|| (lost !=  nullptr && lost->has_data());
}

bool Native::Flow::Record::Match::Transport::Bytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expected.yfilter)
	|| (lost !=  nullptr && lost->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Bytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Bytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expected.is_set || is_set(expected.yfilter)) leaf_name_data.push_back(expected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Bytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lost")
    {
        if(lost == nullptr)
        {
            lost = std::make_shared<Native::Flow::Record::Match::Transport::Bytes::Lost>();
        }
        return lost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Bytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lost != nullptr)
    {
        children["lost"] = lost;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Bytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expected")
    {
        expected = value;
        expected.value_namespace = name_space;
        expected.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Bytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expected")
    {
        expected.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Bytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lost" || name == "expected")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Bytes::Lost::Lost()
    :
    rate{YType::empty, "rate"}
{

    yang_name = "lost"; yang_parent_name = "bytes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Bytes::Lost::~Lost()
{
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_data() const
{
    return rate.is_set;
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Bytes::Lost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Bytes::Lost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Bytes::Lost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Bytes::Lost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Bytes::Lost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Bytes::Lost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Bytes::Lost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Rtp::Rtp()
    :
    ssrc{YType::empty, "ssrc"}
{

    yang_name = "rtp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Rtp::~Rtp()
{
}

bool Native::Flow::Record::Match::Transport::Rtp::has_data() const
{
    return ssrc.is_set;
}

bool Native::Flow::Record::Match::Transport::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssrc")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Icmp()
    :
    ipv4(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "icmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Icmp::~Icmp()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Record::Match::Transport::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Record::Match::Transport::Icmp::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Transport::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Transport::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::Ipv4()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv4"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv4::~Ipv4()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv6::Ipv6()
    :
    code{YType::empty, "code"},
    type{YType::empty, "type"}
{

    yang_name = "ipv6"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Icmp::Ipv6::~Ipv6()
{
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Icmp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Icmp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Icmp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Igmp::Igmp()
    :
    type{YType::empty, "type"}
{

    yang_name = "igmp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Igmp::~Igmp()
{
}

bool Native::Flow::Record::Match::Transport::Igmp::has_data() const
{
    return type.is_set;
}

bool Native::Flow::Record::Match::Transport::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Tcp()
    :
    acknowledgement_number{YType::empty, "acknowledgement-number"},
    destination_port{YType::empty, "destination-port"},
    header_length{YType::empty, "header-length"},
    maximum_segment_size{YType::empty, "maximum-segment-size"},
    sequence_number{YType::empty, "sequence-number"},
    source_port{YType::empty, "source-port"},
    urgent_pointer{YType::empty, "urgent-pointer"}
    	,
    flags(nullptr) // presence node
	,flow(std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flow_>())
	,option(std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option>())
	,window_size(nullptr) // presence node
{
    flow->parent = this;
    option->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::~Tcp()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::has_data() const
{
    return acknowledgement_number.is_set
	|| destination_port.is_set
	|| header_length.is_set
	|| maximum_segment_size.is_set
	|| sequence_number.is_set
	|| source_port.is_set
	|| urgent_pointer.is_set
	|| (flags !=  nullptr && flags->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (window_size !=  nullptr && window_size->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement_number.yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(header_length.yfilter)
	|| ydk::is_set(maximum_segment_size.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(urgent_pointer.yfilter)
	|| (flags !=  nullptr && flags->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (window_size !=  nullptr && window_size->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement_number.is_set || is_set(acknowledgement_number.yfilter)) leaf_name_data.push_back(acknowledgement_number.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (header_length.is_set || is_set(header_length.yfilter)) leaf_name_data.push_back(header_length.get_name_leafdata());
    if (maximum_segment_size.is_set || is_set(maximum_segment_size.yfilter)) leaf_name_data.push_back(maximum_segment_size.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (urgent_pointer.is_set || is_set(urgent_pointer.yfilter)) leaf_name_data.push_back(urgent_pointer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flags")
    {
        if(flags == nullptr)
        {
            flags = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flags>();
        }
        return flags;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Flow_>();
        }
        return flow;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option>();
        }
        return option;
    }

    if(child_yang_name == "window-size")
    {
        if(window_size == nullptr)
        {
            window_size = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::WindowSize>();
        }
        return window_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flags != nullptr)
    {
        children["flags"] = flags;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(window_size != nullptr)
    {
        children["window-size"] = window_size;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number = value;
        acknowledgement_number.value_namespace = name_space;
        acknowledgement_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-length")
    {
        header_length = value;
        header_length.value_namespace = name_space;
        header_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size = value;
        maximum_segment_size.value_namespace = name_space;
        maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer = value;
        urgent_pointer.value_namespace = name_space;
        urgent_pointer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement-number")
    {
        acknowledgement_number.yfilter = yfilter;
    }
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "header-length")
    {
        header_length.yfilter = yfilter;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "urgent-pointer")
    {
        urgent_pointer.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flags" || name == "flow" || name == "option" || name == "window-size" || name == "acknowledgement-number" || name == "destination-port" || name == "header-length" || name == "maximum-segment-size" || name == "sequence-number" || name == "source-port" || name == "urgent-pointer")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Flags::Flags()
    :
    ack{YType::empty, "ack"},
    cwr{YType::empty, "cwr"},
    ece{YType::empty, "ece"},
    fin{YType::empty, "fin"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    urg{YType::empty, "urg"}
{

    yang_name = "flags"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Flags::~Flags()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_data() const
{
    return ack.is_set
	|| cwr.is_set
	|| ece.is_set
	|| fin.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| urg.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(cwr.yfilter)
	|| ydk::is_set(ece.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(urg.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Flags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flags";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Flags::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (cwr.is_set || is_set(cwr.yfilter)) leaf_name_data.push_back(cwr.get_name_leafdata());
    if (ece.is_set || is_set(ece.yfilter)) leaf_name_data.push_back(ece.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Flags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Flags::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Flags::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cwr")
    {
        cwr = value;
        cwr.value_namespace = name_space;
        cwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ece")
    {
        ece = value;
        ece.value_namespace = name_space;
        ece.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::Flags::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "cwr")
    {
        cwr.yfilter = yfilter;
    }
    if(value_path == "ece")
    {
        ece.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::Flags::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack" || name == "cwr" || name == "ece" || name == "fin" || name == "psh" || name == "rst" || name == "syn" || name == "urg")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Flow_::Flow_()
    :
    count{YType::empty, "count"}
{

    yang_name = "flow"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Flow_::~Flow_()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_data() const
{
    return count.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Flow_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Flow_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Flow_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Flow_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Flow_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::Flow_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::Flow_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Option::Option()
    :
    map(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Option::~Option()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_data() const
{
    return (map !=  nullptr && map->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_operation() const
{
    return is_set(yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::Option::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Record::Match::Transport::Tcp::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::Option::Map::Map()
    :
    long_{YType::empty, "long"}
{

    yang_name = "map"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::Option::Map::~Map()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_data() const
{
    return long_.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::Option::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::Option::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::Option::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::Option::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::WindowSize()
    :
    maximum{YType::empty, "maximum"},
    minimum{YType::empty, "minimum"},
    sum{YType::empty, "sum"}
    	,
    average(nullptr) // presence node
{

    yang_name = "window-size"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::~WindowSize()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_data() const
{
    return maximum.is_set
	|| minimum.is_set
	|| sum.is_set
	|| (average !=  nullptr && average->has_data());
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(sum.yfilter)
	|| (average !=  nullptr && average->has_operation());
}

std::string Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "average")
    {
        if(average == nullptr)
        {
            average = std::make_shared<Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average>();
        }
        return average;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::WindowSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(average != nullptr)
    {
        children["average"] = average;
    }

    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "average" || name == "maximum" || name == "minimum" || name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::Average()
    :
    sum{YType::empty, "sum"}
{

    yang_name = "average"; yang_parent_name = "window-size"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::~Average()
{
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_data() const
{
    return sum.is_set;
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sum.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "average";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sum.is_set || is_set(sum.yfilter)) leaf_name_data.push_back(sum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sum")
    {
        sum = value;
        sum.value_namespace = name_space;
        sum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sum")
    {
        sum.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Tcp::WindowSize::Average::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sum")
        return true;
    return false;
}

Native::Flow::Record::Match::Transport::Udp::Udp()
    :
    destination_port{YType::empty, "destination-port"},
    message_length{YType::empty, "message-length"},
    source_port{YType::empty, "source-port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Record::Match::Transport::Udp::~Udp()
{
}

bool Native::Flow::Record::Match::Transport::Udp::has_data() const
{
    return destination_port.is_set
	|| message_length.is_set
	|| source_port.is_set;
}

bool Native::Flow::Record::Match::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(message_length.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Flow::Record::Match::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Record::Match::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (message_length.is_set || is_set(message_length.yfilter)) leaf_name_data.push_back(message_length.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Record::Match::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Record::Match::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Record::Match::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-length")
    {
        message_length = value;
        message_length.value_namespace = name_space;
        message_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Record::Match::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "message-length")
    {
        message_length.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Flow::Record::Match::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port" || name == "message-length" || name == "source-port")
        return true;
    return false;
}

Native::Flow::Exporter::Exporter()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    dscp{YType::uint8, "dscp"},
    export_protocol{YType::enumeration, "export-protocol"},
    ttl{YType::uint8, "ttl"}
    	,
    destination(std::make_shared<Native::Flow::Exporter::Destination>())
	,option(std::make_shared<Native::Flow::Exporter::Option>())
	,output_features(nullptr) // presence node
	,source(std::make_shared<Native::Flow::Exporter::Source>())
	,template_(std::make_shared<Native::Flow::Exporter::Template>())
	,transport(std::make_shared<Native::Flow::Exporter::Transport>())
	,default_(std::make_shared<Native::Flow::Exporter::Default>())
{
    destination->parent = this;
    option->parent = this;
    source->parent = this;
    template_->parent = this;
    transport->parent = this;
    default_->parent = this;

    yang_name = "exporter"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::Exporter::~Exporter()
{
}

bool Native::Flow::Exporter::has_data() const
{
    return name.is_set
	|| description.is_set
	|| dscp.is_set
	|| export_protocol.is_set
	|| ttl.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (output_features !=  nullptr && output_features->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Flow::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(export_protocol.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (output_features !=  nullptr && output_features->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Flow::Exporter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:exporter" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (export_protocol.is_set || is_set(export_protocol.yfilter)) leaf_name_data.push_back(export_protocol.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Flow::Exporter::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Exporter::Option>();
        }
        return option;
    }

    if(child_yang_name == "output-features")
    {
        if(output_features == nullptr)
        {
            output_features = std::make_shared<Native::Flow::Exporter::OutputFeatures>();
        }
        return output_features;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Flow::Exporter::Source>();
        }
        return source;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Flow::Exporter::Template>();
        }
        return template_;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Flow::Exporter::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Exporter::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(output_features != nullptr)
    {
        children["output-features"] = output_features;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Flow::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-protocol")
    {
        export_protocol = value;
        export_protocol.value_namespace = name_space;
        export_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "export-protocol")
    {
        export_protocol.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "option" || name == "output-features" || name == "source" || name == "template" || name == "transport" || name == "default" || name == "name" || name == "description" || name == "dscp" || name == "export-protocol" || name == "ttl")
        return true;
    return false;
}

Native::Flow::Exporter::Destination::Destination()
    :
    ip{YType::str, "ip"},
    vrf{YType::str, "vrf"}
{

    yang_name = "destination"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Destination::~Destination()
{
}

bool Native::Flow::Exporter::Destination::has_data() const
{
    return ip.is_set
	|| vrf.is_set;
}

bool Native::Flow::Exporter::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Flow::Exporter::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "vrf")
        return true;
    return false;
}

Native::Flow::Exporter::Option::Option()
    :
    application_attributes(nullptr) // presence node
	,application_table(nullptr) // presence node
	,c3pl_class_table(nullptr) // presence node
	,c3pl_policy_table(nullptr) // presence node
	,exporter_stats(nullptr) // presence node
	,interface_table(nullptr) // presence node
	,metadata_version_table(nullptr) // presence node
	,sampler_table(nullptr) // presence node
	,sub_application_table(nullptr) // presence node
	,vrf_table(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::~Option()
{
}

bool Native::Flow::Exporter::Option::has_data() const
{
    return (application_attributes !=  nullptr && application_attributes->has_data())
	|| (application_table !=  nullptr && application_table->has_data())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_data())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_data())
	|| (exporter_stats !=  nullptr && exporter_stats->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_data())
	|| (sampler_table !=  nullptr && sampler_table->has_data())
	|| (sub_application_table !=  nullptr && sub_application_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Native::Flow::Exporter::Option::has_operation() const
{
    return is_set(yfilter)
	|| (application_attributes !=  nullptr && application_attributes->has_operation())
	|| (application_table !=  nullptr && application_table->has_operation())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_operation())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_operation())
	|| (exporter_stats !=  nullptr && exporter_stats->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_operation())
	|| (sampler_table !=  nullptr && sampler_table->has_operation())
	|| (sub_application_table !=  nullptr && sub_application_table->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string Native::Flow::Exporter::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-attributes")
    {
        if(application_attributes == nullptr)
        {
            application_attributes = std::make_shared<Native::Flow::Exporter::Option::ApplicationAttributes>();
        }
        return application_attributes;
    }

    if(child_yang_name == "application-table")
    {
        if(application_table == nullptr)
        {
            application_table = std::make_shared<Native::Flow::Exporter::Option::ApplicationTable>();
        }
        return application_table;
    }

    if(child_yang_name == "c3pl-class-table")
    {
        if(c3pl_class_table == nullptr)
        {
            c3pl_class_table = std::make_shared<Native::Flow::Exporter::Option::C3PlClassTable>();
        }
        return c3pl_class_table;
    }

    if(child_yang_name == "c3pl-policy-table")
    {
        if(c3pl_policy_table == nullptr)
        {
            c3pl_policy_table = std::make_shared<Native::Flow::Exporter::Option::C3PlPolicyTable>();
        }
        return c3pl_policy_table;
    }

    if(child_yang_name == "exporter-stats")
    {
        if(exporter_stats == nullptr)
        {
            exporter_stats = std::make_shared<Native::Flow::Exporter::Option::ExporterStats>();
        }
        return exporter_stats;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Native::Flow::Exporter::Option::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "metadata-version-table")
    {
        if(metadata_version_table == nullptr)
        {
            metadata_version_table = std::make_shared<Native::Flow::Exporter::Option::MetadataVersionTable>();
        }
        return metadata_version_table;
    }

    if(child_yang_name == "sampler-table")
    {
        if(sampler_table == nullptr)
        {
            sampler_table = std::make_shared<Native::Flow::Exporter::Option::SamplerTable>();
        }
        return sampler_table;
    }

    if(child_yang_name == "sub-application-table")
    {
        if(sub_application_table == nullptr)
        {
            sub_application_table = std::make_shared<Native::Flow::Exporter::Option::SubApplicationTable>();
        }
        return sub_application_table;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Native::Flow::Exporter::Option::VrfTable>();
        }
        return vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_attributes != nullptr)
    {
        children["application-attributes"] = application_attributes;
    }

    if(application_table != nullptr)
    {
        children["application-table"] = application_table;
    }

    if(c3pl_class_table != nullptr)
    {
        children["c3pl-class-table"] = c3pl_class_table;
    }

    if(c3pl_policy_table != nullptr)
    {
        children["c3pl-policy-table"] = c3pl_policy_table;
    }

    if(exporter_stats != nullptr)
    {
        children["exporter-stats"] = exporter_stats;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(metadata_version_table != nullptr)
    {
        children["metadata-version-table"] = metadata_version_table;
    }

    if(sampler_table != nullptr)
    {
        children["sampler-table"] = sampler_table;
    }

    if(sub_application_table != nullptr)
    {
        children["sub-application-table"] = sub_application_table;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    return children;
}

void Native::Flow::Exporter::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-attributes" || name == "application-table" || name == "c3pl-class-table" || name == "c3pl-policy-table" || name == "exporter-stats" || name == "interface-table" || name == "metadata-version-table" || name == "sampler-table" || name == "sub-application-table" || name == "vrf-table")
        return true;
    return false;
}

Native::Flow::Exporter::Option::ApplicationAttributes::ApplicationAttributes()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "application-attributes"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::ApplicationAttributes::~ApplicationAttributes()
{
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::ApplicationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::ApplicationAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ApplicationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ApplicationAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::ApplicationAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::ApplicationAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::ApplicationAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::ApplicationTable::ApplicationTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "application-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::ApplicationTable::~ApplicationTable()
{
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::ApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::ApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::ApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::ApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::ApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::C3PlClassTable::C3PlClassTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "c3pl-class-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::C3PlClassTable::~C3PlClassTable()
{
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::C3PlClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::C3PlClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::C3PlClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::C3PlClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::C3PlClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::C3PlClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::C3PlClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::C3PlPolicyTable::C3PlPolicyTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "c3pl-policy-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::C3PlPolicyTable::~C3PlPolicyTable()
{
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::C3PlPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::C3PlPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::C3PlPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::C3PlPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::C3PlPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::C3PlPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::C3PlPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::ExporterStats::ExporterStats()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "exporter-stats"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::ExporterStats::~ExporterStats()
{
}

bool Native::Flow::Exporter::Option::ExporterStats::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::ExporterStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::ExporterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::ExporterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::ExporterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::ExporterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::ExporterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::ExporterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::ExporterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::InterfaceTable::InterfaceTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "interface-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::InterfaceTable::~InterfaceTable()
{
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::MetadataVersionTable::MetadataVersionTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "metadata-version-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::MetadataVersionTable::~MetadataVersionTable()
{
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::MetadataVersionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-version-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::MetadataVersionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::MetadataVersionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::MetadataVersionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::MetadataVersionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::MetadataVersionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::MetadataVersionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::SamplerTable::SamplerTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "sampler-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::SamplerTable::~SamplerTable()
{
}

bool Native::Flow::Exporter::Option::SamplerTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::SamplerTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::SamplerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::SamplerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::SamplerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::SamplerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::SamplerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::SamplerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::SamplerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::SubApplicationTable::SubApplicationTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "sub-application-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::SubApplicationTable::~SubApplicationTable()
{
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::SubApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-application-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::SubApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::SubApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::SubApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::SubApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::SubApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::SubApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Option::VrfTable::VrfTable()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "vrf-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Option::VrfTable::~VrfTable()
{
}

bool Native::Flow::Exporter::Option::VrfTable::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Option::VrfTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Option::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Option::VrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Option::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Option::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Option::VrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Option::VrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Option::VrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::OutputFeatures::OutputFeatures()
{

    yang_name = "output-features"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::OutputFeatures::~OutputFeatures()
{
}

bool Native::Flow::Exporter::OutputFeatures::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::OutputFeatures::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::OutputFeatures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-features";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::OutputFeatures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::OutputFeatures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::OutputFeatures::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::OutputFeatures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::OutputFeatures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::OutputFeatures::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Source::Source()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Flow::Exporter::Source::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Flow::Exporter::Source::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Flow::Exporter::Source::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Flow::Exporter::Source::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::~Source()
{
}

bool Native::Flow::Exporter::Source::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Flow::Exporter::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Flow::Exporter::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Flow::Exporter::Source::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Flow::Exporter::Source::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Flow::Exporter::Source::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Flow::Exporter::Source::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Flow::Exporter::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Flow::Exporter::Source::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Flow::Exporter::Source::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Flow::Exporter::Source::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Flow::Exporter::Source::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Source::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Flow::Exporter::Source::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Flow::Exporter::Source::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Flow::Exporter::Source::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Flow::Exporter::Source::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Source::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Flow::Exporter::Source::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Flow::Exporter::Source::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Flow::Exporter::Source::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Flow::Exporter::Source::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Source::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Flow::Exporter::Source::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Source::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Flow::Exporter::Source::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Source::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Source::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Source::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Source::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Source::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Source::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Flow::Exporter::Template::Template()
    :
    data(std::make_shared<Native::Flow::Exporter::Template::Data>())
{
    data->parent = this;

    yang_name = "template"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Template::~Template()
{
}

bool Native::Flow::Exporter::Template::has_data() const
{
    return (data !=  nullptr && data->has_data());
}

bool Native::Flow::Exporter::Template::has_operation() const
{
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Flow::Exporter::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Flow::Exporter::Template::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Flow::Exporter::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Native::Flow::Exporter::Template::Data::Data()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "data"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Template::Data::~Data()
{
}

bool Native::Flow::Exporter::Template::Data::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Template::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Template::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Template::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Template::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Template::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Template::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Template::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Template::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Exporter::Transport::Transport()
    :
    udp{YType::uint16, "udp"}
{

    yang_name = "transport"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Transport::~Transport()
{
}

bool Native::Flow::Exporter::Transport::has_data() const
{
    return udp.is_set;
}

bool Native::Flow::Exporter::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp.yfilter);
}

std::string Native::Flow::Exporter::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp")
        return true;
    return false;
}

Native::Flow::Exporter::Default::Default()
    :
    description{YType::empty, "description"},
    dscp{YType::empty, "dscp"},
    export_protocol{YType::empty, "export-protocol"},
    transport{YType::empty, "transport"},
    ttl{YType::empty, "ttl"}
    	,
    option(std::make_shared<Native::Flow::Exporter::Default::Option>())
	,template_(std::make_shared<Native::Flow::Exporter::Default::Template>())
{
    option->parent = this;
    template_->parent = this;

    yang_name = "default"; yang_parent_name = "exporter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::~Default()
{
}

bool Native::Flow::Exporter::Default::has_data() const
{
    return description.is_set
	|| dscp.is_set
	|| export_protocol.is_set
	|| transport.is_set
	|| ttl.is_set
	|| (option !=  nullptr && option->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::Flow::Exporter::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(export_protocol.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::Flow::Exporter::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (export_protocol.is_set || is_set(export_protocol.yfilter)) leaf_name_data.push_back(export_protocol.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Flow::Exporter::Default::Option>();
        }
        return option;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Flow::Exporter::Default::Template>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::Flow::Exporter::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "export-protocol")
    {
        export_protocol = value;
        export_protocol.value_namespace = name_space;
        export_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "export-protocol")
    {
        export_protocol.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "template" || name == "description" || name == "dscp" || name == "export-protocol" || name == "transport" || name == "ttl")
        return true;
    return false;
}

Native::Flow::Exporter::Default::Option::Option()
    :
    application_attributes(nullptr) // presence node
	,c3pl_class_table(nullptr) // presence node
	,c3pl_policy_table(nullptr) // presence node
	,exporter_stats(nullptr) // presence node
	,interface_table(nullptr) // presence node
	,metadata_version_table(nullptr) // presence node
	,sampler_table(nullptr) // presence node
	,sub_application_table(nullptr) // presence node
	,vrf_table(nullptr) // presence node
{

    yang_name = "option"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::~Option()
{
}

bool Native::Flow::Exporter::Default::Option::has_data() const
{
    return (application_attributes !=  nullptr && application_attributes->has_data())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_data())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_data())
	|| (exporter_stats !=  nullptr && exporter_stats->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_data())
	|| (sampler_table !=  nullptr && sampler_table->has_data())
	|| (sub_application_table !=  nullptr && sub_application_table->has_data())
	|| (vrf_table !=  nullptr && vrf_table->has_data());
}

bool Native::Flow::Exporter::Default::Option::has_operation() const
{
    return is_set(yfilter)
	|| (application_attributes !=  nullptr && application_attributes->has_operation())
	|| (c3pl_class_table !=  nullptr && c3pl_class_table->has_operation())
	|| (c3pl_policy_table !=  nullptr && c3pl_policy_table->has_operation())
	|| (exporter_stats !=  nullptr && exporter_stats->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (metadata_version_table !=  nullptr && metadata_version_table->has_operation())
	|| (sampler_table !=  nullptr && sampler_table->has_operation())
	|| (sub_application_table !=  nullptr && sub_application_table->has_operation())
	|| (vrf_table !=  nullptr && vrf_table->has_operation());
}

std::string Native::Flow::Exporter::Default::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-attributes")
    {
        if(application_attributes == nullptr)
        {
            application_attributes = std::make_shared<Native::Flow::Exporter::Default::Option::ApplicationAttributes>();
        }
        return application_attributes;
    }

    if(child_yang_name == "c3pl-class-table")
    {
        if(c3pl_class_table == nullptr)
        {
            c3pl_class_table = std::make_shared<Native::Flow::Exporter::Default::Option::C3PlClassTable>();
        }
        return c3pl_class_table;
    }

    if(child_yang_name == "c3pl-policy-table")
    {
        if(c3pl_policy_table == nullptr)
        {
            c3pl_policy_table = std::make_shared<Native::Flow::Exporter::Default::Option::C3PlPolicyTable>();
        }
        return c3pl_policy_table;
    }

    if(child_yang_name == "exporter-stats")
    {
        if(exporter_stats == nullptr)
        {
            exporter_stats = std::make_shared<Native::Flow::Exporter::Default::Option::ExporterStats>();
        }
        return exporter_stats;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Native::Flow::Exporter::Default::Option::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "metadata-version-table")
    {
        if(metadata_version_table == nullptr)
        {
            metadata_version_table = std::make_shared<Native::Flow::Exporter::Default::Option::MetadataVersionTable>();
        }
        return metadata_version_table;
    }

    if(child_yang_name == "sampler-table")
    {
        if(sampler_table == nullptr)
        {
            sampler_table = std::make_shared<Native::Flow::Exporter::Default::Option::SamplerTable>();
        }
        return sampler_table;
    }

    if(child_yang_name == "sub-application-table")
    {
        if(sub_application_table == nullptr)
        {
            sub_application_table = std::make_shared<Native::Flow::Exporter::Default::Option::SubApplicationTable>();
        }
        return sub_application_table;
    }

    if(child_yang_name == "vrf-table")
    {
        if(vrf_table == nullptr)
        {
            vrf_table = std::make_shared<Native::Flow::Exporter::Default::Option::VrfTable>();
        }
        return vrf_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_attributes != nullptr)
    {
        children["application-attributes"] = application_attributes;
    }

    if(c3pl_class_table != nullptr)
    {
        children["c3pl-class-table"] = c3pl_class_table;
    }

    if(c3pl_policy_table != nullptr)
    {
        children["c3pl-policy-table"] = c3pl_policy_table;
    }

    if(exporter_stats != nullptr)
    {
        children["exporter-stats"] = exporter_stats;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(metadata_version_table != nullptr)
    {
        children["metadata-version-table"] = metadata_version_table;
    }

    if(sampler_table != nullptr)
    {
        children["sampler-table"] = sampler_table;
    }

    if(sub_application_table != nullptr)
    {
        children["sub-application-table"] = sub_application_table;
    }

    if(vrf_table != nullptr)
    {
        children["vrf-table"] = vrf_table;
    }

    return children;
}

void Native::Flow::Exporter::Default::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-attributes" || name == "c3pl-class-table" || name == "c3pl-policy-table" || name == "exporter-stats" || name == "interface-table" || name == "metadata-version-table" || name == "sampler-table" || name == "sub-application-table" || name == "vrf-table")
        return true;
    return false;
}

Native::Flow::Exporter::Default::Option::ApplicationAttributes::ApplicationAttributes()
{

    yang_name = "application-attributes"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::ApplicationAttributes::~ApplicationAttributes()
{
}

bool Native::Flow::Exporter::Default::Option::ApplicationAttributes::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::ApplicationAttributes::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::ApplicationAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::ApplicationAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::ApplicationAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::ApplicationAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::ApplicationAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::ApplicationAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::ApplicationAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::C3PlClassTable::C3PlClassTable()
{

    yang_name = "c3pl-class-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::C3PlClassTable::~C3PlClassTable()
{
}

bool Native::Flow::Exporter::Default::Option::C3PlClassTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::C3PlClassTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::C3PlClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-class-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::C3PlClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::C3PlClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::C3PlClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::C3PlClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::C3PlClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::C3PlClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::C3PlPolicyTable::C3PlPolicyTable()
{

    yang_name = "c3pl-policy-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::C3PlPolicyTable::~C3PlPolicyTable()
{
}

bool Native::Flow::Exporter::Default::Option::C3PlPolicyTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::C3PlPolicyTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::C3PlPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "c3pl-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::C3PlPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::C3PlPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::C3PlPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::C3PlPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::C3PlPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::C3PlPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::ExporterStats::ExporterStats()
{

    yang_name = "exporter-stats"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::ExporterStats::~ExporterStats()
{
}

bool Native::Flow::Exporter::Default::Option::ExporterStats::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::ExporterStats::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::ExporterStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::ExporterStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::ExporterStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::ExporterStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::ExporterStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::ExporterStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::ExporterStats::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::InterfaceTable::InterfaceTable()
{

    yang_name = "interface-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::InterfaceTable::~InterfaceTable()
{
}

bool Native::Flow::Exporter::Default::Option::InterfaceTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::InterfaceTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::MetadataVersionTable::MetadataVersionTable()
{

    yang_name = "metadata-version-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::MetadataVersionTable::~MetadataVersionTable()
{
}

bool Native::Flow::Exporter::Default::Option::MetadataVersionTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::MetadataVersionTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::MetadataVersionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata-version-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::MetadataVersionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::MetadataVersionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::MetadataVersionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::MetadataVersionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::MetadataVersionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::MetadataVersionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::SamplerTable::SamplerTable()
{

    yang_name = "sampler-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::SamplerTable::~SamplerTable()
{
}

bool Native::Flow::Exporter::Default::Option::SamplerTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::SamplerTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::SamplerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::SamplerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::SamplerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::SamplerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::SamplerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::SamplerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::SamplerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::SubApplicationTable::SubApplicationTable()
{

    yang_name = "sub-application-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::SubApplicationTable::~SubApplicationTable()
{
}

bool Native::Flow::Exporter::Default::Option::SubApplicationTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::SubApplicationTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::SubApplicationTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-application-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::SubApplicationTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::SubApplicationTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::SubApplicationTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::SubApplicationTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::SubApplicationTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::SubApplicationTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Option::VrfTable::VrfTable()
{

    yang_name = "vrf-table"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Option::VrfTable::~VrfTable()
{
}

bool Native::Flow::Exporter::Default::Option::VrfTable::has_data() const
{
    return false;
}

bool Native::Flow::Exporter::Default::Option::VrfTable::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Flow::Exporter::Default::Option::VrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Option::VrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Option::VrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Option::VrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Option::VrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Option::VrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Option::VrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Flow::Exporter::Default::Template::Template()
    :
    data(std::make_shared<Native::Flow::Exporter::Default::Template::Data>())
{
    data->parent = this;

    yang_name = "template"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Template::~Template()
{
}

bool Native::Flow::Exporter::Default::Template::has_data() const
{
    return (data !=  nullptr && data->has_data());
}

bool Native::Flow::Exporter::Default::Template::has_operation() const
{
    return is_set(yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Flow::Exporter::Default::Template::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Template::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Template::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Flow::Exporter::Default::Template::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Template::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Flow::Exporter::Default::Template::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Exporter::Default::Template::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Exporter::Default::Template::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

Native::Flow::Exporter::Default::Template::Data::Data()
    :
    timeout{YType::empty, "timeout"}
{

    yang_name = "data"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Exporter::Default::Template::Data::~Data()
{
}

bool Native::Flow::Exporter::Default::Template::Data::has_data() const
{
    return timeout.is_set;
}

bool Native::Flow::Exporter::Default::Template::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Exporter::Default::Template::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Exporter::Default::Template::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Exporter::Default::Template::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Exporter::Default::Template::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Exporter::Default::Template::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Exporter::Default::Template::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Exporter::Default::Template::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    description{YType::str, "description"}
    	,
    cache(std::make_shared<Native::Flow::Monitor::Cache>())
	,history(std::make_shared<Native::Flow::Monitor::History>())
	,record(std::make_shared<Native::Flow::Monitor::Record>())
	,statistics(std::make_shared<Native::Flow::Monitor::Statistics>())
	,default_(std::make_shared<Native::Flow::Monitor::Default>())
{
    cache->parent = this;
    history->parent = this;
    record->parent = this;
    statistics->parent = this;
    default_->parent = this;

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Flow::Monitor::~Monitor()
{
}

bool Native::Flow::Monitor::has_data() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| description.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (record !=  nullptr && record->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<exporter.size(); index++)
    {
        if(exporter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (record !=  nullptr && record->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Flow::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/flow/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:monitor" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Flow::Monitor::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "exporter")
    {
        auto c = std::make_shared<Native::Flow::Monitor::Exporter>();
        c->parent = this;
        exporter.push_back(c);
        return c;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Flow::Monitor::History>();
        }
        return history;
    }

    if(child_yang_name == "record")
    {
        if(record == nullptr)
        {
            record = std::make_shared<Native::Flow::Monitor::Record>();
        }
        return record;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Flow::Monitor::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Flow::Monitor::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    count = 0;
    for (auto const & c : exporter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(record != nullptr)
    {
        children["record"] = record;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "exporter" || name == "history" || name == "record" || name == "statistics" || name == "default" || name == "name" || name == "type" || name == "description")
        return true;
    return false;
}

Native::Flow::Monitor::Cache::Cache()
    :
    entries{YType::uint32, "entries"},
    type{YType::enumeration, "type"}
    	,
    timeout(std::make_shared<Native::Flow::Monitor::Cache::Timeout>())
{
    timeout->parent = this;

    yang_name = "cache"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Cache::~Cache()
{
}

bool Native::Flow::Monitor::Cache::has_data() const
{
    return entries.is_set
	|| type.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Flow::Monitor::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Flow::Monitor::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Flow::Monitor::Cache::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Flow::Monitor::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "entries" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Cache::Timeout::Timeout()
    :
    active{YType::uint32, "active"},
    inactive{YType::uint32, "inactive"},
    synchronized{YType::uint16, "synchronized"},
    update{YType::uint32, "update"}
    	,
    event(std::make_shared<Native::Flow::Monitor::Cache::Timeout::Event>())
{
    event->parent = this;

    yang_name = "timeout"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Cache::Timeout::~Timeout()
{
}

bool Native::Flow::Monitor::Cache::Timeout::has_data() const
{
    return active.is_set
	|| inactive.is_set
	|| synchronized.is_set
	|| update.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Native::Flow::Monitor::Cache::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(synchronized.yfilter)
	|| ydk::is_set(update.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Flow::Monitor::Cache::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Cache::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.yfilter)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Monitor::Cache::Timeout::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Flow::Monitor::Cache::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
        synchronized.value_namespace = name_space;
        synchronized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Cache::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "synchronized")
    {
        synchronized.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Cache::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "active" || name == "inactive" || name == "synchronized" || name == "update")
        return true;
    return false;
}

Native::Flow::Monitor::Cache::Timeout::Event::Event()
    :
    transaction_end{YType::empty, "transaction-end"}
{

    yang_name = "event"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Cache::Timeout::Event::~Event()
{
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_data() const
{
    return transaction_end.is_set;
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transaction_end.yfilter);
}

std::string Native::Flow::Monitor::Cache::Timeout::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Cache::Timeout::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction_end.is_set || is_set(transaction_end.yfilter)) leaf_name_data.push_back(transaction_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Cache::Timeout::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Cache::Timeout::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Cache::Timeout::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transaction-end")
    {
        transaction_end = value;
        transaction_end.value_namespace = name_space;
        transaction_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Cache::Timeout::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transaction-end")
    {
        transaction_end.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Cache::Timeout::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transaction-end")
        return true;
    return false;
}

Native::Flow::Monitor::Exporter::Exporter()
    :
    name{YType::str, "name"}
{

    yang_name = "exporter"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Exporter::~Exporter()
{
}

bool Native::Flow::Monitor::Exporter::has_data() const
{
    return name.is_set;
}

bool Native::Flow::Monitor::Exporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Flow::Monitor::Exporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exporter" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Exporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Exporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Exporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Exporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Exporter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Exporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Flow::Monitor::History::History()
    :
    size{YType::uint8, "size"},
    timeout{YType::uint8, "timeout"}
{

    yang_name = "history"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::History::~History()
{
}

bool Native::Flow::Monitor::History::has_data() const
{
    return size.is_set
	|| timeout.is_set;
}

bool Native::Flow::Monitor::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Flow::Monitor::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "timeout")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Record()
    :
    type{YType::str, "type"}
    	,
    netflow(std::make_shared<Native::Flow::Monitor::Record::Netflow>())
{
    netflow->parent = this;

    yang_name = "record"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::~Record()
{
}

bool Native::Flow::Monitor::Record::has_data() const
{
    return type.is_set
	|| (netflow !=  nullptr && netflow->has_data());
}

bool Native::Flow::Monitor::Record::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (netflow !=  nullptr && netflow->has_operation());
}

std::string Native::Flow::Monitor::Record::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netflow")
    {
        if(netflow == nullptr)
        {
            netflow = std::make_shared<Native::Flow::Monitor::Record::Netflow>();
        }
        return netflow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(netflow != nullptr)
    {
        children["netflow"] = netflow;
    }

    return children;
}

void Native::Flow::Monitor::Record::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netflow" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Netflow()
    :
    ipv4(std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4>())
	,ipv6(std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "netflow"; yang_parent_name = "record"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::~Netflow()
{
}

bool Native::Flow::Monitor::Record::Netflow::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netflow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Record::Netflow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Record::Netflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Ipv4()
    :
    protocol_port{YType::empty, "protocol-port"},
    prefix_port{YType::empty, "prefix-port"},
    protocol_port_tos{YType::empty, "protocol-port-tos"}
    	,
    as(nullptr) // presence node
	,destination_prefix(nullptr) // presence node
	,original_input(nullptr) // presence node
	,original_output(nullptr) // presence node
	,prefix(nullptr) // presence node
	,source_prefix(nullptr) // presence node
	,as_tos(nullptr) // presence node
	,bgp_nexthop_tos(nullptr) // presence node
	,destination_prefix_tos(nullptr) // presence node
	,prefix_tos(nullptr) // presence node
	,source_prefix_tos(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "netflow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::~Ipv4()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_data() const
{
    return protocol_port.is_set
	|| prefix_port.is_set
	|| protocol_port_tos.is_set
	|| (as !=  nullptr && as->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (original_input !=  nullptr && original_input->has_data())
	|| (original_output !=  nullptr && original_output->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (as_tos !=  nullptr && as_tos->has_data())
	|| (bgp_nexthop_tos !=  nullptr && bgp_nexthop_tos->has_data())
	|| (destination_prefix_tos !=  nullptr && destination_prefix_tos->has_data())
	|| (prefix_tos !=  nullptr && prefix_tos->has_data())
	|| (source_prefix_tos !=  nullptr && source_prefix_tos->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_port.yfilter)
	|| ydk::is_set(prefix_port.yfilter)
	|| ydk::is_set(protocol_port_tos.yfilter)
	|| (as !=  nullptr && as->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (original_input !=  nullptr && original_input->has_operation())
	|| (original_output !=  nullptr && original_output->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (as_tos !=  nullptr && as_tos->has_operation())
	|| (bgp_nexthop_tos !=  nullptr && bgp_nexthop_tos->has_operation())
	|| (destination_prefix_tos !=  nullptr && destination_prefix_tos->has_operation())
	|| (prefix_tos !=  nullptr && prefix_tos->has_operation())
	|| (source_prefix_tos !=  nullptr && source_prefix_tos->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_port.is_set || is_set(protocol_port.yfilter)) leaf_name_data.push_back(protocol_port.get_name_leafdata());
    if (prefix_port.is_set || is_set(prefix_port.yfilter)) leaf_name_data.push_back(prefix_port.get_name_leafdata());
    if (protocol_port_tos.is_set || is_set(protocol_port_tos.yfilter)) leaf_name_data.push_back(protocol_port_tos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::As>();
        }
        return as;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "original-input")
    {
        if(original_input == nullptr)
        {
            original_input = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput>();
        }
        return original_input;
    }

    if(child_yang_name == "original-output")
    {
        if(original_output == nullptr)
        {
            original_output = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput>();
        }
        return original_output;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "as-tos")
    {
        if(as_tos == nullptr)
        {
            as_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos>();
        }
        return as_tos;
    }

    if(child_yang_name == "bgp-nexthop-tos")
    {
        if(bgp_nexthop_tos == nullptr)
        {
            bgp_nexthop_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos>();
        }
        return bgp_nexthop_tos;
    }

    if(child_yang_name == "destination-prefix-tos")
    {
        if(destination_prefix_tos == nullptr)
        {
            destination_prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos>();
        }
        return destination_prefix_tos;
    }

    if(child_yang_name == "prefix-tos")
    {
        if(prefix_tos == nullptr)
        {
            prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos>();
        }
        return prefix_tos;
    }

    if(child_yang_name == "source-prefix-tos")
    {
        if(source_prefix_tos == nullptr)
        {
            source_prefix_tos = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos>();
        }
        return source_prefix_tos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(as != nullptr)
    {
        children["as"] = as;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(original_input != nullptr)
    {
        children["original-input"] = original_input;
    }

    if(original_output != nullptr)
    {
        children["original-output"] = original_output;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    if(as_tos != nullptr)
    {
        children["as-tos"] = as_tos;
    }

    if(bgp_nexthop_tos != nullptr)
    {
        children["bgp-nexthop-tos"] = bgp_nexthop_tos;
    }

    if(destination_prefix_tos != nullptr)
    {
        children["destination-prefix-tos"] = destination_prefix_tos;
    }

    if(prefix_tos != nullptr)
    {
        children["prefix-tos"] = prefix_tos;
    }

    if(source_prefix_tos != nullptr)
    {
        children["source-prefix-tos"] = source_prefix_tos;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-port")
    {
        protocol_port = value;
        protocol_port.value_namespace = name_space;
        protocol_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-port")
    {
        prefix_port = value;
        prefix_port.value_namespace = name_space;
        prefix_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-port-tos")
    {
        protocol_port_tos = value;
        protocol_port_tos.value_namespace = name_space;
        protocol_port_tos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-port")
    {
        protocol_port.yfilter = yfilter;
    }
    if(value_path == "prefix-port")
    {
        prefix_port.yfilter = yfilter;
    }
    if(value_path == "protocol-port-tos")
    {
        protocol_port_tos.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "destination-prefix" || name == "original-input" || name == "original-output" || name == "prefix" || name == "source-prefix" || name == "as-tos" || name == "bgp-nexthop-tos" || name == "destination-prefix-tos" || name == "prefix-tos" || name == "source-prefix-tos" || name == "protocol-port" || name == "prefix-port" || name == "protocol-port-tos")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::As::As()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "as"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::As::~As()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::DestinationPrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "destination-prefix"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::~DestinationPrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::OriginalInput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-input"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::~OriginalInput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::OriginalOutput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-output"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::~OriginalOutput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::OriginalOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::Prefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "prefix"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::~Prefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::SourcePrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "source-prefix"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::~SourcePrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::AsTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "as-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::~AsTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::AsTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::BgpNexthopTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "bgp-nexthop-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::~BgpNexthopTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-nexthop-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::BgpNexthopTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::DestinationPrefixTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "destination-prefix-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::~DestinationPrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::DestinationPrefixTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::PrefixTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "prefix-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::~PrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::PrefixTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::SourcePrefixTos()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "source-prefix-tos"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::~SourcePrefixTos()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix-tos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv4::SourcePrefixTos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Ipv6()
    :
    protocol_port{YType::empty, "protocol-port"}
    	,
    as(nullptr) // presence node
	,destination_prefix(nullptr) // presence node
	,original_input(nullptr) // presence node
	,original_output(nullptr) // presence node
	,prefix(nullptr) // presence node
	,source_prefix(nullptr) // presence node
	,bgp_nexthop(nullptr) // presence node
{

    yang_name = "ipv6"; yang_parent_name = "netflow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::~Ipv6()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_data() const
{
    return protocol_port.is_set
	|| (as !=  nullptr && as->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (original_input !=  nullptr && original_input->has_data())
	|| (original_output !=  nullptr && original_output->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (bgp_nexthop !=  nullptr && bgp_nexthop->has_data());
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_port.yfilter)
	|| (as !=  nullptr && as->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (original_input !=  nullptr && original_input->has_operation())
	|| (original_output !=  nullptr && original_output->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (bgp_nexthop !=  nullptr && bgp_nexthop->has_operation());
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_port.is_set || is_set(protocol_port.yfilter)) leaf_name_data.push_back(protocol_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as")
    {
        if(as == nullptr)
        {
            as = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::As>();
        }
        return as;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "original-input")
    {
        if(original_input == nullptr)
        {
            original_input = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput>();
        }
        return original_input;
    }

    if(child_yang_name == "original-output")
    {
        if(original_output == nullptr)
        {
            original_output = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput>();
        }
        return original_output;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "bgp-nexthop")
    {
        if(bgp_nexthop == nullptr)
        {
            bgp_nexthop = std::make_shared<Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop>();
        }
        return bgp_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(as != nullptr)
    {
        children["as"] = as;
    }

    if(destination_prefix != nullptr)
    {
        children["destination-prefix"] = destination_prefix;
    }

    if(original_input != nullptr)
    {
        children["original-input"] = original_input;
    }

    if(original_output != nullptr)
    {
        children["original-output"] = original_output;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_prefix != nullptr)
    {
        children["source-prefix"] = source_prefix;
    }

    if(bgp_nexthop != nullptr)
    {
        children["bgp-nexthop"] = bgp_nexthop;
    }

    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-port")
    {
        protocol_port = value;
        protocol_port.value_namespace = name_space;
        protocol_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-port")
    {
        protocol_port.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "destination-prefix" || name == "original-input" || name == "original-output" || name == "prefix" || name == "source-prefix" || name == "bgp-nexthop" || name == "protocol-port")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::As::As()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "as"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::As::~As()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::As::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::As::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::As::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::As::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::DestinationPrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "destination-prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::~DestinationPrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::OriginalInput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-input"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::~OriginalInput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalInput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::OriginalOutput()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "original-output"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::~OriginalOutput()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original-output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::OriginalOutput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::Prefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::~Prefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::SourcePrefix()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "source-prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::~SourcePrefix()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::BgpNexthop()
    :
    peer{YType::empty, "peer"}
{

    yang_name = "bgp-nexthop"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::~BgpNexthop()
{
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_data() const
{
    return peer.is_set;
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter);
}

std::string Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Record::Netflow::Ipv6::BgpNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer")
        return true;
    return false;
}

Native::Flow::Monitor::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Statistics::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Flow::Monitor::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{

    yang_name = "packet"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Statistics::Packet::has_data() const
{
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Statistics::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Monitor::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Statistics::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Statistics::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Statistics::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Statistics::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "size")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Default()
    :
    description{YType::empty, "description"},
    exporter{YType::empty, "exporter"},
    record{YType::empty, "record"}
    	,
    cache(std::make_shared<Native::Flow::Monitor::Default::Cache>())
	,statistics(std::make_shared<Native::Flow::Monitor::Default::Statistics>())
{
    cache->parent = this;
    statistics->parent = this;

    yang_name = "default"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default::~Default()
{
}

bool Native::Flow::Monitor::Default::has_data() const
{
    return description.is_set
	|| exporter.is_set
	|| record.is_set
	|| (cache !=  nullptr && cache->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Flow::Monitor::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(exporter.yfilter)
	|| ydk::is_set(record.yfilter)
	|| (cache !=  nullptr && cache->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Flow::Monitor::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (exporter.is_set || is_set(exporter.yfilter)) leaf_name_data.push_back(exporter.get_name_leafdata());
    if (record.is_set || is_set(record.yfilter)) leaf_name_data.push_back(record.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Flow::Monitor::Default::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Flow::Monitor::Default::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Flow::Monitor::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exporter")
    {
        exporter = value;
        exporter.value_namespace = name_space;
        exporter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record")
    {
        record = value;
        record.value_namespace = name_space;
        record.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "exporter")
    {
        exporter.yfilter = yfilter;
    }
    if(value_path == "record")
    {
        record.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "statistics" || name == "description" || name == "exporter" || name == "record")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Cache::Cache()
    :
    entries{YType::empty, "entries"},
    type{YType::empty, "type"}
    	,
    timeout(std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout>())
{
    timeout->parent = this;

    yang_name = "cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default::Cache::~Cache()
{
}

bool Native::Flow::Monitor::Default::Cache::has_data() const
{
    return entries.is_set
	|| type.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Flow::Monitor::Default::Cache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Flow::Monitor::Default::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Cache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Flow::Monitor::Default::Cache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Cache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Cache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "entries" || name == "type")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Cache::Timeout::Timeout()
    :
    active{YType::empty, "active"},
    inactive{YType::empty, "inactive"},
    synchronized{YType::empty, "synchronized"},
    update{YType::empty, "update"}
    	,
    event(std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout::Event>())
{
    event->parent = this;

    yang_name = "timeout"; yang_parent_name = "cache"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default::Cache::Timeout::~Timeout()
{
}

bool Native::Flow::Monitor::Default::Cache::Timeout::has_data() const
{
    return active.is_set
	|| inactive.is_set
	|| synchronized.is_set
	|| update.is_set
	|| (event !=  nullptr && event->has_data());
}

bool Native::Flow::Monitor::Default::Cache::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active.yfilter)
	|| ydk::is_set(inactive.yfilter)
	|| ydk::is_set(synchronized.yfilter)
	|| ydk::is_set(update.yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Flow::Monitor::Default::Cache::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Cache::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.yfilter)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Cache::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Flow::Monitor::Default::Cache::Timeout::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Cache::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Flow::Monitor::Default::Cache::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
        synchronized.value_namespace = name_space;
        synchronized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Cache::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
    if(value_path == "synchronized")
    {
        synchronized.yfilter = yfilter;
    }
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Cache::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "active" || name == "inactive" || name == "synchronized" || name == "update")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Cache::Timeout::Event::Event()
    :
    transaction_end{YType::empty, "transaction-end"}
{

    yang_name = "event"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default::Cache::Timeout::Event::~Event()
{
}

bool Native::Flow::Monitor::Default::Cache::Timeout::Event::has_data() const
{
    return transaction_end.is_set;
}

bool Native::Flow::Monitor::Default::Cache::Timeout::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transaction_end.yfilter);
}

std::string Native::Flow::Monitor::Default::Cache::Timeout::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Cache::Timeout::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction_end.is_set || is_set(transaction_end.yfilter)) leaf_name_data.push_back(transaction_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Cache::Timeout::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Cache::Timeout::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Default::Cache::Timeout::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transaction-end")
    {
        transaction_end = value;
        transaction_end.value_namespace = name_space;
        transaction_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Cache::Timeout::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transaction-end")
    {
        transaction_end.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Cache::Timeout::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transaction-end")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Statistics::Statistics()
    :
    packet(std::make_shared<Native::Flow::Monitor::Default::Statistics::Packet>())
{
    packet->parent = this;

    yang_name = "statistics"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default::Statistics::~Statistics()
{
}

bool Native::Flow::Monitor::Default::Statistics::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Flow::Monitor::Default::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Flow::Monitor::Default::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Flow::Monitor::Default::Statistics::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Flow::Monitor::Default::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Flow::Monitor::Default::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Flow::Monitor::Default::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet")
        return true;
    return false;
}

Native::Flow::Monitor::Default::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{

    yang_name = "packet"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Flow::Monitor::Default::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Default::Statistics::Packet::has_data() const
{
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Default::Statistics::Packet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Flow::Monitor::Default::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Flow::Monitor::Default::Statistics::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Flow::Monitor::Default::Statistics::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Flow::Monitor::Default::Statistics::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Flow::Monitor::Default::Statistics::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "size")
        return true;
    return false;
}

Native::Ip::Ip()
    :
    subnet_zero{YType::boolean, "subnet-zero"},
    host_routing{YType::empty, "host-routing"},
    classless{YType::empty, "classless"},
    domain_name{YType::str, "domain-name"},
    default_gateway{YType::str, "default-gateway"},
    source_route{YType::boolean, "source-route"}
    	,
    admission(std::make_shared<Native::Ip::Admission>())
	,arp(std::make_shared<Native::Ip::Arp>())
	,domain_list(std::make_shared<Native::Ip::DomainList>())
	,finger(nullptr) // presence node
	,rcmd(std::make_shared<Native::Ip::Rcmd>())
	,bgp_community(std::make_shared<Native::Ip::BgpCommunity>())
	,as_path(std::make_shared<Native::Ip::AsPath>())
	,local(std::make_shared<Native::Ip::Local>())
	,cef(nullptr) // presence node
	,domain(std::make_shared<Native::Ip::Domain>())
	,domain_lookup_conf(std::make_shared<Native::Ip::DomainLookupConf>())
	,domain_lookup(nullptr) // presence node
	,dns(std::make_shared<Native::Ip::Dns>())
	,dhcp(std::make_shared<Native::Ip::Dhcp>())
	,forward_protocol(std::make_shared<Native::Ip::ForwardProtocol>())
	,gratuitous_arps_conf(std::make_shared<Native::Ip::GratuitousArpsConf>())
	,ftp(std::make_shared<Native::Ip::Ftp>())
	,telnet(std::make_shared<Native::Ip::Telnet>())
	,host(std::make_shared<Native::Ip::Host>())
	,multicast(std::make_shared<Native::Ip::Multicast>())
	,name_server(std::make_shared<Native::Ip::NameServer>())
	,pim(std::make_shared<Native::Ip::Pim>())
	,prefix_list(std::make_shared<Native::Ip::PrefixList>())
	,route(std::make_shared<Native::Ip::Route>())
	,routing(nullptr) // presence node
	,explicit_path(std::make_shared<Native::Ip::ExplicitPath>())
	,scp(std::make_shared<Native::Ip::Scp>())
	,spd(std::make_shared<Native::Ip::Spd>())
	,bootp(std::make_shared<Native::Ip::Bootp>())
	,ssh(std::make_shared<Native::Ip::Ssh>())
	,tcp(std::make_shared<Native::Ip::Tcp>())
	,tftp(std::make_shared<Native::Ip::Tftp>())
	,access_list(std::make_shared<Native::Ip::AccessList>())
	,device(std::make_shared<Native::Ip::Device>())
	,radius(std::make_shared<Native::Ip::Radius>())
	,tacacs(std::make_shared<Native::Ip::Tacacs>())
	,community_list(std::make_shared<Native::Ip::CommunityList>())
	,extcommunity_list(std::make_shared<Native::Ip::ExtcommunityList>())
	,http(std::make_shared<Native::Ip::Http>())
	,icmp(std::make_shared<Native::Ip::Icmp>())
	,igmp(std::make_shared<Native::Ip::Igmp>())
	,msdp(std::make_shared<Native::Ip::Msdp>())
	,mcr_conf(std::make_shared<Native::Ip::McrConf>())
	,multicast_routing(nullptr) // presence node
	,mroute(std::make_shared<Native::Ip::Mroute>())
	,nat(std::make_shared<Native::Ip::Nat>())
	,nbar(std::make_shared<Native::Ip::Nbar>())
	,rsvp(std::make_shared<Native::Ip::Rsvp>())
	,sla(std::make_shared<Native::Ip::Sla>())
	,wccp(std::make_shared<Native::Ip::Wccp>())
{
    admission->parent = this;
    arp->parent = this;
    domain_list->parent = this;
    rcmd->parent = this;
    bgp_community->parent = this;
    as_path->parent = this;
    local->parent = this;
    domain->parent = this;
    domain_lookup_conf->parent = this;
    dns->parent = this;
    dhcp->parent = this;
    forward_protocol->parent = this;
    gratuitous_arps_conf->parent = this;
    ftp->parent = this;
    telnet->parent = this;
    host->parent = this;
    multicast->parent = this;
    name_server->parent = this;
    pim->parent = this;
    prefix_list->parent = this;
    route->parent = this;
    explicit_path->parent = this;
    scp->parent = this;
    spd->parent = this;
    bootp->parent = this;
    ssh->parent = this;
    tcp->parent = this;
    tftp->parent = this;
    access_list->parent = this;
    device->parent = this;
    radius->parent = this;
    tacacs->parent = this;
    community_list->parent = this;
    extcommunity_list->parent = this;
    http->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    msdp->parent = this;
    mcr_conf->parent = this;
    mroute->parent = this;
    nat->parent = this;
    nbar->parent = this;
    rsvp->parent = this;
    sla->parent = this;
    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::~Ip()
{
}

bool Native::Ip::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return subnet_zero.is_set
	|| host_routing.is_set
	|| classless.is_set
	|| domain_name.is_set
	|| default_gateway.is_set
	|| source_route.is_set
	|| (admission !=  nullptr && admission->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (domain_list !=  nullptr && domain_list->has_data())
	|| (finger !=  nullptr && finger->has_data())
	|| (rcmd !=  nullptr && rcmd->has_data())
	|| (bgp_community !=  nullptr && bgp_community->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_data())
	|| (domain_lookup !=  nullptr && domain_lookup->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (forward_protocol !=  nullptr && forward_protocol->has_data())
	|| (gratuitous_arps_conf !=  nullptr && gratuitous_arps_conf->has_data())
	|| (ftp !=  nullptr && ftp->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (name_server !=  nullptr && name_server->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (prefix_list !=  nullptr && prefix_list->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (explicit_path !=  nullptr && explicit_path->has_data())
	|| (scp !=  nullptr && scp->has_data())
	|| (spd !=  nullptr && spd->has_data())
	|| (bootp !=  nullptr && bootp->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (tftp !=  nullptr && tftp->has_data())
	|| (access_list !=  nullptr && access_list->has_data())
	|| (device !=  nullptr && device->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (community_list !=  nullptr && community_list->has_data())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (msdp !=  nullptr && msdp->has_data())
	|| (mcr_conf !=  nullptr && mcr_conf->has_data())
	|| (multicast_routing !=  nullptr && multicast_routing->has_data())
	|| (mroute !=  nullptr && mroute->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (sla !=  nullptr && sla->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Ip::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(subnet_zero.yfilter)
	|| ydk::is_set(host_routing.yfilter)
	|| ydk::is_set(classless.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(default_gateway.yfilter)
	|| ydk::is_set(source_route.yfilter)
	|| (admission !=  nullptr && admission->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (domain_list !=  nullptr && domain_list->has_operation())
	|| (finger !=  nullptr && finger->has_operation())
	|| (rcmd !=  nullptr && rcmd->has_operation())
	|| (bgp_community !=  nullptr && bgp_community->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_operation())
	|| (domain_lookup !=  nullptr && domain_lookup->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (forward_protocol !=  nullptr && forward_protocol->has_operation())
	|| (gratuitous_arps_conf !=  nullptr && gratuitous_arps_conf->has_operation())
	|| (ftp !=  nullptr && ftp->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (name_server !=  nullptr && name_server->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (prefix_list !=  nullptr && prefix_list->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (explicit_path !=  nullptr && explicit_path->has_operation())
	|| (scp !=  nullptr && scp->has_operation())
	|| (spd !=  nullptr && spd->has_operation())
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (tftp !=  nullptr && tftp->has_operation())
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (device !=  nullptr && device->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (community_list !=  nullptr && community_list->has_operation())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (msdp !=  nullptr && msdp->has_operation())
	|| (mcr_conf !=  nullptr && mcr_conf->has_operation())
	|| (multicast_routing !=  nullptr && multicast_routing->has_operation())
	|| (mroute !=  nullptr && mroute->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (sla !=  nullptr && sla->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet_zero.is_set || is_set(subnet_zero.yfilter)) leaf_name_data.push_back(subnet_zero.get_name_leafdata());
    if (host_routing.is_set || is_set(host_routing.yfilter)) leaf_name_data.push_back(host_routing.get_name_leafdata());
    if (classless.is_set || is_set(classless.yfilter)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (default_gateway.is_set || is_set(default_gateway.yfilter)) leaf_name_data.push_back(default_gateway.get_name_leafdata());
    if (source_route.is_set || is_set(source_route.yfilter)) leaf_name_data.push_back(source_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Ip::Admission>();
        }
        return admission;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "domain-list")
    {
        if(domain_list == nullptr)
        {
            domain_list = std::make_shared<Native::Ip::DomainList>();
        }
        return domain_list;
    }

    if(child_yang_name == "finger")
    {
        if(finger == nullptr)
        {
            finger = std::make_shared<Native::Ip::Finger>();
        }
        return finger;
    }

    if(child_yang_name == "rcmd")
    {
        if(rcmd == nullptr)
        {
            rcmd = std::make_shared<Native::Ip::Rcmd>();
        }
        return rcmd;
    }

    if(child_yang_name == "bgp-community")
    {
        if(bgp_community == nullptr)
        {
            bgp_community = std::make_shared<Native::Ip::BgpCommunity>();
        }
        return bgp_community;
    }

    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ip::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::Ip::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Ip::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Ip::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "domain-lookup-conf")
    {
        if(domain_lookup_conf == nullptr)
        {
            domain_lookup_conf = std::make_shared<Native::Ip::DomainLookupConf>();
        }
        return domain_lookup_conf;
    }

    if(child_yang_name == "domain-lookup")
    {
        if(domain_lookup == nullptr)
        {
            domain_lookup = std::make_shared<Native::Ip::DomainLookup>();
        }
        return domain_lookup;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "forward-protocol")
    {
        if(forward_protocol == nullptr)
        {
            forward_protocol = std::make_shared<Native::Ip::ForwardProtocol>();
        }
        return forward_protocol;
    }

    if(child_yang_name == "gratuitous-arps-conf")
    {
        if(gratuitous_arps_conf == nullptr)
        {
            gratuitous_arps_conf = std::make_shared<Native::Ip::GratuitousArpsConf>();
        }
        return gratuitous_arps_conf;
    }

    if(child_yang_name == "ftp")
    {
        if(ftp == nullptr)
        {
            ftp = std::make_shared<Native::Ip::Ftp>();
        }
        return ftp;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Ip::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Ip::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "name-server")
    {
        if(name_server == nullptr)
        {
            name_server = std::make_shared<Native::Ip::NameServer>();
        }
        return name_server;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Native::Ip::PrefixList>();
        }
        return prefix_list;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Ip::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "explicit-path")
    {
        if(explicit_path == nullptr)
        {
            explicit_path = std::make_shared<Native::Ip::ExplicitPath>();
        }
        return explicit_path;
    }

    if(child_yang_name == "scp")
    {
        if(scp == nullptr)
        {
            scp = std::make_shared<Native::Ip::Scp>();
        }
        return scp;
    }

    if(child_yang_name == "spd")
    {
        if(spd == nullptr)
        {
            spd = std::make_shared<Native::Ip::Spd>();
        }
        return spd;
    }

    if(child_yang_name == "bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Native::Ip::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "tftp")
    {
        if(tftp == nullptr)
        {
            tftp = std::make_shared<Native::Ip::Tftp>();
        }
        return tftp;
    }

    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Ip::Device>();
        }
        return device;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Ip::Radius>();
        }
        return radius;
    }

    if(child_yang_name == "Cisco-IOS-XE-aaa:tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Native::Ip::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "Cisco-IOS-XE-bgp:community-list")
    {
        if(community_list == nullptr)
        {
            community_list = std::make_shared<Native::Ip::CommunityList>();
        }
        return community_list;
    }

    if(child_yang_name == "Cisco-IOS-XE-bgp:extcommunity-list")
    {
        if(extcommunity_list == nullptr)
        {
            extcommunity_list = std::make_shared<Native::Ip::ExtcommunityList>();
        }
        return extcommunity_list;
    }

    if(child_yang_name == "Cisco-IOS-XE-http:http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Http>();
        }
        return http;
    }

    if(child_yang_name == "Cisco-IOS-XE-icmp:icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Ip::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-igmp:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:msdp")
    {
        if(msdp == nullptr)
        {
            msdp = std::make_shared<Native::Ip::Msdp>();
        }
        return msdp;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:mcr-conf")
    {
        if(mcr_conf == nullptr)
        {
            mcr_conf = std::make_shared<Native::Ip::McrConf>();
        }
        return mcr_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:multicast-routing")
    {
        if(multicast_routing == nullptr)
        {
            multicast_routing = std::make_shared<Native::Ip::MulticastRouting>();
        }
        return multicast_routing;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:mroute")
    {
        if(mroute == nullptr)
        {
            mroute = std::make_shared<Native::Ip::Mroute>();
        }
        return mroute;
    }

    if(child_yang_name == "Cisco-IOS-XE-nat:nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Ip::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "Cisco-IOS-XE-nbar:nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "Cisco-IOS-XE-rsvp:rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Ip::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "Cisco-IOS-XE-sla:sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Ip::Sla>();
        }
        return sla;
    }

    if(child_yang_name == "Cisco-IOS-XE-wccp:wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(domain_list != nullptr)
    {
        children["domain-list"] = domain_list;
    }

    if(finger != nullptr)
    {
        children["finger"] = finger;
    }

    if(rcmd != nullptr)
    {
        children["rcmd"] = rcmd;
    }

    if(bgp_community != nullptr)
    {
        children["bgp-community"] = bgp_community;
    }

    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(domain_lookup_conf != nullptr)
    {
        children["domain-lookup-conf"] = domain_lookup_conf;
    }

    if(domain_lookup != nullptr)
    {
        children["domain-lookup"] = domain_lookup;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(forward_protocol != nullptr)
    {
        children["forward-protocol"] = forward_protocol;
    }

    if(gratuitous_arps_conf != nullptr)
    {
        children["gratuitous-arps-conf"] = gratuitous_arps_conf;
    }

    if(ftp != nullptr)
    {
        children["ftp"] = ftp;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(name_server != nullptr)
    {
        children["name-server"] = name_server;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(prefix_list != nullptr)
    {
        children["prefix-list"] = prefix_list;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(explicit_path != nullptr)
    {
        children["explicit-path"] = explicit_path;
    }

    if(scp != nullptr)
    {
        children["scp"] = scp;
    }

    if(spd != nullptr)
    {
        children["spd"] = spd;
    }

    if(bootp != nullptr)
    {
        children["bootp"] = bootp;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(tftp != nullptr)
    {
        children["tftp"] = tftp;
    }

    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(device != nullptr)
    {
        children["device"] = device;
    }

    if(radius != nullptr)
    {
        children["Cisco-IOS-XE-aaa:radius"] = radius;
    }

    if(tacacs != nullptr)
    {
        children["Cisco-IOS-XE-aaa:tacacs"] = tacacs;
    }

    if(community_list != nullptr)
    {
        children["Cisco-IOS-XE-bgp:community-list"] = community_list;
    }

    if(extcommunity_list != nullptr)
    {
        children["Cisco-IOS-XE-bgp:extcommunity-list"] = extcommunity_list;
    }

    if(http != nullptr)
    {
        children["Cisco-IOS-XE-http:http"] = http;
    }

    if(icmp != nullptr)
    {
        children["Cisco-IOS-XE-icmp:icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["Cisco-IOS-XE-igmp:igmp"] = igmp;
    }

    if(msdp != nullptr)
    {
        children["Cisco-IOS-XE-multicast:msdp"] = msdp;
    }

    if(mcr_conf != nullptr)
    {
        children["Cisco-IOS-XE-multicast:mcr-conf"] = mcr_conf;
    }

    if(multicast_routing != nullptr)
    {
        children["Cisco-IOS-XE-multicast:multicast-routing"] = multicast_routing;
    }

    if(mroute != nullptr)
    {
        children["Cisco-IOS-XE-multicast:mroute"] = mroute;
    }

    if(nat != nullptr)
    {
        children["Cisco-IOS-XE-nat:nat"] = nat;
    }

    if(nbar != nullptr)
    {
        children["Cisco-IOS-XE-nbar:nbar"] = nbar;
    }

    if(rsvp != nullptr)
    {
        children["Cisco-IOS-XE-rsvp:rsvp"] = rsvp;
    }

    if(sla != nullptr)
    {
        children["Cisco-IOS-XE-sla:sla"] = sla;
    }

    if(wccp != nullptr)
    {
        children["Cisco-IOS-XE-wccp:wccp"] = wccp;
    }

    return children;
}

void Native::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet-zero")
    {
        subnet_zero = value;
        subnet_zero.value_namespace = name_space;
        subnet_zero.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-routing")
    {
        host_routing = value;
        host_routing.value_namespace = name_space;
        host_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "classless")
    {
        classless = value;
        classless.value_namespace = name_space;
        classless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-gateway")
    {
        default_gateway = value;
        default_gateway.value_namespace = name_space;
        default_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route")
    {
        source_route = value;
        source_route.value_namespace = name_space;
        source_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet-zero")
    {
        subnet_zero.yfilter = yfilter;
    }
    if(value_path == "host-routing")
    {
        host_routing.yfilter = yfilter;
    }
    if(value_path == "classless")
    {
        classless.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "default-gateway")
    {
        default_gateway.yfilter = yfilter;
    }
    if(value_path == "source-route")
    {
        source_route.yfilter = yfilter;
    }
}

bool Native::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admission" || name == "arp" || name == "domain-list" || name == "finger" || name == "rcmd" || name == "bgp-community" || name == "vrf" || name == "as-path" || name == "local" || name == "cef" || name == "domain" || name == "domain-lookup-conf" || name == "domain-lookup" || name == "dns" || name == "dhcp" || name == "forward-protocol" || name == "gratuitous-arps-conf" || name == "ftp" || name == "telnet" || name == "host" || name == "multicast" || name == "name-server" || name == "pim" || name == "prefix-list" || name == "route" || name == "routing" || name == "explicit-path" || name == "scp" || name == "spd" || name == "bootp" || name == "ssh" || name == "tcp" || name == "tftp" || name == "access-list" || name == "device" || name == "radius" || name == "tacacs" || name == "community-list" || name == "extcommunity-list" || name == "http" || name == "icmp" || name == "igmp" || name == "msdp" || name == "mcr-conf" || name == "multicast-routing" || name == "mroute" || name == "nat" || name == "nbar" || name == "rsvp" || name == "sla" || name == "wccp" || name == "subnet-zero" || name == "host-routing" || name == "classless" || name == "domain-name" || name == "default-gateway" || name == "source-route")
        return true;
    return false;
}

Native::Ip::Admission::Admission()
    :
    watch_list(std::make_shared<Native::Ip::Admission::WatchList>())
	,name(std::make_shared<Native::Ip::Admission::Name>())
{
    watch_list->parent = this;
    name->parent = this;

    yang_name = "admission"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::~Admission()
{
}

bool Native::Ip::Admission::has_data() const
{
    return (watch_list !=  nullptr && watch_list->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Ip::Admission::has_operation() const
{
    return is_set(yfilter)
	|| (watch_list !=  nullptr && watch_list->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Ip::Admission::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::Ip::Admission::WatchList>();
        }
        return watch_list;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Ip::Admission::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(watch_list != nullptr)
    {
        children["watch-list"] = watch_list;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Ip::Admission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "watch-list" || name == "name")
        return true;
    return false;
}

Native::Ip::Admission::WatchList::WatchList()
    :
    expiry_time{YType::uint16, "expiry-time"}
{

    yang_name = "watch-list"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::WatchList::~WatchList()
{
}

bool Native::Ip::Admission::WatchList::has_data() const
{
    return expiry_time.is_set;
}

bool Native::Ip::Admission::WatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry_time.yfilter);
}

std::string Native::Ip::Admission::WatchList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Admission::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Admission::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
}

bool Native::Ip::Admission::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time")
        return true;
    return false;
}

Native::Ip::Admission::Name::Name()
    :
    webauth(std::make_shared<Native::Ip::Admission::Name::Webauth>())
{
    webauth->parent = this;

    yang_name = "name"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::Name::~Name()
{
}

bool Native::Ip::Admission::Name::has_data() const
{
    return (webauth !=  nullptr && webauth->has_data());
}

bool Native::Ip::Admission::Name::has_operation() const
{
    return is_set(yfilter)
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Ip::Admission::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Ip::Admission::Name::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Ip::Admission::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "webauth")
        return true;
    return false;
}

Native::Ip::Admission::Name::Webauth::Webauth()
    :
    proxy(std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>())
{
    proxy->parent = this;

    yang_name = "webauth"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::Name::Webauth::~Webauth()
{
}

bool Native::Ip::Admission::Name::Webauth::has_data() const
{
    return (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Admission::Name::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Admission::Name::Webauth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Admission::Name::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::Name::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::Name::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy")
        return true;
    return false;
}

Native::Ip::Admission::Name::Webauth::Proxy::Proxy()
    :
    http{YType::empty, "http"}
{

    yang_name = "proxy"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::Name::Webauth::Proxy::~Proxy()
{
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_data() const
{
    return http.is_set;
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(http.yfilter);
}

std::string Native::Ip::Admission::Name::Webauth::Proxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/webauth/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::Webauth::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::Webauth::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Admission::Name::Webauth::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Admission::Name::Webauth::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http")
        return true;
    return false;
}

Native::Ip::Arp::Arp()
    :
    incomplete(std::make_shared<Native::Ip::Arp::Incomplete>())
	,inspection(std::make_shared<Native::Ip::Arp::Inspection>())
	,proxy(std::make_shared<Native::Ip::Arp::Proxy>())
{
    incomplete->parent = this;
    inspection->parent = this;
    proxy->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::~Arp()
{
}

bool Native::Ip::Arp::has_data() const
{
    return (incomplete !=  nullptr && incomplete->has_data())
	|| (inspection !=  nullptr && inspection->has_data())
	|| (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (incomplete !=  nullptr && incomplete->has_operation())
	|| (inspection !=  nullptr && inspection->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Arp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incomplete")
    {
        if(incomplete == nullptr)
        {
            incomplete = std::make_shared<Native::Ip::Arp::Incomplete>();
        }
        return incomplete;
    }

    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Arp::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(incomplete != nullptr)
    {
        children["incomplete"] = incomplete;
    }

    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete" || name == "inspection" || name == "proxy")
        return true;
    return false;
}

Native::Ip::Arp::Incomplete::Incomplete()
    :
    entries{YType::uint32, "entries"}
{

    yang_name = "incomplete"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Incomplete::~Incomplete()
{
}

bool Native::Ip::Arp::Incomplete::has_data() const
{
    return entries.is_set;
}

bool Native::Ip::Arp::Incomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter);
}

std::string Native::Ip::Arp::Incomplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Incomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Incomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Incomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Incomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Incomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Incomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Incomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Inspection()
    :
    vlan{YType::str, "vlan"}
    	,
    validate(std::make_shared<Native::Ip::Arp::Inspection::Validate>())
	,log_buffer(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>())
{
    validate->parent = this;
    log_buffer->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Ip::Arp::Inspection::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return vlan.is_set
	|| (validate !=  nullptr && validate->has_data())
	|| (log_buffer !=  nullptr && log_buffer->has_data());
}

bool Native::Ip::Arp::Inspection::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (validate !=  nullptr && validate->has_operation())
	|| (log_buffer !=  nullptr && log_buffer->has_operation());
}

std::string Native::Ip::Arp::Inspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ip::Arp::Inspection::Validate>();
        }
        return validate;
    }

    if(child_yang_name == "log-buffer")
    {
        if(log_buffer == nullptr)
        {
            log_buffer = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>();
        }
        return log_buffer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    if(log_buffer != nullptr)
    {
        children["log-buffer"] = log_buffer;
    }

    return children;
}

void Native::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "validate" || name == "log-buffer" || name == "vlan")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Filter::Filter()
    :
    arpacl{YType::str, "arpacl"}
{

    yang_name = "filter"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::Filter::~Filter()
{
}

bool Native::Ip::Arp::Inspection::Filter::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return arpacl.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(arpacl.yfilter);
}

std::string Native::Ip::Arp::Inspection::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter" <<"[arpacl='" <<arpacl <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpacl.is_set || is_set(arpacl.yfilter)) leaf_name_data.push_back(arpacl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpacl")
    {
        arpacl = value;
        arpacl.value_namespace = name_space;
        arpacl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpacl")
    {
        arpacl.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "arpacl")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Filter::Vlan::Vlan()
    :
    vlan_range{YType::str, "vlan-range"},
    static_{YType::empty, "static"}
{

    yang_name = "vlan"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Arp::Inspection::Filter::Vlan::~Vlan()
{
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_data() const
{
    return vlan_range.is_set
	|| static_.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_range.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Ip::Arp::Inspection::Filter::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[vlan-range='" <<vlan_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Filter::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_range.is_set || is_set(vlan_range.yfilter)) leaf_name_data.push_back(vlan_range.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Inspection::Filter::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-range")
    {
        vlan_range = value;
        vlan_range.value_namespace = name_space;
        vlan_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Filter::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-range")
    {
        vlan_range.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "static")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Validate::Validate()
    :
    src_mac{YType::empty, "src-mac"},
    dst_mac{YType::empty, "dst-mac"},
    ip{YType::empty, "ip"}
    	,
    allow(std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>())
{
    allow->parent = this;

    yang_name = "validate"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::Validate::~Validate()
{
}

bool Native::Ip::Arp::Inspection::Validate::has_data() const
{
    return src_mac.is_set
	|| dst_mac.is_set
	|| ip.is_set
	|| (allow !=  nullptr && allow->has_data());
}

bool Native::Ip::Arp::Inspection::Validate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_mac.yfilter)
	|| ydk::is_set(dst_mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Ip::Arp::Inspection::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_mac.is_set || is_set(src_mac.yfilter)) leaf_name_data.push_back(src_mac.get_name_leafdata());
    if (dst_mac.is_set || is_set(dst_mac.yfilter)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-mac")
    {
        src_mac = value;
        src_mac.value_namespace = name_space;
        src_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-mac")
    {
        dst_mac = value;
        dst_mac.value_namespace = name_space;
        dst_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-mac")
    {
        src_mac.yfilter = yfilter;
    }
    if(value_path == "dst-mac")
    {
        dst_mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "src-mac" || name == "dst-mac" || name == "ip")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Validate::Allow::Allow()
    :
    zeros{YType::empty, "zeros"}
{

    yang_name = "allow"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::Validate::Allow::~Allow()
{
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_data() const
{
    return zeros.is_set;
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(zeros.yfilter);
}

std::string Native::Ip::Arp::Inspection::Validate::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Validate::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Validate::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zeros.is_set || is_set(zeros.yfilter)) leaf_name_data.push_back(zeros.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Inspection::Validate::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zeros")
    {
        zeros = value;
        zeros.value_namespace = name_space;
        zeros.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Validate::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zeros")
    {
        zeros.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zeros")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::LogBuffer::LogBuffer()
    :
    entries{YType::uint16, "entries"}
    	,
    logs(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>())
{
    logs->parent = this;

    yang_name = "log-buffer"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::LogBuffer::~LogBuffer()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_data() const
{
    return entries.is_set
	|| (logs !=  nullptr && logs->has_data());
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| (logs !=  nullptr && logs->has_operation());
}

std::string Native::Ip::Arp::Inspection::LogBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::LogBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::LogBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>();
        }
        return logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(logs != nullptr)
    {
        children["logs"] = logs;
    }

    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::LogBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logs" || name == "entries")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::Logs()
    :
    entries{YType::uint16, "entries"},
    interval{YType::uint32, "interval"}
{

    yang_name = "logs"; yang_parent_name = "log-buffer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::~Logs()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_data() const
{
    return entries.is_set
	|| interval.is_set;
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Arp::Inspection::LogBuffer::Logs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/log-buffer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::LogBuffer::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::LogBuffer::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::LogBuffer::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries" || name == "interval")
        return true;
    return false;
}

Native::Ip::Arp::Proxy::Proxy()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "proxy"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Proxy::~Proxy()
{
}

bool Native::Ip::Arp::Proxy::has_data() const
{
    return disable.is_set;
}

bool Native::Ip::Arp::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Ip::Arp::Proxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Arp::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Ip::DomainList::DomainList()
    :
    domain_name{YType::str, "domain-name"}
    	,
    vrf(std::make_shared<Native::Ip::DomainList::Vrf>())
{
    vrf->parent = this;

    yang_name = "domain-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainList::~DomainList()
{
}

bool Native::Ip::DomainList::has_data() const
{
    return domain_name.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ip::DomainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ip::DomainList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ip::DomainList::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Ip::DomainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::DomainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::DomainList::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    domain_name{YType::str, "domain-name"}
{

    yang_name = "vrf"; yang_parent_name = "domain-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::DomainList::Vrf::~Vrf()
{
}

bool Native::Ip::DomainList::Vrf::has_data() const
{
    return vrf_name.is_set
	|| domain_name.is_set;
}

bool Native::Ip::DomainList::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(domain_name.yfilter);
}

std::string Native::Ip::DomainList::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/domain-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::DomainList::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::DomainList::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::DomainList::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainList::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::DomainList::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::DomainList::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
}

bool Native::Ip::DomainList::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "domain-name")
        return true;
    return false;
}

Native::Ip::Finger::Finger()
{

    yang_name = "finger"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Finger::~Finger()
{
}

bool Native::Ip::Finger::has_data() const
{
    return false;
}

bool Native::Ip::Finger::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Finger::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Finger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "finger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Finger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Finger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Finger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Finger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Finger::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Finger::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Rcmd::Rcmd()
    :
    rcp_enable{YType::empty, "rcp-enable"},
    rsh_enable{YType::empty, "rsh-enable"}
{

    yang_name = "rcmd"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rcmd::~Rcmd()
{
}

bool Native::Ip::Rcmd::has_data() const
{
    return rcp_enable.is_set
	|| rsh_enable.is_set;
}

bool Native::Ip::Rcmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rcp_enable.yfilter)
	|| ydk::is_set(rsh_enable.yfilter);
}

std::string Native::Ip::Rcmd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rcmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rcmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rcp_enable.is_set || is_set(rcp_enable.yfilter)) leaf_name_data.push_back(rcp_enable.get_name_leafdata());
    if (rsh_enable.is_set || is_set(rsh_enable.yfilter)) leaf_name_data.push_back(rsh_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rcmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rcmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rcmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rcp-enable")
    {
        rcp_enable = value;
        rcp_enable.value_namespace = name_space;
        rcp_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsh-enable")
    {
        rsh_enable = value;
        rsh_enable.value_namespace = name_space;
        rsh_enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rcmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rcp-enable")
    {
        rcp_enable.yfilter = yfilter;
    }
    if(value_path == "rsh-enable")
    {
        rsh_enable.yfilter = yfilter;
    }
}

bool Native::Ip::Rcmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rcp-enable" || name == "rsh-enable")
        return true;
    return false;
}

Native::Ip::BgpCommunity::BgpCommunity()
    :
    new_format{YType::empty, "new-format"}
{

    yang_name = "bgp-community"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::BgpCommunity::~BgpCommunity()
{
}

bool Native::Ip::BgpCommunity::has_data() const
{
    return new_format.is_set;
}

bool Native::Ip::BgpCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(new_format.yfilter);
}

std::string Native::Ip::BgpCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::BgpCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::BgpCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_format.is_set || is_set(new_format.yfilter)) leaf_name_data.push_back(new_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::BgpCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::BgpCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::BgpCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-format")
    {
        new_format = value;
        new_format.value_namespace = name_space;
        new_format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::BgpCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-format")
    {
        new_format.yfilter = yfilter;
    }
}

bool Native::Ip::BgpCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-format")
        return true;
    return false;
}

Native::Ip::Vrf::Vrf()
    :
    name{YType::str, "name"},
    context{YType::str, "context"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
    	,
    bgp(std::make_shared<Native::Ip::Vrf::Bgp>())
	,export_(std::make_shared<Native::Ip::Vrf::Export>())
	,import(std::make_shared<Native::Ip::Vrf::Import>())
	,maximum(nullptr) // presence node
	,mdt(nullptr) // presence node
	,vpn(std::make_shared<Native::Ip::Vrf::Vpn>())
{
    bgp->parent = this;
    export_->parent = this;
    import->parent = this;
    vpn->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Vrf::~Vrf()
{
}

bool Native::Ip::Vrf::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return name.is_set
	|| context.is_set
	|| description.is_set
	|| rd.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Ip::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Ip::Vrf::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Ip::Vrf::Export>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Ip::Vrf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Ip::Vrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Ip::Vrf::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        auto c = std::make_shared<Native::Ip::Vrf::RouteTarget>();
        c->parent = this;
        route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Ip::Vrf::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    count = 0;
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "export" || name == "import" || name == "maximum" || name == "mdt" || name == "route-target" || name == "vpn" || name == "name" || name == "context" || name == "description" || name == "rd")
        return true;
    return false;
}

Native::Ip::Vrf::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Ip::Vrf::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Bgp::~Bgp()
{
}

bool Native::Ip::Vrf::Bgp::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Ip::Vrf::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Ip::Vrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Ip::Vrf::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Ip::Vrf::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Vrf::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Vrf::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop")
        return true;
    return false;
}

Native::Ip::Vrf::Bgp::NextHop::NextHop()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Bgp::NextHop::~NextHop()
{
}

bool Native::Ip::Vrf::Bgp::NextHop::has_data() const
{
    return loopback.is_set;
}

bool Native::Ip::Vrf::Bgp::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Ip::Vrf::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Bgp::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Bgp::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Bgp::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Bgp::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Ip::Vrf::Export::Export()
    :
    map{YType::str, "map"}
    	,
    ipv4(std::make_shared<Native::Ip::Vrf::Export::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "export"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Export::~Export()
{
}

bool Native::Ip::Vrf::Export::has_data() const
{
    return map.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Ip::Vrf::Export::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Ip::Vrf::Export::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Export::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Export::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ip::Vrf::Export::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Export::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Ip::Vrf::Export::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Export::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Export::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Export::Ipv4::Ipv4()
    :
    ipv4_type{YType::enumeration, "ipv4-type"},
    upper_limit{YType::uint32, "upper-limit"},
    map{YType::str, "map"},
    map_only{YType::str, "map-only"}
{

    yang_name = "ipv4"; yang_parent_name = "export"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Export::Ipv4::~Ipv4()
{
}

bool Native::Ip::Vrf::Export::Ipv4::has_data() const
{
    return ipv4_type.is_set
	|| upper_limit.is_set
	|| map.is_set
	|| map_only.is_set;
}

bool Native::Ip::Vrf::Export::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_type.yfilter)
	|| ydk::is_set(upper_limit.yfilter)
	|| ydk::is_set(map.yfilter)
	|| ydk::is_set(map_only.yfilter);
}

std::string Native::Ip::Vrf::Export::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Export::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_type.is_set || is_set(ipv4_type.yfilter)) leaf_name_data.push_back(ipv4_type.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());
    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());
    if (map_only.is_set || is_set(map_only.yfilter)) leaf_name_data.push_back(map_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Export::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Export::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Export::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type = value;
        ipv4_type.value_namespace = name_space;
        ipv4_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-only")
    {
        map_only = value;
        map_only.value_namespace = name_space;
        map_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Export::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
    if(value_path == "map-only")
    {
        map_only.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Export::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-type" || name == "upper-limit" || name == "map" || name == "map-only")
        return true;
    return false;
}

Native::Ip::Vrf::Import::Import()
    :
    map{YType::str, "map"}
    	,
    ipv4(std::make_shared<Native::Ip::Vrf::Import::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "import"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Import::~Import()
{
}

bool Native::Ip::Vrf::Import::has_data() const
{
    return map.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Ip::Vrf::Import::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Ip::Vrf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ip::Vrf::Import::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Ip::Vrf::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Import::Ipv4::Ipv4()
    :
    ipv4_type{YType::enumeration, "ipv4-type"},
    upper_limit{YType::uint32, "upper-limit"},
    map{YType::str, "map"}
{

    yang_name = "ipv4"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Import::Ipv4::~Ipv4()
{
}

bool Native::Ip::Vrf::Import::Ipv4::has_data() const
{
    return ipv4_type.is_set
	|| upper_limit.is_set
	|| map.is_set;
}

bool Native::Ip::Vrf::Import::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_type.yfilter)
	|| ydk::is_set(upper_limit.yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Ip::Vrf::Import::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Import::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_type.is_set || is_set(ipv4_type.yfilter)) leaf_name_data.push_back(ipv4_type.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.yfilter)) leaf_name_data.push_back(upper_limit.get_name_leafdata());
    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Import::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type = value;
        ipv4_type.value_namespace = name_space;
        ipv4_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
        upper_limit.value_namespace = name_space;
        upper_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Import::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type.yfilter = yfilter;
    }
    if(value_path == "upper-limit")
    {
        upper_limit.yfilter = yfilter;
    }
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Import::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-type" || name == "upper-limit" || name == "map")
        return true;
    return false;
}

Native::Ip::Vrf::Maximum::Maximum()
    :
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    reinstall{YType::uint16, "reinstall"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Maximum::~Maximum()
{
}

bool Native::Ip::Vrf::Maximum::has_data() const
{
    return routes.is_set
	|| threshold.is_set
	|| reinstall.is_set
	|| warning_only.is_set;
}

bool Native::Ip::Vrf::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routes.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(reinstall.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Ip::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routes.is_set || is_set(routes.yfilter)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (reinstall.is_set || is_set(reinstall.yfilter)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routes")
    {
        routes = value;
        routes.value_namespace = name_space;
        routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reinstall")
    {
        reinstall = value;
        reinstall.value_namespace = name_space;
        reinstall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routes")
    {
        routes.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "reinstall")
    {
        reinstall.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routes" || name == "threshold" || name == "reinstall" || name == "warning-only")
        return true;
    return false;
}

Native::Ip::Vrf::Mdt::Mdt()
    :
    default_{YType::str, "default"},
    log_reuse{YType::empty, "log-reuse"}
    	,
    data(std::make_shared<Native::Ip::Vrf::Mdt::Data>())
{
    data->parent = this;

    yang_name = "mdt"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Mdt::~Mdt()
{
}

bool Native::Ip::Vrf::Mdt::has_data() const
{
    return default_.is_set
	|| log_reuse.is_set
	|| (data !=  nullptr && data->has_data());
}

bool Native::Ip::Vrf::Mdt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(log_reuse.yfilter)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Ip::Vrf::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Mdt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (log_reuse.is_set || is_set(log_reuse.yfilter)) leaf_name_data.push_back(log_reuse.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Ip::Vrf::Mdt::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Ip::Vrf::Mdt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-reuse")
    {
        log_reuse = value;
        log_reuse.value_namespace = name_space;
        log_reuse.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Mdt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "log-reuse")
    {
        log_reuse.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Mdt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "default" || name == "log-reuse")
        return true;
    return false;
}

Native::Ip::Vrf::Mdt::Data::Data()
    :
    mulicast_address{YType::str, "mulicast-address"},
    wildcard_bits{YType::str, "wildcard-bits"},
    threshold{YType::uint32, "threshold"},
    threshold_list{YType::str, "threshold-list"},
    list{YType::str, "list"}
{

    yang_name = "data"; yang_parent_name = "mdt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Mdt::Data::~Data()
{
}

bool Native::Ip::Vrf::Mdt::Data::has_data() const
{
    return mulicast_address.is_set
	|| wildcard_bits.is_set
	|| threshold.is_set
	|| threshold_list.is_set
	|| list.is_set;
}

bool Native::Ip::Vrf::Mdt::Data::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mulicast_address.yfilter)
	|| ydk::is_set(wildcard_bits.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(threshold_list.yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Ip::Vrf::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Mdt::Data::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mulicast_address.is_set || is_set(mulicast_address.yfilter)) leaf_name_data.push_back(mulicast_address.get_name_leafdata());
    if (wildcard_bits.is_set || is_set(wildcard_bits.yfilter)) leaf_name_data.push_back(wildcard_bits.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_list.is_set || is_set(threshold_list.yfilter)) leaf_name_data.push_back(threshold_list.get_name_leafdata());
    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Mdt::Data::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mulicast-address")
    {
        mulicast_address = value;
        mulicast_address.value_namespace = name_space;
        mulicast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard-bits")
    {
        wildcard_bits = value;
        wildcard_bits.value_namespace = name_space;
        wildcard_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-list")
    {
        threshold_list = value;
        threshold_list.value_namespace = name_space;
        threshold_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Mdt::Data::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mulicast-address")
    {
        mulicast_address.yfilter = yfilter;
    }
    if(value_path == "wildcard-bits")
    {
        wildcard_bits.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-list")
    {
        threshold_list.yfilter = yfilter;
    }
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Mdt::Data::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast-address" || name == "wildcard-bits" || name == "threshold" || name == "threshold-list" || name == "list")
        return true;
    return false;
}

Native::Ip::Vrf::RouteTarget::RouteTarget()
    :
    direction{YType::enumeration, "direction"},
    target{YType::str, "target"}
{

    yang_name = "route-target"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::RouteTarget::~RouteTarget()
{
}

bool Native::Ip::Vrf::RouteTarget::has_data() const
{
    return direction.is_set
	|| target.is_set;
}

bool Native::Ip::Vrf::RouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(target.yfilter);
}

std::string Native::Ip::Vrf::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[direction='" <<direction <<"']" <<"[target='" <<target <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::RouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (target.is_set || is_set(target.yfilter)) leaf_name_data.push_back(target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::RouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target")
    {
        target = value;
        target.value_namespace = name_space;
        target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::RouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "target")
    {
        target.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::RouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "target")
        return true;
    return false;
}

Native::Ip::Vrf::Vpn::Vpn()
    :
    id{YType::str, "id"}
{

    yang_name = "vpn"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Vrf::Vpn::~Vpn()
{
}

bool Native::Ip::Vrf::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::Ip::Vrf::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Vrf::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Vrf::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Vrf::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Vrf::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Vrf::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Ip::AsPath::AsPath()
{

    yang_name = "as-path"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AsPath::~AsPath()
{
}

bool Native::Ip::AsPath::has_data() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::has_operation() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AsPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bgp:access-list")
    {
        auto c = std::make_shared<Native::Ip::AsPath::AccessList>();
        c->parent = this;
        access_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : access_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::AccessList()
    :
    name{YType::uint16, "name"}
    	,
    deny(std::make_shared<Native::Ip::AsPath::AccessList::Deny>())
	,permit(std::make_shared<Native::Ip::AsPath::AccessList::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AsPath::AccessList::~AccessList()
{
}

bool Native::Ip::AsPath::AccessList::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AsPath::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AsPath::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/as-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AsPath::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:access-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AsPath::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AsPath::AccessList::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AsPath::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AsPath::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AsPath::AccessList::Deny::~Deny()
{
}

bool Native::Ip::AsPath::AccessList::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::AsPath::AccessList::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::AsPath::AccessList::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::AsPath::AccessList::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AsPath::AccessList::Permit::~Permit()
{
}

bool Native::Ip::AsPath::AccessList::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::AsPath::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::AsPath::AccessList::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::AsPath::AccessList::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::Local::Local()
{

    yang_name = "local"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Local::~Local()
{
}

bool Native::Ip::Local::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Local::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto c = std::make_shared<Native::Ip::Local::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

Native::Ip::Local::Pool::Pool()
    :
    id{YType::str, "id"},
    start{YType::str, "start"},
    last{YType::str, "last"},
    group{YType::str, "group"}
{

    yang_name = "pool"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Local::Pool::~Pool()
{
}

bool Native::Ip::Local::Pool::has_data() const
{
    return id.is_set
	|| start.is_set
	|| last.is_set
	|| group.is_set;
}

bool Native::Ip::Local::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(last.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Ip::Local::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/local/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Local::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Local::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (last.is_set || is_set(last.yfilter)) leaf_name_data.push_back(last.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Local::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Local::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Local::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last")
    {
        last = value;
        last.value_namespace = name_space;
        last.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Local::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "last")
    {
        last.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Ip::Local::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "start" || name == "last" || name == "group")
        return true;
    return false;
}

Native::Ip::Cef::Cef()
    :
    distributed{YType::empty, "Cisco-IOS-XE-cef:distributed"}
    	,
    accounting(std::make_shared<Native::Ip::Cef::Accounting>())
	,optimize(std::make_shared<Native::Ip::Cef::Optimize>())
	,traffic_statistics(std::make_shared<Native::Ip::Cef::TrafficStatistics>())
	,load_sharing(std::make_shared<Native::Ip::Cef::LoadSharing>())
{
    accounting->parent = this;
    optimize->parent = this;
    traffic_statistics->parent = this;
    load_sharing->parent = this;

    yang_name = "cef"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::~Cef()
{
}

bool Native::Ip::Cef::has_data() const
{
    return distributed.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_data())
	|| (load_sharing !=  nullptr && load_sharing->has_data());
}

bool Native::Ip::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_operation())
	|| (load_sharing !=  nullptr && load_sharing->has_operation());
}

std::string Native::Ip::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-cef:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Ip::Cef::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::Ip::Cef::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:traffic-statistics")
    {
        if(traffic_statistics == nullptr)
        {
            traffic_statistics = std::make_shared<Native::Ip::Cef::TrafficStatistics>();
        }
        return traffic_statistics;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Ip::Cef::LoadSharing>();
        }
        return load_sharing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(accounting != nullptr)
    {
        children["Cisco-IOS-XE-cef:accounting"] = accounting;
    }

    if(optimize != nullptr)
    {
        children["Cisco-IOS-XE-cef:optimize"] = optimize;
    }

    if(traffic_statistics != nullptr)
    {
        children["Cisco-IOS-XE-cef:traffic-statistics"] = traffic_statistics;
    }

    if(load_sharing != nullptr)
    {
        children["Cisco-IOS-XE-cef:load-sharing"] = load_sharing;
    }

    return children;
}

void Native::Ip::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-cef:distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "optimize" || name == "traffic-statistics" || name == "load-sharing" || name == "distributed")
        return true;
    return false;
}

Native::Ip::Cef::Accounting::Accounting()
    :
    per_prefix{YType::empty, "per-prefix"},
    non_recursive{YType::empty, "non-recursive"},
    prefix_length{YType::empty, "prefix-length"},
    load_balance_hash{YType::empty, "load-balance-hash"}
{

    yang_name = "accounting"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::Accounting::~Accounting()
{
}

bool Native::Ip::Cef::Accounting::has_data() const
{
    return per_prefix.is_set
	|| non_recursive.is_set
	|| prefix_length.is_set
	|| load_balance_hash.is_set;
}

bool Native::Ip::Cef::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(non_recursive.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(load_balance_hash.yfilter);
}

std::string Native::Ip::Cef::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (non_recursive.is_set || is_set(non_recursive.yfilter)) leaf_name_data.push_back(non_recursive.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (load_balance_hash.is_set || is_set(load_balance_hash.yfilter)) leaf_name_data.push_back(load_balance_hash.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive")
    {
        non_recursive = value;
        non_recursive.value_namespace = name_space;
        non_recursive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance-hash")
    {
        load_balance_hash = value;
        load_balance_hash.value_namespace = name_space;
        load_balance_hash.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "non-recursive")
    {
        non_recursive.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "load-balance-hash")
    {
        load_balance_hash.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-prefix" || name == "non-recursive" || name == "prefix-length" || name == "load-balance-hash")
        return true;
    return false;
}

Native::Ip::Cef::Optimize::Optimize()
    :
    neighbor(std::make_shared<Native::Ip::Cef::Optimize::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "optimize"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::Optimize::~Optimize()
{
}

bool Native::Ip::Cef::Optimize::has_data() const
{
    return (neighbor !=  nullptr && neighbor->has_data());
}

bool Native::Ip::Cef::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string Native::Ip::Cef::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Cef::Optimize::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void Native::Ip::Cef::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Cef::Optimize::Neighbor::Neighbor()
    :
    resolution{YType::empty, "resolution"}
{

    yang_name = "neighbor"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::Optimize::Neighbor::~Neighbor()
{
}

bool Native::Ip::Cef::Optimize::Neighbor::has_data() const
{
    return resolution.is_set;
}

bool Native::Ip::Cef::Optimize::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resolution.yfilter);
}

std::string Native::Ip::Cef::Optimize::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Optimize::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Optimize::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolution.is_set || is_set(resolution.yfilter)) leaf_name_data.push_back(resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Optimize::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Optimize::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::Optimize::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolution")
    {
        resolution = value;
        resolution.value_namespace = name_space;
        resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::Optimize::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolution")
    {
        resolution.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::Optimize::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution")
        return true;
    return false;
}

Native::Ip::Cef::TrafficStatistics::TrafficStatistics()
    :
    load_interval{YType::uint16, "load-interval"},
    update_rate{YType::uint16, "update-rate"}
{

    yang_name = "traffic-statistics"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::TrafficStatistics::~TrafficStatistics()
{
}

bool Native::Ip::Cef::TrafficStatistics::has_data() const
{
    return load_interval.is_set
	|| update_rate.is_set;
}

bool Native::Ip::Cef::TrafficStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Native::Ip::Cef::TrafficStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::TrafficStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:traffic-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::TrafficStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::TrafficStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::TrafficStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::TrafficStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::TrafficStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::TrafficStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-interval" || name == "update-rate")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::LoadSharing()
    :
    algorithm(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>())
	,key_control(std::make_shared<Native::Ip::Cef::LoadSharing::KeyControl>())
{
    algorithm->parent = this;
    key_control->parent = this;

    yang_name = "load-sharing"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::~LoadSharing()
{
}

bool Native::Ip::Cef::LoadSharing::has_data() const
{
    return (algorithm !=  nullptr && algorithm->has_data())
	|| (key_control !=  nullptr && key_control->has_data());
}

bool Native::Ip::Cef::LoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (key_control !=  nullptr && key_control->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:load-sharing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "key-control")
    {
        if(key_control == nullptr)
        {
            key_control = std::make_shared<Native::Ip::Cef::LoadSharing::KeyControl>();
        }
        return key_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(key_control != nullptr)
    {
        children["key-control"] = key_control;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "key-control")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Algorithm()
    :
    universal(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Universal>())
	,tunnel(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Tunnel>())
	,original(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Original>())
	,include_ports(nullptr) // presence node
{
    universal->parent = this;
    tunnel->parent = this;
    original->parent = this;

    yang_name = "algorithm"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::~Algorithm()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_data() const
{
    return (universal !=  nullptr && universal->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (original !=  nullptr && original->has_data())
	|| (include_ports !=  nullptr && include_ports->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (universal !=  nullptr && universal->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (original !=  nullptr && original->has_operation())
	|| (include_ports !=  nullptr && include_ports->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "universal")
    {
        if(universal == nullptr)
        {
            universal = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Universal>();
        }
        return universal;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "original")
    {
        if(original == nullptr)
        {
            original = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Original>();
        }
        return original;
    }

    if(child_yang_name == "include-ports")
    {
        if(include_ports == nullptr)
        {
            include_ports = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts>();
        }
        return include_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(universal != nullptr)
    {
        children["universal"] = universal;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(original != nullptr)
    {
        children["original"] = original;
    }

    if(include_ports != nullptr)
    {
        children["include-ports"] = include_ports;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "universal" || name == "tunnel" || name == "original" || name == "include-ports")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Universal::Universal()
    :
    universal{YType::empty, "universal"},
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "universal"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Universal::~Universal()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_data() const
{
    return universal.is_set
	|| fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(universal.yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "universal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (universal.is_set || is_set(universal.yfilter)) leaf_name_data.push_back(universal.get_name_leafdata());
    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Universal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "universal")
    {
        universal = value;
        universal.value_namespace = name_space;
        universal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Universal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "universal")
    {
        universal.yfilter = yfilter;
    }
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "universal" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::Tunnel()
    :
    tunnel{YType::empty, "tunnel"},
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "tunnel"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::~Tunnel()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_data() const
{
    return tunnel.is_set
	|| fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Original::Original()
    :
    original{YType::empty, "original"}
{

    yang_name = "original"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Original::~Original()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_data() const
{
    return original.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(original.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Original::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Original::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Original::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (original.is_set || is_set(original.yfilter)) leaf_name_data.push_back(original.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Original::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Original::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Original::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "original")
    {
        original = value;
        original.value_namespace = name_space;
        original.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Original::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "original")
    {
        original.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "original")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::IncludePorts()
    :
    destination(nullptr) // presence node
	,source(nullptr) // presence node
{

    yang_name = "include-ports"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::~IncludePorts()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "destination"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_data() const
{
    return fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

const Enum::YLeaf Native::Flow::Exporter::ExportProtocol::ipfix {0, "ipfix"};
const Enum::YLeaf Native::Flow::Exporter::ExportProtocol::netflow_v5 {1, "netflow-v5"};
const Enum::YLeaf Native::Flow::Exporter::ExportProtocol::netflow_v9 {2, "netflow-v9"};

const Enum::YLeaf Native::Flow::Monitor::Type::performance_monitor {0, "performance-monitor"};

const Enum::YLeaf Native::Flow::Monitor::Cache::Type::immediate {0, "immediate"};
const Enum::YLeaf Native::Flow::Monitor::Cache::Type::normal {1, "normal"};
const Enum::YLeaf Native::Flow::Monitor::Cache::Type::permanent {2, "permanent"};
const Enum::YLeaf Native::Flow::Monitor::Cache::Type::synchronized {3, "synchronized"};

const Enum::YLeaf Native::Flow::Monitor::Record::Type::default_rtp {0, "default-rtp"};
const Enum::YLeaf Native::Flow::Monitor::Record::Type::default_tcp {1, "default-tcp"};
const Enum::YLeaf Native::Flow::Monitor::Record::Type::netflow_original {2, "netflow-original"};

const Enum::YLeaf Native::Ip::Vrf::Export::Ipv4::Ipv4Type::unicast {0, "unicast"};
const Enum::YLeaf Native::Ip::Vrf::Export::Ipv4::Ipv4Type::multicast {1, "multicast"};

const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4Type::unicast {0, "unicast"};
const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4Type::multicast {1, "multicast"};

const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::both {0, "both"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::export_ {1, "export"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::Direction::import {2, "import"};

const Enum::YLeaf Native::Ip::Local::Pool::Id::default_ {0, "default"};


}
}

