
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "PIM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace PIM_MIB {

PIMMIB::PIMMIB()
    :
    pim(std::make_shared<PIMMIB::Pim>())
	,piminterfacetable(std::make_shared<PIMMIB::Piminterfacetable>())
	,pimneighbortable(std::make_shared<PIMMIB::Pimneighbortable>())
	,pimipmroutetable(std::make_shared<PIMMIB::Pimipmroutetable>())
	,pimrptable(std::make_shared<PIMMIB::Pimrptable>())
	,pimrpsettable(std::make_shared<PIMMIB::Pimrpsettable>())
	,pimipmroutenexthoptable(std::make_shared<PIMMIB::Pimipmroutenexthoptable>())
	,pimcandidaterptable(std::make_shared<PIMMIB::Pimcandidaterptable>())
	,pimcomponenttable(std::make_shared<PIMMIB::Pimcomponenttable>())
{
    pim->parent = this;
    piminterfacetable->parent = this;
    pimneighbortable->parent = this;
    pimipmroutetable->parent = this;
    pimrptable->parent = this;
    pimrpsettable->parent = this;
    pimipmroutenexthoptable->parent = this;
    pimcandidaterptable->parent = this;
    pimcomponenttable->parent = this;

    yang_name = "PIM-MIB"; yang_parent_name = "PIM-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

PIMMIB::~PIMMIB()
{
}

bool PIMMIB::has_data() const
{
    return (pim !=  nullptr && pim->has_data())
	|| (piminterfacetable !=  nullptr && piminterfacetable->has_data())
	|| (pimneighbortable !=  nullptr && pimneighbortable->has_data())
	|| (pimipmroutetable !=  nullptr && pimipmroutetable->has_data())
	|| (pimrptable !=  nullptr && pimrptable->has_data())
	|| (pimrpsettable !=  nullptr && pimrpsettable->has_data())
	|| (pimipmroutenexthoptable !=  nullptr && pimipmroutenexthoptable->has_data())
	|| (pimcandidaterptable !=  nullptr && pimcandidaterptable->has_data())
	|| (pimcomponenttable !=  nullptr && pimcomponenttable->has_data());
}

bool PIMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (pim !=  nullptr && pim->has_operation())
	|| (piminterfacetable !=  nullptr && piminterfacetable->has_operation())
	|| (pimneighbortable !=  nullptr && pimneighbortable->has_operation())
	|| (pimipmroutetable !=  nullptr && pimipmroutetable->has_operation())
	|| (pimrptable !=  nullptr && pimrptable->has_operation())
	|| (pimrpsettable !=  nullptr && pimrpsettable->has_operation())
	|| (pimipmroutenexthoptable !=  nullptr && pimipmroutenexthoptable->has_operation())
	|| (pimcandidaterptable !=  nullptr && pimcandidaterptable->has_operation())
	|| (pimcomponenttable !=  nullptr && pimcomponenttable->has_operation());
}

std::string PIMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<PIMMIB::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "pimInterfaceTable")
    {
        if(piminterfacetable == nullptr)
        {
            piminterfacetable = std::make_shared<PIMMIB::Piminterfacetable>();
        }
        return piminterfacetable;
    }

    if(child_yang_name == "pimNeighborTable")
    {
        if(pimneighbortable == nullptr)
        {
            pimneighbortable = std::make_shared<PIMMIB::Pimneighbortable>();
        }
        return pimneighbortable;
    }

    if(child_yang_name == "pimIpMRouteTable")
    {
        if(pimipmroutetable == nullptr)
        {
            pimipmroutetable = std::make_shared<PIMMIB::Pimipmroutetable>();
        }
        return pimipmroutetable;
    }

    if(child_yang_name == "pimRPTable")
    {
        if(pimrptable == nullptr)
        {
            pimrptable = std::make_shared<PIMMIB::Pimrptable>();
        }
        return pimrptable;
    }

    if(child_yang_name == "pimRPSetTable")
    {
        if(pimrpsettable == nullptr)
        {
            pimrpsettable = std::make_shared<PIMMIB::Pimrpsettable>();
        }
        return pimrpsettable;
    }

    if(child_yang_name == "pimIpMRouteNextHopTable")
    {
        if(pimipmroutenexthoptable == nullptr)
        {
            pimipmroutenexthoptable = std::make_shared<PIMMIB::Pimipmroutenexthoptable>();
        }
        return pimipmroutenexthoptable;
    }

    if(child_yang_name == "pimCandidateRPTable")
    {
        if(pimcandidaterptable == nullptr)
        {
            pimcandidaterptable = std::make_shared<PIMMIB::Pimcandidaterptable>();
        }
        return pimcandidaterptable;
    }

    if(child_yang_name == "pimComponentTable")
    {
        if(pimcomponenttable == nullptr)
        {
            pimcomponenttable = std::make_shared<PIMMIB::Pimcomponenttable>();
        }
        return pimcomponenttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(piminterfacetable != nullptr)
    {
        children["pimInterfaceTable"] = piminterfacetable;
    }

    if(pimneighbortable != nullptr)
    {
        children["pimNeighborTable"] = pimneighbortable;
    }

    if(pimipmroutetable != nullptr)
    {
        children["pimIpMRouteTable"] = pimipmroutetable;
    }

    if(pimrptable != nullptr)
    {
        children["pimRPTable"] = pimrptable;
    }

    if(pimrpsettable != nullptr)
    {
        children["pimRPSetTable"] = pimrpsettable;
    }

    if(pimipmroutenexthoptable != nullptr)
    {
        children["pimIpMRouteNextHopTable"] = pimipmroutenexthoptable;
    }

    if(pimcandidaterptable != nullptr)
    {
        children["pimCandidateRPTable"] = pimcandidaterptable;
    }

    if(pimcomponenttable != nullptr)
    {
        children["pimComponentTable"] = pimcomponenttable;
    }

    return children;
}

void PIMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PIMMIB::clone_ptr() const
{
    return std::make_shared<PIMMIB>();
}

std::string PIMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PIMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PIMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PIMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PIMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim" || name == "pimInterfaceTable" || name == "pimNeighborTable" || name == "pimIpMRouteTable" || name == "pimRPTable" || name == "pimRPSetTable" || name == "pimIpMRouteNextHopTable" || name == "pimCandidateRPTable" || name == "pimComponentTable")
        return true;
    return false;
}

PIMMIB::Pim::Pim()
    :
    pimjoinpruneinterval{YType::int32, "pimJoinPruneInterval"}
{

    yang_name = "pim"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pim::~Pim()
{
}

bool PIMMIB::Pim::has_data() const
{
    return pimjoinpruneinterval.is_set;
}

bool PIMMIB::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimjoinpruneinterval.yfilter);
}

