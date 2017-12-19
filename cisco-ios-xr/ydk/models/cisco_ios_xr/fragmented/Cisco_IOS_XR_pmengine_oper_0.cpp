
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_3.hpp"
#include "Cisco_IOS_XR_pmengine_oper_1.hpp"
#include "Cisco_IOS_XR_pmengine_oper_5.hpp"
#include "Cisco_IOS_XR_pmengine_oper_4.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {

PerformanceManagement::PerformanceManagement()
    :
    macsec(std::make_shared<PerformanceManagement::Macsec>())
	,ho_vc(std::make_shared<PerformanceManagement::HoVc>())
	,odu(std::make_shared<PerformanceManagement::Odu>())
	,otu(std::make_shared<PerformanceManagement::Otu>())
	,stm(std::make_shared<PerformanceManagement::Stm>())
	,sonet(std::make_shared<PerformanceManagement::Sonet>())
	,optics(std::make_shared<PerformanceManagement::Optics>())
	,sts(std::make_shared<PerformanceManagement::Sts>())
	,dwdm(std::make_shared<PerformanceManagement::Dwdm>())
	,oc(std::make_shared<PerformanceManagement::Oc>())
	,ethernet(std::make_shared<PerformanceManagement::Ethernet>())
{
    macsec->parent = this;
    ho_vc->parent = this;
    odu->parent = this;
    otu->parent = this;
    stm->parent = this;
    sonet->parent = this;
    optics->parent = this;
    sts->parent = this;
    dwdm->parent = this;
    oc->parent = this;
    ethernet->parent = this;

    yang_name = "performance-management"; yang_parent_name = "Cisco-IOS-XR-pmengine-oper"; is_top_level_class = true; has_list_ancestor = false;
}

PerformanceManagement::~PerformanceManagement()
{
}

bool PerformanceManagement::has_data() const
{
    return (macsec !=  nullptr && macsec->has_data())
	|| (ho_vc !=  nullptr && ho_vc->has_data())
	|| (odu !=  nullptr && odu->has_data())
	|| (otu !=  nullptr && otu->has_data())
	|| (stm !=  nullptr && stm->has_data())
	|| (sonet !=  nullptr && sonet->has_data())
	|| (optics !=  nullptr && optics->has_data())
	|| (sts !=  nullptr && sts->has_data())
	|| (dwdm !=  nullptr && dwdm->has_data())
	|| (oc !=  nullptr && oc->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool PerformanceManagement::has_operation() const
{
    return is_set(yfilter)
	|| (macsec !=  nullptr && macsec->has_operation())
	|| (ho_vc !=  nullptr && ho_vc->has_operation())
	|| (odu !=  nullptr && odu->has_operation())
	|| (otu !=  nullptr && otu->has_operation())
	|| (stm !=  nullptr && stm->has_operation())
	|| (sonet !=  nullptr && sonet->has_operation())
	|| (optics !=  nullptr && optics->has_operation())
	|| (sts !=  nullptr && sts->has_operation())
	|| (dwdm !=  nullptr && dwdm->has_operation())
	|| (oc !=  nullptr && oc->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string PerformanceManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec")
    {
        if(macsec == nullptr)
        {
            macsec = std::make_shared<PerformanceManagement::Macsec>();
        }
        return macsec;
    }

    if(child_yang_name == "ho-vc")
    {
        if(ho_vc == nullptr)
        {
            ho_vc = std::make_shared<PerformanceManagement::HoVc>();
        }
        return ho_vc;
    }

    if(child_yang_name == "odu")
    {
        if(odu == nullptr)
        {
            odu = std::make_shared<PerformanceManagement::Odu>();
        }
        return odu;
    }

    if(child_yang_name == "otu")
    {
        if(otu == nullptr)
        {
            otu = std::make_shared<PerformanceManagement::Otu>();
        }
        return otu;
    }

    if(child_yang_name == "stm")
    {
        if(stm == nullptr)
        {
            stm = std::make_shared<PerformanceManagement::Stm>();
        }
        return stm;
    }

    if(child_yang_name == "sonet")
    {
        if(sonet == nullptr)
        {
            sonet = std::make_shared<PerformanceManagement::Sonet>();
        }
        return sonet;
    }

    if(child_yang_name == "optics")
    {
        if(optics == nullptr)
        {
            optics = std::make_shared<PerformanceManagement::Optics>();
        }
        return optics;
    }

    if(child_yang_name == "sts")
    {
        if(sts == nullptr)
        {
            sts = std::make_shared<PerformanceManagement::Sts>();
        }
        return sts;
    }

    if(child_yang_name == "dwdm")
    {
        if(dwdm == nullptr)
        {
            dwdm = std::make_shared<PerformanceManagement::Dwdm>();
        }
        return dwdm;
    }

    if(child_yang_name == "oc")
    {
        if(oc == nullptr)
        {
            oc = std::make_shared<PerformanceManagement::Oc>();
        }
        return oc;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<PerformanceManagement::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec != nullptr)
    {
        children["macsec"] = macsec;
    }

    if(ho_vc != nullptr)
    {
        children["ho-vc"] = ho_vc;
    }

    if(odu != nullptr)
    {
        children["odu"] = odu;
    }

    if(otu != nullptr)
    {
        children["otu"] = otu;
    }

    if(stm != nullptr)
    {
        children["stm"] = stm;
    }

    if(sonet != nullptr)
    {
        children["sonet"] = sonet;
    }

    if(optics != nullptr)
    {
        children["optics"] = optics;
    }

    if(sts != nullptr)
    {
        children["sts"] = sts;
    }

    if(dwdm != nullptr)
    {
        children["dwdm"] = dwdm;
    }

    if(oc != nullptr)
    {
        children["oc"] = oc;
    }

    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    return children;
}

void PerformanceManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PerformanceManagement::clone_ptr() const
{
    return std::make_shared<PerformanceManagement>();
}

std::string PerformanceManagement::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PerformanceManagement::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PerformanceManagement::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PerformanceManagement::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PerformanceManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec" || name == "ho-vc" || name == "odu" || name == "otu" || name == "stm" || name == "sonet" || name == "optics" || name == "sts" || name == "dwdm" || name == "oc" || name == "ethernet")
        return true;
    return false;
}

PerformanceManagement::Macsec::Macsec()
    :
    macsec_ports(std::make_shared<PerformanceManagement::Macsec::MacsecPorts>())
{
    macsec_ports->parent = this;

    yang_name = "macsec"; yang_parent_name = "performance-management"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Macsec::~Macsec()
{
}

bool PerformanceManagement::Macsec::has_data() const
{
    return (macsec_ports !=  nullptr && macsec_ports->has_data());
}

bool PerformanceManagement::Macsec::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_ports !=  nullptr && macsec_ports->has_operation());
}

std::string PerformanceManagement::Macsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-ports")
    {
        if(macsec_ports == nullptr)
        {
            macsec_ports = std::make_shared<PerformanceManagement::Macsec::MacsecPorts>();
        }
        return macsec_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_ports != nullptr)
    {
        children["macsec-ports"] = macsec_ports;
    }

    return children;
}

