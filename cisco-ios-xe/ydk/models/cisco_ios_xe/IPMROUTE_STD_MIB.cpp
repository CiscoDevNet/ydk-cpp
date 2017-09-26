
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IPMROUTE_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IPMROUTE_STD_MIB {

IPMROUTESTDMIB::IPMROUTESTDMIB()
    :
    ipmroute(std::make_shared<IPMROUTESTDMIB::Ipmroute>())
	,ipmrouteboundarytable(std::make_shared<IPMROUTESTDMIB::Ipmrouteboundarytable>())
	,ipmrouteinterfacetable(std::make_shared<IPMROUTESTDMIB::Ipmrouteinterfacetable>())
	,ipmroutenexthoptable(std::make_shared<IPMROUTESTDMIB::Ipmroutenexthoptable>())
	,ipmroutescopenametable(std::make_shared<IPMROUTESTDMIB::Ipmroutescopenametable>())
	,ipmroutetable(std::make_shared<IPMROUTESTDMIB::Ipmroutetable>())
{
    ipmroute->parent = this;
    ipmrouteboundarytable->parent = this;
    ipmrouteinterfacetable->parent = this;
    ipmroutenexthoptable->parent = this;
    ipmroutescopenametable->parent = this;
    ipmroutetable->parent = this;

    yang_name = "IPMROUTE-STD-MIB"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

IPMROUTESTDMIB::~IPMROUTESTDMIB()
{
}

bool IPMROUTESTDMIB::has_data() const
{
    return (ipmroute !=  nullptr && ipmroute->has_data())
	|| (ipmrouteboundarytable !=  nullptr && ipmrouteboundarytable->has_data())
	|| (ipmrouteinterfacetable !=  nullptr && ipmrouteinterfacetable->has_data())
	|| (ipmroutenexthoptable !=  nullptr && ipmroutenexthoptable->has_data())
	|| (ipmroutescopenametable !=  nullptr && ipmroutescopenametable->has_data())
	|| (ipmroutetable !=  nullptr && ipmroutetable->has_data());
}

bool IPMROUTESTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ipmroute !=  nullptr && ipmroute->has_operation())
	|| (ipmrouteboundarytable !=  nullptr && ipmrouteboundarytable->has_operation())
	|| (ipmrouteinterfacetable !=  nullptr && ipmrouteinterfacetable->has_operation())
	|| (ipmroutenexthoptable !=  nullptr && ipmroutenexthoptable->has_operation())
	|| (ipmroutescopenametable !=  nullptr && ipmroutescopenametable->has_operation())
	|| (ipmroutetable !=  nullptr && ipmroutetable->has_operation());
}

std::string IPMROUTESTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRoute")
    {
        if(ipmroute == nullptr)
        {
            ipmroute = std::make_shared<IPMROUTESTDMIB::Ipmroute>();
        }
        return ipmroute;
    }

    if(child_yang_name == "ipMRouteBoundaryTable")
    {
        if(ipmrouteboundarytable == nullptr)
        {
            ipmrouteboundarytable = std::make_shared<IPMROUTESTDMIB::Ipmrouteboundarytable>();
        }
        return ipmrouteboundarytable;
    }

    if(child_yang_name == "ipMRouteInterfaceTable")
    {
        if(ipmrouteinterfacetable == nullptr)
        {
            ipmrouteinterfacetable = std::make_shared<IPMROUTESTDMIB::Ipmrouteinterfacetable>();
        }
        return ipmrouteinterfacetable;
    }

    if(child_yang_name == "ipMRouteNextHopTable")
    {
        if(ipmroutenexthoptable == nullptr)
        {
            ipmroutenexthoptable = std::make_shared<IPMROUTESTDMIB::Ipmroutenexthoptable>();
        }
        return ipmroutenexthoptable;
    }

    if(child_yang_name == "ipMRouteScopeNameTable")
    {
        if(ipmroutescopenametable == nullptr)
        {
            ipmroutescopenametable = std::make_shared<IPMROUTESTDMIB::Ipmroutescopenametable>();
        }
        return ipmroutescopenametable;
    }

    if(child_yang_name == "ipMRouteTable")
    {
        if(ipmroutetable == nullptr)
        {
            ipmroutetable = std::make_shared<IPMROUTESTDMIB::Ipmroutetable>();
        }
        return ipmroutetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipmroute != nullptr)
    {
        children["ipMRoute"] = ipmroute;
    }

    if(ipmrouteboundarytable != nullptr)
    {
        children["ipMRouteBoundaryTable"] = ipmrouteboundarytable;
    }

    if(ipmrouteinterfacetable != nullptr)
    {
        children["ipMRouteInterfaceTable"] = ipmrouteinterfacetable;
    }

    if(ipmroutenexthoptable != nullptr)
    {
        children["ipMRouteNextHopTable"] = ipmroutenexthoptable;
    }

    if(ipmroutescopenametable != nullptr)
    {
        children["ipMRouteScopeNameTable"] = ipmroutescopenametable;
    }

    if(ipmroutetable != nullptr)
    {
        children["ipMRouteTable"] = ipmroutetable;
    }

    return children;
}

void IPMROUTESTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> IPMROUTESTDMIB::clone_ptr() const
{
    return std::make_shared<IPMROUTESTDMIB>();
}

std::string IPMROUTESTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IPMROUTESTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IPMROUTESTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IPMROUTESTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IPMROUTESTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRoute" || name == "ipMRouteBoundaryTable" || name == "ipMRouteInterfaceTable" || name == "ipMRouteNextHopTable" || name == "ipMRouteScopeNameTable" || name == "ipMRouteTable")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmroute::Ipmroute()
    :
    ipmrouteenable{YType::enumeration, "ipMRouteEnable"},
    ipmrouteentrycount{YType::uint32, "ipMRouteEntryCount"}
{

    yang_name = "ipMRoute"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmroute::~Ipmroute()
{
}

bool IPMROUTESTDMIB::Ipmroute::has_data() const
{
    return ipmrouteenable.is_set
	|| ipmrouteentrycount.is_set;
}

bool IPMROUTESTDMIB::Ipmroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmrouteenable.yfilter)
	|| ydk::is_set(ipmrouteentrycount.yfilter);
}