std::string PIMMIB::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimjoinpruneinterval.is_set || is_set(pimjoinpruneinterval.yfilter)) leaf_name_data.push_back(pimjoinpruneinterval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimJoinPruneInterval")
    {
        pimjoinpruneinterval = value;
        pimjoinpruneinterval.value_namespace = name_space;
        pimjoinpruneinterval.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimJoinPruneInterval")
    {
        pimjoinpruneinterval.yfilter = yfilter;
    }
}

bool PIMMIB::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimJoinPruneInterval")
        return true;
    return false;
}

PIMMIB::Piminterfacetable::Piminterfacetable()
{

    yang_name = "pimInterfaceTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Piminterfacetable::~Piminterfacetable()
{
}

bool PIMMIB::Piminterfacetable::has_data() const
{
    for (std::size_t index=0; index<piminterfaceentry.size(); index++)
    {
        if(piminterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Piminterfacetable::has_operation() const
{
    for (std::size_t index=0; index<piminterfaceentry.size(); index++)
    {
        if(piminterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Piminterfacetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Piminterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Piminterfacetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Piminterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimInterfaceEntry")
    {
        auto c = std::make_shared<PIMMIB::Piminterfacetable::Piminterfaceentry>();
        c->parent = this;
        piminterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Piminterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : piminterfaceentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Piminterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Piminterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Piminterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimInterfaceEntry")
        return true;
    return false;
}

PIMMIB::Piminterfacetable::Piminterfaceentry::Piminterfaceentry()
    :
    piminterfaceifindex{YType::int32, "pimInterfaceIfIndex"},
    piminterfaceaddress{YType::str, "pimInterfaceAddress"},
    piminterfacenetmask{YType::str, "pimInterfaceNetMask"},
    piminterfacemode{YType::enumeration, "pimInterfaceMode"},
    piminterfacedr{YType::str, "pimInterfaceDR"},
    piminterfacehellointerval{YType::int32, "pimInterfaceHelloInterval"},
    piminterfacestatus{YType::enumeration, "pimInterfaceStatus"},
    piminterfacejoinpruneinterval{YType::int32, "pimInterfaceJoinPruneInterval"},
    piminterfacecbsrpreference{YType::int32, "pimInterfaceCBSRPreference"}
{

    yang_name = "pimInterfaceEntry"; yang_parent_name = "pimInterfaceTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Piminterfacetable::Piminterfaceentry::~Piminterfaceentry()
{
}

bool PIMMIB::Piminterfacetable::Piminterfaceentry::has_data() const
{
    return piminterfaceifindex.is_set
	|| piminterfaceaddress.is_set
	|| piminterfacenetmask.is_set
	|| piminterfacemode.is_set
	|| piminterfacedr.is_set
	|| piminterfacehellointerval.is_set
	|| piminterfacestatus.is_set
	|| piminterfacejoinpruneinterval.is_set
	|| piminterfacecbsrpreference.is_set;
}

bool PIMMIB::Piminterfacetable::Piminterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(piminterfaceifindex.yfilter)
	|| ydk::is_set(piminterfaceaddress.yfilter)
	|| ydk::is_set(piminterfacenetmask.yfilter)
	|| ydk::is_set(piminterfacemode.yfilter)
	|| ydk::is_set(piminterfacedr.yfilter)
	|| ydk::is_set(piminterfacehellointerval.yfilter)
	|| ydk::is_set(piminterfacestatus.yfilter)
	|| ydk::is_set(piminterfacejoinpruneinterval.yfilter)
	|| ydk::is_set(piminterfacecbsrpreference.yfilter);
}

std::string PIMMIB::Piminterfacetable::Piminterfaceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Piminterfacetable::Piminterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimInterfaceEntry" <<"[pimInterfaceIfIndex='" <<piminterfaceifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Piminterfacetable::Piminterfaceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (piminterfaceifindex.is_set || is_set(piminterfaceifindex.yfilter)) leaf_name_data.push_back(piminterfaceifindex.get_name_leafdata());
    if (piminterfaceaddress.is_set || is_set(piminterfaceaddress.yfilter)) leaf_name_data.push_back(piminterfaceaddress.get_name_leafdata());
    if (piminterfacenetmask.is_set || is_set(piminterfacenetmask.yfilter)) leaf_name_data.push_back(piminterfacenetmask.get_name_leafdata());
    if (piminterfacemode.is_set || is_set(piminterfacemode.yfilter)) leaf_name_data.push_back(piminterfacemode.get_name_leafdata());
    if (piminterfacedr.is_set || is_set(piminterfacedr.yfilter)) leaf_name_data.push_back(piminterfacedr.get_name_leafdata());
    if (piminterfacehellointerval.is_set || is_set(piminterfacehellointerval.yfilter)) leaf_name_data.push_back(piminterfacehellointerval.get_name_leafdata());
    if (piminterfacestatus.is_set || is_set(piminterfacestatus.yfilter)) leaf_name_data.push_back(piminterfacestatus.get_name_leafdata());
    if (piminterfacejoinpruneinterval.is_set || is_set(piminterfacejoinpruneinterval.yfilter)) leaf_name_data.push_back(piminterfacejoinpruneinterval.get_name_leafdata());
    if (piminterfacecbsrpreference.is_set || is_set(piminterfacecbsrpreference.yfilter)) leaf_name_data.push_back(piminterfacecbsrpreference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Piminterfacetable::Piminterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Piminterfacetable::Piminterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Piminterfacetable::Piminterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimInterfaceIfIndex")
    {
        piminterfaceifindex = value;
        piminterfaceifindex.value_namespace = name_space;
        piminterfaceifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceAddress")
    {
        piminterfaceaddress = value;
        piminterfaceaddress.value_namespace = name_space;
        piminterfaceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceNetMask")
    {
        piminterfacenetmask = value;
        piminterfacenetmask.value_namespace = name_space;
        piminterfacenetmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceMode")
    {
        piminterfacemode = value;
        piminterfacemode.value_namespace = name_space;
        piminterfacemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceDR")
    {
        piminterfacedr = value;
        piminterfacedr.value_namespace = name_space;
        piminterfacedr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceHelloInterval")
    {
        piminterfacehellointerval = value;
        piminterfacehellointerval.value_namespace = name_space;
        piminterfacehellointerval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceStatus")
    {
        piminterfacestatus = value;
        piminterfacestatus.value_namespace = name_space;
        piminterfacestatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceJoinPruneInterval")
    {
        piminterfacejoinpruneinterval = value;
        piminterfacejoinpruneinterval.value_namespace = name_space;
        piminterfacejoinpruneinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceCBSRPreference")
    {
        piminterfacecbsrpreference = value;
        piminterfacecbsrpreference.value_namespace = name_space;
        piminterfacecbsrpreference.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Piminterfacetable::Piminterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimInterfaceIfIndex")
    {
        piminterfaceifindex.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceAddress")
    {
        piminterfaceaddress.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceNetMask")
    {
        piminterfacenetmask.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceMode")
    {
        piminterfacemode.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceDR")
    {
        piminterfacedr.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceHelloInterval")
    {
        piminterfacehellointerval.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceStatus")
    {
        piminterfacestatus.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceJoinPruneInterval")
    {
        piminterfacejoinpruneinterval.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceCBSRPreference")
    {
        piminterfacecbsrpreference.yfilter = yfilter;
    }
}

bool PIMMIB::Piminterfacetable::Piminterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimInterfaceIfIndex" || name == "pimInterfaceAddress" || name == "pimInterfaceNetMask" || name == "pimInterfaceMode" || name == "pimInterfaceDR" || name == "pimInterfaceHelloInterval" || name == "pimInterfaceStatus" || name == "pimInterfaceJoinPruneInterval" || name == "pimInterfaceCBSRPreference")
        return true;
    return false;
}

PIMMIB::Pimneighbortable::Pimneighbortable()
{

    yang_name = "pimNeighborTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimneighbortable::~Pimneighbortable()
{
}

bool PIMMIB::Pimneighbortable::has_data() const
{
    for (std::size_t index=0; index<pimneighborentry.size(); index++)
    {
        if(pimneighborentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Pimneighbortable::has_operation() const
{
    for (std::size_t index=0; index<pimneighborentry.size(); index++)
    {
        if(pimneighborentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Pimneighbortable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimneighbortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimneighbortable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimneighbortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimNeighborEntry")
    {
        auto c = std::make_shared<PIMMIB::Pimneighbortable::Pimneighborentry>();
        c->parent = this;
        pimneighborentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimneighbortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pimneighborentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Pimneighbortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Pimneighbortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Pimneighbortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborEntry")
        return true;
    return false;
}

PIMMIB::Pimneighbortable::Pimneighborentry::Pimneighborentry()
    :
    pimneighboraddress{YType::str, "pimNeighborAddress"},
    pimneighborifindex{YType::int32, "pimNeighborIfIndex"},
    pimneighboruptime{YType::uint32, "pimNeighborUpTime"},
    pimneighborexpirytime{YType::uint32, "pimNeighborExpiryTime"},
    pimneighbormode{YType::enumeration, "pimNeighborMode"}
{

    yang_name = "pimNeighborEntry"; yang_parent_name = "pimNeighborTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimneighbortable::Pimneighborentry::~Pimneighborentry()
{
}

bool PIMMIB::Pimneighbortable::Pimneighborentry::has_data() const
{
    return pimneighboraddress.is_set
	|| pimneighborifindex.is_set
	|| pimneighboruptime.is_set
	|| pimneighborexpirytime.is_set
	|| pimneighbormode.is_set;
}

bool PIMMIB::Pimneighbortable::Pimneighborentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimneighboraddress.yfilter)
	|| ydk::is_set(pimneighborifindex.yfilter)
	|| ydk::is_set(pimneighboruptime.yfilter)
	|| ydk::is_set(pimneighborexpirytime.yfilter)
	|| ydk::is_set(pimneighbormode.yfilter);
}

std::string PIMMIB::Pimneighbortable::Pimneighborentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimNeighborTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimneighbortable::Pimneighborentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborEntry" <<"[pimNeighborAddress='" <<pimneighboraddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimneighbortable::Pimneighborentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimneighboraddress.is_set || is_set(pimneighboraddress.yfilter)) leaf_name_data.push_back(pimneighboraddress.get_name_leafdata());
    if (pimneighborifindex.is_set || is_set(pimneighborifindex.yfilter)) leaf_name_data.push_back(pimneighborifindex.get_name_leafdata());
    if (pimneighboruptime.is_set || is_set(pimneighboruptime.yfilter)) leaf_name_data.push_back(pimneighboruptime.get_name_leafdata());
    if (pimneighborexpirytime.is_set || is_set(pimneighborexpirytime.yfilter)) leaf_name_data.push_back(pimneighborexpirytime.get_name_leafdata());
    if (pimneighbormode.is_set || is_set(pimneighbormode.yfilter)) leaf_name_data.push_back(pimneighbormode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimneighbortable::Pimneighborentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimneighbortable::Pimneighborentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pimneighbortable::Pimneighborentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimNeighborAddress")
    {
        pimneighboraddress = value;
        pimneighboraddress.value_namespace = name_space;
        pimneighboraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborIfIndex")
    {
        pimneighborifindex = value;
        pimneighborifindex.value_namespace = name_space;
        pimneighborifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborUpTime")
    {
        pimneighboruptime = value;
        pimneighboruptime.value_namespace = name_space;
        pimneighboruptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborExpiryTime")
    {
        pimneighborexpirytime = value;
        pimneighborexpirytime.value_namespace = name_space;
        pimneighborexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborMode")
    {
        pimneighbormode = value;
        pimneighbormode.value_namespace = name_space;
        pimneighbormode.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pimneighbortable::Pimneighborentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimNeighborAddress")
    {
        pimneighboraddress.yfilter = yfilter;
    }
    if(value_path == "pimNeighborIfIndex")
    {
        pimneighborifindex.yfilter = yfilter;
    }
    if(value_path == "pimNeighborUpTime")
    {
        pimneighboruptime.yfilter = yfilter;
    }
    if(value_path == "pimNeighborExpiryTime")
    {
        pimneighborexpirytime.yfilter = yfilter;
    }
    if(value_path == "pimNeighborMode")
    {
        pimneighbormode.yfilter = yfilter;
    }
}

bool PIMMIB::Pimneighbortable::Pimneighborentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborAddress" || name == "pimNeighborIfIndex" || name == "pimNeighborUpTime" || name == "pimNeighborExpiryTime" || name == "pimNeighborMode")
        return true;
    return false;
}

PIMMIB::Pimipmroutetable::Pimipmroutetable()
{

    yang_name = "pimIpMRouteTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimipmroutetable::~Pimipmroutetable()
{
}

bool PIMMIB::Pimipmroutetable::has_data() const
{
    for (std::size_t index=0; index<pimipmrouteentry.size(); index++)
    {
        if(pimipmrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Pimipmroutetable::has_operation() const
{
    for (std::size_t index=0; index<pimipmrouteentry.size(); index++)
    {
        if(pimipmrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Pimipmroutetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimipmroutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimipmroutetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimipmroutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimIpMRouteEntry")
    {
        auto c = std::make_shared<PIMMIB::Pimipmroutetable::Pimipmrouteentry>();
        c->parent = this;
        pimipmrouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimipmroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pimipmrouteentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Pimipmroutetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Pimipmroutetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Pimipmroutetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimIpMRouteEntry")
        return true;
    return false;
}

PIMMIB::Pimipmroutetable::Pimipmrouteentry::Pimipmrouteentry()
    :
    ipmroutegroup{YType::str, "ipMRouteGroup"},
    ipmroutesource{YType::str, "ipMRouteSource"},
    ipmroutesourcemask{YType::str, "ipMRouteSourceMask"},
    pimipmrouteupstreamasserttimer{YType::uint32, "pimIpMRouteUpstreamAssertTimer"},
    pimipmrouteassertmetric{YType::int32, "pimIpMRouteAssertMetric"},
    pimipmrouteassertmetricpref{YType::int32, "pimIpMRouteAssertMetricPref"},
    pimipmrouteassertrptbit{YType::boolean, "pimIpMRouteAssertRPTBit"},
    pimipmrouteflags{YType::str, "pimIpMRouteFlags"}
{

    yang_name = "pimIpMRouteEntry"; yang_parent_name = "pimIpMRouteTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimipmroutetable::Pimipmrouteentry::~Pimipmrouteentry()
{
}

bool PIMMIB::Pimipmroutetable::Pimipmrouteentry::has_data() const
{
    return ipmroutegroup.is_set
	|| ipmroutesource.is_set
	|| ipmroutesourcemask.is_set
	|| pimipmrouteupstreamasserttimer.is_set
	|| pimipmrouteassertmetric.is_set
	|| pimipmrouteassertmetricpref.is_set
	|| pimipmrouteassertrptbit.is_set
	|| pimipmrouteflags.is_set;
}

bool PIMMIB::Pimipmroutetable::Pimipmrouteentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutegroup.yfilter)
	|| ydk::is_set(ipmroutesource.yfilter)
	|| ydk::is_set(ipmroutesourcemask.yfilter)
	|| ydk::is_set(pimipmrouteupstreamasserttimer.yfilter)
	|| ydk::is_set(pimipmrouteassertmetric.yfilter)
	|| ydk::is_set(pimipmrouteassertmetricpref.yfilter)
	|| ydk::is_set(pimipmrouteassertrptbit.yfilter)
	|| ydk::is_set(pimipmrouteflags.yfilter);
}

std::string PIMMIB::Pimipmroutetable::Pimipmrouteentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimIpMRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimipmroutetable::Pimipmrouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteEntry" <<"[ipMRouteGroup='" <<ipmroutegroup <<"']" <<"[ipMRouteSource='" <<ipmroutesource <<"']" <<"[ipMRouteSourceMask='" <<ipmroutesourcemask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimipmroutetable::Pimipmrouteentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutegroup.is_set || is_set(ipmroutegroup.yfilter)) leaf_name_data.push_back(ipmroutegroup.get_name_leafdata());
    if (ipmroutesource.is_set || is_set(ipmroutesource.yfilter)) leaf_name_data.push_back(ipmroutesource.get_name_leafdata());
    if (ipmroutesourcemask.is_set || is_set(ipmroutesourcemask.yfilter)) leaf_name_data.push_back(ipmroutesourcemask.get_name_leafdata());
    if (pimipmrouteupstreamasserttimer.is_set || is_set(pimipmrouteupstreamasserttimer.yfilter)) leaf_name_data.push_back(pimipmrouteupstreamasserttimer.get_name_leafdata());
    if (pimipmrouteassertmetric.is_set || is_set(pimipmrouteassertmetric.yfilter)) leaf_name_data.push_back(pimipmrouteassertmetric.get_name_leafdata());
    if (pimipmrouteassertmetricpref.is_set || is_set(pimipmrouteassertmetricpref.yfilter)) leaf_name_data.push_back(pimipmrouteassertmetricpref.get_name_leafdata());
    if (pimipmrouteassertrptbit.is_set || is_set(pimipmrouteassertrptbit.yfilter)) leaf_name_data.push_back(pimipmrouteassertrptbit.get_name_leafdata());
    if (pimipmrouteflags.is_set || is_set(pimipmrouteflags.yfilter)) leaf_name_data.push_back(pimipmrouteflags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimipmroutetable::Pimipmrouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimipmroutetable::Pimipmrouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pimipmroutetable::Pimipmrouteentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pimIpMRouteUpstreamAssertTimer")
    {
        pimipmrouteupstreamasserttimer = value;
        pimipmrouteupstreamasserttimer.value_namespace = name_space;
        pimipmrouteupstreamasserttimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimIpMRouteAssertMetric")
    {
        pimipmrouteassertmetric = value;
        pimipmrouteassertmetric.value_namespace = name_space;
        pimipmrouteassertmetric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimIpMRouteAssertMetricPref")
    {
        pimipmrouteassertmetricpref = value;
        pimipmrouteassertmetricpref.value_namespace = name_space;
        pimipmrouteassertmetricpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimIpMRouteAssertRPTBit")
    {
        pimipmrouteassertrptbit = value;
        pimipmrouteassertrptbit.value_namespace = name_space;
        pimipmrouteassertrptbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimIpMRouteFlags")
    {
        pimipmrouteflags = value;
        pimipmrouteflags.value_namespace = name_space;
        pimipmrouteflags.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pimipmroutetable::Pimipmrouteentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "pimIpMRouteUpstreamAssertTimer")
    {
        pimipmrouteupstreamasserttimer.yfilter = yfilter;
    }
    if(value_path == "pimIpMRouteAssertMetric")
    {
        pimipmrouteassertmetric.yfilter = yfilter;
    }
    if(value_path == "pimIpMRouteAssertMetricPref")
    {
        pimipmrouteassertmetricpref.yfilter = yfilter;
    }
    if(value_path == "pimIpMRouteAssertRPTBit")
    {
        pimipmrouteassertrptbit.yfilter = yfilter;
    }
    if(value_path == "pimIpMRouteFlags")
    {
        pimipmrouteflags.yfilter = yfilter;
    }
}

bool PIMMIB::Pimipmroutetable::Pimipmrouteentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteGroup" || name == "ipMRouteSource" || name == "ipMRouteSourceMask" || name == "pimIpMRouteUpstreamAssertTimer" || name == "pimIpMRouteAssertMetric" || name == "pimIpMRouteAssertMetricPref" || name == "pimIpMRouteAssertRPTBit" || name == "pimIpMRouteFlags")
        return true;
    return false;
}

PIMMIB::Pimrptable::Pimrptable()
{

    yang_name = "pimRPTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimrptable::~Pimrptable()
{
}

bool PIMMIB::Pimrptable::has_data() const
{
    for (std::size_t index=0; index<pimrpentry.size(); index++)
    {
        if(pimrpentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Pimrptable::has_operation() const
{
    for (std::size_t index=0; index<pimrpentry.size(); index++)
    {
        if(pimrpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Pimrptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimrptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimrptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimrptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimRPEntry")
    {
        auto c = std::make_shared<PIMMIB::Pimrptable::Pimrpentry>();
        c->parent = this;
        pimrpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimrptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pimrpentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Pimrptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Pimrptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Pimrptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPEntry")
        return true;
    return false;
}

PIMMIB::Pimrptable::Pimrpentry::Pimrpentry()
    :
    pimrpgroupaddress{YType::str, "pimRPGroupAddress"},
    pimrpaddress{YType::str, "pimRPAddress"},
    pimrpstate{YType::enumeration, "pimRPState"},
    pimrpstatetimer{YType::uint32, "pimRPStateTimer"},
    pimrplastchange{YType::uint32, "pimRPLastChange"},
    pimrprowstatus{YType::enumeration, "pimRPRowStatus"}
{

    yang_name = "pimRPEntry"; yang_parent_name = "pimRPTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimrptable::Pimrpentry::~Pimrpentry()
{
}

bool PIMMIB::Pimrptable::Pimrpentry::has_data() const
{
    return pimrpgroupaddress.is_set
	|| pimrpaddress.is_set
	|| pimrpstate.is_set
	|| pimrpstatetimer.is_set
	|| pimrplastchange.is_set
	|| pimrprowstatus.is_set;
}

bool PIMMIB::Pimrptable::Pimrpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimrpgroupaddress.yfilter)
	|| ydk::is_set(pimrpaddress.yfilter)
	|| ydk::is_set(pimrpstate.yfilter)
	|| ydk::is_set(pimrpstatetimer.yfilter)
	|| ydk::is_set(pimrplastchange.yfilter)
	|| ydk::is_set(pimrprowstatus.yfilter);
}

std::string PIMMIB::Pimrptable::Pimrpentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimRPTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimrptable::Pimrpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPEntry" <<"[pimRPGroupAddress='" <<pimrpgroupaddress <<"']" <<"[pimRPAddress='" <<pimrpaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimrptable::Pimrpentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimrpgroupaddress.is_set || is_set(pimrpgroupaddress.yfilter)) leaf_name_data.push_back(pimrpgroupaddress.get_name_leafdata());
    if (pimrpaddress.is_set || is_set(pimrpaddress.yfilter)) leaf_name_data.push_back(pimrpaddress.get_name_leafdata());
    if (pimrpstate.is_set || is_set(pimrpstate.yfilter)) leaf_name_data.push_back(pimrpstate.get_name_leafdata());
    if (pimrpstatetimer.is_set || is_set(pimrpstatetimer.yfilter)) leaf_name_data.push_back(pimrpstatetimer.get_name_leafdata());
    if (pimrplastchange.is_set || is_set(pimrplastchange.yfilter)) leaf_name_data.push_back(pimrplastchange.get_name_leafdata());
    if (pimrprowstatus.is_set || is_set(pimrprowstatus.yfilter)) leaf_name_data.push_back(pimrprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimrptable::Pimrpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimrptable::Pimrpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pimrptable::Pimrpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimRPGroupAddress")
    {
        pimrpgroupaddress = value;
        pimrpgroupaddress.value_namespace = name_space;
        pimrpgroupaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPAddress")
    {
        pimrpaddress = value;
        pimrpaddress.value_namespace = name_space;
        pimrpaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPState")
    {
        pimrpstate = value;
        pimrpstate.value_namespace = name_space;
        pimrpstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPStateTimer")
    {
        pimrpstatetimer = value;
        pimrpstatetimer.value_namespace = name_space;
        pimrpstatetimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPLastChange")
    {
        pimrplastchange = value;
        pimrplastchange.value_namespace = name_space;
        pimrplastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPRowStatus")
    {
        pimrprowstatus = value;
        pimrprowstatus.value_namespace = name_space;
        pimrprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pimrptable::Pimrpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimRPGroupAddress")
    {
        pimrpgroupaddress.yfilter = yfilter;
    }
    if(value_path == "pimRPAddress")
    {
        pimrpaddress.yfilter = yfilter;
    }
    if(value_path == "pimRPState")
    {
        pimrpstate.yfilter = yfilter;
    }
    if(value_path == "pimRPStateTimer")
    {
        pimrpstatetimer.yfilter = yfilter;
    }
    if(value_path == "pimRPLastChange")
    {
        pimrplastchange.yfilter = yfilter;
    }
    if(value_path == "pimRPRowStatus")
    {
        pimrprowstatus.yfilter = yfilter;
    }
}

bool PIMMIB::Pimrptable::Pimrpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPGroupAddress" || name == "pimRPAddress" || name == "pimRPState" || name == "pimRPStateTimer" || name == "pimRPLastChange" || name == "pimRPRowStatus")
        return true;
    return false;
}

PIMMIB::Pimrpsettable::Pimrpsettable()
{

    yang_name = "pimRPSetTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimrpsettable::~Pimrpsettable()
{
}

bool PIMMIB::Pimrpsettable::has_data() const
{
    for (std::size_t index=0; index<pimrpsetentry.size(); index++)
    {
        if(pimrpsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Pimrpsettable::has_operation() const
{
    for (std::size_t index=0; index<pimrpsetentry.size(); index++)
    {
        if(pimrpsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Pimrpsettable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimrpsettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimrpsettable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimrpsettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimRPSetEntry")
    {
        auto c = std::make_shared<PIMMIB::Pimrpsettable::Pimrpsetentry>();
        c->parent = this;
        pimrpsetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimrpsettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pimrpsetentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Pimrpsettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Pimrpsettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Pimrpsettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPSetEntry")
        return true;
    return false;
}

PIMMIB::Pimrpsettable::Pimrpsetentry::Pimrpsetentry()
    :
    pimrpsetcomponent{YType::int32, "pimRPSetComponent"},
    pimrpsetgroupaddress{YType::str, "pimRPSetGroupAddress"},
    pimrpsetgroupmask{YType::str, "pimRPSetGroupMask"},
    pimrpsetaddress{YType::str, "pimRPSetAddress"},
    pimrpsetholdtime{YType::int32, "pimRPSetHoldTime"},
    pimrpsetexpirytime{YType::uint32, "pimRPSetExpiryTime"}
{

    yang_name = "pimRPSetEntry"; yang_parent_name = "pimRPSetTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimrpsettable::Pimrpsetentry::~Pimrpsetentry()
{
}

bool PIMMIB::Pimrpsettable::Pimrpsetentry::has_data() const
{
    return pimrpsetcomponent.is_set
	|| pimrpsetgroupaddress.is_set
	|| pimrpsetgroupmask.is_set
	|| pimrpsetaddress.is_set
	|| pimrpsetholdtime.is_set
	|| pimrpsetexpirytime.is_set;
}

bool PIMMIB::Pimrpsettable::Pimrpsetentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimrpsetcomponent.yfilter)
	|| ydk::is_set(pimrpsetgroupaddress.yfilter)
	|| ydk::is_set(pimrpsetgroupmask.yfilter)
	|| ydk::is_set(pimrpsetaddress.yfilter)
	|| ydk::is_set(pimrpsetholdtime.yfilter)
	|| ydk::is_set(pimrpsetexpirytime.yfilter);
}

std::string PIMMIB::Pimrpsettable::Pimrpsetentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimRPSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimrpsettable::Pimrpsetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPSetEntry" <<"[pimRPSetComponent='" <<pimrpsetcomponent <<"']" <<"[pimRPSetGroupAddress='" <<pimrpsetgroupaddress <<"']" <<"[pimRPSetGroupMask='" <<pimrpsetgroupmask <<"']" <<"[pimRPSetAddress='" <<pimrpsetaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimrpsettable::Pimrpsetentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimrpsetcomponent.is_set || is_set(pimrpsetcomponent.yfilter)) leaf_name_data.push_back(pimrpsetcomponent.get_name_leafdata());
    if (pimrpsetgroupaddress.is_set || is_set(pimrpsetgroupaddress.yfilter)) leaf_name_data.push_back(pimrpsetgroupaddress.get_name_leafdata());
    if (pimrpsetgroupmask.is_set || is_set(pimrpsetgroupmask.yfilter)) leaf_name_data.push_back(pimrpsetgroupmask.get_name_leafdata());
    if (pimrpsetaddress.is_set || is_set(pimrpsetaddress.yfilter)) leaf_name_data.push_back(pimrpsetaddress.get_name_leafdata());
    if (pimrpsetholdtime.is_set || is_set(pimrpsetholdtime.yfilter)) leaf_name_data.push_back(pimrpsetholdtime.get_name_leafdata());
    if (pimrpsetexpirytime.is_set || is_set(pimrpsetexpirytime.yfilter)) leaf_name_data.push_back(pimrpsetexpirytime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimrpsettable::Pimrpsetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimrpsettable::Pimrpsetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pimrpsettable::Pimrpsetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimRPSetComponent")
    {
        pimrpsetcomponent = value;
        pimrpsetcomponent.value_namespace = name_space;
        pimrpsetcomponent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPSetGroupAddress")
    {
        pimrpsetgroupaddress = value;
        pimrpsetgroupaddress.value_namespace = name_space;
        pimrpsetgroupaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPSetGroupMask")
    {
        pimrpsetgroupmask = value;
        pimrpsetgroupmask.value_namespace = name_space;
        pimrpsetgroupmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPSetAddress")
    {
        pimrpsetaddress = value;
        pimrpsetaddress.value_namespace = name_space;
        pimrpsetaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPSetHoldTime")
    {
        pimrpsetholdtime = value;
        pimrpsetholdtime.value_namespace = name_space;
        pimrpsetholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPSetExpiryTime")
    {
        pimrpsetexpirytime = value;
        pimrpsetexpirytime.value_namespace = name_space;
        pimrpsetexpirytime.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pimrpsettable::Pimrpsetentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimRPSetComponent")
    {
        pimrpsetcomponent.yfilter = yfilter;
    }
    if(value_path == "pimRPSetGroupAddress")
    {
        pimrpsetgroupaddress.yfilter = yfilter;
    }
    if(value_path == "pimRPSetGroupMask")
    {
        pimrpsetgroupmask.yfilter = yfilter;
    }
    if(value_path == "pimRPSetAddress")
    {
        pimrpsetaddress.yfilter = yfilter;
    }
    if(value_path == "pimRPSetHoldTime")
    {
        pimrpsetholdtime.yfilter = yfilter;
    }
    if(value_path == "pimRPSetExpiryTime")
    {
        pimrpsetexpirytime.yfilter = yfilter;
    }
}

bool PIMMIB::Pimrpsettable::Pimrpsetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPSetComponent" || name == "pimRPSetGroupAddress" || name == "pimRPSetGroupMask" || name == "pimRPSetAddress" || name == "pimRPSetHoldTime" || name == "pimRPSetExpiryTime")
        return true;
    return false;
}

PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthoptable()
{

    yang_name = "pimIpMRouteNextHopTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimipmroutenexthoptable::~Pimipmroutenexthoptable()
{
}

bool PIMMIB::Pimipmroutenexthoptable::has_data() const
{
    for (std::size_t index=0; index<pimipmroutenexthopentry.size(); index++)
    {
        if(pimipmroutenexthopentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Pimipmroutenexthoptable::has_operation() const
{
    for (std::size_t index=0; index<pimipmroutenexthopentry.size(); index++)
    {
        if(pimipmroutenexthopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Pimipmroutenexthoptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimipmroutenexthoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteNextHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimipmroutenexthoptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimipmroutenexthoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimIpMRouteNextHopEntry")
    {
        auto c = std::make_shared<PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry>();
        c->parent = this;
        pimipmroutenexthopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimipmroutenexthoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pimipmroutenexthopentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Pimipmroutenexthoptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Pimipmroutenexthoptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Pimipmroutenexthoptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimIpMRouteNextHopEntry")
        return true;
    return false;
}

PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopentry()
    :
    ipmroutenexthopgroup{YType::str, "ipMRouteNextHopGroup"},
    ipmroutenexthopsource{YType::str, "ipMRouteNextHopSource"},
    ipmroutenexthopsourcemask{YType::str, "ipMRouteNextHopSourceMask"},
    ipmroutenexthopifindex{YType::str, "ipMRouteNextHopIfIndex"},
    ipmroutenexthopaddress{YType::str, "ipMRouteNextHopAddress"},
    pimipmroutenexthopprunereason{YType::enumeration, "pimIpMRouteNextHopPruneReason"}
{

    yang_name = "pimIpMRouteNextHopEntry"; yang_parent_name = "pimIpMRouteNextHopTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::~Pimipmroutenexthopentry()
{
}

bool PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::has_data() const
{
    return ipmroutenexthopgroup.is_set
	|| ipmroutenexthopsource.is_set
	|| ipmroutenexthopsourcemask.is_set
	|| ipmroutenexthopifindex.is_set
	|| ipmroutenexthopaddress.is_set
	|| pimipmroutenexthopprunereason.is_set;
}

bool PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutenexthopgroup.yfilter)
	|| ydk::is_set(ipmroutenexthopsource.yfilter)
	|| ydk::is_set(ipmroutenexthopsourcemask.yfilter)
	|| ydk::is_set(ipmroutenexthopifindex.yfilter)
	|| ydk::is_set(ipmroutenexthopaddress.yfilter)
	|| ydk::is_set(pimipmroutenexthopprunereason.yfilter);
}

std::string PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimIpMRouteNextHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteNextHopEntry" <<"[ipMRouteNextHopGroup='" <<ipmroutenexthopgroup <<"']" <<"[ipMRouteNextHopSource='" <<ipmroutenexthopsource <<"']" <<"[ipMRouteNextHopSourceMask='" <<ipmroutenexthopsourcemask <<"']" <<"[ipMRouteNextHopIfIndex='" <<ipmroutenexthopifindex <<"']" <<"[ipMRouteNextHopAddress='" <<ipmroutenexthopaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutenexthopgroup.is_set || is_set(ipmroutenexthopgroup.yfilter)) leaf_name_data.push_back(ipmroutenexthopgroup.get_name_leafdata());
    if (ipmroutenexthopsource.is_set || is_set(ipmroutenexthopsource.yfilter)) leaf_name_data.push_back(ipmroutenexthopsource.get_name_leafdata());
    if (ipmroutenexthopsourcemask.is_set || is_set(ipmroutenexthopsourcemask.yfilter)) leaf_name_data.push_back(ipmroutenexthopsourcemask.get_name_leafdata());
    if (ipmroutenexthopifindex.is_set || is_set(ipmroutenexthopifindex.yfilter)) leaf_name_data.push_back(ipmroutenexthopifindex.get_name_leafdata());
    if (ipmroutenexthopaddress.is_set || is_set(ipmroutenexthopaddress.yfilter)) leaf_name_data.push_back(ipmroutenexthopaddress.get_name_leafdata());
    if (pimipmroutenexthopprunereason.is_set || is_set(pimipmroutenexthopprunereason.yfilter)) leaf_name_data.push_back(pimipmroutenexthopprunereason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pimIpMRouteNextHopPruneReason")
    {
        pimipmroutenexthopprunereason = value;
        pimipmroutenexthopprunereason.value_namespace = name_space;
        pimipmroutenexthopprunereason.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "pimIpMRouteNextHopPruneReason")
    {
        pimipmroutenexthopprunereason.yfilter = yfilter;
    }
}

bool PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteNextHopGroup" || name == "ipMRouteNextHopSource" || name == "ipMRouteNextHopSourceMask" || name == "ipMRouteNextHopIfIndex" || name == "ipMRouteNextHopAddress" || name == "pimIpMRouteNextHopPruneReason")
        return true;
    return false;
}

PIMMIB::Pimcandidaterptable::Pimcandidaterptable()
{

    yang_name = "pimCandidateRPTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimcandidaterptable::~Pimcandidaterptable()
{
}

bool PIMMIB::Pimcandidaterptable::has_data() const
{
    for (std::size_t index=0; index<pimcandidaterpentry.size(); index++)
    {
        if(pimcandidaterpentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Pimcandidaterptable::has_operation() const
{
    for (std::size_t index=0; index<pimcandidaterpentry.size(); index++)
    {
        if(pimcandidaterpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Pimcandidaterptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimcandidaterptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimCandidateRPTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimcandidaterptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimcandidaterptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimCandidateRPEntry")
    {
        auto c = std::make_shared<PIMMIB::Pimcandidaterptable::Pimcandidaterpentry>();
        c->parent = this;
        pimcandidaterpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimcandidaterptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pimcandidaterpentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Pimcandidaterptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Pimcandidaterptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Pimcandidaterptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimCandidateRPEntry")
        return true;
    return false;
}

PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::Pimcandidaterpentry()
    :
    pimcandidaterpgroupaddress{YType::str, "pimCandidateRPGroupAddress"},
    pimcandidaterpgroupmask{YType::str, "pimCandidateRPGroupMask"},
    pimcandidaterpaddress{YType::str, "pimCandidateRPAddress"},
    pimcandidaterprowstatus{YType::enumeration, "pimCandidateRPRowStatus"}
{

    yang_name = "pimCandidateRPEntry"; yang_parent_name = "pimCandidateRPTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::~Pimcandidaterpentry()
{
}

bool PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::has_data() const
{
    return pimcandidaterpgroupaddress.is_set
	|| pimcandidaterpgroupmask.is_set
	|| pimcandidaterpaddress.is_set
	|| pimcandidaterprowstatus.is_set;
}

bool PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimcandidaterpgroupaddress.yfilter)
	|| ydk::is_set(pimcandidaterpgroupmask.yfilter)
	|| ydk::is_set(pimcandidaterpaddress.yfilter)
	|| ydk::is_set(pimcandidaterprowstatus.yfilter);
}

std::string PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimCandidateRPTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimCandidateRPEntry" <<"[pimCandidateRPGroupAddress='" <<pimcandidaterpgroupaddress <<"']" <<"[pimCandidateRPGroupMask='" <<pimcandidaterpgroupmask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimcandidaterpgroupaddress.is_set || is_set(pimcandidaterpgroupaddress.yfilter)) leaf_name_data.push_back(pimcandidaterpgroupaddress.get_name_leafdata());
    if (pimcandidaterpgroupmask.is_set || is_set(pimcandidaterpgroupmask.yfilter)) leaf_name_data.push_back(pimcandidaterpgroupmask.get_name_leafdata());
    if (pimcandidaterpaddress.is_set || is_set(pimcandidaterpaddress.yfilter)) leaf_name_data.push_back(pimcandidaterpaddress.get_name_leafdata());
    if (pimcandidaterprowstatus.is_set || is_set(pimcandidaterprowstatus.yfilter)) leaf_name_data.push_back(pimcandidaterprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimCandidateRPGroupAddress")
    {
        pimcandidaterpgroupaddress = value;
        pimcandidaterpgroupaddress.value_namespace = name_space;
        pimcandidaterpgroupaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimCandidateRPGroupMask")
    {
        pimcandidaterpgroupmask = value;
        pimcandidaterpgroupmask.value_namespace = name_space;
        pimcandidaterpgroupmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimCandidateRPAddress")
    {
        pimcandidaterpaddress = value;
        pimcandidaterpaddress.value_namespace = name_space;
        pimcandidaterpaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimCandidateRPRowStatus")
    {
        pimcandidaterprowstatus = value;
        pimcandidaterprowstatus.value_namespace = name_space;
        pimcandidaterprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimCandidateRPGroupAddress")
    {
        pimcandidaterpgroupaddress.yfilter = yfilter;
    }
    if(value_path == "pimCandidateRPGroupMask")
    {
        pimcandidaterpgroupmask.yfilter = yfilter;
    }
    if(value_path == "pimCandidateRPAddress")
    {
        pimcandidaterpaddress.yfilter = yfilter;
    }
    if(value_path == "pimCandidateRPRowStatus")
    {
        pimcandidaterprowstatus.yfilter = yfilter;
    }
}

bool PIMMIB::Pimcandidaterptable::Pimcandidaterpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimCandidateRPGroupAddress" || name == "pimCandidateRPGroupMask" || name == "pimCandidateRPAddress" || name == "pimCandidateRPRowStatus")
        return true;
    return false;
}

PIMMIB::Pimcomponenttable::Pimcomponenttable()
{

    yang_name = "pimComponentTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimcomponenttable::~Pimcomponenttable()
{
}

bool PIMMIB::Pimcomponenttable::has_data() const
{
    for (std::size_t index=0; index<pimcomponententry.size(); index++)
    {
        if(pimcomponententry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::Pimcomponenttable::has_operation() const
{
    for (std::size_t index=0; index<pimcomponententry.size(); index++)
    {
        if(pimcomponententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::Pimcomponenttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimcomponenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimComponentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimcomponenttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimcomponenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimComponentEntry")
    {
        auto c = std::make_shared<PIMMIB::Pimcomponenttable::Pimcomponententry>();
        c->parent = this;
        pimcomponententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimcomponenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : pimcomponententry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::Pimcomponenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::Pimcomponenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::Pimcomponenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimComponentEntry")
        return true;
    return false;
}

PIMMIB::Pimcomponenttable::Pimcomponententry::Pimcomponententry()
    :
    pimcomponentindex{YType::int32, "pimComponentIndex"},
    pimcomponentbsraddress{YType::str, "pimComponentBSRAddress"},
    pimcomponentbsrexpirytime{YType::uint32, "pimComponentBSRExpiryTime"},
    pimcomponentcrpholdtime{YType::int32, "pimComponentCRPHoldTime"},
    pimcomponentstatus{YType::enumeration, "pimComponentStatus"}
{

    yang_name = "pimComponentEntry"; yang_parent_name = "pimComponentTable"; is_top_level_class = false; has_list_ancestor = false;
}

PIMMIB::Pimcomponenttable::Pimcomponententry::~Pimcomponententry()
{
}

bool PIMMIB::Pimcomponenttable::Pimcomponententry::has_data() const
{
    return pimcomponentindex.is_set
	|| pimcomponentbsraddress.is_set
	|| pimcomponentbsrexpirytime.is_set
	|| pimcomponentcrpholdtime.is_set
	|| pimcomponentstatus.is_set;
}

bool PIMMIB::Pimcomponenttable::Pimcomponententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimcomponentindex.yfilter)
	|| ydk::is_set(pimcomponentbsraddress.yfilter)
	|| ydk::is_set(pimcomponentbsrexpirytime.yfilter)
	|| ydk::is_set(pimcomponentcrpholdtime.yfilter)
	|| ydk::is_set(pimcomponentstatus.yfilter);
}

std::string PIMMIB::Pimcomponenttable::Pimcomponententry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimComponentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::Pimcomponenttable::Pimcomponententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimComponentEntry" <<"[pimComponentIndex='" <<pimcomponentindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::Pimcomponenttable::Pimcomponententry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimcomponentindex.is_set || is_set(pimcomponentindex.yfilter)) leaf_name_data.push_back(pimcomponentindex.get_name_leafdata());
    if (pimcomponentbsraddress.is_set || is_set(pimcomponentbsraddress.yfilter)) leaf_name_data.push_back(pimcomponentbsraddress.get_name_leafdata());
    if (pimcomponentbsrexpirytime.is_set || is_set(pimcomponentbsrexpirytime.yfilter)) leaf_name_data.push_back(pimcomponentbsrexpirytime.get_name_leafdata());
    if (pimcomponentcrpholdtime.is_set || is_set(pimcomponentcrpholdtime.yfilter)) leaf_name_data.push_back(pimcomponentcrpholdtime.get_name_leafdata());
    if (pimcomponentstatus.is_set || is_set(pimcomponentstatus.yfilter)) leaf_name_data.push_back(pimcomponentstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::Pimcomponenttable::Pimcomponententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::Pimcomponenttable::Pimcomponententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::Pimcomponenttable::Pimcomponententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimComponentIndex")
    {
        pimcomponentindex = value;
        pimcomponentindex.value_namespace = name_space;
        pimcomponentindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimComponentBSRAddress")
    {
        pimcomponentbsraddress = value;
        pimcomponentbsraddress.value_namespace = name_space;
        pimcomponentbsraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimComponentBSRExpiryTime")
    {
        pimcomponentbsrexpirytime = value;
        pimcomponentbsrexpirytime.value_namespace = name_space;
        pimcomponentbsrexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimComponentCRPHoldTime")
    {
        pimcomponentcrpholdtime = value;
        pimcomponentcrpholdtime.value_namespace = name_space;
        pimcomponentcrpholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimComponentStatus")
    {
        pimcomponentstatus = value;
        pimcomponentstatus.value_namespace = name_space;
        pimcomponentstatus.value_namespace_prefix = name_space_prefix;
    }
}

void PIMMIB::Pimcomponenttable::Pimcomponententry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimComponentIndex")
    {
        pimcomponentindex.yfilter = yfilter;
    }
    if(value_path == "pimComponentBSRAddress")
    {
        pimcomponentbsraddress.yfilter = yfilter;
    }
    if(value_path == "pimComponentBSRExpiryTime")
    {
        pimcomponentbsrexpirytime.yfilter = yfilter;
    }
    if(value_path == "pimComponentCRPHoldTime")
    {
        pimcomponentcrpholdtime.yfilter = yfilter;
    }
    if(value_path == "pimComponentStatus")
    {
        pimcomponentstatus.yfilter = yfilter;
    }
}

bool PIMMIB::Pimcomponenttable::Pimcomponententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimComponentIndex" || name == "pimComponentBSRAddress" || name == "pimComponentBSRExpiryTime" || name == "pimComponentCRPHoldTime" || name == "pimComponentStatus")
        return true;
    return false;
}

const Enum::YLeaf PIMMIB::Piminterfacetable::Piminterfaceentry::Piminterfacemode::dense {1, "dense"};
const Enum::YLeaf PIMMIB::Piminterfacetable::Piminterfaceentry::Piminterfacemode::sparse {2, "sparse"};
const Enum::YLeaf PIMMIB::Piminterfacetable::Piminterfaceentry::Piminterfacemode::sparseDense {3, "sparseDense"};

const Enum::YLeaf PIMMIB::Pimneighbortable::Pimneighborentry::Pimneighbormode::dense {1, "dense"};
const Enum::YLeaf PIMMIB::Pimneighbortable::Pimneighborentry::Pimneighbormode::sparse {2, "sparse"};

const Enum::YLeaf PIMMIB::Pimrptable::Pimrpentry::Pimrpstate::up {1, "up"};
const Enum::YLeaf PIMMIB::Pimrptable::Pimrpentry::Pimrpstate::down {2, "down"};

const Enum::YLeaf PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason::other {1, "other"};
const Enum::YLeaf PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason::prune {2, "prune"};
const Enum::YLeaf PIMMIB::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason::assert {3, "assert"};


}
}

