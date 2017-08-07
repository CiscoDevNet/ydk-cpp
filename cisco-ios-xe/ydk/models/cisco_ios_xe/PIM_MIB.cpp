
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "PIM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace PIM_MIB {

PimMib::PimMib()
    :
    pim(std::make_shared<PimMib::Pim>())
	,pimcandidaterptable(std::make_shared<PimMib::Pimcandidaterptable>())
	,pimcomponenttable(std::make_shared<PimMib::Pimcomponenttable>())
	,piminterfacetable(std::make_shared<PimMib::Piminterfacetable>())
	,pimipmroutenexthoptable(std::make_shared<PimMib::Pimipmroutenexthoptable>())
	,pimipmroutetable(std::make_shared<PimMib::Pimipmroutetable>())
	,pimneighbortable(std::make_shared<PimMib::Pimneighbortable>())
	,pimrpsettable(std::make_shared<PimMib::Pimrpsettable>())
	,pimrptable(std::make_shared<PimMib::Pimrptable>())
{
    pim->parent = this;

    pimcandidaterptable->parent = this;

    pimcomponenttable->parent = this;

    piminterfacetable->parent = this;

    pimipmroutenexthoptable->parent = this;

    pimipmroutetable->parent = this;

    pimneighbortable->parent = this;

    pimrpsettable->parent = this;

    pimrptable->parent = this;

    yang_name = "PIM-MIB"; yang_parent_name = "PIM-MIB";
}

PimMib::~PimMib()
{
}

bool PimMib::has_data() const
{
    return (pim !=  nullptr && pim->has_data())
	|| (pimcandidaterptable !=  nullptr && pimcandidaterptable->has_data())
	|| (pimcomponenttable !=  nullptr && pimcomponenttable->has_data())
	|| (piminterfacetable !=  nullptr && piminterfacetable->has_data())
	|| (pimipmroutenexthoptable !=  nullptr && pimipmroutenexthoptable->has_data())
	|| (pimipmroutetable !=  nullptr && pimipmroutetable->has_data())
	|| (pimneighbortable !=  nullptr && pimneighbortable->has_data())
	|| (pimrpsettable !=  nullptr && pimrpsettable->has_data())
	|| (pimrptable !=  nullptr && pimrptable->has_data());
}

bool PimMib::has_operation() const
{
    return is_set(yfilter)
	|| (pim !=  nullptr && pim->has_operation())
	|| (pimcandidaterptable !=  nullptr && pimcandidaterptable->has_operation())
	|| (pimcomponenttable !=  nullptr && pimcomponenttable->has_operation())
	|| (piminterfacetable !=  nullptr && piminterfacetable->has_operation())
	|| (pimipmroutenexthoptable !=  nullptr && pimipmroutenexthoptable->has_operation())
	|| (pimipmroutetable !=  nullptr && pimipmroutetable->has_operation())
	|| (pimneighbortable !=  nullptr && pimneighbortable->has_operation())
	|| (pimrpsettable !=  nullptr && pimrpsettable->has_operation())
	|| (pimrptable !=  nullptr && pimrptable->has_operation());
}

std::string PimMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PIM-MIB:PIM-MIB";

    return path_buffer.str();

}

const EntityPath PimMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<PimMib::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "pimCandidateRPTable")
    {
        if(pimcandidaterptable == nullptr)
        {
            pimcandidaterptable = std::make_shared<PimMib::Pimcandidaterptable>();
        }
        return pimcandidaterptable;
    }

    if(child_yang_name == "pimComponentTable")
    {
        if(pimcomponenttable == nullptr)
        {
            pimcomponenttable = std::make_shared<PimMib::Pimcomponenttable>();
        }
        return pimcomponenttable;
    }

    if(child_yang_name == "pimInterfaceTable")
    {
        if(piminterfacetable == nullptr)
        {
            piminterfacetable = std::make_shared<PimMib::Piminterfacetable>();
        }
        return piminterfacetable;
    }

    if(child_yang_name == "pimIpMRouteNextHopTable")
    {
        if(pimipmroutenexthoptable == nullptr)
        {
            pimipmroutenexthoptable = std::make_shared<PimMib::Pimipmroutenexthoptable>();
        }
        return pimipmroutenexthoptable;
    }

    if(child_yang_name == "pimIpMRouteTable")
    {
        if(pimipmroutetable == nullptr)
        {
            pimipmroutetable = std::make_shared<PimMib::Pimipmroutetable>();
        }
        return pimipmroutetable;
    }

    if(child_yang_name == "pimNeighborTable")
    {
        if(pimneighbortable == nullptr)
        {
            pimneighbortable = std::make_shared<PimMib::Pimneighbortable>();
        }
        return pimneighbortable;
    }

    if(child_yang_name == "pimRPSetTable")
    {
        if(pimrpsettable == nullptr)
        {
            pimrpsettable = std::make_shared<PimMib::Pimrpsettable>();
        }
        return pimrpsettable;
    }

    if(child_yang_name == "pimRPTable")
    {
        if(pimrptable == nullptr)
        {
            pimrptable = std::make_shared<PimMib::Pimrptable>();
        }
        return pimrptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(pimcandidaterptable != nullptr)
    {
        children["pimCandidateRPTable"] = pimcandidaterptable;
    }

    if(pimcomponenttable != nullptr)
    {
        children["pimComponentTable"] = pimcomponenttable;
    }

    if(piminterfacetable != nullptr)
    {
        children["pimInterfaceTable"] = piminterfacetable;
    }

    if(pimipmroutenexthoptable != nullptr)
    {
        children["pimIpMRouteNextHopTable"] = pimipmroutenexthoptable;
    }

    if(pimipmroutetable != nullptr)
    {
        children["pimIpMRouteTable"] = pimipmroutetable;
    }

    if(pimneighbortable != nullptr)
    {
        children["pimNeighborTable"] = pimneighbortable;
    }

    if(pimrpsettable != nullptr)
    {
        children["pimRPSetTable"] = pimrpsettable;
    }

    if(pimrptable != nullptr)
    {
        children["pimRPTable"] = pimrptable;
    }

    return children;
}

void PimMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PimMib::clone_ptr() const
{
    return std::make_shared<PimMib>();
}

