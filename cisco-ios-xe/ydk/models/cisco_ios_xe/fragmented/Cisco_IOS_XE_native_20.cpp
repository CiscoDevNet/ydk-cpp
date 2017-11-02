
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_21.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::ATMSubinterface::ATMSubinterface()
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::ATMSubinterface::has_data() const
{
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::ATMSubinterface::has_operation() const
{
    for (std::size_t index=0; index<atm.size(); index++)
    {
        if(atm[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM")
    {
        for(auto const & c : atm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMSubinterface::ATM>();
        c->parent = this;
        atm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::ATM()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    ip(std::make_shared<Native::Interface::ATMSubinterface::ATM::Ip>())
	,atm(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm>())
{
    ip->parent = this;
    atm->parent = this;

    yang_name = "ATM"; yang_parent_name = "ATM-subinterface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::ATMSubinterface::ATM::~ATM()
{
}

bool Native::Interface::ATMSubinterface::ATM::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (atm !=  nullptr && atm->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (atm !=  nullptr && atm->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/ATM-subinterface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::ATMSubinterface::ATM::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::ATMSubinterface::ATM::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMSubinterface::ATM::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Interface::ATMSubinterface::ATM::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "atm" || name == "cem" || name == "pvc" || name == "name" || name == "load-interval")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Ip::~Ip()
{
}

bool Native::Interface::ATMSubinterface::ATM::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMSubinterface::ATM::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::ATMSubinterface::ATM::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{

    yang_name = "atm"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::~Atm()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable_ilmi_trap.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.yfilter)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::ATMSubinterface::ATM::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap.yfilter = yfilter;
    }
}

bool Native::Interface::ATMSubinterface::ATM::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp" || name == "bandwidth" || name == "enable-ilmi-trap")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvp_number.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.yfilter)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "pvp-number" || name == "l2transport")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::has_operation() const
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

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::~Cem()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Cem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMSubinterface::ATM::Cem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::ATMSubinterface::ATM::Cem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "number")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::has_operation() const
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

std::string Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Cem::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::~Pvc()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| remote_vpi_vci.is_set
	|| l2transport.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_vpi_vci.yfilter)
	|| ydk::is_set(remote_vpi_vci.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| ydk::is_set(ubr.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.yfilter)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.yfilter)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.yfilter)) leaf_name_data.push_back(ubr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::ATMSubinterface::ATM::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "local-vpi-vci" || name == "remote-vpi-vci" || name == "l2transport" || name == "ubr")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::has_operation() const
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

std::string Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMSubinterface::ATM::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACR::ATMACR()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    ip(std::make_shared<Native::Interface::ATMACR::Ip>())
	,atm(std::make_shared<Native::Interface::ATMACR::Atm>())
{
    ip->parent = this;
    atm->parent = this;

    yang_name = "ATM-ACR"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::ATMACR::~ATMACR()
{
}

bool Native::Interface::ATMACR::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (atm !=  nullptr && atm->has_data());
}

bool Native::Interface::ATMACR::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (atm !=  nullptr && atm->has_operation());
}

std::string Native::Interface::ATMACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::ATMACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACR" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::ATMACR::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::ATMACR::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACR::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACR::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "atm" || name == "cem" || name == "pvc" || name == "name" || name == "load-interval")
        return true;
    return false;
}

Native::Interface::ATMACR::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Ip::~Ip()
{
}

bool Native::Interface::ATMACR::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::ATMACR::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::ATMACR::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{

    yang_name = "atm"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::~Atm()
{
}

bool Native::Interface::ATMACR::Atm::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::ATMACR::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable_ilmi_trap.yfilter);
}

std::string Native::Interface::ATMACR::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.yfilter)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACR::Atm::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::ATMACR::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp" || name == "bandwidth" || name == "enable-ilmi-trap")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvp_number.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.yfilter)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Atm::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Atm::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "pvp-number" || name == "l2transport")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::has_operation() const
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

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::~Cem()
{
}

bool Native::Interface::ATMACR::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACR::Cem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACR::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACR::Cem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACR::Cem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "number")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACR::Cem::Xconnect::has_operation() const
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

std::string Native::Interface::ATMACR::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Cem::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Cem::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMACR::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Cem::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMACR::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Cem::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::~Pvc()
{
}