void PerformanceManagement::Macsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-ports")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPorts()
{

    yang_name = "macsec-ports"; yang_parent_name = "macsec"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Macsec::MacsecPorts::~MacsecPorts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::has_data() const
{
    for (std::size_t index=0; index<macsec_port.size(); index++)
    {
        if(macsec_port[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::has_operation() const
{
    for (std::size_t index=0; index<macsec_port.size(); index++)
    {
        if(macsec_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/macsec/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Macsec::MacsecPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-port")
    {
        for(auto const & c : macsec_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort>();
        c->parent = this;
        macsec_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-port")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecPort()
    :
    name{YType::str, "name"}
    	,
    macsec_current(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent>())
{
    macsec_current->parent = this;

    yang_name = "macsec-port"; yang_parent_name = "macsec-ports"; is_top_level_class = false; has_list_ancestor = false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::~MacsecPort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::has_data() const
{
    return name.is_set
	|| (macsec_current !=  nullptr && macsec_current->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (macsec_current !=  nullptr && macsec_current->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-pmengine-oper:performance-management/macsec/macsec-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-port" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-current")
    {
        if(macsec_current == nullptr)
        {
            macsec_current = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent>();
        }
        return macsec_current;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_current != nullptr)
    {
        children["macsec-current"] = macsec_current;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-current" || name == "name")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecCurrent()
    :
    macsec_minute15(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15>())
	,macsec_second30(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30>())
	,macsec_hour24(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24>())
{
    macsec_minute15->parent = this;
    macsec_second30->parent = this;
    macsec_hour24->parent = this;

    yang_name = "macsec-current"; yang_parent_name = "macsec-port"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::~MacsecCurrent()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::has_data() const
{
    return (macsec_minute15 !=  nullptr && macsec_minute15->has_data())
	|| (macsec_second30 !=  nullptr && macsec_second30->has_data())
	|| (macsec_hour24 !=  nullptr && macsec_hour24->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_minute15 !=  nullptr && macsec_minute15->has_operation())
	|| (macsec_second30 !=  nullptr && macsec_second30->has_operation())
	|| (macsec_hour24 !=  nullptr && macsec_hour24->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-current";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-minute15")
    {
        if(macsec_minute15 == nullptr)
        {
            macsec_minute15 = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15>();
        }
        return macsec_minute15;
    }

    if(child_yang_name == "macsec-second30")
    {
        if(macsec_second30 == nullptr)
        {
            macsec_second30 = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30>();
        }
        return macsec_second30;
    }

    if(child_yang_name == "macsec-hour24")
    {
        if(macsec_hour24 == nullptr)
        {
            macsec_hour24 = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24>();
        }
        return macsec_hour24;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_minute15 != nullptr)
    {
        children["macsec-minute15"] = macsec_minute15;
    }

    if(macsec_second30 != nullptr)
    {
        children["macsec-second30"] = macsec_second30;
    }

    if(macsec_hour24 != nullptr)
    {
        children["macsec-hour24"] = macsec_hour24;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-minute15" || name == "macsec-second30" || name == "macsec-hour24")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15()
    :
    macsec_minute15secyifs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs>())
	,macsec_minute15secyrxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes>())
	,macsec_minute15secytxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes>())
	,macsec_minute15_ether_s(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS>())
{
    macsec_minute15secyifs->parent = this;
    macsec_minute15secyrxes->parent = this;
    macsec_minute15secytxes->parent = this;
    macsec_minute15_ether_s->parent = this;

    yang_name = "macsec-minute15"; yang_parent_name = "macsec-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::~MacsecMinute15()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::has_data() const
{
    return (macsec_minute15secyifs !=  nullptr && macsec_minute15secyifs->has_data())
	|| (macsec_minute15secyrxes !=  nullptr && macsec_minute15secyrxes->has_data())
	|| (macsec_minute15secytxes !=  nullptr && macsec_minute15secytxes->has_data())
	|| (macsec_minute15_ether_s !=  nullptr && macsec_minute15_ether_s->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_minute15secyifs !=  nullptr && macsec_minute15secyifs->has_operation())
	|| (macsec_minute15secyrxes !=  nullptr && macsec_minute15secyrxes->has_operation())
	|| (macsec_minute15secytxes !=  nullptr && macsec_minute15secytxes->has_operation())
	|| (macsec_minute15_ether_s !=  nullptr && macsec_minute15_ether_s->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-minute15secyifs")
    {
        if(macsec_minute15secyifs == nullptr)
        {
            macsec_minute15secyifs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs>();
        }
        return macsec_minute15secyifs;
    }

    if(child_yang_name == "macsec-minute15secyrxes")
    {
        if(macsec_minute15secyrxes == nullptr)
        {
            macsec_minute15secyrxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes>();
        }
        return macsec_minute15secyrxes;
    }

    if(child_yang_name == "macsec-minute15secytxes")
    {
        if(macsec_minute15secytxes == nullptr)
        {
            macsec_minute15secytxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes>();
        }
        return macsec_minute15secytxes;
    }

    if(child_yang_name == "macsec-minute15-ether-s")
    {
        if(macsec_minute15_ether_s == nullptr)
        {
            macsec_minute15_ether_s = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS>();
        }
        return macsec_minute15_ether_s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_minute15secyifs != nullptr)
    {
        children["macsec-minute15secyifs"] = macsec_minute15secyifs;
    }

    if(macsec_minute15secyrxes != nullptr)
    {
        children["macsec-minute15secyrxes"] = macsec_minute15secyrxes;
    }

    if(macsec_minute15secytxes != nullptr)
    {
        children["macsec-minute15secytxes"] = macsec_minute15secytxes;
    }

    if(macsec_minute15_ether_s != nullptr)
    {
        children["macsec-minute15-ether-s"] = macsec_minute15_ether_s;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-minute15secyifs" || name == "macsec-minute15secyrxes" || name == "macsec-minute15secytxes" || name == "macsec-minute15-ether-s")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyifs()
{

    yang_name = "macsec-minute15secyifs"; yang_parent_name = "macsec-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::~MacsecMinute15Secyifs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::has_data() const
{
    for (std::size_t index=0; index<macsec_minute15secyif.size(); index++)
    {
        if(macsec_minute15secyif[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::has_operation() const
{
    for (std::size_t index=0; index<macsec_minute15secyif.size(); index++)
    {
        if(macsec_minute15secyif[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15secyifs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-minute15secyif")
    {
        for(auto const & c : macsec_minute15secyif)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif>();
        c->parent = this;
        macsec_minute15secyif.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_minute15secyif)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-minute15secyif")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::MacsecMinute15Secyif()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"},
    sample_count{YType::uint64, "sample-count"}
    	,
    in_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged>())
	,in_pkts_no_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag>())
	,in_pkts_bad_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag>())
	,in_pkts_unknown_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci>())
	,in_pkts_no_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci>())
	,in_pkts_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun>())
	,in_octets_validated(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated>())
	,in_octets_decrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted>())
	,out_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged>())
	,out_pkts_too_long(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong>())
	,out_octets_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected>())
	,out_octets_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted>())
{
    in_pkts_untagged->parent = this;
    in_pkts_no_tag->parent = this;
    in_pkts_bad_tag->parent = this;
    in_pkts_unknown_sci->parent = this;
    in_pkts_no_sci->parent = this;
    in_pkts_overrun->parent = this;
    in_octets_validated->parent = this;
    in_octets_decrypted->parent = this;
    out_pkts_untagged->parent = this;
    out_pkts_too_long->parent = this;
    out_octets_protected->parent = this;
    out_octets_encrypted->parent = this;

    yang_name = "macsec-minute15secyif"; yang_parent_name = "macsec-minute15secyifs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::~MacsecMinute15Secyif()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| sample_count.is_set
	|| (in_pkts_untagged !=  nullptr && in_pkts_untagged->has_data())
	|| (in_pkts_no_tag !=  nullptr && in_pkts_no_tag->has_data())
	|| (in_pkts_bad_tag !=  nullptr && in_pkts_bad_tag->has_data())
	|| (in_pkts_unknown_sci !=  nullptr && in_pkts_unknown_sci->has_data())
	|| (in_pkts_no_sci !=  nullptr && in_pkts_no_sci->has_data())
	|| (in_pkts_overrun !=  nullptr && in_pkts_overrun->has_data())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_data())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_data())
	|| (out_pkts_untagged !=  nullptr && out_pkts_untagged->has_data())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_data())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_data())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| (in_pkts_untagged !=  nullptr && in_pkts_untagged->has_operation())
	|| (in_pkts_no_tag !=  nullptr && in_pkts_no_tag->has_operation())
	|| (in_pkts_bad_tag !=  nullptr && in_pkts_bad_tag->has_operation())
	|| (in_pkts_unknown_sci !=  nullptr && in_pkts_unknown_sci->has_operation())
	|| (in_pkts_no_sci !=  nullptr && in_pkts_no_sci->has_operation())
	|| (in_pkts_overrun !=  nullptr && in_pkts_overrun->has_operation())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_operation())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_operation())
	|| (out_pkts_untagged !=  nullptr && out_pkts_untagged->has_operation())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_operation())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_operation())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15secyif" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-pkts-untagged")
    {
        if(in_pkts_untagged == nullptr)
        {
            in_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged>();
        }
        return in_pkts_untagged;
    }

    if(child_yang_name == "in-pkts-no-tag")
    {
        if(in_pkts_no_tag == nullptr)
        {
            in_pkts_no_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag>();
        }
        return in_pkts_no_tag;
    }

    if(child_yang_name == "in-pkts-bad-tag")
    {
        if(in_pkts_bad_tag == nullptr)
        {
            in_pkts_bad_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag>();
        }
        return in_pkts_bad_tag;
    }

    if(child_yang_name == "in-pkts-unknown-sci")
    {
        if(in_pkts_unknown_sci == nullptr)
        {
            in_pkts_unknown_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci>();
        }
        return in_pkts_unknown_sci;
    }

    if(child_yang_name == "in-pkts-no-sci")
    {
        if(in_pkts_no_sci == nullptr)
        {
            in_pkts_no_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci>();
        }
        return in_pkts_no_sci;
    }

    if(child_yang_name == "in-pkts-overrun")
    {
        if(in_pkts_overrun == nullptr)
        {
            in_pkts_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun>();
        }
        return in_pkts_overrun;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    if(child_yang_name == "out-pkts-untagged")
    {
        if(out_pkts_untagged == nullptr)
        {
            out_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged>();
        }
        return out_pkts_untagged;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_pkts_untagged != nullptr)
    {
        children["in-pkts-untagged"] = in_pkts_untagged;
    }

    if(in_pkts_no_tag != nullptr)
    {
        children["in-pkts-no-tag"] = in_pkts_no_tag;
    }

    if(in_pkts_bad_tag != nullptr)
    {
        children["in-pkts-bad-tag"] = in_pkts_bad_tag;
    }

    if(in_pkts_unknown_sci != nullptr)
    {
        children["in-pkts-unknown-sci"] = in_pkts_unknown_sci;
    }

    if(in_pkts_no_sci != nullptr)
    {
        children["in-pkts-no-sci"] = in_pkts_no_sci;
    }

    if(in_pkts_overrun != nullptr)
    {
        children["in-pkts-overrun"] = in_pkts_overrun;
    }

    if(in_octets_validated != nullptr)
    {
        children["in-octets-validated"] = in_octets_validated;
    }

    if(in_octets_decrypted != nullptr)
    {
        children["in-octets-decrypted"] = in_octets_decrypted;
    }

    if(out_pkts_untagged != nullptr)
    {
        children["out-pkts-untagged"] = out_pkts_untagged;
    }

    if(out_pkts_too_long != nullptr)
    {
        children["out-pkts-too-long"] = out_pkts_too_long;
    }

    if(out_octets_protected != nullptr)
    {
        children["out-octets-protected"] = out_octets_protected;
    }

    if(out_octets_encrypted != nullptr)
    {
        children["out-octets-encrypted"] = out_octets_encrypted;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-untagged" || name == "in-pkts-no-tag" || name == "in-pkts-bad-tag" || name == "in-pkts-unknown-sci" || name == "in-pkts-no-sci" || name == "in-pkts-overrun" || name == "in-octets-validated" || name == "in-octets-decrypted" || name == "out-pkts-untagged" || name == "out-pkts-too-long" || name == "out-octets-protected" || name == "out-octets-encrypted" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support" || name == "sample-count")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::InPktsUntagged()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::~InPktsUntagged()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::InPktsNoTag()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-tag"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::~InPktsNoTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::InPktsBadTag()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-bad-tag"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::~InPktsBadTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-bad-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::InPktsUnknownSci()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unknown-sci"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::~InPktsUnknownSci()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unknown-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::InPktsNoSci()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-sci"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::~InPktsNoSci()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::InPktsOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-overrun"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::~InPktsOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::OutPktsUntagged()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-untagged"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::~OutPktsUntagged()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-minute15secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrxes()
{

    yang_name = "macsec-minute15secyrxes"; yang_parent_name = "macsec-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::~MacsecMinute15Secyrxes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::has_data() const
{
    for (std::size_t index=0; index<macsec_minute15secyrx.size(); index++)
    {
        if(macsec_minute15secyrx[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::has_operation() const
{
    for (std::size_t index=0; index<macsec_minute15secyrx.size(); index++)
    {
        if(macsec_minute15secyrx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15secyrxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-minute15secyrx")
    {
        for(auto const & c : macsec_minute15secyrx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx>();
        c->parent = this;
        macsec_minute15secyrx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_minute15secyrx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-minute15secyrx")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::MacsecMinute15Secyrx()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"},
    sample_count{YType::uint64, "sample-count"}
    	,
    in_pkts_unchecked(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked>())
	,in_pkts_delayed(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed>())
	,in_pkts_late(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate>())
	,in_pkts_ok(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk>())
	,in_pkts_invalid(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid>())
	,in_pkts_not_valid(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid>())
	,in_pkts_not_using_sa(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa>())
	,in_pkts_unused_sa(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa>())
	,in_pkts_untagged_hit(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit>())
	,in_octets_validated(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated>())
	,in_octets_decrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted>())
{
    in_pkts_unchecked->parent = this;
    in_pkts_delayed->parent = this;
    in_pkts_late->parent = this;
    in_pkts_ok->parent = this;
    in_pkts_invalid->parent = this;
    in_pkts_not_valid->parent = this;
    in_pkts_not_using_sa->parent = this;
    in_pkts_unused_sa->parent = this;
    in_pkts_untagged_hit->parent = this;
    in_octets_validated->parent = this;
    in_octets_decrypted->parent = this;

    yang_name = "macsec-minute15secyrx"; yang_parent_name = "macsec-minute15secyrxes"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::~MacsecMinute15Secyrx()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| sample_count.is_set
	|| (in_pkts_unchecked !=  nullptr && in_pkts_unchecked->has_data())
	|| (in_pkts_delayed !=  nullptr && in_pkts_delayed->has_data())
	|| (in_pkts_late !=  nullptr && in_pkts_late->has_data())
	|| (in_pkts_ok !=  nullptr && in_pkts_ok->has_data())
	|| (in_pkts_invalid !=  nullptr && in_pkts_invalid->has_data())
	|| (in_pkts_not_valid !=  nullptr && in_pkts_not_valid->has_data())
	|| (in_pkts_not_using_sa !=  nullptr && in_pkts_not_using_sa->has_data())
	|| (in_pkts_unused_sa !=  nullptr && in_pkts_unused_sa->has_data())
	|| (in_pkts_untagged_hit !=  nullptr && in_pkts_untagged_hit->has_data())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_data())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| (in_pkts_unchecked !=  nullptr && in_pkts_unchecked->has_operation())
	|| (in_pkts_delayed !=  nullptr && in_pkts_delayed->has_operation())
	|| (in_pkts_late !=  nullptr && in_pkts_late->has_operation())
	|| (in_pkts_ok !=  nullptr && in_pkts_ok->has_operation())
	|| (in_pkts_invalid !=  nullptr && in_pkts_invalid->has_operation())
	|| (in_pkts_not_valid !=  nullptr && in_pkts_not_valid->has_operation())
	|| (in_pkts_not_using_sa !=  nullptr && in_pkts_not_using_sa->has_operation())
	|| (in_pkts_unused_sa !=  nullptr && in_pkts_unused_sa->has_operation())
	|| (in_pkts_untagged_hit !=  nullptr && in_pkts_untagged_hit->has_operation())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_operation())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15secyrx" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-pkts-unchecked")
    {
        if(in_pkts_unchecked == nullptr)
        {
            in_pkts_unchecked = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked>();
        }
        return in_pkts_unchecked;
    }

    if(child_yang_name == "in-pkts-delayed")
    {
        if(in_pkts_delayed == nullptr)
        {
            in_pkts_delayed = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed>();
        }
        return in_pkts_delayed;
    }

    if(child_yang_name == "in-pkts-late")
    {
        if(in_pkts_late == nullptr)
        {
            in_pkts_late = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate>();
        }
        return in_pkts_late;
    }

    if(child_yang_name == "in-pkts-ok")
    {
        if(in_pkts_ok == nullptr)
        {
            in_pkts_ok = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk>();
        }
        return in_pkts_ok;
    }

    if(child_yang_name == "in-pkts-invalid")
    {
        if(in_pkts_invalid == nullptr)
        {
            in_pkts_invalid = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid>();
        }
        return in_pkts_invalid;
    }

    if(child_yang_name == "in-pkts-not-valid")
    {
        if(in_pkts_not_valid == nullptr)
        {
            in_pkts_not_valid = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid>();
        }
        return in_pkts_not_valid;
    }

    if(child_yang_name == "in-pkts-not-using-sa")
    {
        if(in_pkts_not_using_sa == nullptr)
        {
            in_pkts_not_using_sa = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa>();
        }
        return in_pkts_not_using_sa;
    }

    if(child_yang_name == "in-pkts-unused-sa")
    {
        if(in_pkts_unused_sa == nullptr)
        {
            in_pkts_unused_sa = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa>();
        }
        return in_pkts_unused_sa;
    }

    if(child_yang_name == "in-pkts-untagged-hit")
    {
        if(in_pkts_untagged_hit == nullptr)
        {
            in_pkts_untagged_hit = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit>();
        }
        return in_pkts_untagged_hit;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_pkts_unchecked != nullptr)
    {
        children["in-pkts-unchecked"] = in_pkts_unchecked;
    }

    if(in_pkts_delayed != nullptr)
    {
        children["in-pkts-delayed"] = in_pkts_delayed;
    }

    if(in_pkts_late != nullptr)
    {
        children["in-pkts-late"] = in_pkts_late;
    }

    if(in_pkts_ok != nullptr)
    {
        children["in-pkts-ok"] = in_pkts_ok;
    }

    if(in_pkts_invalid != nullptr)
    {
        children["in-pkts-invalid"] = in_pkts_invalid;
    }

    if(in_pkts_not_valid != nullptr)
    {
        children["in-pkts-not-valid"] = in_pkts_not_valid;
    }

    if(in_pkts_not_using_sa != nullptr)
    {
        children["in-pkts-not-using-sa"] = in_pkts_not_using_sa;
    }

    if(in_pkts_unused_sa != nullptr)
    {
        children["in-pkts-unused-sa"] = in_pkts_unused_sa;
    }

    if(in_pkts_untagged_hit != nullptr)
    {
        children["in-pkts-untagged-hit"] = in_pkts_untagged_hit;
    }

    if(in_octets_validated != nullptr)
    {
        children["in-octets-validated"] = in_octets_validated;
    }

    if(in_octets_decrypted != nullptr)
    {
        children["in-octets-decrypted"] = in_octets_decrypted;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-unchecked" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-ok" || name == "in-pkts-invalid" || name == "in-pkts-not-valid" || name == "in-pkts-not-using-sa" || name == "in-pkts-unused-sa" || name == "in-pkts-untagged-hit" || name == "in-octets-validated" || name == "in-octets-decrypted" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support" || name == "sample-count")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::InPktsUnchecked()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unchecked"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::~InPktsUnchecked()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unchecked";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::InPktsDelayed()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-delayed"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::~InPktsDelayed()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::InPktsLate()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-late"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::~InPktsLate()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-late";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::InPktsOk()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-ok"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::~InPktsOk()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-ok";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::InPktsInvalid()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-invalid"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::~InPktsInvalid()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::InPktsNotValid()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-valid"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::~InPktsNotValid()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::InPktsNotUsingSa()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-using-sa"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::~InPktsNotUsingSa()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-using-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::InPktsUnusedSa()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unused-sa"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::~InPktsUnusedSa()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unused-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::InPktsUntaggedHit()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged-hit"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::~InPktsUntaggedHit()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged-hit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-minute15secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytxes()
{

    yang_name = "macsec-minute15secytxes"; yang_parent_name = "macsec-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::~MacsecMinute15Secytxes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::has_data() const
{
    for (std::size_t index=0; index<macsec_minute15secytx.size(); index++)
    {
        if(macsec_minute15secytx[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::has_operation() const
{
    for (std::size_t index=0; index<macsec_minute15secytx.size(); index++)
    {
        if(macsec_minute15secytx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15secytxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-minute15secytx")
    {
        for(auto const & c : macsec_minute15secytx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx>();
        c->parent = this;
        macsec_minute15secytx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_minute15secytx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-minute15secytx")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::MacsecMinute15Secytx()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"},
    sample_count{YType::uint64, "sample-count"}
    	,
    out_pkts_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected>())
	,out_pkts_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted>())
	,out_octets_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected>())
	,out_octets_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted>())
	,out_pkts_too_long(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong>())
{
    out_pkts_protected->parent = this;
    out_pkts_encrypted->parent = this;
    out_octets_protected->parent = this;
    out_octets_encrypted->parent = this;
    out_pkts_too_long->parent = this;

    yang_name = "macsec-minute15secytx"; yang_parent_name = "macsec-minute15secytxes"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::~MacsecMinute15Secytx()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| sample_count.is_set
	|| (out_pkts_protected !=  nullptr && out_pkts_protected->has_data())
	|| (out_pkts_encrypted !=  nullptr && out_pkts_encrypted->has_data())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_data())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_data())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| (out_pkts_protected !=  nullptr && out_pkts_protected->has_operation())
	|| (out_pkts_encrypted !=  nullptr && out_pkts_encrypted->has_operation())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_operation())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_operation())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15secytx" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out-pkts-protected")
    {
        if(out_pkts_protected == nullptr)
        {
            out_pkts_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected>();
        }
        return out_pkts_protected;
    }

    if(child_yang_name == "out-pkts-encrypted")
    {
        if(out_pkts_encrypted == nullptr)
        {
            out_pkts_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted>();
        }
        return out_pkts_encrypted;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out_pkts_protected != nullptr)
    {
        children["out-pkts-protected"] = out_pkts_protected;
    }

    if(out_pkts_encrypted != nullptr)
    {
        children["out-pkts-encrypted"] = out_pkts_encrypted;
    }

    if(out_octets_protected != nullptr)
    {
        children["out-octets-protected"] = out_octets_protected;
    }

    if(out_octets_encrypted != nullptr)
    {
        children["out-octets-encrypted"] = out_octets_encrypted;
    }

    if(out_pkts_too_long != nullptr)
    {
        children["out-pkts-too-long"] = out_pkts_too_long;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-pkts-protected" || name == "out-pkts-encrypted" || name == "out-octets-protected" || name == "out-octets-encrypted" || name == "out-pkts-too-long" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support" || name == "sample-count")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::OutPktsProtected()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-protected"; yang_parent_name = "macsec-minute15secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::~OutPktsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::OutPktsEncrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-encrypted"; yang_parent_name = "macsec-minute15secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::~OutPktsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-minute15secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-minute15secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-minute15secytx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15EtherS()
{

    yang_name = "macsec-minute15-ether-s"; yang_parent_name = "macsec-minute15"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::~MacsecMinute15EtherS()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::has_data() const
{
    for (std::size_t index=0; index<macsec_minute15_ether.size(); index++)
    {
        if(macsec_minute15_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::has_operation() const
{
    for (std::size_t index=0; index<macsec_minute15_ether.size(); index++)
    {
        if(macsec_minute15_ether[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15-ether-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-minute15-ether")
    {
        for(auto const & c : macsec_minute15_ether)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether>();
        c->parent = this;
        macsec_minute15_ether.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_minute15_ether)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-minute15-ether")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::MacsecMinute15Ether()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    rx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt>())
	,stat_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt>())
	,octet_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat>())
	,fcs_errors_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat>())
	,long_frames_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat>())
	,jabber_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat>())
	,ether64_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet>())
	,ether10241518_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet>())
	,in_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt>())
	,in_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt>())
	,in_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt>())
	,out_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt>())
	,out_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt>())
	,out_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt>())
	,tx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt>())
	,if_in_errors(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt>())
	,out_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets>())
	,in_pause_frame(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame>())
	,in_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes>())
	,in8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets>())
	,in_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts>())
	,in_drop_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun>())
	,in_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap>())
	,in_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther>())
	,in_mib_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc>())
	,in_error_collisions(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions>())
	,in_error_symbol(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol>())
	,out_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes>())
	,out8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames>())
	,out_pause_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets>())
	,out_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts>())
	,out_drop_underrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun>())
	,out_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther>())
	,out_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther>())
	,in_error_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant>())
	,in_error_runt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt>())
	,in_error_jabbers(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers>())
	,in_error_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments>())
	,in_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther>())
	,in_pkt64_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets>())
	,outpkt64octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets>())
	,rx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil>())
	,tx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt>())
	,tx_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber>())
	,tx_bad_fcs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs>())
{
    rx_pkt->parent = this;
    stat_pkt->parent = this;
    octet_stat->parent = this;
    oversize_pkt_stat->parent = this;
    fcs_errors_stat->parent = this;
    long_frames_stat->parent = this;
    jabber_stat->parent = this;
    ether64_octets->parent = this;
    ether65127_octet->parent = this;
    ether128255_octet->parent = this;
    ether256511_octet->parent = this;
    ether5121023_octet->parent = this;
    ether10241518_octet->parent = this;
    in_ucast_pkt->parent = this;
    in_mcast_pkt->parent = this;
    in_bcast_pkt->parent = this;
    out_ucast_pkt->parent = this;
    out_bcast_pkt->parent = this;
    out_mcast_pkt->parent = this;
    tx_pkt->parent = this;
    if_in_errors->parent = this;
    if_in_octets->parent = this;
    ether_stat_multicast_pkt->parent = this;
    ether_stat_broadcast_pkt->parent = this;
    ether_stat_undersized_pkt->parent = this;
    out_octets->parent = this;
    in_pause_frame->parent = this;
    in_good_bytes->parent = this;
    in8021q_frames->parent = this;
    in_pkts1519_max_octets->parent = this;
    in_good_pkts->parent = this;
    in_drop_overrun->parent = this;
    in_drop_abort->parent = this;
    in_drop_invalid_vlan->parent = this;
    in_drop_invalid_dmac->parent = this;
    in_drop_invalid_encap->parent = this;
    in_drop_other->parent = this;
    in_mib_giant->parent = this;
    in_mib_jabber->parent = this;
    in_mibcrc->parent = this;
    in_error_collisions->parent = this;
    in_error_symbol->parent = this;
    out_good_bytes->parent = this;
    out8021q_frames->parent = this;
    out_pause_frames->parent = this;
    out_pkts1519_max_octets->parent = this;
    out_good_pkts->parent = this;
    out_drop_underrun->parent = this;
    out_drop_abort->parent = this;
    out_drop_other->parent = this;
    out_error_other->parent = this;
    in_error_giant->parent = this;
    in_error_runt->parent = this;
    in_error_jabbers->parent = this;
    in_error_fragments->parent = this;
    in_error_other->parent = this;
    in_pkt64_octet->parent = this;
    in_pkts65_to127_octets->parent = this;
    in_pkts128_to255_octets->parent = this;
    in_pkts256_to511_octets->parent = this;
    in_pkts512_to1023_octets->parent = this;
    in_pkts1024_to1518_octets->parent = this;
    outpkt64octet->parent = this;
    out_pkts65127_octets->parent = this;
    out_pkts128255_octets->parent = this;
    out_pkts256511_octets->parent = this;
    out_pkts5121023_octets->parent = this;
    out_pkts10241518_octets->parent = this;
    rx_util->parent = this;
    tx_util->parent = this;
    tx_undersized_pkt->parent = this;
    tx_oversized_pkt->parent = this;
    tx_fragments->parent = this;
    tx_jabber->parent = this;
    tx_bad_fcs->parent = this;

    yang_name = "macsec-minute15-ether"; yang_parent_name = "macsec-minute15-ether-s"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::~MacsecMinute15Ether()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-minute15-ether" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil>();
        }
        return tx_util;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx_pkt != nullptr)
    {
        children["rx-pkt"] = rx_pkt;
    }

    if(stat_pkt != nullptr)
    {
        children["stat-pkt"] = stat_pkt;
    }

    if(octet_stat != nullptr)
    {
        children["octet-stat"] = octet_stat;
    }

    if(oversize_pkt_stat != nullptr)
    {
        children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(fcs_errors_stat != nullptr)
    {
        children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(long_frames_stat != nullptr)
    {
        children["long-frames-stat"] = long_frames_stat;
    }

    if(jabber_stat != nullptr)
    {
        children["jabber-stat"] = jabber_stat;
    }

    if(ether64_octets != nullptr)
    {
        children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        children["ether65127-octet"] = ether65127_octet;
    }

    if(ether128255_octet != nullptr)
    {
        children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether10241518_octet != nullptr)
    {
        children["ether10241518-octet"] = ether10241518_octet;
    }

    if(in_ucast_pkt != nullptr)
    {
        children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(in_mcast_pkt != nullptr)
    {
        children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_bcast_pkt != nullptr)
    {
        children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(out_ucast_pkt != nullptr)
    {
        children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(out_bcast_pkt != nullptr)
    {
        children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_mcast_pkt != nullptr)
    {
        children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(tx_pkt != nullptr)
    {
        children["tx-pkt"] = tx_pkt;
    }

    if(if_in_errors != nullptr)
    {
        children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        children["if-in-octets"] = if_in_octets;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(in_pause_frame != nullptr)
    {
        children["in-pause-frame"] = in_pause_frame;
    }

    if(in_good_bytes != nullptr)
    {
        children["in-good-bytes"] = in_good_bytes;
    }

    if(in8021q_frames != nullptr)
    {
        children["in8021q-frames"] = in8021q_frames;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_good_pkts != nullptr)
    {
        children["in-good-pkts"] = in_good_pkts;
    }

    if(in_drop_overrun != nullptr)
    {
        children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_drop_abort != nullptr)
    {
        children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_other != nullptr)
    {
        children["in-drop-other"] = in_drop_other;
    }

    if(in_mib_giant != nullptr)
    {
        children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        children["in-mibcrc"] = in_mibcrc;
    }

    if(in_error_collisions != nullptr)
    {
        children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_symbol != nullptr)
    {
        children["in-error-symbol"] = in_error_symbol;
    }

    if(out_good_bytes != nullptr)
    {
        children["out-good-bytes"] = out_good_bytes;
    }

    if(out8021q_frames != nullptr)
    {
        children["out8021q-frames"] = out8021q_frames;
    }

    if(out_pause_frames != nullptr)
    {
        children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_good_pkts != nullptr)
    {
        children["out-good-pkts"] = out_good_pkts;
    }

    if(out_drop_underrun != nullptr)
    {
        children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_drop_abort != nullptr)
    {
        children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        children["out-drop-other"] = out_drop_other;
    }

    if(out_error_other != nullptr)
    {
        children["out-error-other"] = out_error_other;
    }

    if(in_error_giant != nullptr)
    {
        children["in-error-giant"] = in_error_giant;
    }

    if(in_error_runt != nullptr)
    {
        children["in-error-runt"] = in_error_runt;
    }

    if(in_error_jabbers != nullptr)
    {
        children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_fragments != nullptr)
    {
        children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_other != nullptr)
    {
        children["in-error-other"] = in_error_other;
    }

    if(in_pkt64_octet != nullptr)
    {
        children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(outpkt64octet != nullptr)
    {
        children["outpkt64octet"] = outpkt64octet;
    }

    if(out_pkts65127_octets != nullptr)
    {
        children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(rx_util != nullptr)
    {
        children["rx-util"] = rx_util;
    }

    if(tx_util != nullptr)
    {
        children["tx-util"] = tx_util;
    }

    if(tx_undersized_pkt != nullptr)
    {
        children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_oversized_pkt != nullptr)
    {
        children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_fragments != nullptr)
    {
        children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        children["tx-jabber"] = tx_jabber;
    }

    if(tx_bad_fcs != nullptr)
    {
        children["tx-bad-fcs"] = tx_bad_fcs;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-pkt" || name == "stat-pkt" || name == "octet-stat" || name == "oversize-pkt-stat" || name == "fcs-errors-stat" || name == "long-frames-stat" || name == "jabber-stat" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether10241518-octet" || name == "in-ucast-pkt" || name == "in-mcast-pkt" || name == "in-bcast-pkt" || name == "out-ucast-pkt" || name == "out-bcast-pkt" || name == "out-mcast-pkt" || name == "tx-pkt" || name == "if-in-errors" || name == "if-in-octets" || name == "ether-stat-multicast-pkt" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-undersized-pkt" || name == "out-octets" || name == "in-pause-frame" || name == "in-good-bytes" || name == "in8021q-frames" || name == "in-pkts1519-max-octets" || name == "in-good-pkts" || name == "in-drop-overrun" || name == "in-drop-abort" || name == "in-drop-invalid-vlan" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-other" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-error-collisions" || name == "in-error-symbol" || name == "out-good-bytes" || name == "out8021q-frames" || name == "out-pause-frames" || name == "out-pkts1519-max-octets" || name == "out-good-pkts" || name == "out-drop-underrun" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-error-other" || name == "in-error-giant" || name == "in-error-runt" || name == "in-error-jabbers" || name == "in-error-fragments" || name == "in-error-other" || name == "in-pkt64-octet" || name == "in-pkts65-to127-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts1024-to1518-octets" || name == "outpkt64octet" || name == "out-pkts65127-octets" || name == "out-pkts128255-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts10241518-octets" || name == "rx-util" || name == "tx-util" || name == "tx-undersized-pkt" || name == "tx-oversized-pkt" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-bad-fcs" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear30-sec-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::OversizePktStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "oversize-pkt-stat"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::~OversizePktStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "oversize-pkt-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::FcsErrorsStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "fcs-errors-stat"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::~FcsErrorsStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcs-errors-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::LongFramesStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "long-frames-stat"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::~LongFramesStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "long-frames-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::JabberStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "jabber-stat"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::~JabberStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jabber-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::Ether64Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether64-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::~Ether64Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether64-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::Ether65127Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether65127-octet"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::~Ether65127Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether65127-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::Ether128255Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether128255-octet"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::~Ether128255Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether128255-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::Ether256511Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether256511-octet"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::~Ether256511Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether256511-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::Ether5121023Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether5121023-octet"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::~Ether5121023Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether5121023-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::Ether10241518Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether10241518-octet"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::~Ether10241518Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether10241518-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::InUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-ucast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::~InUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::InMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mcast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::~InMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::InBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-bcast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::~InBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::OutUcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-ucast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::~OutUcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-ucast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::OutBcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-bcast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::~OutBcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-bcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::OutMcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-mcast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::~OutMcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-mcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::TxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::~TxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::IfInErrors()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-errors"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::~IfInErrors()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::IfInOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "if-in-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::~IfInOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-in-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::EtherStatMulticastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-multicast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::~EtherStatMulticastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-multicast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::EtherStatBroadcastPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-broadcast-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::~EtherStatBroadcastPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-broadcast-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::EtherStatUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "ether-stat-undersized-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::~EtherStatUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-stat-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::OutOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::~OutOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::InPauseFrame()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pause-frame"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::~InPauseFrame()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pause-frame";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::InGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-bytes"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::~InGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::In8021QFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in8021q-frames"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::~In8021QFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::InPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1519-max-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::~InPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::InGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-good-pkts"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::~InGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::InDropOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-overrun"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::~InDropOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::InDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-abort"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::~InDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::InDropInvalidVlan()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-vlan"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::~InDropInvalidVlan()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::InDropInvalidDmac()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-dmac"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::~InDropInvalidDmac()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-dmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::InDropInvalidEncap()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-invalid-encap"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::~InDropInvalidEncap()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-invalid-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::InDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-drop-other"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::~InDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::InMibGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-giant"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::~InMibGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::InMibJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mib-jabber"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::~InMibJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mib-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::InMibcrc()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-mibcrc"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::~InMibcrc()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-mibcrc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::InErrorCollisions()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-collisions"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::~InErrorCollisions()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-collisions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::InErrorSymbol()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-symbol"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::~InErrorSymbol()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-symbol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::OutGoodBytes()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-bytes"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::~OutGoodBytes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-bytes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::Out8021QFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out8021q-frames"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::~Out8021QFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out8021q-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::OutPauseFrames()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pause-frames"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::~OutPauseFrames()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pause-frames";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::OutPkts1519MaxOctets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts1519-max-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::~OutPkts1519MaxOctets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts1519-max-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::OutGoodPkts()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-good-pkts"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::~OutGoodPkts()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-good-pkts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::OutDropUnderrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-underrun"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::~OutDropUnderrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-underrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::OutDropAbort()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-abort"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::~OutDropAbort()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-abort";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::OutDropOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-drop-other"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::~OutDropOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-drop-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::OutErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-error-other"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::~OutErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::InErrorGiant()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-giant"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::~InErrorGiant()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-giant";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::InErrorRunt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-runt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::~InErrorRunt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-runt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::InErrorJabbers()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-jabbers"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::~InErrorJabbers()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-jabbers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::InErrorFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-fragments"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::~InErrorFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::InErrorOther()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-error-other"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::~InErrorOther()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-error-other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::InPkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkt64-octet"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::~InPkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkt64-octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::InPkts65To127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts65-to127-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::~InPkts65To127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts65-to127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::InPkts128To255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts128-to255-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::~InPkts128To255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts128-to255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::InPkts256To511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts256-to511-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::~InPkts256To511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts256-to511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::InPkts512To1023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts512-to1023-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::~InPkts512To1023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts512-to1023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::InPkts1024To1518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts1024-to1518-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::~InPkts1024To1518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts1024-to1518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::Outpkt64Octet()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "outpkt64octet"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::~Outpkt64Octet()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outpkt64octet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::OutPkts65127Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts65127-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::~OutPkts65127Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts65127-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::OutPkts128255Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts128255-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::~OutPkts128255Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts128255-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::OutPkts256511Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts256511-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::~OutPkts256511Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts256511-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::OutPkts5121023Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts5121023-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::~OutPkts5121023Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts5121023-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::OutPkts10241518Octets()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts10241518-octets"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::~OutPkts10241518Octets()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts10241518-octets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::RxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-util"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::~RxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::TxUtil()
    :
    data{YType::str, "data"},
    threshold{YType::str, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-util"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::~TxUtil()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-util";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::TxUndersizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-undersized-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::~TxUndersizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-undersized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::TxOversizedPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-oversized-pkt"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::~TxOversizedPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-oversized-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::TxFragments()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-fragments"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::~TxFragments()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-fragments";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::TxJabber()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-jabber"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::~TxJabber()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-jabber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::TxBadFcs()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "tx-bad-fcs"; yang_parent_name = "macsec-minute15-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::~TxBadFcs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-bad-fcs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30()
    :
    macsec_second30secyifs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs>())
	,macsec_second30secyrxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes>())
	,macsec_second30_ether_s(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS>())
	,macsec_second30secytxes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes>())
{
    macsec_second30secyifs->parent = this;
    macsec_second30secyrxes->parent = this;
    macsec_second30_ether_s->parent = this;
    macsec_second30secytxes->parent = this;

    yang_name = "macsec-second30"; yang_parent_name = "macsec-current"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::~MacsecSecond30()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::has_data() const
{
    return (macsec_second30secyifs !=  nullptr && macsec_second30secyifs->has_data())
	|| (macsec_second30secyrxes !=  nullptr && macsec_second30secyrxes->has_data())
	|| (macsec_second30_ether_s !=  nullptr && macsec_second30_ether_s->has_data())
	|| (macsec_second30secytxes !=  nullptr && macsec_second30secytxes->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::has_operation() const
{
    return is_set(yfilter)
	|| (macsec_second30secyifs !=  nullptr && macsec_second30secyifs->has_operation())
	|| (macsec_second30secyrxes !=  nullptr && macsec_second30secyrxes->has_operation())
	|| (macsec_second30_ether_s !=  nullptr && macsec_second30_ether_s->has_operation())
	|| (macsec_second30secytxes !=  nullptr && macsec_second30secytxes->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyifs")
    {
        if(macsec_second30secyifs == nullptr)
        {
            macsec_second30secyifs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs>();
        }
        return macsec_second30secyifs;
    }

    if(child_yang_name == "macsec-second30secyrxes")
    {
        if(macsec_second30secyrxes == nullptr)
        {
            macsec_second30secyrxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes>();
        }
        return macsec_second30secyrxes;
    }

    if(child_yang_name == "macsec-second30-ether-s")
    {
        if(macsec_second30_ether_s == nullptr)
        {
            macsec_second30_ether_s = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS>();
        }
        return macsec_second30_ether_s;
    }

    if(child_yang_name == "macsec-second30secytxes")
    {
        if(macsec_second30secytxes == nullptr)
        {
            macsec_second30secytxes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes>();
        }
        return macsec_second30secytxes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_second30secyifs != nullptr)
    {
        children["macsec-second30secyifs"] = macsec_second30secyifs;
    }

    if(macsec_second30secyrxes != nullptr)
    {
        children["macsec-second30secyrxes"] = macsec_second30secyrxes;
    }

    if(macsec_second30_ether_s != nullptr)
    {
        children["macsec-second30-ether-s"] = macsec_second30_ether_s;
    }

    if(macsec_second30secytxes != nullptr)
    {
        children["macsec-second30secytxes"] = macsec_second30secytxes;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyifs" || name == "macsec-second30secyrxes" || name == "macsec-second30-ether-s" || name == "macsec-second30secytxes")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyifs()
{

    yang_name = "macsec-second30secyifs"; yang_parent_name = "macsec-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::~MacsecSecond30Secyifs()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyif.size(); index++)
    {
        if(macsec_second30secyif[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyif.size(); index++)
    {
        if(macsec_second30secyif[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyifs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyif")
    {
        for(auto const & c : macsec_second30secyif)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif>();
        c->parent = this;
        macsec_second30secyif.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyif)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyif")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::MacsecSecond30Secyif()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"},
    sample_count{YType::uint64, "sample-count"}
    	,
    in_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged>())
	,in_pkts_no_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag>())
	,in_pkts_bad_tag(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag>())
	,in_pkts_unknown_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci>())
	,in_pkts_no_sci(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci>())
	,in_pkts_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun>())
	,in_octets_validated(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated>())
	,in_octets_decrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted>())
	,out_pkts_untagged(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged>())
	,out_pkts_too_long(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong>())
	,out_octets_protected(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected>())
	,out_octets_encrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted>())
{
    in_pkts_untagged->parent = this;
    in_pkts_no_tag->parent = this;
    in_pkts_bad_tag->parent = this;
    in_pkts_unknown_sci->parent = this;
    in_pkts_no_sci->parent = this;
    in_pkts_overrun->parent = this;
    in_octets_validated->parent = this;
    in_octets_decrypted->parent = this;
    out_pkts_untagged->parent = this;
    out_pkts_too_long->parent = this;
    out_octets_protected->parent = this;
    out_octets_encrypted->parent = this;

    yang_name = "macsec-second30secyif"; yang_parent_name = "macsec-second30secyifs"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::~MacsecSecond30Secyif()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| sample_count.is_set
	|| (in_pkts_untagged !=  nullptr && in_pkts_untagged->has_data())
	|| (in_pkts_no_tag !=  nullptr && in_pkts_no_tag->has_data())
	|| (in_pkts_bad_tag !=  nullptr && in_pkts_bad_tag->has_data())
	|| (in_pkts_unknown_sci !=  nullptr && in_pkts_unknown_sci->has_data())
	|| (in_pkts_no_sci !=  nullptr && in_pkts_no_sci->has_data())
	|| (in_pkts_overrun !=  nullptr && in_pkts_overrun->has_data())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_data())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_data())
	|| (out_pkts_untagged !=  nullptr && out_pkts_untagged->has_data())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_data())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_data())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| (in_pkts_untagged !=  nullptr && in_pkts_untagged->has_operation())
	|| (in_pkts_no_tag !=  nullptr && in_pkts_no_tag->has_operation())
	|| (in_pkts_bad_tag !=  nullptr && in_pkts_bad_tag->has_operation())
	|| (in_pkts_unknown_sci !=  nullptr && in_pkts_unknown_sci->has_operation())
	|| (in_pkts_no_sci !=  nullptr && in_pkts_no_sci->has_operation())
	|| (in_pkts_overrun !=  nullptr && in_pkts_overrun->has_operation())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_operation())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_operation())
	|| (out_pkts_untagged !=  nullptr && out_pkts_untagged->has_operation())
	|| (out_pkts_too_long !=  nullptr && out_pkts_too_long->has_operation())
	|| (out_octets_protected !=  nullptr && out_octets_protected->has_operation())
	|| (out_octets_encrypted !=  nullptr && out_octets_encrypted->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyif" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-pkts-untagged")
    {
        if(in_pkts_untagged == nullptr)
        {
            in_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged>();
        }
        return in_pkts_untagged;
    }

    if(child_yang_name == "in-pkts-no-tag")
    {
        if(in_pkts_no_tag == nullptr)
        {
            in_pkts_no_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag>();
        }
        return in_pkts_no_tag;
    }

    if(child_yang_name == "in-pkts-bad-tag")
    {
        if(in_pkts_bad_tag == nullptr)
        {
            in_pkts_bad_tag = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag>();
        }
        return in_pkts_bad_tag;
    }

    if(child_yang_name == "in-pkts-unknown-sci")
    {
        if(in_pkts_unknown_sci == nullptr)
        {
            in_pkts_unknown_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci>();
        }
        return in_pkts_unknown_sci;
    }

    if(child_yang_name == "in-pkts-no-sci")
    {
        if(in_pkts_no_sci == nullptr)
        {
            in_pkts_no_sci = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci>();
        }
        return in_pkts_no_sci;
    }

    if(child_yang_name == "in-pkts-overrun")
    {
        if(in_pkts_overrun == nullptr)
        {
            in_pkts_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun>();
        }
        return in_pkts_overrun;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    if(child_yang_name == "out-pkts-untagged")
    {
        if(out_pkts_untagged == nullptr)
        {
            out_pkts_untagged = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged>();
        }
        return out_pkts_untagged;
    }

    if(child_yang_name == "out-pkts-too-long")
    {
        if(out_pkts_too_long == nullptr)
        {
            out_pkts_too_long = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong>();
        }
        return out_pkts_too_long;
    }

    if(child_yang_name == "out-octets-protected")
    {
        if(out_octets_protected == nullptr)
        {
            out_octets_protected = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected>();
        }
        return out_octets_protected;
    }

    if(child_yang_name == "out-octets-encrypted")
    {
        if(out_octets_encrypted == nullptr)
        {
            out_octets_encrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted>();
        }
        return out_octets_encrypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_pkts_untagged != nullptr)
    {
        children["in-pkts-untagged"] = in_pkts_untagged;
    }

    if(in_pkts_no_tag != nullptr)
    {
        children["in-pkts-no-tag"] = in_pkts_no_tag;
    }

    if(in_pkts_bad_tag != nullptr)
    {
        children["in-pkts-bad-tag"] = in_pkts_bad_tag;
    }

    if(in_pkts_unknown_sci != nullptr)
    {
        children["in-pkts-unknown-sci"] = in_pkts_unknown_sci;
    }

    if(in_pkts_no_sci != nullptr)
    {
        children["in-pkts-no-sci"] = in_pkts_no_sci;
    }

    if(in_pkts_overrun != nullptr)
    {
        children["in-pkts-overrun"] = in_pkts_overrun;
    }

    if(in_octets_validated != nullptr)
    {
        children["in-octets-validated"] = in_octets_validated;
    }

    if(in_octets_decrypted != nullptr)
    {
        children["in-octets-decrypted"] = in_octets_decrypted;
    }

    if(out_pkts_untagged != nullptr)
    {
        children["out-pkts-untagged"] = out_pkts_untagged;
    }

    if(out_pkts_too_long != nullptr)
    {
        children["out-pkts-too-long"] = out_pkts_too_long;
    }

    if(out_octets_protected != nullptr)
    {
        children["out-octets-protected"] = out_octets_protected;
    }

    if(out_octets_encrypted != nullptr)
    {
        children["out-octets-encrypted"] = out_octets_encrypted;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-untagged" || name == "in-pkts-no-tag" || name == "in-pkts-bad-tag" || name == "in-pkts-unknown-sci" || name == "in-pkts-no-sci" || name == "in-pkts-overrun" || name == "in-octets-validated" || name == "in-octets-decrypted" || name == "out-pkts-untagged" || name == "out-pkts-too-long" || name == "out-octets-protected" || name == "out-octets-encrypted" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support" || name == "sample-count")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::InPktsUntagged()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::~InPktsUntagged()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::InPktsNoTag()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-tag"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::~InPktsNoTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::InPktsBadTag()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-bad-tag"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::~InPktsBadTag()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-bad-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsBadTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::InPktsUnknownSci()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unknown-sci"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::~InPktsUnknownSci()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unknown-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsUnknownSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::InPktsNoSci()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-no-sci"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::~InPktsNoSci()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-no-sci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsNoSci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::InPktsOverrun()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-overrun"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::~InPktsOverrun()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-overrun";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InPktsOverrun::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::OutPktsUntagged()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-untagged"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::~OutPktsUntagged()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-untagged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsUntagged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::OutPktsTooLong()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-pkts-too-long"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::~OutPktsTooLong()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-pkts-too-long";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutPktsTooLong::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::OutOctetsProtected()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-protected"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::~OutOctetsProtected()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-protected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsProtected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::OutOctetsEncrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "out-octets-encrypted"; yang_parent_name = "macsec-second30secyif"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::~OutOctetsEncrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-octets-encrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs::MacsecSecond30Secyif::OutOctetsEncrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrxes()
{

    yang_name = "macsec-second30secyrxes"; yang_parent_name = "macsec-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::~MacsecSecond30Secyrxes()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::has_data() const
{
    for (std::size_t index=0; index<macsec_second30secyrx.size(); index++)
    {
        if(macsec_second30secyrx[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30secyrx.size(); index++)
    {
        if(macsec_second30secyrx[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrxes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30secyrx")
    {
        for(auto const & c : macsec_second30secyrx)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx>();
        c->parent = this;
        macsec_second30secyrx.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30secyrx)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30secyrx")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::MacsecSecond30Secyrx()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"},
    sample_count{YType::uint64, "sample-count"}
    	,
    in_pkts_unchecked(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked>())
	,in_pkts_delayed(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed>())
	,in_pkts_late(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate>())
	,in_pkts_ok(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk>())
	,in_pkts_invalid(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid>())
	,in_pkts_not_valid(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid>())
	,in_pkts_not_using_sa(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa>())
	,in_pkts_unused_sa(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa>())
	,in_pkts_untagged_hit(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit>())
	,in_octets_validated(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated>())
	,in_octets_decrypted(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted>())
{
    in_pkts_unchecked->parent = this;
    in_pkts_delayed->parent = this;
    in_pkts_late->parent = this;
    in_pkts_ok->parent = this;
    in_pkts_invalid->parent = this;
    in_pkts_not_valid->parent = this;
    in_pkts_not_using_sa->parent = this;
    in_pkts_unused_sa->parent = this;
    in_pkts_untagged_hit->parent = this;
    in_octets_validated->parent = this;
    in_octets_decrypted->parent = this;

    yang_name = "macsec-second30secyrx"; yang_parent_name = "macsec-second30secyrxes"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::~MacsecSecond30Secyrx()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| sample_count.is_set
	|| (in_pkts_unchecked !=  nullptr && in_pkts_unchecked->has_data())
	|| (in_pkts_delayed !=  nullptr && in_pkts_delayed->has_data())
	|| (in_pkts_late !=  nullptr && in_pkts_late->has_data())
	|| (in_pkts_ok !=  nullptr && in_pkts_ok->has_data())
	|| (in_pkts_invalid !=  nullptr && in_pkts_invalid->has_data())
	|| (in_pkts_not_valid !=  nullptr && in_pkts_not_valid->has_data())
	|| (in_pkts_not_using_sa !=  nullptr && in_pkts_not_using_sa->has_data())
	|| (in_pkts_unused_sa !=  nullptr && in_pkts_unused_sa->has_data())
	|| (in_pkts_untagged_hit !=  nullptr && in_pkts_untagged_hit->has_data())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_data())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| ydk::is_set(sample_count.yfilter)
	|| (in_pkts_unchecked !=  nullptr && in_pkts_unchecked->has_operation())
	|| (in_pkts_delayed !=  nullptr && in_pkts_delayed->has_operation())
	|| (in_pkts_late !=  nullptr && in_pkts_late->has_operation())
	|| (in_pkts_ok !=  nullptr && in_pkts_ok->has_operation())
	|| (in_pkts_invalid !=  nullptr && in_pkts_invalid->has_operation())
	|| (in_pkts_not_valid !=  nullptr && in_pkts_not_valid->has_operation())
	|| (in_pkts_not_using_sa !=  nullptr && in_pkts_not_using_sa->has_operation())
	|| (in_pkts_unused_sa !=  nullptr && in_pkts_unused_sa->has_operation())
	|| (in_pkts_untagged_hit !=  nullptr && in_pkts_untagged_hit->has_operation())
	|| (in_octets_validated !=  nullptr && in_octets_validated->has_operation())
	|| (in_octets_decrypted !=  nullptr && in_octets_decrypted->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30secyrx" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());
    if (sample_count.is_set || is_set(sample_count.yfilter)) leaf_name_data.push_back(sample_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-pkts-unchecked")
    {
        if(in_pkts_unchecked == nullptr)
        {
            in_pkts_unchecked = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked>();
        }
        return in_pkts_unchecked;
    }

    if(child_yang_name == "in-pkts-delayed")
    {
        if(in_pkts_delayed == nullptr)
        {
            in_pkts_delayed = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed>();
        }
        return in_pkts_delayed;
    }

    if(child_yang_name == "in-pkts-late")
    {
        if(in_pkts_late == nullptr)
        {
            in_pkts_late = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate>();
        }
        return in_pkts_late;
    }

    if(child_yang_name == "in-pkts-ok")
    {
        if(in_pkts_ok == nullptr)
        {
            in_pkts_ok = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk>();
        }
        return in_pkts_ok;
    }

    if(child_yang_name == "in-pkts-invalid")
    {
        if(in_pkts_invalid == nullptr)
        {
            in_pkts_invalid = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid>();
        }
        return in_pkts_invalid;
    }

    if(child_yang_name == "in-pkts-not-valid")
    {
        if(in_pkts_not_valid == nullptr)
        {
            in_pkts_not_valid = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid>();
        }
        return in_pkts_not_valid;
    }

    if(child_yang_name == "in-pkts-not-using-sa")
    {
        if(in_pkts_not_using_sa == nullptr)
        {
            in_pkts_not_using_sa = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa>();
        }
        return in_pkts_not_using_sa;
    }

    if(child_yang_name == "in-pkts-unused-sa")
    {
        if(in_pkts_unused_sa == nullptr)
        {
            in_pkts_unused_sa = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa>();
        }
        return in_pkts_unused_sa;
    }

    if(child_yang_name == "in-pkts-untagged-hit")
    {
        if(in_pkts_untagged_hit == nullptr)
        {
            in_pkts_untagged_hit = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit>();
        }
        return in_pkts_untagged_hit;
    }

    if(child_yang_name == "in-octets-validated")
    {
        if(in_octets_validated == nullptr)
        {
            in_octets_validated = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated>();
        }
        return in_octets_validated;
    }

    if(child_yang_name == "in-octets-decrypted")
    {
        if(in_octets_decrypted == nullptr)
        {
            in_octets_decrypted = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted>();
        }
        return in_octets_decrypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_pkts_unchecked != nullptr)
    {
        children["in-pkts-unchecked"] = in_pkts_unchecked;
    }

    if(in_pkts_delayed != nullptr)
    {
        children["in-pkts-delayed"] = in_pkts_delayed;
    }

    if(in_pkts_late != nullptr)
    {
        children["in-pkts-late"] = in_pkts_late;
    }

    if(in_pkts_ok != nullptr)
    {
        children["in-pkts-ok"] = in_pkts_ok;
    }

    if(in_pkts_invalid != nullptr)
    {
        children["in-pkts-invalid"] = in_pkts_invalid;
    }

    if(in_pkts_not_valid != nullptr)
    {
        children["in-pkts-not-valid"] = in_pkts_not_valid;
    }

    if(in_pkts_not_using_sa != nullptr)
    {
        children["in-pkts-not-using-sa"] = in_pkts_not_using_sa;
    }

    if(in_pkts_unused_sa != nullptr)
    {
        children["in-pkts-unused-sa"] = in_pkts_unused_sa;
    }

    if(in_pkts_untagged_hit != nullptr)
    {
        children["in-pkts-untagged-hit"] = in_pkts_untagged_hit;
    }

    if(in_octets_validated != nullptr)
    {
        children["in-octets-validated"] = in_octets_validated;
    }

    if(in_octets_decrypted != nullptr)
    {
        children["in-octets-decrypted"] = in_octets_decrypted;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sample-count")
    {
        sample_count = value;
        sample_count.value_namespace = name_space;
        sample_count.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
    if(value_path == "sample-count")
    {
        sample_count.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-pkts-unchecked" || name == "in-pkts-delayed" || name == "in-pkts-late" || name == "in-pkts-ok" || name == "in-pkts-invalid" || name == "in-pkts-not-valid" || name == "in-pkts-not-using-sa" || name == "in-pkts-unused-sa" || name == "in-pkts-untagged-hit" || name == "in-octets-validated" || name == "in-octets-decrypted" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear15-min-time" || name == "last-clear30-sec-time" || name == "last-clear24-hr-time" || name == "sec30-support" || name == "sample-count")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::InPktsUnchecked()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unchecked"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::~InPktsUnchecked()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unchecked";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnchecked::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::InPktsDelayed()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-delayed"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::~InPktsDelayed()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-delayed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsDelayed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::InPktsLate()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-late"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::~InPktsLate()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-late";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsLate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::InPktsOk()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-ok"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::~InPktsOk()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-ok";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsOk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::InPktsInvalid()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-invalid"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::~InPktsInvalid()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-invalid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsInvalid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::InPktsNotValid()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-valid"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::~InPktsNotValid()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-valid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotValid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::InPktsNotUsingSa()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-not-using-sa"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::~InPktsNotUsingSa()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-not-using-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsNotUsingSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::InPktsUnusedSa()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-unused-sa"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::~InPktsUnusedSa()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-unused-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUnusedSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::InPktsUntaggedHit()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-pkts-untagged-hit"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::~InPktsUntaggedHit()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-pkts-untagged-hit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InPktsUntaggedHit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::InOctetsValidated()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-validated"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::~InOctetsValidated()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-validated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsValidated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::InOctetsDecrypted()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "in-octets-decrypted"; yang_parent_name = "macsec-second30secyrx"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::~InOctetsDecrypted()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-octets-decrypted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes::MacsecSecond30Secyrx::InOctetsDecrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30EtherS()
{

    yang_name = "macsec-second30-ether-s"; yang_parent_name = "macsec-second30"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::~MacsecSecond30EtherS()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::has_data() const
{
    for (std::size_t index=0; index<macsec_second30_ether.size(); index++)
    {
        if(macsec_second30_ether[index]->has_data())
            return true;
    }
    return false;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::has_operation() const
{
    for (std::size_t index=0; index<macsec_second30_ether.size(); index++)
    {
        if(macsec_second30_ether[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30-ether-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-second30-ether")
    {
        for(auto const & c : macsec_second30_ether)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether>();
        c->parent = this;
        macsec_second30_ether.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : macsec_second30_ether)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-second30-ether")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::MacsecSecond30Ether()
    :
    number{YType::int32, "number"},
    index_{YType::uint32, "index"},
    valid{YType::boolean, "valid"},
    timestamp{YType::str, "timestamp"},
    last_clear_time{YType::str, "last-clear-time"},
    last_clear30_sec_time{YType::str, "last-clear30-sec-time"},
    last_clear15_min_time{YType::str, "last-clear15-min-time"},
    last_clear24_hr_time{YType::str, "last-clear24-hr-time"},
    sec30_support{YType::boolean, "sec30-support"}
    	,
    rx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt>())
	,stat_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt>())
	,octet_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat>())
	,oversize_pkt_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat>())
	,fcs_errors_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat>())
	,long_frames_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat>())
	,jabber_stat(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat>())
	,ether64_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets>())
	,ether65127_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet>())
	,ether128255_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet>())
	,ether256511_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet>())
	,ether5121023_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet>())
	,ether10241518_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet>())
	,in_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt>())
	,in_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt>())
	,in_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt>())
	,out_ucast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt>())
	,out_bcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt>())
	,out_mcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt>())
	,tx_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt>())
	,if_in_errors(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors>())
	,if_in_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets>())
	,ether_stat_multicast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt>())
	,ether_stat_broadcast_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt>())
	,ether_stat_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt>())
	,out_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets>())
	,in_pause_frame(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame>())
	,in_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes>())
	,in8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames>())
	,in_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets>())
	,in_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts>())
	,in_drop_overrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun>())
	,in_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort>())
	,in_drop_invalid_vlan(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan>())
	,in_drop_invalid_dmac(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac>())
	,in_drop_invalid_encap(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap>())
	,in_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther>())
	,in_mib_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant>())
	,in_mib_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber>())
	,in_mibcrc(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc>())
	,in_error_collisions(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions>())
	,in_error_symbol(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol>())
	,out_good_bytes(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes>())
	,out8021q_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames>())
	,out_pause_frames(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames>())
	,out_pkts1519_max_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets>())
	,out_good_pkts(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts>())
	,out_drop_underrun(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun>())
	,out_drop_abort(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort>())
	,out_drop_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther>())
	,out_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther>())
	,in_error_giant(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant>())
	,in_error_runt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt>())
	,in_error_jabbers(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers>())
	,in_error_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments>())
	,in_error_other(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther>())
	,in_pkt64_octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet>())
	,in_pkts65_to127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets>())
	,in_pkts128_to255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets>())
	,in_pkts256_to511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets>())
	,in_pkts512_to1023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets>())
	,in_pkts1024_to1518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets>())
	,outpkt64octet(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet>())
	,out_pkts65127_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets>())
	,out_pkts128255_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets>())
	,out_pkts256511_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets>())
	,out_pkts5121023_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets>())
	,out_pkts10241518_octets(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets>())
	,rx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil>())
	,tx_util(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil>())
	,tx_undersized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt>())
	,tx_oversized_pkt(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt>())
	,tx_fragments(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments>())
	,tx_jabber(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber>())
	,tx_bad_fcs(std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs>())
{
    rx_pkt->parent = this;
    stat_pkt->parent = this;
    octet_stat->parent = this;
    oversize_pkt_stat->parent = this;
    fcs_errors_stat->parent = this;
    long_frames_stat->parent = this;
    jabber_stat->parent = this;
    ether64_octets->parent = this;
    ether65127_octet->parent = this;
    ether128255_octet->parent = this;
    ether256511_octet->parent = this;
    ether5121023_octet->parent = this;
    ether10241518_octet->parent = this;
    in_ucast_pkt->parent = this;
    in_mcast_pkt->parent = this;
    in_bcast_pkt->parent = this;
    out_ucast_pkt->parent = this;
    out_bcast_pkt->parent = this;
    out_mcast_pkt->parent = this;
    tx_pkt->parent = this;
    if_in_errors->parent = this;
    if_in_octets->parent = this;
    ether_stat_multicast_pkt->parent = this;
    ether_stat_broadcast_pkt->parent = this;
    ether_stat_undersized_pkt->parent = this;
    out_octets->parent = this;
    in_pause_frame->parent = this;
    in_good_bytes->parent = this;
    in8021q_frames->parent = this;
    in_pkts1519_max_octets->parent = this;
    in_good_pkts->parent = this;
    in_drop_overrun->parent = this;
    in_drop_abort->parent = this;
    in_drop_invalid_vlan->parent = this;
    in_drop_invalid_dmac->parent = this;
    in_drop_invalid_encap->parent = this;
    in_drop_other->parent = this;
    in_mib_giant->parent = this;
    in_mib_jabber->parent = this;
    in_mibcrc->parent = this;
    in_error_collisions->parent = this;
    in_error_symbol->parent = this;
    out_good_bytes->parent = this;
    out8021q_frames->parent = this;
    out_pause_frames->parent = this;
    out_pkts1519_max_octets->parent = this;
    out_good_pkts->parent = this;
    out_drop_underrun->parent = this;
    out_drop_abort->parent = this;
    out_drop_other->parent = this;
    out_error_other->parent = this;
    in_error_giant->parent = this;
    in_error_runt->parent = this;
    in_error_jabbers->parent = this;
    in_error_fragments->parent = this;
    in_error_other->parent = this;
    in_pkt64_octet->parent = this;
    in_pkts65_to127_octets->parent = this;
    in_pkts128_to255_octets->parent = this;
    in_pkts256_to511_octets->parent = this;
    in_pkts512_to1023_octets->parent = this;
    in_pkts1024_to1518_octets->parent = this;
    outpkt64octet->parent = this;
    out_pkts65127_octets->parent = this;
    out_pkts128255_octets->parent = this;
    out_pkts256511_octets->parent = this;
    out_pkts5121023_octets->parent = this;
    out_pkts10241518_octets->parent = this;
    rx_util->parent = this;
    tx_util->parent = this;
    tx_undersized_pkt->parent = this;
    tx_oversized_pkt->parent = this;
    tx_fragments->parent = this;
    tx_jabber->parent = this;
    tx_bad_fcs->parent = this;

    yang_name = "macsec-second30-ether"; yang_parent_name = "macsec-second30-ether-s"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::~MacsecSecond30Ether()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::has_data() const
{
    return number.is_set
	|| index_.is_set
	|| valid.is_set
	|| timestamp.is_set
	|| last_clear_time.is_set
	|| last_clear30_sec_time.is_set
	|| last_clear15_min_time.is_set
	|| last_clear24_hr_time.is_set
	|| sec30_support.is_set
	|| (rx_pkt !=  nullptr && rx_pkt->has_data())
	|| (stat_pkt !=  nullptr && stat_pkt->has_data())
	|| (octet_stat !=  nullptr && octet_stat->has_data())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_data())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_data())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_data())
	|| (jabber_stat !=  nullptr && jabber_stat->has_data())
	|| (ether64_octets !=  nullptr && ether64_octets->has_data())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_data())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_data())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_data())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_data())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_data())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_data())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_data())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_data())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_data())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_data())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_data())
	|| (tx_pkt !=  nullptr && tx_pkt->has_data())
	|| (if_in_errors !=  nullptr && if_in_errors->has_data())
	|| (if_in_octets !=  nullptr && if_in_octets->has_data())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_data())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_data())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_data())
	|| (out_octets !=  nullptr && out_octets->has_data())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_data())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_data())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_data())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_data())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_data())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_data())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_data())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_data())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_data())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_data())
	|| (in_drop_other !=  nullptr && in_drop_other->has_data())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_data())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_data())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_data())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_data())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_data())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_data())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_data())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_data())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_data())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_data())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_data())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_data())
	|| (out_drop_other !=  nullptr && out_drop_other->has_data())
	|| (out_error_other !=  nullptr && out_error_other->has_data())
	|| (in_error_giant !=  nullptr && in_error_giant->has_data())
	|| (in_error_runt !=  nullptr && in_error_runt->has_data())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_data())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_data())
	|| (in_error_other !=  nullptr && in_error_other->has_data())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_data())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_data())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_data())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_data())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_data())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_data())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_data())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_data())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_data())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_data())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_data())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_data())
	|| (rx_util !=  nullptr && rx_util->has_data())
	|| (tx_util !=  nullptr && tx_util->has_data())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_data())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_data())
	|| (tx_fragments !=  nullptr && tx_fragments->has_data())
	|| (tx_jabber !=  nullptr && tx_jabber->has_data())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_data());
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(timestamp.yfilter)
	|| ydk::is_set(last_clear_time.yfilter)
	|| ydk::is_set(last_clear30_sec_time.yfilter)
	|| ydk::is_set(last_clear15_min_time.yfilter)
	|| ydk::is_set(last_clear24_hr_time.yfilter)
	|| ydk::is_set(sec30_support.yfilter)
	|| (rx_pkt !=  nullptr && rx_pkt->has_operation())
	|| (stat_pkt !=  nullptr && stat_pkt->has_operation())
	|| (octet_stat !=  nullptr && octet_stat->has_operation())
	|| (oversize_pkt_stat !=  nullptr && oversize_pkt_stat->has_operation())
	|| (fcs_errors_stat !=  nullptr && fcs_errors_stat->has_operation())
	|| (long_frames_stat !=  nullptr && long_frames_stat->has_operation())
	|| (jabber_stat !=  nullptr && jabber_stat->has_operation())
	|| (ether64_octets !=  nullptr && ether64_octets->has_operation())
	|| (ether65127_octet !=  nullptr && ether65127_octet->has_operation())
	|| (ether128255_octet !=  nullptr && ether128255_octet->has_operation())
	|| (ether256511_octet !=  nullptr && ether256511_octet->has_operation())
	|| (ether5121023_octet !=  nullptr && ether5121023_octet->has_operation())
	|| (ether10241518_octet !=  nullptr && ether10241518_octet->has_operation())
	|| (in_ucast_pkt !=  nullptr && in_ucast_pkt->has_operation())
	|| (in_mcast_pkt !=  nullptr && in_mcast_pkt->has_operation())
	|| (in_bcast_pkt !=  nullptr && in_bcast_pkt->has_operation())
	|| (out_ucast_pkt !=  nullptr && out_ucast_pkt->has_operation())
	|| (out_bcast_pkt !=  nullptr && out_bcast_pkt->has_operation())
	|| (out_mcast_pkt !=  nullptr && out_mcast_pkt->has_operation())
	|| (tx_pkt !=  nullptr && tx_pkt->has_operation())
	|| (if_in_errors !=  nullptr && if_in_errors->has_operation())
	|| (if_in_octets !=  nullptr && if_in_octets->has_operation())
	|| (ether_stat_multicast_pkt !=  nullptr && ether_stat_multicast_pkt->has_operation())
	|| (ether_stat_broadcast_pkt !=  nullptr && ether_stat_broadcast_pkt->has_operation())
	|| (ether_stat_undersized_pkt !=  nullptr && ether_stat_undersized_pkt->has_operation())
	|| (out_octets !=  nullptr && out_octets->has_operation())
	|| (in_pause_frame !=  nullptr && in_pause_frame->has_operation())
	|| (in_good_bytes !=  nullptr && in_good_bytes->has_operation())
	|| (in8021q_frames !=  nullptr && in8021q_frames->has_operation())
	|| (in_pkts1519_max_octets !=  nullptr && in_pkts1519_max_octets->has_operation())
	|| (in_good_pkts !=  nullptr && in_good_pkts->has_operation())
	|| (in_drop_overrun !=  nullptr && in_drop_overrun->has_operation())
	|| (in_drop_abort !=  nullptr && in_drop_abort->has_operation())
	|| (in_drop_invalid_vlan !=  nullptr && in_drop_invalid_vlan->has_operation())
	|| (in_drop_invalid_dmac !=  nullptr && in_drop_invalid_dmac->has_operation())
	|| (in_drop_invalid_encap !=  nullptr && in_drop_invalid_encap->has_operation())
	|| (in_drop_other !=  nullptr && in_drop_other->has_operation())
	|| (in_mib_giant !=  nullptr && in_mib_giant->has_operation())
	|| (in_mib_jabber !=  nullptr && in_mib_jabber->has_operation())
	|| (in_mibcrc !=  nullptr && in_mibcrc->has_operation())
	|| (in_error_collisions !=  nullptr && in_error_collisions->has_operation())
	|| (in_error_symbol !=  nullptr && in_error_symbol->has_operation())
	|| (out_good_bytes !=  nullptr && out_good_bytes->has_operation())
	|| (out8021q_frames !=  nullptr && out8021q_frames->has_operation())
	|| (out_pause_frames !=  nullptr && out_pause_frames->has_operation())
	|| (out_pkts1519_max_octets !=  nullptr && out_pkts1519_max_octets->has_operation())
	|| (out_good_pkts !=  nullptr && out_good_pkts->has_operation())
	|| (out_drop_underrun !=  nullptr && out_drop_underrun->has_operation())
	|| (out_drop_abort !=  nullptr && out_drop_abort->has_operation())
	|| (out_drop_other !=  nullptr && out_drop_other->has_operation())
	|| (out_error_other !=  nullptr && out_error_other->has_operation())
	|| (in_error_giant !=  nullptr && in_error_giant->has_operation())
	|| (in_error_runt !=  nullptr && in_error_runt->has_operation())
	|| (in_error_jabbers !=  nullptr && in_error_jabbers->has_operation())
	|| (in_error_fragments !=  nullptr && in_error_fragments->has_operation())
	|| (in_error_other !=  nullptr && in_error_other->has_operation())
	|| (in_pkt64_octet !=  nullptr && in_pkt64_octet->has_operation())
	|| (in_pkts65_to127_octets !=  nullptr && in_pkts65_to127_octets->has_operation())
	|| (in_pkts128_to255_octets !=  nullptr && in_pkts128_to255_octets->has_operation())
	|| (in_pkts256_to511_octets !=  nullptr && in_pkts256_to511_octets->has_operation())
	|| (in_pkts512_to1023_octets !=  nullptr && in_pkts512_to1023_octets->has_operation())
	|| (in_pkts1024_to1518_octets !=  nullptr && in_pkts1024_to1518_octets->has_operation())
	|| (outpkt64octet !=  nullptr && outpkt64octet->has_operation())
	|| (out_pkts65127_octets !=  nullptr && out_pkts65127_octets->has_operation())
	|| (out_pkts128255_octets !=  nullptr && out_pkts128255_octets->has_operation())
	|| (out_pkts256511_octets !=  nullptr && out_pkts256511_octets->has_operation())
	|| (out_pkts5121023_octets !=  nullptr && out_pkts5121023_octets->has_operation())
	|| (out_pkts10241518_octets !=  nullptr && out_pkts10241518_octets->has_operation())
	|| (rx_util !=  nullptr && rx_util->has_operation())
	|| (tx_util !=  nullptr && tx_util->has_operation())
	|| (tx_undersized_pkt !=  nullptr && tx_undersized_pkt->has_operation())
	|| (tx_oversized_pkt !=  nullptr && tx_oversized_pkt->has_operation())
	|| (tx_fragments !=  nullptr && tx_fragments->has_operation())
	|| (tx_jabber !=  nullptr && tx_jabber->has_operation())
	|| (tx_bad_fcs !=  nullptr && tx_bad_fcs->has_operation());
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-second30-ether" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.yfilter)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (last_clear_time.is_set || is_set(last_clear_time.yfilter)) leaf_name_data.push_back(last_clear_time.get_name_leafdata());
    if (last_clear30_sec_time.is_set || is_set(last_clear30_sec_time.yfilter)) leaf_name_data.push_back(last_clear30_sec_time.get_name_leafdata());
    if (last_clear15_min_time.is_set || is_set(last_clear15_min_time.yfilter)) leaf_name_data.push_back(last_clear15_min_time.get_name_leafdata());
    if (last_clear24_hr_time.is_set || is_set(last_clear24_hr_time.yfilter)) leaf_name_data.push_back(last_clear24_hr_time.get_name_leafdata());
    if (sec30_support.is_set || is_set(sec30_support.yfilter)) leaf_name_data.push_back(sec30_support.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rx-pkt")
    {
        if(rx_pkt == nullptr)
        {
            rx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt>();
        }
        return rx_pkt;
    }

    if(child_yang_name == "stat-pkt")
    {
        if(stat_pkt == nullptr)
        {
            stat_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt>();
        }
        return stat_pkt;
    }

    if(child_yang_name == "octet-stat")
    {
        if(octet_stat == nullptr)
        {
            octet_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat>();
        }
        return octet_stat;
    }

    if(child_yang_name == "oversize-pkt-stat")
    {
        if(oversize_pkt_stat == nullptr)
        {
            oversize_pkt_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat>();
        }
        return oversize_pkt_stat;
    }

    if(child_yang_name == "fcs-errors-stat")
    {
        if(fcs_errors_stat == nullptr)
        {
            fcs_errors_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat>();
        }
        return fcs_errors_stat;
    }

    if(child_yang_name == "long-frames-stat")
    {
        if(long_frames_stat == nullptr)
        {
            long_frames_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat>();
        }
        return long_frames_stat;
    }

    if(child_yang_name == "jabber-stat")
    {
        if(jabber_stat == nullptr)
        {
            jabber_stat = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat>();
        }
        return jabber_stat;
    }

    if(child_yang_name == "ether64-octets")
    {
        if(ether64_octets == nullptr)
        {
            ether64_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets>();
        }
        return ether64_octets;
    }

    if(child_yang_name == "ether65127-octet")
    {
        if(ether65127_octet == nullptr)
        {
            ether65127_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet>();
        }
        return ether65127_octet;
    }

    if(child_yang_name == "ether128255-octet")
    {
        if(ether128255_octet == nullptr)
        {
            ether128255_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet>();
        }
        return ether128255_octet;
    }

    if(child_yang_name == "ether256511-octet")
    {
        if(ether256511_octet == nullptr)
        {
            ether256511_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet>();
        }
        return ether256511_octet;
    }

    if(child_yang_name == "ether5121023-octet")
    {
        if(ether5121023_octet == nullptr)
        {
            ether5121023_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet>();
        }
        return ether5121023_octet;
    }

    if(child_yang_name == "ether10241518-octet")
    {
        if(ether10241518_octet == nullptr)
        {
            ether10241518_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet>();
        }
        return ether10241518_octet;
    }

    if(child_yang_name == "in-ucast-pkt")
    {
        if(in_ucast_pkt == nullptr)
        {
            in_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt>();
        }
        return in_ucast_pkt;
    }

    if(child_yang_name == "in-mcast-pkt")
    {
        if(in_mcast_pkt == nullptr)
        {
            in_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt>();
        }
        return in_mcast_pkt;
    }

    if(child_yang_name == "in-bcast-pkt")
    {
        if(in_bcast_pkt == nullptr)
        {
            in_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt>();
        }
        return in_bcast_pkt;
    }

    if(child_yang_name == "out-ucast-pkt")
    {
        if(out_ucast_pkt == nullptr)
        {
            out_ucast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt>();
        }
        return out_ucast_pkt;
    }

    if(child_yang_name == "out-bcast-pkt")
    {
        if(out_bcast_pkt == nullptr)
        {
            out_bcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt>();
        }
        return out_bcast_pkt;
    }

    if(child_yang_name == "out-mcast-pkt")
    {
        if(out_mcast_pkt == nullptr)
        {
            out_mcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt>();
        }
        return out_mcast_pkt;
    }

    if(child_yang_name == "tx-pkt")
    {
        if(tx_pkt == nullptr)
        {
            tx_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt>();
        }
        return tx_pkt;
    }

    if(child_yang_name == "if-in-errors")
    {
        if(if_in_errors == nullptr)
        {
            if_in_errors = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors>();
        }
        return if_in_errors;
    }

    if(child_yang_name == "if-in-octets")
    {
        if(if_in_octets == nullptr)
        {
            if_in_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets>();
        }
        return if_in_octets;
    }

    if(child_yang_name == "ether-stat-multicast-pkt")
    {
        if(ether_stat_multicast_pkt == nullptr)
        {
            ether_stat_multicast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt>();
        }
        return ether_stat_multicast_pkt;
    }

    if(child_yang_name == "ether-stat-broadcast-pkt")
    {
        if(ether_stat_broadcast_pkt == nullptr)
        {
            ether_stat_broadcast_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt>();
        }
        return ether_stat_broadcast_pkt;
    }

    if(child_yang_name == "ether-stat-undersized-pkt")
    {
        if(ether_stat_undersized_pkt == nullptr)
        {
            ether_stat_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt>();
        }
        return ether_stat_undersized_pkt;
    }

    if(child_yang_name == "out-octets")
    {
        if(out_octets == nullptr)
        {
            out_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets>();
        }
        return out_octets;
    }

    if(child_yang_name == "in-pause-frame")
    {
        if(in_pause_frame == nullptr)
        {
            in_pause_frame = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame>();
        }
        return in_pause_frame;
    }

    if(child_yang_name == "in-good-bytes")
    {
        if(in_good_bytes == nullptr)
        {
            in_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes>();
        }
        return in_good_bytes;
    }

    if(child_yang_name == "in8021q-frames")
    {
        if(in8021q_frames == nullptr)
        {
            in8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames>();
        }
        return in8021q_frames;
    }

    if(child_yang_name == "in-pkts1519-max-octets")
    {
        if(in_pkts1519_max_octets == nullptr)
        {
            in_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets>();
        }
        return in_pkts1519_max_octets;
    }

    if(child_yang_name == "in-good-pkts")
    {
        if(in_good_pkts == nullptr)
        {
            in_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts>();
        }
        return in_good_pkts;
    }

    if(child_yang_name == "in-drop-overrun")
    {
        if(in_drop_overrun == nullptr)
        {
            in_drop_overrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun>();
        }
        return in_drop_overrun;
    }

    if(child_yang_name == "in-drop-abort")
    {
        if(in_drop_abort == nullptr)
        {
            in_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort>();
        }
        return in_drop_abort;
    }

    if(child_yang_name == "in-drop-invalid-vlan")
    {
        if(in_drop_invalid_vlan == nullptr)
        {
            in_drop_invalid_vlan = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan>();
        }
        return in_drop_invalid_vlan;
    }

    if(child_yang_name == "in-drop-invalid-dmac")
    {
        if(in_drop_invalid_dmac == nullptr)
        {
            in_drop_invalid_dmac = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac>();
        }
        return in_drop_invalid_dmac;
    }

    if(child_yang_name == "in-drop-invalid-encap")
    {
        if(in_drop_invalid_encap == nullptr)
        {
            in_drop_invalid_encap = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap>();
        }
        return in_drop_invalid_encap;
    }

    if(child_yang_name == "in-drop-other")
    {
        if(in_drop_other == nullptr)
        {
            in_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther>();
        }
        return in_drop_other;
    }

    if(child_yang_name == "in-mib-giant")
    {
        if(in_mib_giant == nullptr)
        {
            in_mib_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant>();
        }
        return in_mib_giant;
    }

    if(child_yang_name == "in-mib-jabber")
    {
        if(in_mib_jabber == nullptr)
        {
            in_mib_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber>();
        }
        return in_mib_jabber;
    }

    if(child_yang_name == "in-mibcrc")
    {
        if(in_mibcrc == nullptr)
        {
            in_mibcrc = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc>();
        }
        return in_mibcrc;
    }

    if(child_yang_name == "in-error-collisions")
    {
        if(in_error_collisions == nullptr)
        {
            in_error_collisions = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions>();
        }
        return in_error_collisions;
    }

    if(child_yang_name == "in-error-symbol")
    {
        if(in_error_symbol == nullptr)
        {
            in_error_symbol = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol>();
        }
        return in_error_symbol;
    }

    if(child_yang_name == "out-good-bytes")
    {
        if(out_good_bytes == nullptr)
        {
            out_good_bytes = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes>();
        }
        return out_good_bytes;
    }

    if(child_yang_name == "out8021q-frames")
    {
        if(out8021q_frames == nullptr)
        {
            out8021q_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames>();
        }
        return out8021q_frames;
    }

    if(child_yang_name == "out-pause-frames")
    {
        if(out_pause_frames == nullptr)
        {
            out_pause_frames = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames>();
        }
        return out_pause_frames;
    }

    if(child_yang_name == "out-pkts1519-max-octets")
    {
        if(out_pkts1519_max_octets == nullptr)
        {
            out_pkts1519_max_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets>();
        }
        return out_pkts1519_max_octets;
    }

    if(child_yang_name == "out-good-pkts")
    {
        if(out_good_pkts == nullptr)
        {
            out_good_pkts = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts>();
        }
        return out_good_pkts;
    }

    if(child_yang_name == "out-drop-underrun")
    {
        if(out_drop_underrun == nullptr)
        {
            out_drop_underrun = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun>();
        }
        return out_drop_underrun;
    }

    if(child_yang_name == "out-drop-abort")
    {
        if(out_drop_abort == nullptr)
        {
            out_drop_abort = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort>();
        }
        return out_drop_abort;
    }

    if(child_yang_name == "out-drop-other")
    {
        if(out_drop_other == nullptr)
        {
            out_drop_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther>();
        }
        return out_drop_other;
    }

    if(child_yang_name == "out-error-other")
    {
        if(out_error_other == nullptr)
        {
            out_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther>();
        }
        return out_error_other;
    }

    if(child_yang_name == "in-error-giant")
    {
        if(in_error_giant == nullptr)
        {
            in_error_giant = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant>();
        }
        return in_error_giant;
    }

    if(child_yang_name == "in-error-runt")
    {
        if(in_error_runt == nullptr)
        {
            in_error_runt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt>();
        }
        return in_error_runt;
    }

    if(child_yang_name == "in-error-jabbers")
    {
        if(in_error_jabbers == nullptr)
        {
            in_error_jabbers = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers>();
        }
        return in_error_jabbers;
    }

    if(child_yang_name == "in-error-fragments")
    {
        if(in_error_fragments == nullptr)
        {
            in_error_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments>();
        }
        return in_error_fragments;
    }

    if(child_yang_name == "in-error-other")
    {
        if(in_error_other == nullptr)
        {
            in_error_other = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther>();
        }
        return in_error_other;
    }

    if(child_yang_name == "in-pkt64-octet")
    {
        if(in_pkt64_octet == nullptr)
        {
            in_pkt64_octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet>();
        }
        return in_pkt64_octet;
    }

    if(child_yang_name == "in-pkts65-to127-octets")
    {
        if(in_pkts65_to127_octets == nullptr)
        {
            in_pkts65_to127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets>();
        }
        return in_pkts65_to127_octets;
    }

    if(child_yang_name == "in-pkts128-to255-octets")
    {
        if(in_pkts128_to255_octets == nullptr)
        {
            in_pkts128_to255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets>();
        }
        return in_pkts128_to255_octets;
    }

    if(child_yang_name == "in-pkts256-to511-octets")
    {
        if(in_pkts256_to511_octets == nullptr)
        {
            in_pkts256_to511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets>();
        }
        return in_pkts256_to511_octets;
    }

    if(child_yang_name == "in-pkts512-to1023-octets")
    {
        if(in_pkts512_to1023_octets == nullptr)
        {
            in_pkts512_to1023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets>();
        }
        return in_pkts512_to1023_octets;
    }

    if(child_yang_name == "in-pkts1024-to1518-octets")
    {
        if(in_pkts1024_to1518_octets == nullptr)
        {
            in_pkts1024_to1518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets>();
        }
        return in_pkts1024_to1518_octets;
    }

    if(child_yang_name == "outpkt64octet")
    {
        if(outpkt64octet == nullptr)
        {
            outpkt64octet = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet>();
        }
        return outpkt64octet;
    }

    if(child_yang_name == "out-pkts65127-octets")
    {
        if(out_pkts65127_octets == nullptr)
        {
            out_pkts65127_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets>();
        }
        return out_pkts65127_octets;
    }

    if(child_yang_name == "out-pkts128255-octets")
    {
        if(out_pkts128255_octets == nullptr)
        {
            out_pkts128255_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets>();
        }
        return out_pkts128255_octets;
    }

    if(child_yang_name == "out-pkts256511-octets")
    {
        if(out_pkts256511_octets == nullptr)
        {
            out_pkts256511_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets>();
        }
        return out_pkts256511_octets;
    }

    if(child_yang_name == "out-pkts5121023-octets")
    {
        if(out_pkts5121023_octets == nullptr)
        {
            out_pkts5121023_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets>();
        }
        return out_pkts5121023_octets;
    }

    if(child_yang_name == "out-pkts10241518-octets")
    {
        if(out_pkts10241518_octets == nullptr)
        {
            out_pkts10241518_octets = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets>();
        }
        return out_pkts10241518_octets;
    }

    if(child_yang_name == "rx-util")
    {
        if(rx_util == nullptr)
        {
            rx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil>();
        }
        return rx_util;
    }

    if(child_yang_name == "tx-util")
    {
        if(tx_util == nullptr)
        {
            tx_util = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil>();
        }
        return tx_util;
    }

    if(child_yang_name == "tx-undersized-pkt")
    {
        if(tx_undersized_pkt == nullptr)
        {
            tx_undersized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt>();
        }
        return tx_undersized_pkt;
    }

    if(child_yang_name == "tx-oversized-pkt")
    {
        if(tx_oversized_pkt == nullptr)
        {
            tx_oversized_pkt = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt>();
        }
        return tx_oversized_pkt;
    }

    if(child_yang_name == "tx-fragments")
    {
        if(tx_fragments == nullptr)
        {
            tx_fragments = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments>();
        }
        return tx_fragments;
    }

    if(child_yang_name == "tx-jabber")
    {
        if(tx_jabber == nullptr)
        {
            tx_jabber = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber>();
        }
        return tx_jabber;
    }

    if(child_yang_name == "tx-bad-fcs")
    {
        if(tx_bad_fcs == nullptr)
        {
            tx_bad_fcs = std::make_shared<PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs>();
        }
        return tx_bad_fcs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rx_pkt != nullptr)
    {
        children["rx-pkt"] = rx_pkt;
    }

    if(stat_pkt != nullptr)
    {
        children["stat-pkt"] = stat_pkt;
    }

    if(octet_stat != nullptr)
    {
        children["octet-stat"] = octet_stat;
    }

    if(oversize_pkt_stat != nullptr)
    {
        children["oversize-pkt-stat"] = oversize_pkt_stat;
    }

    if(fcs_errors_stat != nullptr)
    {
        children["fcs-errors-stat"] = fcs_errors_stat;
    }

    if(long_frames_stat != nullptr)
    {
        children["long-frames-stat"] = long_frames_stat;
    }

    if(jabber_stat != nullptr)
    {
        children["jabber-stat"] = jabber_stat;
    }

    if(ether64_octets != nullptr)
    {
        children["ether64-octets"] = ether64_octets;
    }

    if(ether65127_octet != nullptr)
    {
        children["ether65127-octet"] = ether65127_octet;
    }

    if(ether128255_octet != nullptr)
    {
        children["ether128255-octet"] = ether128255_octet;
    }

    if(ether256511_octet != nullptr)
    {
        children["ether256511-octet"] = ether256511_octet;
    }

    if(ether5121023_octet != nullptr)
    {
        children["ether5121023-octet"] = ether5121023_octet;
    }

    if(ether10241518_octet != nullptr)
    {
        children["ether10241518-octet"] = ether10241518_octet;
    }

    if(in_ucast_pkt != nullptr)
    {
        children["in-ucast-pkt"] = in_ucast_pkt;
    }

    if(in_mcast_pkt != nullptr)
    {
        children["in-mcast-pkt"] = in_mcast_pkt;
    }

    if(in_bcast_pkt != nullptr)
    {
        children["in-bcast-pkt"] = in_bcast_pkt;
    }

    if(out_ucast_pkt != nullptr)
    {
        children["out-ucast-pkt"] = out_ucast_pkt;
    }

    if(out_bcast_pkt != nullptr)
    {
        children["out-bcast-pkt"] = out_bcast_pkt;
    }

    if(out_mcast_pkt != nullptr)
    {
        children["out-mcast-pkt"] = out_mcast_pkt;
    }

    if(tx_pkt != nullptr)
    {
        children["tx-pkt"] = tx_pkt;
    }

    if(if_in_errors != nullptr)
    {
        children["if-in-errors"] = if_in_errors;
    }

    if(if_in_octets != nullptr)
    {
        children["if-in-octets"] = if_in_octets;
    }

    if(ether_stat_multicast_pkt != nullptr)
    {
        children["ether-stat-multicast-pkt"] = ether_stat_multicast_pkt;
    }

    if(ether_stat_broadcast_pkt != nullptr)
    {
        children["ether-stat-broadcast-pkt"] = ether_stat_broadcast_pkt;
    }

    if(ether_stat_undersized_pkt != nullptr)
    {
        children["ether-stat-undersized-pkt"] = ether_stat_undersized_pkt;
    }

    if(out_octets != nullptr)
    {
        children["out-octets"] = out_octets;
    }

    if(in_pause_frame != nullptr)
    {
        children["in-pause-frame"] = in_pause_frame;
    }

    if(in_good_bytes != nullptr)
    {
        children["in-good-bytes"] = in_good_bytes;
    }

    if(in8021q_frames != nullptr)
    {
        children["in8021q-frames"] = in8021q_frames;
    }

    if(in_pkts1519_max_octets != nullptr)
    {
        children["in-pkts1519-max-octets"] = in_pkts1519_max_octets;
    }

    if(in_good_pkts != nullptr)
    {
        children["in-good-pkts"] = in_good_pkts;
    }

    if(in_drop_overrun != nullptr)
    {
        children["in-drop-overrun"] = in_drop_overrun;
    }

    if(in_drop_abort != nullptr)
    {
        children["in-drop-abort"] = in_drop_abort;
    }

    if(in_drop_invalid_vlan != nullptr)
    {
        children["in-drop-invalid-vlan"] = in_drop_invalid_vlan;
    }

    if(in_drop_invalid_dmac != nullptr)
    {
        children["in-drop-invalid-dmac"] = in_drop_invalid_dmac;
    }

    if(in_drop_invalid_encap != nullptr)
    {
        children["in-drop-invalid-encap"] = in_drop_invalid_encap;
    }

    if(in_drop_other != nullptr)
    {
        children["in-drop-other"] = in_drop_other;
    }

    if(in_mib_giant != nullptr)
    {
        children["in-mib-giant"] = in_mib_giant;
    }

    if(in_mib_jabber != nullptr)
    {
        children["in-mib-jabber"] = in_mib_jabber;
    }

    if(in_mibcrc != nullptr)
    {
        children["in-mibcrc"] = in_mibcrc;
    }

    if(in_error_collisions != nullptr)
    {
        children["in-error-collisions"] = in_error_collisions;
    }

    if(in_error_symbol != nullptr)
    {
        children["in-error-symbol"] = in_error_symbol;
    }

    if(out_good_bytes != nullptr)
    {
        children["out-good-bytes"] = out_good_bytes;
    }

    if(out8021q_frames != nullptr)
    {
        children["out8021q-frames"] = out8021q_frames;
    }

    if(out_pause_frames != nullptr)
    {
        children["out-pause-frames"] = out_pause_frames;
    }

    if(out_pkts1519_max_octets != nullptr)
    {
        children["out-pkts1519-max-octets"] = out_pkts1519_max_octets;
    }

    if(out_good_pkts != nullptr)
    {
        children["out-good-pkts"] = out_good_pkts;
    }

    if(out_drop_underrun != nullptr)
    {
        children["out-drop-underrun"] = out_drop_underrun;
    }

    if(out_drop_abort != nullptr)
    {
        children["out-drop-abort"] = out_drop_abort;
    }

    if(out_drop_other != nullptr)
    {
        children["out-drop-other"] = out_drop_other;
    }

    if(out_error_other != nullptr)
    {
        children["out-error-other"] = out_error_other;
    }

    if(in_error_giant != nullptr)
    {
        children["in-error-giant"] = in_error_giant;
    }

    if(in_error_runt != nullptr)
    {
        children["in-error-runt"] = in_error_runt;
    }

    if(in_error_jabbers != nullptr)
    {
        children["in-error-jabbers"] = in_error_jabbers;
    }

    if(in_error_fragments != nullptr)
    {
        children["in-error-fragments"] = in_error_fragments;
    }

    if(in_error_other != nullptr)
    {
        children["in-error-other"] = in_error_other;
    }

    if(in_pkt64_octet != nullptr)
    {
        children["in-pkt64-octet"] = in_pkt64_octet;
    }

    if(in_pkts65_to127_octets != nullptr)
    {
        children["in-pkts65-to127-octets"] = in_pkts65_to127_octets;
    }

    if(in_pkts128_to255_octets != nullptr)
    {
        children["in-pkts128-to255-octets"] = in_pkts128_to255_octets;
    }

    if(in_pkts256_to511_octets != nullptr)
    {
        children["in-pkts256-to511-octets"] = in_pkts256_to511_octets;
    }

    if(in_pkts512_to1023_octets != nullptr)
    {
        children["in-pkts512-to1023-octets"] = in_pkts512_to1023_octets;
    }

    if(in_pkts1024_to1518_octets != nullptr)
    {
        children["in-pkts1024-to1518-octets"] = in_pkts1024_to1518_octets;
    }

    if(outpkt64octet != nullptr)
    {
        children["outpkt64octet"] = outpkt64octet;
    }

    if(out_pkts65127_octets != nullptr)
    {
        children["out-pkts65127-octets"] = out_pkts65127_octets;
    }

    if(out_pkts128255_octets != nullptr)
    {
        children["out-pkts128255-octets"] = out_pkts128255_octets;
    }

    if(out_pkts256511_octets != nullptr)
    {
        children["out-pkts256511-octets"] = out_pkts256511_octets;
    }

    if(out_pkts5121023_octets != nullptr)
    {
        children["out-pkts5121023-octets"] = out_pkts5121023_octets;
    }

    if(out_pkts10241518_octets != nullptr)
    {
        children["out-pkts10241518-octets"] = out_pkts10241518_octets;
    }

    if(rx_util != nullptr)
    {
        children["rx-util"] = rx_util;
    }

    if(tx_util != nullptr)
    {
        children["tx-util"] = tx_util;
    }

    if(tx_undersized_pkt != nullptr)
    {
        children["tx-undersized-pkt"] = tx_undersized_pkt;
    }

    if(tx_oversized_pkt != nullptr)
    {
        children["tx-oversized-pkt"] = tx_oversized_pkt;
    }

    if(tx_fragments != nullptr)
    {
        children["tx-fragments"] = tx_fragments;
    }

    if(tx_jabber != nullptr)
    {
        children["tx-jabber"] = tx_jabber;
    }

    if(tx_bad_fcs != nullptr)
    {
        children["tx-bad-fcs"] = tx_bad_fcs;
    }

    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
        timestamp.value_namespace = name_space;
        timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time = value;
        last_clear_time.value_namespace = name_space;
        last_clear_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time = value;
        last_clear30_sec_time.value_namespace = name_space;
        last_clear30_sec_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time = value;
        last_clear15_min_time.value_namespace = name_space;
        last_clear15_min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time = value;
        last_clear24_hr_time.value_namespace = name_space;
        last_clear24_hr_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec30-support")
    {
        sec30_support = value;
        sec30_support.value_namespace = name_space;
        sec30_support.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "timestamp")
    {
        timestamp.yfilter = yfilter;
    }
    if(value_path == "last-clear-time")
    {
        last_clear_time.yfilter = yfilter;
    }
    if(value_path == "last-clear30-sec-time")
    {
        last_clear30_sec_time.yfilter = yfilter;
    }
    if(value_path == "last-clear15-min-time")
    {
        last_clear15_min_time.yfilter = yfilter;
    }
    if(value_path == "last-clear24-hr-time")
    {
        last_clear24_hr_time.yfilter = yfilter;
    }
    if(value_path == "sec30-support")
    {
        sec30_support.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rx-pkt" || name == "stat-pkt" || name == "octet-stat" || name == "oversize-pkt-stat" || name == "fcs-errors-stat" || name == "long-frames-stat" || name == "jabber-stat" || name == "ether64-octets" || name == "ether65127-octet" || name == "ether128255-octet" || name == "ether256511-octet" || name == "ether5121023-octet" || name == "ether10241518-octet" || name == "in-ucast-pkt" || name == "in-mcast-pkt" || name == "in-bcast-pkt" || name == "out-ucast-pkt" || name == "out-bcast-pkt" || name == "out-mcast-pkt" || name == "tx-pkt" || name == "if-in-errors" || name == "if-in-octets" || name == "ether-stat-multicast-pkt" || name == "ether-stat-broadcast-pkt" || name == "ether-stat-undersized-pkt" || name == "out-octets" || name == "in-pause-frame" || name == "in-good-bytes" || name == "in8021q-frames" || name == "in-pkts1519-max-octets" || name == "in-good-pkts" || name == "in-drop-overrun" || name == "in-drop-abort" || name == "in-drop-invalid-vlan" || name == "in-drop-invalid-dmac" || name == "in-drop-invalid-encap" || name == "in-drop-other" || name == "in-mib-giant" || name == "in-mib-jabber" || name == "in-mibcrc" || name == "in-error-collisions" || name == "in-error-symbol" || name == "out-good-bytes" || name == "out8021q-frames" || name == "out-pause-frames" || name == "out-pkts1519-max-octets" || name == "out-good-pkts" || name == "out-drop-underrun" || name == "out-drop-abort" || name == "out-drop-other" || name == "out-error-other" || name == "in-error-giant" || name == "in-error-runt" || name == "in-error-jabbers" || name == "in-error-fragments" || name == "in-error-other" || name == "in-pkt64-octet" || name == "in-pkts65-to127-octets" || name == "in-pkts128-to255-octets" || name == "in-pkts256-to511-octets" || name == "in-pkts512-to1023-octets" || name == "in-pkts1024-to1518-octets" || name == "outpkt64octet" || name == "out-pkts65127-octets" || name == "out-pkts128255-octets" || name == "out-pkts256511-octets" || name == "out-pkts5121023-octets" || name == "out-pkts10241518-octets" || name == "rx-util" || name == "tx-util" || name == "tx-undersized-pkt" || name == "tx-oversized-pkt" || name == "tx-fragments" || name == "tx-jabber" || name == "tx-bad-fcs" || name == "number" || name == "index" || name == "valid" || name == "timestamp" || name == "last-clear-time" || name == "last-clear30-sec-time" || name == "last-clear15-min-time" || name == "last-clear24-hr-time" || name == "sec30-support")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::RxPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "rx-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::~RxPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::StatPkt()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "stat-pkt"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::~StatPkt()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stat-pkt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::OctetStat()
    :
    data{YType::uint64, "data"},
    threshold{YType::uint64, "threshold"},
    tca_report{YType::boolean, "tca-report"},
    valid{YType::boolean, "valid"}
{

    yang_name = "octet-stat"; yang_parent_name = "macsec-second30-ether"; is_top_level_class = false; has_list_ancestor = true;
}

PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::~OctetStat()
{
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::has_data() const
{
    return data.is_set
	|| threshold.is_set
	|| tca_report.is_set
	|| valid.is_set;
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(tca_report.yfilter)
	|| ydk::is_set(valid.yfilter);
}

std::string PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "octet-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (tca_report.is_set || is_set(tca_report.yfilter)) leaf_name_data.push_back(tca_report.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tca-report")
    {
        tca_report = value;
        tca_report.value_namespace = name_space;
        tca_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
}

void PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "tca-report")
    {
        tca_report.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
}

bool PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data" || name == "threshold" || name == "tca-report" || name == "valid")
        return true;
    return false;
}