std::string PimMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PimMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PimMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PimMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PimMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim" || name == "pimCandidateRPTable" || name == "pimComponentTable" || name == "pimInterfaceTable" || name == "pimIpMRouteNextHopTable" || name == "pimIpMRouteTable" || name == "pimNeighborTable" || name == "pimRPSetTable" || name == "pimRPTable")
        return true;
    return false;
}

PimMib::Pim::Pim()
    :
    pimjoinpruneinterval{YType::int32, "pimJoinPruneInterval"}
{
    yang_name = "pim"; yang_parent_name = "PIM-MIB";
}

PimMib::Pim::~Pim()
{
}

bool PimMib::Pim::has_data() const
{
    return pimjoinpruneinterval.is_set;
}

bool PimMib::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimjoinpruneinterval.yfilter);
}

std::string PimMib::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";

    return path_buffer.str();

}

const EntityPath PimMib::Pim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimjoinpruneinterval.is_set || is_set(pimjoinpruneinterval.yfilter)) leaf_name_data.push_back(pimjoinpruneinterval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimJoinPruneInterval")
    {
        pimjoinpruneinterval = value;
        pimjoinpruneinterval.value_namespace = name_space;
        pimjoinpruneinterval.value_namespace_prefix = name_space_prefix;
    }
}

void PimMib::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimJoinPruneInterval")
    {
        pimjoinpruneinterval.yfilter = yfilter;
    }
}

bool PimMib::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimJoinPruneInterval")
        return true;
    return false;
}

