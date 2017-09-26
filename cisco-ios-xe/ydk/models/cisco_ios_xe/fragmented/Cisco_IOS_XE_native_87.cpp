
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_88.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::Maxpr()
    :
    maxpr{YType::uint32, "maxpr"},
    learn{YType::uint32, "learn"}
{

    yang_name = "maxpr"; yang_parent_name = "total"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::~Maxpr()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_data() const
{
    return maxpr.is_set
	|| learn.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxpr.yfilter)
	|| ydk::is_set(learn.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/prefix/total/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maxpr" <<"[maxpr='" <<maxpr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxpr.is_set || is_set(maxpr.yfilter)) leaf_name_data.push_back(maxpr.get_name_leafdata());
    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxpr")
    {
        maxpr = value;
        maxpr.value_namespace = name_space;
        maxpr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxpr")
    {
        maxpr.yfilter = yfilter;
    }
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Prefix::Total::Maxpr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxpr" || name == "learn")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Range()
    :
    receive(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>())
{
    receive->parent = this;

    yang_name = "range"; yang_parent_name = "max"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::~Range()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_data() const
{
    return (receive !=  nullptr && receive->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_operation() const
{
    return is_set(yfilter)
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::Receive()
    :
    percent{YType::uint8, "percent"}
{

    yang_name = "receive"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::~Receive()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/max/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Max::Range::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::MaxRangeUtilization()
    :
    percent{YType::uint8, "percent"}
{

    yang_name = "max-range-utilization"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::~MaxRangeUtilization()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_data() const
{
    return percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-range-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::MaxRangeUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::McPeer()
    :
    description{YType::str, "description"}
    	,
    domain(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>())
	,head_end(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>())
{
    domain->parent = this;
    eigrp->parent = this;
    head_end->parent = this;

    yang_name = "mc-peer"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::~McPeer()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return description.is_set
	|| (domain !=  nullptr && domain->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (head_end !=  nullptr && head_end->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (domain !=  nullptr && domain->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (head_end !=  nullptr && head_end->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "head-end")
    {
        if(head_end == nullptr)
        {
            head_end = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd>();
        }
        return head_end;
    }

    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(head_end != nullptr)
    {
        children["head-end"] = head_end;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "eigrp" || name == "head-end" || name == "ipv4" || name == "description")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Domain()
{

    yang_name = "domain"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::~Domain()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_data() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_operation() const
{
    for (std::size_t index=0; index<dmval.size(); index++)
    {
        if(dmval[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dmval")
    {
        for(auto const & c : dmval)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval>();
        c->parent = this;
        dmval.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dmval)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dmval")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Dmval()
    :
    dmval{YType::uint16, "dmval"},
    description{YType::str, "description"},
    eigrp{YType::str, "eigrp"},
    head_end{YType::str, "head-end"}
{

    yang_name = "dmval"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::~Dmval()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return dmval.is_set
	|| description.is_set
	|| eigrp.is_set
	|| head_end.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dmval.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(head_end.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmval" <<"[dmval='" <<dmval <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmval.is_set || is_set(dmval.yfilter)) leaf_name_data.push_back(dmval.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (head_end.is_set || is_set(head_end.yfilter)) leaf_name_data.push_back(head_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmval")
    {
        dmval = value;
        dmval.value_namespace = name_space;
        dmval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "head-end")
    {
        head_end = value;
        head_end.value_namespace = name_space;
        head_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmval")
    {
        dmval.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "head-end")
    {
        head_end.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "dmval" || name == "description" || name == "eigrp" || name == "head-end")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    interface{YType::str, "interface"}
{

    yang_name = "ipv4"; yang_parent_name = "dmval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_data() const
{
    return ipv4.is_set
	|| interface.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Domain::Dmval::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Eigrp()
{

    yang_name = "eigrp"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{

    yang_name = "interface"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/eigrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Eigrp::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::HeadEnd()
{

    yang_name = "head-end"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::~HeadEnd()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-end";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{

    yang_name = "interface"; yang_parent_name = "head-end"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/head-end/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::HeadEnd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "ipv4"; yang_parent_name = "mc-peer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::~Ipv4()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return ipv4.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mc-peer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::Interface()
    :
    interface{YType::str, "interface"},
    description{YType::str, "description"},
    domain{YType::uint16, "domain"}
{

    yang_name = "interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::~Interface()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_data() const
{
    return interface.is_set
	|| description.is_set
	|| domain.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::McPeer::Ipv4::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "description" || name == "domain")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Mode()
    :
    monitor(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>())
	,route(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>())
	,verify(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>())
{
    monitor->parent = this;
    route->parent = this;
    verify->parent = this;

    yang_name = "mode"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::~Mode()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route>();
        }
        return route;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "route" || name == "verify")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Monitor()
    :
    both{YType::empty, "both"},
    fast{YType::empty, "fast"},
    passive{YType::empty, "passive"}
    	,
    active(nullptr) // presence node
{

    yang_name = "monitor"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::~Monitor()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_data() const
{
    return both.is_set
	|| fast.is_set
	|| passive.is_set
	|| (active !=  nullptr && active->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(fast.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (active !=  nullptr && active->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (fast.is_set || is_set(fast.yfilter)) leaf_name_data.push_back(fast.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast")
    {
        fast = value;
        fast.value_namespace = name_space;
        fast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "fast")
    {
        fast.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "both" || name == "fast" || name == "passive")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::Active()
    :
    throughput{YType::empty, "throughput"}
{

    yang_name = "active"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::~Active()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_data() const
{
    return throughput.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(throughput.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (throughput.is_set || is_set(throughput.yfilter)) leaf_name_data.push_back(throughput.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "throughput")
    {
        throughput = value;
        throughput.value_namespace = name_space;
        throughput.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "throughput")
    {
        throughput.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Monitor::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "throughput")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Route()
    :
    control{YType::empty, "control"},
    observe{YType::empty, "observe"}
    	,
    metric(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>())
	,protocol(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>())
{
    metric->parent = this;
    protocol->parent = this;

    yang_name = "route"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::~Route()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_data() const
{
    return control.is_set
	|| observe.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control.yfilter)
	|| ydk::is_set(observe.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control.is_set || is_set(control.yfilter)) leaf_name_data.push_back(control.get_name_leafdata());
    if (observe.is_set || is_set(observe.yfilter)) leaf_name_data.push_back(observe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control")
    {
        control = value;
        control.value_namespace = name_space;
        control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "observe")
    {
        observe = value;
        observe.value_namespace = name_space;
        observe.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control")
    {
        control.yfilter = yfilter;
    }
    if(value_path == "observe")
    {
        observe.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "protocol" || name == "control" || name == "observe")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Metric()
    :
    bgp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>())
	,eigrp(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>())
	,static_(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>())
{
    bgp->parent = this;
    eigrp->parent = this;
    static_->parent = this;

    yang_name = "metric"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::~Metric()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "static")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::Bgp()
    :
    local_pref{YType::uint16, "local-pref"}
{

    yang_name = "bgp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::~Bgp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_data() const
{
    return local_pref.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_pref.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-pref")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::Eigrp()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "eigrp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::~Eigrp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::Static_()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "static"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::~Static_()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_data() const
{
    return tag.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/metric/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Metric::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::Protocol()
    :
    pbr{YType::empty, "pbr"}
{

    yang_name = "protocol"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::~Protocol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_data() const
{
    return pbr.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbr.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbr.is_set || is_set(pbr.yfilter)) leaf_name_data.push_back(pbr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbr")
    {
        pbr = value;
        pbr.value_namespace = name_space;
        pbr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbr")
    {
        pbr.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Route::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbr")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::Verify()
    :
    bidirectional{YType::empty, "bidirectional"}
{

    yang_name = "verify"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::~Verify()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_data() const
{
    return bidirectional.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bidirectional.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bidirectional.is_set || is_set(bidirectional.yfilter)) leaf_name_data.push_back(bidirectional.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bidirectional")
    {
        bidirectional = value;
        bidirectional.value_namespace = name_space;
        bidirectional.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bidirectional")
    {
        bidirectional.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mode::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidirectional")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Mos()
    :
    threshold(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>())
{
    threshold->parent = this;

    yang_name = "mos"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "mos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::~Threshold()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_data() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_operation() const
{
    for (std::size_t index=0; index<mos_thresh.size(); index++)
    {
        if(mos_thresh[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-thresh")
    {
        for(auto const & c : mos_thresh)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh>();
        c->parent = this;
        mos_thresh.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_thresh)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::MosThresh()
    :
    mos_thresh{YType::str, "mos-thresh"},
    percent{YType::uint8, "percent"}
{

    yang_name = "mos-thresh"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::~MosThresh()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_data() const
{
    return mos_thresh.is_set
	|| percent.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_thresh.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/mos/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-thresh" <<"[mos-thresh='" <<mos_thresh <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_thresh.is_set || is_set(mos_thresh.yfilter)) leaf_name_data.push_back(mos_thresh.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh = value;
        mos_thresh.value_namespace = name_space;
        mos_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-thresh")
    {
        mos_thresh.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Mos::Threshold::MosThresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-thresh" || name == "percent")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::Probe()
    :
    packets{YType::uint8, "packets"}
{

    yang_name = "probe"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::~Probe()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_data() const
{
    return packets.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Resolve()
    :
    cost{YType::empty, "cost"},
    equivalent_path_round_robin{YType::empty, "equivalent-path-round-robin"}
    	,
    delay(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>())
	,jitter(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>())
	,loss(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>())
	,mos(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>())
{
    delay->parent = this;
    jitter->parent = this;
    loss->parent = this;
    mos->parent = this;

    yang_name = "resolve"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::~Resolve()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_data() const
{
    return cost.is_set
	|| equivalent_path_round_robin.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (loss !=  nullptr && loss->has_data())
	|| (mos !=  nullptr && mos->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(equivalent_path_round_robin.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (loss !=  nullptr && loss->has_operation())
	|| (mos !=  nullptr && mos->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (equivalent_path_round_robin.is_set || is_set(equivalent_path_round_robin.yfilter)) leaf_name_data.push_back(equivalent_path_round_robin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss>();
        }
        return loss;
    }

    if(child_yang_name == "mos")
    {
        if(mos == nullptr)
        {
            mos = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos>();
        }
        return mos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    if(mos != nullptr)
    {
        children["mos"] = mos;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin = value;
        equivalent_path_round_robin.value_namespace = name_space;
        equivalent_path_round_robin.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "equivalent-path-round-robin")
    {
        equivalent_path_round_robin.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "jitter" || name == "loss" || name == "mos" || name == "cost" || name == "equivalent-path-round-robin")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Delay()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>())
{
    priority->parent = this;

    yang_name = "delay"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::~Delay()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_data() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_operation() const
{
    for (std::size_t index=0; index<del_pol.size(); index++)
    {
        if(del_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "del-pol")
    {
        for(auto const & c : del_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol>();
        c->parent = this;
        del_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : del_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::DelPol()
    :
    del_pol{YType::uint8, "del-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "del-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::~DelPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_data() const
{
    return del_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(del_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/delay/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "del-pol" <<"[del-pol='" <<del_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (del_pol.is_set || is_set(del_pol.yfilter)) leaf_name_data.push_back(del_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "del-pol")
    {
        del_pol = value;
        del_pol.value_namespace = name_space;
        del_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "del-pol")
    {
        del_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Delay::Priority::DelPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "del-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Jitter()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>())
{
    priority->parent = this;

    yang_name = "jitter"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::~Jitter()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_data() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_operation() const
{
    for (std::size_t index=0; index<jit_pol.size(); index++)
    {
        if(jit_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jit-pol")
    {
        for(auto const & c : jit_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol>();
        c->parent = this;
        jit_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : jit_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::JitPol()
    :
    jit_pol{YType::uint8, "jit-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "jit-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::~JitPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_data() const
{
    return jit_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(jit_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/jitter/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jit-pol" <<"[jit-pol='" <<jit_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (jit_pol.is_set || is_set(jit_pol.yfilter)) leaf_name_data.push_back(jit_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "jit-pol")
    {
        jit_pol = value;
        jit_pol.value_namespace = name_space;
        jit_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "jit-pol")
    {
        jit_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Jitter::Priority::JitPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jit-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Loss()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>())
{
    priority->parent = this;

    yang_name = "loss"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::~Loss()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "loss"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_data() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_operation() const
{
    for (std::size_t index=0; index<loss_pol.size(); index++)
    {
        if(loss_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loss-pol")
    {
        for(auto const & c : loss_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol>();
        c->parent = this;
        loss_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : loss_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::LossPol()
    :
    loss_pol{YType::uint8, "loss-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "loss-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::~LossPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_data() const
{
    return loss_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loss_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/loss/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss-pol" <<"[loss-pol='" <<loss_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loss_pol.is_set || is_set(loss_pol.yfilter)) leaf_name_data.push_back(loss_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loss-pol")
    {
        loss_pol = value;
        loss_pol.value_namespace = name_space;
        loss_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loss-pol")
    {
        loss_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Loss::Priority::LossPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loss-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Mos()
    :
    priority(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>())
{
    priority->parent = this;

    yang_name = "mos"; yang_parent_name = "resolve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::~Mos()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::Priority()
{

    yang_name = "priority"; yang_parent_name = "mos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::~Priority()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_data() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_operation() const
{
    for (std::size_t index=0; index<mos_pol.size(); index++)
    {
        if(mos_pol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mos-pol")
    {
        for(auto const & c : mos_pol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol>();
        c->parent = this;
        mos_pol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mos_pol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::MosPol()
    :
    mos_pol{YType::uint8, "mos-pol"},
    variance{YType::uint8, "variance"}
{

    yang_name = "mos-pol"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::~MosPol()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_data() const
{
    return mos_pol.is_set
	|| variance.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mos_pol.yfilter)
	|| ydk::is_set(variance.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/resolve/mos/priority/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mos-pol" <<"[mos-pol='" <<mos_pol <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mos_pol.is_set || is_set(mos_pol.yfilter)) leaf_name_data.push_back(mos_pol.get_name_leafdata());
    if (variance.is_set || is_set(variance.yfilter)) leaf_name_data.push_back(variance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mos-pol")
    {
        mos_pol = value;
        mos_pol.value_namespace = name_space;
        mos_pol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "variance")
    {
        variance = value;
        variance.value_namespace = name_space;
        variance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mos-pol")
    {
        mos_pol.yfilter = yfilter;
    }
    if(value_path == "variance")
    {
        variance.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Resolve::Mos::Priority::MosPol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mos-pol" || name == "variance")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::Rsvp()
    :
    post_dial_delay{YType::uint16, "post-dial-delay"},
    signaling_retries{YType::uint8, "signaling-retries"}
{

    yang_name = "rsvp"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::~Rsvp()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_data() const
{
    return post_dial_delay.is_set
	|| signaling_retries.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(post_dial_delay.yfilter)
	|| ydk::is_set(signaling_retries.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (post_dial_delay.is_set || is_set(post_dial_delay.yfilter)) leaf_name_data.push_back(post_dial_delay.get_name_leafdata());
    if (signaling_retries.is_set || is_set(signaling_retries.yfilter)) leaf_name_data.push_back(signaling_retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay = value;
        post_dial_delay.value_namespace = name_space;
        post_dial_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries = value;
        signaling_retries.value_namespace = name_space;
        signaling_retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "post-dial-delay")
    {
        post_dial_delay.yfilter = yfilter;
    }
    if(value_path == "signaling-retries")
    {
        signaling_retries.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "post-dial-delay" || name == "signaling-retries")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::TargetDiscovery()
    :
    responder_list(std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>())
{
    responder_list->parent = this;

    yang_name = "target-discovery"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::~TargetDiscovery()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_data() const
{
    return (responder_list !=  nullptr && responder_list->has_data());
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (responder_list !=  nullptr && responder_list->has_operation());
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "responder-list")
    {
        if(responder_list == nullptr)
        {
            responder_list = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList>();
        }
        return responder_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(responder_list != nullptr)
    {
        children["responder-list"] = responder_list;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "responder-list")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::ResponderList()
{

    yang_name = "responder-list"; yang_parent_name = "target-discovery"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::~ResponderList()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_data() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_operation() const
{
    for (std::size_t index=0; index<td_num.size(); index++)
    {
        if(td_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "td-num")
    {
        for(auto const & c : td_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum>();
        c->parent = this;
        td_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : td_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::TdNum()
    :
    td_num{YType::str, "td-num"},
    inside_prefixes{YType::str, "inside-prefixes"}
{

    yang_name = "td-num"; yang_parent_name = "responder-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::~TdNum()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_data() const
{
    return td_num.is_set
	|| inside_prefixes.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(td_num.yfilter)
	|| ydk::is_set(inside_prefixes.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/target-discovery/responder-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "td-num" <<"[td-num='" <<td_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (td_num.is_set || is_set(td_num.yfilter)) leaf_name_data.push_back(td_num.get_name_leafdata());
    if (inside_prefixes.is_set || is_set(inside_prefixes.yfilter)) leaf_name_data.push_back(inside_prefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "td-num")
    {
        td_num = value;
        td_num.value_namespace = name_space;
        td_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes = value;
        inside_prefixes.value_namespace = name_space;
        inside_prefixes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "td-num")
    {
        td_num.yfilter = yfilter;
    }
    if(value_path == "inside-prefixes")
    {
        inside_prefixes.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::TargetDiscovery::ResponderList::TdNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "td-num" || name == "inside-prefixes")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::Traceroute()
    :
    probe_delay{YType::uint16, "probe-delay"}
{

    yang_name = "traceroute"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::~Traceroute()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_data() const
{
    return probe_delay.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probe_delay.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traceroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probe_delay.is_set || is_set(probe_delay.yfilter)) leaf_name_data.push_back(probe_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probe-delay")
    {
        probe_delay = value;
        probe_delay.value_namespace = name_space;
        probe_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probe-delay")
    {
        probe_delay.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Traceroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-delay")
        return true;
    return false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::Unreachable()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "unreachable"; yang_parent_name = "icmp-Mode-config-pfr-mc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::~Unreachable()
{
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/pfr/Cisco-IOS-XE-pfr:master/icmp-Mode-config-pfr-mc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Pfr::Master::IcmpModeConfigPfrMc::Unreachable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::PfrMap()
    :
    pfr_tg{YType::str, "pfr-tg"}
    	,
    match(std::make_shared<Native::PfrMap::Match>())
	,set(std::make_shared<Native::PfrMap::Set>())
{
    match->parent = this;
    set->parent = this;

    yang_name = "pfr-map"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PfrMap::~PfrMap()
{
}

bool Native::PfrMap::has_data() const
{
    return pfr_tg.is_set
	|| (match !=  nullptr && match->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::PfrMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pfr_tg.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::PfrMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PfrMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr-map" <<"[pfr-tg='" <<pfr_tg <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfr_tg.is_set || is_set(pfr_tg.yfilter)) leaf_name_data.push_back(pfr_tg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::PfrMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::PfrMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::PfrMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg = value;
        pfr_tg.value_namespace = name_space;
        pfr_tg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pfr-tg")
    {
        pfr_tg.yfilter = yfilter;
    }
}

bool Native::PfrMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "set" || name == "pfr-tg")
        return true;
    return false;
}

Native::PfrMap::Match::Match()
    :
    ip(std::make_shared<Native::PfrMap::Match::Ip>())
	,pfr(std::make_shared<Native::PfrMap::Match::Pfr>())
	,traffic_class(std::make_shared<Native::PfrMap::Match::TrafficClass>())
{
    ip->parent = this;
    pfr->parent = this;
    traffic_class->parent = this;

    yang_name = "match"; yang_parent_name = "pfr-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::~Match()
{
}

bool Native::PfrMap::Match::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (traffic_class !=  nullptr && traffic_class->has_data());
}

bool Native::PfrMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (traffic_class !=  nullptr && traffic_class->has_operation());
}

std::string Native::PfrMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::PfrMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::PfrMap::Match::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "traffic-class")
    {
        if(traffic_class == nullptr)
        {
            traffic_class = std::make_shared<Native::PfrMap::Match::TrafficClass>();
        }
        return traffic_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(pfr != nullptr)
    {
        children["pfr"] = pfr;
    }

    if(traffic_class != nullptr)
    {
        children["traffic-class"] = traffic_class;
    }

    return children;
}

void Native::PfrMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "pfr" || name == "traffic-class")
        return true;
    return false;
}

Native::PfrMap::Match::Ip::Ip()
    :
    address{YType::empty, "address"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::Ip::~Ip()
{
}

bool Native::PfrMap::Match::Ip::has_data() const
{
    return address.is_set;
}

bool Native::PfrMap::Match::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::PfrMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::PfrMap::Match::Pfr::Pfr()
    :
    learn{YType::empty, "learn"}
{

    yang_name = "pfr"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::Pfr::~Pfr()
{
}

bool Native::PfrMap::Match::Pfr::has_data() const
{
    return learn.is_set;
}

bool Native::PfrMap::Match::Pfr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learn.yfilter);
}

std::string Native::PfrMap::Match::Pfr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::Pfr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learn.is_set || is_set(learn.yfilter)) leaf_name_data.push_back(learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::Pfr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::Pfr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::Pfr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learn")
    {
        learn = value;
        learn.value_namespace = name_space;
        learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::Pfr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learn")
    {
        learn.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::Pfr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learn")
        return true;
    return false;
}

Native::PfrMap::Match::TrafficClass::TrafficClass()
    :
    access_list{YType::empty, "access-list"},
    application{YType::empty, "application"},
    prefix_list{YType::empty, "prefix-list"}
{

    yang_name = "traffic-class"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Match::TrafficClass::~TrafficClass()
{
}

bool Native::PfrMap::Match::TrafficClass::has_data() const
{
    return access_list.is_set
	|| application.is_set
	|| prefix_list.is_set;
}

bool Native::PfrMap::Match::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(application.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PfrMap::Match::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Match::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (application.is_set || is_set(application.yfilter)) leaf_name_data.push_back(application.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Match::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Match::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Match::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application")
    {
        application = value;
        application.value_namespace = name_space;
        application.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Match::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "application")
    {
        application.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PfrMap::Match::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "application" || name == "prefix-list")
        return true;
    return false;
}

Native::PfrMap::Set::Set()
    :
    holddown{YType::uint16, "holddown"},
    interface{YType::str, "interface"},
    jitter{YType::empty, "jitter"},
    mode{YType::empty, "mode"},
    mos{YType::empty, "mos"},
    next_hop{YType::empty, "next-hop"},
    periodic{YType::empty, "periodic"},
    probe{YType::empty, "probe"},
    resolve{YType::empty, "resolve"},
    traceroute{YType::empty, "traceroute"},
    trap_enable{YType::empty, "trap-enable"},
    trigger_log_percentage{YType::empty, "trigger-log-percentage"},
    unreachable{YType::empty, "unreachable"}
    	,
    active_probe(std::make_shared<Native::PfrMap::Set::ActiveProbe>())
	,backoff(std::make_shared<Native::PfrMap::Set::Backoff>())
	,delay(std::make_shared<Native::PfrMap::Set::Delay>())
	,link_group(std::make_shared<Native::PfrMap::Set::LinkGroup>())
	,loss(std::make_shared<Native::PfrMap::Set::Loss>())
{
    active_probe->parent = this;
    backoff->parent = this;
    delay->parent = this;
    link_group->parent = this;
    loss->parent = this;

    yang_name = "set"; yang_parent_name = "pfr-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::~Set()
{
}

bool Native::PfrMap::Set::has_data() const
{
    return holddown.is_set
	|| interface.is_set
	|| jitter.is_set
	|| mode.is_set
	|| mos.is_set
	|| next_hop.is_set
	|| periodic.is_set
	|| probe.is_set
	|| resolve.is_set
	|| traceroute.is_set
	|| trap_enable.is_set
	|| trigger_log_percentage.is_set
	|| unreachable.is_set
	|| (active_probe !=  nullptr && active_probe->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (link_group !=  nullptr && link_group->has_data())
	|| (loss !=  nullptr && loss->has_data());
}

bool Native::PfrMap::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(mos.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(periodic.yfilter)
	|| ydk::is_set(probe.yfilter)
	|| ydk::is_set(resolve.yfilter)
	|| ydk::is_set(traceroute.yfilter)
	|| ydk::is_set(trap_enable.yfilter)
	|| ydk::is_set(trigger_log_percentage.yfilter)
	|| ydk::is_set(unreachable.yfilter)
	|| (active_probe !=  nullptr && active_probe->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (link_group !=  nullptr && link_group->has_operation())
	|| (loss !=  nullptr && loss->has_operation());
}

std::string Native::PfrMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pfr:set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (mos.is_set || is_set(mos.yfilter)) leaf_name_data.push_back(mos.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (probe.is_set || is_set(probe.yfilter)) leaf_name_data.push_back(probe.get_name_leafdata());
    if (resolve.is_set || is_set(resolve.yfilter)) leaf_name_data.push_back(resolve.get_name_leafdata());
    if (traceroute.is_set || is_set(traceroute.yfilter)) leaf_name_data.push_back(traceroute.get_name_leafdata());
    if (trap_enable.is_set || is_set(trap_enable.yfilter)) leaf_name_data.push_back(trap_enable.get_name_leafdata());
    if (trigger_log_percentage.is_set || is_set(trigger_log_percentage.yfilter)) leaf_name_data.push_back(trigger_log_percentage.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.yfilter)) leaf_name_data.push_back(unreachable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-probe")
    {
        if(active_probe == nullptr)
        {
            active_probe = std::make_shared<Native::PfrMap::Set::ActiveProbe>();
        }
        return active_probe;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::PfrMap::Set::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::PfrMap::Set::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "link-group")
    {
        if(link_group == nullptr)
        {
            link_group = std::make_shared<Native::PfrMap::Set::LinkGroup>();
        }
        return link_group;
    }

    if(child_yang_name == "loss")
    {
        if(loss == nullptr)
        {
            loss = std::make_shared<Native::PfrMap::Set::Loss>();
        }
        return loss;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_probe != nullptr)
    {
        children["active-probe"] = active_probe;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(link_group != nullptr)
    {
        children["link-group"] = link_group;
    }

    if(loss != nullptr)
    {
        children["loss"] = loss;
    }

    return children;
}

void Native::PfrMap::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mos")
    {
        mos = value;
        mos.value_namespace = name_space;
        mos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe")
    {
        probe = value;
        probe.value_namespace = name_space;
        probe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resolve")
    {
        resolve = value;
        resolve.value_namespace = name_space;
        resolve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceroute")
    {
        traceroute = value;
        traceroute.value_namespace = name_space;
        traceroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-enable")
    {
        trap_enable = value;
        trap_enable.value_namespace = name_space;
        trap_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage = value;
        trigger_log_percentage.value_namespace = name_space;
        trigger_log_percentage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
        unreachable.value_namespace = name_space;
        unreachable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "mos")
    {
        mos.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
    if(value_path == "probe")
    {
        probe.yfilter = yfilter;
    }
    if(value_path == "resolve")
    {
        resolve.yfilter = yfilter;
    }
    if(value_path == "traceroute")
    {
        traceroute.yfilter = yfilter;
    }
    if(value_path == "trap-enable")
    {
        trap_enable.yfilter = yfilter;
    }
    if(value_path == "trigger-log-percentage")
    {
        trigger_log_percentage.yfilter = yfilter;
    }
    if(value_path == "unreachable")
    {
        unreachable.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-probe" || name == "backoff" || name == "delay" || name == "link-group" || name == "loss" || name == "holddown" || name == "interface" || name == "jitter" || name == "mode" || name == "mos" || name == "next-hop" || name == "periodic" || name == "probe" || name == "resolve" || name == "traceroute" || name == "trap-enable" || name == "trigger-log-percentage" || name == "unreachable")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::ActiveProbe()
    :
    echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>())
	,jitter(std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>())
	,tcp_conn(std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>())
	,udp_echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>())
{
    echo->parent = this;
    jitter->parent = this;
    tcp_conn->parent = this;
    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::~ActiveProbe()
{
}

bool Native::PfrMap::Set::ActiveProbe::has_data() const
{
    return (echo !=  nullptr && echo->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::PfrMap::Set::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| (echo !=  nullptr && echo->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::PfrMap::Set::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(echo != nullptr)
    {
        children["echo"] = echo;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo" || name == "jitter" || name == "tcp-conn" || name == "udp-echo")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Echo()
{

    yang_name = "echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Echo::~Echo()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Echo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "echo"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| dscp.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "dscp")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Jitter()
{

    yang_name = "jitter"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::TcpConn()
{

    yang_name = "tcp-conn"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::TcpConn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::UdpEcho()
{

    yang_name = "udp-echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::Backoff()
{

    yang_name = "backoff"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Backoff::~Backoff()
{
}

bool Native::PfrMap::Set::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t")
    {
        for(auto const & c : boff_t)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT>();
        c->parent = this;
        boff_t.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT()
    :
    boff_t{YType::uint16, "boff-t"}
{

    yang_name = "boff-t"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Backoff::BoffT::~BoffT()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::has_data() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_data())
            return true;
    }
    return boff_t.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::has_operation() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boff_t.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t" <<"[boff-t='" <<boff_t <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::BoffT::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t.is_set || is_set(boff_t.yfilter)) leaf_name_data.push_back(boff_t.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t0")
    {
        for(auto const & c : boff_t0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT::BoffT0>();
        c->parent = this;
        boff_t0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t")
    {
        boff_t = value;
        boff_t.value_namespace = name_space;
        boff_t.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t")
    {
        boff_t.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::BoffT0()
    :
    boff_t0{YType::uint16, "boff-t0"},
    boff_rng{YType::uint16, "boff-rng"}
{

    yang_name = "boff-t0"; yang_parent_name = "boff-t"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::~BoffT0()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_data() const
{
    return boff_t0.is_set
	|| boff_rng.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boff_t0.yfilter)
	|| ydk::is_set(boff_rng.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t0" <<"[boff-t0='" <<boff_t0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t0.is_set || is_set(boff_t0.yfilter)) leaf_name_data.push_back(boff_t0.get_name_leafdata());
    if (boff_rng.is_set || is_set(boff_rng.yfilter)) leaf_name_data.push_back(boff_rng.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t0")
    {
        boff_t0 = value;
        boff_t0.value_namespace = name_space;
        boff_t0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boff-rng")
    {
        boff_rng = value;
        boff_rng.value_namespace = name_space;
        boff_rng.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t0")
    {
        boff_t0.yfilter = yfilter;
    }
    if(value_path == "boff-rng")
    {
        boff_rng.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-rng")
        return true;
    return false;
}

Native::PfrMap::Set::Delay::Delay()
    :
    relative{YType::empty, "relative"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "delay"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Delay::~Delay()
{
}

bool Native::PfrMap::Set::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LinkGroup()
{

    yang_name = "link-group"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::LinkGroup::~LinkGroup()
{
}

bool Native::PfrMap::Set::LinkGroup::has_data() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::LinkGroup::has_operation() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lg-name")
    {
        for(auto const & c : lg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName>();
        c->parent = this;
        lg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::LinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::LinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::LgName()
    :
    lg_name{YType::str, "lg-name"}
    	,
    fallback(nullptr) // presence node
{

    yang_name = "lg-name"; yang_parent_name = "link-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::LinkGroup::LgName::~LgName()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_data() const
{
    return lg_name.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lg_name.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::PfrMap::Set::LinkGroup::LgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lg-name" <<"[lg-name='" <<lg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::LgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lg_name.is_set || is_set(lg_name.yfilter)) leaf_name_data.push_back(lg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lg-name")
    {
        lg_name = value;
        lg_name.value_namespace = name_space;
        lg_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lg-name")
    {
        lg_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::Fallback()
    :
    fall_name{YType::str, "fall-name"}
{

    yang_name = "fallback"; yang_parent_name = "lg-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::~Fallback()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_data() const
{
    return fall_name.is_set;
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fall_name.yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fall_name.is_set || is_set(fall_name.yfilter)) leaf_name_data.push_back(fall_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fall-name")
    {
        fall_name = value;
        fall_name.value_namespace = name_space;
        fall_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fall-name")
    {
        fall_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fall-name")
        return true;
    return false;
}

Native::PfrMap::Set::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "loss"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Loss::~Loss()
{
}

bool Native::PfrMap::Set::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::Platform::Platform()
    :
    atm_cdvt{YType::boolean, "Cisco-IOS-XE-platform:atm-cdvt"},
    bfd_debug_trace{YType::uint8, "Cisco-IOS-XE-platform:bfd-debug-trace"},
    cfm{YType::empty, "Cisco-IOS-XE-platform:cfm"},
    shell{YType::boolean, "Cisco-IOS-XE-platform:shell"},
    tcam_parity_error{YType::enumeration, "Cisco-IOS-XE-platform:tcam-parity-error"}
    	,
    bfd(std::make_shared<Native::Platform::Bfd>())
	,console(nullptr) // presence node
	,enable(std::make_shared<Native::Platform::Enable>())
	,external_alarm(std::make_shared<Native::Platform::ExternalAlarm>())
	,hardware(std::make_shared<Native::Platform::Hardware>())
	,icmp(std::make_shared<Native::Platform::Icmp>())
	,ip_ports(std::make_shared<Native::Platform::IpPorts>())
	,ipsec(std::make_shared<Native::Platform::Ipsec>())
	,l2vpn(std::make_shared<Native::Platform::L2Vpn>())
	,multicast(std::make_shared<Native::Platform::Multicast>())
	,punt_keepalive(nullptr) // presence node
	,punt_policer(std::make_shared<Native::Platform::PuntPolicer>())
	,qos(std::make_shared<Native::Platform::Qos>())
	,reload(std::make_shared<Native::Platform::Reload>())
	,tcam_threshold(std::make_shared<Native::Platform::TcamThreshold>())
	,trace(std::make_shared<Native::Platform::Trace>())
	,urpf(std::make_shared<Native::Platform::Urpf>())
{
    bfd->parent = this;
    enable->parent = this;
    external_alarm->parent = this;
    hardware->parent = this;
    icmp->parent = this;
    ip_ports->parent = this;
    ipsec->parent = this;
    l2vpn->parent = this;
    multicast->parent = this;
    punt_policer->parent = this;
    qos->parent = this;
    reload->parent = this;
    tcam_threshold->parent = this;
    trace->parent = this;
    urpf->parent = this;

    yang_name = "platform"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::~Platform()
{
}

bool Native::Platform::has_data() const
{
    return atm_cdvt.is_set
	|| bfd_debug_trace.is_set
	|| cfm.is_set
	|| shell.is_set
	|| tcam_parity_error.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (console !=  nullptr && console->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (external_alarm !=  nullptr && external_alarm->has_data())
	|| (hardware !=  nullptr && hardware->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (ip_ports !=  nullptr && ip_ports->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_data())
	|| (punt_policer !=  nullptr && punt_policer->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reload !=  nullptr && reload->has_data())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_data())
	|| (trace !=  nullptr && trace->has_data())
	|| (urpf !=  nullptr && urpf->has_data());
}

bool Native::Platform::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_cdvt.yfilter)
	|| ydk::is_set(bfd_debug_trace.yfilter)
	|| ydk::is_set(cfm.yfilter)
	|| ydk::is_set(shell.yfilter)
	|| ydk::is_set(tcam_parity_error.yfilter)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (console !=  nullptr && console->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (external_alarm !=  nullptr && external_alarm->has_operation())
	|| (hardware !=  nullptr && hardware->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (ip_ports !=  nullptr && ip_ports->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (punt_keepalive !=  nullptr && punt_keepalive->has_operation())
	|| (punt_policer !=  nullptr && punt_policer->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reload !=  nullptr && reload->has_operation())
	|| (tcam_threshold !=  nullptr && tcam_threshold->has_operation())
	|| (trace !=  nullptr && trace->has_operation())
	|| (urpf !=  nullptr && urpf->has_operation());
}

std::string Native::Platform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_cdvt.is_set || is_set(atm_cdvt.yfilter)) leaf_name_data.push_back(atm_cdvt.get_name_leafdata());
    if (bfd_debug_trace.is_set || is_set(bfd_debug_trace.yfilter)) leaf_name_data.push_back(bfd_debug_trace.get_name_leafdata());
    if (cfm.is_set || is_set(cfm.yfilter)) leaf_name_data.push_back(cfm.get_name_leafdata());
    if (shell.is_set || is_set(shell.yfilter)) leaf_name_data.push_back(shell.get_name_leafdata());
    if (tcam_parity_error.is_set || is_set(tcam_parity_error.yfilter)) leaf_name_data.push_back(tcam_parity_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Platform::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Platform::Console>();
        }
        return console;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Platform::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "external-alarm")
    {
        if(external_alarm == nullptr)
        {
            external_alarm = std::make_shared<Native::Platform::ExternalAlarm>();
        }
        return external_alarm;
    }

    if(child_yang_name == "hardware")
    {
        if(hardware == nullptr)
        {
            hardware = std::make_shared<Native::Platform::Hardware>();
        }
        return hardware;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Platform::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "ip-ports")
    {
        if(ip_ports == nullptr)
        {
            ip_ports = std::make_shared<Native::Platform::IpPorts>();
        }
        return ip_ports;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Platform::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::Platform::L2Vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Platform::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "punt-keepalive")
    {
        if(punt_keepalive == nullptr)
        {
            punt_keepalive = std::make_shared<Native::Platform::PuntKeepalive>();
        }
        return punt_keepalive;
    }

    if(child_yang_name == "punt-policer")
    {
        if(punt_policer == nullptr)
        {
            punt_policer = std::make_shared<Native::Platform::PuntPolicer>();
        }
        return punt_policer;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Platform::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reload")
    {
        if(reload == nullptr)
        {
            reload = std::make_shared<Native::Platform::Reload>();
        }
        return reload;
    }

    if(child_yang_name == "tcam-threshold")
    {
        if(tcam_threshold == nullptr)
        {
            tcam_threshold = std::make_shared<Native::Platform::TcamThreshold>();
        }
        return tcam_threshold;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Platform::Trace>();
        }
        return trace;
    }

    if(child_yang_name == "urpf")
    {
        if(urpf == nullptr)
        {
            urpf = std::make_shared<Native::Platform::Urpf>();
        }
        return urpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(external_alarm != nullptr)
    {
        children["external-alarm"] = external_alarm;
    }

    if(hardware != nullptr)
    {
        children["hardware"] = hardware;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(ip_ports != nullptr)
    {
        children["ip-ports"] = ip_ports;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(l2vpn != nullptr)
    {
        children["l2vpn"] = l2vpn;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(punt_keepalive != nullptr)
    {
        children["punt-keepalive"] = punt_keepalive;
    }

    if(punt_policer != nullptr)
    {
        children["punt-policer"] = punt_policer;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reload != nullptr)
    {
        children["reload"] = reload;
    }

    if(tcam_threshold != nullptr)
    {
        children["tcam-threshold"] = tcam_threshold;
    }

    if(trace != nullptr)
    {
        children["trace"] = trace;
    }

    if(urpf != nullptr)
    {
        children["urpf"] = urpf;
    }

    return children;
}

void Native::Platform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atm-cdvt")
    {
        atm_cdvt = value;
        atm_cdvt.value_namespace = name_space;
        atm_cdvt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-debug-trace")
    {
        bfd_debug_trace = value;
        bfd_debug_trace.value_namespace = name_space;
        bfd_debug_trace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfm")
    {
        cfm = value;
        cfm.value_namespace = name_space;
        cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shell")
    {
        shell = value;
        shell.value_namespace = name_space;
        shell.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcam-parity-error")
    {
        tcam_parity_error = value;
        tcam_parity_error.value_namespace = name_space;
        tcam_parity_error.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atm-cdvt")
    {
        atm_cdvt.yfilter = yfilter;
    }
    if(value_path == "bfd-debug-trace")
    {
        bfd_debug_trace.yfilter = yfilter;
    }
    if(value_path == "cfm")
    {
        cfm.yfilter = yfilter;
    }
    if(value_path == "shell")
    {
        shell.yfilter = yfilter;
    }
    if(value_path == "tcam-parity-error")
    {
        tcam_parity_error.yfilter = yfilter;
    }
}

bool Native::Platform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd" || name == "console" || name == "enable" || name == "external-alarm" || name == "hardware" || name == "icmp" || name == "ip-ports" || name == "ipsec" || name == "l2vpn" || name == "multicast" || name == "punt-keepalive" || name == "punt-policer" || name == "qos" || name == "reload" || name == "tcam-threshold" || name == "trace" || name == "urpf" || name == "atm-cdvt" || name == "bfd-debug-trace" || name == "cfm" || name == "shell" || name == "tcam-parity-error")
        return true;
    return false;
}

Native::Platform::Bfd::Bfd()
    :
    allow_svi{YType::empty, "allow-svi"},
    disable_offload{YType::empty, "disable-offload"},
    enable_offload{YType::empty, "enable-offload"}
{

    yang_name = "bfd"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Bfd::~Bfd()
{
}

bool Native::Platform::Bfd::has_data() const
{
    return allow_svi.is_set
	|| disable_offload.is_set
	|| enable_offload.is_set;
}

bool Native::Platform::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_svi.yfilter)
	|| ydk::is_set(disable_offload.yfilter)
	|| ydk::is_set(enable_offload.yfilter);
}

std::string Native::Platform::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_svi.is_set || is_set(allow_svi.yfilter)) leaf_name_data.push_back(allow_svi.get_name_leafdata());
    if (disable_offload.is_set || is_set(disable_offload.yfilter)) leaf_name_data.push_back(disable_offload.get_name_leafdata());
    if (enable_offload.is_set || is_set(enable_offload.yfilter)) leaf_name_data.push_back(enable_offload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-svi")
    {
        allow_svi = value;
        allow_svi.value_namespace = name_space;
        allow_svi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-offload")
    {
        disable_offload = value;
        disable_offload.value_namespace = name_space;
        disable_offload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-offload")
    {
        enable_offload = value;
        enable_offload.value_namespace = name_space;
        enable_offload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-svi")
    {
        allow_svi.yfilter = yfilter;
    }
    if(value_path == "disable-offload")
    {
        disable_offload.yfilter = yfilter;
    }
    if(value_path == "enable-offload")
    {
        enable_offload.yfilter = yfilter;
    }
}

bool Native::Platform::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-svi" || name == "disable-offload" || name == "enable-offload")
        return true;
    return false;
}

Native::Platform::Console::Console()
    :
    output{YType::enumeration, "output"}
{

    yang_name = "console"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Console::~Console()
{
}

bool Native::Platform::Console::has_data() const
{
    return output.is_set;
}

bool Native::Platform::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Platform::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Platform::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output")
        return true;
    return false;
}

Native::Platform::Enable::Enable()
{

    yang_name = "enable"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Enable::~Enable()
{
}

bool Native::Platform::Enable::has_data() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Enable::has_operation() const
{
    for (std::size_t index=0; index<controller.size(); index++)
    {
        if(controller[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        for(auto const & c : controller)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::Enable::Controller>();
        c->parent = this;
        controller.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : controller)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller")
        return true;
    return false;
}

Native::Platform::Enable::Controller::Controller()
    :
    sonet{YType::str, "SONET"}
{

    yang_name = "controller"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Enable::Controller::~Controller()
{
}

bool Native::Platform::Enable::Controller::has_data() const
{
    return sonet.is_set;
}

bool Native::Platform::Enable::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sonet.yfilter);
}

std::string Native::Platform::Enable::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Enable::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller" <<"[SONET='" <<sonet <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Enable::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Enable::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Enable::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Enable::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "SONET")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Enable::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "SONET")
    {
        sonet.yfilter = yfilter;
    }
}

bool Native::Platform::Enable::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SONET")
        return true;
    return false;
}

Native::Platform::ExternalAlarm::ExternalAlarm()
    :
    alarm{YType::str, "alarm"},
    line{YType::uint32, "line"}
{

    yang_name = "external-alarm"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::ExternalAlarm::~ExternalAlarm()
{
}

bool Native::Platform::ExternalAlarm::has_data() const
{
    return alarm.is_set
	|| line.is_set;
}

bool Native::Platform::ExternalAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm.yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Platform::ExternalAlarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::ExternalAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:external-alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::ExternalAlarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm.is_set || is_set(alarm.yfilter)) leaf_name_data.push_back(alarm.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::ExternalAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::ExternalAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::ExternalAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm")
    {
        alarm = value;
        alarm.value_namespace = name_space;
        alarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::ExternalAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm")
    {
        alarm.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Platform::ExternalAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm" || name == "line")
        return true;
    return false;
}

Native::Platform::Hardware::Hardware()
    :
    lite(std::make_shared<Native::Platform::Hardware::Lite>())
	,throughput(std::make_shared<Native::Platform::Hardware::Throughput>())
{
    lite->parent = this;
    throughput->parent = this;

    yang_name = "hardware"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Hardware::~Hardware()
{
}

bool Native::Platform::Hardware::has_data() const
{
    return (lite !=  nullptr && lite->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Platform::Hardware::has_operation() const
{
    return is_set(yfilter)
	|| (lite !=  nullptr && lite->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Platform::Hardware::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:hardware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Hardware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::Platform::Hardware::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Platform::Hardware::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Platform::Hardware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Hardware::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Hardware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lite" || name == "throughput")
        return true;
    return false;
}

Native::Platform::Hardware::Lite::Lite()
    :
    license{YType::enumeration, "license"}
{

    yang_name = "lite"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Hardware::Lite::~Lite()
{
}

bool Native::Platform::Hardware::Lite::has_data() const
{
    return license.is_set;
}

bool Native::Platform::Hardware::Lite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(license.yfilter);
}

std::string Native::Platform::Hardware::Lite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::Lite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (license.is_set || is_set(license.yfilter)) leaf_name_data.push_back(license.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Hardware::Lite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "license")
    {
        license = value;
        license.value_namespace = name_space;
        license.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Lite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "license")
    {
        license.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Lite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "license")
        return true;
    return false;
}

Native::Platform::Hardware::Throughput::Throughput()
    :
    disable{YType::enumeration, "disable"}
    	,
    level(std::make_shared<Native::Platform::Hardware::Throughput::Level>())
{
    level->parent = this;

    yang_name = "throughput"; yang_parent_name = "hardware"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Hardware::Throughput::~Throughput()
{
}

bool Native::Platform::Hardware::Throughput::has_data() const
{
    return disable.is_set
	|| (level !=  nullptr && level->has_data());
}

bool Native::Platform::Hardware::Throughput::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Platform::Hardware::Throughput::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::Throughput::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Platform::Hardware::Throughput::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Platform::Hardware::Throughput::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Throughput::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Throughput::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "disable")
        return true;
    return false;
}

Native::Platform::Hardware::Throughput::Level::Level()
    :
    eval_only{YType::empty, "eval-only"},
    kbps{YType::enumeration, "kbps"}
{

    yang_name = "level"; yang_parent_name = "throughput"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Hardware::Throughput::Level::~Level()
{
}

bool Native::Platform::Hardware::Throughput::Level::has_data() const
{
    return eval_only.is_set
	|| kbps.is_set;
}

bool Native::Platform::Hardware::Throughput::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eval_only.yfilter)
	|| ydk::is_set(kbps.yfilter);
}

std::string Native::Platform::Hardware::Throughput::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:hardware/throughput/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Hardware::Throughput::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Hardware::Throughput::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eval_only.is_set || is_set(eval_only.yfilter)) leaf_name_data.push_back(eval_only.get_name_leafdata());
    if (kbps.is_set || is_set(kbps.yfilter)) leaf_name_data.push_back(kbps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Hardware::Throughput::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Hardware::Throughput::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Hardware::Throughput::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eval-only")
    {
        eval_only = value;
        eval_only.value_namespace = name_space;
        eval_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kbps")
    {
        kbps = value;
        kbps.value_namespace = name_space;
        kbps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Hardware::Throughput::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eval-only")
    {
        eval_only.yfilter = yfilter;
    }
    if(value_path == "kbps")
    {
        kbps.yfilter = yfilter;
    }
}

bool Native::Platform::Hardware::Throughput::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eval-only" || name == "kbps")
        return true;
    return false;
}

Native::Platform::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Platform::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Icmp::~Icmp()
{
}

bool Native::Platform::Icmp::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Platform::Icmp::has_operation() const
{
    return is_set(yfilter)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Platform::Icmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:icmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Icmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Platform::Icmp::RateLimit>();
        }
        return rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    return children;
}

void Native::Platform::Icmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Icmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Icmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Platform::Icmp::RateLimit::RateLimit()
    :
    duration{YType::uint32, "duration"},
    packet{YType::uint32, "packet"}
{

    yang_name = "rate-limit"; yang_parent_name = "icmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Platform::Icmp::RateLimit::has_data() const
{
    return duration.is_set
	|| packet.is_set;
}

bool Native::Platform::Icmp::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(packet.yfilter);
}

std::string Native::Platform::Icmp::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:icmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Icmp::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (packet.is_set || is_set(packet.yfilter)) leaf_name_data.push_back(packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Icmp::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet")
    {
        packet = value;
        packet.value_namespace = name_space;
        packet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Icmp::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "packet")
    {
        packet.yfilter = yfilter;
    }
}

bool Native::Platform::Icmp::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "packet")
        return true;
    return false;
}

Native::Platform::IpPorts::IpPorts()
    :
    ephemeral_max{YType::uint16, "ephemeral-max"}
{

    yang_name = "ip-ports"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::IpPorts::~IpPorts()
{
}

bool Native::Platform::IpPorts::has_data() const
{
    return ephemeral_max.is_set;
}

bool Native::Platform::IpPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ephemeral_max.yfilter);
}

std::string Native::Platform::IpPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::IpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ip-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::IpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ephemeral_max.is_set || is_set(ephemeral_max.yfilter)) leaf_name_data.push_back(ephemeral_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::IpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::IpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::IpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ephemeral-max")
    {
        ephemeral_max = value;
        ephemeral_max.value_namespace = name_space;
        ephemeral_max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::IpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ephemeral-max")
    {
        ephemeral_max.yfilter = yfilter;
    }
}

bool Native::Platform::IpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ephemeral-max")
        return true;
    return false;
}

Native::Platform::Ipsec::Ipsec()
    :
    arlog_supress{YType::empty, "arlog-supress"},
    fips_mode{YType::empty, "fips-mode"},
    gdoi{YType::enumeration, "gdoi"}
    	,
    llq(std::make_shared<Native::Platform::Ipsec::Llq>())
	,reassemble(std::make_shared<Native::Platform::Ipsec::Reassemble>())
{
    llq->parent = this;
    reassemble->parent = this;

    yang_name = "ipsec"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Ipsec::~Ipsec()
{
}

bool Native::Platform::Ipsec::has_data() const
{
    return arlog_supress.is_set
	|| fips_mode.is_set
	|| gdoi.is_set
	|| (llq !=  nullptr && llq->has_data())
	|| (reassemble !=  nullptr && reassemble->has_data());
}

bool Native::Platform::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arlog_supress.yfilter)
	|| ydk::is_set(fips_mode.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| (llq !=  nullptr && llq->has_operation())
	|| (reassemble !=  nullptr && reassemble->has_operation());
}

std::string Native::Platform::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arlog_supress.is_set || is_set(arlog_supress.yfilter)) leaf_name_data.push_back(arlog_supress.get_name_leafdata());
    if (fips_mode.is_set || is_set(fips_mode.yfilter)) leaf_name_data.push_back(fips_mode.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "llq")
    {
        if(llq == nullptr)
        {
            llq = std::make_shared<Native::Platform::Ipsec::Llq>();
        }
        return llq;
    }

    if(child_yang_name == "reassemble")
    {
        if(reassemble == nullptr)
        {
            reassemble = std::make_shared<Native::Platform::Ipsec::Reassemble>();
        }
        return reassemble;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(llq != nullptr)
    {
        children["llq"] = llq;
    }

    if(reassemble != nullptr)
    {
        children["reassemble"] = reassemble;
    }

    return children;
}

void Native::Platform::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arlog-supress")
    {
        arlog_supress = value;
        arlog_supress.value_namespace = name_space;
        arlog_supress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fips-mode")
    {
        fips_mode = value;
        fips_mode.value_namespace = name_space;
        fips_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arlog-supress")
    {
        arlog_supress.yfilter = yfilter;
    }
    if(value_path == "fips-mode")
    {
        fips_mode.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "llq" || name == "reassemble" || name == "arlog-supress" || name == "fips-mode" || name == "gdoi")
        return true;
    return false;
}

Native::Platform::Ipsec::Llq::Llq()
    :
    qos_group{YType::uint8, "qos-group"}
{

    yang_name = "llq"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Ipsec::Llq::~Llq()
{
}

bool Native::Platform::Ipsec::Llq::has_data() const
{
    return qos_group.is_set;
}

bool Native::Platform::Ipsec::Llq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_group.yfilter);
}

std::string Native::Platform::Ipsec::Llq::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Ipsec::Llq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "llq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Ipsec::Llq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_group.is_set || is_set(qos_group.yfilter)) leaf_name_data.push_back(qos_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::Llq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::Llq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Ipsec::Llq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-group")
    {
        qos_group = value;
        qos_group.value_namespace = name_space;
        qos_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::Llq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::Llq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qos-group")
        return true;
    return false;
}

Native::Platform::Ipsec::Reassemble::Reassemble()
    :
    transit{YType::empty, "transit"}
{

    yang_name = "reassemble"; yang_parent_name = "ipsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Ipsec::Reassemble::~Reassemble()
{
}

bool Native::Platform::Ipsec::Reassemble::has_data() const
{
    return transit.is_set;
}

bool Native::Platform::Ipsec::Reassemble::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transit.yfilter);
}

std::string Native::Platform::Ipsec::Reassemble::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:ipsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Ipsec::Reassemble::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reassemble";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Ipsec::Reassemble::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transit.is_set || is_set(transit.yfilter)) leaf_name_data.push_back(transit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Ipsec::Reassemble::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Ipsec::Reassemble::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Ipsec::Reassemble::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transit")
    {
        transit = value;
        transit.value_namespace = name_space;
        transit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Ipsec::Reassemble::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transit")
    {
        transit.yfilter = yfilter;
    }
}

bool Native::Platform::Ipsec::Reassemble::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transit")
        return true;
    return false;
}

Native::Platform::L2Vpn::L2Vpn()
    :
    hdlc_pass_through{YType::empty, "hdlc-pass-through"}
    	,
    statistics(std::make_shared<Native::Platform::L2Vpn::Statistics>())
{
    statistics->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::L2Vpn::~L2Vpn()
{
}

bool Native::Platform::L2Vpn::has_data() const
{
    return hdlc_pass_through.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Platform::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hdlc_pass_through.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Platform::L2Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::L2Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hdlc_pass_through.is_set || is_set(hdlc_pass_through.yfilter)) leaf_name_data.push_back(hdlc_pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Platform::L2Vpn::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Platform::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hdlc-pass-through")
    {
        hdlc_pass_through = value;
        hdlc_pass_through.value_namespace = name_space;
        hdlc_pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hdlc-pass-through")
    {
        hdlc_pass_through.yfilter = yfilter;
    }
}

bool Native::Platform::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "hdlc-pass-through")
        return true;
    return false;
}

Native::Platform::L2Vpn::Statistics::Statistics()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "statistics"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::L2Vpn::Statistics::~Statistics()
{
}

bool Native::Platform::L2Vpn::Statistics::has_data() const
{
    return enable.is_set;
}

bool Native::Platform::L2Vpn::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Platform::L2Vpn::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::L2Vpn::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::L2Vpn::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::L2Vpn::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::L2Vpn::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::L2Vpn::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::L2Vpn::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Platform::L2Vpn::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Platform::Multicast::Multicast()
    :
    mgre(std::make_shared<Native::Platform::Multicast::Mgre>())
	,oce(std::make_shared<Native::Platform::Multicast::Oce>())
{
    mgre->parent = this;
    oce->parent = this;

    yang_name = "multicast"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Multicast::~Multicast()
{
}

bool Native::Platform::Multicast::has_data() const
{
    return (mgre !=  nullptr && mgre->has_data())
	|| (oce !=  nullptr && oce->has_data());
}

bool Native::Platform::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (mgre !=  nullptr && mgre->has_operation())
	|| (oce !=  nullptr && oce->has_operation());
}

std::string Native::Platform::Multicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgre")
    {
        if(mgre == nullptr)
        {
            mgre = std::make_shared<Native::Platform::Multicast::Mgre>();
        }
        return mgre;
    }

    if(child_yang_name == "oce")
    {
        if(oce == nullptr)
        {
            oce = std::make_shared<Native::Platform::Multicast::Oce>();
        }
        return oce;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mgre != nullptr)
    {
        children["mgre"] = mgre;
    }

    if(oce != nullptr)
    {
        children["oce"] = oce;
    }

    return children;
}

void Native::Platform::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgre" || name == "oce")
        return true;
    return false;
}

Native::Platform::Multicast::Mgre::Mgre()
    :
    injection{YType::empty, "injection"}
{

    yang_name = "mgre"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Multicast::Mgre::~Mgre()
{
}

bool Native::Platform::Multicast::Mgre::has_data() const
{
    return injection.is_set;
}

bool Native::Platform::Multicast::Mgre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(injection.yfilter);
}

std::string Native::Platform::Multicast::Mgre::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::Mgre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::Mgre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (injection.is_set || is_set(injection.yfilter)) leaf_name_data.push_back(injection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Mgre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Mgre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Multicast::Mgre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "injection")
    {
        injection = value;
        injection.value_namespace = name_space;
        injection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Multicast::Mgre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "injection")
    {
        injection.yfilter = yfilter;
    }
}

bool Native::Platform::Multicast::Mgre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "injection")
        return true;
    return false;
}

Native::Platform::Multicast::Oce::Oce()
    :
    flag(std::make_shared<Native::Platform::Multicast::Oce::Flag>())
{
    flag->parent = this;

    yang_name = "oce"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Multicast::Oce::~Oce()
{
}

bool Native::Platform::Multicast::Oce::has_data() const
{
    return (flag !=  nullptr && flag->has_data());
}

bool Native::Platform::Multicast::Oce::has_operation() const
{
    return is_set(yfilter)
	|| (flag !=  nullptr && flag->has_operation());
}

std::string Native::Platform::Multicast::Oce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::Oce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oce";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::Oce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Oce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flag")
    {
        if(flag == nullptr)
        {
            flag = std::make_shared<Native::Platform::Multicast::Oce::Flag>();
        }
        return flag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Oce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flag != nullptr)
    {
        children["flag"] = flag;
    }

    return children;
}

void Native::Platform::Multicast::Oce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Multicast::Oce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Multicast::Oce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flag")
        return true;
    return false;
}

Native::Platform::Multicast::Oce::Flag::Flag()
    :
    suppress{YType::empty, "suppress"}
{

    yang_name = "flag"; yang_parent_name = "oce"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Multicast::Oce::Flag::~Flag()
{
}

bool Native::Platform::Multicast::Oce::Flag::has_data() const
{
    return suppress.is_set;
}

bool Native::Platform::Multicast::Oce::Flag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(suppress.yfilter);
}

std::string Native::Platform::Multicast::Oce::Flag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:multicast/oce/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Multicast::Oce::Flag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Multicast::Oce::Flag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Multicast::Oce::Flag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Multicast::Oce::Flag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Multicast::Oce::Flag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Multicast::Oce::Flag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
}

bool Native::Platform::Multicast::Oce::Flag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Platform::PuntKeepalive::PuntKeepalive()
    :
    disable_kernel_core{YType::boolean, "disable-kernel-core"}
    	,
    settings(std::make_shared<Native::Platform::PuntKeepalive::Settings>())
{
    settings->parent = this;

    yang_name = "punt-keepalive"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::PuntKeepalive::~PuntKeepalive()
{
}

bool Native::Platform::PuntKeepalive::has_data() const
{
    return disable_kernel_core.is_set
	|| (settings !=  nullptr && settings->has_data());
}

bool Native::Platform::PuntKeepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_kernel_core.yfilter)
	|| (settings !=  nullptr && settings->has_operation());
}

std::string Native::Platform::PuntKeepalive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntKeepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:punt-keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntKeepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_kernel_core.is_set || is_set(disable_kernel_core.yfilter)) leaf_name_data.push_back(disable_kernel_core.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::PuntKeepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "settings")
    {
        if(settings == nullptr)
        {
            settings = std::make_shared<Native::Platform::PuntKeepalive::Settings>();
        }
        return settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntKeepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(settings != nullptr)
    {
        children["settings"] = settings;
    }

    return children;
}

void Native::Platform::PuntKeepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-kernel-core")
    {
        disable_kernel_core = value;
        disable_kernel_core.value_namespace = name_space;
        disable_kernel_core.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::PuntKeepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-kernel-core")
    {
        disable_kernel_core.yfilter = yfilter;
    }
}

bool Native::Platform::PuntKeepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "settings" || name == "disable-kernel-core")
        return true;
    return false;
}

Native::Platform::PuntKeepalive::Settings::Settings()
    :
    fatal_count{YType::uint16, "fatal-count"},
    transmit_interval{YType::uint16, "transmit-interval"},
    warning_count{YType::uint16, "warning-count"}
{

    yang_name = "settings"; yang_parent_name = "punt-keepalive"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::PuntKeepalive::Settings::~Settings()
{
}

bool Native::Platform::PuntKeepalive::Settings::has_data() const
{
    return fatal_count.is_set
	|| transmit_interval.is_set
	|| warning_count.is_set;
}

bool Native::Platform::PuntKeepalive::Settings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fatal_count.yfilter)
	|| ydk::is_set(transmit_interval.yfilter)
	|| ydk::is_set(warning_count.yfilter);
}

std::string Native::Platform::PuntKeepalive::Settings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:punt-keepalive/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntKeepalive::Settings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntKeepalive::Settings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fatal_count.is_set || is_set(fatal_count.yfilter)) leaf_name_data.push_back(fatal_count.get_name_leafdata());
    if (transmit_interval.is_set || is_set(transmit_interval.yfilter)) leaf_name_data.push_back(transmit_interval.get_name_leafdata());
    if (warning_count.is_set || is_set(warning_count.yfilter)) leaf_name_data.push_back(warning_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::PuntKeepalive::Settings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntKeepalive::Settings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::PuntKeepalive::Settings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fatal-count")
    {
        fatal_count = value;
        fatal_count.value_namespace = name_space;
        fatal_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval = value;
        transmit_interval.value_namespace = name_space;
        transmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-count")
    {
        warning_count = value;
        warning_count.value_namespace = name_space;
        warning_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::PuntKeepalive::Settings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fatal-count")
    {
        fatal_count.yfilter = yfilter;
    }
    if(value_path == "transmit-interval")
    {
        transmit_interval.yfilter = yfilter;
    }
    if(value_path == "warning-count")
    {
        warning_count.yfilter = yfilter;
    }
}

bool Native::Platform::PuntKeepalive::Settings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fatal-count" || name == "transmit-interval" || name == "warning-count")
        return true;
    return false;
}

Native::Platform::PuntPolicer::PuntPolicer()
{

    yang_name = "punt-policer"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::PuntPolicer::~PuntPolicer()
{
}

bool Native::Platform::PuntPolicer::has_data() const
{
    for (std::size_t index=0; index<punt_num.size(); index++)
    {
        if(punt_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::PuntPolicer::has_operation() const
{
    for (std::size_t index=0; index<punt_num.size(); index++)
    {
        if(punt_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::PuntPolicer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntPolicer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:punt-policer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntPolicer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::PuntPolicer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "punt-num")
    {
        for(auto const & c : punt_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::PuntPolicer::PuntNum>();
        c->parent = this;
        punt_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntPolicer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : punt_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::PuntPolicer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::PuntPolicer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::PuntPolicer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "punt-num")
        return true;
    return false;
}

Native::Platform::PuntPolicer::PuntNum::PuntNum()
    :
    cause{YType::uint8, "cause"},
    high{YType::empty, "high"},
    max_rate{YType::uint16, "max-rate"}
{

    yang_name = "punt-num"; yang_parent_name = "punt-policer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::PuntPolicer::PuntNum::~PuntNum()
{
}

bool Native::Platform::PuntPolicer::PuntNum::has_data() const
{
    return cause.is_set
	|| high.is_set
	|| max_rate.is_set;
}

bool Native::Platform::PuntPolicer::PuntNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cause.yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(max_rate.yfilter);
}

std::string Native::Platform::PuntPolicer::PuntNum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:punt-policer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::PuntPolicer::PuntNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt-num" <<"[cause='" <<cause <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::PuntPolicer::PuntNum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cause.is_set || is_set(cause.yfilter)) leaf_name_data.push_back(cause.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (max_rate.is_set || is_set(max_rate.yfilter)) leaf_name_data.push_back(max_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::PuntPolicer::PuntNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::PuntPolicer::PuntNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::PuntPolicer::PuntNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cause")
    {
        cause = value;
        cause.value_namespace = name_space;
        cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-rate")
    {
        max_rate = value;
        max_rate.value_namespace = name_space;
        max_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::PuntPolicer::PuntNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cause")
    {
        cause.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "max-rate")
    {
        max_rate.yfilter = yfilter;
    }
}

bool Native::Platform::PuntPolicer::PuntNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cause" || name == "high" || name == "max-rate")
        return true;
    return false;
}

Native::Platform::Qos::Qos()
    :
    cac_policer{YType::uint16, "cac-policer"},
    marker_statistics{YType::empty, "marker-statistics"},
    performance_monitor{YType::empty, "performance-monitor"},
    punt_path_matching{YType::empty, "punt-path-matching"}
    	,
    match_statistics(std::make_shared<Native::Platform::Qos::MatchStatistics>())
{
    match_statistics->parent = this;

    yang_name = "qos"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Qos::~Qos()
{
}

bool Native::Platform::Qos::has_data() const
{
    return cac_policer.is_set
	|| marker_statistics.is_set
	|| performance_monitor.is_set
	|| punt_path_matching.is_set
	|| (match_statistics !=  nullptr && match_statistics->has_data());
}

bool Native::Platform::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cac_policer.yfilter)
	|| ydk::is_set(marker_statistics.yfilter)
	|| ydk::is_set(performance_monitor.yfilter)
	|| ydk::is_set(punt_path_matching.yfilter)
	|| (match_statistics !=  nullptr && match_statistics->has_operation());
}

std::string Native::Platform::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_policer.is_set || is_set(cac_policer.yfilter)) leaf_name_data.push_back(cac_policer.get_name_leafdata());
    if (marker_statistics.is_set || is_set(marker_statistics.yfilter)) leaf_name_data.push_back(marker_statistics.get_name_leafdata());
    if (performance_monitor.is_set || is_set(performance_monitor.yfilter)) leaf_name_data.push_back(performance_monitor.get_name_leafdata());
    if (punt_path_matching.is_set || is_set(punt_path_matching.yfilter)) leaf_name_data.push_back(punt_path_matching.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-statistics")
    {
        if(match_statistics == nullptr)
        {
            match_statistics = std::make_shared<Native::Platform::Qos::MatchStatistics>();
        }
        return match_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_statistics != nullptr)
    {
        children["match-statistics"] = match_statistics;
    }

    return children;
}

void Native::Platform::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cac-policer")
    {
        cac_policer = value;
        cac_policer.value_namespace = name_space;
        cac_policer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "marker-statistics")
    {
        marker_statistics = value;
        marker_statistics.value_namespace = name_space;
        marker_statistics.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "performance-monitor")
    {
        performance_monitor = value;
        performance_monitor.value_namespace = name_space;
        performance_monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "punt-path-matching")
    {
        punt_path_matching = value;
        punt_path_matching.value_namespace = name_space;
        punt_path_matching.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cac-policer")
    {
        cac_policer.yfilter = yfilter;
    }
    if(value_path == "marker-statistics")
    {
        marker_statistics.yfilter = yfilter;
    }
    if(value_path == "performance-monitor")
    {
        performance_monitor.yfilter = yfilter;
    }
    if(value_path == "punt-path-matching")
    {
        punt_path_matching.yfilter = yfilter;
    }
}

bool Native::Platform::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-statistics" || name == "cac-policer" || name == "marker-statistics" || name == "performance-monitor" || name == "punt-path-matching")
        return true;
    return false;
}

Native::Platform::Qos::MatchStatistics::MatchStatistics()
    :
    per_ace{YType::empty, "per-ace"},
    per_filter{YType::empty, "per-filter"}
{

    yang_name = "match-statistics"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Qos::MatchStatistics::~MatchStatistics()
{
}

bool Native::Platform::Qos::MatchStatistics::has_data() const
{
    return per_ace.is_set
	|| per_filter.is_set;
}

bool Native::Platform::Qos::MatchStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ace.yfilter)
	|| ydk::is_set(per_filter.yfilter);
}

std::string Native::Platform::Qos::MatchStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Qos::MatchStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Qos::MatchStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ace.is_set || is_set(per_ace.yfilter)) leaf_name_data.push_back(per_ace.get_name_leafdata());
    if (per_filter.is_set || is_set(per_filter.yfilter)) leaf_name_data.push_back(per_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Qos::MatchStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Qos::MatchStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Qos::MatchStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ace")
    {
        per_ace = value;
        per_ace.value_namespace = name_space;
        per_ace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-filter")
    {
        per_filter = value;
        per_filter.value_namespace = name_space;
        per_filter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Qos::MatchStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ace")
    {
        per_ace.yfilter = yfilter;
    }
    if(value_path == "per-filter")
    {
        per_filter.yfilter = yfilter;
    }
}

bool Native::Platform::Qos::MatchStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ace" || name == "per-filter")
        return true;
    return false;
}

Native::Platform::Reload::Reload()
    :
    immediate{YType::empty, "immediate"}
{

    yang_name = "reload"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Reload::~Reload()
{
}

bool Native::Platform::Reload::has_data() const
{
    return immediate.is_set;
}

bool Native::Platform::Reload::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate.yfilter);
}

std::string Native::Platform::Reload::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Reload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:reload";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Reload::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate.is_set || is_set(immediate.yfilter)) leaf_name_data.push_back(immediate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Reload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Reload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Reload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate")
    {
        immediate = value;
        immediate.value_namespace = name_space;
        immediate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Reload::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate")
    {
        immediate.yfilter = yfilter;
    }
}

bool Native::Platform::Reload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "immediate")
        return true;
    return false;
}

Native::Platform::TcamThreshold::TcamThreshold()
    :
    alarm_frequency{YType::uint32, "alarm-frequency"}
{

    yang_name = "tcam-threshold"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::TcamThreshold::~TcamThreshold()
{
}

bool Native::Platform::TcamThreshold::has_data() const
{
    return alarm_frequency.is_set;
}

bool Native::Platform::TcamThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alarm_frequency.yfilter);
}

std::string Native::Platform::TcamThreshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::TcamThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:tcam-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::TcamThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alarm_frequency.is_set || is_set(alarm_frequency.yfilter)) leaf_name_data.push_back(alarm_frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::TcamThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::TcamThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::TcamThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alarm-frequency")
    {
        alarm_frequency = value;
        alarm_frequency.value_namespace = name_space;
        alarm_frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::TcamThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alarm-frequency")
    {
        alarm_frequency.yfilter = yfilter;
    }
}

bool Native::Platform::TcamThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alarm-frequency")
        return true;
    return false;
}

Native::Platform::Trace::Trace()
{

    yang_name = "trace"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Trace::~Trace()
{
}

bool Native::Platform::Trace::has_data() const
{
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Platform::Trace::has_operation() const
{
    for (std::size_t index=0; index<runtime.size(); index++)
    {
        if(runtime[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Platform::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "runtime")
    {
        for(auto const & c : runtime)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Platform::Trace::Runtime>();
        c->parent = this;
        runtime.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : runtime)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Platform::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "runtime")
        return true;
    return false;
}

Native::Platform::Trace::Runtime::Runtime()
    :
    slot{YType::uint8, "slot"},
    bay{YType::uint8, "bay"},
    level{YType::enumeration, "level"},
    module{YType::enumeration, "module"},
    process{YType::enumeration, "process"}
{

    yang_name = "runtime"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Trace::Runtime::~Runtime()
{
}

bool Native::Platform::Trace::Runtime::has_data() const
{
    return slot.is_set
	|| bay.is_set
	|| level.is_set
	|| module.is_set
	|| process.is_set;
}

bool Native::Platform::Trace::Runtime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(bay.yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(module.yfilter)
	|| ydk::is_set(process.yfilter);
}

std::string Native::Platform::Trace::Runtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Trace::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime" <<"[slot='" <<slot <<"']" <<"[bay='" <<bay <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Trace::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (bay.is_set || is_set(bay.yfilter)) leaf_name_data.push_back(bay.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());
    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Trace::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Trace::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Trace::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bay")
    {
        bay = value;
        bay.value_namespace = name_space;
        bay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Trace::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "bay")
    {
        bay.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool Native::Platform::Trace::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot" || name == "bay" || name == "level" || name == "module" || name == "process")
        return true;
    return false;
}

Native::Platform::Urpf::Urpf()
    :
    loose(std::make_shared<Native::Platform::Urpf::Loose>())
{
    loose->parent = this;

    yang_name = "urpf"; yang_parent_name = "platform"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::~Urpf()
{
}

bool Native::Platform::Urpf::has_data() const
{
    return (loose !=  nullptr && loose->has_data());
}

bool Native::Platform::Urpf::has_operation() const
{
    return is_set(yfilter)
	|| (loose !=  nullptr && loose->has_operation());
}

std::string Native::Platform::Urpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-platform:urpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "loose")
    {
        if(loose == nullptr)
        {
            loose = std::make_shared<Native::Platform::Urpf::Loose>();
        }
        return loose;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(loose != nullptr)
    {
        children["loose"] = loose;
    }

    return children;
}

void Native::Platform::Urpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loose")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Loose()
    :
    counter(std::make_shared<Native::Platform::Urpf::Loose::Counter>())
{
    counter->parent = this;

    yang_name = "loose"; yang_parent_name = "urpf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::~Loose()
{
}

bool Native::Platform::Urpf::Loose::has_data() const
{
    return (counter !=  nullptr && counter->has_data());
}

bool Native::Platform::Urpf::Loose::has_operation() const
{
    return is_set(yfilter)
	|| (counter !=  nullptr && counter->has_operation());
}

std::string Native::Platform::Urpf::Loose::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loose";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Platform::Urpf::Loose::Counter>();
        }
        return counter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    return children;
}

void Native::Platform::Urpf::Loose::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Counter()
    :
    ipv4(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4>())
	,ipv6(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "counter"; yang_parent_name = "loose"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::~Counter()
{
}

bool Native::Platform::Urpf::Loose::Counter::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Native::Platform::Urpf::Loose::Counter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Ipv4()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4::Supress>())
{
    supress->parent = this;

    yang_name = "ipv4"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::~Ipv4()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_data() const
{
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supress")
    {
        if(supress == nullptr)
        {
            supress = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv4::Supress>();
        }
        return supress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supress != nullptr)
    {
        children["supress"] = supress;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supress")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{

    yang_name = "supress"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_data() const
{
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asymmetric_only.yfilter);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.yfilter)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
        asymmetric_only.value_namespace = name_space;
        asymmetric_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only.yfilter = yfilter;
    }
}

bool Native::Platform::Urpf::Loose::Counter::Ipv4::Supress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asymmetric_only")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Ipv6()
    :
    supress(std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6::Supress>())
{
    supress->parent = this;

    yang_name = "ipv6"; yang_parent_name = "counter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::~Ipv6()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_data() const
{
    return (supress !=  nullptr && supress->has_data());
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (supress !=  nullptr && supress->has_operation());
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supress")
    {
        if(supress == nullptr)
        {
            supress = std::make_shared<Native::Platform::Urpf::Loose::Counter::Ipv6::Supress>();
        }
        return supress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supress != nullptr)
    {
        children["supress"] = supress;
    }

    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supress")
        return true;
    return false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::Supress()
    :
    asymmetric_only{YType::empty, "asymmetric_only"}
{

    yang_name = "supress"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::~Supress()
{
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_data() const
{
    return asymmetric_only.is_set;
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asymmetric_only.yfilter);
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/platform/Cisco-IOS-XE-platform:urpf/loose/counter/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asymmetric_only.is_set || is_set(asymmetric_only.yfilter)) leaf_name_data.push_back(asymmetric_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only = value;
        asymmetric_only.value_namespace = name_space;
        asymmetric_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asymmetric_only")
    {
        asymmetric_only.yfilter = yfilter;
    }
}

bool Native::Platform::Urpf::Loose::Counter::Ipv6::Supress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asymmetric_only")
        return true;
    return false;
}

Native::PmAgent::PmAgent()
    :
    config_pm_agent(std::make_shared<Native::PmAgent::ConfigPmAgent>())
{
    config_pm_agent->parent = this;

    yang_name = "pm-agent"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::~PmAgent()
{
}

bool Native::PmAgent::has_data() const
{
    return (config_pm_agent !=  nullptr && config_pm_agent->has_data());
}

bool Native::PmAgent::has_operation() const
{
    return is_set(yfilter)
	|| (config_pm_agent !=  nullptr && config_pm_agent->has_operation());
}

std::string Native::PmAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-pathmgr:pm-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-pm-agent")
    {
        if(config_pm_agent == nullptr)
        {
            config_pm_agent = std::make_shared<Native::PmAgent::ConfigPmAgent>();
        }
        return config_pm_agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_pm_agent != nullptr)
    {
        children["config-pm-agent"] = config_pm_agent;
    }

    return children;
}

void Native::PmAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-pm-agent")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::ConfigPmAgent()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    device(std::make_shared<Native::PmAgent::ConfigPmAgent::Device>())
	,pmcs(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs>())
	,region(std::make_shared<Native::PmAgent::ConfigPmAgent::Region>())
	,site(std::make_shared<Native::PmAgent::ConfigPmAgent::Site>())
	,tenant(std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant>())
{
    device->parent = this;
    pmcs->parent = this;
    region->parent = this;
    site->parent = this;
    tenant->parent = this;

    yang_name = "config-pm-agent"; yang_parent_name = "pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::~ConfigPmAgent()
{
}

bool Native::PmAgent::ConfigPmAgent::has_data() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_data())
            return true;
    }
    return shutdown.is_set
	|| (device !=  nullptr && device->has_data())
	|| (pmcs !=  nullptr && pmcs->has_data())
	|| (region !=  nullptr && region->has_data())
	|| (site !=  nullptr && site->has_data())
	|| (tenant !=  nullptr && tenant->has_data());
}

bool Native::PmAgent::ConfigPmAgent::has_operation() const
{
    for (std::size_t index=0; index<instance_id.size(); index++)
    {
        if(instance_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (device !=  nullptr && device->has_operation())
	|| (pmcs !=  nullptr && pmcs->has_operation())
	|| (region !=  nullptr && region->has_operation())
	|| (site !=  nullptr && site->has_operation())
	|| (tenant !=  nullptr && tenant->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-pm-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::PmAgent::ConfigPmAgent::Device>();
        }
        return device;
    }

    if(child_yang_name == "instance-id")
    {
        for(auto const & c : instance_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId>();
        c->parent = this;
        instance_id.push_back(c);
        return c;
    }

    if(child_yang_name == "pmcs")
    {
        if(pmcs == nullptr)
        {
            pmcs = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs>();
        }
        return pmcs;
    }

    if(child_yang_name == "region")
    {
        if(region == nullptr)
        {
            region = std::make_shared<Native::PmAgent::ConfigPmAgent::Region>();
        }
        return region;
    }

    if(child_yang_name == "site")
    {
        if(site == nullptr)
        {
            site = std::make_shared<Native::PmAgent::ConfigPmAgent::Site>();
        }
        return site;
    }

    if(child_yang_name == "tenant")
    {
        if(tenant == nullptr)
        {
            tenant = std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant>();
        }
        return tenant;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device != nullptr)
    {
        children["device"] = device;
    }

    for (auto const & c : instance_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(pmcs != nullptr)
    {
        children["pmcs"] = pmcs;
    }

    if(region != nullptr)
    {
        children["region"] = region;
    }

    if(site != nullptr)
    {
        children["site"] = site;
    }

    if(tenant != nullptr)
    {
        children["tenant"] = tenant;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device" || name == "instance-id" || name == "pmcs" || name == "region" || name == "site" || name == "tenant" || name == "shutdown")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Device()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id>())
	,type(std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type>())
{
    id->parent = this;
    type->parent = this;

    yang_name = "device"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::~Device()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::has_data() const
{
    return (id !=  nullptr && id->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id>();
        }
        return id;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::Id()
{

    yang_name = "id"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::has_data() const
{
    for (std::size_t index=0; index<device_range.size(); index++)
    {
        if(device_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::has_operation() const
{
    for (std::size_t index=0; index<device_range.size(); index++)
    {
        if(device_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device_range")
    {
        for(auto const & c : device_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange>();
        c->parent = this;
        device_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : device_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Device::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::DeviceRange()
    :
    device_id_range{YType::uint32, "device_id_range"},
    name{YType::str, "name"}
{

    yang_name = "device_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::~DeviceRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::has_data() const
{
    return device_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device_range" <<"[device_id_range='" <<device_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device_id_range.is_set || is_set(device_id_range.yfilter)) leaf_name_data.push_back(device_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device_id_range")
    {
        device_id_range = value;
        device_id_range.value_namespace = name_space;
        device_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device_id_range")
    {
        device_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Id::DeviceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device_id_range" || name == "name")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Type()
    :
    pxtr{YType::empty, "pxtr"}
    	,
    ntr(nullptr) // presence node
	,rtr(nullptr) // presence node
	,xtr(nullptr) // presence node
{

    yang_name = "type"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::~Type()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::has_data() const
{
    return pxtr.is_set
	|| (ntr !=  nullptr && ntr->has_data())
	|| (rtr !=  nullptr && rtr->has_data())
	|| (xtr !=  nullptr && xtr->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pxtr.yfilter)
	|| (ntr !=  nullptr && ntr->has_operation())
	|| (rtr !=  nullptr && rtr->has_operation())
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pxtr.is_set || is_set(pxtr.yfilter)) leaf_name_data.push_back(pxtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ntr")
    {
        if(ntr == nullptr)
        {
            ntr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Ntr>();
        }
        return ntr;
    }

    if(child_yang_name == "rtr")
    {
        if(rtr == nullptr)
        {
            rtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Rtr>();
        }
        return rtr;
    }

    if(child_yang_name == "xtr")
    {
        if(xtr == nullptr)
        {
            xtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Xtr>();
        }
        return xtr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ntr != nullptr)
    {
        children["ntr"] = ntr;
    }

    if(rtr != nullptr)
    {
        children["rtr"] = rtr;
    }

    if(xtr != nullptr)
    {
        children["xtr"] = xtr;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pxtr")
    {
        pxtr = value;
        pxtr.value_namespace = name_space;
        pxtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pxtr")
    {
        pxtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntr" || name == "rtr" || name == "xtr" || name == "pxtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Ntr()
    :
    rtr(nullptr) // presence node
	,xtr(nullptr) // presence node
{

    yang_name = "ntr"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::~Ntr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::has_data() const
{
    return (rtr !=  nullptr && rtr->has_data())
	|| (xtr !=  nullptr && xtr->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::has_operation() const
{
    return is_set(yfilter)
	|| (rtr !=  nullptr && rtr->has_operation())
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtr")
    {
        if(rtr == nullptr)
        {
            rtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr>();
        }
        return rtr;
    }

    if(child_yang_name == "xtr")
    {
        if(xtr == nullptr)
        {
            xtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr>();
        }
        return xtr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rtr != nullptr)
    {
        children["rtr"] = rtr;
    }

    if(xtr != nullptr)
    {
        children["xtr"] = xtr;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr" || name == "xtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::Rtr()
    :
    xtr{YType::empty, "xtr"}
{

    yang_name = "rtr"; yang_parent_name = "ntr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::~Rtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::has_data() const
{
    return xtr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xtr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/ntr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xtr.is_set || is_set(xtr.yfilter)) leaf_name_data.push_back(xtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xtr")
    {
        xtr = value;
        xtr.value_namespace = name_space;
        xtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xtr")
    {
        xtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Rtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::Xtr()
    :
    rtr{YType::empty, "rtr"}
{

    yang_name = "xtr"; yang_parent_name = "ntr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::~Xtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::has_data() const
{
    return rtr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/ntr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Ntr::Xtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Rtr()
    :
    ntr{YType::empty, "ntr"}
    	,
    xtr(nullptr) // presence node
{

    yang_name = "rtr"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::~Rtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::has_data() const
{
    return ntr.is_set
	|| (xtr !=  nullptr && xtr->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ntr.yfilter)
	|| (xtr !=  nullptr && xtr->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.yfilter)) leaf_name_data.push_back(ntr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xtr")
    {
        if(xtr == nullptr)
        {
            xtr = std::make_shared<Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr>();
        }
        return xtr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xtr != nullptr)
    {
        children["xtr"] = xtr;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ntr")
    {
        ntr = value;
        ntr.value_namespace = name_space;
        ntr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ntr")
    {
        ntr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xtr" || name == "ntr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::Xtr()
    :
    ntr{YType::empty, "ntr"}
{

    yang_name = "xtr"; yang_parent_name = "rtr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::~Xtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::has_data() const
{
    return ntr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ntr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/rtr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.yfilter)) leaf_name_data.push_back(ntr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ntr")
    {
        ntr = value;
        ntr.value_namespace = name_space;
        ntr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ntr")
    {
        ntr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Rtr::Xtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::Xtr()
    :
    ntr{YType::empty, "ntr"},
    rtr{YType::empty, "rtr"}
{

    yang_name = "xtr"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::~Xtr()
{
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::has_data() const
{
    return ntr.is_set
	|| rtr.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ntr.yfilter)
	|| ydk::is_set(rtr.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/device/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xtr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ntr.is_set || is_set(ntr.yfilter)) leaf_name_data.push_back(ntr.get_name_leafdata());
    if (rtr.is_set || is_set(rtr.yfilter)) leaf_name_data.push_back(rtr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ntr")
    {
        ntr = value;
        ntr.value_namespace = name_space;
        ntr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtr")
    {
        rtr = value;
        rtr.value_namespace = name_space;
        rtr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ntr")
    {
        ntr.yfilter = yfilter;
    }
    if(value_path == "rtr")
    {
        rtr.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Device::Type::Xtr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntr" || name == "rtr")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::InstanceId()
    :
    instance_id_range{YType::uint32, "instance_id_range"}
    	,
    config_pm_agent_instance(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance>())
{
    config_pm_agent_instance->parent = this;

    yang_name = "instance-id"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::~InstanceId()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::has_data() const
{
    return instance_id_range.is_set
	|| (config_pm_agent_instance !=  nullptr && config_pm_agent_instance->has_data());
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_id_range.yfilter)
	|| (config_pm_agent_instance !=  nullptr && config_pm_agent_instance->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-id" <<"[instance_id_range='" <<instance_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_id_range.is_set || is_set(instance_id_range.yfilter)) leaf_name_data.push_back(instance_id_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-pm-agent-instance")
    {
        if(config_pm_agent_instance == nullptr)
        {
            config_pm_agent_instance = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance>();
        }
        return config_pm_agent_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_pm_agent_instance != nullptr)
    {
        children["config-pm-agent-instance"] = config_pm_agent_instance;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance_id_range")
    {
        instance_id_range = value;
        instance_id_range.value_namespace = name_space;
        instance_id_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::InstanceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance_id_range")
    {
        instance_id_range.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-pm-agent-instance" || name == "instance_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::ConfigPmAgentInstance()
    :
    enterprise_prefix(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix>())
{
    enterprise_prefix->parent = this;

    yang_name = "config-pm-agent-instance"; yang_parent_name = "instance-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::~ConfigPmAgentInstance()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::has_data() const
{
    return (enterprise_prefix !=  nullptr && enterprise_prefix->has_data());
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::has_operation() const
{
    return is_set(yfilter)
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-pm-agent-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enterprise-prefix")
    {
        if(enterprise_prefix == nullptr)
        {
            enterprise_prefix = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix>();
        }
        return enterprise_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enterprise_prefix != nullptr)
    {
        children["enterprise-prefix"] = enterprise_prefix;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enterprise-prefix")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::EnterprisePrefix()
    :
    ipv4(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4>())
	,ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "enterprise-prefix"; yang_parent_name = "config-pm-agent-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::~EnterprisePrefix()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::Ipv4()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv4"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::~Ipv4()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::has_data() const
{
    return prefix_list.is_set;
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::Ipv6()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "ipv6"; yang_parent_name = "enterprise-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::~Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::has_data() const
{
    return prefix_list.is_set;
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::InstanceId::ConfigPmAgentInstance::EnterprisePrefix::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Pmcs()
    :
    ipv4(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4>())
	,ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "pmcs"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::~Pmcs()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Native::PmAgent::ConfigPmAgent::Pmcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "pmcs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::~Ipv4()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::has_data() const
{
    for (std::size_t index=0; index<pmcs_ipv4.size(); index++)
    {
        if(pmcs_ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<pmcs_ipv4.size(); index++)
    {
        if(pmcs_ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmcs_ipv4")
    {
        for(auto const & c : pmcs_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4>();
        c->parent = this;
        pmcs_ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmcs_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmcs_ipv4")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::PmcsIpv4()
    :
    ipv4{YType::str, "ipv4"},
    backup{YType::empty, "backup"}
    	,
    ipv6(std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6>())
{
    ipv6->parent = this;

    yang_name = "pmcs_ipv4"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::~PmcsIpv4()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::has_data() const
{
    return ipv4.is_set
	|| backup.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs_ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4" || name == "backup")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "pmcs_ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::~Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::has_data() const
{
    for (std::size_t index=0; index<pmcs_ipv6.size(); index++)
    {
        if(pmcs_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<pmcs_ipv6.size(); index++)
    {
        if(pmcs_ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmcs_ipv6")
    {
        for(auto const & c : pmcs_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6>();
        c->parent = this;
        pmcs_ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmcs_ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmcs_ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::PmcsIpv6()
    :
    ipv6{YType::str, "ipv6"},
    backup{YType::empty, "backup"}
{

    yang_name = "pmcs_ipv6"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::~PmcsIpv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::has_data() const
{
    return ipv6.is_set
	|| backup.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmcs_ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv4::PmcsIpv4::Ipv6::PmcsIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "backup")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6()
{

    yang_name = "ipv6"; yang_parent_name = "pmcs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::~Ipv6()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::has_data() const
{
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::Ipv6_()
    :
    ipv6{YType::str, "ipv6"},
    backup{YType::empty, "backup"},
    ipv4{YType::str, "ipv4"}
{

    yang_name = "ipv6"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::~Ipv6_()
{
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::has_data() const
{
    return ipv6.is_set
	|| backup.is_set
	|| ipv4.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(backup.yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/pmcs/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Pmcs::Ipv6::Ipv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "backup" || name == "ipv4")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Region::Region()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id>())
{
    id->parent = this;

    yang_name = "region"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Region::~Region()
{
}

bool Native::PmAgent::ConfigPmAgent::Region::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Region::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Region::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Region::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Region::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Region::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Region::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Region::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Region::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Region::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::Id()
{

    yang_name = "id"; yang_parent_name = "region"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::has_data() const
{
    for (std::size_t index=0; index<region_id_range.size(); index++)
    {
        if(region_id_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::has_operation() const
{
    for (std::size_t index=0; index<region_id_range.size(); index++)
    {
        if(region_id_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/region/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Region::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Region::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "region_id_range")
    {
        for(auto const & c : region_id_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange>();
        c->parent = this;
        region_id_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Region::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : region_id_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Region::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Region::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "region_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::RegionIdRange()
    :
    region_id_range{YType::uint32, "region_id_range"},
    name{YType::str, "name"}
{

    yang_name = "region_id_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::~RegionIdRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::has_data() const
{
    return region_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(region_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/region/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "region_id_range" <<"[region_id_range='" <<region_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (region_id_range.is_set || is_set(region_id_range.yfilter)) leaf_name_data.push_back(region_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "region_id_range")
    {
        region_id_range = value;
        region_id_range.value_namespace = name_space;
        region_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "region_id_range")
    {
        region_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Region::Id::RegionIdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "region_id_range" || name == "name")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Site::Site()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id>())
{
    id->parent = this;

    yang_name = "site"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Site::~Site()
{
}

bool Native::PmAgent::ConfigPmAgent::Site::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Site::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Site::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Site::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Site::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Site::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Site::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Site::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Site::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Site::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::Id()
{

    yang_name = "id"; yang_parent_name = "site"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::has_data() const
{
    for (std::size_t index=0; index<site_id_range.size(); index++)
    {
        if(site_id_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::has_operation() const
{
    for (std::size_t index=0; index<site_id_range.size(); index++)
    {
        if(site_id_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/site/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Site::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Site::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "site_id_range")
    {
        for(auto const & c : site_id_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange>();
        c->parent = this;
        site_id_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Site::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : site_id_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Site::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Site::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::SiteIdRange()
    :
    site_id_range{YType::uint32, "site_id_range"},
    name{YType::str, "name"}
{

    yang_name = "site_id_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::~SiteIdRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::has_data() const
{
    return site_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/site/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site_id_range" <<"[site_id_range='" <<site_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_id_range.is_set || is_set(site_id_range.yfilter)) leaf_name_data.push_back(site_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site_id_range")
    {
        site_id_range = value;
        site_id_range.value_namespace = name_space;
        site_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site_id_range")
    {
        site_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Site::Id::SiteIdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site_id_range" || name == "name")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Tenant()
    :
    id(std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id>())
{
    id->parent = this;

    yang_name = "tenant"; yang_parent_name = "config-pm-agent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Tenant::~Tenant()
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::has_data() const
{
    return (id !=  nullptr && id->has_data());
}

bool Native::PmAgent::ConfigPmAgent::Tenant::has_operation() const
{
    return is_set(yfilter)
	|| (id !=  nullptr && id->has_operation());
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Tenant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Tenant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id>();
        }
        return id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Tenant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(id != nullptr)
    {
        children["id"] = id;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Tenant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Tenant::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::Id()
{

    yang_name = "id"; yang_parent_name = "tenant"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::~Id()
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::has_data() const
{
    for (std::size_t index=0; index<tenant_id_range.size(); index++)
    {
        if(tenant_id_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::has_operation() const
{
    for (std::size_t index=0; index<tenant_id_range.size(); index++)
    {
        if(tenant_id_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/tenant/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Tenant::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Tenant::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tenant_id_range")
    {
        for(auto const & c : tenant_id_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange>();
        c->parent = this;
        tenant_id_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Tenant::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tenant_id_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant_id_range")
        return true;
    return false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::TenantIdRange()
    :
    tenant_id_range{YType::uint32, "tenant_id_range"},
    name{YType::str, "name"}
{

    yang_name = "tenant_id_range"; yang_parent_name = "id"; is_top_level_class = false; has_list_ancestor = false;
}

Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::~TenantIdRange()
{
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::has_data() const
{
    return tenant_id_range.is_set
	|| name.is_set;
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tenant_id_range.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-pathmgr:pm-agent/config-pm-agent/tenant/id/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tenant_id_range" <<"[tenant_id_range='" <<tenant_id_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tenant_id_range.is_set || is_set(tenant_id_range.yfilter)) leaf_name_data.push_back(tenant_id_range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tenant_id_range")
    {
        tenant_id_range = value;
        tenant_id_range.value_namespace = name_space;
        tenant_id_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tenant_id_range")
    {
        tenant_id_range.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::PmAgent::ConfigPmAgent::Tenant::Id::TenantIdRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tenant_id_range" || name == "name")
        return true;
    return false;
}

Native::Policy::Policy()
{

    yang_name = "policy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::~Policy()
{
}

bool Native::Policy::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "policy-map")
    {
        for(auto const & c : policy_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::PolicyMap>();
        c->parent = this;
        policy_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : policy_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::ClassMap::ClassMap()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    prematch{YType::enumeration, "prematch"},
    protocol{YType::enumeration, "protocol"},
    subscriber{YType::empty, "subscriber"},
    type{YType::enumeration, "type"}
    	,
    match(std::make_shared<Native::Policy::ClassMap::Match>())
	,no_match(std::make_shared<Native::Policy::ClassMap::NoMatch>())
{
    match->parent = this;
    no_match->parent = this;

    yang_name = "class-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::ClassMap::~ClassMap()
{
}

bool Native::Policy::ClassMap::has_data() const
{
    return name.is_set
	|| description.is_set
	|| prematch.is_set
	|| protocol.is_set
	|| subscriber.is_set
	|| type.is_set
	|| (match !=  nullptr && match->has_data())
	|| (no_match !=  nullptr && no_match->has_data());
}

bool Native::Policy::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(prematch.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (no_match !=  nullptr && no_match->has_operation());
}

std::string Native::Policy::ClassMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:class-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (prematch.is_set || is_set(prematch.yfilter)) leaf_name_data.push_back(prematch.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Policy::ClassMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "no-match")
    {
        if(no_match == nullptr)
        {
            no_match = std::make_shared<Native::Policy::ClassMap::NoMatch>();
        }
        return no_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(no_match != nullptr)
    {
        children["no-match"] = no_match;
    }

    return children;
}

void Native::Policy::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "prematch")
    {
        prematch = value;
        prematch.value_namespace = name_space;
        prematch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "prematch")
    {
        prematch.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "no-match" || name == "name" || name == "description" || name == "prematch" || name == "protocol" || name == "subscriber" || name == "type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Match()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    peer{YType::str, "peer"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"}
    	,
    access_group(std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Application>())
	,authorization_status(std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>())
	,current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>())
	,group_object(std::make_shared<Native::Policy::ClassMap::Match::GroupObject>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Ip>())
	,method(std::make_shared<Native::Policy::ClassMap::Match::Method>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Mpls>())
	,not_(std::make_shared<Native::Policy::ClassMap::Match::Not_>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Protocol>())
	,result_type(std::make_shared<Native::Policy::ClassMap::Match::ResultType>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>())
	,vlan(std::make_shared<Native::Policy::ClassMap::Match::Vlan>())
{
    access_group->parent = this;
    application->parent = this;
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    current_method_priority->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    method->parent = this;
    mpls->parent = this;
    not_->parent = this;
    packet->parent = this;
    protocol->parent = this;
    result_type->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;

    yang_name = "match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::~Match()
{
}

bool Native::Policy::ClassMap::Match::has_data() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (not_ !=  nullptr && not_->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (result_type !=  nullptr && result_type->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Policy::ClassMap::Match::has_operation() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (not_ !=  nullptr && not_->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Policy::ClassMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "activated-service-template")
    {
        for(auto const & c : activated_service_template)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Policy::ClassMap::Match::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Application>();
        }
        return application;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::Method>();
        }
        return method;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "not")
    {
        if(not_ == nullptr)
        {
            not_ = std::make_shared<Native::Policy::ClassMap::Match::Not_>();
        }
        return not_;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::Match::ResultType>();
        }
        return result_type;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    for (auto const & c : activated_service_template)
    {
        children[c->get_segment_path()] = c;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(not_ != nullptr)
    {
        children["not"] = not_;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Policy::ClassMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
}

void Native::Policy::ClassMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "activated-service-template" || name == "application" || name == "authorization-status" || name == "authorizing-method-priority" || name == "current-method-priority" || name == "destination-address" || name == "group-object" || name == "ip" || name == "method" || name == "mpls" || name == "not" || name == "packet" || name == "protocol" || name == "result-type" || name == "security-group" || name == "source-address" || name == "vlan" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "peer" || name == "precedence" || name == "qos-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

const Enum::YLeaf Native::Platform::TcamParityError::enable {0, "enable"};
const Enum::YLeaf Native::Platform::TcamParityError::disable {1, "disable"};

const Enum::YLeaf Native::Platform::Console::Output::auto_ {0, "auto"};
const Enum::YLeaf Native::Platform::Console::Output::serial {1, "serial"};
const Enum::YLeaf Native::Platform::Console::Output::virtual_ {2, "virtual"};

const Enum::YLeaf Native::Platform::Hardware::Lite::License::enable {0, "enable"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::Disable::internal_license {0, "internal-license"};

const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_10000 {0, "10000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_25000 {1, "25000"};
const Enum::YLeaf Native::Platform::Hardware::Throughput::Level::Kbps::Y_50000 {2, "50000"};

const Enum::YLeaf Native::Platform::Ipsec::Gdoi::accept_both {0, "accept-both"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Process::iomd {0, "iomd"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Module::all_modules {0, "all-modules"};

const Enum::YLeaf Native::Platform::Trace::Runtime::Level::info {0, "info"};

const Enum::YLeaf Native::Policy::ClassMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::ClassMap::Type::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::inspect {3, "inspect"};
const Enum::YLeaf Native::Policy::ClassMap::Type::multicast_flows {4, "multicast-flows"};
const Enum::YLeaf Native::Policy::ClassMap::Type::stack {5, "stack"};
const Enum::YLeaf Native::Policy::ClassMap::Type::traffic {6, "traffic"};

const Enum::YLeaf Native::Policy::ClassMap::Protocol::aol {0, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::edonkey {1, "edonkey"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::fasttrack {2, "fasttrack"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::gnutella {3, "gnutella"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::http {4, "http"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::imap {5, "imap"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::kazaa2 {6, "kazaa2"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::msnmsgr {7, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::pop3 {8, "pop3"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::smtp {9, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::sunrpc {10, "sunrpc"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::ymsgr {11, "ymsgr"};

const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_any {1, "match-any"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_none {2, "match-none"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::video {4, "video"};


}
}

