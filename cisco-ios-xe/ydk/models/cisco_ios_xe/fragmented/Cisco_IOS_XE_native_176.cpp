
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_176.hpp"
#include "Cisco_IOS_XE_native_188.hpp"
#include "Cisco_IOS_XE_native_186.hpp"
#include "Cisco_IOS_XE_native_195.hpp"
#include "Cisco_IOS_XE_native_185.hpp"
#include "Cisco_IOS_XE_native_194.hpp"
#include "Cisco_IOS_XE_native_177.hpp"
#include "Cisco_IOS_XE_native_184.hpp"
#include "Cisco_IOS_XE_native_178.hpp"
#include "Cisco_IOS_XE_native_196.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OffsetList()
    :
    nsr_list(this, {"nsr_list"})
    , ol_acl(this, {"ol_acl"})
{

    yang_name = "offset-list"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::~OffsetList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nsr_list.len(); index++)
    {
        if(nsr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.len(); index++)
    {
        if(ol_acl[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::has_operation() const
{
    for (std::size_t index=0; index<nsr_list.len(); index++)
    {
        if(nsr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.len(); index++)
    {
        if(ol_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList>();
        ent_->parent = this;
        nsr_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ol-acl")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl>();
        ent_->parent = this;
        ol_acl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nsr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ol_acl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "ol-acl")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::NsrList()
    :
    nsr_list{YType::uint16, "nsr-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "nsr-list"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::~NsrList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::has_data() const
{
    if (is_presence_container) return true;
    return nsr_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-list";
    ADD_KEY_TOKEN(nsr_list, "nsr-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_list.is_set || is_set(nsr_list.yfilter)) leaf_name_data.push_back(nsr_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-list")
    {
        nsr_list = value;
        nsr_list.value_namespace = name_space;
        nsr_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-list")
    {
        nsr_list.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::OlAcl()
    :
    ol_acl{YType::str, "ol-acl"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ol-acl"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::~OlAcl()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::has_data() const
{
    if (is_presence_container) return true;
    return ol_acl.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ol_acl.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ol-acl";
    ADD_KEY_TOKEN(ol_acl, "ol-acl");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ol_acl.is_set || is_set(ol_acl.yfilter)) leaf_name_data.push_back(ol_acl.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ol-acl")
    {
        ol_acl = value;
        ol_acl.value_namespace = name_space;
        ol_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ol-acl")
    {
        ol_acl.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ol-acl" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Redistribute()
    :
    eigrp{YType::uint16, "eigrp"},
    ospf{YType::uint16, "ospf"}
        ,
    bgp(this, {"rdr_as"})
    , connected(nullptr) // presence node
    , isis(nullptr) // presence node
    , lisp(nullptr) // presence node
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
    , vrf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf>())
{
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return eigrp.is_set
	|| ospf.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        _children["odr"] = odr;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "isis" || name == "lisp" || name == "mobile" || name == "odr" || name == "rip" || name == "static" || name == "vrf" || name == "eigrp" || name == "ospf")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Bgp()
    :
    rdr_as{YType::str, "rdr-as"},
    route_map{YType::str, "route-map"},
    rd_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
        ,
    metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric>())
{
    metric->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return rdr_as.is_set
	|| route_map.is_set
	|| rd_lesser_1_period_0_xx_period_yy_greater_.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rdr_as.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(rdr_as, "rdr-as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdr_as.is_set || is_set(rdr_as.yfilter)) leaf_name_data.push_back(rdr_as.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rd_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(rd_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rdr-as")
    {
        rdr_as = value;
        rdr_as.value_namespace = name_space;
        rdr_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_ = value;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rdr-as")
    {
        rdr_as.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "rdr-as" || name == "route-map" || name == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::Metric()
    :
    bandwith{YType::uint32, "bandwith"},
    delay{YType::uint32, "delay"},
    reliability{YType::uint8, "reliability"},
    effective{YType::uint8, "Effective"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "metric"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::has_data() const
{
    if (is_presence_container) return true;
    return bandwith.is_set
	|| delay.is_set
	|| reliability.is_set
	|| effective.is_set
	|| mtu.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwith.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(effective.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwith.is_set || is_set(bandwith.yfilter)) leaf_name_data.push_back(bandwith.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (effective.is_set || is_set(effective.yfilter)) leaf_name_data.push_back(effective.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwith")
    {
        bandwith = value;
        bandwith.value_namespace = name_space;
        bandwith.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Effective")
    {
        effective = value;
        effective.value_namespace = name_space;
        effective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwith")
    {
        bandwith.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "Effective")
    {
        effective.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwith" || name == "delay" || name == "reliability" || name == "Effective" || name == "mtu")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::Connected()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::Isis()
    :
    is_tag{YType::str, "is-tag"},
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::has_data() const
{
    if (is_presence_container) return true;
    return is_tag.is_set
	|| level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_tag.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_1_2.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tag.is_set || is_set(is_tag.yfilter)) leaf_name_data.push_back(is_tag.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.yfilter)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-tag")
    {
        is_tag = value;
        is_tag.value_namespace = name_space;
        is_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
        level_1_2.value_namespace = name_space;
        level_1_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-tag")
    {
        is_tag.yfilter = yfilter;
    }
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-1-2")
    {
        level_1_2.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-tag" || name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::Lisp()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::Mobile()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::Odr()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::Rip()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::Static()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::~Static()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::Vrf()
    :
    name{YType::str, "name"},
    global{YType::empty, "global"}
{

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| global.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "global")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::SummaryMetric()
    :
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
        ,
    ipv4(this, {"ipv4"})
{

    yang_name = "summary-metric"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_period_b_period_c_period_d_slash_nn.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.yfilter)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
        a_period_b_period_c_period_d_slash_nn.value_namespace = name_space;
        a_period_b_period_c_period_d_slash_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "summary-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Timers()
    :
    active_time(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime>())
    , graceful_restart(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart>())
    , nsf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf>())
{
    active_time->parent = this;
    graceful_restart->parent = this;
    nsf->parent = this;

    yang_name = "timers"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::~Timers()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (active_time !=  nullptr && active_time->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (nsf !=  nullptr && nsf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (active_time !=  nullptr && active_time->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-time")
    {
        if(active_time == nullptr)
        {
            active_time = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime>();
        }
        return active_time;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf>();
        }
        return nsf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_time != nullptr)
    {
        _children["active-time"] = active_time;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(nsf != nullptr)
    {
        _children["nsf"] = nsf;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-time" || name == "graceful-restart" || name == "nsf")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::ActiveTime()
    :
    atimer{YType::uint16, "atimer"},
    disabled{YType::empty, "disabled"}
{

    yang_name = "active-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::~ActiveTime()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::has_data() const
{
    if (is_presence_container) return true;
    return atimer.is_set
	|| disabled.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atimer.yfilter)
	|| ydk::is_set(disabled.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atimer.is_set || is_set(atimer.yfilter)) leaf_name_data.push_back(atimer.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atimer")
    {
        atimer = value;
        atimer.value_namespace = name_space;
        atimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atimer")
    {
        atimer.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atimer" || name == "disabled")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::GracefulRestart()
    :
    purge_time{YType::empty, "purge-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return purge_time.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(purge_time.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "purge-time")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::Nsf()
    :
    converge{YType::empty, "converge"},
    signal{YType::empty, "signal"}
{

    yang_name = "nsf"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::~Nsf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::has_data() const
{
    if (is_presence_container) return true;
    return converge.is_set
	|| signal.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(converge.yfilter)
	|| ydk::is_set(signal.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (converge.is_set || is_set(converge.yfilter)) leaf_name_data.push_back(converge.get_name_leafdata());
    if (signal.is_set || is_set(signal.yfilter)) leaf_name_data.push_back(signal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "converge")
    {
        converge = value;
        converge.value_namespace = name_space;
        converge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal")
    {
        signal = value;
        signal.value_namespace = name_space;
        signal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "converge")
    {
        converge.yfilter = yfilter;
    }
    if(value_path == "signal")
    {
        signal.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "converge" || name == "signal")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::TrafficShare()
    :
    balanced{YType::empty, "balanced"}
        ,
    min(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::has_data() const
{
    if (is_presence_container) return true;
    return balanced.is_set
	|| (min !=  nullptr && min->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(balanced.yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (balanced.is_set || is_set(balanced.yfilter)) leaf_name_data.push_back(balanced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min != nullptr)
    {
        _children["min"] = min;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "balanced")
    {
        balanced = value;
        balanced.value_namespace = name_space;
        balanced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "balanced")
    {
        balanced.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "balanced")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::~Min()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::has_data() const
{
    if (is_presence_container) return true;
    return across_interfaces.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Topology()
    :
    base(nullptr) // presence node
{

    yang_name = "topology"; yang_parent_name = "af-ip-vrf-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::~Topology()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::has_data() const
{
    if (is_presence_container) return true;
    return (base !=  nullptr && base->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (base !=  nullptr && base->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(base != nullptr)
    {
        _children["base"] = base;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Base()
    :
    distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance>())
    , distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList>())
    , redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute>())
    , summary_metric(this, {"ipv4_addr_slash_prefix_len"})
{
    distance->parent = this;
    distribute_list->parent = this;
    redistribute->parent = this;

    yang_name = "base"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::~Base()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary_metric.len(); index++)
    {
        if(summary_metric[index]->has_data())
            return true;
    }
    return (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::has_operation() const
{
    for (std::size_t index=0; index<summary_metric.len(); index++)
    {
        if(summary_metric[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric>();
        ent_->parent = this;
        summary_metric.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        _children["distribute-list"] = distribute_list;
    }

    if(redistribute != nullptr)
    {
        _children["redistribute"] = redistribute;
    }

    count_ = 0;
    for (auto ent_ : summary_metric.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "distribute-list" || name == "redistribute" || name == "summary-metric")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::has_data() const
{
    if (is_presence_container) return true;
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::has_operation() const
{
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::Eigrp_()
    :
    distance_list(this, {"internal_route"})
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distance_list.len(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<distance_list.len(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList>();
        ent_->parent = this;
        distance_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : distance_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::DistanceList()
    :
    internal_route{YType::uint8, "internal-route"},
    external_route{YType::uint8, "external-route"}
{

    yang_name = "distance-list"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::~DistanceList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::has_data() const
{
    if (is_presence_container) return true;
    return internal_route.is_set
	|| external_route.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_route.yfilter)
	|| ydk::is_set(external_route.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list";
    ADD_KEY_TOKEN(internal_route, "internal-route");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_route.is_set || is_set(internal_route.yfilter)) leaf_name_data.push_back(internal_route.get_name_leafdata());
    if (external_route.is_set || is_set(external_route.yfilter)) leaf_name_data.push_back(external_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-route")
    {
        internal_route = value;
        internal_route.value_namespace = name_space;
        internal_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-route")
    {
        external_route = value;
        external_route.value_namespace = name_space;
        external_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-route")
    {
        internal_route.yfilter = yfilter;
    }
    if(value_path == "external-route")
    {
        external_route.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal-route" || name == "external-route")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::DistributeList()
    :
    prefix_list(this, {"prefix_list"})
    , route_map(this, {"name"})
{

    yang_name = "distribute-list"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::PrefixList()
    :
    prefix_list{YType::str, "prefix-list"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "prefix-list"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(prefix_list, "prefix-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list" || name == "gateway" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::RouteMap()
    :
    name{YType::str, "name"},
    in{YType::str, "in"},
    out{YType::str, "out"}
{

    yang_name = "route-map"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Redistribute()
    :
    connected{YType::empty, "connected"}
        ,
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_>())
    , ospf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf>())
    , static_(nullptr) // presence node
{
    eigrp->parent = this;
    ospf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return connected.is_set
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "ospf" || name == "static" || name == "connected")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::Eigrp_()
    :
    as_list(this, {"autonomous_system"})
{

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<as_list.len(); index++)
    {
        if(as_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<as_list.len(); index++)
    {
        if(as_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList>();
        ent_->parent = this;
        as_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : as_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::AsList()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{

    yang_name = "as-list"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::~AsList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list";
    ADD_KEY_TOKEN(autonomous_system, "autonomous-system");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autonomous-system")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::Ospf()
    :
    pid_list(this, {"process_id"})
{

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pid_list.len(); index++)
    {
        if(pid_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<pid_list.len(); index++)
    {
        if(pid_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pid-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList>();
        ent_->parent = this;
        pid_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pid_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid-list")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::PidList()
    :
    process_id{YType::uint16, "process-id"}
{

    yang_name = "pid-list"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::~PidList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::has_data() const
{
    if (is_presence_container) return true;
    return process_id.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pid-list";
    ADD_KEY_TOKEN(process_id, "process-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Ospf::PidList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::Static()
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::~Static()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::SummaryMetric()
    :
    ipv4_addr_slash_prefix_len{YType::str, "ipv4-addr-slash-prefix-len"},
    distance{YType::uint8, "distance"}
        ,
    metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric>())
{
    metric->parent = this;

    yang_name = "summary-metric"; yang_parent_name = "base"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr_slash_prefix_len.is_set
	|| distance.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr_slash_prefix_len.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric";
    ADD_KEY_TOKEN(ipv4_addr_slash_prefix_len, "ipv4-addr-slash-prefix-len");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr_slash_prefix_len.is_set || is_set(ipv4_addr_slash_prefix_len.yfilter)) leaf_name_data.push_back(ipv4_addr_slash_prefix_len.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr-slash-prefix-len")
    {
        ipv4_addr_slash_prefix_len = value;
        ipv4_addr_slash_prefix_len.value_namespace = name_space;
        ipv4_addr_slash_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr-slash-prefix-len")
    {
        ipv4_addr_slash_prefix_len.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "ipv4-addr-slash-prefix-len" || name == "distance")
        return true;
    return false;
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::Metric()
    :
    bandwidth_metric{YType::uint32, "bandwidth-metric"},
    delay_metric{YType::uint32, "delay-metric"},
    reliability_metric{YType::uint8, "reliability-metric"},
    effective_bandwidth_metric{YType::uint8, "effective-bandwidth-metric"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "metric"; yang_parent_name = "summary-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::has_data() const
{
    if (is_presence_container) return true;
    return bandwidth_metric.is_set
	|| delay_metric.is_set
	|| reliability_metric.is_set
	|| effective_bandwidth_metric.is_set
	|| mtu.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_metric.yfilter)
	|| ydk::is_set(delay_metric.yfilter)
	|| ydk::is_set(reliability_metric.yfilter)
	|| ydk::is_set(effective_bandwidth_metric.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_metric.is_set || is_set(bandwidth_metric.yfilter)) leaf_name_data.push_back(bandwidth_metric.get_name_leafdata());
    if (delay_metric.is_set || is_set(delay_metric.yfilter)) leaf_name_data.push_back(delay_metric.get_name_leafdata());
    if (reliability_metric.is_set || is_set(reliability_metric.yfilter)) leaf_name_data.push_back(reliability_metric.get_name_leafdata());
    if (effective_bandwidth_metric.is_set || is_set(effective_bandwidth_metric.yfilter)) leaf_name_data.push_back(effective_bandwidth_metric.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-metric")
    {
        bandwidth_metric = value;
        bandwidth_metric.value_namespace = name_space;
        bandwidth_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-metric")
    {
        delay_metric = value;
        delay_metric.value_namespace = name_space;
        delay_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability-metric")
    {
        reliability_metric = value;
        reliability_metric.value_namespace = name_space;
        reliability_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "effective-bandwidth-metric")
    {
        effective_bandwidth_metric = value;
        effective_bandwidth_metric.value_namespace = name_space;
        effective_bandwidth_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-metric")
    {
        bandwidth_metric.yfilter = yfilter;
    }
    if(value_path == "delay-metric")
    {
        delay_metric.yfilter = yfilter;
    }
    if(value_path == "reliability-metric")
    {
        reliability_metric.yfilter = yfilter;
    }
    if(value_path == "effective-bandwidth-metric")
    {
        effective_bandwidth_metric.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::SummaryMetric::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-metric" || name == "delay-metric" || name == "reliability-metric" || name == "effective-bandwidth-metric" || name == "mtu")
        return true;
    return false;
}

Native::Router::Eigrp::AfInterface::AfInterface()
    :
    name{YType::str, "name"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    hello_interval{YType::uint16, "hello-interval"},
    hold_time{YType::uint16, "hold-time"},
    passive_interface{YType::boolean, "passive-interface"},
    split_horizon{YType::boolean, "split-horizon"}
        ,
    stub_site(std::make_shared<Native::Router::Eigrp::AfInterface::StubSite>())
    , authentication(std::make_shared<Native::Router::Eigrp::AfInterface::Authentication>())
    , summary_address(std::make_shared<Native::Router::Eigrp::AfInterface::SummaryAddress>())
{
    stub_site->parent = this;
    authentication->parent = this;
    summary_address->parent = this;

    yang_name = "af-interface"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AfInterface::~AfInterface()
{
}

bool Native::Router::Eigrp::AfInterface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| bandwidth_percent.is_set
	|| hello_interval.is_set
	|| hold_time.is_set
	|| passive_interface.is_set
	|| split_horizon.is_set
	|| (stub_site !=  nullptr && stub_site->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data());
}

bool Native::Router::Eigrp::AfInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(bandwidth_percent.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(split_horizon.yfilter)
	|| (stub_site !=  nullptr && stub_site->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation());
}

std::string Native::Router::Eigrp::AfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-interface";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AfInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.yfilter)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub-site")
    {
        if(stub_site == nullptr)
        {
            stub_site = std::make_shared<Native::Router::Eigrp::AfInterface::StubSite>();
        }
        return stub_site;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Eigrp::AfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Router::Eigrp::AfInterface::SummaryAddress>();
        }
        return summary_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stub_site != nullptr)
    {
        _children["stub-site"] = stub_site;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(summary_address != nullptr)
    {
        _children["summary-address"] = summary_address;
    }

    return _children;
}

void Native::Router::Eigrp::AfInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
        bandwidth_percent.value_namespace = name_space;
        bandwidth_percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AfInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AfInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub-site" || name == "authentication" || name == "summary-address" || name == "name" || name == "bandwidth-percent" || name == "hello-interval" || name == "hold-time" || name == "passive-interface" || name == "split-horizon")
        return true;
    return false;
}

Native::Router::Eigrp::AfInterface::StubSite::StubSite()
    :
    wan_interface{YType::empty, "wan-interface"}
{

    yang_name = "stub-site"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AfInterface::StubSite::~StubSite()
{
}

bool Native::Router::Eigrp::AfInterface::StubSite::has_data() const
{
    if (is_presence_container) return true;
    return wan_interface.is_set;
}

bool Native::Router::Eigrp::AfInterface::StubSite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wan_interface.yfilter);
}

std::string Native::Router::Eigrp::AfInterface::StubSite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-site";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AfInterface::StubSite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wan_interface.is_set || is_set(wan_interface.yfilter)) leaf_name_data.push_back(wan_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AfInterface::StubSite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AfInterface::StubSite::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AfInterface::StubSite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wan-interface")
    {
        wan_interface = value;
        wan_interface.value_namespace = name_space;
        wan_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AfInterface::StubSite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wan-interface")
    {
        wan_interface.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AfInterface::StubSite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wan-interface")
        return true;
    return false;
}

Native::Router::Eigrp::AfInterface::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
        ,
    mode(std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AfInterface::Authentication::~Authentication()
{
}

bool Native::Router::Eigrp::AfInterface::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Router::Eigrp::AfInterface::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Router::Eigrp::AfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AfInterface::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Router::Eigrp::AfInterface::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AfInterface::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AfInterface::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Router::Eigrp::AfInterface::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"}
        ,
    hmac_sha_256(std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256>())
{
    hmac_sha_256->parent = this;

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AfInterface::Authentication::Mode::~Mode()
{
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_data());
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_operation());
}

std::string Native::Router::Eigrp::AfInterface::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AfInterface::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AfInterface::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac-sha-256")
    {
        if(hmac_sha_256 == nullptr)
        {
            hmac_sha_256 = std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256>();
        }
        return hmac_sha_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AfInterface::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hmac_sha_256 != nullptr)
    {
        _children["hmac-sha-256"] = hmac_sha_256;
    }

    return _children;
}

void Native::Router::Eigrp::AfInterface::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AfInterface::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hmac-sha-256" || name == "md5")
        return true;
    return false;
}

Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::HmacSha256()
    :
    auth_type{YType::uint8, "auth-type"},
    auth_key{YType::str, "auth-key"}
{

    yang_name = "hmac-sha-256"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::~HmacSha256()
{
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::has_data() const
{
    if (is_presence_container) return true;
    return auth_type.is_set
	|| auth_key.is_set;
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| ydk::is_set(auth_key.yfilter);
}

std::string Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac-sha-256";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());
    if (auth_key.is_set || is_set(auth_key.yfilter)) leaf_name_data.push_back(auth_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-key")
    {
        auth_key = value;
        auth_key.value_namespace = name_space;
        auth_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
    if(value_path == "auth-key")
    {
        auth_key.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "auth-key")
        return true;
    return false;
}

Native::Router::Eigrp::AfInterface::SummaryAddress::SummaryAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "summary-address"; yang_parent_name = "af-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::AfInterface::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Eigrp::AfInterface::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AfInterface::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::AfInterface::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::AfInterface::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::AfInterface::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::AfInterface::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::AfInterface::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::AfInterface::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::AfInterface::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::SetAsInSubmode::SetAsInSubmode()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{

    yang_name = "set-as-in-submode"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::SetAsInSubmode::~SetAsInSubmode()
{
}

bool Native::Router::Eigrp::SetAsInSubmode::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::SetAsInSubmode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system.yfilter);
}

std::string Native::Router::Eigrp::SetAsInSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-as-in-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::SetAsInSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.yfilter)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::SetAsInSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::SetAsInSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::SetAsInSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
        autonomous_system.value_namespace = name_space;
        autonomous_system.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::SetAsInSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::SetAsInSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autonomous-system")
        return true;
    return false;
}

Native::Router::Eigrp::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
        ,
    interface(std::make_shared<Native::Router::Eigrp::Bfd::Interface>())
{
    interface->parent = this;

    yang_name = "bfd"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Bfd::~Bfd()
{
}

bool Native::Router::Eigrp::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return all_interfaces.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::Bfd::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Router::Eigrp::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "all-interfaces")
        return true;
    return false;
}

Native::Router::Eigrp::Bfd::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Router::Eigrp::Bfd::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Eigrp::Bfd::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Bfd::Interface::~Interface()
{
}

bool Native::Router::Eigrp::Bfd::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Router::Eigrp::Bfd::Interface::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Router::Eigrp::Bfd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Bfd::Interface::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Bfd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::Bfd::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::Bfd::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Bfd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Eigrp::Bfd::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::Bfd::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Router::Eigrp::Bfd::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Bfd::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Bfd::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Bfd::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Bfd::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::DefaultInformation::DefaultInformation()
    :
    in(nullptr) // presence node
    , out(nullptr) // presence node
{

    yang_name = "default-information"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Eigrp::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::DefaultInformation::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::DefaultInformation::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Router::Eigrp::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::DefaultInformation::In::In()
    :
    sa_num{YType::uint16, "sa-num"},
    sa_name{YType::str, "sa-name"}
{

    yang_name = "in"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::DefaultInformation::In::~In()
{
}

bool Native::Router::Eigrp::DefaultInformation::In::has_data() const
{
    if (is_presence_container) return true;
    return sa_num.is_set
	|| sa_name.is_set;
}

bool Native::Router::Eigrp::DefaultInformation::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_num.yfilter)
	|| ydk::is_set(sa_name.yfilter);
}

std::string Native::Router::Eigrp::DefaultInformation::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DefaultInformation::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_num.is_set || is_set(sa_num.yfilter)) leaf_name_data.push_back(sa_num.get_name_leafdata());
    if (sa_name.is_set || is_set(sa_name.yfilter)) leaf_name_data.push_back(sa_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DefaultInformation::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DefaultInformation::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DefaultInformation::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-num")
    {
        sa_num = value;
        sa_num.value_namespace = name_space;
        sa_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-name")
    {
        sa_name = value;
        sa_name.value_namespace = name_space;
        sa_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DefaultInformation::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-num")
    {
        sa_num.yfilter = yfilter;
    }
    if(value_path == "sa-name")
    {
        sa_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DefaultInformation::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-num" || name == "sa-name")
        return true;
    return false;
}

Native::Router::Eigrp::DefaultInformation::Out::Out()
    :
    sa_out_num{YType::uint16, "sa-out-num"},
    sa_out_name{YType::str, "sa-out-name"}
{

    yang_name = "out"; yang_parent_name = "default-information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::DefaultInformation::Out::~Out()
{
}

bool Native::Router::Eigrp::DefaultInformation::Out::has_data() const
{
    if (is_presence_container) return true;
    return sa_out_num.is_set
	|| sa_out_name.is_set;
}

bool Native::Router::Eigrp::DefaultInformation::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa_out_num.yfilter)
	|| ydk::is_set(sa_out_name.yfilter);
}

std::string Native::Router::Eigrp::DefaultInformation::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DefaultInformation::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_out_num.is_set || is_set(sa_out_num.yfilter)) leaf_name_data.push_back(sa_out_num.get_name_leafdata());
    if (sa_out_name.is_set || is_set(sa_out_name.yfilter)) leaf_name_data.push_back(sa_out_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DefaultInformation::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DefaultInformation::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DefaultInformation::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num = value;
        sa_out_num.value_namespace = name_space;
        sa_out_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name = value;
        sa_out_name.value_namespace = name_space;
        sa_out_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DefaultInformation::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa-out-num")
    {
        sa_out_num.yfilter = yfilter;
    }
    if(value_path == "sa-out-name")
    {
        sa_out_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DefaultInformation::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa-out-num" || name == "sa-out-name")
        return true;
    return false;
}

Native::Router::Eigrp::DefaultMetric::DefaultMetric()
    :
    dm_rdr(this, {"dm_rdr"})
{

    yang_name = "default-metric"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DefaultMetric::~DefaultMetric()
{
}

bool Native::Router::Eigrp::DefaultMetric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dm_rdr.len(); index++)
    {
        if(dm_rdr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::DefaultMetric::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr.len(); index++)
    {
        if(dm_rdr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DefaultMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::DefaultMetric::DmRdr>();
        ent_->parent = this;
        dm_rdr.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dm_rdr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::DefaultMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::DefaultMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::DefaultMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr()
    :
    dm_rdr{YType::uint32, "dm-rdr"}
        ,
    dm_rdr0(this, {"dm_rdr0"})
{

    yang_name = "dm-rdr"; yang_parent_name = "default-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DefaultMetric::DmRdr::~DmRdr()
{
}

bool Native::Router::Eigrp::DefaultMetric::DmRdr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dm_rdr0.len(); index++)
    {
        if(dm_rdr0[index]->has_data())
            return true;
    }
    return dm_rdr.is_set;
}

bool Native::Router::Eigrp::DefaultMetric::DmRdr::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr0.len(); index++)
    {
        if(dm_rdr0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr.yfilter);
}

std::string Native::Router::Eigrp::DefaultMetric::DmRdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr";
    ADD_KEY_TOKEN(dm_rdr, "dm-rdr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DefaultMetric::DmRdr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.yfilter)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DefaultMetric::DmRdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr0")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0>();
        ent_->parent = this;
        dm_rdr0.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DefaultMetric::DmRdr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dm_rdr0.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::DefaultMetric::DmRdr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
        dm_rdr.value_namespace = name_space;
        dm_rdr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DefaultMetric::DmRdr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DefaultMetric::DmRdr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr")
        return true;
    return false;
}

Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::DmRdr0()
    :
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"}
{

    yang_name = "dm-rdr0"; yang_parent_name = "dm-rdr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::~DmRdr0()
{
}

bool Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::has_data() const
{
    if (is_presence_container) return true;
    return dm_rdr0.is_set
	|| dm_rdr_pct.is_set;
}

bool Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dm_rdr0.yfilter)
	|| ydk::is_set(dm_rdr_pct.yfilter);
}

std::string Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr0";
    ADD_KEY_TOKEN(dm_rdr0, "dm-rdr0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr0.is_set || is_set(dm_rdr0.yfilter)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.yfilter)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
        dm_rdr0.value_namespace = name_space;
        dm_rdr0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
        dm_rdr_pct.value_namespace = name_space;
        dm_rdr_pct.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0.yfilter = yfilter;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DefaultMetric::DmRdr::DmRdr0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dm-rdr0" || name == "dm-rdr-pct")
        return true;
    return false;
}

Native::Router::Eigrp::Distance::Distance()
    :
    rad_dis(this, {"rad_dis"})
    , eigrp(std::make_shared<Native::Router::Eigrp::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Distance::~Distance()
{
}

bool Native::Router::Eigrp::Distance::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rad_dis.len(); index++)
    {
        if(rad_dis[index]->has_data())
            return true;
    }
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::Distance::has_operation() const
{
    for (std::size_t index=0; index<rad_dis.len(); index++)
    {
        if(rad_dis[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rad-dis")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::Distance::RadDis>();
        ent_->parent = this;
        rad_dis.append(ent_);
        return ent_;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rad_dis.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(eigrp != nullptr)
    {
        _children["eigrp"] = eigrp;
    }

    return _children;
}

void Native::Router::Eigrp::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rad-dis" || name == "eigrp")
        return true;
    return false;
}

Native::Router::Eigrp::Distance::RadDis::RadDis()
    :
    rad_dis{YType::uint8, "rad-dis"}
        ,
    ipv4(this, {"ipv4"})
{

    yang_name = "rad-dis"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Distance::RadDis::~RadDis()
{
}

bool Native::Router::Eigrp::Distance::RadDis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return rad_dis.is_set;
}

bool Native::Router::Eigrp::Distance::RadDis::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rad_dis.yfilter);
}

std::string Native::Router::Eigrp::Distance::RadDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rad-dis";
    ADD_KEY_TOKEN(rad_dis, "rad-dis");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Distance::RadDis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rad_dis.is_set || is_set(rad_dis.yfilter)) leaf_name_data.push_back(rad_dis.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Distance::RadDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::Distance::RadDis::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Distance::RadDis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::Distance::RadDis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rad-dis")
    {
        rad_dis = value;
        rad_dis.value_namespace = name_space;
        rad_dis.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Distance::RadDis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rad-dis")
    {
        rad_dis.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Distance::RadDis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "rad-dis")
        return true;
    return false;
}

Native::Router::Eigrp::Distance::RadDis::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    ipv40{YType::str, "ipv40"}
{

    yang_name = "ipv4"; yang_parent_name = "rad-dis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Distance::RadDis::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::Distance::RadDis::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv40.is_set;
}

bool Native::Router::Eigrp::Distance::RadDis::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv40.yfilter);
}

std::string Native::Router::Eigrp::Distance::RadDis::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Distance::RadDis::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv40.is_set || is_set(ipv40.yfilter)) leaf_name_data.push_back(ipv40.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Distance::RadDis::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Distance::RadDis::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Distance::RadDis::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv40")
    {
        ipv40 = value;
        ipv40.value_namespace = name_space;
        ipv40.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Distance::RadDis::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv40")
    {
        ipv40.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Distance::RadDis::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv40")
        return true;
    return false;
}

Native::Router::Eigrp::Distance::Eigrp_::Eigrp_()
    :
    di_rt(this, {"di_rt"})
{

    yang_name = "eigrp"; yang_parent_name = "distance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::Distance::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<di_rt.len(); index++)
    {
        if(di_rt[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<di_rt.len(); index++)
    {
        if(di_rt[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Distance::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "di-rt")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::Distance::Eigrp_::DiRt>();
        ent_->parent = this;
        di_rt.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : di_rt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::Distance::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::Distance::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::Distance::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt")
        return true;
    return false;
}

Native::Router::Eigrp::Distance::Eigrp_::DiRt::DiRt()
    :
    di_rt{YType::uint8, "di-rt"},
    di_rt0{YType::uint8, "di-rt0"}
{

    yang_name = "di-rt"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Distance::Eigrp_::DiRt::~DiRt()
{
}

bool Native::Router::Eigrp::Distance::Eigrp_::DiRt::has_data() const
{
    if (is_presence_container) return true;
    return di_rt.is_set
	|| di_rt0.is_set;
}

bool Native::Router::Eigrp::Distance::Eigrp_::DiRt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(di_rt.yfilter)
	|| ydk::is_set(di_rt0.yfilter);
}

std::string Native::Router::Eigrp::Distance::Eigrp_::DiRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "di-rt";
    ADD_KEY_TOKEN(di_rt, "di-rt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Distance::Eigrp_::DiRt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (di_rt.is_set || is_set(di_rt.yfilter)) leaf_name_data.push_back(di_rt.get_name_leafdata());
    if (di_rt0.is_set || is_set(di_rt0.yfilter)) leaf_name_data.push_back(di_rt0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Distance::Eigrp_::DiRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Distance::Eigrp_::DiRt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Distance::Eigrp_::DiRt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "di-rt")
    {
        di_rt = value;
        di_rt.value_namespace = name_space;
        di_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "di-rt0")
    {
        di_rt0 = value;
        di_rt0.value_namespace = name_space;
        di_rt0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Distance::Eigrp_::DiRt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "di-rt")
    {
        di_rt.yfilter = yfilter;
    }
    if(value_path == "di-rt0")
    {
        di_rt0.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Distance::Eigrp_::DiRt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "di-rt" || name == "di-rt0")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::DistributeList()
    :
    eig_filt(this, {"eig_filt"})
    , gateway(std::make_shared<Native::Router::Eigrp::DistributeList::Gateway>())
    , prefix(std::make_shared<Native::Router::Eigrp::DistributeList::Prefix>())
    , route_map(std::make_shared<Native::Router::Eigrp::DistributeList::RouteMap>())
{
    gateway->parent = this;
    prefix->parent = this;
    route_map->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eig_filt.len(); index++)
    {
        if(eig_filt[index]->has_data())
            return true;
    }
    return (gateway !=  nullptr && gateway->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Eigrp::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<eig_filt.len(); index++)
    {
        if(eig_filt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Eigrp::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eig-filt")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::DistributeList::EigFilt>();
        ent_->parent = this;
        eig_filt.append(ent_);
        return ent_;
    }

    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Router::Eigrp::DistributeList::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Router::Eigrp::DistributeList::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Eigrp::DistributeList::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eig_filt.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(gateway != nullptr)
    {
        _children["gateway"] = gateway;
    }

    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    return _children;
}

void Native::Router::Eigrp::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eig-filt" || name == "gateway" || name == "prefix" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::EigFilt::EigFilt()
    :
    eig_filt{YType::str, "eig-filt"}
        ,
    in(nullptr) // presence node
    , out(nullptr) // presence node
{

    yang_name = "eig-filt"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::EigFilt::~EigFilt()
{
}

bool Native::Router::Eigrp::DistributeList::EigFilt::has_data() const
{
    if (is_presence_container) return true;
    return eig_filt.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::DistributeList::EigFilt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eig_filt.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::DistributeList::EigFilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eig-filt";
    ADD_KEY_TOKEN(eig_filt, "eig-filt");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::EigFilt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eig_filt.is_set || is_set(eig_filt.yfilter)) leaf_name_data.push_back(eig_filt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::EigFilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::DistributeList::EigFilt::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::DistributeList::EigFilt::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::EigFilt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Router::Eigrp::DistributeList::EigFilt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eig-filt")
    {
        eig_filt = value;
        eig_filt.value_namespace = name_space;
        eig_filt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DistributeList::EigFilt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eig-filt")
    {
        eig_filt.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DistributeList::EigFilt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "eig-filt")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::EigFilt::In::In()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "in"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::DistributeList::EigFilt::In::~In()
{
}

bool Native::Router::Eigrp::DistributeList::EigFilt::In::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::DistributeList::EigFilt::In::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::DistributeList::EigFilt::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::EigFilt::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::EigFilt::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::EigFilt::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DistributeList::EigFilt::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::DistributeList::EigFilt::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DistributeList::EigFilt::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::EigFilt::Out::Out()
    :
    interface_name{YType::str, "interface_name"}
{

    yang_name = "out"; yang_parent_name = "eig-filt"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::DistributeList::EigFilt::Out::~Out()
{
}

bool Native::Router::Eigrp::DistributeList::EigFilt::Out::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::DistributeList::EigFilt::Out::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Native::Router::Eigrp::DistributeList::EigFilt::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::EigFilt::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::EigFilt::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::EigFilt::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DistributeList::EigFilt::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

void Native::Router::Eigrp::DistributeList::EigFilt::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface_name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DistributeList::EigFilt::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface_name")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::Gateway::Gateway()
    :
    gw_list(this, {"gw_list"})
{

    yang_name = "gateway"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::Gateway::~Gateway()
{
}

bool Native::Router::Eigrp::DistributeList::Gateway::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gw_list.len(); index++)
    {
        if(gw_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::DistributeList::Gateway::has_operation() const
{
    for (std::size_t index=0; index<gw_list.len(); index++)
    {
        if(gw_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::DistributeList::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::Gateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::DistributeList::Gateway::GwList>();
        ent_->parent = this;
        gw_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : gw_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::DistributeList::Gateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::DistributeList::Gateway::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::DistributeList::Gateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::Gateway::GwList::GwList()
    :
    gw_list{YType::str, "gw-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "gw-list"; yang_parent_name = "gateway"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::Gateway::GwList::~GwList()
{
}

bool Native::Router::Eigrp::DistributeList::Gateway::GwList::has_data() const
{
    if (is_presence_container) return true;
    return gw_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::DistributeList::Gateway::GwList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gw_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::DistributeList::Gateway::GwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-list";
    ADD_KEY_TOKEN(gw_list, "gw-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::Gateway::GwList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gw_list.is_set || is_set(gw_list.yfilter)) leaf_name_data.push_back(gw_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::Gateway::GwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::Gateway::GwList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DistributeList::Gateway::GwList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gw-list")
    {
        gw_list = value;
        gw_list.value_namespace = name_space;
        gw_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DistributeList::Gateway::GwList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gw-list")
    {
        gw_list.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DistributeList::Gateway::GwList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gw-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::Prefix::Prefix()
    :
    pl_name(this, {"pl_name"})
{

    yang_name = "prefix"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::Prefix::~Prefix()
{
}

bool Native::Router::Eigrp::DistributeList::Prefix::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pl_name.len(); index++)
    {
        if(pl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::DistributeList::Prefix::has_operation() const
{
    for (std::size_t index=0; index<pl_name.len(); index++)
    {
        if(pl_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::DistributeList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pl-name")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::DistributeList::Prefix::PlName>();
        ent_->parent = this;
        pl_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pl_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::DistributeList::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::DistributeList::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::DistributeList::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::Prefix::PlName::PlName()
    :
    pl_name{YType::str, "pl-name"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "pl-name"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::Prefix::PlName::~PlName()
{
}

bool Native::Router::Eigrp::DistributeList::Prefix::PlName::has_data() const
{
    if (is_presence_container) return true;
    return pl_name.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::DistributeList::Prefix::PlName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pl_name.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::DistributeList::Prefix::PlName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pl-name";
    ADD_KEY_TOKEN(pl_name, "pl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::Prefix::PlName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pl_name.is_set || is_set(pl_name.yfilter)) leaf_name_data.push_back(pl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::Prefix::PlName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::Prefix::PlName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DistributeList::Prefix::PlName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pl-name")
    {
        pl_name = value;
        pl_name.value_namespace = name_space;
        pl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DistributeList::Prefix::PlName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pl-name")
    {
        pl_name.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DistributeList::Prefix::PlName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pl-name" || name == "gateway" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::RouteMap::RouteMap()
    :
    rmap_name(this, {"rmap_name"})
{

    yang_name = "route-map"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::DistributeList::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rmap_name.len(); index++)
    {
        if(rmap_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::DistributeList::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<rmap_name.len(); index++)
    {
        if(rmap_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rmap-name")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::DistributeList::RouteMap::RmapName>();
        ent_->parent = this;
        rmap_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rmap_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::DistributeList::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::DistributeList::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::DistributeList::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name")
        return true;
    return false;
}

Native::Router::Eigrp::DistributeList::RouteMap::RmapName::RmapName()
    :
    rmap_name{YType::str, "rmap-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "rmap-name"; yang_parent_name = "route-map"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::DistributeList::RouteMap::RmapName::~RmapName()
{
}

bool Native::Router::Eigrp::DistributeList::RouteMap::RmapName::has_data() const
{
    if (is_presence_container) return true;
    return rmap_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::DistributeList::RouteMap::RmapName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rmap_name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::DistributeList::RouteMap::RmapName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmap-name";
    ADD_KEY_TOKEN(rmap_name, "rmap-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::DistributeList::RouteMap::RmapName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmap_name.is_set || is_set(rmap_name.yfilter)) leaf_name_data.push_back(rmap_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::DistributeList::RouteMap::RmapName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::DistributeList::RouteMap::RmapName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::DistributeList::RouteMap::RmapName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rmap-name")
    {
        rmap_name = value;
        rmap_name.value_namespace = name_space;
        rmap_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::DistributeList::RouteMap::RmapName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rmap-name")
    {
        rmap_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::DistributeList::RouteMap::RmapName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rmap-name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"},
    stub_site{YType::str, "stub-site"}
        ,
    stub(nullptr) // presence node
{

    yang_name = "eigrp"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::Eigrp_::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| stub_site.is_set
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Eigrp::Eigrp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(stub_site.yfilter)
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Eigrp::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Eigrp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (stub_site.is_set || is_set(stub_site.yfilter)) leaf_name_data.push_back(stub_site.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Eigrp::Eigrp_::Stub>();
        }
        return stub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stub != nullptr)
    {
        _children["stub"] = stub;
    }

    return _children;
}

void Native::Router::Eigrp::Eigrp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stub-site")
    {
        stub_site = value;
        stub_site.value_namespace = name_space;
        stub_site.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Eigrp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "stub-site")
    {
        stub_site.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Eigrp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stub" || name == "router-id" || name == "stub-site")
        return true;
    return false;
}

Native::Router::Eigrp::Eigrp_::Stub::Stub()
    :
    connected{YType::empty, "connected"},
    summary{YType::empty, "summary"},
    redistributed{YType::empty, "redistributed"},
    leak_map{YType::str, "leak-map"},
    receive_only{YType::empty, "receive-only"},
    static_{YType::empty, "static"}
{

    yang_name = "stub"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Eigrp_::Stub::~Stub()
{
}

bool Native::Router::Eigrp::Eigrp_::Stub::has_data() const
{
    if (is_presence_container) return true;
    return connected.is_set
	|| summary.is_set
	|| redistributed.is_set
	|| leak_map.is_set
	|| receive_only.is_set
	|| static_.is_set;
}

bool Native::Router::Eigrp::Eigrp_::Stub::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(summary.yfilter)
	|| ydk::is_set(redistributed.yfilter)
	|| ydk::is_set(leak_map.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Router::Eigrp::Eigrp_::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Eigrp_::Stub::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (summary.is_set || is_set(summary.yfilter)) leaf_name_data.push_back(summary.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.yfilter)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (leak_map.is_set || is_set(leak_map.yfilter)) leaf_name_data.push_back(leak_map.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Eigrp_::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Eigrp_::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Eigrp_::Stub::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "summary")
    {
        summary = value;
        summary.value_namespace = name_space;
        summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
        redistributed.value_namespace = name_space;
        redistributed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leak-map")
    {
        leak_map = value;
        leak_map.value_namespace = name_space;
        leak_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Eigrp_::Stub::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "summary")
    {
        summary.yfilter = yfilter;
    }
    if(value_path == "redistributed")
    {
        redistributed.yfilter = yfilter;
    }
    if(value_path == "leak-map")
    {
        leak_map.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Eigrp_::Stub::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected" || name == "summary" || name == "redistributed" || name == "leak-map" || name == "receive-only" || name == "static")
        return true;
    return false;
}

Native::Router::Eigrp::Metric::Metric()
    :
    maximum_hops{YType::uint8, "maximum-hops"},
    weights{YType::uint8, "weights"}
{

    yang_name = "metric"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Metric::~Metric()
{
}

bool Native::Router::Eigrp::Metric::has_data() const
{
    if (is_presence_container) return true;
    return maximum_hops.is_set
	|| weights.is_set;
}

bool Native::Router::Eigrp::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_hops.yfilter)
	|| ydk::is_set(weights.yfilter);
}

std::string Native::Router::Eigrp::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_hops.is_set || is_set(maximum_hops.yfilter)) leaf_name_data.push_back(maximum_hops.get_name_leafdata());
    if (weights.is_set || is_set(weights.yfilter)) leaf_name_data.push_back(weights.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops = value;
        maximum_hops.value_namespace = name_space;
        maximum_hops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weights")
    {
        weights = value;
        weights.value_namespace = name_space;
        weights.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops.yfilter = yfilter;
    }
    if(value_path == "weights")
    {
        weights.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-hops" || name == "weights")
        return true;
    return false;
}

Native::Router::Eigrp::Neighbor::Neighbor()
    :
    ipv4(this, {"ipv4"})
{

    yang_name = "neighbor"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Neighbor::~Neighbor()
{
}

bool Native::Router::Eigrp::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Router::Eigrp::Neighbor::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
        ,
    interface(std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface>())
{
    interface->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Neighbor::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::Neighbor::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::Neighbor::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::Neighbor::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Neighbor::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Neighbor::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Neighbor::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    return _children;
}

void Native::Router::Eigrp::Neighbor::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Neighbor::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Neighbor::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ipv4")
        return true;
    return false;
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::~Interface()
{
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::Router::Eigrp::Neighbor::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Neighbor::Ipv4::Interface::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Neighbor::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Neighbor::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Eigrp::Network::Network()
    :
    number{YType::str, "number"},
    wild_card{YType::str, "wild-card"}
{

    yang_name = "network"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Network::~Network()
{
}

bool Native::Router::Eigrp::Network::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| wild_card.is_set;
}

bool Native::Router::Eigrp::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(wild_card.yfilter);
}

std::string Native::Router::Eigrp::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (wild_card.is_set || is_set(wild_card.yfilter)) leaf_name_data.push_back(wild_card.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wild-card")
    {
        wild_card = value;
        wild_card.value_namespace = name_space;
        wild_card.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "wild-card")
    {
        wild_card.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "wild-card")
        return true;
    return false;
}

Native::Router::Eigrp::OffsetList::OffsetList()
    :
    nsr_list(this, {"nsr_list"})
    , ol_acl(this, {"ol_acl"})
{

    yang_name = "offset-list"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::OffsetList::~OffsetList()
{
}

bool Native::Router::Eigrp::OffsetList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nsr_list.len(); index++)
    {
        if(nsr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.len(); index++)
    {
        if(ol_acl[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::OffsetList::has_operation() const
{
    for (std::size_t index=0; index<nsr_list.len(); index++)
    {
        if(nsr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.len(); index++)
    {
        if(ol_acl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Eigrp::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::OffsetList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-list")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::OffsetList::NsrList>();
        ent_->parent = this;
        nsr_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ol-acl")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::OffsetList::OlAcl>();
        ent_->parent = this;
        ol_acl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : nsr_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ol_acl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::OffsetList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::OffsetList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::OffsetList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "ol-acl")
        return true;
    return false;
}

Native::Router::Eigrp::OffsetList::NsrList::NsrList()
    :
    nsr_list{YType::uint16, "nsr-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "nsr-list"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::OffsetList::NsrList::~NsrList()
{
}

bool Native::Router::Eigrp::OffsetList::NsrList::has_data() const
{
    if (is_presence_container) return true;
    return nsr_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::OffsetList::NsrList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_list.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::OffsetList::NsrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-list";
    ADD_KEY_TOKEN(nsr_list, "nsr-list");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::OffsetList::NsrList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_list.is_set || is_set(nsr_list.yfilter)) leaf_name_data.push_back(nsr_list.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::OffsetList::NsrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::OffsetList::NsrList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::OffsetList::NsrList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-list")
    {
        nsr_list = value;
        nsr_list.value_namespace = name_space;
        nsr_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::OffsetList::NsrList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-list")
    {
        nsr_list.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::OffsetList::NsrList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-list" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::OffsetList::OlAcl::OlAcl()
    :
    ol_acl{YType::str, "ol-acl"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "ol-acl"; yang_parent_name = "offset-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::OffsetList::OlAcl::~OlAcl()
{
}

bool Native::Router::Eigrp::OffsetList::OlAcl::has_data() const
{
    if (is_presence_container) return true;
    return ol_acl.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::OffsetList::OlAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ol_acl.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Router::Eigrp::OffsetList::OlAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ol-acl";
    ADD_KEY_TOKEN(ol_acl, "ol-acl");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::OffsetList::OlAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ol_acl.is_set || is_set(ol_acl.yfilter)) leaf_name_data.push_back(ol_acl.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::OffsetList::OlAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::OffsetList::OlAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::OffsetList::OlAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ol-acl")
    {
        ol_acl = value;
        ol_acl.value_namespace = name_space;
        ol_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::OffsetList::OlAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ol-acl")
    {
        ol_acl.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::OffsetList::OlAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ol-acl" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Redistribute()
    :
    eigrp{YType::uint16, "eigrp"},
    ospf{YType::uint16, "ospf"}
        ,
    bgp(this, {"rdr_as"})
    , connected(nullptr) // presence node
    , isis(nullptr) // presence node
    , lisp(nullptr) // presence node
    , mobile(nullptr) // presence node
    , odr(nullptr) // presence node
    , rip(nullptr) // presence node
    , static_(nullptr) // presence node
    , vrf(std::make_shared<Native::Router::Eigrp::Redistribute::Vrf>())
{
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::Redistribute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return eigrp.is_set
	|| ospf.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Eigrp::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.len(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Eigrp::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::Redistribute::Bgp>();
        ent_->parent = this;
        bgp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Eigrp::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Eigrp::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Eigrp::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Eigrp::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Eigrp::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Eigrp::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Eigrp::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(connected != nullptr)
    {
        _children["connected"] = connected;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        _children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        _children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        _children["odr"] = odr;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        _children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Router::Eigrp::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "connected" || name == "isis" || name == "lisp" || name == "mobile" || name == "odr" || name == "rip" || name == "static" || name == "vrf" || name == "eigrp" || name == "ospf")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Bgp::Bgp()
    :
    rdr_as{YType::str, "rdr-as"},
    route_map{YType::str, "route-map"},
    rd_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
        ,
    metric(std::make_shared<Native::Router::Eigrp::Redistribute::Bgp::Metric>())
{
    metric->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Eigrp::Redistribute::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return rdr_as.is_set
	|| route_map.is_set
	|| rd_lesser_1_period_0_xx_period_yy_greater_.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rdr_as.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    ADD_KEY_TOKEN(rdr_as, "rdr-as");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdr_as.is_set || is_set(rdr_as.yfilter)) leaf_name_data.push_back(rdr_as.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (rd_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(rd_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(rd_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::Redistribute::Bgp::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    return _children;
}

void Native::Router::Eigrp::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rdr-as")
    {
        rdr_as = value;
        rdr_as.value_namespace = name_space;
        rdr_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_ = value;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        rd_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rdr-as")
    {
        rdr_as.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "rdr-as" || name == "route-map" || name == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Bgp::Metric::Metric()
    :
    bandwith{YType::uint32, "bandwith"},
    delay{YType::uint32, "delay"},
    reliability{YType::uint8, "reliability"},
    effective{YType::uint8, "Effective"},
    mtu{YType::uint16, "mtu"}
{

    yang_name = "metric"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Redistribute::Bgp::Metric::~Metric()
{
}

bool Native::Router::Eigrp::Redistribute::Bgp::Metric::has_data() const
{
    if (is_presence_container) return true;
    return bandwith.is_set
	|| delay.is_set
	|| reliability.is_set
	|| effective.is_set
	|| mtu.is_set;
}

bool Native::Router::Eigrp::Redistribute::Bgp::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwith.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(reliability.yfilter)
	|| ydk::is_set(effective.yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Bgp::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Bgp::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwith.is_set || is_set(bandwith.yfilter)) leaf_name_data.push_back(bandwith.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.yfilter)) leaf_name_data.push_back(reliability.get_name_leafdata());
    if (effective.is_set || is_set(effective.yfilter)) leaf_name_data.push_back(effective.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Bgp::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Bgp::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Bgp::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwith")
    {
        bandwith = value;
        bandwith.value_namespace = name_space;
        bandwith.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reliability")
    {
        reliability = value;
        reliability.value_namespace = name_space;
        reliability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Effective")
    {
        effective = value;
        effective.value_namespace = name_space;
        effective.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Bgp::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwith")
    {
        bandwith.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "reliability")
    {
        reliability.yfilter = yfilter;
    }
    if(value_path == "Effective")
    {
        effective.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Bgp::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwith" || name == "delay" || name == "reliability" || name == "Effective" || name == "mtu")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Connected::Connected()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Eigrp::Redistribute::Connected::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Isis::Isis()
    :
    is_tag{YType::str, "is-tag"},
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Eigrp::Redistribute::Isis::has_data() const
{
    if (is_presence_container) return true;
    return is_tag.is_set
	|| level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::Redistribute::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_tag.yfilter)
	|| ydk::is_set(level_1.yfilter)
	|| ydk::is_set(level_1_2.yfilter)
	|| ydk::is_set(level_2.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tag.is_set || is_set(is_tag.yfilter)) leaf_name_data.push_back(is_tag.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.yfilter)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.yfilter)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.yfilter)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-tag")
    {
        is_tag = value;
        is_tag.value_namespace = name_space;
        is_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
        level_1.value_namespace = name_space;
        level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
        level_1_2.value_namespace = name_space;
        level_1_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
        level_2.value_namespace = name_space;
        level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-tag")
    {
        is_tag.yfilter = yfilter;
    }
    if(value_path == "level-1")
    {
        level_1.yfilter = yfilter;
    }
    if(value_path == "level-1-2")
    {
        level_1_2.yfilter = yfilter;
    }
    if(value_path == "level-2")
    {
        level_2.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-tag" || name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Lisp::Lisp()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Eigrp::Redistribute::Lisp::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Mobile::Mobile()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Eigrp::Redistribute::Mobile::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Odr::Odr()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Eigrp::Redistribute::Odr::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Rip::Rip()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Eigrp::Redistribute::Rip::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Static::Static()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Eigrp::Redistribute::Static::~Static()
{
}

bool Native::Router::Eigrp::Redistribute::Static::has_data() const
{
    if (is_presence_container) return true;
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Router::Eigrp::Redistribute::Vrf::Vrf()
    :
    name{YType::str, "name"},
    global{YType::empty, "global"}
{

    yang_name = "vrf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Eigrp::Redistribute::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| global.is_set;
}

bool Native::Router::Eigrp::Redistribute::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::Router::Eigrp::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Redistribute::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "global")
        return true;
    return false;
}

Native::Router::Eigrp::SummaryMetric::SummaryMetric()
    :
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
        ,
    ipv4(this, {"ipv4"})
{

    yang_name = "summary-metric"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::SummaryMetric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Router::Eigrp::SummaryMetric::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_period_b_period_c_period_d_slash_nn.yfilter);
}

std::string Native::Router::Eigrp::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::SummaryMetric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.yfilter)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Router::Eigrp::SummaryMetric::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Eigrp::SummaryMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
        a_period_b_period_c_period_d_slash_nn.value_namespace = name_space;
        a_period_b_period_c_period_d_slash_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::SummaryMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::SummaryMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
        return true;
    return false;
}

Native::Router::Eigrp::SummaryMetric::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{

    yang_name = "ipv4"; yang_parent_name = "summary-metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::SummaryMetric::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::SummaryMetric::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::SummaryMetric::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Router::Eigrp::SummaryMetric::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4, "ipv4");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::SummaryMetric::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::SummaryMetric::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::SummaryMetric::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::SummaryMetric::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::SummaryMetric::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::SummaryMetric::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask")
        return true;
    return false;
}

Native::Router::Eigrp::Timers::Timers()
    :
    active_time(std::make_shared<Native::Router::Eigrp::Timers::ActiveTime>())
    , graceful_restart(std::make_shared<Native::Router::Eigrp::Timers::GracefulRestart>())
    , nsf(std::make_shared<Native::Router::Eigrp::Timers::Nsf>())
{
    active_time->parent = this;
    graceful_restart->parent = this;
    nsf->parent = this;

    yang_name = "timers"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Timers::~Timers()
{
}

bool Native::Router::Eigrp::Timers::has_data() const
{
    if (is_presence_container) return true;
    return (active_time !=  nullptr && active_time->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (nsf !=  nullptr && nsf->has_data());
}

bool Native::Router::Eigrp::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (active_time !=  nullptr && active_time->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation());
}

std::string Native::Router::Eigrp::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-time")
    {
        if(active_time == nullptr)
        {
            active_time = std::make_shared<Native::Router::Eigrp::Timers::ActiveTime>();
        }
        return active_time;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Eigrp::Timers::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Eigrp::Timers::Nsf>();
        }
        return nsf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_time != nullptr)
    {
        _children["active-time"] = active_time;
    }

    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    if(nsf != nullptr)
    {
        _children["nsf"] = nsf;
    }

    return _children;
}

void Native::Router::Eigrp::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Eigrp::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Eigrp::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-time" || name == "graceful-restart" || name == "nsf")
        return true;
    return false;
}

Native::Router::Eigrp::Timers::ActiveTime::ActiveTime()
    :
    atimer{YType::uint16, "atimer"},
    disabled{YType::empty, "disabled"}
{

    yang_name = "active-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Timers::ActiveTime::~ActiveTime()
{
}

bool Native::Router::Eigrp::Timers::ActiveTime::has_data() const
{
    if (is_presence_container) return true;
    return atimer.is_set
	|| disabled.is_set;
}

bool Native::Router::Eigrp::Timers::ActiveTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atimer.yfilter)
	|| ydk::is_set(disabled.yfilter);
}

std::string Native::Router::Eigrp::Timers::ActiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Timers::ActiveTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atimer.is_set || is_set(atimer.yfilter)) leaf_name_data.push_back(atimer.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Timers::ActiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Timers::ActiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Timers::ActiveTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "atimer")
    {
        atimer = value;
        atimer.value_namespace = name_space;
        atimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Timers::ActiveTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "atimer")
    {
        atimer.yfilter = yfilter;
    }
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Timers::ActiveTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atimer" || name == "disabled")
        return true;
    return false;
}

Native::Router::Eigrp::Timers::GracefulRestart::GracefulRestart()
    :
    purge_time{YType::empty, "purge-time"}
{

    yang_name = "graceful-restart"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Timers::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Eigrp::Timers::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return purge_time.is_set;
}

bool Native::Router::Eigrp::Timers::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(purge_time.yfilter);
}

std::string Native::Router::Eigrp::Timers::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Timers::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Timers::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Timers::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Timers::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Timers::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Timers::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "purge-time")
        return true;
    return false;
}

Native::Router::Eigrp::Timers::Nsf::Nsf()
    :
    converge{YType::empty, "converge"},
    signal{YType::empty, "signal"}
{

    yang_name = "nsf"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::Timers::Nsf::~Nsf()
{
}

bool Native::Router::Eigrp::Timers::Nsf::has_data() const
{
    if (is_presence_container) return true;
    return converge.is_set
	|| signal.is_set;
}

bool Native::Router::Eigrp::Timers::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(converge.yfilter)
	|| ydk::is_set(signal.yfilter);
}

std::string Native::Router::Eigrp::Timers::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::Timers::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (converge.is_set || is_set(converge.yfilter)) leaf_name_data.push_back(converge.get_name_leafdata());
    if (signal.is_set || is_set(signal.yfilter)) leaf_name_data.push_back(signal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::Timers::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::Timers::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::Timers::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "converge")
    {
        converge = value;
        converge.value_namespace = name_space;
        converge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal")
    {
        signal = value;
        signal.value_namespace = name_space;
        signal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::Timers::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "converge")
    {
        converge.yfilter = yfilter;
    }
    if(value_path == "signal")
    {
        signal.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::Timers::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "converge" || name == "signal")
        return true;
    return false;
}

Native::Router::Eigrp::TrafficShare::TrafficShare()
    :
    balanced{YType::empty, "balanced"}
        ,
    min(std::make_shared<Native::Router::Eigrp::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Eigrp::TrafficShare::has_data() const
{
    if (is_presence_container) return true;
    return balanced.is_set
	|| (min !=  nullptr && min->has_data());
}

bool Native::Router::Eigrp::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(balanced.yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Eigrp::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::TrafficShare::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (balanced.is_set || is_set(balanced.yfilter)) leaf_name_data.push_back(balanced.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Eigrp::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(min != nullptr)
    {
        _children["min"] = min;
    }

    return _children;
}

void Native::Router::Eigrp::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "balanced")
    {
        balanced = value;
        balanced.value_namespace = name_space;
        balanced.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "balanced")
    {
        balanced.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "balanced")
        return true;
    return false;
}

Native::Router::Eigrp::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{

    yang_name = "min"; yang_parent_name = "traffic-share"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Eigrp::TrafficShare::Min::~Min()
{
}

bool Native::Router::Eigrp::TrafficShare::Min::has_data() const
{
    if (is_presence_container) return true;
    return across_interfaces.is_set;
}

bool Native::Router::Eigrp::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Eigrp::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Eigrp::TrafficShare::Min::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Eigrp::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Eigrp::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Eigrp::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Eigrp::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Eigrp::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Lisp::Lisp()
    :
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"},
    site_id{YType::uint32, "site-id"}
        ,
    default_(std::make_shared<Native::Router::Lisp::Default>())
    , service(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Router::Lisp::Encapsulation>())
    , locator_set(this, {"name"})
    , locator(std::make_shared<Native::Router::Lisp::Locator>())
    , locator_scope(this, {"name"})
    , prefix_list(this, {"name"})
    , instance_container(std::make_shared<Native::Router::Lisp::InstanceContainer>())
    , alt(std::make_shared<Native::Router::Lisp::Alt>())
    , control_packet(std::make_shared<Native::Router::Lisp::ControlPacket>())
    , ddt(nullptr) // presence node
    , decapsulation(std::make_shared<Native::Router::Lisp::Decapsulation>())
    , etr(std::make_shared<Native::Router::Lisp::Etr>())
    , ipv4(std::make_shared<Native::Router::Lisp::Ipv4>())
    , ipv6(std::make_shared<Native::Router::Lisp::Ipv6>())
    , loc_reach_algorithm(std::make_shared<Native::Router::Lisp::LocReachAlgorithm>())
    , locator_down(std::make_shared<Native::Router::Lisp::LocatorDown>())
    , locator_table(std::make_shared<Native::Router::Lisp::LocatorTable>())
    , map_request(std::make_shared<Native::Router::Lisp::MapRequest>())
    , map_server(std::make_shared<Native::Router::Lisp::MapServer>())
    , other_xtr_probe(std::make_shared<Native::Router::Lisp::OtherXtrProbe>())
    , remote_rloc_probe(std::make_shared<Native::Router::Lisp::RemoteRlocProbe>())
    , eid_table(std::make_shared<Native::Router::Lisp::EidTable>())
    , security(nullptr) // presence node
    , site(this, {"sname"})
    , syslog(std::make_shared<Native::Router::Lisp::Syslog>())
{
    default_->parent = this;
    encapsulation->parent = this;
    locator->parent = this;
    instance_container->parent = this;
    alt->parent = this;
    control_packet->parent = this;
    decapsulation->parent = this;
    etr->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    loc_reach_algorithm->parent = this;
    locator_down->parent = this;
    locator_table->parent = this;
    map_request->parent = this;
    map_server->parent = this;
    other_xtr_probe->parent = this;
    remote_rloc_probe->parent = this;
    eid_table->parent = this;
    syslog->parent = this;

    yang_name = "lisp"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Lisp::~Lisp()
{
}

bool Native::Router::Lisp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return disable_ttl_propagate.is_set
	|| site_id.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (locator !=  nullptr && locator->has_data())
	|| (instance_container !=  nullptr && instance_container->has_data())
	|| (alt !=  nullptr && alt->has_data())
	|| (control_packet !=  nullptr && control_packet->has_data())
	|| (ddt !=  nullptr && ddt->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (locator_down !=  nullptr && locator_down->has_data())
	|| (locator_table !=  nullptr && locator_table->has_data())
	|| (map_request !=  nullptr && map_request->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Router::Lisp::has_operation() const
{
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disable_ttl_propagate.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (locator !=  nullptr && locator->has_operation())
	|| (instance_container !=  nullptr && instance_container->has_operation())
	|| (alt !=  nullptr && alt->has_operation())
	|| (control_packet !=  nullptr && control_packet->has_operation())
	|| (ddt !=  nullptr && ddt->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (locator_down !=  nullptr && locator_down->has_operation())
	|| (locator_table !=  nullptr && locator_table->has_operation())
	|| (map_request !=  nullptr && map_request->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Router::Lisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.yfilter)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default>();
        }
        return default_;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::Lisp::Service>();
        }
        return service;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "locator-set")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::LocatorSet>();
        ent_->parent = this;
        locator_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "locator")
    {
        if(locator == nullptr)
        {
            locator = std::make_shared<Native::Router::Lisp::Locator>();
        }
        return locator;
    }

    if(child_yang_name == "locator-scope")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::LocatorScope>();
        ent_->parent = this;
        locator_scope.append(ent_);
        return ent_;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-container")
    {
        if(instance_container == nullptr)
        {
            instance_container = std::make_shared<Native::Router::Lisp::InstanceContainer>();
        }
        return instance_container;
    }

    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::Lisp::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "control-packet")
    {
        if(control_packet == nullptr)
        {
            control_packet = std::make_shared<Native::Router::Lisp::ControlPacket>();
        }
        return control_packet;
    }

    if(child_yang_name == "ddt")
    {
        if(ddt == nullptr)
        {
            ddt = std::make_shared<Native::Router::Lisp::Ddt>();
        }
        return ddt;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::Lisp::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::Lisp::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "locator-down")
    {
        if(locator_down == nullptr)
        {
            locator_down = std::make_shared<Native::Router::Lisp::LocatorDown>();
        }
        return locator_down;
    }

    if(child_yang_name == "locator-table")
    {
        if(locator_table == nullptr)
        {
            locator_table = std::make_shared<Native::Router::Lisp::LocatorTable>();
        }
        return locator_table;
    }

    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::MapRequest>();
        }
        return map_request;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::Lisp::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::Lisp::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Router::Lisp::Security>();
        }
        return security;
    }

    if(child_yang_name == "site")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Site>();
        ent_->parent = this;
        site.append(ent_);
        return ent_;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Router::Lisp::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    count_ = 0;
    for (auto ent_ : locator_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(locator != nullptr)
    {
        _children["locator"] = locator;
    }

    count_ = 0;
    for (auto ent_ : locator_scope.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(instance_container != nullptr)
    {
        _children["instance-container"] = instance_container;
    }

    if(alt != nullptr)
    {
        _children["alt"] = alt;
    }

    if(control_packet != nullptr)
    {
        _children["control-packet"] = control_packet;
    }

    if(ddt != nullptr)
    {
        _children["ddt"] = ddt;
    }

    if(decapsulation != nullptr)
    {
        _children["decapsulation"] = decapsulation;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(loc_reach_algorithm != nullptr)
    {
        _children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(locator_down != nullptr)
    {
        _children["locator-down"] = locator_down;
    }

    if(locator_table != nullptr)
    {
        _children["locator-table"] = locator_table;
    }

    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        _children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        _children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(eid_table != nullptr)
    {
        _children["eid-table"] = eid_table;
    }

    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : site.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    return _children;
}

void Native::Router::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
        disable_ttl_propagate.value_namespace = name_space;
        disable_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "service" || name == "encapsulation" || name == "locator-set" || name == "locator" || name == "locator-scope" || name == "prefix-list" || name == "instance-container" || name == "alt" || name == "control-packet" || name == "ddt" || name == "decapsulation" || name == "etr" || name == "ipv4" || name == "ipv6" || name == "loc-reach-algorithm" || name == "locator-down" || name == "locator-table" || name == "map-request" || name == "map-server" || name == "other-xtr-probe" || name == "remote-rloc-probe" || name == "eid-table" || name == "security" || name == "site" || name == "syslog" || name == "disable-ttl-propagate" || name == "site-id")
        return true;
    return false;
}

Native::Router::Lisp::Default::Default()
    :
    disable_ttl_propagate{YType::empty, "disable-ttl-propagate"},
    site_id{YType::uint32, "site-id"}
        ,
    service(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Router::Lisp::Default::Encapsulation>())
    , locator_set(this, {"name"})
    , locator(std::make_shared<Native::Router::Lisp::Default::Locator>())
    , locator_scope(this, {"name"})
    , prefix_list(this, {"name"})
    , instance_container(std::make_shared<Native::Router::Lisp::Default::InstanceContainer>())
    , alt(std::make_shared<Native::Router::Lisp::Default::Alt>())
    , control_packet(std::make_shared<Native::Router::Lisp::Default::ControlPacket>())
    , ddt(nullptr) // presence node
    , decapsulation(std::make_shared<Native::Router::Lisp::Default::Decapsulation>())
    , etr(std::make_shared<Native::Router::Lisp::Default::Etr>())
    , ipv4(std::make_shared<Native::Router::Lisp::Default::Ipv4>())
    , ipv6(std::make_shared<Native::Router::Lisp::Default::Ipv6>())
    , loc_reach_algorithm(std::make_shared<Native::Router::Lisp::Default::LocReachAlgorithm>())
    , locator_down(std::make_shared<Native::Router::Lisp::Default::LocatorDown>())
    , locator_table(std::make_shared<Native::Router::Lisp::Default::LocatorTable>())
    , map_request(std::make_shared<Native::Router::Lisp::Default::MapRequest>())
    , map_server(std::make_shared<Native::Router::Lisp::Default::MapServer>())
    , other_xtr_probe(std::make_shared<Native::Router::Lisp::Default::OtherXtrProbe>())
    , remote_rloc_probe(std::make_shared<Native::Router::Lisp::Default::RemoteRlocProbe>())
    , eid_table(std::make_shared<Native::Router::Lisp::Default::EidTable>())
    , security(nullptr) // presence node
    , site(this, {"sname"})
    , syslog(std::make_shared<Native::Router::Lisp::Default::Syslog>())
{
    encapsulation->parent = this;
    locator->parent = this;
    instance_container->parent = this;
    alt->parent = this;
    control_packet->parent = this;
    decapsulation->parent = this;
    etr->parent = this;
    ipv4->parent = this;
    ipv6->parent = this;
    loc_reach_algorithm->parent = this;
    locator_down->parent = this;
    locator_table->parent = this;
    map_request->parent = this;
    map_server->parent = this;
    other_xtr_probe->parent = this;
    remote_rloc_probe->parent = this;
    eid_table->parent = this;
    syslog->parent = this;

    yang_name = "default"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::~Default()
{
}

bool Native::Router::Lisp::Default::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_data())
            return true;
    }
    return disable_ttl_propagate.is_set
	|| site_id.is_set
	|| (service !=  nullptr && service->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (locator !=  nullptr && locator->has_data())
	|| (instance_container !=  nullptr && instance_container->has_data())
	|| (alt !=  nullptr && alt->has_data())
	|| (control_packet !=  nullptr && control_packet->has_data())
	|| (ddt !=  nullptr && ddt->has_data())
	|| (decapsulation !=  nullptr && decapsulation->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_data())
	|| (locator_down !=  nullptr && locator_down->has_data())
	|| (locator_table !=  nullptr && locator_table->has_data())
	|| (map_request !=  nullptr && map_request->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_data())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_data())
	|| (eid_table !=  nullptr && eid_table->has_data())
	|| (security !=  nullptr && security->has_data())
	|| (syslog !=  nullptr && syslog->has_data());
}

bool Native::Router::Lisp::Default::has_operation() const
{
    for (std::size_t index=0; index<locator_set.len(); index++)
    {
        if(locator_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<locator_scope.len(); index++)
    {
        if(locator_scope[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<site.len(); index++)
    {
        if(site[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disable_ttl_propagate.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| (service !=  nullptr && service->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (locator !=  nullptr && locator->has_operation())
	|| (instance_container !=  nullptr && instance_container->has_operation())
	|| (alt !=  nullptr && alt->has_operation())
	|| (control_packet !=  nullptr && control_packet->has_operation())
	|| (ddt !=  nullptr && ddt->has_operation())
	|| (decapsulation !=  nullptr && decapsulation->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (loc_reach_algorithm !=  nullptr && loc_reach_algorithm->has_operation())
	|| (locator_down !=  nullptr && locator_down->has_operation())
	|| (locator_table !=  nullptr && locator_table->has_operation())
	|| (map_request !=  nullptr && map_request->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (other_xtr_probe !=  nullptr && other_xtr_probe->has_operation())
	|| (remote_rloc_probe !=  nullptr && remote_rloc_probe->has_operation())
	|| (eid_table !=  nullptr && eid_table->has_operation())
	|| (security !=  nullptr && security->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation());
}

std::string Native::Router::Lisp::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_ttl_propagate.is_set || is_set(disable_ttl_propagate.yfilter)) leaf_name_data.push_back(disable_ttl_propagate.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Router::Lisp::Default::Service>();
        }
        return service;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Router::Lisp::Default::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "locator-set")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::LocatorSet>();
        ent_->parent = this;
        locator_set.append(ent_);
        return ent_;
    }

    if(child_yang_name == "locator")
    {
        if(locator == nullptr)
        {
            locator = std::make_shared<Native::Router::Lisp::Default::Locator>();
        }
        return locator;
    }

    if(child_yang_name == "locator-scope")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::LocatorScope>();
        ent_->parent = this;
        locator_scope.append(ent_);
        return ent_;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "instance-container")
    {
        if(instance_container == nullptr)
        {
            instance_container = std::make_shared<Native::Router::Lisp::Default::InstanceContainer>();
        }
        return instance_container;
    }

    if(child_yang_name == "alt")
    {
        if(alt == nullptr)
        {
            alt = std::make_shared<Native::Router::Lisp::Default::Alt>();
        }
        return alt;
    }

    if(child_yang_name == "control-packet")
    {
        if(control_packet == nullptr)
        {
            control_packet = std::make_shared<Native::Router::Lisp::Default::ControlPacket>();
        }
        return control_packet;
    }

    if(child_yang_name == "ddt")
    {
        if(ddt == nullptr)
        {
            ddt = std::make_shared<Native::Router::Lisp::Default::Ddt>();
        }
        return ddt;
    }

    if(child_yang_name == "decapsulation")
    {
        if(decapsulation == nullptr)
        {
            decapsulation = std::make_shared<Native::Router::Lisp::Default::Decapsulation>();
        }
        return decapsulation;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Default::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Default::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "loc-reach-algorithm")
    {
        if(loc_reach_algorithm == nullptr)
        {
            loc_reach_algorithm = std::make_shared<Native::Router::Lisp::Default::LocReachAlgorithm>();
        }
        return loc_reach_algorithm;
    }

    if(child_yang_name == "locator-down")
    {
        if(locator_down == nullptr)
        {
            locator_down = std::make_shared<Native::Router::Lisp::Default::LocatorDown>();
        }
        return locator_down;
    }

    if(child_yang_name == "locator-table")
    {
        if(locator_table == nullptr)
        {
            locator_table = std::make_shared<Native::Router::Lisp::Default::LocatorTable>();
        }
        return locator_table;
    }

    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default::MapRequest>();
        }
        return map_request;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "other-xtr-probe")
    {
        if(other_xtr_probe == nullptr)
        {
            other_xtr_probe = std::make_shared<Native::Router::Lisp::Default::OtherXtrProbe>();
        }
        return other_xtr_probe;
    }

    if(child_yang_name == "remote-rloc-probe")
    {
        if(remote_rloc_probe == nullptr)
        {
            remote_rloc_probe = std::make_shared<Native::Router::Lisp::Default::RemoteRlocProbe>();
        }
        return remote_rloc_probe;
    }

    if(child_yang_name == "eid-table")
    {
        if(eid_table == nullptr)
        {
            eid_table = std::make_shared<Native::Router::Lisp::Default::EidTable>();
        }
        return eid_table;
    }

    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Router::Lisp::Default::Security>();
        }
        return security;
    }

    if(child_yang_name == "site")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::Site>();
        ent_->parent = this;
        site.append(ent_);
        return ent_;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Router::Lisp::Default::Syslog>();
        }
        return syslog;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    count_ = 0;
    for (auto ent_ : locator_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(locator != nullptr)
    {
        _children["locator"] = locator;
    }

    count_ = 0;
    for (auto ent_ : locator_scope.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(instance_container != nullptr)
    {
        _children["instance-container"] = instance_container;
    }

    if(alt != nullptr)
    {
        _children["alt"] = alt;
    }

    if(control_packet != nullptr)
    {
        _children["control-packet"] = control_packet;
    }

    if(ddt != nullptr)
    {
        _children["ddt"] = ddt;
    }

    if(decapsulation != nullptr)
    {
        _children["decapsulation"] = decapsulation;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(loc_reach_algorithm != nullptr)
    {
        _children["loc-reach-algorithm"] = loc_reach_algorithm;
    }

    if(locator_down != nullptr)
    {
        _children["locator-down"] = locator_down;
    }

    if(locator_table != nullptr)
    {
        _children["locator-table"] = locator_table;
    }

    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(other_xtr_probe != nullptr)
    {
        _children["other-xtr-probe"] = other_xtr_probe;
    }

    if(remote_rloc_probe != nullptr)
    {
        _children["remote-rloc-probe"] = remote_rloc_probe;
    }

    if(eid_table != nullptr)
    {
        _children["eid-table"] = eid_table;
    }

    if(security != nullptr)
    {
        _children["security"] = security;
    }

    count_ = 0;
    for (auto ent_ : site.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    return _children;
}

void Native::Router::Lisp::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate = value;
        disable_ttl_propagate.value_namespace = name_space;
        disable_ttl_propagate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-ttl-propagate")
    {
        disable_ttl_propagate.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service" || name == "encapsulation" || name == "locator-set" || name == "locator" || name == "locator-scope" || name == "prefix-list" || name == "instance-container" || name == "alt" || name == "control-packet" || name == "ddt" || name == "decapsulation" || name == "etr" || name == "ipv4" || name == "ipv6" || name == "loc-reach-algorithm" || name == "locator-down" || name == "locator-table" || name == "map-request" || name == "map-server" || name == "other-xtr-probe" || name == "remote-rloc-probe" || name == "eid-table" || name == "security" || name == "site" || name == "syslog" || name == "disable-ttl-propagate" || name == "site-id")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Service()
    :
    ipv4(nullptr) // presence node
    , ipv6(nullptr) // presence node
    , ethernet(nullptr) // presence node
{

    yang_name = "service"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Lisp::Default::Service::~Service()
{
}

bool Native::Router::Lisp::Default::Service::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Router::Lisp::Default::Service::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Router::Lisp::Default::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Lisp::Default::Service::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Router::Lisp::Default::Service::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::get_children() const
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

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "ethernet")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Ipv4()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
        ,
    default_(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_>())
    , database_mapping(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Itr>())
    , itr_enable(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::EtrEnable>())
    , etr(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapCacheLimit>())
    , map_resolver(nullptr) // presence node
    , map_server(nullptr) // presence node
    , site_registration(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::SolicitMapRequest>())
    , distance(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Distance>())
    , map_cache(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapCache>())
    , map_cache_persistent(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapCachePersistent>())
    , proxy_itr(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::ProxyItr>())
    , route_export(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::RouteExport>())
    , use_petr(this, {"locator_address"})
    , import(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Import>())
{
    default_->parent = this;
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;
    import->parent = this;

    yang_name = "ipv4"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Lisp::Default::Service::Ipv4::~Ipv4()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<use_petr.len(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<use_petr.len(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::UsePetr>();
        ent_->parent = this;
        use_petr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        _children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        _children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        _children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        _children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        _children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        _children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        _children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        _children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        _children["route-export"] = route_export;
    }

    count_ = 0;
    for (auto ent_ : use_petr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "import" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Default_()
    :
    encapsulation{YType::enumeration, "encapsulation"},
    proxy_etr{YType::empty, "proxy-etr"},
    sgt{YType::empty, "sgt"},
    map_request_source{YType::str, "map-request-source"}
        ,
    database_mapping(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping>())
    , itr(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr>())
    , itr_enable(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable>())
    , etr_enable(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable>())
    , etr(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr>())
    , map_cache_limit(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit>())
    , map_resolver(nullptr) // presence node
    , map_server(nullptr) // presence node
    , site_registration(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration>())
    , solicit_map_request(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest>())
    , distance(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance>())
    , map_cache(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache>())
    , map_cache_persistent(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent>())
    , proxy_itr(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr>())
    , route_export(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport>())
    , use_petr(this, {"locator_address"})
    , import(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Import>())
{
    database_mapping->parent = this;
    itr->parent = this;
    itr_enable->parent = this;
    etr_enable->parent = this;
    etr->parent = this;
    map_cache_limit->parent = this;
    site_registration->parent = this;
    solicit_map_request->parent = this;
    distance->parent = this;
    map_cache->parent = this;
    map_cache_persistent->parent = this;
    proxy_itr->parent = this;
    route_export->parent = this;
    import->parent = this;

    yang_name = "default"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::~Default_()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<use_petr.len(); index++)
    {
        if(use_petr[index]->has_data())
            return true;
    }
    return encapsulation.is_set
	|| proxy_etr.is_set
	|| sgt.is_set
	|| map_request_source.is_set
	|| (database_mapping !=  nullptr && database_mapping->has_data())
	|| (itr !=  nullptr && itr->has_data())
	|| (itr_enable !=  nullptr && itr_enable->has_data())
	|| (etr_enable !=  nullptr && etr_enable->has_data())
	|| (etr !=  nullptr && etr->has_data())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_data())
	|| (map_resolver !=  nullptr && map_resolver->has_data())
	|| (map_server !=  nullptr && map_server->has_data())
	|| (site_registration !=  nullptr && site_registration->has_data())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (map_cache !=  nullptr && map_cache->has_data())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_data())
	|| (proxy_itr !=  nullptr && proxy_itr->has_data())
	|| (route_export !=  nullptr && route_export->has_data())
	|| (import !=  nullptr && import->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::has_operation() const
{
    for (std::size_t index=0; index<use_petr.len(); index++)
    {
        if(use_petr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(proxy_etr.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(map_request_source.yfilter)
	|| (database_mapping !=  nullptr && database_mapping->has_operation())
	|| (itr !=  nullptr && itr->has_operation())
	|| (itr_enable !=  nullptr && itr_enable->has_operation())
	|| (etr_enable !=  nullptr && etr_enable->has_operation())
	|| (etr !=  nullptr && etr->has_operation())
	|| (map_cache_limit !=  nullptr && map_cache_limit->has_operation())
	|| (map_resolver !=  nullptr && map_resolver->has_operation())
	|| (map_server !=  nullptr && map_server->has_operation())
	|| (site_registration !=  nullptr && site_registration->has_operation())
	|| (solicit_map_request !=  nullptr && solicit_map_request->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (map_cache !=  nullptr && map_cache->has_operation())
	|| (map_cache_persistent !=  nullptr && map_cache_persistent->has_operation())
	|| (proxy_itr !=  nullptr && proxy_itr->has_operation())
	|| (route_export !=  nullptr && route_export->has_operation())
	|| (import !=  nullptr && import->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (proxy_etr.is_set || is_set(proxy_etr.yfilter)) leaf_name_data.push_back(proxy_etr.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (map_request_source.is_set || is_set(map_request_source.yfilter)) leaf_name_data.push_back(map_request_source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-mapping")
    {
        if(database_mapping == nullptr)
        {
            database_mapping = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping>();
        }
        return database_mapping;
    }

    if(child_yang_name == "itr")
    {
        if(itr == nullptr)
        {
            itr = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr>();
        }
        return itr;
    }

    if(child_yang_name == "itr-enable")
    {
        if(itr_enable == nullptr)
        {
            itr_enable = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable>();
        }
        return itr_enable;
    }

    if(child_yang_name == "etr-enable")
    {
        if(etr_enable == nullptr)
        {
            etr_enable = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable>();
        }
        return etr_enable;
    }

    if(child_yang_name == "etr")
    {
        if(etr == nullptr)
        {
            etr = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr>();
        }
        return etr;
    }

    if(child_yang_name == "map-cache-limit")
    {
        if(map_cache_limit == nullptr)
        {
            map_cache_limit = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit>();
        }
        return map_cache_limit;
    }

    if(child_yang_name == "map-resolver")
    {
        if(map_resolver == nullptr)
        {
            map_resolver = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver>();
        }
        return map_resolver;
    }

    if(child_yang_name == "map-server")
    {
        if(map_server == nullptr)
        {
            map_server = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer>();
        }
        return map_server;
    }

    if(child_yang_name == "site-registration")
    {
        if(site_registration == nullptr)
        {
            site_registration = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration>();
        }
        return site_registration;
    }

    if(child_yang_name == "solicit-map-request")
    {
        if(solicit_map_request == nullptr)
        {
            solicit_map_request = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest>();
        }
        return solicit_map_request;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "map-cache")
    {
        if(map_cache == nullptr)
        {
            map_cache = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache>();
        }
        return map_cache;
    }

    if(child_yang_name == "map-cache-persistent")
    {
        if(map_cache_persistent == nullptr)
        {
            map_cache_persistent = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent>();
        }
        return map_cache_persistent;
    }

    if(child_yang_name == "proxy-itr")
    {
        if(proxy_itr == nullptr)
        {
            proxy_itr = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr>();
        }
        return proxy_itr;
    }

    if(child_yang_name == "route-export")
    {
        if(route_export == nullptr)
        {
            route_export = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport>();
        }
        return route_export;
    }

    if(child_yang_name == "use-petr")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr>();
        ent_->parent = this;
        use_petr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Import>();
        }
        return import;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database_mapping != nullptr)
    {
        _children["database-mapping"] = database_mapping;
    }

    if(itr != nullptr)
    {
        _children["itr"] = itr;
    }

    if(itr_enable != nullptr)
    {
        _children["itr-enable"] = itr_enable;
    }

    if(etr_enable != nullptr)
    {
        _children["etr-enable"] = etr_enable;
    }

    if(etr != nullptr)
    {
        _children["etr"] = etr;
    }

    if(map_cache_limit != nullptr)
    {
        _children["map-cache-limit"] = map_cache_limit;
    }

    if(map_resolver != nullptr)
    {
        _children["map-resolver"] = map_resolver;
    }

    if(map_server != nullptr)
    {
        _children["map-server"] = map_server;
    }

    if(site_registration != nullptr)
    {
        _children["site-registration"] = site_registration;
    }

    if(solicit_map_request != nullptr)
    {
        _children["solicit-map-request"] = solicit_map_request;
    }

    if(distance != nullptr)
    {
        _children["distance"] = distance;
    }

    if(map_cache != nullptr)
    {
        _children["map-cache"] = map_cache;
    }

    if(map_cache_persistent != nullptr)
    {
        _children["map-cache-persistent"] = map_cache_persistent;
    }

    if(proxy_itr != nullptr)
    {
        _children["proxy-itr"] = proxy_itr;
    }

    if(route_export != nullptr)
    {
        _children["route-export"] = route_export;
    }

    count_ = 0;
    for (auto ent_ : use_petr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(import != nullptr)
    {
        _children["import"] = import;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr = value;
        proxy_etr.value_namespace = name_space;
        proxy_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-request-source")
    {
        map_request_source = value;
        map_request_source.value_namespace = name_space;
        map_request_source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "proxy-etr")
    {
        proxy_etr.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "map-request-source")
    {
        map_request_source.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database-mapping" || name == "itr" || name == "itr-enable" || name == "etr-enable" || name == "etr" || name == "map-cache-limit" || name == "map-resolver" || name == "map-server" || name == "site-registration" || name == "solicit-map-request" || name == "distance" || name == "map-cache" || name == "map-cache-persistent" || name == "proxy-itr" || name == "route-export" || name == "use-petr" || name == "import" || name == "encapsulation" || name == "proxy-etr" || name == "sgt" || name == "map-request-source")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/database-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::Itr()
    :
    nmr_ttl{YType::uint16, "nmr-ttl"}
        ,
    map_resolver(this, {"ip_addr"})
{

    yang_name = "itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::~Itr()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_data())
            return true;
    }
    return nmr_ttl.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::has_operation() const
{
    for (std::size_t index=0; index<map_resolver.len(); index++)
    {
        if(map_resolver[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nmr_ttl.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nmr_ttl.is_set || is_set(nmr_ttl.yfilter)) leaf_name_data.push_back(nmr_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-resolver")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver>();
        ent_->parent = this;
        map_resolver.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_resolver.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl = value;
        nmr_ttl.value_namespace = name_space;
        nmr_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nmr-ttl")
    {
        nmr_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-resolver" || name == "nmr-ttl")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::MapResolver()
    :
    ip_addr{YType::str, "ip-addr"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "map-resolver"; yang_parent_name = "itr"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| prefix_list.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/itr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Itr::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::ItrEnable()
    :
    itr{YType::empty, "itr"}
{

    yang_name = "itr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::~ItrEnable()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::has_data() const
{
    if (is_presence_container) return true;
    return itr.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(itr.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "itr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (itr.is_set || is_set(itr.yfilter)) leaf_name_data.push_back(itr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "itr")
    {
        itr = value;
        itr.value_namespace = name_space;
        itr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "itr")
    {
        itr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::ItrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "itr")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::EtrEnable()
    :
    etr{YType::empty, "etr"}
{

    yang_name = "etr-enable"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::~EtrEnable()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::has_data() const
{
    if (is_presence_container) return true;
    return etr.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(etr.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (etr.is_set || is_set(etr.yfilter)) leaf_name_data.push_back(etr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "etr")
    {
        etr = value;
        etr.value_namespace = name_space;
        etr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "etr")
    {
        etr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::EtrEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "etr")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::Etr()
    :
    map_cache_ttl{YType::uint16, "map-cache-ttl"}
        ,
    map_server(this, {"ip_addr"})
    , accept_map_request_mapping(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping>())
{
    accept_map_request_mapping->parent = this;

    yang_name = "etr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::~Etr()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_data())
            return true;
    }
    return map_cache_ttl.is_set
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::has_operation() const
{
    for (std::size_t index=0; index<map_server.len(); index++)
    {
        if(map_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(map_cache_ttl.yfilter)
	|| (accept_map_request_mapping !=  nullptr && accept_map_request_mapping->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_cache_ttl.is_set || is_set(map_cache_ttl.yfilter)) leaf_name_data.push_back(map_cache_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-server")
    {
        auto ent_ = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer>();
        ent_->parent = this;
        map_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "accept-map-request-mapping")
    {
        if(accept_map_request_mapping == nullptr)
        {
            accept_map_request_mapping = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping>();
        }
        return accept_map_request_mapping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(accept_map_request_mapping != nullptr)
    {
        _children["accept-map-request-mapping"] = accept_map_request_mapping;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl = value;
        map_cache_ttl.value_namespace = name_space;
        map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-cache-ttl")
    {
        map_cache_ttl.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-server" || name == "accept-map-request-mapping" || name == "map-cache-ttl")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::MapServer()
    :
    ip_addr{YType::str, "ip-addr"},
    proxy_reply{YType::empty, "proxy-reply"}
        ,
    key(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key>())
{
    key->parent = this;

    yang_name = "map-server"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| proxy_reply.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    ADD_KEY_TOKEN(ip_addr, "ip-addr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key != nullptr)
    {
        _children["key"] = key;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "ip-addr" || name == "proxy-reply")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key()
    :
    key_pwd(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd>())
    , key_0(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0>())
    , key_6(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6>())
    , key_7(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7>())
{
    key_pwd->parent = this;
    key_0->parent = this;
    key_6->parent = this;
    key_7->parent = this;

    yang_name = "key"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::~Key()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::has_data() const
{
    if (is_presence_container) return true;
    return (key_pwd !=  nullptr && key_pwd->has_data())
	|| (key_0 !=  nullptr && key_0->has_data())
	|| (key_6 !=  nullptr && key_6->has_data())
	|| (key_7 !=  nullptr && key_7->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::has_operation() const
{
    return is_set(yfilter)
	|| (key_pwd !=  nullptr && key_pwd->has_operation())
	|| (key_0 !=  nullptr && key_0->has_operation())
	|| (key_6 !=  nullptr && key_6->has_operation())
	|| (key_7 !=  nullptr && key_7->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-pwd")
    {
        if(key_pwd == nullptr)
        {
            key_pwd = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd>();
        }
        return key_pwd;
    }

    if(child_yang_name == "key-0")
    {
        if(key_0 == nullptr)
        {
            key_0 = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0>();
        }
        return key_0;
    }

    if(child_yang_name == "key-6")
    {
        if(key_6 == nullptr)
        {
            key_6 = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6>();
        }
        return key_6;
    }

    if(child_yang_name == "key-7")
    {
        if(key_7 == nullptr)
        {
            key_7 = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7>();
        }
        return key_7;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_pwd != nullptr)
    {
        _children["key-pwd"] = key_pwd;
    }

    if(key_0 != nullptr)
    {
        _children["key-0"] = key_0;
    }

    if(key_6 != nullptr)
    {
        _children["key-6"] = key_6;
    }

    if(key_7 != nullptr)
    {
        _children["key-7"] = key_7;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-pwd" || name == "key-0" || name == "key-6" || name == "key-7")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::KeyPwd()
    :
    unc_pwd{YType::str, "unc-pwd"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-pwd"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::~KeyPwd()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::has_data() const
{
    if (is_presence_container) return true;
    return unc_pwd.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unc_pwd.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-pwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unc_pwd.is_set || is_set(unc_pwd.yfilter)) leaf_name_data.push_back(unc_pwd.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd = value;
        unc_pwd.value_namespace = name_space;
        unc_pwd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unc-pwd")
    {
        unc_pwd.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unc-pwd" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::Key0()
    :
    ak_0{YType::str, "ak-0"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-0"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::~Key0()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::has_data() const
{
    if (is_presence_container) return true;
    return ak_0.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_0.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-0";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_0.is_set || is_set(ak_0.yfilter)) leaf_name_data.push_back(ak_0.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-0")
    {
        ak_0 = value;
        ak_0.value_namespace = name_space;
        ak_0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-0")
    {
        ak_0.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-0" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::Key6()
    :
    ak_6{YType::str, "ak-6"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-6"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::~Key6()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::has_data() const
{
    if (is_presence_container) return true;
    return ak_6.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_6.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_6.is_set || is_set(ak_6.yfilter)) leaf_name_data.push_back(ak_6.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-6")
    {
        ak_6 = value;
        ak_6.value_namespace = name_space;
        ak_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-6")
    {
        ak_6.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-6" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::Key7()
    :
    ak_7{YType::str, "ak-7"},
    hash_function{YType::enumeration, "hash-function"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "key-7"; yang_parent_name = "key"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::~Key7()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::has_data() const
{
    if (is_presence_container) return true;
    return ak_7.is_set
	|| hash_function.is_set
	|| prefix_list.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ak_7.yfilter)
	|| ydk::is_set(hash_function.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-7";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ak_7.is_set || is_set(ak_7.yfilter)) leaf_name_data.push_back(ak_7.get_name_leafdata());
    if (hash_function.is_set || is_set(hash_function.yfilter)) leaf_name_data.push_back(hash_function.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ak-7")
    {
        ak_7 = value;
        ak_7.value_namespace = name_space;
        ak_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hash-function")
    {
        hash_function = value;
        hash_function.value_namespace = name_space;
        hash_function.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ak-7")
    {
        ak_7.yfilter = yfilter;
    }
    if(value_path == "hash-function")
    {
        hash_function.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ak-7" || name == "hash-function" || name == "prefix-list")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::AcceptMapRequestMapping()
    :
    accept_mappping{YType::empty, "accept-mappping"},
    verify{YType::empty, "verify"}
{

    yang_name = "accept-map-request-mapping"; yang_parent_name = "etr"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::~AcceptMapRequestMapping()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_data() const
{
    if (is_presence_container) return true;
    return accept_mappping.is_set
	|| verify.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_mappping.yfilter)
	|| ydk::is_set(verify.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/etr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-map-request-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_mappping.is_set || is_set(accept_mappping.yfilter)) leaf_name_data.push_back(accept_mappping.get_name_leafdata());
    if (verify.is_set || is_set(verify.yfilter)) leaf_name_data.push_back(verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping = value;
        accept_mappping.value_namespace = name_space;
        accept_mappping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify")
    {
        verify = value;
        verify.value_namespace = name_space;
        verify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-mappping")
    {
        accept_mappping.yfilter = yfilter;
    }
    if(value_path == "verify")
    {
        verify.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::AcceptMapRequestMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-mappping" || name == "verify")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::MapCacheLimit()
    :
    max_map_cache_entries{YType::uint32, "max-map-cache-entries"},
    reserve_list{YType::str, "reserve-list"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "map-cache-limit"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::~MapCacheLimit()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::has_data() const
{
    if (is_presence_container) return true;
    return max_map_cache_entries.is_set
	|| reserve_list.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_map_cache_entries.yfilter)
	|| ydk::is_set(reserve_list.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_map_cache_entries.is_set || is_set(max_map_cache_entries.yfilter)) leaf_name_data.push_back(max_map_cache_entries.get_name_leafdata());
    if (reserve_list.is_set || is_set(reserve_list.yfilter)) leaf_name_data.push_back(reserve_list.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries = value;
        max_map_cache_entries.value_namespace = name_space;
        max_map_cache_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserve-list")
    {
        reserve_list = value;
        reserve_list.value_namespace = name_space;
        reserve_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-map-cache-entries")
    {
        max_map_cache_entries.yfilter = yfilter;
    }
    if(value_path == "reserve-list")
    {
        reserve_list.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCacheLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-map-cache-entries" || name == "reserve-list" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapResolver()
    :
    map_request(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest>())
{
    map_request->parent = this;

    yang_name = "map-resolver"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::~MapResolver()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::has_data() const
{
    if (is_presence_container) return true;
    return (map_request !=  nullptr && map_request->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::has_operation() const
{
    return is_set(yfilter)
	|| (map_request !=  nullptr && map_request->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-request")
    {
        if(map_request == nullptr)
        {
            map_request = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest>();
        }
        return map_request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_request != nullptr)
    {
        _children["map-request"] = map_request;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-request")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::MapRequest()
    :
    validate(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate>())
{
    validate->parent = this;

    yang_name = "map-request"; yang_parent_name = "map-resolver"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::~MapRequest()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-request"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Source()
    :
    list(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List>())
    , registered(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered>())
{
    list->parent = this;
    registered->parent = this;

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data())
	|| (registered !=  nullptr && registered->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation())
	|| (registered !=  nullptr && registered->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List>();
        }
        return list;
    }

    if(child_yang_name == "registered")
    {
        if(registered == nullptr)
        {
            registered = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered>();
        }
        return registered;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    if(registered != nullptr)
    {
        _children["registered"] = registered;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list" || name == "registered")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::~List()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::Registered()
    :
    list(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>())
{
    list->parent = this;

    yang_name = "registered"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::~Registered()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_data() const
{
    if (is_presence_container) return true;
    return (list !=  nullptr && list->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(list != nullptr)
    {
        _children["list"] = list;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::List()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "list"; yang_parent_name = "registered"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::~List()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_data() const
{
    if (is_presence_container) return true;
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-resolver/map-request/validate/source/registered/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapResolver::MapRequest::Validate::Source::Registered::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapServer()
    :
    map_register(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister>())
{
    map_register->parent = this;

    yang_name = "map-server"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::~MapServer()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::has_data() const
{
    if (is_presence_container) return true;
    return (map_register !=  nullptr && map_register->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::has_operation() const
{
    return is_set(yfilter)
	|| (map_register !=  nullptr && map_register->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-register")
    {
        if(map_register == nullptr)
        {
            map_register = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister>();
        }
        return map_register;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map_register != nullptr)
    {
        _children["map-register"] = map_register;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-register")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::MapRegister()
    :
    validate(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate>())
{
    validate->parent = this;

    yang_name = "map-register"; yang_parent_name = "map-server"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::~MapRegister()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::has_data() const
{
    if (is_presence_container) return true;
    return (validate !=  nullptr && validate->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::has_operation() const
{
    return is_set(yfilter)
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(validate != nullptr)
    {
        _children["validate"] = validate;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "validate")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Validate()
    :
    source(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source>())
{
    source->parent = this;

    yang_name = "validate"; yang_parent_name = "map-register"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::~Validate()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-server/map-register/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::Source()
    :
    allowed_locator{YType::empty, "allowed-locator"}
{

    yang_name = "source"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::~Source()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_data() const
{
    if (is_presence_container) return true;
    return allowed_locator.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allowed_locator.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-server/map-register/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allowed_locator.is_set || is_set(allowed_locator.yfilter)) leaf_name_data.push_back(allowed_locator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator = value;
        allowed_locator.value_namespace = name_space;
        allowed_locator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allowed-locator")
    {
        allowed_locator.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapServer::MapRegister::Validate::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowed-locator")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::SiteRegistration()
    :
    limit{YType::uint32, "limit"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "site-registration"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::~SiteRegistration()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::has_data() const
{
    if (is_presence_container) return true;
    return limit.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::SiteRegistration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "warning-threshold")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::SolicitMapRequest()
    :
    ignore{YType::empty, "ignore"},
    max_per_entry{YType::uint8, "max-per-entry"},
    suppression_time{YType::uint16, "suppression-time"}
{

    yang_name = "solicit-map-request"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::~SolicitMapRequest()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::has_data() const
{
    if (is_presence_container) return true;
    return ignore.is_set
	|| max_per_entry.is_set
	|| suppression_time.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter)
	|| ydk::is_set(max_per_entry.yfilter)
	|| ydk::is_set(suppression_time.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "solicit-map-request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());
    if (max_per_entry.is_set || is_set(max_per_entry.yfilter)) leaf_name_data.push_back(max_per_entry.get_name_leafdata());
    if (suppression_time.is_set || is_set(suppression_time.yfilter)) leaf_name_data.push_back(suppression_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry = value;
        max_per_entry.value_namespace = name_space;
        max_per_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppression-time")
    {
        suppression_time = value;
        suppression_time.value_namespace = name_space;
        suppression_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
    if(value_path == "max-per-entry")
    {
        max_per_entry.yfilter = yfilter;
    }
    if(value_path == "suppression-time")
    {
        suppression_time.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::SolicitMapRequest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore" || name == "max-per-entry" || name == "suppression-time")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::Distance()
    :
    alt{YType::uint8, "alt"},
    away{YType::uint8, "away"},
    dyn_eid{YType::uint8, "dyn-eid"},
    site_registrations{YType::uint8, "site-registrations"}
{

    yang_name = "distance"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::~Distance()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::has_data() const
{
    if (is_presence_container) return true;
    return alt.is_set
	|| away.is_set
	|| dyn_eid.is_set
	|| site_registrations.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alt.yfilter)
	|| ydk::is_set(away.yfilter)
	|| ydk::is_set(dyn_eid.yfilter)
	|| ydk::is_set(site_registrations.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alt.is_set || is_set(alt.yfilter)) leaf_name_data.push_back(alt.get_name_leafdata());
    if (away.is_set || is_set(away.yfilter)) leaf_name_data.push_back(away.get_name_leafdata());
    if (dyn_eid.is_set || is_set(dyn_eid.yfilter)) leaf_name_data.push_back(dyn_eid.get_name_leafdata());
    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alt")
    {
        alt = value;
        alt.value_namespace = name_space;
        alt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away")
    {
        away = value;
        away.value_namespace = name_space;
        away.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid = value;
        dyn_eid.value_namespace = name_space;
        dyn_eid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alt")
    {
        alt.yfilter = yfilter;
    }
    if(value_path == "away")
    {
        away.yfilter = yfilter;
    }
    if(value_path == "dyn-eid")
    {
        dyn_eid.yfilter = yfilter;
    }
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alt" || name == "away" || name == "dyn-eid" || name == "site-registrations")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::MapCache()
    :
    site_registration{YType::empty, "site-registration"}
        ,
    away_eids(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids>())
{
    away_eids->parent = this;

    yang_name = "map-cache"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::~MapCache()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| (away_eids !=  nullptr && away_eids->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| (away_eids !=  nullptr && away_eids->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "away-eids")
    {
        if(away_eids == nullptr)
        {
            away_eids = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids>();
        }
        return away_eids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(away_eids != nullptr)
    {
        _children["away-eids"] = away_eids;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "away-eids" || name == "site-registration")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::AwayEids()
    :
    send_map_request{YType::empty, "send-map-request"}
{

    yang_name = "away-eids"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::~AwayEids()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::has_data() const
{
    if (is_presence_container) return true;
    return send_map_request.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_map_request.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/map-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "away-eids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_map_request.is_set || is_set(send_map_request.yfilter)) leaf_name_data.push_back(send_map_request.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-map-request")
    {
        send_map_request = value;
        send_map_request.value_namespace = name_space;
        send_map_request.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-map-request")
    {
        send_map_request.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCache::AwayEids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-map-request")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::MapCachePersistent()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "map-cache-persistent"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::~MapCachePersistent()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::MapCachePersistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::ProxyItr()
    :
    ipv4_addr{YType::str, "ipv4-addr"},
    ipv6_addr{YType::str, "ipv6-addr"}
{

    yang_name = "proxy-itr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::~ProxyItr()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_addr.is_set
	|| ipv6_addr.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_addr.yfilter)
	|| ydk::is_set(ipv6_addr.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-itr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_addr.is_set || is_set(ipv4_addr.yfilter)) leaf_name_data.push_back(ipv4_addr.get_name_leafdata());
    if (ipv6_addr.is_set || is_set(ipv6_addr.yfilter)) leaf_name_data.push_back(ipv6_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr = value;
        ipv4_addr.value_namespace = name_space;
        ipv4_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr = value;
        ipv6_addr.value_namespace = name_space;
        ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-addr")
    {
        ipv4_addr.yfilter = yfilter;
    }
    if(value_path == "ipv6-addr")
    {
        ipv6_addr.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::ProxyItr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr" || name == "ipv6-addr")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::RouteExport()
    :
    site_registrations{YType::empty, "site-registrations"},
    away_eids{YType::empty, "away-eids"}
{

    yang_name = "route-export"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::~RouteExport()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::has_data() const
{
    if (is_presence_container) return true;
    return site_registrations.is_set
	|| away_eids.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registrations.yfilter)
	|| ydk::is_set(away_eids.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-export";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registrations.is_set || is_set(site_registrations.yfilter)) leaf_name_data.push_back(site_registrations.get_name_leafdata());
    if (away_eids.is_set || is_set(away_eids.yfilter)) leaf_name_data.push_back(away_eids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registrations")
    {
        site_registrations = value;
        site_registrations.value_namespace = name_space;
        site_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "away-eids")
    {
        away_eids = value;
        away_eids.value_namespace = name_space;
        away_eids.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registrations")
    {
        site_registrations.yfilter = yfilter;
    }
    if(value_path == "away-eids")
    {
        away_eids.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::RouteExport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registrations" || name == "away-eids")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::UsePetr()
    :
    locator_address{YType::str, "locator-address"}
        ,
    priority(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority>())
{
    priority->parent = this;

    yang_name = "use-petr"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::~UsePetr()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::has_data() const
{
    if (is_presence_container) return true;
    return locator_address.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(locator_address.yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-petr";
    ADD_KEY_TOKEN(locator_address, "locator-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (locator_address.is_set || is_set(locator_address.yfilter)) leaf_name_data.push_back(locator_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority != nullptr)
    {
        _children["priority"] = priority;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locator-address")
    {
        locator_address = value;
        locator_address.value_namespace = name_space;
        locator_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locator-address")
    {
        locator_address.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "locator-address")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::Priority()
    :
    priority_value{YType::uint8, "priority-value"},
    weight{YType::uint8, "weight"}
{

    yang_name = "priority"; yang_parent_name = "use-petr"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::~Priority()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority_value.is_set
	|| weight.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_value.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_value.is_set || is_set(priority_value.yfilter)) leaf_name_data.push_back(priority_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-value")
    {
        priority_value = value;
        priority_value.value_namespace = name_space;
        priority_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-value")
    {
        priority_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::UsePetr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-value" || name == "weight")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Import()
    :
    database(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database>())
{
    database->parent = this;

    yang_name = "import"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::~Import()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::has_data() const
{
    if (is_presence_container) return true;
    return (database !=  nullptr && database->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::has_operation() const
{
    return is_set(yfilter)
	|| (database !=  nullptr && database->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database>();
        }
        return database;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(database != nullptr)
    {
        _children["database"] = database;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::Database()
    :
    site_registration{YType::empty, "site-registration"},
    locator_set{YType::str, "locator-set"}
{

    yang_name = "database"; yang_parent_name = "import"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::~Database()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::has_data() const
{
    if (is_presence_container) return true;
    return site_registration.is_set
	|| locator_set.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(site_registration.yfilter)
	|| ydk::is_set(locator_set.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/default/import/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (site_registration.is_set || is_set(site_registration.yfilter)) leaf_name_data.push_back(site_registration.get_name_leafdata());
    if (locator_set.is_set || is_set(locator_set.yfilter)) leaf_name_data.push_back(locator_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "site-registration")
    {
        site_registration = value;
        site_registration.value_namespace = name_space;
        site_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locator-set")
    {
        locator_set = value;
        locator_set.value_namespace = name_space;
        locator_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "site-registration")
    {
        site_registration.yfilter = yfilter;
    }
    if(value_path == "locator-set")
    {
        locator_set.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::Default_::Import::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "site-registration" || name == "locator-set")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::DatabaseMapping()
    :
    limit(std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit>())
{
    limit->parent = this;

    yang_name = "database-mapping"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::~DatabaseMapping()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::has_data() const
{
    if (is_presence_container) return true;
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-mapping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::Limit()
    :
    dynamic{YType::uint32, "dynamic"},
    warning_threshold{YType::uint8, "warning-threshold"}
{

    yang_name = "limit"; yang_parent_name = "database-mapping"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::~Limit()
{
}

bool Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return dynamic.is_set
	|| warning_threshold.is_set;
}

bool Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(warning_threshold.yfilter);
}

std::string Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-lisp:lisp/default/service/ipv4/database-mapping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (warning_threshold.is_set || is_set(warning_threshold.yfilter)) leaf_name_data.push_back(warning_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold = value;
        warning_threshold.value_namespace = name_space;
        warning_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "warning-threshold")
    {
        warning_threshold.yfilter = yfilter;
    }
}

bool Native::Router::Lisp::Default::Service::Ipv4::DatabaseMapping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "warning-threshold")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Encapsulation::lisp {0, "lisp"};
const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Encapsulation::vxlan {1, "vxlan"};

const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::KeyPwd::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key0::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key6::HashFunction::sha2 {1, "sha2"};

const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::HashFunction::sha1 {0, "sha1"};
const Enum::YLeaf Native::Router::Lisp::Default::Service::Ipv4::Default_::Etr::MapServer::Key::Key7::HashFunction::sha2 {1, "sha2"};


}
}