PimMib::Piminterfacetable::Piminterfacetable()
{
    yang_name = "pimInterfaceTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Piminterfacetable::~Piminterfacetable()
{
}

bool PimMib::Piminterfacetable::has_data() const
{
    for (std::size_t index=0; index<piminterfaceentry.size(); index++)
    {
        if(piminterfaceentry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Piminterfacetable::has_operation() const
{
    for (std::size_t index=0; index<piminterfaceentry.size(); index++)
    {
        if(piminterfaceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Piminterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimInterfaceTable";

    return path_buffer.str();

}

const EntityPath PimMib::Piminterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Piminterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimInterfaceEntry")
    {
        for(auto const & c : piminterfaceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Piminterfacetable::Piminterfaceentry>();
        c->parent = this;
        piminterfaceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Piminterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : piminterfaceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Piminterfacetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Piminterfacetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Piminterfacetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimInterfaceEntry")
        return true;
    return false;
}

PimMib::Piminterfacetable::Piminterfaceentry::Piminterfaceentry()
    :
    piminterfaceifindex{YType::int32, "pimInterfaceIfIndex"},
    piminterfaceaddress{YType::str, "pimInterfaceAddress"},
    piminterfacecbsrpreference{YType::int32, "pimInterfaceCBSRPreference"},
    piminterfacedr{YType::str, "pimInterfaceDR"},
    piminterfacehellointerval{YType::int32, "pimInterfaceHelloInterval"},
    piminterfacejoinpruneinterval{YType::int32, "pimInterfaceJoinPruneInterval"},
    piminterfacemode{YType::enumeration, "pimInterfaceMode"},
    piminterfacenetmask{YType::str, "pimInterfaceNetMask"},
    piminterfacestatus{YType::enumeration, "pimInterfaceStatus"}
{
    yang_name = "pimInterfaceEntry"; yang_parent_name = "pimInterfaceTable";
}

PimMib::Piminterfacetable::Piminterfaceentry::~Piminterfaceentry()
{
}

bool PimMib::Piminterfacetable::Piminterfaceentry::has_data() const
{
    return piminterfaceifindex.is_set
	|| piminterfaceaddress.is_set
	|| piminterfacecbsrpreference.is_set
	|| piminterfacedr.is_set
	|| piminterfacehellointerval.is_set
	|| piminterfacejoinpruneinterval.is_set
	|| piminterfacemode.is_set
	|| piminterfacenetmask.is_set
	|| piminterfacestatus.is_set;
}

bool PimMib::Piminterfacetable::Piminterfaceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(piminterfaceifindex.yfilter)
	|| ydk::is_set(piminterfaceaddress.yfilter)
	|| ydk::is_set(piminterfacecbsrpreference.yfilter)
	|| ydk::is_set(piminterfacedr.yfilter)
	|| ydk::is_set(piminterfacehellointerval.yfilter)
	|| ydk::is_set(piminterfacejoinpruneinterval.yfilter)
	|| ydk::is_set(piminterfacemode.yfilter)
	|| ydk::is_set(piminterfacenetmask.yfilter)
	|| ydk::is_set(piminterfacestatus.yfilter);
}

std::string PimMib::Piminterfacetable::Piminterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimInterfaceEntry" <<"[pimInterfaceIfIndex='" <<piminterfaceifindex <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Piminterfacetable::Piminterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (piminterfaceifindex.is_set || is_set(piminterfaceifindex.yfilter)) leaf_name_data.push_back(piminterfaceifindex.get_name_leafdata());
    if (piminterfaceaddress.is_set || is_set(piminterfaceaddress.yfilter)) leaf_name_data.push_back(piminterfaceaddress.get_name_leafdata());
    if (piminterfacecbsrpreference.is_set || is_set(piminterfacecbsrpreference.yfilter)) leaf_name_data.push_back(piminterfacecbsrpreference.get_name_leafdata());
    if (piminterfacedr.is_set || is_set(piminterfacedr.yfilter)) leaf_name_data.push_back(piminterfacedr.get_name_leafdata());
    if (piminterfacehellointerval.is_set || is_set(piminterfacehellointerval.yfilter)) leaf_name_data.push_back(piminterfacehellointerval.get_name_leafdata());
    if (piminterfacejoinpruneinterval.is_set || is_set(piminterfacejoinpruneinterval.yfilter)) leaf_name_data.push_back(piminterfacejoinpruneinterval.get_name_leafdata());
    if (piminterfacemode.is_set || is_set(piminterfacemode.yfilter)) leaf_name_data.push_back(piminterfacemode.get_name_leafdata());
    if (piminterfacenetmask.is_set || is_set(piminterfacenetmask.yfilter)) leaf_name_data.push_back(piminterfacenetmask.get_name_leafdata());
    if (piminterfacestatus.is_set || is_set(piminterfacestatus.yfilter)) leaf_name_data.push_back(piminterfacestatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Piminterfacetable::Piminterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Piminterfacetable::Piminterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Piminterfacetable::Piminterfaceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pimInterfaceCBSRPreference")
    {
        piminterfacecbsrpreference = value;
        piminterfacecbsrpreference.value_namespace = name_space;
        piminterfacecbsrpreference.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pimInterfaceJoinPruneInterval")
    {
        piminterfacejoinpruneinterval = value;
        piminterfacejoinpruneinterval.value_namespace = name_space;
        piminterfacejoinpruneinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceMode")
    {
        piminterfacemode = value;
        piminterfacemode.value_namespace = name_space;
        piminterfacemode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceNetMask")
    {
        piminterfacenetmask = value;
        piminterfacenetmask.value_namespace = name_space;
        piminterfacenetmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimInterfaceStatus")
    {
        piminterfacestatus = value;
        piminterfacestatus.value_namespace = name_space;
        piminterfacestatus.value_namespace_prefix = name_space_prefix;
    }
}

void PimMib::Piminterfacetable::Piminterfaceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimInterfaceIfIndex")
    {
        piminterfaceifindex.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceAddress")
    {
        piminterfaceaddress.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceCBSRPreference")
    {
        piminterfacecbsrpreference.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceDR")
    {
        piminterfacedr.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceHelloInterval")
    {
        piminterfacehellointerval.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceJoinPruneInterval")
    {
        piminterfacejoinpruneinterval.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceMode")
    {
        piminterfacemode.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceNetMask")
    {
        piminterfacenetmask.yfilter = yfilter;
    }
    if(value_path == "pimInterfaceStatus")
    {
        piminterfacestatus.yfilter = yfilter;
    }
}

bool PimMib::Piminterfacetable::Piminterfaceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimInterfaceIfIndex" || name == "pimInterfaceAddress" || name == "pimInterfaceCBSRPreference" || name == "pimInterfaceDR" || name == "pimInterfaceHelloInterval" || name == "pimInterfaceJoinPruneInterval" || name == "pimInterfaceMode" || name == "pimInterfaceNetMask" || name == "pimInterfaceStatus")
        return true;
    return false;
}

PimMib::Pimneighbortable::Pimneighbortable()
{
    yang_name = "pimNeighborTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Pimneighbortable::~Pimneighbortable()
{
}

bool PimMib::Pimneighbortable::has_data() const
{
    for (std::size_t index=0; index<pimneighborentry.size(); index++)
    {
        if(pimneighborentry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimneighbortable::has_operation() const
{
    for (std::size_t index=0; index<pimneighborentry.size(); index++)
    {
        if(pimneighborentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Pimneighbortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborTable";

    return path_buffer.str();

}

const EntityPath PimMib::Pimneighbortable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimneighbortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimNeighborEntry")
    {
        for(auto const & c : pimneighborentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimneighbortable::Pimneighborentry>();
        c->parent = this;
        pimneighborentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimneighbortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimneighborentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimneighbortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Pimneighbortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Pimneighbortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborEntry")
        return true;
    return false;
}

PimMib::Pimneighbortable::Pimneighborentry::Pimneighborentry()
    :
    pimneighboraddress{YType::str, "pimNeighborAddress"},
    pimneighborexpirytime{YType::uint32, "pimNeighborExpiryTime"},
    pimneighborifindex{YType::int32, "pimNeighborIfIndex"},
    pimneighbormode{YType::enumeration, "pimNeighborMode"},
    pimneighboruptime{YType::uint32, "pimNeighborUpTime"}
{
    yang_name = "pimNeighborEntry"; yang_parent_name = "pimNeighborTable";
}

PimMib::Pimneighbortable::Pimneighborentry::~Pimneighborentry()
{
}

bool PimMib::Pimneighbortable::Pimneighborentry::has_data() const
{
    return pimneighboraddress.is_set
	|| pimneighborexpirytime.is_set
	|| pimneighborifindex.is_set
	|| pimneighbormode.is_set
	|| pimneighboruptime.is_set;
}

bool PimMib::Pimneighbortable::Pimneighborentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimneighboraddress.yfilter)
	|| ydk::is_set(pimneighborexpirytime.yfilter)
	|| ydk::is_set(pimneighborifindex.yfilter)
	|| ydk::is_set(pimneighbormode.yfilter)
	|| ydk::is_set(pimneighboruptime.yfilter);
}

std::string PimMib::Pimneighbortable::Pimneighborentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimNeighborEntry" <<"[pimNeighborAddress='" <<pimneighboraddress <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Pimneighbortable::Pimneighborentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimNeighborTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimneighboraddress.is_set || is_set(pimneighboraddress.yfilter)) leaf_name_data.push_back(pimneighboraddress.get_name_leafdata());
    if (pimneighborexpirytime.is_set || is_set(pimneighborexpirytime.yfilter)) leaf_name_data.push_back(pimneighborexpirytime.get_name_leafdata());
    if (pimneighborifindex.is_set || is_set(pimneighborifindex.yfilter)) leaf_name_data.push_back(pimneighborifindex.get_name_leafdata());
    if (pimneighbormode.is_set || is_set(pimneighbormode.yfilter)) leaf_name_data.push_back(pimneighbormode.get_name_leafdata());
    if (pimneighboruptime.is_set || is_set(pimneighboruptime.yfilter)) leaf_name_data.push_back(pimneighboruptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimneighbortable::Pimneighborentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimneighbortable::Pimneighborentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pimneighbortable::Pimneighborentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pimNeighborAddress")
    {
        pimneighboraddress = value;
        pimneighboraddress.value_namespace = name_space;
        pimneighboraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborExpiryTime")
    {
        pimneighborexpirytime = value;
        pimneighborexpirytime.value_namespace = name_space;
        pimneighborexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborIfIndex")
    {
        pimneighborifindex = value;
        pimneighborifindex.value_namespace = name_space;
        pimneighborifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborMode")
    {
        pimneighbormode = value;
        pimneighbormode.value_namespace = name_space;
        pimneighbormode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimNeighborUpTime")
    {
        pimneighboruptime = value;
        pimneighboruptime.value_namespace = name_space;
        pimneighboruptime.value_namespace_prefix = name_space_prefix;
    }
}

void PimMib::Pimneighbortable::Pimneighborentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimNeighborAddress")
    {
        pimneighboraddress.yfilter = yfilter;
    }
    if(value_path == "pimNeighborExpiryTime")
    {
        pimneighborexpirytime.yfilter = yfilter;
    }
    if(value_path == "pimNeighborIfIndex")
    {
        pimneighborifindex.yfilter = yfilter;
    }
    if(value_path == "pimNeighborMode")
    {
        pimneighbormode.yfilter = yfilter;
    }
    if(value_path == "pimNeighborUpTime")
    {
        pimneighboruptime.yfilter = yfilter;
    }
}

bool PimMib::Pimneighbortable::Pimneighborentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimNeighborAddress" || name == "pimNeighborExpiryTime" || name == "pimNeighborIfIndex" || name == "pimNeighborMode" || name == "pimNeighborUpTime")
        return true;
    return false;
}

PimMib::Pimipmroutetable::Pimipmroutetable()
{
    yang_name = "pimIpMRouteTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Pimipmroutetable::~Pimipmroutetable()
{
}

bool PimMib::Pimipmroutetable::has_data() const
{
    for (std::size_t index=0; index<pimipmrouteentry.size(); index++)
    {
        if(pimipmrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimipmroutetable::has_operation() const
{
    for (std::size_t index=0; index<pimipmrouteentry.size(); index++)
    {
        if(pimipmrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Pimipmroutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteTable";

    return path_buffer.str();

}

const EntityPath PimMib::Pimipmroutetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimipmroutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimIpMRouteEntry")
    {
        for(auto const & c : pimipmrouteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimipmroutetable::Pimipmrouteentry>();
        c->parent = this;
        pimipmrouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimipmroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimipmrouteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimipmroutetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Pimipmroutetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Pimipmroutetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimIpMRouteEntry")
        return true;
    return false;
}

PimMib::Pimipmroutetable::Pimipmrouteentry::Pimipmrouteentry()
    :
    ipmroutegroup{YType::str, "ipMRouteGroup"},
    ipmroutesource{YType::str, "ipMRouteSource"},
    ipmroutesourcemask{YType::str, "ipMRouteSourceMask"},
    pimipmrouteassertmetric{YType::int32, "pimIpMRouteAssertMetric"},
    pimipmrouteassertmetricpref{YType::int32, "pimIpMRouteAssertMetricPref"},
    pimipmrouteassertrptbit{YType::boolean, "pimIpMRouteAssertRPTBit"},
    pimipmrouteflags{YType::str, "pimIpMRouteFlags"},
    pimipmrouteupstreamasserttimer{YType::uint32, "pimIpMRouteUpstreamAssertTimer"}
{
    yang_name = "pimIpMRouteEntry"; yang_parent_name = "pimIpMRouteTable";
}

PimMib::Pimipmroutetable::Pimipmrouteentry::~Pimipmrouteentry()
{
}

bool PimMib::Pimipmroutetable::Pimipmrouteentry::has_data() const
{
    return ipmroutegroup.is_set
	|| ipmroutesource.is_set
	|| ipmroutesourcemask.is_set
	|| pimipmrouteassertmetric.is_set
	|| pimipmrouteassertmetricpref.is_set
	|| pimipmrouteassertrptbit.is_set
	|| pimipmrouteflags.is_set
	|| pimipmrouteupstreamasserttimer.is_set;
}

bool PimMib::Pimipmroutetable::Pimipmrouteentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutegroup.yfilter)
	|| ydk::is_set(ipmroutesource.yfilter)
	|| ydk::is_set(ipmroutesourcemask.yfilter)
	|| ydk::is_set(pimipmrouteassertmetric.yfilter)
	|| ydk::is_set(pimipmrouteassertmetricpref.yfilter)
	|| ydk::is_set(pimipmrouteassertrptbit.yfilter)
	|| ydk::is_set(pimipmrouteflags.yfilter)
	|| ydk::is_set(pimipmrouteupstreamasserttimer.yfilter);
}

std::string PimMib::Pimipmroutetable::Pimipmrouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteEntry" <<"[ipMRouteGroup='" <<ipmroutegroup <<"']" <<"[ipMRouteSource='" <<ipmroutesource <<"']" <<"[ipMRouteSourceMask='" <<ipmroutesourcemask <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Pimipmroutetable::Pimipmrouteentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimIpMRouteTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutegroup.is_set || is_set(ipmroutegroup.yfilter)) leaf_name_data.push_back(ipmroutegroup.get_name_leafdata());
    if (ipmroutesource.is_set || is_set(ipmroutesource.yfilter)) leaf_name_data.push_back(ipmroutesource.get_name_leafdata());
    if (ipmroutesourcemask.is_set || is_set(ipmroutesourcemask.yfilter)) leaf_name_data.push_back(ipmroutesourcemask.get_name_leafdata());
    if (pimipmrouteassertmetric.is_set || is_set(pimipmrouteassertmetric.yfilter)) leaf_name_data.push_back(pimipmrouteassertmetric.get_name_leafdata());
    if (pimipmrouteassertmetricpref.is_set || is_set(pimipmrouteassertmetricpref.yfilter)) leaf_name_data.push_back(pimipmrouteassertmetricpref.get_name_leafdata());
    if (pimipmrouteassertrptbit.is_set || is_set(pimipmrouteassertrptbit.yfilter)) leaf_name_data.push_back(pimipmrouteassertrptbit.get_name_leafdata());
    if (pimipmrouteflags.is_set || is_set(pimipmrouteflags.yfilter)) leaf_name_data.push_back(pimipmrouteflags.get_name_leafdata());
    if (pimipmrouteupstreamasserttimer.is_set || is_set(pimipmrouteupstreamasserttimer.yfilter)) leaf_name_data.push_back(pimipmrouteupstreamasserttimer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimipmroutetable::Pimipmrouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimipmroutetable::Pimipmrouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pimipmroutetable::Pimipmrouteentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pimIpMRouteUpstreamAssertTimer")
    {
        pimipmrouteupstreamasserttimer = value;
        pimipmrouteupstreamasserttimer.value_namespace = name_space;
        pimipmrouteupstreamasserttimer.value_namespace_prefix = name_space_prefix;
    }
}

void PimMib::Pimipmroutetable::Pimipmrouteentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "pimIpMRouteUpstreamAssertTimer")
    {
        pimipmrouteupstreamasserttimer.yfilter = yfilter;
    }
}

bool PimMib::Pimipmroutetable::Pimipmrouteentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteGroup" || name == "ipMRouteSource" || name == "ipMRouteSourceMask" || name == "pimIpMRouteAssertMetric" || name == "pimIpMRouteAssertMetricPref" || name == "pimIpMRouteAssertRPTBit" || name == "pimIpMRouteFlags" || name == "pimIpMRouteUpstreamAssertTimer")
        return true;
    return false;
}

PimMib::Pimrptable::Pimrptable()
{
    yang_name = "pimRPTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Pimrptable::~Pimrptable()
{
}

bool PimMib::Pimrptable::has_data() const
{
    for (std::size_t index=0; index<pimrpentry.size(); index++)
    {
        if(pimrpentry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimrptable::has_operation() const
{
    for (std::size_t index=0; index<pimrpentry.size(); index++)
    {
        if(pimrpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Pimrptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPTable";

    return path_buffer.str();

}

const EntityPath PimMib::Pimrptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimrptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimRPEntry")
    {
        for(auto const & c : pimrpentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimrptable::Pimrpentry>();
        c->parent = this;
        pimrpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimrptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimrpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimrptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Pimrptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Pimrptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPEntry")
        return true;
    return false;
}

PimMib::Pimrptable::Pimrpentry::Pimrpentry()
    :
    pimrpgroupaddress{YType::str, "pimRPGroupAddress"},
    pimrpaddress{YType::str, "pimRPAddress"},
    pimrplastchange{YType::uint32, "pimRPLastChange"},
    pimrprowstatus{YType::enumeration, "pimRPRowStatus"},
    pimrpstate{YType::enumeration, "pimRPState"},
    pimrpstatetimer{YType::uint32, "pimRPStateTimer"}
{
    yang_name = "pimRPEntry"; yang_parent_name = "pimRPTable";
}

PimMib::Pimrptable::Pimrpentry::~Pimrpentry()
{
}

bool PimMib::Pimrptable::Pimrpentry::has_data() const
{
    return pimrpgroupaddress.is_set
	|| pimrpaddress.is_set
	|| pimrplastchange.is_set
	|| pimrprowstatus.is_set
	|| pimrpstate.is_set
	|| pimrpstatetimer.is_set;
}

bool PimMib::Pimrptable::Pimrpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimrpgroupaddress.yfilter)
	|| ydk::is_set(pimrpaddress.yfilter)
	|| ydk::is_set(pimrplastchange.yfilter)
	|| ydk::is_set(pimrprowstatus.yfilter)
	|| ydk::is_set(pimrpstate.yfilter)
	|| ydk::is_set(pimrpstatetimer.yfilter);
}

std::string PimMib::Pimrptable::Pimrpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPEntry" <<"[pimRPGroupAddress='" <<pimrpgroupaddress <<"']" <<"[pimRPAddress='" <<pimrpaddress <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Pimrptable::Pimrpentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimRPTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimrpgroupaddress.is_set || is_set(pimrpgroupaddress.yfilter)) leaf_name_data.push_back(pimrpgroupaddress.get_name_leafdata());
    if (pimrpaddress.is_set || is_set(pimrpaddress.yfilter)) leaf_name_data.push_back(pimrpaddress.get_name_leafdata());
    if (pimrplastchange.is_set || is_set(pimrplastchange.yfilter)) leaf_name_data.push_back(pimrplastchange.get_name_leafdata());
    if (pimrprowstatus.is_set || is_set(pimrprowstatus.yfilter)) leaf_name_data.push_back(pimrprowstatus.get_name_leafdata());
    if (pimrpstate.is_set || is_set(pimrpstate.yfilter)) leaf_name_data.push_back(pimrpstate.get_name_leafdata());
    if (pimrpstatetimer.is_set || is_set(pimrpstatetimer.yfilter)) leaf_name_data.push_back(pimrpstatetimer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimrptable::Pimrpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimrptable::Pimrpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pimrptable::Pimrpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void PimMib::Pimrptable::Pimrpentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pimRPGroupAddress")
    {
        pimrpgroupaddress.yfilter = yfilter;
    }
    if(value_path == "pimRPAddress")
    {
        pimrpaddress.yfilter = yfilter;
    }
    if(value_path == "pimRPLastChange")
    {
        pimrplastchange.yfilter = yfilter;
    }
    if(value_path == "pimRPRowStatus")
    {
        pimrprowstatus.yfilter = yfilter;
    }
    if(value_path == "pimRPState")
    {
        pimrpstate.yfilter = yfilter;
    }
    if(value_path == "pimRPStateTimer")
    {
        pimrpstatetimer.yfilter = yfilter;
    }
}

bool PimMib::Pimrptable::Pimrpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPGroupAddress" || name == "pimRPAddress" || name == "pimRPLastChange" || name == "pimRPRowStatus" || name == "pimRPState" || name == "pimRPStateTimer")
        return true;
    return false;
}

PimMib::Pimrpsettable::Pimrpsettable()
{
    yang_name = "pimRPSetTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Pimrpsettable::~Pimrpsettable()
{
}

bool PimMib::Pimrpsettable::has_data() const
{
    for (std::size_t index=0; index<pimrpsetentry.size(); index++)
    {
        if(pimrpsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimrpsettable::has_operation() const
{
    for (std::size_t index=0; index<pimrpsetentry.size(); index++)
    {
        if(pimrpsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Pimrpsettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPSetTable";

    return path_buffer.str();

}

const EntityPath PimMib::Pimrpsettable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimrpsettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimRPSetEntry")
    {
        for(auto const & c : pimrpsetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimrpsettable::Pimrpsetentry>();
        c->parent = this;
        pimrpsetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimrpsettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimrpsetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimrpsettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Pimrpsettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Pimrpsettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPSetEntry")
        return true;
    return false;
}

PimMib::Pimrpsettable::Pimrpsetentry::Pimrpsetentry()
    :
    pimrpsetcomponent{YType::int32, "pimRPSetComponent"},
    pimrpsetgroupaddress{YType::str, "pimRPSetGroupAddress"},
    pimrpsetgroupmask{YType::str, "pimRPSetGroupMask"},
    pimrpsetaddress{YType::str, "pimRPSetAddress"},
    pimrpsetexpirytime{YType::uint32, "pimRPSetExpiryTime"},
    pimrpsetholdtime{YType::int32, "pimRPSetHoldTime"}
{
    yang_name = "pimRPSetEntry"; yang_parent_name = "pimRPSetTable";
}

PimMib::Pimrpsettable::Pimrpsetentry::~Pimrpsetentry()
{
}

bool PimMib::Pimrpsettable::Pimrpsetentry::has_data() const
{
    return pimrpsetcomponent.is_set
	|| pimrpsetgroupaddress.is_set
	|| pimrpsetgroupmask.is_set
	|| pimrpsetaddress.is_set
	|| pimrpsetexpirytime.is_set
	|| pimrpsetholdtime.is_set;
}

bool PimMib::Pimrpsettable::Pimrpsetentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimrpsetcomponent.yfilter)
	|| ydk::is_set(pimrpsetgroupaddress.yfilter)
	|| ydk::is_set(pimrpsetgroupmask.yfilter)
	|| ydk::is_set(pimrpsetaddress.yfilter)
	|| ydk::is_set(pimrpsetexpirytime.yfilter)
	|| ydk::is_set(pimrpsetholdtime.yfilter);
}

std::string PimMib::Pimrpsettable::Pimrpsetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimRPSetEntry" <<"[pimRPSetComponent='" <<pimrpsetcomponent <<"']" <<"[pimRPSetGroupAddress='" <<pimrpsetgroupaddress <<"']" <<"[pimRPSetGroupMask='" <<pimrpsetgroupmask <<"']" <<"[pimRPSetAddress='" <<pimrpsetaddress <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Pimrpsettable::Pimrpsetentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimRPSetTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimrpsetcomponent.is_set || is_set(pimrpsetcomponent.yfilter)) leaf_name_data.push_back(pimrpsetcomponent.get_name_leafdata());
    if (pimrpsetgroupaddress.is_set || is_set(pimrpsetgroupaddress.yfilter)) leaf_name_data.push_back(pimrpsetgroupaddress.get_name_leafdata());
    if (pimrpsetgroupmask.is_set || is_set(pimrpsetgroupmask.yfilter)) leaf_name_data.push_back(pimrpsetgroupmask.get_name_leafdata());
    if (pimrpsetaddress.is_set || is_set(pimrpsetaddress.yfilter)) leaf_name_data.push_back(pimrpsetaddress.get_name_leafdata());
    if (pimrpsetexpirytime.is_set || is_set(pimrpsetexpirytime.yfilter)) leaf_name_data.push_back(pimrpsetexpirytime.get_name_leafdata());
    if (pimrpsetholdtime.is_set || is_set(pimrpsetholdtime.yfilter)) leaf_name_data.push_back(pimrpsetholdtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimrpsettable::Pimrpsetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimrpsettable::Pimrpsetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pimrpsettable::Pimrpsetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "pimRPSetExpiryTime")
    {
        pimrpsetexpirytime = value;
        pimrpsetexpirytime.value_namespace = name_space;
        pimrpsetexpirytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pimRPSetHoldTime")
    {
        pimrpsetholdtime = value;
        pimrpsetholdtime.value_namespace = name_space;
        pimrpsetholdtime.value_namespace_prefix = name_space_prefix;
    }
}

void PimMib::Pimrpsettable::Pimrpsetentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "pimRPSetExpiryTime")
    {
        pimrpsetexpirytime.yfilter = yfilter;
    }
    if(value_path == "pimRPSetHoldTime")
    {
        pimrpsetholdtime.yfilter = yfilter;
    }
}

bool PimMib::Pimrpsettable::Pimrpsetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimRPSetComponent" || name == "pimRPSetGroupAddress" || name == "pimRPSetGroupMask" || name == "pimRPSetAddress" || name == "pimRPSetExpiryTime" || name == "pimRPSetHoldTime")
        return true;
    return false;
}

PimMib::Pimipmroutenexthoptable::Pimipmroutenexthoptable()
{
    yang_name = "pimIpMRouteNextHopTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Pimipmroutenexthoptable::~Pimipmroutenexthoptable()
{
}

bool PimMib::Pimipmroutenexthoptable::has_data() const
{
    for (std::size_t index=0; index<pimipmroutenexthopentry.size(); index++)
    {
        if(pimipmroutenexthopentry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimipmroutenexthoptable::has_operation() const
{
    for (std::size_t index=0; index<pimipmroutenexthopentry.size(); index++)
    {
        if(pimipmroutenexthopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Pimipmroutenexthoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteNextHopTable";

    return path_buffer.str();

}

const EntityPath PimMib::Pimipmroutenexthoptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimipmroutenexthoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimIpMRouteNextHopEntry")
    {
        for(auto const & c : pimipmroutenexthopentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry>();
        c->parent = this;
        pimipmroutenexthopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimipmroutenexthoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimipmroutenexthopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimipmroutenexthoptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Pimipmroutenexthoptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Pimipmroutenexthoptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimIpMRouteNextHopEntry")
        return true;
    return false;
}

PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopentry()
    :
    ipmroutenexthopgroup{YType::str, "ipMRouteNextHopGroup"},
    ipmroutenexthopsource{YType::str, "ipMRouteNextHopSource"},
    ipmroutenexthopsourcemask{YType::str, "ipMRouteNextHopSourceMask"},
    ipmroutenexthopifindex{YType::str, "ipMRouteNextHopIfIndex"},
    ipmroutenexthopaddress{YType::str, "ipMRouteNextHopAddress"},
    pimipmroutenexthopprunereason{YType::enumeration, "pimIpMRouteNextHopPruneReason"}
{
    yang_name = "pimIpMRouteNextHopEntry"; yang_parent_name = "pimIpMRouteNextHopTable";
}

PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::~Pimipmroutenexthopentry()
{
}

bool PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::has_data() const
{
    return ipmroutenexthopgroup.is_set
	|| ipmroutenexthopsource.is_set
	|| ipmroutenexthopsourcemask.is_set
	|| ipmroutenexthopifindex.is_set
	|| ipmroutenexthopaddress.is_set
	|| pimipmroutenexthopprunereason.is_set;
}

bool PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipmroutenexthopgroup.yfilter)
	|| ydk::is_set(ipmroutenexthopsource.yfilter)
	|| ydk::is_set(ipmroutenexthopsourcemask.yfilter)
	|| ydk::is_set(ipmroutenexthopifindex.yfilter)
	|| ydk::is_set(ipmroutenexthopaddress.yfilter)
	|| ydk::is_set(pimipmroutenexthopprunereason.yfilter);
}

std::string PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimIpMRouteNextHopEntry" <<"[ipMRouteNextHopGroup='" <<ipmroutenexthopgroup <<"']" <<"[ipMRouteNextHopSource='" <<ipmroutenexthopsource <<"']" <<"[ipMRouteNextHopSourceMask='" <<ipmroutenexthopsourcemask <<"']" <<"[ipMRouteNextHopIfIndex='" <<ipmroutenexthopifindex <<"']" <<"[ipMRouteNextHopAddress='" <<ipmroutenexthopaddress <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimIpMRouteNextHopTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipmroutenexthopgroup.is_set || is_set(ipmroutenexthopgroup.yfilter)) leaf_name_data.push_back(ipmroutenexthopgroup.get_name_leafdata());
    if (ipmroutenexthopsource.is_set || is_set(ipmroutenexthopsource.yfilter)) leaf_name_data.push_back(ipmroutenexthopsource.get_name_leafdata());
    if (ipmroutenexthopsourcemask.is_set || is_set(ipmroutenexthopsourcemask.yfilter)) leaf_name_data.push_back(ipmroutenexthopsourcemask.get_name_leafdata());
    if (ipmroutenexthopifindex.is_set || is_set(ipmroutenexthopifindex.yfilter)) leaf_name_data.push_back(ipmroutenexthopifindex.get_name_leafdata());
    if (ipmroutenexthopaddress.is_set || is_set(ipmroutenexthopaddress.yfilter)) leaf_name_data.push_back(ipmroutenexthopaddress.get_name_leafdata());
    if (pimipmroutenexthopprunereason.is_set || is_set(pimipmroutenexthopprunereason.yfilter)) leaf_name_data.push_back(pimipmroutenexthopprunereason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipMRouteNextHopGroup" || name == "ipMRouteNextHopSource" || name == "ipMRouteNextHopSourceMask" || name == "ipMRouteNextHopIfIndex" || name == "ipMRouteNextHopAddress" || name == "pimIpMRouteNextHopPruneReason")
        return true;
    return false;
}

PimMib::Pimcandidaterptable::Pimcandidaterptable()
{
    yang_name = "pimCandidateRPTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Pimcandidaterptable::~Pimcandidaterptable()
{
}

bool PimMib::Pimcandidaterptable::has_data() const
{
    for (std::size_t index=0; index<pimcandidaterpentry.size(); index++)
    {
        if(pimcandidaterpentry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimcandidaterptable::has_operation() const
{
    for (std::size_t index=0; index<pimcandidaterpentry.size(); index++)
    {
        if(pimcandidaterpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Pimcandidaterptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimCandidateRPTable";

    return path_buffer.str();

}

const EntityPath PimMib::Pimcandidaterptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimcandidaterptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimCandidateRPEntry")
    {
        for(auto const & c : pimcandidaterpentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimcandidaterptable::Pimcandidaterpentry>();
        c->parent = this;
        pimcandidaterpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimcandidaterptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimcandidaterpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimcandidaterptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Pimcandidaterptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Pimcandidaterptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimCandidateRPEntry")
        return true;
    return false;
}

PimMib::Pimcandidaterptable::Pimcandidaterpentry::Pimcandidaterpentry()
    :
    pimcandidaterpgroupaddress{YType::str, "pimCandidateRPGroupAddress"},
    pimcandidaterpgroupmask{YType::str, "pimCandidateRPGroupMask"},
    pimcandidaterpaddress{YType::str, "pimCandidateRPAddress"},
    pimcandidaterprowstatus{YType::enumeration, "pimCandidateRPRowStatus"}
{
    yang_name = "pimCandidateRPEntry"; yang_parent_name = "pimCandidateRPTable";
}

PimMib::Pimcandidaterptable::Pimcandidaterpentry::~Pimcandidaterpentry()
{
}

bool PimMib::Pimcandidaterptable::Pimcandidaterpentry::has_data() const
{
    return pimcandidaterpgroupaddress.is_set
	|| pimcandidaterpgroupmask.is_set
	|| pimcandidaterpaddress.is_set
	|| pimcandidaterprowstatus.is_set;
}

bool PimMib::Pimcandidaterptable::Pimcandidaterpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimcandidaterpgroupaddress.yfilter)
	|| ydk::is_set(pimcandidaterpgroupmask.yfilter)
	|| ydk::is_set(pimcandidaterpaddress.yfilter)
	|| ydk::is_set(pimcandidaterprowstatus.yfilter);
}

std::string PimMib::Pimcandidaterptable::Pimcandidaterpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimCandidateRPEntry" <<"[pimCandidateRPGroupAddress='" <<pimcandidaterpgroupaddress <<"']" <<"[pimCandidateRPGroupMask='" <<pimcandidaterpgroupmask <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Pimcandidaterptable::Pimcandidaterpentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimCandidateRPTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimcandidaterpgroupaddress.is_set || is_set(pimcandidaterpgroupaddress.yfilter)) leaf_name_data.push_back(pimcandidaterpgroupaddress.get_name_leafdata());
    if (pimcandidaterpgroupmask.is_set || is_set(pimcandidaterpgroupmask.yfilter)) leaf_name_data.push_back(pimcandidaterpgroupmask.get_name_leafdata());
    if (pimcandidaterpaddress.is_set || is_set(pimcandidaterpaddress.yfilter)) leaf_name_data.push_back(pimcandidaterpaddress.get_name_leafdata());
    if (pimcandidaterprowstatus.is_set || is_set(pimcandidaterprowstatus.yfilter)) leaf_name_data.push_back(pimcandidaterprowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimcandidaterptable::Pimcandidaterpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimcandidaterptable::Pimcandidaterpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pimcandidaterptable::Pimcandidaterpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PimMib::Pimcandidaterptable::Pimcandidaterpentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PimMib::Pimcandidaterptable::Pimcandidaterpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimCandidateRPGroupAddress" || name == "pimCandidateRPGroupMask" || name == "pimCandidateRPAddress" || name == "pimCandidateRPRowStatus")
        return true;
    return false;
}

PimMib::Pimcomponenttable::Pimcomponenttable()
{
    yang_name = "pimComponentTable"; yang_parent_name = "PIM-MIB";
}

PimMib::Pimcomponenttable::~Pimcomponenttable()
{
}

bool PimMib::Pimcomponenttable::has_data() const
{
    for (std::size_t index=0; index<pimcomponententry.size(); index++)
    {
        if(pimcomponententry[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimcomponenttable::has_operation() const
{
    for (std::size_t index=0; index<pimcomponententry.size(); index++)
    {
        if(pimcomponententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMib::Pimcomponenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimComponentTable";

    return path_buffer.str();

}

const EntityPath PimMib::Pimcomponenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimcomponenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pimComponentEntry")
    {
        for(auto const & c : pimcomponententry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimcomponenttable::Pimcomponententry>();
        c->parent = this;
        pimcomponententry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimcomponenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimcomponententry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimcomponenttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMib::Pimcomponenttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMib::Pimcomponenttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimComponentEntry")
        return true;
    return false;
}

PimMib::Pimcomponenttable::Pimcomponententry::Pimcomponententry()
    :
    pimcomponentindex{YType::int32, "pimComponentIndex"},
    pimcomponentbsraddress{YType::str, "pimComponentBSRAddress"},
    pimcomponentbsrexpirytime{YType::uint32, "pimComponentBSRExpiryTime"},
    pimcomponentcrpholdtime{YType::int32, "pimComponentCRPHoldTime"},
    pimcomponentstatus{YType::enumeration, "pimComponentStatus"}
{
    yang_name = "pimComponentEntry"; yang_parent_name = "pimComponentTable";
}

PimMib::Pimcomponenttable::Pimcomponententry::~Pimcomponententry()
{
}

bool PimMib::Pimcomponenttable::Pimcomponententry::has_data() const
{
    return pimcomponentindex.is_set
	|| pimcomponentbsraddress.is_set
	|| pimcomponentbsrexpirytime.is_set
	|| pimcomponentcrpholdtime.is_set
	|| pimcomponentstatus.is_set;
}

bool PimMib::Pimcomponenttable::Pimcomponententry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pimcomponentindex.yfilter)
	|| ydk::is_set(pimcomponentbsraddress.yfilter)
	|| ydk::is_set(pimcomponentbsrexpirytime.yfilter)
	|| ydk::is_set(pimcomponentcrpholdtime.yfilter)
	|| ydk::is_set(pimcomponentstatus.yfilter);
}

std::string PimMib::Pimcomponenttable::Pimcomponententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pimComponentEntry" <<"[pimComponentIndex='" <<pimcomponentindex <<"']";

    return path_buffer.str();

}

const EntityPath PimMib::Pimcomponenttable::Pimcomponententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "PIM-MIB:PIM-MIB/pimComponentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pimcomponentindex.is_set || is_set(pimcomponentindex.yfilter)) leaf_name_data.push_back(pimcomponentindex.get_name_leafdata());
    if (pimcomponentbsraddress.is_set || is_set(pimcomponentbsraddress.yfilter)) leaf_name_data.push_back(pimcomponentbsraddress.get_name_leafdata());
    if (pimcomponentbsrexpirytime.is_set || is_set(pimcomponentbsrexpirytime.yfilter)) leaf_name_data.push_back(pimcomponentbsrexpirytime.get_name_leafdata());
    if (pimcomponentcrpholdtime.is_set || is_set(pimcomponentcrpholdtime.yfilter)) leaf_name_data.push_back(pimcomponentcrpholdtime.get_name_leafdata());
    if (pimcomponentstatus.is_set || is_set(pimcomponentstatus.yfilter)) leaf_name_data.push_back(pimcomponentstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> PimMib::Pimcomponenttable::Pimcomponententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimcomponenttable::Pimcomponententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PimMib::Pimcomponenttable::Pimcomponententry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void PimMib::Pimcomponenttable::Pimcomponententry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool PimMib::Pimcomponenttable::Pimcomponententry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pimComponentIndex" || name == "pimComponentBSRAddress" || name == "pimComponentBSRExpiryTime" || name == "pimComponentCRPHoldTime" || name == "pimComponentStatus")
        return true;
    return false;
}

const Enum::YLeaf PimMib::Piminterfacetable::Piminterfaceentry::Piminterfacemode::dense {1, "dense"};
const Enum::YLeaf PimMib::Piminterfacetable::Piminterfaceentry::Piminterfacemode::sparse {2, "sparse"};
const Enum::YLeaf PimMib::Piminterfacetable::Piminterfaceentry::Piminterfacemode::sparseDense {3, "sparseDense"};

const Enum::YLeaf PimMib::Pimneighbortable::Pimneighborentry::Pimneighbormode::dense {1, "dense"};
const Enum::YLeaf PimMib::Pimneighbortable::Pimneighborentry::Pimneighbormode::sparse {2, "sparse"};

const Enum::YLeaf PimMib::Pimrptable::Pimrpentry::Pimrpstate::up {1, "up"};
const Enum::YLeaf PimMib::Pimrptable::Pimrpentry::Pimrpstate::down {2, "down"};

const Enum::YLeaf PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason::other {1, "other"};
const Enum::YLeaf PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason::prune {2, "prune"};
const Enum::YLeaf PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::Pimipmroutenexthopprunereason::assert {3, "assert"};


}
}