const Enum::YLeaf PmSonetPathWidthEnum::none {0, "none"};
const Enum::YLeaf PmSonetPathWidthEnum::sts1 {1, "sts1"};
const Enum::YLeaf PmSonetPathWidthEnum::sts3c_stm1 {2, "sts3c-stm1"};
const Enum::YLeaf PmSonetPathWidthEnum::sts12c_stm4 {3, "sts12c-stm4"};
const Enum::YLeaf PmSonetPathWidthEnum::sts24c {4, "sts24c"};
const Enum::YLeaf PmSonetPathWidthEnum::sts48c_stm16 {5, "sts48c-stm16"};
const Enum::YLeaf PmSonetPathWidthEnum::sts192c_stm64 {6, "sts192c-stm64"};
const Enum::YLeaf PmSonetPathWidthEnum::sts768c_stm256 {7, "sts768c-stm256"};

const Enum::YLeaf PmPrbsStatusEt::not_applicable {0, "not-applicable"};
const Enum::YLeaf PmPrbsStatusEt::locked {1, "locked"};
const Enum::YLeaf PmPrbsStatusEt::un_locked {2, "un-locked"};

const Enum::YLeaf PmPrbsPatternEt::prbs_none {0, "prbs-none"};
const Enum::YLeaf PmPrbsPatternEt::pn31 {1, "pn31"};
const Enum::YLeaf PmPrbsPatternEt::pn23 {2, "pn23"};
const Enum::YLeaf PmPrbsPatternEt::pn11 {4, "pn11"};
const Enum::YLeaf PmPrbsPatternEt::inv_pn31 {8, "inv-pn31"};
const Enum::YLeaf PmPrbsPatternEt::inv_pn11 {16, "inv-pn11"};
const Enum::YLeaf PmPrbsPatternEt::pn15 {32, "pn15"};


}
}

