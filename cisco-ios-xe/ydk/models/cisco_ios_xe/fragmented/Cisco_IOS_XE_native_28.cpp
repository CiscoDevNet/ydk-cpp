
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_28.hpp"
#include "Cisco_IOS_XE_native_29.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::CEM::CEM()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"},
    cdp{YType::enumeration, "Cisco-IOS-XE-atm:cdp"}
        ,
    ip(std::make_shared<Native::Interface::CEM::Ip>())
    , atm(std::make_shared<Native::Interface::CEM::Atm>())
    , cem(this, {"number"})
    , pvc(this, {"local_vpi_vci"})
{
    ip->parent = this;
    atm->parent = this;

    yang_name = "CEM"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::CEM::~CEM()
{
}

bool Native::Interface::CEM::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cem.len(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.len(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| cdp.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (atm !=  nullptr && atm->has_data());
}

bool Native::Interface::CEM::has_operation() const
{
    for (std::size_t index=0; index<cem.len(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.len(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (atm !=  nullptr && atm->has_operation());
}

std::string Native::Interface::CEM::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::CEM::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CEM";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-atm:ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::CEM::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-atm:atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::CEM::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "Cisco-IOS-XE-atm:cem")
    {
        auto ent_ = std::make_shared<Native::Interface::CEM::Cem>();
        ent_->parent = this;
        cem.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-atm:pvc")
    {
        auto ent_ = std::make_shared<Native::Interface::CEM::Pvc>();
        ent_->parent = this;
        pvc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["Cisco-IOS-XE-atm:ip"] = ip;
    }

    if(atm != nullptr)
    {
        _children["Cisco-IOS-XE-atm:atm"] = atm;
    }

    count_ = 0;
    for (auto ent_ : cem.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pvc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::CEM::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-atm:load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-atm:cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "atm" || name == "cem" || name == "pvc" || name == "name" || name == "load-interval" || name == "cdp")
        return true;
    return false;
}

Native::Interface::CEM::Ip::Ip()
    :
    address{YType::str, "address"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "ip"; yang_parent_name = "CEM"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Ip::~Ip()
{
}

bool Native::Interface::CEM::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| split_horizon.is_set;
}

bool Native::Interface::CEM::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::Interface::CEM::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "split-horizon")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"},
    ilmi_keepalive{YType::empty, "ilmi-keepalive"},
    route_bridged{YType::enumeration, "route-bridged"}
        ,
    pvp(this, {"pvp_number"})
{

    yang_name = "atm"; yang_parent_name = "CEM"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::~Atm()
{
}

bool Native::Interface::CEM::Atm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pvp.len(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set
	|| ilmi_keepalive.is_set
	|| route_bridged.is_set;
}

bool Native::Interface::CEM::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.len(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable_ilmi_trap.yfilter)
	|| ydk::is_set(ilmi_keepalive.yfilter)
	|| ydk::is_set(route_bridged.yfilter);
}

std::string Native::Interface::CEM::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.yfilter)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());
    if (ilmi_keepalive.is_set || is_set(ilmi_keepalive.yfilter)) leaf_name_data.push_back(ilmi_keepalive.get_name_leafdata());
    if (route_bridged.is_set || is_set(route_bridged.yfilter)) leaf_name_data.push_back(route_bridged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        auto ent_ = std::make_shared<Native::Interface::CEM::Atm::Pvp>();
        ent_->parent = this;
        pvp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pvp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::CEM::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
        enable_ilmi_trap.value_namespace = name_space;
        enable_ilmi_trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ilmi-keepalive")
    {
        ilmi_keepalive = value;
        ilmi_keepalive.value_namespace = name_space;
        ilmi_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-bridged")
    {
        route_bridged = value;
        route_bridged.value_namespace = name_space;
        route_bridged.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap.yfilter = yfilter;
    }
    if(value_path == "ilmi-keepalive")
    {
        ilmi_keepalive.yfilter = yfilter;
    }
    if(value_path == "route-bridged")
    {
        route_bridged.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp" || name == "bandwidth" || name == "enable-ilmi-trap" || name == "ilmi-keepalive" || name == "route-bridged")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
        ,
    xconnect(std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::CEM::Atm::Pvp::has_data() const
{
    if (is_presence_container) return true;
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::CEM::Atm::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvp_number.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::CEM::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp";
    ADD_KEY_TOKEN(pvp_number, "pvp-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.yfilter)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::CEM::Atm::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
        pvp_number.value_namespace = name_space;
        pvp_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
        l2transport.value_namespace = name_space;
        l2transport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Atm::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pvp-number")
    {
        pvp_number.yfilter = yfilter;
    }
    if(value_path == "l2transport")
    {
        l2transport.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Atm::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "pvp-number" || name == "l2transport")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::CEM::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Atm::Pvp::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::CEM::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::CEM::Cem::Cem()
    :
    number{YType::uint32, "number"}
        ,
    xconnect(std::make_shared<Native::Interface::CEM::Cem::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "CEM"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::~Cem()
{
}

bool Native::Interface::CEM::Cem::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::CEM::Cem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::CEM::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEM::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::CEM::Cem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Cem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Cem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "number")
        return true;
    return false;
}

Native::Interface::CEM::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::CEM::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEM::Cem::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::CEM::Cem::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::CEM::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::CEM::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::CEM::Cem::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Cem::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Cem::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::CEM::Cem::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::CEM::Cem::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::CEM::Cem::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::CEM::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::CEM::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::CEM::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::CEM::Cem::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Cem::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::CEM::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::CEM::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Cem::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::CEM::Cem::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::CEM::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Cem::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Cem::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::CEM::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::CEM::Cem::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::CEM::Cem::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::CEM::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::CEM::Cem::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Cem::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Cem::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    ubr{YType::uint32, "ubr"},
    cbr{YType::uint32, "cbr"},
    vbr{YType::uint32, "vbr"},
    vbr_rt{YType::uint32, "vbr-rt"},
    vbr_nrt{YType::uint32, "vbr-nrt"}
        ,
    ubrplus(std::make_shared<Native::Interface::CEM::Pvc::Ubrplus>())
    , oam_pvc(nullptr) // presence node
    , service_policy(std::make_shared<Native::Interface::CEM::Pvc::ServicePolicy>())
    , encapsulation(std::make_shared<Native::Interface::CEM::Pvc::Encapsulation>())
    , xconnect(std::make_shared<Native::Interface::CEM::Pvc::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass>())
{
    ubrplus->parent = this;
    service_policy->parent = this;
    encapsulation->parent = this;
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "CEM"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::~Pvc()
{
}

bool Native::Interface::CEM::Pvc::has_data() const
{
    if (is_presence_container) return true;
    return local_vpi_vci.is_set
	|| remote_vpi_vci.is_set
	|| l2transport.is_set
	|| ubr.is_set
	|| cbr.is_set
	|| vbr.is_set
	|| vbr_rt.is_set
	|| vbr_nrt.is_set
	|| (ubrplus !=  nullptr && ubrplus->has_data())
	|| (oam_pvc !=  nullptr && oam_pvc->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::CEM::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_vpi_vci.yfilter)
	|| ydk::is_set(remote_vpi_vci.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| ydk::is_set(ubr.yfilter)
	|| ydk::is_set(cbr.yfilter)
	|| ydk::is_set(vbr.yfilter)
	|| ydk::is_set(vbr_rt.yfilter)
	|| ydk::is_set(vbr_nrt.yfilter)
	|| (ubrplus !=  nullptr && ubrplus->has_operation())
	|| (oam_pvc !=  nullptr && oam_pvc->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::CEM::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc";
    ADD_KEY_TOKEN(local_vpi_vci, "local-vpi-vci");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.yfilter)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.yfilter)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.yfilter)) leaf_name_data.push_back(ubr.get_name_leafdata());
    if (cbr.is_set || is_set(cbr.yfilter)) leaf_name_data.push_back(cbr.get_name_leafdata());
    if (vbr.is_set || is_set(vbr.yfilter)) leaf_name_data.push_back(vbr.get_name_leafdata());
    if (vbr_rt.is_set || is_set(vbr_rt.yfilter)) leaf_name_data.push_back(vbr_rt.get_name_leafdata());
    if (vbr_nrt.is_set || is_set(vbr_nrt.yfilter)) leaf_name_data.push_back(vbr_nrt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ubrplus")
    {
        if(ubrplus == nullptr)
        {
            ubrplus = std::make_shared<Native::Interface::CEM::Pvc::Ubrplus>();
        }
        return ubrplus;
    }

    if(child_yang_name == "oam-pvc")
    {
        if(oam_pvc == nullptr)
        {
            oam_pvc = std::make_shared<Native::Interface::CEM::Pvc::OamPvc>();
        }
        return oam_pvc;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::CEM::Pvc::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::CEM::Pvc::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEM::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ubrplus != nullptr)
    {
        _children["ubrplus"] = ubrplus;
    }

    if(oam_pvc != nullptr)
    {
        _children["oam-pvc"] = oam_pvc;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci = value;
        local_vpi_vci.value_namespace = name_space;
        local_vpi_vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci = value;
        remote_vpi_vci.value_namespace = name_space;
        remote_vpi_vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
        l2transport.value_namespace = name_space;
        l2transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubr")
    {
        ubr = value;
        ubr.value_namespace = name_space;
        ubr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbr")
    {
        cbr = value;
        cbr.value_namespace = name_space;
        cbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vbr")
    {
        vbr = value;
        vbr.value_namespace = name_space;
        vbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vbr-rt")
    {
        vbr_rt = value;
        vbr_rt.value_namespace = name_space;
        vbr_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vbr-nrt")
    {
        vbr_nrt = value;
        vbr_nrt.value_namespace = name_space;
        vbr_nrt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci.yfilter = yfilter;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci.yfilter = yfilter;
    }
    if(value_path == "l2transport")
    {
        l2transport.yfilter = yfilter;
    }
    if(value_path == "ubr")
    {
        ubr.yfilter = yfilter;
    }
    if(value_path == "cbr")
    {
        cbr.yfilter = yfilter;
    }
    if(value_path == "vbr")
    {
        vbr.yfilter = yfilter;
    }
    if(value_path == "vbr-rt")
    {
        vbr_rt.yfilter = yfilter;
    }
    if(value_path == "vbr-nrt")
    {
        vbr_nrt.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ubrplus" || name == "oam-pvc" || name == "service-policy" || name == "encapsulation" || name == "xconnect" || name == "xconnect-pw-class" || name == "local-vpi-vci" || name == "remote-vpi-vci" || name == "l2transport" || name == "ubr" || name == "cbr" || name == "vbr" || name == "vbr-rt" || name == "vbr-nrt")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Ubrplus::Ubrplus()
    :
    pcr{YType::uint32, "PCR"},
    mcr{YType::uint32, "MCR"}
{

    yang_name = "ubrplus"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Ubrplus::~Ubrplus()
{
}

bool Native::Interface::CEM::Pvc::Ubrplus::has_data() const
{
    if (is_presence_container) return true;
    return pcr.is_set
	|| mcr.is_set;
}

bool Native::Interface::CEM::Pvc::Ubrplus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcr.yfilter)
	|| ydk::is_set(mcr.yfilter);
}

std::string Native::Interface::CEM::Pvc::Ubrplus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubrplus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Ubrplus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcr.is_set || is_set(pcr.yfilter)) leaf_name_data.push_back(pcr.get_name_leafdata());
    if (mcr.is_set || is_set(mcr.yfilter)) leaf_name_data.push_back(mcr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Ubrplus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Ubrplus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::Ubrplus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "PCR")
    {
        pcr = value;
        pcr.value_namespace = name_space;
        pcr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "MCR")
    {
        mcr = value;
        mcr.value_namespace = name_space;
        mcr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Ubrplus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "PCR")
    {
        pcr.yfilter = yfilter;
    }
    if(value_path == "MCR")
    {
        mcr.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Ubrplus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PCR" || name == "MCR")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::OamPvc::OamPvc()
    :
    loopback_frequency{YType::uint32, "loopback-frequency"},
    manage{YType::empty, "manage"}
{

    yang_name = "oam-pvc"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::CEM::Pvc::OamPvc::~OamPvc()
{
}

bool Native::Interface::CEM::Pvc::OamPvc::has_data() const
{
    if (is_presence_container) return true;
    return loopback_frequency.is_set
	|| manage.is_set;
}

bool Native::Interface::CEM::Pvc::OamPvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback_frequency.yfilter)
	|| ydk::is_set(manage.yfilter);
}

std::string Native::Interface::CEM::Pvc::OamPvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-pvc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::OamPvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback_frequency.is_set || is_set(loopback_frequency.yfilter)) leaf_name_data.push_back(loopback_frequency.get_name_leafdata());
    if (manage.is_set || is_set(manage.yfilter)) leaf_name_data.push_back(manage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::OamPvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::OamPvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::OamPvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loopback-frequency")
    {
        loopback_frequency = value;
        loopback_frequency.value_namespace = name_space;
        loopback_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manage")
    {
        manage = value;
        manage.value_namespace = name_space;
        manage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::OamPvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loopback-frequency")
    {
        loopback_frequency.yfilter = yfilter;
    }
    if(value_path == "manage")
    {
        manage.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::OamPvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback-frequency" || name == "manage")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::CEM::Pvc::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::CEM::Pvc::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::CEM::Pvc::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::CEM::Pvc::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::CEM::Pvc::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Encapsulation::Encapsulation()
    :
    aal5nlpid{YType::empty, "aal5nlpid"},
    aal5snap{YType::empty, "aal5snap"}
        ,
    aal5autoppp(std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp>())
    , aal5ciscoppp(std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp>())
    , aal5mux(std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5mux>())
{
    aal5autoppp->parent = this;
    aal5ciscoppp->parent = this;
    aal5mux->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::CEM::Pvc::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return aal5nlpid.is_set
	|| aal5snap.is_set
	|| (aal5autoppp !=  nullptr && aal5autoppp->has_data())
	|| (aal5ciscoppp !=  nullptr && aal5ciscoppp->has_data())
	|| (aal5mux !=  nullptr && aal5mux->has_data());
}

bool Native::Interface::CEM::Pvc::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aal5nlpid.yfilter)
	|| ydk::is_set(aal5snap.yfilter)
	|| (aal5autoppp !=  nullptr && aal5autoppp->has_operation())
	|| (aal5ciscoppp !=  nullptr && aal5ciscoppp->has_operation())
	|| (aal5mux !=  nullptr && aal5mux->has_operation());
}

std::string Native::Interface::CEM::Pvc::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal5nlpid.is_set || is_set(aal5nlpid.yfilter)) leaf_name_data.push_back(aal5nlpid.get_name_leafdata());
    if (aal5snap.is_set || is_set(aal5snap.yfilter)) leaf_name_data.push_back(aal5snap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aal5autoppp")
    {
        if(aal5autoppp == nullptr)
        {
            aal5autoppp = std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp>();
        }
        return aal5autoppp;
    }

    if(child_yang_name == "aal5ciscoppp")
    {
        if(aal5ciscoppp == nullptr)
        {
            aal5ciscoppp = std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp>();
        }
        return aal5ciscoppp;
    }

    if(child_yang_name == "aal5mux")
    {
        if(aal5mux == nullptr)
        {
            aal5mux = std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5mux>();
        }
        return aal5mux;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aal5autoppp != nullptr)
    {
        _children["aal5autoppp"] = aal5autoppp;
    }

    if(aal5ciscoppp != nullptr)
    {
        _children["aal5ciscoppp"] = aal5ciscoppp;
    }

    if(aal5mux != nullptr)
    {
        _children["aal5mux"] = aal5mux;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aal5nlpid")
    {
        aal5nlpid = value;
        aal5nlpid.value_namespace = name_space;
        aal5nlpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aal5snap")
    {
        aal5snap = value;
        aal5snap.value_namespace = name_space;
        aal5snap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aal5nlpid")
    {
        aal5nlpid.yfilter = yfilter;
    }
    if(value_path == "aal5snap")
    {
        aal5snap.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aal5autoppp" || name == "aal5ciscoppp" || name == "aal5mux" || name == "aal5nlpid" || name == "aal5snap")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::Aal5autoppp()
    :
    virtual_template{YType::uint32, "Virtual-Template"}
{

    yang_name = "aal5autoppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::~Aal5autoppp()
{
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::has_data() const
{
    if (is_presence_container) return true;
    return virtual_template.is_set;
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5autoppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5autoppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Virtual-Template")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::Aal5ciscoppp()
    :
    virtual_template{YType::uint32, "Virtual-Template"}
{

    yang_name = "aal5ciscoppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::~Aal5ciscoppp()
{
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::has_data() const
{
    if (is_presence_container) return true;
    return virtual_template.is_set;
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5ciscoppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5ciscoppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Virtual-Template")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Aal5mux()
    :
    ppp(std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp>())
{
    ppp->parent = this;

    yang_name = "aal5mux"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::~Aal5mux()
{
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::has_data() const
{
    if (is_presence_container) return true;
    return (ppp !=  nullptr && ppp->has_data());
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::has_operation() const
{
    return is_set(yfilter)
	|| (ppp !=  nullptr && ppp->has_operation());
}

std::string Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5mux";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp>();
        }
        return ppp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppp")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::Ppp()
    :
    virtual_template{YType::uint32, "Virtual-Template"},
    dialer{YType::empty, "dialer"}
{

    yang_name = "ppp"; yang_parent_name = "aal5mux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::~Ppp()
{
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return virtual_template.is_set
	|| dialer.is_set;
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(dialer.yfilter);
}

std::string Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (dialer.is_set || is_set(dialer.yfilter)) leaf_name_data.push_back(dialer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialer")
    {
        dialer = value;
        dialer.value_namespace = name_space;
        dialer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "dialer")
    {
        dialer.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Encapsulation::Aal5mux::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Virtual-Template" || name == "dialer")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::CEM::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEM::Pvc::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::CEM::Pvc::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::CEM::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::CEM::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::CEM::Pvc::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::CEM::Pvc::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::CEM::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::CEM::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::CEM::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Pvc::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::CEM::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Pvc::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::CEM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::CEMACR::CEMACR()
    :
    name{YType::uint8, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"},
    cdp{YType::enumeration, "Cisco-IOS-XE-atm:cdp"}
        ,
    ip(std::make_shared<Native::Interface::CEMACR::Ip>())
    , atm(std::make_shared<Native::Interface::CEMACR::Atm>())
    , cem(this, {"number"})
    , pvc(this, {"local_vpi_vci"})
{
    ip->parent = this;
    atm->parent = this;

    yang_name = "CEM-ACR"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::CEMACR::~CEMACR()
{
}

bool Native::Interface::CEMACR::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cem.len(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.len(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| cdp.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (atm !=  nullptr && atm->has_data());
}

bool Native::Interface::CEMACR::has_operation() const
{
    for (std::size_t index=0; index<cem.len(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.len(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (atm !=  nullptr && atm->has_operation());
}

std::string Native::Interface::CEMACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::CEMACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CEM-ACR";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-atm:ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::CEMACR::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-atm:atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::CEMACR::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "Cisco-IOS-XE-atm:cem")
    {
        auto ent_ = std::make_shared<Native::Interface::CEMACR::Cem>();
        ent_->parent = this;
        cem.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-atm:pvc")
    {
        auto ent_ = std::make_shared<Native::Interface::CEMACR::Pvc>();
        ent_->parent = this;
        pvc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["Cisco-IOS-XE-atm:ip"] = ip;
    }

    if(atm != nullptr)
    {
        _children["Cisco-IOS-XE-atm:atm"] = atm;
    }

    count_ = 0;
    for (auto ent_ : cem.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pvc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::CEMACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-atm:load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-atm:cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "atm" || name == "cem" || name == "pvc" || name == "name" || name == "load-interval" || name == "cdp")
        return true;
    return false;
}

Native::Interface::CEMACR::Ip::Ip()
    :
    address{YType::str, "address"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "ip"; yang_parent_name = "CEM-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Ip::~Ip()
{
}

bool Native::Interface::CEMACR::Ip::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| split_horizon.is_set;
}

bool Native::Interface::CEMACR::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::Interface::CEMACR::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "split-horizon")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"},
    ilmi_keepalive{YType::empty, "ilmi-keepalive"},
    route_bridged{YType::enumeration, "route-bridged"}
        ,
    pvp(this, {"pvp_number"})
{

    yang_name = "atm"; yang_parent_name = "CEM-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::~Atm()
{
}

bool Native::Interface::CEMACR::Atm::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pvp.len(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set
	|| ilmi_keepalive.is_set
	|| route_bridged.is_set;
}

bool Native::Interface::CEMACR::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.len(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable_ilmi_trap.yfilter)
	|| ydk::is_set(ilmi_keepalive.yfilter)
	|| ydk::is_set(route_bridged.yfilter);
}

std::string Native::Interface::CEMACR::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.yfilter)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());
    if (ilmi_keepalive.is_set || is_set(ilmi_keepalive.yfilter)) leaf_name_data.push_back(ilmi_keepalive.get_name_leafdata());
    if (route_bridged.is_set || is_set(route_bridged.yfilter)) leaf_name_data.push_back(route_bridged.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        auto ent_ = std::make_shared<Native::Interface::CEMACR::Atm::Pvp>();
        ent_->parent = this;
        pvp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pvp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::CEMACR::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap = value;
        enable_ilmi_trap.value_namespace = name_space;
        enable_ilmi_trap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ilmi-keepalive")
    {
        ilmi_keepalive = value;
        ilmi_keepalive.value_namespace = name_space;
        ilmi_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-bridged")
    {
        route_bridged = value;
        route_bridged.value_namespace = name_space;
        route_bridged.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap.yfilter = yfilter;
    }
    if(value_path == "ilmi-keepalive")
    {
        ilmi_keepalive.yfilter = yfilter;
    }
    if(value_path == "route-bridged")
    {
        route_bridged.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp" || name == "bandwidth" || name == "enable-ilmi-trap" || name == "ilmi-keepalive" || name == "route-bridged")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
        ,
    xconnect(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::has_data() const
{
    if (is_presence_container) return true;
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::CEMACR::Atm::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvp_number.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::CEMACR::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp";
    ADD_KEY_TOKEN(pvp_number, "pvp-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.yfilter)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pvp-number")
    {
        pvp_number = value;
        pvp_number.value_namespace = name_space;
        pvp_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
        l2transport.value_namespace = name_space;
        l2transport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Atm::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pvp-number")
    {
        pvp_number.yfilter = yfilter;
    }
    if(value_path == "l2transport")
    {
        l2transport.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Atm::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "pvp-number" || name == "l2transport")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::CEMACR::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Atm::Pvp::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::Cem()
    :
    number{YType::uint32, "number"}
        ,
    xconnect(std::make_shared<Native::Interface::CEMACR::Cem::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "CEM-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::~Cem()
{
}

bool Native::Interface::CEMACR::Cem::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::CEMACR::Cem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::CEMACR::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEMACR::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::CEMACR::Cem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Cem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Cem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "number")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::CEMACR::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEMACR::Cem::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::CEMACR::Cem::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::CEMACR::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::CEMACR::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::CEMACR::Cem::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Cem::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Cem::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::CEMACR::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::CEMACR::Cem::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Cem::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Cem::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::CEMACR::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    ubr{YType::uint32, "ubr"},
    cbr{YType::uint32, "cbr"},
    vbr{YType::uint32, "vbr"},
    vbr_rt{YType::uint32, "vbr-rt"},
    vbr_nrt{YType::uint32, "vbr-nrt"}
        ,
    ubrplus(std::make_shared<Native::Interface::CEMACR::Pvc::Ubrplus>())
    , oam_pvc(nullptr) // presence node
    , service_policy(std::make_shared<Native::Interface::CEMACR::Pvc::ServicePolicy>())
    , encapsulation(std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation>())
    , xconnect(std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect>())
    , xconnect_pw_class(std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass>())
{
    ubrplus->parent = this;
    service_policy->parent = this;
    encapsulation->parent = this;
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "CEM-ACR"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::~Pvc()
{
}

bool Native::Interface::CEMACR::Pvc::has_data() const
{
    if (is_presence_container) return true;
    return local_vpi_vci.is_set
	|| remote_vpi_vci.is_set
	|| l2transport.is_set
	|| ubr.is_set
	|| cbr.is_set
	|| vbr.is_set
	|| vbr_rt.is_set
	|| vbr_nrt.is_set
	|| (ubrplus !=  nullptr && ubrplus->has_data())
	|| (oam_pvc !=  nullptr && oam_pvc->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::CEMACR::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_vpi_vci.yfilter)
	|| ydk::is_set(remote_vpi_vci.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| ydk::is_set(ubr.yfilter)
	|| ydk::is_set(cbr.yfilter)
	|| ydk::is_set(vbr.yfilter)
	|| ydk::is_set(vbr_rt.yfilter)
	|| ydk::is_set(vbr_nrt.yfilter)
	|| (ubrplus !=  nullptr && ubrplus->has_operation())
	|| (oam_pvc !=  nullptr && oam_pvc->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc";
    ADD_KEY_TOKEN(local_vpi_vci, "local-vpi-vci");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.yfilter)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.yfilter)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.yfilter)) leaf_name_data.push_back(ubr.get_name_leafdata());
    if (cbr.is_set || is_set(cbr.yfilter)) leaf_name_data.push_back(cbr.get_name_leafdata());
    if (vbr.is_set || is_set(vbr.yfilter)) leaf_name_data.push_back(vbr.get_name_leafdata());
    if (vbr_rt.is_set || is_set(vbr_rt.yfilter)) leaf_name_data.push_back(vbr_rt.get_name_leafdata());
    if (vbr_nrt.is_set || is_set(vbr_nrt.yfilter)) leaf_name_data.push_back(vbr_nrt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ubrplus")
    {
        if(ubrplus == nullptr)
        {
            ubrplus = std::make_shared<Native::Interface::CEMACR::Pvc::Ubrplus>();
        }
        return ubrplus;
    }

    if(child_yang_name == "oam-pvc")
    {
        if(oam_pvc == nullptr)
        {
            oam_pvc = std::make_shared<Native::Interface::CEMACR::Pvc::OamPvc>();
        }
        return oam_pvc;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::CEMACR::Pvc::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ubrplus != nullptr)
    {
        _children["ubrplus"] = ubrplus;
    }

    if(oam_pvc != nullptr)
    {
        _children["oam-pvc"] = oam_pvc;
    }

    if(service_policy != nullptr)
    {
        _children["service-policy"] = service_policy;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        _children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci = value;
        local_vpi_vci.value_namespace = name_space;
        local_vpi_vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci = value;
        remote_vpi_vci.value_namespace = name_space;
        remote_vpi_vci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2transport")
    {
        l2transport = value;
        l2transport.value_namespace = name_space;
        l2transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ubr")
    {
        ubr = value;
        ubr.value_namespace = name_space;
        ubr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbr")
    {
        cbr = value;
        cbr.value_namespace = name_space;
        cbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vbr")
    {
        vbr = value;
        vbr.value_namespace = name_space;
        vbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vbr-rt")
    {
        vbr_rt = value;
        vbr_rt.value_namespace = name_space;
        vbr_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vbr-nrt")
    {
        vbr_nrt = value;
        vbr_nrt.value_namespace = name_space;
        vbr_nrt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-vpi-vci")
    {
        local_vpi_vci.yfilter = yfilter;
    }
    if(value_path == "remote-vpi-vci")
    {
        remote_vpi_vci.yfilter = yfilter;
    }
    if(value_path == "l2transport")
    {
        l2transport.yfilter = yfilter;
    }
    if(value_path == "ubr")
    {
        ubr.yfilter = yfilter;
    }
    if(value_path == "cbr")
    {
        cbr.yfilter = yfilter;
    }
    if(value_path == "vbr")
    {
        vbr.yfilter = yfilter;
    }
    if(value_path == "vbr-rt")
    {
        vbr_rt.yfilter = yfilter;
    }
    if(value_path == "vbr-nrt")
    {
        vbr_nrt.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ubrplus" || name == "oam-pvc" || name == "service-policy" || name == "encapsulation" || name == "xconnect" || name == "xconnect-pw-class" || name == "local-vpi-vci" || name == "remote-vpi-vci" || name == "l2transport" || name == "ubr" || name == "cbr" || name == "vbr" || name == "vbr-rt" || name == "vbr-nrt")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Ubrplus::Ubrplus()
    :
    pcr{YType::uint32, "PCR"},
    mcr{YType::uint32, "MCR"}
{

    yang_name = "ubrplus"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Ubrplus::~Ubrplus()
{
}

bool Native::Interface::CEMACR::Pvc::Ubrplus::has_data() const
{
    if (is_presence_container) return true;
    return pcr.is_set
	|| mcr.is_set;
}

bool Native::Interface::CEMACR::Pvc::Ubrplus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcr.yfilter)
	|| ydk::is_set(mcr.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::Ubrplus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ubrplus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Ubrplus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcr.is_set || is_set(pcr.yfilter)) leaf_name_data.push_back(pcr.get_name_leafdata());
    if (mcr.is_set || is_set(mcr.yfilter)) leaf_name_data.push_back(mcr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Ubrplus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Ubrplus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::Ubrplus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "PCR")
    {
        pcr = value;
        pcr.value_namespace = name_space;
        pcr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "MCR")
    {
        mcr = value;
        mcr.value_namespace = name_space;
        mcr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Ubrplus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "PCR")
    {
        pcr.yfilter = yfilter;
    }
    if(value_path == "MCR")
    {
        mcr.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Ubrplus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PCR" || name == "MCR")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::OamPvc::OamPvc()
    :
    loopback_frequency{YType::uint32, "loopback-frequency"},
    manage{YType::empty, "manage"}
{

    yang_name = "oam-pvc"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::CEMACR::Pvc::OamPvc::~OamPvc()
{
}

bool Native::Interface::CEMACR::Pvc::OamPvc::has_data() const
{
    if (is_presence_container) return true;
    return loopback_frequency.is_set
	|| manage.is_set;
}

bool Native::Interface::CEMACR::Pvc::OamPvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback_frequency.yfilter)
	|| ydk::is_set(manage.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::OamPvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oam-pvc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::OamPvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback_frequency.is_set || is_set(loopback_frequency.yfilter)) leaf_name_data.push_back(loopback_frequency.get_name_leafdata());
    if (manage.is_set || is_set(manage.yfilter)) leaf_name_data.push_back(manage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::OamPvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::OamPvc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::OamPvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loopback-frequency")
    {
        loopback_frequency = value;
        loopback_frequency.value_namespace = name_space;
        loopback_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manage")
    {
        manage = value;
        manage.value_namespace = name_space;
        manage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::OamPvc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loopback-frequency")
    {
        loopback_frequency.yfilter = yfilter;
    }
    if(value_path == "manage")
    {
        manage.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::OamPvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loopback-frequency" || name == "manage")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::ServicePolicy::ServicePolicy()
    :
    input{YType::str, "input"},
    output{YType::str, "output"}
{

    yang_name = "service-policy"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::CEMACR::Pvc::ServicePolicy::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::CEMACR::Pvc::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::CEMACR::Pvc::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::CEMACR::Pvc::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Encapsulation::Encapsulation()
    :
    aal5nlpid{YType::empty, "aal5nlpid"},
    aal5snap{YType::empty, "aal5snap"}
        ,
    aal5autoppp(std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp>())
    , aal5ciscoppp(std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp>())
    , aal5mux(std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux>())
{
    aal5autoppp->parent = this;
    aal5ciscoppp->parent = this;
    aal5mux->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return aal5nlpid.is_set
	|| aal5snap.is_set
	|| (aal5autoppp !=  nullptr && aal5autoppp->has_data())
	|| (aal5ciscoppp !=  nullptr && aal5ciscoppp->has_data())
	|| (aal5mux !=  nullptr && aal5mux->has_data());
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aal5nlpid.yfilter)
	|| ydk::is_set(aal5snap.yfilter)
	|| (aal5autoppp !=  nullptr && aal5autoppp->has_operation())
	|| (aal5ciscoppp !=  nullptr && aal5ciscoppp->has_operation())
	|| (aal5mux !=  nullptr && aal5mux->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aal5nlpid.is_set || is_set(aal5nlpid.yfilter)) leaf_name_data.push_back(aal5nlpid.get_name_leafdata());
    if (aal5snap.is_set || is_set(aal5snap.yfilter)) leaf_name_data.push_back(aal5snap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aal5autoppp")
    {
        if(aal5autoppp == nullptr)
        {
            aal5autoppp = std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp>();
        }
        return aal5autoppp;
    }

    if(child_yang_name == "aal5ciscoppp")
    {
        if(aal5ciscoppp == nullptr)
        {
            aal5ciscoppp = std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp>();
        }
        return aal5ciscoppp;
    }

    if(child_yang_name == "aal5mux")
    {
        if(aal5mux == nullptr)
        {
            aal5mux = std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux>();
        }
        return aal5mux;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aal5autoppp != nullptr)
    {
        _children["aal5autoppp"] = aal5autoppp;
    }

    if(aal5ciscoppp != nullptr)
    {
        _children["aal5ciscoppp"] = aal5ciscoppp;
    }

    if(aal5mux != nullptr)
    {
        _children["aal5mux"] = aal5mux;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aal5nlpid")
    {
        aal5nlpid = value;
        aal5nlpid.value_namespace = name_space;
        aal5nlpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aal5snap")
    {
        aal5snap = value;
        aal5snap.value_namespace = name_space;
        aal5snap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aal5nlpid")
    {
        aal5nlpid.yfilter = yfilter;
    }
    if(value_path == "aal5snap")
    {
        aal5snap.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aal5autoppp" || name == "aal5ciscoppp" || name == "aal5mux" || name == "aal5nlpid" || name == "aal5snap")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::Aal5autoppp()
    :
    virtual_template{YType::uint32, "Virtual-Template"}
{

    yang_name = "aal5autoppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::~Aal5autoppp()
{
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::has_data() const
{
    if (is_presence_container) return true;
    return virtual_template.is_set;
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5autoppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5autoppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Virtual-Template")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::Aal5ciscoppp()
    :
    virtual_template{YType::uint32, "Virtual-Template"}
{

    yang_name = "aal5ciscoppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::~Aal5ciscoppp()
{
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::has_data() const
{
    if (is_presence_container) return true;
    return virtual_template.is_set;
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5ciscoppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5ciscoppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Virtual-Template")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Aal5mux()
    :
    ppp(std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp>())
{
    ppp->parent = this;

    yang_name = "aal5mux"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::~Aal5mux()
{
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::has_data() const
{
    if (is_presence_container) return true;
    return (ppp !=  nullptr && ppp->has_data());
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::has_operation() const
{
    return is_set(yfilter)
	|| (ppp !=  nullptr && ppp->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aal5mux";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp>();
        }
        return ppp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppp")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::Ppp()
    :
    virtual_template{YType::uint32, "Virtual-Template"},
    dialer{YType::empty, "dialer"}
{

    yang_name = "ppp"; yang_parent_name = "aal5mux"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::~Ppp()
{
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return virtual_template.is_set
	|| dialer.is_set;
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(dialer.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (dialer.is_set || is_set(dialer.yfilter)) leaf_name_data.push_back(dialer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dialer")
    {
        dialer = value;
        dialer.value_namespace = name_space;
        dialer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "dialer")
    {
        dialer.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Encapsulation::Aal5mux::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Virtual-Template" || name == "dialer")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
        ,
    backup(std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEMACR::Pvc::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::CEMACR::Pvc::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(manual.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(sequencing.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (manual.is_set || is_set(manual.yfilter)) leaf_name_data.push_back(manual.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.yfilter)) leaf_name_data.push_back(sequencing.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "manual")
    {
        manual = value;
        manual.value_namespace = name_space;
        manual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
        sequencing.value_namespace = name_space;
        sequencing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "manual")
    {
        manual.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "sequencing")
    {
        sequencing.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer>())
    , delay(std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Pvc::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::has_data() const
{
    if (is_presence_container) return true;
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr = value;
        peer_router_ip_addr.value_namespace = name_space;
        peer_router_ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-router-ip-addr")
    {
        peer_router_ip_addr.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
        ,
    udp(std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vcid")
    {
        vcid = value;
        vcid.value_namespace = name_space;
        vcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class")
    {
        pw_class = value;
        pw_class.value_namespace = name_space;
        pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vcid")
    {
        vcid.yfilter = yfilter;
    }
    if(value_path == "pw-class")
    {
        pw_class.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    if (is_presence_container) return true;
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote")
    {
        remote = value;
        remote.value_namespace = name_space;
        remote.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "remote")
    {
        remote.yfilter = yfilter;
    }
}

bool Native::Interface::CEMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::EmbeddedServiceEngine()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    mac_address{YType::str, "mac-address"},
    shutdown{YType::empty, "shutdown"},
    keepalive{YType::boolean, "keepalive"},
    if_state{YType::enumeration, "if-state"},
    delay{YType::uint32, "delay"},
    load_interval{YType::uint16, "load-interval"},
    max_reserved_bandwidth{YType::uint8, "max-reserved-bandwidth"},
    mtu{YType::uint16, "mtu"},
    service_insertion{YType::enumeration, "service-insertion"}
        ,
    switchport_conf(std::make_shared<Native::Interface::EmbeddedServiceEngine::SwitchportConf>())
    , switchport(std::make_shared<Native::Interface::EmbeddedServiceEngine::Switchport>())
    , stackwise_virtual(std::make_shared<Native::Interface::EmbeddedServiceEngine::StackwiseVirtual>())
    , arp(std::make_shared<Native::Interface::EmbeddedServiceEngine::Arp>())
    , backup(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup>())
    , cemoudp(std::make_shared<Native::Interface::EmbeddedServiceEngine::Cemoudp>())
    , cws_tunnel(std::make_shared<Native::Interface::EmbeddedServiceEngine::CwsTunnel>())
    , l2protocol_tunnel(nullptr) // presence node
    , encapsulation(std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation>())
    , fair_queue_conf(std::make_shared<Native::Interface::EmbeddedServiceEngine::FairQueueConf>())
    , fair_queue(std::make_shared<Native::Interface::EmbeddedServiceEngine::FairQueue>())
    , flowcontrol(std::make_shared<Native::Interface::EmbeddedServiceEngine::Flowcontrol>())
    , isis(std::make_shared<Native::Interface::EmbeddedServiceEngine::Isis>())
    , keepalive_settings(std::make_shared<Native::Interface::EmbeddedServiceEngine::KeepaliveSettings>())
    , bfd(std::make_shared<Native::Interface::EmbeddedServiceEngine::Bfd>())
    , bandwidth(std::make_shared<Native::Interface::EmbeddedServiceEngine::Bandwidth>())
    , dampening(std::make_shared<Native::Interface::EmbeddedServiceEngine::Dampening>())
    , domain(std::make_shared<Native::Interface::EmbeddedServiceEngine::Domain>())
    , hold_queue(this, {"direction"})
    , mpls(std::make_shared<Native::Interface::EmbeddedServiceEngine::Mpls>())
    , ip_vrf(std::make_shared<Native::Interface::EmbeddedServiceEngine::IpVrf>())
    , vrf(std::make_shared<Native::Interface::EmbeddedServiceEngine::Vrf>())
    , ip(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip>())
    , ipv6(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ipv6>())
    , logging(std::make_shared<Native::Interface::EmbeddedServiceEngine::Logging>())
    , mdix(std::make_shared<Native::Interface::EmbeddedServiceEngine::Mdix>())
    , mop(std::make_shared<Native::Interface::EmbeddedServiceEngine::Mop>())
    , interface_qos(std::make_shared<Native::Interface::EmbeddedServiceEngine::InterfaceQos>())
    , source(std::make_shared<Native::Interface::EmbeddedServiceEngine::Source>())
    , standby(std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby>())
    , access_session(std::make_shared<Native::Interface::EmbeddedServiceEngine::AccessSession>())
    , storm_control(std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl>())
    , trust(std::make_shared<Native::Interface::EmbeddedServiceEngine::Trust>())
    , priority_queue(std::make_shared<Native::Interface::EmbeddedServiceEngine::PriorityQueue>())
    , rcv_queue(std::make_shared<Native::Interface::EmbeddedServiceEngine::RcvQueue>())
    , peer(std::make_shared<Native::Interface::EmbeddedServiceEngine::Peer>())
    , pm_path(std::make_shared<Native::Interface::EmbeddedServiceEngine::PmPath>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
    stackwise_virtual->parent = this;
    arp->parent = this;
    backup->parent = this;
    cemoudp->parent = this;
    cws_tunnel->parent = this;
    encapsulation->parent = this;
    fair_queue_conf->parent = this;
    fair_queue->parent = this;
    flowcontrol->parent = this;
    isis->parent = this;
    keepalive_settings->parent = this;
    bfd->parent = this;
    bandwidth->parent = this;
    dampening->parent = this;
    domain->parent = this;
    mpls->parent = this;
    ip_vrf->parent = this;
    vrf->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    mdix->parent = this;
    mop->parent = this;
    interface_qos->parent = this;
    source->parent = this;
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;

    yang_name = "Embedded-Service-Engine"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Interface::EmbeddedServiceEngine::~EmbeddedServiceEngine()
{
}

bool Native::Interface::EmbeddedServiceEngine::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| mac_address.is_set
	|| shutdown.is_set
	|| keepalive.is_set
	|| if_state.is_set
	|| delay.is_set
	|| load_interval.is_set
	|| max_reserved_bandwidth.is_set
	|| mtu.is_set
	|| service_insertion.is_set
	|| (switchport_conf !=  nullptr && switchport_conf->has_data())
	|| (switchport !=  nullptr && switchport->has_data())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (cemoudp !=  nullptr && cemoudp->has_data())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (mdix !=  nullptr && mdix->has_data())
	|| (mop !=  nullptr && mop->has_data())
	|| (interface_qos !=  nullptr && interface_qos->has_data())
	|| (source !=  nullptr && source->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.len(); index++)
    {
        if(hold_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(if_state.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(max_reserved_bandwidth.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(service_insertion.yfilter)
	|| (switchport_conf !=  nullptr && switchport_conf->has_operation())
	|| (switchport !=  nullptr && switchport->has_operation())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (cemoudp !=  nullptr && cemoudp->has_operation())
	|| (cws_tunnel !=  nullptr && cws_tunnel->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (fair_queue_conf !=  nullptr && fair_queue_conf->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (mdix !=  nullptr && mdix->has_operation())
	|| (mop !=  nullptr && mop->has_operation())
	|| (interface_qos !=  nullptr && interface_qos->has_operation())
	|| (source !=  nullptr && source->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::EmbeddedServiceEngine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Embedded-Service-Engine";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (if_state.is_set || is_set(if_state.yfilter)) leaf_name_data.push_back(if_state.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (max_reserved_bandwidth.is_set || is_set(max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(max_reserved_bandwidth.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (service_insertion.is_set || is_set(service_insertion.yfilter)) leaf_name_data.push_back(service_insertion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::EmbeddedServiceEngine::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::EmbeddedServiceEngine::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::Interface::EmbeddedServiceEngine::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::EmbeddedServiceEngine::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::EmbeddedServiceEngine::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::EmbeddedServiceEngine::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::EmbeddedServiceEngine::L2protocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::EmbeddedServiceEngine::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::EmbeddedServiceEngine::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::EmbeddedServiceEngine::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::EmbeddedServiceEngine::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::EmbeddedServiceEngine::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::EmbeddedServiceEngine::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::EmbeddedServiceEngine::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::EmbeddedServiceEngine::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::EmbeddedServiceEngine::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        auto ent_ = std::make_shared<Native::Interface::EmbeddedServiceEngine::HoldQueue>();
        ent_->parent = this;
        hold_queue.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::EmbeddedServiceEngine::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::EmbeddedServiceEngine::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::EmbeddedServiceEngine::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::EmbeddedServiceEngine::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::EmbeddedServiceEngine::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::EmbeddedServiceEngine::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::EmbeddedServiceEngine::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::EmbeddedServiceEngine::Source>();
        }
        return source;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::EmbeddedServiceEngine::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::EmbeddedServiceEngine::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::EmbeddedServiceEngine::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::EmbeddedServiceEngine::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::EmbeddedServiceEngine::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::EmbeddedServiceEngine::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::EmbeddedServiceEngine::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::EmbeddedServiceEngine::PmPath>();
        }
        return pm_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(switchport_conf != nullptr)
    {
        _children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        _children["switchport"] = switchport;
    }

    if(stackwise_virtual != nullptr)
    {
        _children["stackwise-virtual"] = stackwise_virtual;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        _children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        _children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        _children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        _children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        _children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        _children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        _children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        _children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        _children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        _children["domain"] = domain;
    }

    count_ = 0;
    for (auto ent_ : hold_queue.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        _children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        _children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        _children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        _children["interface_qos"] = interface_qos;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        _children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        _children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    if(priority_queue != nullptr)
    {
        _children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        _children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        _children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        _children["pm-path"] = pm_path;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-state")
    {
        if_state = value;
        if_state.value_namespace = name_space;
        if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth = value;
        max_reserved_bandwidth.value_namespace = name_space;
        max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-insertion")
    {
        service_insertion = value;
        service_insertion.value_namespace = name_space;
        service_insertion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "if-state")
    {
        if_state.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "max-reserved-bandwidth")
    {
        max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "service-insertion")
    {
        service_insertion.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "stackwise-virtual" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "source" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "name" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::EmbeddedServiceEngine::SwitchportConf::has_data() const
{
    if (is_presence_container) return true;
    return switchport.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Switchport::~Switchport()
{
}

bool Native::Interface::EmbeddedServiceEngine::Switchport::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::StackwiseVirtual()
    :
    link{YType::uint8, "link"},
    dual_active_detection{YType::empty, "dual-active-detection"}
{

    yang_name = "stackwise-virtual"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::~StackwiseVirtual()
{
}

bool Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::has_data() const
{
    if (is_presence_container) return true;
    return link.is_set
	|| dual_active_detection.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(dual_active_detection.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (dual_active_detection.is_set || is_set(dual_active_detection.yfilter)) leaf_name_data.push_back(dual_active_detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection = value;
        dual_active_detection.value_namespace = name_space;
        dual_active_detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "dual-active-detection")
    {
        dual_active_detection.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::StackwiseVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "dual-active-detection")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Arp::~Arp()
{
}

bool Native::Interface::EmbeddedServiceEngine::Arp::has_data() const
{
    if (is_presence_container) return true;
    return timeout.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Delay>())
    , interface(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_>())
    , load(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::~Backup()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(load != nullptr)
    {
        _children["load"] = load;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::Delay::~Delay()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Delay::has_data() const
{
    if (is_presence_container) return true;
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::Interface_()
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
    atm_subinterface(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::has_data() const
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

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::has_operation() const
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

std::string Native::Interface::EmbeddedServiceEngine::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::Interface_::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::get_children() const
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

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Backup::Load::~Load()
{
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Load::has_data() const
{
    if (is_presence_container) return true;
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::EmbeddedServiceEngine::Cemoudp::has_data() const
{
    if (is_presence_container) return true;
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reserve != nullptr)
    {
        _children["reserve"] = reserve;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::has_data() const
{
    if (is_presence_container) return true;
    return acr.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
        ,
    out(std::make_shared<Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::EmbeddedServiceEngine::CwsTunnel::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_number.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::L2protocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
        ,
    drop_threshold(std::make_shared<Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold>())
    , shutdown_threshold(std::make_shared<Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::~L2protocolTunnel()
{
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::has_data() const
{
    if (is_presence_container) return true;
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(drop_threshold != nullptr)
    {
        _children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        _children["shutdown-threshold"] = shutdown_threshold;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::L2protocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q>())
    , isl(std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl>())
    , ppp(nullptr) // presence node
    , slip(nullptr) // presence node
    , frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1q != nullptr)
    {
        _children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        _children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        _children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        _children["frame-relay"] = frame_relay;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::has_data() const
{
    if (is_presence_container) return true;
    return ietf.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::EmbeddedServiceEngine::FairQueueConf::has_data() const
{
    if (is_presence_container) return true;
    return fair_queue.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::FairQueue::~FairQueue()
{
}

bool Native::Interface::EmbeddedServiceEngine::FairQueue::has_data() const
{
    if (is_presence_container) return true;
    return incomplete.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::EmbeddedServiceEngine::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Isis::Isis()
{

    yang_name = "isis"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Isis::~Isis()
{
}

bool Native::Interface::EmbeddedServiceEngine::Isis::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Isis::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::has_data() const
{
    if (is_presence_container) return true;
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Bfd::~Bfd()
{
}

bool Native::Interface::EmbeddedServiceEngine::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::Bandwidth::Bandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
        ,
    receive(std::make_shared<Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive>())
    , inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(receive != nullptr)
    {
        _children["receive"] = receive;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::has_data() const
{
    if (is_presence_container) return true;
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit")
    {
        inherit = value;
        inherit.value_namespace = name_space;
        inherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit")
    {
        inherit.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return kilobits.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
        ,
    restart(std::make_shared<Native::Interface::EmbeddedServiceEngine::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Dampening::~Dampening()
{
}

bool Native::Interface::EmbeddedServiceEngine::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::EmbeddedServiceEngine::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(restart != nullptr)
    {
        _children["restart"] = restart;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
        start_reusing_time.value_namespace = name_space;
        start_reusing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
        start_supressing_time.value_namespace = name_space;
        start_supressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Dampening::Restart::~Restart()
{
}

bool Native::Interface::EmbeddedServiceEngine::Dampening::Restart::has_data() const
{
    if (is_presence_container) return true;
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Domain::Domain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Domain::~Domain()
{
}

bool Native::Interface::EmbeddedServiceEngine::Domain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
        zero_sla.value_namespace = name_space;
        zero_sla.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
    if(value_path == "zero-sla")
    {
        zero_sla.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint32, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::EmbeddedServiceEngine::HoldQueue::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Mpls::Mpls()
{

    yang_name = "mpls"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Mpls::~Mpls()
{
}

bool Native::Interface::EmbeddedServiceEngine::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Mpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::EmbeddedServiceEngine::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::IpVrf::~IpVrf()
{
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::EmbeddedServiceEngine::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"},
    downstream{YType::str, "downstream"}
{

    yang_name = "vrf"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Vrf::~Vrf()
{
}

bool Native::Interface::EmbeddedServiceEngine::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set
	|| downstream.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(downstream.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "downstream")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Ip()
    :
    admission{YType::str, "admission"},
    unnumbered{YType::str, "unnumbered"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    mtu{YType::uint16, "mtu"},
    mroute_cache{YType::boolean, "mroute-cache"}
        ,
    access_group(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup>())
    , arp(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Arp>())
    , vrf(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Vrf>())
    , address(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address>())
    , directed_broadcast(nullptr) // presence node
    , hello_interval(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval>())
    , authentication(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Authentication>())
    , hold_time(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::HoldTime>())
    , helper_address(this, {"address"})
    , pim(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Pim>())
    , policy(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Policy>())
    , rip(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Rip>())
    , route_cache_conf(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::RouteCacheConf>())
    , route_cache(nullptr) // presence node
    , router(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Router>())
    , tcp(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Tcp>())
    , virtual_reassembly(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::VirtualReassembly>())
    , dhcp(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Dhcp>())
    , summary_address(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress>())
    , verify(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Verify>())
{
    access_group->parent = this;
    arp->parent = this;
    vrf->parent = this;
    address->parent = this;
    hello_interval->parent = this;
    authentication->parent = this;
    hold_time->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    tcp->parent = this;
    virtual_reassembly->parent = this;
    dhcp->parent = this;
    summary_address->parent = this;
    verify->parent = this;

    yang_name = "ip"; yang_parent_name = "Embedded-Service-Engine"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::~Ip()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| unnumbered.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| mtu.is_set
	|| mroute_cache.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "directed-broadcast")
    {
        if(directed_broadcast == nullptr)
        {
            directed_broadcast = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast>();
        }
        return directed_broadcast;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(directed_broadcast != nullptr)
    {
        _children["directed-broadcast"] = directed_broadcast;
    }

    if(hello_interval != nullptr)
    {
        _children["hello-interval"] = hello_interval;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(hold_time != nullptr)
    {
        _children["hold-time"] = hold_time;
    }

    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pim != nullptr)
    {
        _children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(route_cache_conf != nullptr)
    {
        _children["route-cache-conf"] = route_cache_conf;
    }

    if(route_cache != nullptr)
    {
        _children["route-cache"] = route_cache;
    }

    if(router != nullptr)
    {
        _children["router"] = router;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(virtual_reassembly != nullptr)
    {
        _children["virtual-reassembly"] = virtual_reassembly;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(summary_address != nullptr)
    {
        _children["summary-address"] = summary_address;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "address" || name == "directed-broadcast" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "admission" || name == "unnumbered" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In>())
    , out(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::get_children() const
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

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl>())
    , acl(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl>())
    , acl(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Arp::~Arp()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::has_data() const
{
    if (is_presence_container) return true;
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inspection != nullptr)
    {
        _children["inspection"] = inspection;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
        ,
    forwarding(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarding != nullptr)
    {
        _children["forwarding"] = forwarding;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
        sitemap.value_namespace = name_space;
        sitemap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "sitemap")
    {
        sitemap.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::has_data() const
{
    if (is_presence_container) return true;
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
        liin_vrf.value_namespace = name_space;
        liin_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
        mgmtvrf.value_namespace = name_space;
        mgmtvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf.yfilter = yfilter;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
        ,
    secondary(this, {"address"})
    , primary(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary>())
    , dhcp(nullptr) // presence node
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::~Address()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary" || name == "primary" || name == "dhcp" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
        ,
    client_id(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_id != nullptr)
    {
        _children["client-id"] = client_id;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::ClientId()
    :
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| twentyfivegige.is_set
	|| fortygigabitethernet.is_set
	|| twogigabitethernet.is_set
	|| hundredgige.is_set
	|| vlan.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "TwentyFiveGigE" || name == "FortyGigabitEthernet" || name == "TwoGigabitEthernet" || name == "HundredGigE" || name == "vlan")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::DirectedBroadcast()
    :
    direct_broadcast{YType::str, "direct-broadcast"}
{

    yang_name = "directed-broadcast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::~DirectedBroadcast()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::has_data() const
{
    if (is_presence_container) return true;
    return direct_broadcast.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direct_broadcast.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directed-broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direct_broadcast.is_set || is_set(direct_broadcast.yfilter)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
        direct_broadcast.value_namespace = name_space;
        direct_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::DirectedBroadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direct-broadcast")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain>())
    , mode(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Ip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Pim::Pim()
{

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Pim::~Pim()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Pim::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Pim::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Policy::~Policy()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Policy::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Rip::~Rip()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Rip::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::EmbeddedServiceEngine::Ip::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
        ,
    mode(std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::EmbeddedServiceEngine::Ip::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::CEM::Cdp::enable {0, "enable"};

const Enum::YLeaf Native::Interface::CEM::Atm::Bandwidth::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::CEM::Atm::RouteBridged::ip {0, "ip"};
const Enum::YLeaf Native::Interface::CEM::Atm::RouteBridged::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::CEM::Atm::Pvp::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::CEM::Atm::Pvp::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::CEM::Atm::Pvp::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::CEM::Atm::Pvp::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::CEM::Atm::Pvp::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::CEM::Cem::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::CEM::Cem::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::CEM::Cem::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::CEM::Cem::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::CEM::Cem::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::CEM::Pvc::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::CEM::Pvc::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::CEM::Pvc::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::CEM::Pvc::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::CEM::Pvc::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::CEMACR::Cdp::enable {0, "enable"};

const Enum::YLeaf Native::Interface::CEMACR::Atm::Bandwidth::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::CEMACR::Atm::RouteBridged::ip {0, "ip"};
const Enum::YLeaf Native::Interface::CEMACR::Atm::RouteBridged::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::CEMACR::Atm::Pvp::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::CEMACR::Atm::Pvp::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::CEMACR::Atm::Pvp::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::CEMACR::Atm::Pvp::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::CEMACR::Atm::Pvp::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::CEMACR::Cem::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::CEMACR::Cem::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::CEMACR::Cem::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::CEMACR::Cem::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::CEMACR::Cem::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::CEMACR::Pvc::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::CEMACR::Pvc::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::CEMACR::Pvc::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::CEMACR::Pvc::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::CEMACR::Pvc::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::EmbeddedServiceEngine::HoldQueue::Direction::out {1, "out"};


}
}

