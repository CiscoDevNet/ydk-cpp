
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
    , piminterfacetable(std::make_shared<PIMMIB::PimInterfaceTable>())
    , pimneighbortable(std::make_shared<PIMMIB::PimNeighborTable>())
    , pimipmroutetable(std::make_shared<PIMMIB::PimIpMRouteTable>())
    , pimrptable(std::make_shared<PIMMIB::PimRPTable>())
    , pimrpsettable(std::make_shared<PIMMIB::PimRPSetTable>())
    , pimipmroutenexthoptable(std::make_shared<PIMMIB::PimIpMRouteNextHopTable>())
    , pimcandidaterptable(std::make_shared<PIMMIB::PimCandidateRPTable>())
    , pimcomponenttable(std::make_shared<PIMMIB::PimComponentTable>())
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
    if (is_presence_container) return true;
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
            piminterfacetable = std::make_shared<PIMMIB::PimInterfaceTable>();
        }
        return piminterfacetable;
    }

    if(child_yang_name == "pimNeighborTable")
    {
        if(pimneighbortable == nullptr)
        {
            pimneighbortable = std::make_shared<PIMMIB::PimNeighborTable>();
        }
        return pimneighbortable;
    }

    if(child_yang_name == "pimIpMRouteTable")
    {
        if(pimipmroutetable == nullptr)
        {
            pimipmroutetable = std::make_shared<PIMMIB::PimIpMRouteTable>();
        }
        return pimipmroutetable;
    }

    if(child_yang_name == "pimRPTable")
    {
        if(pimrptable == nullptr)
        {
            pimrptable = std::make_shared<PIMMIB::PimRPTable>();
        }
        return pimrptable;
    }

    if(child_yang_name == "pimRPSetTable")
    {
        if(pimrpsettable == nullptr)
        {
            pimrpsettable = std::make_shared<PIMMIB::PimRPSetTable>();
        }
        return pimrpsettable;
    }

    if(child_yang_name == "pimIpMRouteNextHopTable")
    {
        if(pimipmroutenexthoptable == nullptr)
        {
            pimipmroutenexthoptable = std::make_shared<PIMMIB::PimIpMRouteNextHopTable>();
        }
        return pimipmroutenexthoptable;
    }

    if(child_yang_name == "pimCandidateRPTable")
    {
        if(pimcandidaterptable == nullptr)
        {
            pimcandidaterptable = std::make_shared<PIMMIB::PimCandidateRPTable>();
        }
        return pimcandidaterptable;
    }

    if(child_yang_name == "pimComponentTable")
    {
        if(pimcomponenttable == nullptr)
        {
            pimcomponenttable = std::make_shared<PIMMIB::PimComponentTable>();
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
    if (is_presence_container) return true;
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

PIMMIB::PimInterfaceTable::PimInterfaceTable()
    :
    piminterfaceentry(this, {"piminterfaceifindex"})
{

    yang_name = "pimInterfaceTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimInterfaceTable::~PimInterfaceTable()
{
}

bool PIMMIB::PimInterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<piminterfaceentry.len(); index++)
    {
        if(piminterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<piminterfaceentry.len(); index++)
    {
        if(piminterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimInterfaceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimInterfaceEntry")
    {
        auto c = std::make_shared<PIMMIB::PimInterfaceTable::PimInterfaceEntry>();
        c->parent = this;
        piminterfaceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : piminterfaceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimInterfaceEntry")
        return true;
    return false;
}

PIMMIB::PimInterfaceTable::PimInterfaceEntry::PimInterfaceEntry()
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

PIMMIB::PimInterfaceTable::PimInterfaceEntry::~PimInterfaceEntry()
{
}

bool PIMMIB::PimInterfaceTable::PimInterfaceEntry::has_data() const
{
    if (is_presence_container) return true;
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

bool PIMMIB::PimInterfaceTable::PimInterfaceEntry::has_operation() const
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

std::string PIMMIB::PimInterfaceTable::PimInterfaceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimInterfaceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimInterfaceTable::PimInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimInterfaceEntry";
    ADD_KEY_TOKEN(piminterfaceifindex, "pimInterfaceIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimInterfaceTable::PimInterfaceEntry::get_name_leaf_data() const
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

std::shared_ptr<Entity> PIMMIB::PimInterfaceTable::PimInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimInterfaceTable::PimInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimInterfaceTable::PimInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimInterfaceTable::PimInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimInterfaceTable::PimInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimInterfaceIfIndex" || name == "pimInterfaceAddress" || name == "pimInterfaceNetMask" || name == "pimInterfaceMode" || name == "pimInterfaceDR" || name == "pimInterfaceHelloInterval" || name == "pimInterfaceStatus" || name == "pimInterfaceJoinPruneInterval" || name == "pimInterfaceCBSRPreference")
        return true;
    return false;
}

PIMMIB::PimNeighborTable::PimNeighborTable()
    :
    pimneighborentry(this, {"pimneighboraddress"})
{

    yang_name = "pimNeighborTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimNeighborTable::~PimNeighborTable()
{
}

bool PIMMIB::PimNeighborTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimneighborentry.len(); index++)
    {
        if(pimneighborentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimNeighborTable::has_operation() const
{
    for (std::size_t index=0; index<pimneighborentry.len(); index++)
    {
        if(pimneighborentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimNeighborTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimNeighborTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimNeighborTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimNeighborTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimNeighborEntry")
    {
        auto c = std::make_shared<PIMMIB::PimNeighborTable::PimNeighborEntry>();
        c->parent = this;
        pimneighborentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimNeighborTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pimneighborentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimNeighborTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimNeighborTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimNeighborTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborEntry")
        return true;
    return false;
}

PIMMIB::PimNeighborTable::PimNeighborEntry::PimNeighborEntry()
    :
    pimneighboraddress{YType::str, "pimNeighborAddress"},
    pimneighborifindex{YType::int32, "pimNeighborIfIndex"},
    pimneighboruptime{YType::uint32, "pimNeighborUpTime"},
    pimneighborexpirytime{YType::uint32, "pimNeighborExpiryTime"},
    pimneighbormode{YType::enumeration, "pimNeighborMode"}
{

    yang_name = "pimNeighborEntry"; yang_parent_name = "pimNeighborTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimNeighborTable::PimNeighborEntry::~PimNeighborEntry()
{
}

bool PIMMIB::PimNeighborTable::PimNeighborEntry::has_data() const
{
    if (is_presence_container) return true;
    return pimneighboraddress.is_set
	|| pimneighborifindex.is_set
	|| pimneighboruptime.is_set
	|| pimneighborexpirytime.is_set
	|| pimneighbormode.is_set;
}

bool PIMMIB::PimNeighborTable::PimNeighborEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimneighboraddress.yfilter)
	|| ydk::is_set(pimneighborifindex.yfilter)
	|| ydk::is_set(pimneighboruptime.yfilter)
	|| ydk::is_set(pimneighborexpirytime.yfilter)
	|| ydk::is_set(pimneighbormode.yfilter);
}

std::string PIMMIB::PimNeighborTable::PimNeighborEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimNeighborTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimNeighborTable::PimNeighborEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborEntry";
    ADD_KEY_TOKEN(pimneighboraddress, "pimNeighborAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimNeighborTable::PimNeighborEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimneighboraddress.is_set || is_set(pimneighboraddress.yfilter)) leaf_name_data.push_back(pimneighboraddress.get_name_leafdata());
    if (pimneighborifindex.is_set || is_set(pimneighborifindex.yfilter)) leaf_name_data.push_back(pimneighborifindex.get_name_leafdata());
    if (pimneighboruptime.is_set || is_set(pimneighboruptime.yfilter)) leaf_name_data.push_back(pimneighboruptime.get_name_leafdata());
    if (pimneighborexpirytime.is_set || is_set(pimneighborexpirytime.yfilter)) leaf_name_data.push_back(pimneighborexpirytime.get_name_leafdata());
    if (pimneighbormode.is_set || is_set(pimneighbormode.yfilter)) leaf_name_data.push_back(pimneighbormode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimNeighborTable::PimNeighborEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimNeighborTable::PimNeighborEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimNeighborTable::PimNeighborEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimNeighborTable::PimNeighborEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimNeighborTable::PimNeighborEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborAddress" || name == "pimNeighborIfIndex" || name == "pimNeighborUpTime" || name == "pimNeighborExpiryTime" || name == "pimNeighborMode")
        return true;
    return false;
}

PIMMIB::PimIpMRouteTable::PimIpMRouteTable()
    :
    pimipmrouteentry(this, {"ipmroutegroup", "ipmroutesource", "ipmroutesourcemask"})
{

    yang_name = "pimIpMRouteTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimIpMRouteTable::~PimIpMRouteTable()
{
}

bool PIMMIB::PimIpMRouteTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimipmrouteentry.len(); index++)
    {
        if(pimipmrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimIpMRouteTable::has_operation() const
{
    for (std::size_t index=0; index<pimipmrouteentry.len(); index++)
    {
        if(pimipmrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimIpMRouteTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimIpMRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimIpMRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimIpMRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimIpMRouteEntry")
    {
        auto c = std::make_shared<PIMMIB::PimIpMRouteTable::PimIpMRouteEntry>();
        c->parent = this;
        pimipmrouteentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimIpMRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pimipmrouteentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimIpMRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimIpMRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimIpMRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimIpMRouteEntry")
        return true;
    return false;
}

PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::PimIpMRouteEntry()
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

PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::~PimIpMRouteEntry()
{
}

bool PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipmroutegroup.is_set
	|| ipmroutesource.is_set
	|| ipmroutesourcemask.is_set
	|| pimipmrouteupstreamasserttimer.is_set
	|| pimipmrouteassertmetric.is_set
	|| pimipmrouteassertmetricpref.is_set
	|| pimipmrouteassertrptbit.is_set
	|| pimipmrouteflags.is_set;
}

bool PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::has_operation() const
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

std::string PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimIpMRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteEntry";
    ADD_KEY_TOKEN(ipmroutegroup, "ipMRouteGroup");
    ADD_KEY_TOKEN(ipmroutesource, "ipMRouteSource");
    ADD_KEY_TOKEN(ipmroutesourcemask, "ipMRouteSourceMask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::get_name_leaf_data() const
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

std::shared_ptr<Entity> PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimIpMRouteTable::PimIpMRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteGroup" || name == "ipMRouteSource" || name == "ipMRouteSourceMask" || name == "pimIpMRouteUpstreamAssertTimer" || name == "pimIpMRouteAssertMetric" || name == "pimIpMRouteAssertMetricPref" || name == "pimIpMRouteAssertRPTBit" || name == "pimIpMRouteFlags")
        return true;
    return false;
}

PIMMIB::PimRPTable::PimRPTable()
    :
    pimrpentry(this, {"pimrpgroupaddress", "pimrpaddress"})
{

    yang_name = "pimRPTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimRPTable::~PimRPTable()
{
}

bool PIMMIB::PimRPTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimrpentry.len(); index++)
    {
        if(pimrpentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimRPTable::has_operation() const
{
    for (std::size_t index=0; index<pimrpentry.len(); index++)
    {
        if(pimrpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimRPTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimRPTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimRPTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimRPTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimRPEntry")
    {
        auto c = std::make_shared<PIMMIB::PimRPTable::PimRPEntry>();
        c->parent = this;
        pimrpentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimRPTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pimrpentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimRPTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimRPTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimRPTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPEntry")
        return true;
    return false;
}

PIMMIB::PimRPTable::PimRPEntry::PimRPEntry()
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

PIMMIB::PimRPTable::PimRPEntry::~PimRPEntry()
{
}

bool PIMMIB::PimRPTable::PimRPEntry::has_data() const
{
    if (is_presence_container) return true;
    return pimrpgroupaddress.is_set
	|| pimrpaddress.is_set
	|| pimrpstate.is_set
	|| pimrpstatetimer.is_set
	|| pimrplastchange.is_set
	|| pimrprowstatus.is_set;
}

bool PIMMIB::PimRPTable::PimRPEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimrpgroupaddress.yfilter)
	|| ydk::is_set(pimrpaddress.yfilter)
	|| ydk::is_set(pimrpstate.yfilter)
	|| ydk::is_set(pimrpstatetimer.yfilter)
	|| ydk::is_set(pimrplastchange.yfilter)
	|| ydk::is_set(pimrprowstatus.yfilter);
}

std::string PIMMIB::PimRPTable::PimRPEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimRPTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimRPTable::PimRPEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPEntry";
    ADD_KEY_TOKEN(pimrpgroupaddress, "pimRPGroupAddress");
    ADD_KEY_TOKEN(pimrpaddress, "pimRPAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimRPTable::PimRPEntry::get_name_leaf_data() const
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

std::shared_ptr<Entity> PIMMIB::PimRPTable::PimRPEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimRPTable::PimRPEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimRPTable::PimRPEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimRPTable::PimRPEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimRPTable::PimRPEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPGroupAddress" || name == "pimRPAddress" || name == "pimRPState" || name == "pimRPStateTimer" || name == "pimRPLastChange" || name == "pimRPRowStatus")
        return true;
    return false;
}

PIMMIB::PimRPSetTable::PimRPSetTable()
    :
    pimrpsetentry(this, {"pimrpsetcomponent", "pimrpsetgroupaddress", "pimrpsetgroupmask", "pimrpsetaddress"})
{

    yang_name = "pimRPSetTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimRPSetTable::~PimRPSetTable()
{
}

bool PIMMIB::PimRPSetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimrpsetentry.len(); index++)
    {
        if(pimrpsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimRPSetTable::has_operation() const
{
    for (std::size_t index=0; index<pimrpsetentry.len(); index++)
    {
        if(pimrpsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimRPSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimRPSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimRPSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimRPSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimRPSetEntry")
    {
        auto c = std::make_shared<PIMMIB::PimRPSetTable::PimRPSetEntry>();
        c->parent = this;
        pimrpsetentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimRPSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pimrpsetentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimRPSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimRPSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimRPSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPSetEntry")
        return true;
    return false;
}

PIMMIB::PimRPSetTable::PimRPSetEntry::PimRPSetEntry()
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

PIMMIB::PimRPSetTable::PimRPSetEntry::~PimRPSetEntry()
{
}

bool PIMMIB::PimRPSetTable::PimRPSetEntry::has_data() const
{
    if (is_presence_container) return true;
    return pimrpsetcomponent.is_set
	|| pimrpsetgroupaddress.is_set
	|| pimrpsetgroupmask.is_set
	|| pimrpsetaddress.is_set
	|| pimrpsetholdtime.is_set
	|| pimrpsetexpirytime.is_set;
}

bool PIMMIB::PimRPSetTable::PimRPSetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimrpsetcomponent.yfilter)
	|| ydk::is_set(pimrpsetgroupaddress.yfilter)
	|| ydk::is_set(pimrpsetgroupmask.yfilter)
	|| ydk::is_set(pimrpsetaddress.yfilter)
	|| ydk::is_set(pimrpsetholdtime.yfilter)
	|| ydk::is_set(pimrpsetexpirytime.yfilter);
}

std::string PIMMIB::PimRPSetTable::PimRPSetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimRPSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimRPSetTable::PimRPSetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPSetEntry";
    ADD_KEY_TOKEN(pimrpsetcomponent, "pimRPSetComponent");
    ADD_KEY_TOKEN(pimrpsetgroupaddress, "pimRPSetGroupAddress");
    ADD_KEY_TOKEN(pimrpsetgroupmask, "pimRPSetGroupMask");
    ADD_KEY_TOKEN(pimrpsetaddress, "pimRPSetAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimRPSetTable::PimRPSetEntry::get_name_leaf_data() const
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

std::shared_ptr<Entity> PIMMIB::PimRPSetTable::PimRPSetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimRPSetTable::PimRPSetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimRPSetTable::PimRPSetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimRPSetTable::PimRPSetEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimRPSetTable::PimRPSetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPSetComponent" || name == "pimRPSetGroupAddress" || name == "pimRPSetGroupMask" || name == "pimRPSetAddress" || name == "pimRPSetHoldTime" || name == "pimRPSetExpiryTime")
        return true;
    return false;
}

PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopTable()
    :
    pimipmroutenexthopentry(this, {"ipmroutenexthopgroup", "ipmroutenexthopsource", "ipmroutenexthopsourcemask", "ipmroutenexthopifindex", "ipmroutenexthopaddress"})
{

    yang_name = "pimIpMRouteNextHopTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimIpMRouteNextHopTable::~PimIpMRouteNextHopTable()
{
}

bool PIMMIB::PimIpMRouteNextHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimipmroutenexthopentry.len(); index++)
    {
        if(pimipmroutenexthopentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimIpMRouteNextHopTable::has_operation() const
{
    for (std::size_t index=0; index<pimipmroutenexthopentry.len(); index++)
    {
        if(pimipmroutenexthopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimIpMRouteNextHopTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimIpMRouteNextHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteNextHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimIpMRouteNextHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimIpMRouteNextHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimIpMRouteNextHopEntry")
    {
        auto c = std::make_shared<PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry>();
        c->parent = this;
        pimipmroutenexthopentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimIpMRouteNextHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pimipmroutenexthopentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimIpMRouteNextHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimIpMRouteNextHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimIpMRouteNextHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimIpMRouteNextHopEntry")
        return true;
    return false;
}

PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::PimIpMRouteNextHopEntry()
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

PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::~PimIpMRouteNextHopEntry()
{
}

bool PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipmroutenexthopgroup.is_set
	|| ipmroutenexthopsource.is_set
	|| ipmroutenexthopsourcemask.is_set
	|| ipmroutenexthopifindex.is_set
	|| ipmroutenexthopaddress.is_set
	|| pimipmroutenexthopprunereason.is_set;
}

bool PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutenexthopgroup.yfilter)
	|| ydk::is_set(ipmroutenexthopsource.yfilter)
	|| ydk::is_set(ipmroutenexthopsourcemask.yfilter)
	|| ydk::is_set(ipmroutenexthopifindex.yfilter)
	|| ydk::is_set(ipmroutenexthopaddress.yfilter)
	|| ydk::is_set(pimipmroutenexthopprunereason.yfilter);
}

std::string PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimIpMRouteNextHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteNextHopEntry";
    ADD_KEY_TOKEN(ipmroutenexthopgroup, "ipMRouteNextHopGroup");
    ADD_KEY_TOKEN(ipmroutenexthopsource, "ipMRouteNextHopSource");
    ADD_KEY_TOKEN(ipmroutenexthopsourcemask, "ipMRouteNextHopSourceMask");
    ADD_KEY_TOKEN(ipmroutenexthopifindex, "ipMRouteNextHopIfIndex");
    ADD_KEY_TOKEN(ipmroutenexthopaddress, "ipMRouteNextHopAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::get_name_leaf_data() const
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

std::shared_ptr<Entity> PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteNextHopGroup" || name == "ipMRouteNextHopSource" || name == "ipMRouteNextHopSourceMask" || name == "ipMRouteNextHopIfIndex" || name == "ipMRouteNextHopAddress" || name == "pimIpMRouteNextHopPruneReason")
        return true;
    return false;
}

PIMMIB::PimCandidateRPTable::PimCandidateRPTable()
    :
    pimcandidaterpentry(this, {"pimcandidaterpgroupaddress", "pimcandidaterpgroupmask"})
{

    yang_name = "pimCandidateRPTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimCandidateRPTable::~PimCandidateRPTable()
{
}

bool PIMMIB::PimCandidateRPTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimcandidaterpentry.len(); index++)
    {
        if(pimcandidaterpentry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimCandidateRPTable::has_operation() const
{
    for (std::size_t index=0; index<pimcandidaterpentry.len(); index++)
    {
        if(pimcandidaterpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimCandidateRPTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimCandidateRPTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimCandidateRPTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimCandidateRPTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimCandidateRPTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimCandidateRPEntry")
    {
        auto c = std::make_shared<PIMMIB::PimCandidateRPTable::PimCandidateRPEntry>();
        c->parent = this;
        pimcandidaterpentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimCandidateRPTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pimcandidaterpentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimCandidateRPTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimCandidateRPTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimCandidateRPTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimCandidateRPEntry")
        return true;
    return false;
}

PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::PimCandidateRPEntry()
    :
    pimcandidaterpgroupaddress{YType::str, "pimCandidateRPGroupAddress"},
    pimcandidaterpgroupmask{YType::str, "pimCandidateRPGroupMask"},
    pimcandidaterpaddress{YType::str, "pimCandidateRPAddress"},
    pimcandidaterprowstatus{YType::enumeration, "pimCandidateRPRowStatus"}
{

    yang_name = "pimCandidateRPEntry"; yang_parent_name = "pimCandidateRPTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::~PimCandidateRPEntry()
{
}

bool PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::has_data() const
{
    if (is_presence_container) return true;
    return pimcandidaterpgroupaddress.is_set
	|| pimcandidaterpgroupmask.is_set
	|| pimcandidaterpaddress.is_set
	|| pimcandidaterprowstatus.is_set;
}

bool PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimcandidaterpgroupaddress.yfilter)
	|| ydk::is_set(pimcandidaterpgroupmask.yfilter)
	|| ydk::is_set(pimcandidaterpaddress.yfilter)
	|| ydk::is_set(pimcandidaterprowstatus.yfilter);
}

std::string PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimCandidateRPTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimCandidateRPEntry";
    ADD_KEY_TOKEN(pimcandidaterpgroupaddress, "pimCandidateRPGroupAddress");
    ADD_KEY_TOKEN(pimcandidaterpgroupmask, "pimCandidateRPGroupMask");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimcandidaterpgroupaddress.is_set || is_set(pimcandidaterpgroupaddress.yfilter)) leaf_name_data.push_back(pimcandidaterpgroupaddress.get_name_leafdata());
    if (pimcandidaterpgroupmask.is_set || is_set(pimcandidaterpgroupmask.yfilter)) leaf_name_data.push_back(pimcandidaterpgroupmask.get_name_leafdata());
    if (pimcandidaterpaddress.is_set || is_set(pimcandidaterpaddress.yfilter)) leaf_name_data.push_back(pimcandidaterpaddress.get_name_leafdata());
    if (pimcandidaterprowstatus.is_set || is_set(pimcandidaterprowstatus.yfilter)) leaf_name_data.push_back(pimcandidaterprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimCandidateRPTable::PimCandidateRPEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimCandidateRPGroupAddress" || name == "pimCandidateRPGroupMask" || name == "pimCandidateRPAddress" || name == "pimCandidateRPRowStatus")
        return true;
    return false;
}

PIMMIB::PimComponentTable::PimComponentTable()
    :
    pimcomponententry(this, {"pimcomponentindex"})
{

    yang_name = "pimComponentTable"; yang_parent_name = "PIM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimComponentTable::~PimComponentTable()
{
}

bool PIMMIB::PimComponentTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pimcomponententry.len(); index++)
    {
        if(pimcomponententry[index]->has_data())
            return true;
    }
    return false;
}

bool PIMMIB::PimComponentTable::has_operation() const
{
    for (std::size_t index=0; index<pimcomponententry.len(); index++)
    {
        if(pimcomponententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PIMMIB::PimComponentTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimComponentTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimComponentTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimComponentTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimComponentTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimComponentEntry")
    {
        auto c = std::make_shared<PIMMIB::PimComponentTable::PimComponentEntry>();
        c->parent = this;
        pimcomponententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimComponentTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pimcomponententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PIMMIB::PimComponentTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PIMMIB::PimComponentTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PIMMIB::PimComponentTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimComponentEntry")
        return true;
    return false;
}

PIMMIB::PimComponentTable::PimComponentEntry::PimComponentEntry()
    :
    pimcomponentindex{YType::int32, "pimComponentIndex"},
    pimcomponentbsraddress{YType::str, "pimComponentBSRAddress"},
    pimcomponentbsrexpirytime{YType::uint32, "pimComponentBSRExpiryTime"},
    pimcomponentcrpholdtime{YType::int32, "pimComponentCRPHoldTime"},
    pimcomponentstatus{YType::enumeration, "pimComponentStatus"}
{

    yang_name = "pimComponentEntry"; yang_parent_name = "pimComponentTable"; is_top_level_class = false; has_list_ancestor = false; 
}

PIMMIB::PimComponentTable::PimComponentEntry::~PimComponentEntry()
{
}

bool PIMMIB::PimComponentTable::PimComponentEntry::has_data() const
{
    if (is_presence_container) return true;
    return pimcomponentindex.is_set
	|| pimcomponentbsraddress.is_set
	|| pimcomponentbsrexpirytime.is_set
	|| pimcomponentcrpholdtime.is_set
	|| pimcomponentstatus.is_set;
}

bool PIMMIB::PimComponentTable::PimComponentEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimcomponentindex.yfilter)
	|| ydk::is_set(pimcomponentbsraddress.yfilter)
	|| ydk::is_set(pimcomponentbsrexpirytime.yfilter)
	|| ydk::is_set(pimcomponentcrpholdtime.yfilter)
	|| ydk::is_set(pimcomponentstatus.yfilter);
}

std::string PIMMIB::PimComponentTable::PimComponentEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB/pimComponentTable/" << get_segment_path();
    return path_buffer.str();
}

std::string PIMMIB::PimComponentTable::PimComponentEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimComponentEntry";
    ADD_KEY_TOKEN(pimcomponentindex, "pimComponentIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PIMMIB::PimComponentTable::PimComponentEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimcomponentindex.is_set || is_set(pimcomponentindex.yfilter)) leaf_name_data.push_back(pimcomponentindex.get_name_leafdata());
    if (pimcomponentbsraddress.is_set || is_set(pimcomponentbsraddress.yfilter)) leaf_name_data.push_back(pimcomponentbsraddress.get_name_leafdata());
    if (pimcomponentbsrexpirytime.is_set || is_set(pimcomponentbsrexpirytime.yfilter)) leaf_name_data.push_back(pimcomponentbsrexpirytime.get_name_leafdata());
    if (pimcomponentcrpholdtime.is_set || is_set(pimcomponentcrpholdtime.yfilter)) leaf_name_data.push_back(pimcomponentcrpholdtime.get_name_leafdata());
    if (pimcomponentstatus.is_set || is_set(pimcomponentstatus.yfilter)) leaf_name_data.push_back(pimcomponentstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PIMMIB::PimComponentTable::PimComponentEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PIMMIB::PimComponentTable::PimComponentEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PIMMIB::PimComponentTable::PimComponentEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PIMMIB::PimComponentTable::PimComponentEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PIMMIB::PimComponentTable::PimComponentEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimComponentIndex" || name == "pimComponentBSRAddress" || name == "pimComponentBSRExpiryTime" || name == "pimComponentCRPHoldTime" || name == "pimComponentStatus")
        return true;
    return false;
}

const Enum::YLeaf PIMMIB::PimInterfaceTable::PimInterfaceEntry::PimInterfaceMode::dense {1, "dense"};
const Enum::YLeaf PIMMIB::PimInterfaceTable::PimInterfaceEntry::PimInterfaceMode::sparse {2, "sparse"};
const Enum::YLeaf PIMMIB::PimInterfaceTable::PimInterfaceEntry::PimInterfaceMode::sparseDense {3, "sparseDense"};

const Enum::YLeaf PIMMIB::PimNeighborTable::PimNeighborEntry::PimNeighborMode::dense {1, "dense"};
const Enum::YLeaf PIMMIB::PimNeighborTable::PimNeighborEntry::PimNeighborMode::sparse {2, "sparse"};

const Enum::YLeaf PIMMIB::PimRPTable::PimRPEntry::PimRPState::up {1, "up"};
const Enum::YLeaf PIMMIB::PimRPTable::PimRPEntry::PimRPState::down {2, "down"};

const Enum::YLeaf PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::PimIpMRouteNextHopPruneReason::other {1, "other"};
const Enum::YLeaf PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::PimIpMRouteNextHopPruneReason::prune {2, "prune"};
const Enum::YLeaf PIMMIB::PimIpMRouteNextHopTable::PimIpMRouteNextHopEntry::PimIpMRouteNextHopPruneReason::assert {3, "assert"};


}
}