std::string IPMROUTESTDMIB::Ipmroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRoute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteenable.is_set || is_set(ipmrouteenable.yfilter)) leaf_name_data.push_back(ipmrouteenable.get_name_leafdata());
    if (ipmrouteentrycount.is_set || is_set(ipmrouteentrycount.yfilter)) leaf_name_data.push_back(ipmrouteentrycount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMROUTESTDMIB::Ipmroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteEnable")
    {
        ipmrouteenable = value;
        ipmrouteenable.value_namespace = name_space;
        ipmrouteenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteEntryCount")
    {
        ipmrouteentrycount = value;
        ipmrouteentrycount.value_namespace = name_space;
        ipmrouteentrycount.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::Ipmroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteEnable")
    {
        ipmrouteenable.yfilter = yfilter;
    }
    if(value_path == "ipMRouteEntryCount")
    {
        ipmrouteentrycount.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::Ipmroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteEnable" || name == "ipMRouteEntryCount")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundarytable()
{

    yang_name = "ipMRouteBoundaryTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmrouteboundarytable::~Ipmrouteboundarytable()
{
}

bool IPMROUTESTDMIB::Ipmrouteboundarytable::has_data() const
{
    for (std::size_t index=0; index<ipmrouteboundaryentry.size(); index++)
    {
        if(ipmrouteboundaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::Ipmrouteboundarytable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteboundaryentry.size(); index++)
    {
        if(ipmrouteboundaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::Ipmrouteboundarytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmrouteboundarytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteBoundaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmrouteboundarytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmrouteboundarytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteBoundaryEntry")
    {
        for(auto const & c : ipmrouteboundaryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry>();
        c->parent = this;
        ipmrouteboundaryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmrouteboundarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmrouteboundaryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMROUTESTDMIB::Ipmrouteboundarytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::Ipmrouteboundarytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::Ipmrouteboundarytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteBoundaryEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::Ipmrouteboundaryentry()
    :
    ipmrouteboundaryifindex{YType::int32, "ipMRouteBoundaryIfIndex"},
    ipmrouteboundaryaddress{YType::str, "ipMRouteBoundaryAddress"},
    ipmrouteboundaryaddressmask{YType::str, "ipMRouteBoundaryAddressMask"},
    ipmrouteboundarystatus{YType::enumeration, "ipMRouteBoundaryStatus"}
{

    yang_name = "ipMRouteBoundaryEntry"; yang_parent_name = "ipMRouteBoundaryTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::~Ipmrouteboundaryentry()
{
}

bool IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::has_data() const
{
    return ipmrouteboundaryifindex.is_set
	|| ipmrouteboundaryaddress.is_set
	|| ipmrouteboundaryaddressmask.is_set
	|| ipmrouteboundarystatus.is_set;
}

bool IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmrouteboundaryifindex.yfilter)
	|| ydk::is_set(ipmrouteboundaryaddress.yfilter)
	|| ydk::is_set(ipmrouteboundaryaddressmask.yfilter)
	|| ydk::is_set(ipmrouteboundarystatus.yfilter);
}

std::string IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteBoundaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteBoundaryEntry" <<"[ipMRouteBoundaryIfIndex='" <<ipmrouteboundaryifindex <<"']" <<"[ipMRouteBoundaryAddress='" <<ipmrouteboundaryaddress <<"']" <<"[ipMRouteBoundaryAddressMask='" <<ipmrouteboundaryaddressmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteboundaryifindex.is_set || is_set(ipmrouteboundaryifindex.yfilter)) leaf_name_data.push_back(ipmrouteboundaryifindex.get_name_leafdata());
    if (ipmrouteboundaryaddress.is_set || is_set(ipmrouteboundaryaddress.yfilter)) leaf_name_data.push_back(ipmrouteboundaryaddress.get_name_leafdata());
    if (ipmrouteboundaryaddressmask.is_set || is_set(ipmrouteboundaryaddressmask.yfilter)) leaf_name_data.push_back(ipmrouteboundaryaddressmask.get_name_leafdata());
    if (ipmrouteboundarystatus.is_set || is_set(ipmrouteboundarystatus.yfilter)) leaf_name_data.push_back(ipmrouteboundarystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteBoundaryIfIndex")
    {
        ipmrouteboundaryifindex = value;
        ipmrouteboundaryifindex.value_namespace = name_space;
        ipmrouteboundaryifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteBoundaryAddress")
    {
        ipmrouteboundaryaddress = value;
        ipmrouteboundaryaddress.value_namespace = name_space;
        ipmrouteboundaryaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteBoundaryAddressMask")
    {
        ipmrouteboundaryaddressmask = value;
        ipmrouteboundaryaddressmask.value_namespace = name_space;
        ipmrouteboundaryaddressmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteBoundaryStatus")
    {
        ipmrouteboundarystatus = value;
        ipmrouteboundarystatus.value_namespace = name_space;
        ipmrouteboundarystatus.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteBoundaryIfIndex")
    {
        ipmrouteboundaryifindex.yfilter = yfilter;
    }
    if(value_path == "ipMRouteBoundaryAddress")
    {
        ipmrouteboundaryaddress.yfilter = yfilter;
    }
    if(value_path == "ipMRouteBoundaryAddressMask")
    {
        ipmrouteboundaryaddressmask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteBoundaryStatus")
    {
        ipmrouteboundarystatus.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::Ipmrouteboundarytable::Ipmrouteboundaryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteBoundaryIfIndex" || name == "ipMRouteBoundaryAddress" || name == "ipMRouteBoundaryAddressMask" || name == "ipMRouteBoundaryStatus")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfacetable()
{

    yang_name = "ipMRouteInterfaceTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmrouteinterfacetable::~Ipmrouteinterfacetable()
{
}

bool IPMROUTESTDMIB::Ipmrouteinterfacetable::has_data() const
{
    for (std::size_t index=0; index<ipmrouteinterfaceentry.size(); index++)
    {
        if(ipmrouteinterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::Ipmrouteinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteinterfaceentry.size(); index++)
    {
        if(ipmrouteinterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::Ipmrouteinterfacetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmrouteinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmrouteinterfacetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmrouteinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteInterfaceEntry")
    {
        for(auto const & c : ipmrouteinterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry>();
        c->parent = this;
        ipmrouteinterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmrouteinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmrouteinterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMROUTESTDMIB::Ipmrouteinterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::Ipmrouteinterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::Ipmrouteinterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteInterfaceEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::Ipmrouteinterfaceentry()
    :
    ipmrouteinterfaceifindex{YType::int32, "ipMRouteInterfaceIfIndex"},
    ciscoipmrouteifhcinmcastpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCInMcastPkts"},
    ciscoipmrouteifhcoutmcastpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfHCOutMcastPkts"},
    ciscoipmrouteifinmcastoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastOctets"},
    ciscoipmrouteifinmcastpkts{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfInMcastPkts"},
    ciscoipmrouteifoutmcastoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastOctets"},
    ciscoipmrouteifoutmcastpkts{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteIfOutMcastPkts"},
    ipmrouteinterfacehcinmcastoctets{YType::uint64, "ipMRouteInterfaceHCInMcastOctets"},
    ipmrouteinterfacehcoutmcastoctets{YType::uint64, "ipMRouteInterfaceHCOutMcastOctets"},
    ipmrouteinterfaceinmcastoctets{YType::uint32, "ipMRouteInterfaceInMcastOctets"},
    ipmrouteinterfaceoutmcastoctets{YType::uint32, "ipMRouteInterfaceOutMcastOctets"},
    ipmrouteinterfaceprotocol{YType::enumeration, "ipMRouteInterfaceProtocol"},
    ipmrouteinterfaceratelimit{YType::int32, "ipMRouteInterfaceRateLimit"},
    ipmrouteinterfacettl{YType::int32, "ipMRouteInterfaceTtl"}
{

    yang_name = "ipMRouteInterfaceEntry"; yang_parent_name = "ipMRouteInterfaceTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::~Ipmrouteinterfaceentry()
{
}

bool IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::has_data() const
{
    return ipmrouteinterfaceifindex.is_set
	|| ciscoipmrouteifhcinmcastpkts.is_set
	|| ciscoipmrouteifhcoutmcastpkts.is_set
	|| ciscoipmrouteifinmcastoctets.is_set
	|| ciscoipmrouteifinmcastpkts.is_set
	|| ciscoipmrouteifoutmcastoctets.is_set
	|| ciscoipmrouteifoutmcastpkts.is_set
	|| ipmrouteinterfacehcinmcastoctets.is_set
	|| ipmrouteinterfacehcoutmcastoctets.is_set
	|| ipmrouteinterfaceinmcastoctets.is_set
	|| ipmrouteinterfaceoutmcastoctets.is_set
	|| ipmrouteinterfaceprotocol.is_set
	|| ipmrouteinterfaceratelimit.is_set
	|| ipmrouteinterfacettl.is_set;
}

bool IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmrouteinterfaceifindex.yfilter)
	|| ydk::is_set(ciscoipmrouteifhcinmcastpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteifhcoutmcastpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteifinmcastoctets.yfilter)
	|| ydk::is_set(ciscoipmrouteifinmcastpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteifoutmcastoctets.yfilter)
	|| ydk::is_set(ciscoipmrouteifoutmcastpkts.yfilter)
	|| ydk::is_set(ipmrouteinterfacehcinmcastoctets.yfilter)
	|| ydk::is_set(ipmrouteinterfacehcoutmcastoctets.yfilter)
	|| ydk::is_set(ipmrouteinterfaceinmcastoctets.yfilter)
	|| ydk::is_set(ipmrouteinterfaceoutmcastoctets.yfilter)
	|| ydk::is_set(ipmrouteinterfaceprotocol.yfilter)
	|| ydk::is_set(ipmrouteinterfaceratelimit.yfilter)
	|| ydk::is_set(ipmrouteinterfacettl.yfilter);
}

std::string IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteInterfaceEntry" <<"[ipMRouteInterfaceIfIndex='" <<ipmrouteinterfaceifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmrouteinterfaceifindex.is_set || is_set(ipmrouteinterfaceifindex.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceifindex.get_name_leafdata());
    if (ciscoipmrouteifhcinmcastpkts.is_set || is_set(ciscoipmrouteifhcinmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifhcinmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifhcoutmcastpkts.is_set || is_set(ciscoipmrouteifhcoutmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifhcoutmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifinmcastoctets.is_set || is_set(ciscoipmrouteifinmcastoctets.yfilter)) leaf_name_data.push_back(ciscoipmrouteifinmcastoctets.get_name_leafdata());
    if (ciscoipmrouteifinmcastpkts.is_set || is_set(ciscoipmrouteifinmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifinmcastpkts.get_name_leafdata());
    if (ciscoipmrouteifoutmcastoctets.is_set || is_set(ciscoipmrouteifoutmcastoctets.yfilter)) leaf_name_data.push_back(ciscoipmrouteifoutmcastoctets.get_name_leafdata());
    if (ciscoipmrouteifoutmcastpkts.is_set || is_set(ciscoipmrouteifoutmcastpkts.yfilter)) leaf_name_data.push_back(ciscoipmrouteifoutmcastpkts.get_name_leafdata());
    if (ipmrouteinterfacehcinmcastoctets.is_set || is_set(ipmrouteinterfacehcinmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfacehcinmcastoctets.get_name_leafdata());
    if (ipmrouteinterfacehcoutmcastoctets.is_set || is_set(ipmrouteinterfacehcoutmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfacehcoutmcastoctets.get_name_leafdata());
    if (ipmrouteinterfaceinmcastoctets.is_set || is_set(ipmrouteinterfaceinmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceinmcastoctets.get_name_leafdata());
    if (ipmrouteinterfaceoutmcastoctets.is_set || is_set(ipmrouteinterfaceoutmcastoctets.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceoutmcastoctets.get_name_leafdata());
    if (ipmrouteinterfaceprotocol.is_set || is_set(ipmrouteinterfaceprotocol.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceprotocol.get_name_leafdata());
    if (ipmrouteinterfaceratelimit.is_set || is_set(ipmrouteinterfaceratelimit.yfilter)) leaf_name_data.push_back(ipmrouteinterfaceratelimit.get_name_leafdata());
    if (ipmrouteinterfacettl.is_set || is_set(ipmrouteinterfacettl.yfilter)) leaf_name_data.push_back(ipmrouteinterfacettl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteInterfaceIfIndex")
    {
        ipmrouteinterfaceifindex = value;
        ipmrouteinterfaceifindex.value_namespace = name_space;
        ipmrouteinterfaceifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteIfHCInMcastPkts")
    {
        ciscoipmrouteifhcinmcastpkts = value;
        ciscoipmrouteifhcinmcastpkts.value_namespace = name_space;
        ciscoipmrouteifhcinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteIfHCOutMcastPkts")
    {
        ciscoipmrouteifhcoutmcastpkts = value;
        ciscoipmrouteifhcoutmcastpkts.value_namespace = name_space;
        ciscoipmrouteifhcoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteIfInMcastOctets")
    {
        ciscoipmrouteifinmcastoctets = value;
        ciscoipmrouteifinmcastoctets.value_namespace = name_space;
        ciscoipmrouteifinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteIfInMcastPkts")
    {
        ciscoipmrouteifinmcastpkts = value;
        ciscoipmrouteifinmcastpkts.value_namespace = name_space;
        ciscoipmrouteifinmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastOctets")
    {
        ciscoipmrouteifoutmcastoctets = value;
        ciscoipmrouteifoutmcastoctets.value_namespace = name_space;
        ciscoipmrouteifoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastPkts")
    {
        ciscoipmrouteifoutmcastpkts = value;
        ciscoipmrouteifoutmcastpkts.value_namespace = name_space;
        ciscoipmrouteifoutmcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceHCInMcastOctets")
    {
        ipmrouteinterfacehcinmcastoctets = value;
        ipmrouteinterfacehcinmcastoctets.value_namespace = name_space;
        ipmrouteinterfacehcinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceHCOutMcastOctets")
    {
        ipmrouteinterfacehcoutmcastoctets = value;
        ipmrouteinterfacehcoutmcastoctets.value_namespace = name_space;
        ipmrouteinterfacehcoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceInMcastOctets")
    {
        ipmrouteinterfaceinmcastoctets = value;
        ipmrouteinterfaceinmcastoctets.value_namespace = name_space;
        ipmrouteinterfaceinmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceOutMcastOctets")
    {
        ipmrouteinterfaceoutmcastoctets = value;
        ipmrouteinterfaceoutmcastoctets.value_namespace = name_space;
        ipmrouteinterfaceoutmcastoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceProtocol")
    {
        ipmrouteinterfaceprotocol = value;
        ipmrouteinterfaceprotocol.value_namespace = name_space;
        ipmrouteinterfaceprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceRateLimit")
    {
        ipmrouteinterfaceratelimit = value;
        ipmrouteinterfaceratelimit.value_namespace = name_space;
        ipmrouteinterfaceratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInterfaceTtl")
    {
        ipmrouteinterfacettl = value;
        ipmrouteinterfacettl.value_namespace = name_space;
        ipmrouteinterfacettl.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteInterfaceIfIndex")
    {
        ipmrouteinterfaceifindex.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfHCInMcastPkts")
    {
        ciscoipmrouteifhcinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfHCOutMcastPkts")
    {
        ciscoipmrouteifhcoutmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfInMcastOctets")
    {
        ciscoipmrouteifinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfInMcastPkts")
    {
        ciscoipmrouteifinmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastOctets")
    {
        ciscoipmrouteifoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteIfOutMcastPkts")
    {
        ciscoipmrouteifoutmcastpkts.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceHCInMcastOctets")
    {
        ipmrouteinterfacehcinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceHCOutMcastOctets")
    {
        ipmrouteinterfacehcoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceInMcastOctets")
    {
        ipmrouteinterfaceinmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceOutMcastOctets")
    {
        ipmrouteinterfaceoutmcastoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceProtocol")
    {
        ipmrouteinterfaceprotocol.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceRateLimit")
    {
        ipmrouteinterfaceratelimit.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInterfaceTtl")
    {
        ipmrouteinterfacettl.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::Ipmrouteinterfacetable::Ipmrouteinterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteInterfaceIfIndex" || name == "ciscoIpMRouteIfHCInMcastPkts" || name == "ciscoIpMRouteIfHCOutMcastPkts" || name == "ciscoIpMRouteIfInMcastOctets" || name == "ciscoIpMRouteIfInMcastPkts" || name == "ciscoIpMRouteIfOutMcastOctets" || name == "ciscoIpMRouteIfOutMcastPkts" || name == "ipMRouteInterfaceHCInMcastOctets" || name == "ipMRouteInterfaceHCOutMcastOctets" || name == "ipMRouteInterfaceInMcastOctets" || name == "ipMRouteInterfaceOutMcastOctets" || name == "ipMRouteInterfaceProtocol" || name == "ipMRouteInterfaceRateLimit" || name == "ipMRouteInterfaceTtl")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthoptable()
{

    yang_name = "ipMRouteNextHopTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmroutenexthoptable::~Ipmroutenexthoptable()
{
}

bool IPMROUTESTDMIB::Ipmroutenexthoptable::has_data() const
{
    for (std::size_t index=0; index<ipmroutenexthopentry.size(); index++)
    {
        if(ipmroutenexthopentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::Ipmroutenexthoptable::has_operation() const
{
    for (std::size_t index=0; index<ipmroutenexthopentry.size(); index++)
    {
        if(ipmroutenexthopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::Ipmroutenexthoptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmroutenexthoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteNextHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmroutenexthoptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmroutenexthoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteNextHopEntry")
    {
        for(auto const & c : ipmroutenexthopentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry>();
        c->parent = this;
        ipmroutenexthopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmroutenexthoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmroutenexthopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMROUTESTDMIB::Ipmroutenexthoptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::Ipmroutenexthoptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::Ipmroutenexthoptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteNextHopEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::Ipmroutenexthopentry()
    :
    ipmroutenexthopgroup{YType::str, "ipMRouteNextHopGroup"},
    ipmroutenexthopsource{YType::str, "ipMRouteNextHopSource"},
    ipmroutenexthopsourcemask{YType::str, "ipMRouteNextHopSourceMask"},
    ipmroutenexthopifindex{YType::int32, "ipMRouteNextHopIfIndex"},
    ipmroutenexthopaddress{YType::str, "ipMRouteNextHopAddress"},
    ciscoipmroutenexthopmachdr{YType::str, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopMacHdr"},
    ciscoipmroutenexthopoutlimit{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopOutLimit"},
    ciscoipmroutenexthoppkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteNextHopPkts"},
    ipmroutenexthopclosestmemberhops{YType::int32, "ipMRouteNextHopClosestMemberHops"},
    ipmroutenexthopexpirytime{YType::uint32, "ipMRouteNextHopExpiryTime"},
    ipmroutenexthoppkts{YType::uint32, "ipMRouteNextHopPkts"},
    ipmroutenexthopprotocol{YType::enumeration, "ipMRouteNextHopProtocol"},
    ipmroutenexthopstate{YType::enumeration, "ipMRouteNextHopState"},
    ipmroutenexthopuptime{YType::uint32, "ipMRouteNextHopUpTime"}
{

    yang_name = "ipMRouteNextHopEntry"; yang_parent_name = "ipMRouteNextHopTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::~Ipmroutenexthopentry()
{
}

bool IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::has_data() const
{
    return ipmroutenexthopgroup.is_set
	|| ipmroutenexthopsource.is_set
	|| ipmroutenexthopsourcemask.is_set
	|| ipmroutenexthopifindex.is_set
	|| ipmroutenexthopaddress.is_set
	|| ciscoipmroutenexthopmachdr.is_set
	|| ciscoipmroutenexthopoutlimit.is_set
	|| ciscoipmroutenexthoppkts.is_set
	|| ipmroutenexthopclosestmemberhops.is_set
	|| ipmroutenexthopexpirytime.is_set
	|| ipmroutenexthoppkts.is_set
	|| ipmroutenexthopprotocol.is_set
	|| ipmroutenexthopstate.is_set
	|| ipmroutenexthopuptime.is_set;
}

bool IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutenexthopgroup.yfilter)
	|| ydk::is_set(ipmroutenexthopsource.yfilter)
	|| ydk::is_set(ipmroutenexthopsourcemask.yfilter)
	|| ydk::is_set(ipmroutenexthopifindex.yfilter)
	|| ydk::is_set(ipmroutenexthopaddress.yfilter)
	|| ydk::is_set(ciscoipmroutenexthopmachdr.yfilter)
	|| ydk::is_set(ciscoipmroutenexthopoutlimit.yfilter)
	|| ydk::is_set(ciscoipmroutenexthoppkts.yfilter)
	|| ydk::is_set(ipmroutenexthopclosestmemberhops.yfilter)
	|| ydk::is_set(ipmroutenexthopexpirytime.yfilter)
	|| ydk::is_set(ipmroutenexthoppkts.yfilter)
	|| ydk::is_set(ipmroutenexthopprotocol.yfilter)
	|| ydk::is_set(ipmroutenexthopstate.yfilter)
	|| ydk::is_set(ipmroutenexthopuptime.yfilter);
}

std::string IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteNextHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteNextHopEntry" <<"[ipMRouteNextHopGroup='" <<ipmroutenexthopgroup <<"']" <<"[ipMRouteNextHopSource='" <<ipmroutenexthopsource <<"']" <<"[ipMRouteNextHopSourceMask='" <<ipmroutenexthopsourcemask <<"']" <<"[ipMRouteNextHopIfIndex='" <<ipmroutenexthopifindex <<"']" <<"[ipMRouteNextHopAddress='" <<ipmroutenexthopaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutenexthopgroup.is_set || is_set(ipmroutenexthopgroup.yfilter)) leaf_name_data.push_back(ipmroutenexthopgroup.get_name_leafdata());
    if (ipmroutenexthopsource.is_set || is_set(ipmroutenexthopsource.yfilter)) leaf_name_data.push_back(ipmroutenexthopsource.get_name_leafdata());
    if (ipmroutenexthopsourcemask.is_set || is_set(ipmroutenexthopsourcemask.yfilter)) leaf_name_data.push_back(ipmroutenexthopsourcemask.get_name_leafdata());
    if (ipmroutenexthopifindex.is_set || is_set(ipmroutenexthopifindex.yfilter)) leaf_name_data.push_back(ipmroutenexthopifindex.get_name_leafdata());
    if (ipmroutenexthopaddress.is_set || is_set(ipmroutenexthopaddress.yfilter)) leaf_name_data.push_back(ipmroutenexthopaddress.get_name_leafdata());
    if (ciscoipmroutenexthopmachdr.is_set || is_set(ciscoipmroutenexthopmachdr.yfilter)) leaf_name_data.push_back(ciscoipmroutenexthopmachdr.get_name_leafdata());
    if (ciscoipmroutenexthopoutlimit.is_set || is_set(ciscoipmroutenexthopoutlimit.yfilter)) leaf_name_data.push_back(ciscoipmroutenexthopoutlimit.get_name_leafdata());
    if (ciscoipmroutenexthoppkts.is_set || is_set(ciscoipmroutenexthoppkts.yfilter)) leaf_name_data.push_back(ciscoipmroutenexthoppkts.get_name_leafdata());
    if (ipmroutenexthopclosestmemberhops.is_set || is_set(ipmroutenexthopclosestmemberhops.yfilter)) leaf_name_data.push_back(ipmroutenexthopclosestmemberhops.get_name_leafdata());
    if (ipmroutenexthopexpirytime.is_set || is_set(ipmroutenexthopexpirytime.yfilter)) leaf_name_data.push_back(ipmroutenexthopexpirytime.get_name_leafdata());
    if (ipmroutenexthoppkts.is_set || is_set(ipmroutenexthoppkts.yfilter)) leaf_name_data.push_back(ipmroutenexthoppkts.get_name_leafdata());
    if (ipmroutenexthopprotocol.is_set || is_set(ipmroutenexthopprotocol.yfilter)) leaf_name_data.push_back(ipmroutenexthopprotocol.get_name_leafdata());
    if (ipmroutenexthopstate.is_set || is_set(ipmroutenexthopstate.yfilter)) leaf_name_data.push_back(ipmroutenexthopstate.get_name_leafdata());
    if (ipmroutenexthopuptime.is_set || is_set(ipmroutenexthopuptime.yfilter)) leaf_name_data.push_back(ipmroutenexthopuptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteNextHopGroup")
    {
        ipmroutenexthopgroup = value;
        ipmroutenexthopgroup.value_namespace = name_space;
        ipmroutenexthopgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopSource")
    {
        ipmroutenexthopsource = value;
        ipmroutenexthopsource.value_namespace = name_space;
        ipmroutenexthopsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopSourceMask")
    {
        ipmroutenexthopsourcemask = value;
        ipmroutenexthopsourcemask.value_namespace = name_space;
        ipmroutenexthopsourcemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopIfIndex")
    {
        ipmroutenexthopifindex = value;
        ipmroutenexthopifindex.value_namespace = name_space;
        ipmroutenexthopifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopAddress")
    {
        ipmroutenexthopaddress = value;
        ipmroutenexthopaddress.value_namespace = name_space;
        ipmroutenexthopaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteNextHopMacHdr")
    {
        ciscoipmroutenexthopmachdr = value;
        ciscoipmroutenexthopmachdr.value_namespace = name_space;
        ciscoipmroutenexthopmachdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteNextHopOutLimit")
    {
        ciscoipmroutenexthopoutlimit = value;
        ciscoipmroutenexthopoutlimit.value_namespace = name_space;
        ciscoipmroutenexthopoutlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteNextHopPkts")
    {
        ciscoipmroutenexthoppkts = value;
        ciscoipmroutenexthoppkts.value_namespace = name_space;
        ciscoipmroutenexthoppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopClosestMemberHops")
    {
        ipmroutenexthopclosestmemberhops = value;
        ipmroutenexthopclosestmemberhops.value_namespace = name_space;
        ipmroutenexthopclosestmemberhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopExpiryTime")
    {
        ipmroutenexthopexpirytime = value;
        ipmroutenexthopexpirytime.value_namespace = name_space;
        ipmroutenexthopexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopPkts")
    {
        ipmroutenexthoppkts = value;
        ipmroutenexthoppkts.value_namespace = name_space;
        ipmroutenexthoppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopProtocol")
    {
        ipmroutenexthopprotocol = value;
        ipmroutenexthopprotocol.value_namespace = name_space;
        ipmroutenexthopprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopState")
    {
        ipmroutenexthopstate = value;
        ipmroutenexthopstate.value_namespace = name_space;
        ipmroutenexthopstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteNextHopUpTime")
    {
        ipmroutenexthopuptime = value;
        ipmroutenexthopuptime.value_namespace = name_space;
        ipmroutenexthopuptime.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteNextHopGroup")
    {
        ipmroutenexthopgroup.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopSource")
    {
        ipmroutenexthopsource.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopSourceMask")
    {
        ipmroutenexthopsourcemask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopIfIndex")
    {
        ipmroutenexthopifindex.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopAddress")
    {
        ipmroutenexthopaddress.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteNextHopMacHdr")
    {
        ciscoipmroutenexthopmachdr.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteNextHopOutLimit")
    {
        ciscoipmroutenexthopoutlimit.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteNextHopPkts")
    {
        ciscoipmroutenexthoppkts.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopClosestMemberHops")
    {
        ipmroutenexthopclosestmemberhops.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopExpiryTime")
    {
        ipmroutenexthopexpirytime.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopPkts")
    {
        ipmroutenexthoppkts.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopProtocol")
    {
        ipmroutenexthopprotocol.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopState")
    {
        ipmroutenexthopstate.yfilter = yfilter;
    }
    if(value_path == "ipMRouteNextHopUpTime")
    {
        ipmroutenexthopuptime.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteNextHopGroup" || name == "ipMRouteNextHopSource" || name == "ipMRouteNextHopSourceMask" || name == "ipMRouteNextHopIfIndex" || name == "ipMRouteNextHopAddress" || name == "ciscoIpMRouteNextHopMacHdr" || name == "ciscoIpMRouteNextHopOutLimit" || name == "ciscoIpMRouteNextHopPkts" || name == "ipMRouteNextHopClosestMemberHops" || name == "ipMRouteNextHopExpiryTime" || name == "ipMRouteNextHopPkts" || name == "ipMRouteNextHopProtocol" || name == "ipMRouteNextHopState" || name == "ipMRouteNextHopUpTime")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenametable()
{

    yang_name = "ipMRouteScopeNameTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmroutescopenametable::~Ipmroutescopenametable()
{
}

bool IPMROUTESTDMIB::Ipmroutescopenametable::has_data() const
{
    for (std::size_t index=0; index<ipmroutescopenameentry.size(); index++)
    {
        if(ipmroutescopenameentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::Ipmroutescopenametable::has_operation() const
{
    for (std::size_t index=0; index<ipmroutescopenameentry.size(); index++)
    {
        if(ipmroutescopenameentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::Ipmroutescopenametable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmroutescopenametable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteScopeNameTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmroutescopenametable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmroutescopenametable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteScopeNameEntry")
    {
        for(auto const & c : ipmroutescopenameentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry>();
        c->parent = this;
        ipmroutescopenameentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmroutescopenametable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmroutescopenameentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMROUTESTDMIB::Ipmroutescopenametable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::Ipmroutescopenametable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::Ipmroutescopenametable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteScopeNameEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::Ipmroutescopenameentry()
    :
    ipmroutescopenameaddress{YType::str, "ipMRouteScopeNameAddress"},
    ipmroutescopenameaddressmask{YType::str, "ipMRouteScopeNameAddressMask"},
    ipmroutescopenamelanguage{YType::str, "ipMRouteScopeNameLanguage"},
    ipmroutescopenamedefault{YType::boolean, "ipMRouteScopeNameDefault"},
    ipmroutescopenamestatus{YType::enumeration, "ipMRouteScopeNameStatus"},
    ipmroutescopenamestring{YType::str, "ipMRouteScopeNameString"}
{

    yang_name = "ipMRouteScopeNameEntry"; yang_parent_name = "ipMRouteScopeNameTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::~Ipmroutescopenameentry()
{
}

bool IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::has_data() const
{
    return ipmroutescopenameaddress.is_set
	|| ipmroutescopenameaddressmask.is_set
	|| ipmroutescopenamelanguage.is_set
	|| ipmroutescopenamedefault.is_set
	|| ipmroutescopenamestatus.is_set
	|| ipmroutescopenamestring.is_set;
}

bool IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutescopenameaddress.yfilter)
	|| ydk::is_set(ipmroutescopenameaddressmask.yfilter)
	|| ydk::is_set(ipmroutescopenamelanguage.yfilter)
	|| ydk::is_set(ipmroutescopenamedefault.yfilter)
	|| ydk::is_set(ipmroutescopenamestatus.yfilter)
	|| ydk::is_set(ipmroutescopenamestring.yfilter);
}

std::string IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteScopeNameTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteScopeNameEntry" <<"[ipMRouteScopeNameAddress='" <<ipmroutescopenameaddress <<"']" <<"[ipMRouteScopeNameAddressMask='" <<ipmroutescopenameaddressmask <<"']" <<"[ipMRouteScopeNameLanguage='" <<ipmroutescopenamelanguage <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutescopenameaddress.is_set || is_set(ipmroutescopenameaddress.yfilter)) leaf_name_data.push_back(ipmroutescopenameaddress.get_name_leafdata());
    if (ipmroutescopenameaddressmask.is_set || is_set(ipmroutescopenameaddressmask.yfilter)) leaf_name_data.push_back(ipmroutescopenameaddressmask.get_name_leafdata());
    if (ipmroutescopenamelanguage.is_set || is_set(ipmroutescopenamelanguage.yfilter)) leaf_name_data.push_back(ipmroutescopenamelanguage.get_name_leafdata());
    if (ipmroutescopenamedefault.is_set || is_set(ipmroutescopenamedefault.yfilter)) leaf_name_data.push_back(ipmroutescopenamedefault.get_name_leafdata());
    if (ipmroutescopenamestatus.is_set || is_set(ipmroutescopenamestatus.yfilter)) leaf_name_data.push_back(ipmroutescopenamestatus.get_name_leafdata());
    if (ipmroutescopenamestring.is_set || is_set(ipmroutescopenamestring.yfilter)) leaf_name_data.push_back(ipmroutescopenamestring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteScopeNameAddress")
    {
        ipmroutescopenameaddress = value;
        ipmroutescopenameaddress.value_namespace = name_space;
        ipmroutescopenameaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameAddressMask")
    {
        ipmroutescopenameaddressmask = value;
        ipmroutescopenameaddressmask.value_namespace = name_space;
        ipmroutescopenameaddressmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameLanguage")
    {
        ipmroutescopenamelanguage = value;
        ipmroutescopenamelanguage.value_namespace = name_space;
        ipmroutescopenamelanguage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameDefault")
    {
        ipmroutescopenamedefault = value;
        ipmroutescopenamedefault.value_namespace = name_space;
        ipmroutescopenamedefault.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameStatus")
    {
        ipmroutescopenamestatus = value;
        ipmroutescopenamestatus.value_namespace = name_space;
        ipmroutescopenamestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteScopeNameString")
    {
        ipmroutescopenamestring = value;
        ipmroutescopenamestring.value_namespace = name_space;
        ipmroutescopenamestring.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteScopeNameAddress")
    {
        ipmroutescopenameaddress.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameAddressMask")
    {
        ipmroutescopenameaddressmask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameLanguage")
    {
        ipmroutescopenamelanguage.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameDefault")
    {
        ipmroutescopenamedefault.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameStatus")
    {
        ipmroutescopenamestatus.yfilter = yfilter;
    }
    if(value_path == "ipMRouteScopeNameString")
    {
        ipmroutescopenamestring.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::Ipmroutescopenametable::Ipmroutescopenameentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteScopeNameAddress" || name == "ipMRouteScopeNameAddressMask" || name == "ipMRouteScopeNameLanguage" || name == "ipMRouteScopeNameDefault" || name == "ipMRouteScopeNameStatus" || name == "ipMRouteScopeNameString")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmroutetable::Ipmroutetable()
{

    yang_name = "ipMRouteTable"; yang_parent_name = "IPMROUTE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmroutetable::~Ipmroutetable()
{
}

bool IPMROUTESTDMIB::Ipmroutetable::has_data() const
{
    for (std::size_t index=0; index<ipmrouteentry.size(); index++)
    {
        if(ipmrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPMROUTESTDMIB::Ipmroutetable::has_operation() const
{
    for (std::size_t index=0; index<ipmrouteentry.size(); index++)
    {
        if(ipmrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPMROUTESTDMIB::Ipmroutetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmroutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmroutetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmroutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipMRouteEntry")
    {
        for(auto const & c : ipmrouteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry>();
        c->parent = this;
        ipmrouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipmrouteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IPMROUTESTDMIB::Ipmroutetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPMROUTESTDMIB::Ipmroutetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPMROUTESTDMIB::Ipmroutetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteEntry")
        return true;
    return false;
}

IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::Ipmrouteentry()
    :
    ipmroutegroup{YType::str, "ipMRouteGroup"},
    ipmroutesource{YType::str, "ipMRouteSource"},
    ipmroutesourcemask{YType::str, "ipMRouteSourceMask"},
    ciscoipmroutebps{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps"},
    ciscoipmroutebps2{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteBps2"},
    ciscoipmrouteconnectedflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteConnectedFlag"},
    ciscoipmroutedifferentinifpkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteDifferentInIfPkts"},
    ciscoipmrouteinlimit{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit"},
    ciscoipmrouteinlimit2{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteInLimit2"},
    ciscoipmroutejoinflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteJoinFlag"},
    ciscoipmroutelastused{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteLastUsed"},
    ciscoipmroutelocalflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteLocalFlag"},
    ciscoipmroutemetric{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric"},
    ciscoipmroutemetric2{YType::uint32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetric2"},
    ciscoipmroutemetricpreference{YType::int32, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMetricPreference"},
    ciscoipmroutemsdpflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteMsdpFlag"},
    ciscoipmrouteoctets{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRouteOctets"},
    ciscoipmroutepkts{YType::uint64, "CISCO-IPMROUTE-MIB:ciscoIpMRoutePkts"},
    ciscoipmrouteproxyjoinflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteProxyJoinFlag"},
    ciscoipmroutepruneflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRoutePruneFlag"},
    ciscoipmrouteregisterflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteRegisterFlag"},
    ciscoipmrouterpflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteRpFlag"},
    ciscoipmroutesparseflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteSparseFlag"},
    ciscoipmroutesptflag{YType::boolean, "CISCO-IPMROUTE-MIB:ciscoIpMRouteSptFlag"},
    ipmroutedifferentinifpackets{YType::uint32, "ipMRouteDifferentInIfPackets"},
    ipmrouteexpirytime{YType::uint32, "ipMRouteExpiryTime"},
    ipmroutehcoctets{YType::uint64, "ipMRouteHCOctets"},
    ipmrouteinifindex{YType::int32, "ipMRouteInIfIndex"},
    ipmrouteoctets{YType::uint32, "ipMRouteOctets"},
    ipmroutepkts{YType::uint32, "ipMRoutePkts"},
    ipmrouteprotocol{YType::enumeration, "ipMRouteProtocol"},
    ipmroutertaddress{YType::str, "ipMRouteRtAddress"},
    ipmroutertmask{YType::str, "ipMRouteRtMask"},
    ipmroutertproto{YType::enumeration, "ipMRouteRtProto"},
    ipmrouterttype{YType::enumeration, "ipMRouteRtType"},
    ipmrouteupstreamneighbor{YType::str, "ipMRouteUpstreamNeighbor"},
    ipmrouteuptime{YType::uint32, "ipMRouteUpTime"}
{

    yang_name = "ipMRouteEntry"; yang_parent_name = "ipMRouteTable"; is_top_level_class = false; has_list_ancestor = false;
}

IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::~Ipmrouteentry()
{
}

bool IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::has_data() const
{
    return ipmroutegroup.is_set
	|| ipmroutesource.is_set
	|| ipmroutesourcemask.is_set
	|| ciscoipmroutebps.is_set
	|| ciscoipmroutebps2.is_set
	|| ciscoipmrouteconnectedflag.is_set
	|| ciscoipmroutedifferentinifpkts.is_set
	|| ciscoipmrouteinlimit.is_set
	|| ciscoipmrouteinlimit2.is_set
	|| ciscoipmroutejoinflag.is_set
	|| ciscoipmroutelastused.is_set
	|| ciscoipmroutelocalflag.is_set
	|| ciscoipmroutemetric.is_set
	|| ciscoipmroutemetric2.is_set
	|| ciscoipmroutemetricpreference.is_set
	|| ciscoipmroutemsdpflag.is_set
	|| ciscoipmrouteoctets.is_set
	|| ciscoipmroutepkts.is_set
	|| ciscoipmrouteproxyjoinflag.is_set
	|| ciscoipmroutepruneflag.is_set
	|| ciscoipmrouteregisterflag.is_set
	|| ciscoipmrouterpflag.is_set
	|| ciscoipmroutesparseflag.is_set
	|| ciscoipmroutesptflag.is_set
	|| ipmroutedifferentinifpackets.is_set
	|| ipmrouteexpirytime.is_set
	|| ipmroutehcoctets.is_set
	|| ipmrouteinifindex.is_set
	|| ipmrouteoctets.is_set
	|| ipmroutepkts.is_set
	|| ipmrouteprotocol.is_set
	|| ipmroutertaddress.is_set
	|| ipmroutertmask.is_set
	|| ipmroutertproto.is_set
	|| ipmrouterttype.is_set
	|| ipmrouteupstreamneighbor.is_set
	|| ipmrouteuptime.is_set;
}

bool IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutegroup.yfilter)
	|| ydk::is_set(ipmroutesource.yfilter)
	|| ydk::is_set(ipmroutesourcemask.yfilter)
	|| ydk::is_set(ciscoipmroutebps.yfilter)
	|| ydk::is_set(ciscoipmroutebps2.yfilter)
	|| ydk::is_set(ciscoipmrouteconnectedflag.yfilter)
	|| ydk::is_set(ciscoipmroutedifferentinifpkts.yfilter)
	|| ydk::is_set(ciscoipmrouteinlimit.yfilter)
	|| ydk::is_set(ciscoipmrouteinlimit2.yfilter)
	|| ydk::is_set(ciscoipmroutejoinflag.yfilter)
	|| ydk::is_set(ciscoipmroutelastused.yfilter)
	|| ydk::is_set(ciscoipmroutelocalflag.yfilter)
	|| ydk::is_set(ciscoipmroutemetric.yfilter)
	|| ydk::is_set(ciscoipmroutemetric2.yfilter)
	|| ydk::is_set(ciscoipmroutemetricpreference.yfilter)
	|| ydk::is_set(ciscoipmroutemsdpflag.yfilter)
	|| ydk::is_set(ciscoipmrouteoctets.yfilter)
	|| ydk::is_set(ciscoipmroutepkts.yfilter)
	|| ydk::is_set(ciscoipmrouteproxyjoinflag.yfilter)
	|| ydk::is_set(ciscoipmroutepruneflag.yfilter)
	|| ydk::is_set(ciscoipmrouteregisterflag.yfilter)
	|| ydk::is_set(ciscoipmrouterpflag.yfilter)
	|| ydk::is_set(ciscoipmroutesparseflag.yfilter)
	|| ydk::is_set(ciscoipmroutesptflag.yfilter)
	|| ydk::is_set(ipmroutedifferentinifpackets.yfilter)
	|| ydk::is_set(ipmrouteexpirytime.yfilter)
	|| ydk::is_set(ipmroutehcoctets.yfilter)
	|| ydk::is_set(ipmrouteinifindex.yfilter)
	|| ydk::is_set(ipmrouteoctets.yfilter)
	|| ydk::is_set(ipmroutepkts.yfilter)
	|| ydk::is_set(ipmrouteprotocol.yfilter)
	|| ydk::is_set(ipmroutertaddress.yfilter)
	|| ydk::is_set(ipmroutertmask.yfilter)
	|| ydk::is_set(ipmroutertproto.yfilter)
	|| ydk::is_set(ipmrouterttype.yfilter)
	|| ydk::is_set(ipmrouteupstreamneighbor.yfilter)
	|| ydk::is_set(ipmrouteuptime.yfilter);
}

std::string IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IPMROUTE-STD-MIB:IPMROUTE-STD-MIB/ipMRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipMRouteEntry" <<"[ipMRouteGroup='" <<ipmroutegroup <<"']" <<"[ipMRouteSource='" <<ipmroutesource <<"']" <<"[ipMRouteSourceMask='" <<ipmroutesourcemask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutegroup.is_set || is_set(ipmroutegroup.yfilter)) leaf_name_data.push_back(ipmroutegroup.get_name_leafdata());
    if (ipmroutesource.is_set || is_set(ipmroutesource.yfilter)) leaf_name_data.push_back(ipmroutesource.get_name_leafdata());
    if (ipmroutesourcemask.is_set || is_set(ipmroutesourcemask.yfilter)) leaf_name_data.push_back(ipmroutesourcemask.get_name_leafdata());
    if (ciscoipmroutebps.is_set || is_set(ciscoipmroutebps.yfilter)) leaf_name_data.push_back(ciscoipmroutebps.get_name_leafdata());
    if (ciscoipmroutebps2.is_set || is_set(ciscoipmroutebps2.yfilter)) leaf_name_data.push_back(ciscoipmroutebps2.get_name_leafdata());
    if (ciscoipmrouteconnectedflag.is_set || is_set(ciscoipmrouteconnectedflag.yfilter)) leaf_name_data.push_back(ciscoipmrouteconnectedflag.get_name_leafdata());
    if (ciscoipmroutedifferentinifpkts.is_set || is_set(ciscoipmroutedifferentinifpkts.yfilter)) leaf_name_data.push_back(ciscoipmroutedifferentinifpkts.get_name_leafdata());
    if (ciscoipmrouteinlimit.is_set || is_set(ciscoipmrouteinlimit.yfilter)) leaf_name_data.push_back(ciscoipmrouteinlimit.get_name_leafdata());
    if (ciscoipmrouteinlimit2.is_set || is_set(ciscoipmrouteinlimit2.yfilter)) leaf_name_data.push_back(ciscoipmrouteinlimit2.get_name_leafdata());
    if (ciscoipmroutejoinflag.is_set || is_set(ciscoipmroutejoinflag.yfilter)) leaf_name_data.push_back(ciscoipmroutejoinflag.get_name_leafdata());
    if (ciscoipmroutelastused.is_set || is_set(ciscoipmroutelastused.yfilter)) leaf_name_data.push_back(ciscoipmroutelastused.get_name_leafdata());
    if (ciscoipmroutelocalflag.is_set || is_set(ciscoipmroutelocalflag.yfilter)) leaf_name_data.push_back(ciscoipmroutelocalflag.get_name_leafdata());
    if (ciscoipmroutemetric.is_set || is_set(ciscoipmroutemetric.yfilter)) leaf_name_data.push_back(ciscoipmroutemetric.get_name_leafdata());
    if (ciscoipmroutemetric2.is_set || is_set(ciscoipmroutemetric2.yfilter)) leaf_name_data.push_back(ciscoipmroutemetric2.get_name_leafdata());
    if (ciscoipmroutemetricpreference.is_set || is_set(ciscoipmroutemetricpreference.yfilter)) leaf_name_data.push_back(ciscoipmroutemetricpreference.get_name_leafdata());
    if (ciscoipmroutemsdpflag.is_set || is_set(ciscoipmroutemsdpflag.yfilter)) leaf_name_data.push_back(ciscoipmroutemsdpflag.get_name_leafdata());
    if (ciscoipmrouteoctets.is_set || is_set(ciscoipmrouteoctets.yfilter)) leaf_name_data.push_back(ciscoipmrouteoctets.get_name_leafdata());
    if (ciscoipmroutepkts.is_set || is_set(ciscoipmroutepkts.yfilter)) leaf_name_data.push_back(ciscoipmroutepkts.get_name_leafdata());
    if (ciscoipmrouteproxyjoinflag.is_set || is_set(ciscoipmrouteproxyjoinflag.yfilter)) leaf_name_data.push_back(ciscoipmrouteproxyjoinflag.get_name_leafdata());
    if (ciscoipmroutepruneflag.is_set || is_set(ciscoipmroutepruneflag.yfilter)) leaf_name_data.push_back(ciscoipmroutepruneflag.get_name_leafdata());
    if (ciscoipmrouteregisterflag.is_set || is_set(ciscoipmrouteregisterflag.yfilter)) leaf_name_data.push_back(ciscoipmrouteregisterflag.get_name_leafdata());
    if (ciscoipmrouterpflag.is_set || is_set(ciscoipmrouterpflag.yfilter)) leaf_name_data.push_back(ciscoipmrouterpflag.get_name_leafdata());
    if (ciscoipmroutesparseflag.is_set || is_set(ciscoipmroutesparseflag.yfilter)) leaf_name_data.push_back(ciscoipmroutesparseflag.get_name_leafdata());
    if (ciscoipmroutesptflag.is_set || is_set(ciscoipmroutesptflag.yfilter)) leaf_name_data.push_back(ciscoipmroutesptflag.get_name_leafdata());
    if (ipmroutedifferentinifpackets.is_set || is_set(ipmroutedifferentinifpackets.yfilter)) leaf_name_data.push_back(ipmroutedifferentinifpackets.get_name_leafdata());
    if (ipmrouteexpirytime.is_set || is_set(ipmrouteexpirytime.yfilter)) leaf_name_data.push_back(ipmrouteexpirytime.get_name_leafdata());
    if (ipmroutehcoctets.is_set || is_set(ipmroutehcoctets.yfilter)) leaf_name_data.push_back(ipmroutehcoctets.get_name_leafdata());
    if (ipmrouteinifindex.is_set || is_set(ipmrouteinifindex.yfilter)) leaf_name_data.push_back(ipmrouteinifindex.get_name_leafdata());
    if (ipmrouteoctets.is_set || is_set(ipmrouteoctets.yfilter)) leaf_name_data.push_back(ipmrouteoctets.get_name_leafdata());
    if (ipmroutepkts.is_set || is_set(ipmroutepkts.yfilter)) leaf_name_data.push_back(ipmroutepkts.get_name_leafdata());
    if (ipmrouteprotocol.is_set || is_set(ipmrouteprotocol.yfilter)) leaf_name_data.push_back(ipmrouteprotocol.get_name_leafdata());
    if (ipmroutertaddress.is_set || is_set(ipmroutertaddress.yfilter)) leaf_name_data.push_back(ipmroutertaddress.get_name_leafdata());
    if (ipmroutertmask.is_set || is_set(ipmroutertmask.yfilter)) leaf_name_data.push_back(ipmroutertmask.get_name_leafdata());
    if (ipmroutertproto.is_set || is_set(ipmroutertproto.yfilter)) leaf_name_data.push_back(ipmroutertproto.get_name_leafdata());
    if (ipmrouterttype.is_set || is_set(ipmrouterttype.yfilter)) leaf_name_data.push_back(ipmrouterttype.get_name_leafdata());
    if (ipmrouteupstreamneighbor.is_set || is_set(ipmrouteupstreamneighbor.yfilter)) leaf_name_data.push_back(ipmrouteupstreamneighbor.get_name_leafdata());
    if (ipmrouteuptime.is_set || is_set(ipmrouteuptime.yfilter)) leaf_name_data.push_back(ipmrouteuptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipMRouteGroup")
    {
        ipmroutegroup = value;
        ipmroutegroup.value_namespace = name_space;
        ipmroutegroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteSource")
    {
        ipmroutesource = value;
        ipmroutesource.value_namespace = name_space;
        ipmroutesource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteSourceMask")
    {
        ipmroutesourcemask = value;
        ipmroutesourcemask.value_namespace = name_space;
        ipmroutesourcemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteBps")
    {
        ciscoipmroutebps = value;
        ciscoipmroutebps.value_namespace = name_space;
        ciscoipmroutebps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteBps2")
    {
        ciscoipmroutebps2 = value;
        ciscoipmroutebps2.value_namespace = name_space;
        ciscoipmroutebps2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteConnectedFlag")
    {
        ciscoipmrouteconnectedflag = value;
        ciscoipmrouteconnectedflag.value_namespace = name_space;
        ciscoipmrouteconnectedflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteDifferentInIfPkts")
    {
        ciscoipmroutedifferentinifpkts = value;
        ciscoipmroutedifferentinifpkts.value_namespace = name_space;
        ciscoipmroutedifferentinifpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteInLimit")
    {
        ciscoipmrouteinlimit = value;
        ciscoipmrouteinlimit.value_namespace = name_space;
        ciscoipmrouteinlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteInLimit2")
    {
        ciscoipmrouteinlimit2 = value;
        ciscoipmrouteinlimit2.value_namespace = name_space;
        ciscoipmrouteinlimit2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteJoinFlag")
    {
        ciscoipmroutejoinflag = value;
        ciscoipmroutejoinflag.value_namespace = name_space;
        ciscoipmroutejoinflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteLastUsed")
    {
        ciscoipmroutelastused = value;
        ciscoipmroutelastused.value_namespace = name_space;
        ciscoipmroutelastused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteLocalFlag")
    {
        ciscoipmroutelocalflag = value;
        ciscoipmroutelocalflag.value_namespace = name_space;
        ciscoipmroutelocalflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteMetric")
    {
        ciscoipmroutemetric = value;
        ciscoipmroutemetric.value_namespace = name_space;
        ciscoipmroutemetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteMetric2")
    {
        ciscoipmroutemetric2 = value;
        ciscoipmroutemetric2.value_namespace = name_space;
        ciscoipmroutemetric2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteMetricPreference")
    {
        ciscoipmroutemetricpreference = value;
        ciscoipmroutemetricpreference.value_namespace = name_space;
        ciscoipmroutemetricpreference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteMsdpFlag")
    {
        ciscoipmroutemsdpflag = value;
        ciscoipmroutemsdpflag.value_namespace = name_space;
        ciscoipmroutemsdpflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteOctets")
    {
        ciscoipmrouteoctets = value;
        ciscoipmrouteoctets.value_namespace = name_space;
        ciscoipmrouteoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRoutePkts")
    {
        ciscoipmroutepkts = value;
        ciscoipmroutepkts.value_namespace = name_space;
        ciscoipmroutepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteProxyJoinFlag")
    {
        ciscoipmrouteproxyjoinflag = value;
        ciscoipmrouteproxyjoinflag.value_namespace = name_space;
        ciscoipmrouteproxyjoinflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRoutePruneFlag")
    {
        ciscoipmroutepruneflag = value;
        ciscoipmroutepruneflag.value_namespace = name_space;
        ciscoipmroutepruneflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteRegisterFlag")
    {
        ciscoipmrouteregisterflag = value;
        ciscoipmrouteregisterflag.value_namespace = name_space;
        ciscoipmrouteregisterflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteRpFlag")
    {
        ciscoipmrouterpflag = value;
        ciscoipmrouterpflag.value_namespace = name_space;
        ciscoipmrouterpflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteSparseFlag")
    {
        ciscoipmroutesparseflag = value;
        ciscoipmroutesparseflag.value_namespace = name_space;
        ciscoipmroutesparseflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoIpMRouteSptFlag")
    {
        ciscoipmroutesptflag = value;
        ciscoipmroutesptflag.value_namespace = name_space;
        ciscoipmroutesptflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteDifferentInIfPackets")
    {
        ipmroutedifferentinifpackets = value;
        ipmroutedifferentinifpackets.value_namespace = name_space;
        ipmroutedifferentinifpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteExpiryTime")
    {
        ipmrouteexpirytime = value;
        ipmrouteexpirytime.value_namespace = name_space;
        ipmrouteexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteHCOctets")
    {
        ipmroutehcoctets = value;
        ipmroutehcoctets.value_namespace = name_space;
        ipmroutehcoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteInIfIndex")
    {
        ipmrouteinifindex = value;
        ipmrouteinifindex.value_namespace = name_space;
        ipmrouteinifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteOctets")
    {
        ipmrouteoctets = value;
        ipmrouteoctets.value_namespace = name_space;
        ipmrouteoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRoutePkts")
    {
        ipmroutepkts = value;
        ipmroutepkts.value_namespace = name_space;
        ipmroutepkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteProtocol")
    {
        ipmrouteprotocol = value;
        ipmrouteprotocol.value_namespace = name_space;
        ipmrouteprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtAddress")
    {
        ipmroutertaddress = value;
        ipmroutertaddress.value_namespace = name_space;
        ipmroutertaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtMask")
    {
        ipmroutertmask = value;
        ipmroutertmask.value_namespace = name_space;
        ipmroutertmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtProto")
    {
        ipmroutertproto = value;
        ipmroutertproto.value_namespace = name_space;
        ipmroutertproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteRtType")
    {
        ipmrouterttype = value;
        ipmrouterttype.value_namespace = name_space;
        ipmrouterttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteUpstreamNeighbor")
    {
        ipmrouteupstreamneighbor = value;
        ipmrouteupstreamneighbor.value_namespace = name_space;
        ipmrouteupstreamneighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipMRouteUpTime")
    {
        ipmrouteuptime = value;
        ipmrouteuptime.value_namespace = name_space;
        ipmrouteuptime.value_namespace_prefix = name_space_prefix;
    }
}

void IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipMRouteGroup")
    {
        ipmroutegroup.yfilter = yfilter;
    }
    if(value_path == "ipMRouteSource")
    {
        ipmroutesource.yfilter = yfilter;
    }
    if(value_path == "ipMRouteSourceMask")
    {
        ipmroutesourcemask.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteBps")
    {
        ciscoipmroutebps.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteBps2")
    {
        ciscoipmroutebps2.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteConnectedFlag")
    {
        ciscoipmrouteconnectedflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteDifferentInIfPkts")
    {
        ciscoipmroutedifferentinifpkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteInLimit")
    {
        ciscoipmrouteinlimit.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteInLimit2")
    {
        ciscoipmrouteinlimit2.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteJoinFlag")
    {
        ciscoipmroutejoinflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteLastUsed")
    {
        ciscoipmroutelastused.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteLocalFlag")
    {
        ciscoipmroutelocalflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMetric")
    {
        ciscoipmroutemetric.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMetric2")
    {
        ciscoipmroutemetric2.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMetricPreference")
    {
        ciscoipmroutemetricpreference.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteMsdpFlag")
    {
        ciscoipmroutemsdpflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteOctets")
    {
        ciscoipmrouteoctets.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRoutePkts")
    {
        ciscoipmroutepkts.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteProxyJoinFlag")
    {
        ciscoipmrouteproxyjoinflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRoutePruneFlag")
    {
        ciscoipmroutepruneflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteRegisterFlag")
    {
        ciscoipmrouteregisterflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteRpFlag")
    {
        ciscoipmrouterpflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteSparseFlag")
    {
        ciscoipmroutesparseflag.yfilter = yfilter;
    }
    if(value_path == "ciscoIpMRouteSptFlag")
    {
        ciscoipmroutesptflag.yfilter = yfilter;
    }
    if(value_path == "ipMRouteDifferentInIfPackets")
    {
        ipmroutedifferentinifpackets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteExpiryTime")
    {
        ipmrouteexpirytime.yfilter = yfilter;
    }
    if(value_path == "ipMRouteHCOctets")
    {
        ipmroutehcoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRouteInIfIndex")
    {
        ipmrouteinifindex.yfilter = yfilter;
    }
    if(value_path == "ipMRouteOctets")
    {
        ipmrouteoctets.yfilter = yfilter;
    }
    if(value_path == "ipMRoutePkts")
    {
        ipmroutepkts.yfilter = yfilter;
    }
    if(value_path == "ipMRouteProtocol")
    {
        ipmrouteprotocol.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtAddress")
    {
        ipmroutertaddress.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtMask")
    {
        ipmroutertmask.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtProto")
    {
        ipmroutertproto.yfilter = yfilter;
    }
    if(value_path == "ipMRouteRtType")
    {
        ipmrouterttype.yfilter = yfilter;
    }
    if(value_path == "ipMRouteUpstreamNeighbor")
    {
        ipmrouteupstreamneighbor.yfilter = yfilter;
    }
    if(value_path == "ipMRouteUpTime")
    {
        ipmrouteuptime.yfilter = yfilter;
    }
}

bool IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteGroup" || name == "ipMRouteSource" || name == "ipMRouteSourceMask" || name == "ciscoIpMRouteBps" || name == "ciscoIpMRouteBps2" || name == "ciscoIpMRouteConnectedFlag" || name == "ciscoIpMRouteDifferentInIfPkts" || name == "ciscoIpMRouteInLimit" || name == "ciscoIpMRouteInLimit2" || name == "ciscoIpMRouteJoinFlag" || name == "ciscoIpMRouteLastUsed" || name == "ciscoIpMRouteLocalFlag" || name == "ciscoIpMRouteMetric" || name == "ciscoIpMRouteMetric2" || name == "ciscoIpMRouteMetricPreference" || name == "ciscoIpMRouteMsdpFlag" || name == "ciscoIpMRouteOctets" || name == "ciscoIpMRoutePkts" || name == "ciscoIpMRouteProxyJoinFlag" || name == "ciscoIpMRoutePruneFlag" || name == "ciscoIpMRouteRegisterFlag" || name == "ciscoIpMRouteRpFlag" || name == "ciscoIpMRouteSparseFlag" || name == "ciscoIpMRouteSptFlag" || name == "ipMRouteDifferentInIfPackets" || name == "ipMRouteExpiryTime" || name == "ipMRouteHCOctets" || name == "ipMRouteInIfIndex" || name == "ipMRouteOctets" || name == "ipMRoutePkts" || name == "ipMRouteProtocol" || name == "ipMRouteRtAddress" || name == "ipMRouteRtMask" || name == "ipMRouteRtProto" || name == "ipMRouteRtType" || name == "ipMRouteUpstreamNeighbor" || name == "ipMRouteUpTime")
        return true;
    return false;
}

const Enum::YLeaf IPMROUTESTDMIB::Ipmroute::Ipmrouteenable::enabled {1, "enabled"};
const Enum::YLeaf IPMROUTESTDMIB::Ipmroute::Ipmrouteenable::disabled {2, "disabled"};

const Enum::YLeaf IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::Ipmroutenexthopstate::pruned {1, "pruned"};
const Enum::YLeaf IPMROUTESTDMIB::Ipmroutenexthoptable::Ipmroutenexthopentry::Ipmroutenexthopstate::forwarding {2, "forwarding"};

const Enum::YLeaf IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::Ipmrouterttype::unicast {1, "unicast"};
const Enum::YLeaf IPMROUTESTDMIB::Ipmroutetable::Ipmrouteentry::Ipmrouterttype::multicast {2, "multicast"};


}
}