bool Native::Interface::ATMACR::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| remote_vpi_vci.is_set
	|| l2transport.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACR::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_vpi_vci.yfilter)
	|| ydk::is_set(remote_vpi_vci.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| ydk::is_set(ubr.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACR::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.yfilter)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.yfilter)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.yfilter)) leaf_name_data.push_back(ubr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACR::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::ATMACR::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Interface::ATMACR::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "local-vpi-vci" || name == "remote-vpi-vci" || name == "l2transport" || name == "ubr")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACR::Pvc::Xconnect::has_operation() const
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

std::string Native::Interface::ATMACR::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACR::Pvc::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Pvc::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Pvc::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMACR::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMACR::Pvc::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Pvc::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Pvc::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMACR::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMACR::Pvc::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Pvc::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACRsubinterface()
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::ATMACRsubinterface::has_data() const
{
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::ATMACRsubinterface::has_operation() const
{
    for (std::size_t index=0; index<atm_acr.size(); index++)
    {
        if(atm_acr[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACR")
    {
        for(auto const & c : atm_acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR>();
        c->parent = this;
        atm_acr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : atm_acr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::ATMACR()
    :
    name{YType::str, "name"},
    load_interval{YType::uint32, "Cisco-IOS-XE-atm:load-interval"}
    	,
    ip(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Ip>())
	,atm(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm>())
{
    ip->parent = this;
    atm->parent = this;

    yang_name = "ATM-ACR"; yang_parent_name = "ATM-ACRsubinterface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::ATMACRsubinterface::ATMACR::~ATMACR()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::has_data() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_data())
            return true;
    }
    return name.is_set
	|| load_interval.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (atm !=  nullptr && atm->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::has_operation() const
{
    for (std::size_t index=0; index<cem.size(); index++)
    {
        if(cem[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pvc.size(); index++)
    {
        if(pvc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (atm !=  nullptr && atm->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/ATM-ACRsubinterface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACR" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "cem")
    {
        for(auto const & c : cem)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem>();
        c->parent = this;
        cem.push_back(c);
        return c;
    }

    if(child_yang_name == "pvc")
    {
        for(auto const & c : pvc)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc>();
        c->parent = this;
        pvc.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    for (auto const & c : cem)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pvc)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACRsubinterface::ATMACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACRsubinterface::ATMACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "atm" || name == "cem" || name == "pvc" || name == "name" || name == "load-interval")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Ip::~Ip()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Ip::has_data() const
{
    return address.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACRsubinterface::ATMACR::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Atm()
    :
    bandwidth{YType::enumeration, "bandwidth"},
    enable_ilmi_trap{YType::boolean, "enable-ilmi-trap"}
{

    yang_name = "atm"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::~Atm()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::has_data() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| enable_ilmi_trap.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::has_operation() const
{
    for (std::size_t index=0; index<pvp.size(); index++)
    {
        if(pvp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(enable_ilmi_trap.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (enable_ilmi_trap.is_set || is_set(enable_ilmi_trap.yfilter)) leaf_name_data.push_back(enable_ilmi_trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pvp")
    {
        for(auto const & c : pvp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp>();
        c->parent = this;
        pvp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pvp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "enable-ilmi-trap")
    {
        enable_ilmi_trap.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pvp" || name == "bandwidth" || name == "enable-ilmi-trap")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Pvp()
    :
    pvp_number{YType::uint16, "pvp-number"},
    l2transport{YType::empty, "l2transport"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvp"; yang_parent_name = "atm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::~Pvp()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::has_data() const
{
    return pvp_number.is_set
	|| l2transport.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pvp_number.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pvp" <<"[pvp-number='" <<pvp_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pvp_number.is_set || is_set(pvp_number.yfilter)) leaf_name_data.push_back(pvp_number.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "pvp-number" || name == "l2transport")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::has_operation() const
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

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Cem()
    :
    number{YType::uint32, "number"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "cem"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::~Cem()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::has_data() const
{
    return number.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:cem" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "number")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::has_operation() const
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

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "cem"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Cem::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Pvc()
    :
    local_vpi_vci{YType::str, "local-vpi-vci"},
    remote_vpi_vci{YType::str, "remote-vpi-vci"},
    l2transport{YType::empty, "l2transport"},
    ubr{YType::uint32, "ubr"}
    	,
    xconnect(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect>())
	,xconnect_pw_class(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass>())
{
    xconnect->parent = this;
    xconnect_pw_class->parent = this;

    yang_name = "pvc"; yang_parent_name = "ATM-ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::~Pvc()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::has_data() const
{
    return local_vpi_vci.is_set
	|| remote_vpi_vci.is_set
	|| l2transport.is_set
	|| ubr.is_set
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_vpi_vci.yfilter)
	|| ydk::is_set(remote_vpi_vci.yfilter)
	|| ydk::is_set(l2transport.yfilter)
	|| ydk::is_set(ubr.yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (xconnect_pw_class !=  nullptr && xconnect_pw_class->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-atm:pvc" <<"[local-vpi-vci='" <<local_vpi_vci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_vpi_vci.is_set || is_set(local_vpi_vci.yfilter)) leaf_name_data.push_back(local_vpi_vci.get_name_leafdata());
    if (remote_vpi_vci.is_set || is_set(remote_vpi_vci.yfilter)) leaf_name_data.push_back(remote_vpi_vci.get_name_leafdata());
    if (l2transport.is_set || is_set(l2transport.yfilter)) leaf_name_data.push_back(l2transport.get_name_leafdata());
    if (ubr.is_set || is_set(ubr.yfilter)) leaf_name_data.push_back(ubr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "xconnect-pw-class")
    {
        if(xconnect_pw_class == nullptr)
        {
            xconnect_pw_class = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass>();
        }
        return xconnect_pw_class;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    if(xconnect_pw_class != nullptr)
    {
        children["xconnect-pw-class"] = xconnect_pw_class;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::set_filter(const std::string & value_path, YFilter yfilter)
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
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect" || name == "xconnect-pw-class" || name == "local-vpi-vci" || name == "remote-vpi-vci" || name == "l2transport" || name == "ubr")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    encapsulation{YType::enumeration, "encapsulation"},
    manual{YType::empty, "manual"},
    pw_class{YType::str, "pw-class"},
    sequencing{YType::enumeration, "sequencing"},
    mtu{YType::uint32, "mtu"}
    	,
    backup(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup>())
{
    backup->parent = this;

    yang_name = "xconnect"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| encapsulation.is_set
	|| manual.is_set
	|| pw_class.is_set
	|| sequencing.is_set
	|| mtu.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::has_operation() const
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

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "address" || name == "vcid" || name == "encapsulation" || name == "manual" || name == "pw-class" || name == "sequencing" || name == "mtu")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Backup()
    :
    peer(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer>())
	,delay(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay>())
{
    peer->parent = this;
    delay->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::~Backup()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::has_data() const
{
    return (peer !=  nullptr && peer->has_data())
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "delay")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::Peer()
    :
    peer_router_ip_addr{YType::str, "peer-router-ip-addr"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"},
    priority{YType::uint8, "priority"}
{

    yang_name = "peer"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::~Peer()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::has_data() const
{
    return peer_router_ip_addr.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| priority.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_router_ip_addr.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_router_ip_addr.is_set || is_set(peer_router_ip_addr.yfilter)) leaf_name_data.push_back(peer_router_ip_addr.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-router-ip-addr" || name == "vcid" || name == "pw-class" || name == "priority")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::Delay()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::~Delay()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::XconnectPwClass()
    :
    xconnect(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect>())
{
    xconnect->parent = this;

    yang_name = "xconnect-pw-class"; yang_parent_name = "pvc"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::~XconnectPwClass()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::has_data() const
{
    return (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-pw-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xconnect != nullptr)
    {
        children["xconnect"] = xconnect;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Xconnect()
    :
    address{YType::str, "address"},
    vcid{YType::uint32, "vcid"},
    pw_class{YType::str, "pw-class"}
    	,
    udp(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp>())
{
    udp->parent = this;

    yang_name = "xconnect"; yang_parent_name = "xconnect-pw-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::~Xconnect()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::has_data() const
{
    return address.is_set
	|| vcid.is_set
	|| pw_class.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vcid.yfilter)
	|| ydk::is_set(pw_class.yfilter)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.yfilter)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (pw_class.is_set || is_set(pw_class.yfilter)) leaf_name_data.push_back(pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "address" || name == "vcid" || name == "pw-class")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Udp()
    :
    port(std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port>())
{
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::~Udp()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_data() const
{
    return (port !=  nullptr && port->has_data());
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::Port()
    :
    local{YType::uint32, "local"},
    remote{YType::uint32, "remote"}
{

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::~Port()
{
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_data() const
{
    return local.is_set
	|| remote.is_set;
}

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(remote.yfilter);
}

std::string Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.yfilter)) leaf_name_data.push_back(remote.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::ATMACRsubinterface::ATMACR::Pvc::XconnectPwClass::Xconnect::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "remote")
        return true;
    return false;
}

Native::Interface::BDI::BDI()
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
    switchport_conf(std::make_shared<Native::Interface::BDI::SwitchportConf>())
	,switchport(std::make_shared<Native::Interface::BDI::Switchport>())
	,arp(std::make_shared<Native::Interface::BDI::Arp>())
	,backup(std::make_shared<Native::Interface::BDI::Backup>())
	,cemoudp(std::make_shared<Native::Interface::BDI::Cemoudp>())
	,cws_tunnel(std::make_shared<Native::Interface::BDI::CwsTunnel>())
	,l2protocol_tunnel(nullptr) // presence node
	,encapsulation(std::make_shared<Native::Interface::BDI::Encapsulation>())
	,fair_queue_conf(std::make_shared<Native::Interface::BDI::FairQueueConf>())
	,fair_queue(std::make_shared<Native::Interface::BDI::FairQueue>())
	,flowcontrol(std::make_shared<Native::Interface::BDI::Flowcontrol>())
	,isis(std::make_shared<Native::Interface::BDI::Isis>())
	,keepalive_settings(std::make_shared<Native::Interface::BDI::KeepaliveSettings>())
	,bfd(std::make_shared<Native::Interface::BDI::Bfd>())
	,bandwidth(std::make_shared<Native::Interface::BDI::Bandwidth>())
	,dampening(std::make_shared<Native::Interface::BDI::Dampening>())
	,domain(std::make_shared<Native::Interface::BDI::Domain>())
	,mpls(std::make_shared<Native::Interface::BDI::Mpls>())
	,ip_vrf(std::make_shared<Native::Interface::BDI::IpVrf>())
	,vrf(std::make_shared<Native::Interface::BDI::Vrf>())
	,ip(std::make_shared<Native::Interface::BDI::Ip>())
	,ipv6(std::make_shared<Native::Interface::BDI::Ipv6>())
	,logging(std::make_shared<Native::Interface::BDI::Logging>())
	,mdix(std::make_shared<Native::Interface::BDI::Mdix>())
	,mop(std::make_shared<Native::Interface::BDI::Mop>())
	,interface_qos(std::make_shared<Native::Interface::BDI::InterfaceQos>())
	,standby(std::make_shared<Native::Interface::BDI::Standby>())
	,access_session(std::make_shared<Native::Interface::BDI::AccessSession>())
	,storm_control(std::make_shared<Native::Interface::BDI::StormControl>())
	,trust(std::make_shared<Native::Interface::BDI::Trust>())
	,utd(std::make_shared<Native::Interface::BDI::Utd>())
	,priority_queue(std::make_shared<Native::Interface::BDI::PriorityQueue>())
	,rcv_queue(std::make_shared<Native::Interface::BDI::RcvQueue>())
	,peer(std::make_shared<Native::Interface::BDI::Peer>())
	,pm_path(std::make_shared<Native::Interface::BDI::PmPath>())
	,service_policy(std::make_shared<Native::Interface::BDI::ServicePolicy>())
{
    switchport_conf->parent = this;
    switchport->parent = this;
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
    standby->parent = this;
    access_session->parent = this;
    storm_control->parent = this;
    trust->parent = this;
    utd->parent = this;
    priority_queue->parent = this;
    rcv_queue->parent = this;
    peer->parent = this;
    pm_path->parent = this;
    service_policy->parent = this;

    yang_name = "BDI"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::BDI::~BDI()
{
}

bool Native::Interface::BDI::has_data() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
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
	|| (standby !=  nullptr && standby->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data())
	|| (trust !=  nullptr && trust->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (priority_queue !=  nullptr && priority_queue->has_data())
	|| (rcv_queue !=  nullptr && rcv_queue->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (pm_path !=  nullptr && pm_path->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::BDI::has_operation() const
{
    for (std::size_t index=0; index<hold_queue.size(); index++)
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
	|| (standby !=  nullptr && standby->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation())
	|| (trust !=  nullptr && trust->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (priority_queue !=  nullptr && priority_queue->has_operation())
	|| (rcv_queue !=  nullptr && rcv_queue->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (pm_path !=  nullptr && pm_path->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::BDI::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::BDI::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BDI" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::BDI::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switchport-conf")
    {
        if(switchport_conf == nullptr)
        {
            switchport_conf = std::make_shared<Native::Interface::BDI::SwitchportConf>();
        }
        return switchport_conf;
    }

    if(child_yang_name == "switchport")
    {
        if(switchport == nullptr)
        {
            switchport = std::make_shared<Native::Interface::BDI::Switchport>();
        }
        return switchport;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::BDI::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Interface::BDI::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "cemoudp")
    {
        if(cemoudp == nullptr)
        {
            cemoudp = std::make_shared<Native::Interface::BDI::Cemoudp>();
        }
        return cemoudp;
    }

    if(child_yang_name == "cws-tunnel")
    {
        if(cws_tunnel == nullptr)
        {
            cws_tunnel = std::make_shared<Native::Interface::BDI::CwsTunnel>();
        }
        return cws_tunnel;
    }

    if(child_yang_name == "l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::Interface::BDI::L2ProtocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Interface::BDI::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "fair-queue-conf")
    {
        if(fair_queue_conf == nullptr)
        {
            fair_queue_conf = std::make_shared<Native::Interface::BDI::FairQueueConf>();
        }
        return fair_queue_conf;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Interface::BDI::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Interface::BDI::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::BDI::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::BDI::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::BDI::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::BDI::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Interface::BDI::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Interface::BDI::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "hold-queue")
    {
        for(auto const & c : hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::BDI::HoldQueue>();
        c->parent = this;
        hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Interface::BDI::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::BDI::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::BDI::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::BDI::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::BDI::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Interface::BDI::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "mdix")
    {
        if(mdix == nullptr)
        {
            mdix = std::make_shared<Native::Interface::BDI::Mdix>();
        }
        return mdix;
    }

    if(child_yang_name == "mop")
    {
        if(mop == nullptr)
        {
            mop = std::make_shared<Native::Interface::BDI::Mop>();
        }
        return mop;
    }

    if(child_yang_name == "interface_qos")
    {
        if(interface_qos == nullptr)
        {
            interface_qos = std::make_shared<Native::Interface::BDI::InterfaceQos>();
        }
        return interface_qos;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Interface::BDI::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::Interface::BDI::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<Native::Interface::BDI::StormControl>();
        }
        return storm_control;
    }

    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::BDI::Trust>();
        }
        return trust;
    }

    if(child_yang_name == "utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Interface::BDI::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "priority-queue")
    {
        if(priority_queue == nullptr)
        {
            priority_queue = std::make_shared<Native::Interface::BDI::PriorityQueue>();
        }
        return priority_queue;
    }

    if(child_yang_name == "rcv-queue")
    {
        if(rcv_queue == nullptr)
        {
            rcv_queue = std::make_shared<Native::Interface::BDI::RcvQueue>();
        }
        return rcv_queue;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Interface::BDI::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pm-path")
    {
        if(pm_path == nullptr)
        {
            pm_path = std::make_shared<Native::Interface::BDI::PmPath>();
        }
        return pm_path;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::BDI::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switchport_conf != nullptr)
    {
        children["switchport-conf"] = switchport_conf;
    }

    if(switchport != nullptr)
    {
        children["switchport"] = switchport;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(cemoudp != nullptr)
    {
        children["cemoudp"] = cemoudp;
    }

    if(cws_tunnel != nullptr)
    {
        children["cws-tunnel"] = cws_tunnel;
    }

    if(l2protocol_tunnel != nullptr)
    {
        children["l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(fair_queue_conf != nullptr)
    {
        children["fair-queue-conf"] = fair_queue_conf;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    for (auto const & c : hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(mdix != nullptr)
    {
        children["mdix"] = mdix;
    }

    if(mop != nullptr)
    {
        children["mop"] = mop;
    }

    if(interface_qos != nullptr)
    {
        children["interface_qos"] = interface_qos;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(access_session != nullptr)
    {
        children["access-session"] = access_session;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    if(utd != nullptr)
    {
        children["utd"] = utd;
    }

    if(priority_queue != nullptr)
    {
        children["priority-queue"] = priority_queue;
    }

    if(rcv_queue != nullptr)
    {
        children["rcv-queue"] = rcv_queue;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pm_path != nullptr)
    {
        children["pm-path"] = pm_path;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::BDI::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport-conf" || name == "switchport" || name == "arp" || name == "backup" || name == "cemoudp" || name == "cws-tunnel" || name == "l2protocol-tunnel" || name == "encapsulation" || name == "fair-queue-conf" || name == "fair-queue" || name == "flowcontrol" || name == "isis" || name == "keepalive-settings" || name == "bfd" || name == "bandwidth" || name == "dampening" || name == "domain" || name == "hold-queue" || name == "mpls" || name == "ip-vrf" || name == "vrf" || name == "ip" || name == "ipv6" || name == "logging" || name == "mdix" || name == "mop" || name == "interface_qos" || name == "standby" || name == "access-session" || name == "storm-control" || name == "trust" || name == "utd" || name == "priority-queue" || name == "rcv-queue" || name == "peer" || name == "pm-path" || name == "service-policy" || name == "name" || name == "description" || name == "mac-address" || name == "shutdown" || name == "keepalive" || name == "if-state" || name == "delay" || name == "load-interval" || name == "max-reserved-bandwidth" || name == "mtu" || name == "service-insertion")
        return true;
    return false;
}

Native::Interface::BDI::SwitchportConf::SwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "switchport-conf"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::SwitchportConf::~SwitchportConf()
{
}

bool Native::Interface::BDI::SwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::BDI::SwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::BDI::SwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::SwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::SwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::SwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::SwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::SwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::SwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::BDI::Switchport::Switchport()
{

    yang_name = "switchport"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Switchport::~Switchport()
{
}

bool Native::Interface::BDI::Switchport::has_data() const
{
    return false;
}

bool Native::Interface::BDI::Switchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::BDI::Switchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Switchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Switchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Switchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Switchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Switchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Switchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::BDI::Arp::Arp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "arp"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Arp::~Arp()
{
}

bool Native::Interface::BDI::Arp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::BDI::Arp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::BDI::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Backup()
    :
    delay(std::make_shared<Native::Interface::BDI::Backup::Delay>())
	,interface(std::make_shared<Native::Interface::BDI::Backup::Interface_>())
	,load(std::make_shared<Native::Interface::BDI::Backup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "backup"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::~Backup()
{
}

bool Native::Interface::BDI::Backup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::BDI::Backup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::BDI::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::BDI::Backup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::BDI::Backup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::BDI::Backup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::BDI::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::Delay::~Delay()
{
}

bool Native::Interface::BDI::Backup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::BDI::Backup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::BDI::Backup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Backup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Backup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Backup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Backup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Interface_::Interface_()
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
    atm_subinterface(std::make_shared<Native::Interface::BDI::Backup::Interface_::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::BDI::Backup::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::Interface_::~Interface_()
{
}

bool Native::Interface::BDI::Backup::Interface_::has_data() const
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

bool Native::Interface::BDI::Backup::Interface_::has_operation() const
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

std::string Native::Interface::BDI::Backup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::Interface_::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::BDI::Backup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::BDI::Backup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::BDI::Backup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Native::Interface::BDI::Backup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Backup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Backup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::BDI::Backup::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::BDI::Backup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::BDI::Backup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Backup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Backup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Backup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Backup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Backup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::BDI::Backup::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::BDI::Backup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::BDI::Backup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Backup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Backup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Backup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Backup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Backup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::BDI::Backup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Backup::Load::~Load()
{
}

bool Native::Interface::BDI::Backup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::BDI::Backup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::BDI::Backup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Backup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Backup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Backup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Backup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Backup::Load::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Backup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::BDI::Cemoudp::Cemoudp()
    :
    reserve(std::make_shared<Native::Interface::BDI::Cemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "cemoudp"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Cemoudp::~Cemoudp()
{
}

bool Native::Interface::BDI::Cemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::BDI::Cemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::BDI::Cemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Cemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Cemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::BDI::Cemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Cemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::BDI::Cemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Cemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Cemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::BDI::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::BDI::Cemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::BDI::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::BDI::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::BDI::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::BDI::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::BDI::CwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::BDI::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::BDI::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::BDI::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::BDI::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::BDI::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::BDI::CwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::BDI::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::BDI::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::BDI::L2ProtocolTunnel::L2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::BDI::L2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::L2ProtocolTunnel::~L2ProtocolTunnel()
{
}

bool Native::Interface::BDI::L2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::BDI::L2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::BDI::L2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::L2ProtocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::L2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::BDI::L2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::L2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::BDI::L2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::L2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::L2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::L2ProtocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::L2ProtocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::BDI::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::BDI::Encapsulation::Dot1Q>())
	,isl(std::make_shared<Native::Interface::BDI::Encapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
	,frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::BDI::Encapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::BDI::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::BDI::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::BDI::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::BDI::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::BDI::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::BDI::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::BDI::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    return children;
}

void Native::Interface::BDI::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::BDI::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::BDI::Encapsulation::Dot1Q::has_data() const
{
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::BDI::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::BDI::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::BDI::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::BDI::Encapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::BDI::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::BDI::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::BDI::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::BDI::Encapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::BDI::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::BDI::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::BDI::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::BDI::Encapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::BDI::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::BDI::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::BDI::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::BDI::Encapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::BDI::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::BDI::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::BDI::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::BDI::FairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::BDI::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::BDI::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::BDI::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::FairQueue::~FairQueue()
{
}

bool Native::Interface::BDI::FairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::BDI::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::BDI::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::BDI::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::BDI::Flowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::BDI::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::BDI::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::BDI::Isis::Isis()
{

    yang_name = "isis"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Isis::~Isis()
{
}

bool Native::Interface::BDI::Isis::has_data() const
{
    return false;
}

bool Native::Interface::BDI::Isis::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::BDI::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::BDI::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::BDI::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::BDI::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::BDI::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::BDI::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::BDI::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::BDI::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::BDI::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::BDI::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::BDI::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::BDI::Bfd::Bfd()
{

    yang_name = "bfd"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Bfd::~Bfd()
{
}

bool Native::Interface::BDI::Bfd::has_data() const
{
    return false;
}

bool Native::Interface::BDI::Bfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::BDI::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::BDI::Bandwidth::Bandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
    	,
    receive(std::make_shared<Native::Interface::BDI::Bandwidth::Receive>())
	,inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::BDI::Bandwidth::has_data() const
{
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::BDI::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::BDI::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::BDI::Bandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::BDI::Bandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    return children;
}

void Native::Interface::BDI::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::BDI::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::BDI::Bandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::BDI::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::BDI::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::BDI::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::BDI::Bandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::BDI::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::BDI::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::BDI::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::BDI::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Dampening::~Dampening()
{
}

bool Native::Interface::BDI::Dampening::has_data() const
{
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::BDI::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::BDI::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::BDI::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::BDI::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::BDI::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Dampening::Restart::~Restart()
{
}

bool Native::Interface::BDI::Dampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::BDI::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::BDI::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::BDI::Domain::Domain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Domain::~Domain()
{
}

bool Native::Interface::BDI::Domain::has_data() const
{
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::BDI::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::BDI::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Domain::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::BDI::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Domain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::BDI::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::BDI::HoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::BDI::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::BDI::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::BDI::Mpls::Mpls()
{

    yang_name = "mpls"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Mpls::~Mpls()
{
}

bool Native::Interface::BDI::Mpls::has_data() const
{
    return false;
}

bool Native::Interface::BDI::Mpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::BDI::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::BDI::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::BDI::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::IpVrf::~IpVrf()
{
}

bool Native::Interface::BDI::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::BDI::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::BDI::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::BDI::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::BDI::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::BDI::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::BDI::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::BDI::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::BDI::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::BDI::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::BDI::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::BDI::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::BDI::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::BDI::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::BDI::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::BDI::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::BDI::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Vrf::~Vrf()
{
}

bool Native::Interface::BDI::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::BDI::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::BDI::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::BDI::Ip::Ip()
    :
    admission{YType::str, "admission"},
    unnumbered{YType::str, "unnumbered"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    mtu{YType::uint16, "mtu"},
    mroute_cache{YType::boolean, "mroute-cache"}
    	,
    access_group(std::make_shared<Native::Interface::BDI::Ip::AccessGroup>())
	,arp(std::make_shared<Native::Interface::BDI::Ip::Arp>())
	,vrf(std::make_shared<Native::Interface::BDI::Ip::Vrf>())
	,no_address(std::make_shared<Native::Interface::BDI::Ip::NoAddress>())
	,address(std::make_shared<Native::Interface::BDI::Ip::Address>())
	,hello_interval(std::make_shared<Native::Interface::BDI::Ip::HelloInterval>())
	,authentication(std::make_shared<Native::Interface::BDI::Ip::Authentication>())
	,hold_time(std::make_shared<Native::Interface::BDI::Ip::HoldTime>())
	,pim(std::make_shared<Native::Interface::BDI::Ip::Pim>())
	,policy(std::make_shared<Native::Interface::BDI::Ip::Policy>())
	,rip(std::make_shared<Native::Interface::BDI::Ip::Rip>())
	,route_cache_conf(std::make_shared<Native::Interface::BDI::Ip::RouteCacheConf>())
	,route_cache(nullptr) // presence node
	,router(std::make_shared<Native::Interface::BDI::Ip::Router>())
	,tcp(std::make_shared<Native::Interface::BDI::Ip::Tcp>())
	,virtual_reassembly(std::make_shared<Native::Interface::BDI::Ip::VirtualReassembly>())
	,dhcp(std::make_shared<Native::Interface::BDI::Ip::Dhcp>())
	,summary_address(std::make_shared<Native::Interface::BDI::Ip::SummaryAddress>())
	,verify(std::make_shared<Native::Interface::BDI::Ip::Verify>())
{
    access_group->parent = this;
    arp->parent = this;
    vrf->parent = this;
    no_address->parent = this;
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

    yang_name = "ip"; yang_parent_name = "BDI"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::~Ip()
{
}

bool Native::Interface::BDI::Ip::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| unnumbered.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| mtu.is_set
	|| mroute_cache.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (address !=  nullptr && address->has_data())
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

bool Native::Interface::BDI::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (address !=  nullptr && address->has_operation())
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

std::string Native::Interface::BDI::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::BDI::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::BDI::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::BDI::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::BDI::Ip::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::BDI::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::BDI::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::BDI::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::BDI::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::BDI::Ip::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::BDI::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::BDI::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::BDI::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::BDI::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::BDI::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::BDI::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::BDI::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::BDI::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::BDI::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::BDI::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::BDI::Ip::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Interface::BDI::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::BDI::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
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

bool Native::Interface::BDI::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "no-address" || name == "address" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "admission" || name == "unnumbered" || name == "directed-broadcast" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache")
        return true;
    return false;
}

Native::Interface::BDI::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::BDI::Ip::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::BDI::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::BDI::Ip::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::BDI::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::BDI::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::BDI::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::BDI::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::BDI::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::BDI::Ip::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl>())
	,acl(std::make_shared<Native::Interface::BDI::Ip::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::BDI::Ip::AccessGroup::In::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::BDI::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::BDI::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::BDI::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void Native::Interface::BDI::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::BDI::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::BDI::Ip::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::BDI::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::BDI::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::BDI::Ip::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl>())
	,acl(std::make_shared<Native::Interface::BDI::Ip::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::BDI::Ip::AccessGroup::Out::has_data() const
{
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::BDI::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::BDI::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::BDI::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    return children;
}

void Native::Interface::BDI::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::BDI::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::BDI::Ip::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::BDI::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::BDI::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::BDI::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::BDI::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::Arp::~Arp()
{
}

bool Native::Interface::BDI::Ip::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::BDI::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::BDI::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::BDI::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::BDI::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::BDI::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::BDI::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::BDI::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::BDI::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::BDI::Ip::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::BDI::Ip::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::BDI::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::BDI::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::BDI::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::BDI::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::BDI::Ip::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::BDI::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::BDI::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Ip::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Ip::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::BDI::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::BDI::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::BDI::Ip::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::BDI::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::BDI::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::BDI::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::BDI::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::BDI::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::BDI::Ip::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::BDI::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::BDI::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Ip::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::BDI::Ip::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::BDI::Ip::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::BDI::Ip::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{

    yang_name = "no-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::BDI::Ip::NoAddress::~NoAddress()
{
}

bool Native::Interface::BDI::Ip::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::BDI::Ip::NoAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::BDI::Ip::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::BDI::Ip::NoAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::BDI::Ip::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::BDI::Ip::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::BDI::Ip::NoAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::BDI::Ip::NoAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::BDI::Ip::NoAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Atm::Bandwidth::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Atm::Pvp::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Cem::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMSubinterface::ATM::Pvc::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACR::Atm::Bandwidth::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACR::Atm::Pvp::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACR::Cem::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACR::Pvc::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACR::Pvc::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACR::Pvc::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACR::Pvc::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACR::Pvc::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Atm::Bandwidth::dynamic {0, "dynamic"};

const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Atm::Pvp::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Cem::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Encapsulation::mpls {0, "mpls"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Encapsulation::l2tpv3 {1, "l2tpv3"};

const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Sequencing::both {0, "both"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Sequencing::receive {1, "receive"};
const Enum::YLeaf Native::Interface::ATMACRsubinterface::ATMACR::Pvc::Xconnect::Sequencing::transmit {2, "transmit"};

const Enum::YLeaf Native::Interface::BDI::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::BDI::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::BDI::Backup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::BDI::Backup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::BDI::Backup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::BDI::Backup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::BDI::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::BDI::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::BDI::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::BDI::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::BDI::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::BDI::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::BDI::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::BDI::HoldQueue::Direction::out {1, "out"};


}
}

