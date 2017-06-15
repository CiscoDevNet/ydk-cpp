
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "PIM_MIB.hpp"

namespace ydk {
namespace PIM_MIB {

PimMib::PimMib()
    :
    pim_(std::make_shared<PimMib::Pim>())
	,pimcandidaterptable_(std::make_shared<PimMib::Pimcandidaterptable>())
	,pimcomponenttable_(std::make_shared<PimMib::Pimcomponenttable>())
	,piminterfacetable_(std::make_shared<PimMib::Piminterfacetable>())
	,pimipmroutenexthoptable_(std::make_shared<PimMib::Pimipmroutenexthoptable>())
	,pimipmroutetable_(std::make_shared<PimMib::Pimipmroutetable>())
	,pimneighbortable_(std::make_shared<PimMib::Pimneighbortable>())
	,pimrpsettable_(std::make_shared<PimMib::Pimrpsettable>())
	,pimrptable_(std::make_shared<PimMib::Pimrptable>())
{
    pim_->parent = this;

    pimcandidaterptable_->parent = this;

    pimcomponenttable_->parent = this;

    piminterfacetable_->parent = this;

    pimipmroutenexthoptable_->parent = this;

    pimipmroutetable_->parent = this;

    pimneighbortable_->parent = this;

    pimrpsettable_->parent = this;

    pimrptable_->parent = this;

    yang_name = "PIM-MIB"; yang_parent_name = "PIM-MIB";
}

PimMib::~PimMib()
{
}

bool PimMib::has_data() const
{
    return (pim_ !=  nullptr && pim_->has_data())
	|| (pimcandidaterptable_ !=  nullptr && pimcandidaterptable_->has_data())
	|| (pimcomponenttable_ !=  nullptr && pimcomponenttable_->has_data())
	|| (piminterfacetable_ !=  nullptr && piminterfacetable_->has_data())
	|| (pimipmroutenexthoptable_ !=  nullptr && pimipmroutenexthoptable_->has_data())
	|| (pimipmroutetable_ !=  nullptr && pimipmroutetable_->has_data())
	|| (pimneighbortable_ !=  nullptr && pimneighbortable_->has_data())
	|| (pimrpsettable_ !=  nullptr && pimrpsettable_->has_data())
	|| (pimrptable_ !=  nullptr && pimrptable_->has_data());
}

bool PimMib::has_operation() const
{
    return is_set(operation)
	|| (pim_ !=  nullptr && pim_->has_operation())
	|| (pimcandidaterptable_ !=  nullptr && pimcandidaterptable_->has_operation())
	|| (pimcomponenttable_ !=  nullptr && pimcomponenttable_->has_operation())
	|| (piminterfacetable_ !=  nullptr && piminterfacetable_->has_operation())
	|| (pimipmroutenexthoptable_ !=  nullptr && pimipmroutenexthoptable_->has_operation())
	|| (pimipmroutetable_ !=  nullptr && pimipmroutetable_->has_operation())
	|| (pimneighbortable_ !=  nullptr && pimneighbortable_->has_operation())
	|| (pimrpsettable_ !=  nullptr && pimrpsettable_->has_operation())
	|| (pimrptable_ !=  nullptr && pimrptable_->has_operation());
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
        if(pim_ == nullptr)
        {
            pim_ = std::make_shared<PimMib::Pim>();
        }
        return pim_;
    }

    if(child_yang_name == "pimCandidateRPTable")
    {
        if(pimcandidaterptable_ == nullptr)
        {
            pimcandidaterptable_ = std::make_shared<PimMib::Pimcandidaterptable>();
        }
        return pimcandidaterptable_;
    }

    if(child_yang_name == "pimComponentTable")
    {
        if(pimcomponenttable_ == nullptr)
        {
            pimcomponenttable_ = std::make_shared<PimMib::Pimcomponenttable>();
        }
        return pimcomponenttable_;
    }

    if(child_yang_name == "pimInterfaceTable")
    {
        if(piminterfacetable_ == nullptr)
        {
            piminterfacetable_ = std::make_shared<PimMib::Piminterfacetable>();
        }
        return piminterfacetable_;
    }

    if(child_yang_name == "pimIpMRouteNextHopTable")
    {
        if(pimipmroutenexthoptable_ == nullptr)
        {
            pimipmroutenexthoptable_ = std::make_shared<PimMib::Pimipmroutenexthoptable>();
        }
        return pimipmroutenexthoptable_;
    }

    if(child_yang_name == "pimIpMRouteTable")
    {
        if(pimipmroutetable_ == nullptr)
        {
            pimipmroutetable_ = std::make_shared<PimMib::Pimipmroutetable>();
        }
        return pimipmroutetable_;
    }

    if(child_yang_name == "pimNeighborTable")
    {
        if(pimneighbortable_ == nullptr)
        {
            pimneighbortable_ = std::make_shared<PimMib::Pimneighbortable>();
        }
        return pimneighbortable_;
    }

    if(child_yang_name == "pimRPSetTable")
    {
        if(pimrpsettable_ == nullptr)
        {
            pimrpsettable_ = std::make_shared<PimMib::Pimrpsettable>();
        }
        return pimrpsettable_;
    }

    if(child_yang_name == "pimRPTable")
    {
        if(pimrptable_ == nullptr)
        {
            pimrptable_ = std::make_shared<PimMib::Pimrptable>();
        }
        return pimrptable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pim_ != nullptr)
    {
        children["pim"] = pim_;
    }

    if(pimcandidaterptable_ != nullptr)
    {
        children["pimCandidateRPTable"] = pimcandidaterptable_;
    }

    if(pimcomponenttable_ != nullptr)
    {
        children["pimComponentTable"] = pimcomponenttable_;
    }

    if(piminterfacetable_ != nullptr)
    {
        children["pimInterfaceTable"] = piminterfacetable_;
    }

    if(pimipmroutenexthoptable_ != nullptr)
    {
        children["pimIpMRouteNextHopTable"] = pimipmroutenexthoptable_;
    }

    if(pimipmroutetable_ != nullptr)
    {
        children["pimIpMRouteTable"] = pimipmroutetable_;
    }

    if(pimneighbortable_ != nullptr)
    {
        children["pimNeighborTable"] = pimneighbortable_;
    }

    if(pimrpsettable_ != nullptr)
    {
        children["pimRPSetTable"] = pimrpsettable_;
    }

    if(pimrptable_ != nullptr)
    {
        children["pimRPTable"] = pimrptable_;
    }

    return children;
}

void PimMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(pimjoinpruneinterval.operation);
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

    if (pimjoinpruneinterval.is_set || is_set(pimjoinpruneinterval.operation)) leaf_name_data.push_back(pimjoinpruneinterval.get_name_leafdata());


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

void PimMib::Pim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pimJoinPruneInterval")
    {
        pimjoinpruneinterval = value;
    }
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
    for (std::size_t index=0; index<piminterfaceentry_.size(); index++)
    {
        if(piminterfaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Piminterfacetable::has_operation() const
{
    for (std::size_t index=0; index<piminterfaceentry_.size(); index++)
    {
        if(piminterfaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : piminterfaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Piminterfacetable::Piminterfaceentry>();
        c->parent = this;
        piminterfaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Piminterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : piminterfaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Piminterfacetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(piminterfaceifindex.operation)
	|| is_set(piminterfaceaddress.operation)
	|| is_set(piminterfacecbsrpreference.operation)
	|| is_set(piminterfacedr.operation)
	|| is_set(piminterfacehellointerval.operation)
	|| is_set(piminterfacejoinpruneinterval.operation)
	|| is_set(piminterfacemode.operation)
	|| is_set(piminterfacenetmask.operation)
	|| is_set(piminterfacestatus.operation);
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

    if (piminterfaceifindex.is_set || is_set(piminterfaceifindex.operation)) leaf_name_data.push_back(piminterfaceifindex.get_name_leafdata());
    if (piminterfaceaddress.is_set || is_set(piminterfaceaddress.operation)) leaf_name_data.push_back(piminterfaceaddress.get_name_leafdata());
    if (piminterfacecbsrpreference.is_set || is_set(piminterfacecbsrpreference.operation)) leaf_name_data.push_back(piminterfacecbsrpreference.get_name_leafdata());
    if (piminterfacedr.is_set || is_set(piminterfacedr.operation)) leaf_name_data.push_back(piminterfacedr.get_name_leafdata());
    if (piminterfacehellointerval.is_set || is_set(piminterfacehellointerval.operation)) leaf_name_data.push_back(piminterfacehellointerval.get_name_leafdata());
    if (piminterfacejoinpruneinterval.is_set || is_set(piminterfacejoinpruneinterval.operation)) leaf_name_data.push_back(piminterfacejoinpruneinterval.get_name_leafdata());
    if (piminterfacemode.is_set || is_set(piminterfacemode.operation)) leaf_name_data.push_back(piminterfacemode.get_name_leafdata());
    if (piminterfacenetmask.is_set || is_set(piminterfacenetmask.operation)) leaf_name_data.push_back(piminterfacenetmask.get_name_leafdata());
    if (piminterfacestatus.is_set || is_set(piminterfacestatus.operation)) leaf_name_data.push_back(piminterfacestatus.get_name_leafdata());


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

void PimMib::Piminterfacetable::Piminterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pimInterfaceIfIndex")
    {
        piminterfaceifindex = value;
    }
    if(value_path == "pimInterfaceAddress")
    {
        piminterfaceaddress = value;
    }
    if(value_path == "pimInterfaceCBSRPreference")
    {
        piminterfacecbsrpreference = value;
    }
    if(value_path == "pimInterfaceDR")
    {
        piminterfacedr = value;
    }
    if(value_path == "pimInterfaceHelloInterval")
    {
        piminterfacehellointerval = value;
    }
    if(value_path == "pimInterfaceJoinPruneInterval")
    {
        piminterfacejoinpruneinterval = value;
    }
    if(value_path == "pimInterfaceMode")
    {
        piminterfacemode = value;
    }
    if(value_path == "pimInterfaceNetMask")
    {
        piminterfacenetmask = value;
    }
    if(value_path == "pimInterfaceStatus")
    {
        piminterfacestatus = value;
    }
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
    for (std::size_t index=0; index<pimneighborentry_.size(); index++)
    {
        if(pimneighborentry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimneighbortable::has_operation() const
{
    for (std::size_t index=0; index<pimneighborentry_.size(); index++)
    {
        if(pimneighborentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : pimneighborentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimneighbortable::Pimneighborentry>();
        c->parent = this;
        pimneighborentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimneighbortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimneighborentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimneighbortable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(pimneighboraddress.operation)
	|| is_set(pimneighborexpirytime.operation)
	|| is_set(pimneighborifindex.operation)
	|| is_set(pimneighbormode.operation)
	|| is_set(pimneighboruptime.operation);
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

    if (pimneighboraddress.is_set || is_set(pimneighboraddress.operation)) leaf_name_data.push_back(pimneighboraddress.get_name_leafdata());
    if (pimneighborexpirytime.is_set || is_set(pimneighborexpirytime.operation)) leaf_name_data.push_back(pimneighborexpirytime.get_name_leafdata());
    if (pimneighborifindex.is_set || is_set(pimneighborifindex.operation)) leaf_name_data.push_back(pimneighborifindex.get_name_leafdata());
    if (pimneighbormode.is_set || is_set(pimneighbormode.operation)) leaf_name_data.push_back(pimneighbormode.get_name_leafdata());
    if (pimneighboruptime.is_set || is_set(pimneighboruptime.operation)) leaf_name_data.push_back(pimneighboruptime.get_name_leafdata());


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

void PimMib::Pimneighbortable::Pimneighborentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pimNeighborAddress")
    {
        pimneighboraddress = value;
    }
    if(value_path == "pimNeighborExpiryTime")
    {
        pimneighborexpirytime = value;
    }
    if(value_path == "pimNeighborIfIndex")
    {
        pimneighborifindex = value;
    }
    if(value_path == "pimNeighborMode")
    {
        pimneighbormode = value;
    }
    if(value_path == "pimNeighborUpTime")
    {
        pimneighboruptime = value;
    }
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
    for (std::size_t index=0; index<pimipmrouteentry_.size(); index++)
    {
        if(pimipmrouteentry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimipmroutetable::has_operation() const
{
    for (std::size_t index=0; index<pimipmrouteentry_.size(); index++)
    {
        if(pimipmrouteentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : pimipmrouteentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimipmroutetable::Pimipmrouteentry>();
        c->parent = this;
        pimipmrouteentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimipmroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimipmrouteentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimipmroutetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ipmroutegroup.operation)
	|| is_set(ipmroutesource.operation)
	|| is_set(ipmroutesourcemask.operation)
	|| is_set(pimipmrouteassertmetric.operation)
	|| is_set(pimipmrouteassertmetricpref.operation)
	|| is_set(pimipmrouteassertrptbit.operation)
	|| is_set(pimipmrouteflags.operation)
	|| is_set(pimipmrouteupstreamasserttimer.operation);
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

    if (ipmroutegroup.is_set || is_set(ipmroutegroup.operation)) leaf_name_data.push_back(ipmroutegroup.get_name_leafdata());
    if (ipmroutesource.is_set || is_set(ipmroutesource.operation)) leaf_name_data.push_back(ipmroutesource.get_name_leafdata());
    if (ipmroutesourcemask.is_set || is_set(ipmroutesourcemask.operation)) leaf_name_data.push_back(ipmroutesourcemask.get_name_leafdata());
    if (pimipmrouteassertmetric.is_set || is_set(pimipmrouteassertmetric.operation)) leaf_name_data.push_back(pimipmrouteassertmetric.get_name_leafdata());
    if (pimipmrouteassertmetricpref.is_set || is_set(pimipmrouteassertmetricpref.operation)) leaf_name_data.push_back(pimipmrouteassertmetricpref.get_name_leafdata());
    if (pimipmrouteassertrptbit.is_set || is_set(pimipmrouteassertrptbit.operation)) leaf_name_data.push_back(pimipmrouteassertrptbit.get_name_leafdata());
    if (pimipmrouteflags.is_set || is_set(pimipmrouteflags.operation)) leaf_name_data.push_back(pimipmrouteflags.get_name_leafdata());
    if (pimipmrouteupstreamasserttimer.is_set || is_set(pimipmrouteupstreamasserttimer.operation)) leaf_name_data.push_back(pimipmrouteupstreamasserttimer.get_name_leafdata());


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

void PimMib::Pimipmroutetable::Pimipmrouteentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteGroup")
    {
        ipmroutegroup = value;
    }
    if(value_path == "ipMRouteSource")
    {
        ipmroutesource = value;
    }
    if(value_path == "ipMRouteSourceMask")
    {
        ipmroutesourcemask = value;
    }
    if(value_path == "pimIpMRouteAssertMetric")
    {
        pimipmrouteassertmetric = value;
    }
    if(value_path == "pimIpMRouteAssertMetricPref")
    {
        pimipmrouteassertmetricpref = value;
    }
    if(value_path == "pimIpMRouteAssertRPTBit")
    {
        pimipmrouteassertrptbit = value;
    }
    if(value_path == "pimIpMRouteFlags")
    {
        pimipmrouteflags = value;
    }
    if(value_path == "pimIpMRouteUpstreamAssertTimer")
    {
        pimipmrouteupstreamasserttimer = value;
    }
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
    for (std::size_t index=0; index<pimrpentry_.size(); index++)
    {
        if(pimrpentry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimrptable::has_operation() const
{
    for (std::size_t index=0; index<pimrpentry_.size(); index++)
    {
        if(pimrpentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : pimrpentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimrptable::Pimrpentry>();
        c->parent = this;
        pimrpentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimrptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimrpentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimrptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(pimrpgroupaddress.operation)
	|| is_set(pimrpaddress.operation)
	|| is_set(pimrplastchange.operation)
	|| is_set(pimrprowstatus.operation)
	|| is_set(pimrpstate.operation)
	|| is_set(pimrpstatetimer.operation);
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

    if (pimrpgroupaddress.is_set || is_set(pimrpgroupaddress.operation)) leaf_name_data.push_back(pimrpgroupaddress.get_name_leafdata());
    if (pimrpaddress.is_set || is_set(pimrpaddress.operation)) leaf_name_data.push_back(pimrpaddress.get_name_leafdata());
    if (pimrplastchange.is_set || is_set(pimrplastchange.operation)) leaf_name_data.push_back(pimrplastchange.get_name_leafdata());
    if (pimrprowstatus.is_set || is_set(pimrprowstatus.operation)) leaf_name_data.push_back(pimrprowstatus.get_name_leafdata());
    if (pimrpstate.is_set || is_set(pimrpstate.operation)) leaf_name_data.push_back(pimrpstate.get_name_leafdata());
    if (pimrpstatetimer.is_set || is_set(pimrpstatetimer.operation)) leaf_name_data.push_back(pimrpstatetimer.get_name_leafdata());


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

void PimMib::Pimrptable::Pimrpentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pimRPGroupAddress")
    {
        pimrpgroupaddress = value;
    }
    if(value_path == "pimRPAddress")
    {
        pimrpaddress = value;
    }
    if(value_path == "pimRPLastChange")
    {
        pimrplastchange = value;
    }
    if(value_path == "pimRPRowStatus")
    {
        pimrprowstatus = value;
    }
    if(value_path == "pimRPState")
    {
        pimrpstate = value;
    }
    if(value_path == "pimRPStateTimer")
    {
        pimrpstatetimer = value;
    }
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
    for (std::size_t index=0; index<pimrpsetentry_.size(); index++)
    {
        if(pimrpsetentry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimrpsettable::has_operation() const
{
    for (std::size_t index=0; index<pimrpsetentry_.size(); index++)
    {
        if(pimrpsetentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : pimrpsetentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimrpsettable::Pimrpsetentry>();
        c->parent = this;
        pimrpsetentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimrpsettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimrpsetentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimrpsettable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(pimrpsetcomponent.operation)
	|| is_set(pimrpsetgroupaddress.operation)
	|| is_set(pimrpsetgroupmask.operation)
	|| is_set(pimrpsetaddress.operation)
	|| is_set(pimrpsetexpirytime.operation)
	|| is_set(pimrpsetholdtime.operation);
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

    if (pimrpsetcomponent.is_set || is_set(pimrpsetcomponent.operation)) leaf_name_data.push_back(pimrpsetcomponent.get_name_leafdata());
    if (pimrpsetgroupaddress.is_set || is_set(pimrpsetgroupaddress.operation)) leaf_name_data.push_back(pimrpsetgroupaddress.get_name_leafdata());
    if (pimrpsetgroupmask.is_set || is_set(pimrpsetgroupmask.operation)) leaf_name_data.push_back(pimrpsetgroupmask.get_name_leafdata());
    if (pimrpsetaddress.is_set || is_set(pimrpsetaddress.operation)) leaf_name_data.push_back(pimrpsetaddress.get_name_leafdata());
    if (pimrpsetexpirytime.is_set || is_set(pimrpsetexpirytime.operation)) leaf_name_data.push_back(pimrpsetexpirytime.get_name_leafdata());
    if (pimrpsetholdtime.is_set || is_set(pimrpsetholdtime.operation)) leaf_name_data.push_back(pimrpsetholdtime.get_name_leafdata());


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

void PimMib::Pimrpsettable::Pimrpsetentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pimRPSetComponent")
    {
        pimrpsetcomponent = value;
    }
    if(value_path == "pimRPSetGroupAddress")
    {
        pimrpsetgroupaddress = value;
    }
    if(value_path == "pimRPSetGroupMask")
    {
        pimrpsetgroupmask = value;
    }
    if(value_path == "pimRPSetAddress")
    {
        pimrpsetaddress = value;
    }
    if(value_path == "pimRPSetExpiryTime")
    {
        pimrpsetexpirytime = value;
    }
    if(value_path == "pimRPSetHoldTime")
    {
        pimrpsetholdtime = value;
    }
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
    for (std::size_t index=0; index<pimipmroutenexthopentry_.size(); index++)
    {
        if(pimipmroutenexthopentry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimipmroutenexthoptable::has_operation() const
{
    for (std::size_t index=0; index<pimipmroutenexthopentry_.size(); index++)
    {
        if(pimipmroutenexthopentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : pimipmroutenexthopentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry>();
        c->parent = this;
        pimipmroutenexthopentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimipmroutenexthoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimipmroutenexthopentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimipmroutenexthoptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ipmroutenexthopgroup.operation)
	|| is_set(ipmroutenexthopsource.operation)
	|| is_set(ipmroutenexthopsourcemask.operation)
	|| is_set(ipmroutenexthopifindex.operation)
	|| is_set(ipmroutenexthopaddress.operation)
	|| is_set(pimipmroutenexthopprunereason.operation);
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

    if (ipmroutenexthopgroup.is_set || is_set(ipmroutenexthopgroup.operation)) leaf_name_data.push_back(ipmroutenexthopgroup.get_name_leafdata());
    if (ipmroutenexthopsource.is_set || is_set(ipmroutenexthopsource.operation)) leaf_name_data.push_back(ipmroutenexthopsource.get_name_leafdata());
    if (ipmroutenexthopsourcemask.is_set || is_set(ipmroutenexthopsourcemask.operation)) leaf_name_data.push_back(ipmroutenexthopsourcemask.get_name_leafdata());
    if (ipmroutenexthopifindex.is_set || is_set(ipmroutenexthopifindex.operation)) leaf_name_data.push_back(ipmroutenexthopifindex.get_name_leafdata());
    if (ipmroutenexthopaddress.is_set || is_set(ipmroutenexthopaddress.operation)) leaf_name_data.push_back(ipmroutenexthopaddress.get_name_leafdata());
    if (pimipmroutenexthopprunereason.is_set || is_set(pimipmroutenexthopprunereason.operation)) leaf_name_data.push_back(pimipmroutenexthopprunereason.get_name_leafdata());


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

void PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipMRouteNextHopGroup")
    {
        ipmroutenexthopgroup = value;
    }
    if(value_path == "ipMRouteNextHopSource")
    {
        ipmroutenexthopsource = value;
    }
    if(value_path == "ipMRouteNextHopSourceMask")
    {
        ipmroutenexthopsourcemask = value;
    }
    if(value_path == "ipMRouteNextHopIfIndex")
    {
        ipmroutenexthopifindex = value;
    }
    if(value_path == "ipMRouteNextHopAddress")
    {
        ipmroutenexthopaddress = value;
    }
    if(value_path == "pimIpMRouteNextHopPruneReason")
    {
        pimipmroutenexthopprunereason = value;
    }
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
    for (std::size_t index=0; index<pimcandidaterpentry_.size(); index++)
    {
        if(pimcandidaterpentry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimcandidaterptable::has_operation() const
{
    for (std::size_t index=0; index<pimcandidaterpentry_.size(); index++)
    {
        if(pimcandidaterpentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : pimcandidaterpentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimcandidaterptable::Pimcandidaterpentry>();
        c->parent = this;
        pimcandidaterpentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimcandidaterptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimcandidaterpentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimcandidaterptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(pimcandidaterpgroupaddress.operation)
	|| is_set(pimcandidaterpgroupmask.operation)
	|| is_set(pimcandidaterpaddress.operation)
	|| is_set(pimcandidaterprowstatus.operation);
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

    if (pimcandidaterpgroupaddress.is_set || is_set(pimcandidaterpgroupaddress.operation)) leaf_name_data.push_back(pimcandidaterpgroupaddress.get_name_leafdata());
    if (pimcandidaterpgroupmask.is_set || is_set(pimcandidaterpgroupmask.operation)) leaf_name_data.push_back(pimcandidaterpgroupmask.get_name_leafdata());
    if (pimcandidaterpaddress.is_set || is_set(pimcandidaterpaddress.operation)) leaf_name_data.push_back(pimcandidaterpaddress.get_name_leafdata());
    if (pimcandidaterprowstatus.is_set || is_set(pimcandidaterprowstatus.operation)) leaf_name_data.push_back(pimcandidaterprowstatus.get_name_leafdata());


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

void PimMib::Pimcandidaterptable::Pimcandidaterpentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pimCandidateRPGroupAddress")
    {
        pimcandidaterpgroupaddress = value;
    }
    if(value_path == "pimCandidateRPGroupMask")
    {
        pimcandidaterpgroupmask = value;
    }
    if(value_path == "pimCandidateRPAddress")
    {
        pimcandidaterpaddress = value;
    }
    if(value_path == "pimCandidateRPRowStatus")
    {
        pimcandidaterprowstatus = value;
    }
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
    for (std::size_t index=0; index<pimcomponententry_.size(); index++)
    {
        if(pimcomponententry_[index]->has_data())
            return true;
    }
    return false;
}

bool PimMib::Pimcomponenttable::has_operation() const
{
    for (std::size_t index=0; index<pimcomponententry_.size(); index++)
    {
        if(pimcomponententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : pimcomponententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PimMib::Pimcomponenttable::Pimcomponententry>();
        c->parent = this;
        pimcomponententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMib::Pimcomponenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pimcomponententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PimMib::Pimcomponenttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(pimcomponentindex.operation)
	|| is_set(pimcomponentbsraddress.operation)
	|| is_set(pimcomponentbsrexpirytime.operation)
	|| is_set(pimcomponentcrpholdtime.operation)
	|| is_set(pimcomponentstatus.operation);
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

    if (pimcomponentindex.is_set || is_set(pimcomponentindex.operation)) leaf_name_data.push_back(pimcomponentindex.get_name_leafdata());
    if (pimcomponentbsraddress.is_set || is_set(pimcomponentbsraddress.operation)) leaf_name_data.push_back(pimcomponentbsraddress.get_name_leafdata());
    if (pimcomponentbsrexpirytime.is_set || is_set(pimcomponentbsrexpirytime.operation)) leaf_name_data.push_back(pimcomponentbsrexpirytime.get_name_leafdata());
    if (pimcomponentcrpholdtime.is_set || is_set(pimcomponentcrpholdtime.operation)) leaf_name_data.push_back(pimcomponentcrpholdtime.get_name_leafdata());
    if (pimcomponentstatus.is_set || is_set(pimcomponentstatus.operation)) leaf_name_data.push_back(pimcomponentstatus.get_name_leafdata());


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

void PimMib::Pimcomponenttable::Pimcomponententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pimComponentIndex")
    {
        pimcomponentindex = value;
    }
    if(value_path == "pimComponentBSRAddress")
    {
        pimcomponentbsraddress = value;
    }
    if(value_path == "pimComponentBSRExpiryTime")
    {
        pimcomponentbsrexpirytime = value;
    }
    if(value_path == "pimComponentCRPHoldTime")
    {
        pimcomponentcrpholdtime = value;
    }
    if(value_path == "pimComponentStatus")
    {
        pimcomponentstatus = value;
    }
}

const Enum::YLeaf PimMib::Piminterfacetable::Piminterfaceentry::PiminterfacemodeEnum::dense {1, "dense"};
const Enum::YLeaf PimMib::Piminterfacetable::Piminterfaceentry::PiminterfacemodeEnum::sparse {2, "sparse"};
const Enum::YLeaf PimMib::Piminterfacetable::Piminterfaceentry::PiminterfacemodeEnum::sparseDense {3, "sparseDense"};

const Enum::YLeaf PimMib::Pimneighbortable::Pimneighborentry::PimneighbormodeEnum::dense {1, "dense"};
const Enum::YLeaf PimMib::Pimneighbortable::Pimneighborentry::PimneighbormodeEnum::sparse {2, "sparse"};

const Enum::YLeaf PimMib::Pimrptable::Pimrpentry::PimrpstateEnum::up {1, "up"};
const Enum::YLeaf PimMib::Pimrptable::Pimrpentry::PimrpstateEnum::down {2, "down"};

const Enum::YLeaf PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::PimipmroutenexthopprunereasonEnum::other {1, "other"};
const Enum::YLeaf PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::PimipmroutenexthopprunereasonEnum::prune {2, "prune"};
const Enum::YLeaf PimMib::Pimipmroutenexthoptable::Pimipmroutenexthopentry::PimipmroutenexthopprunereasonEnum::assert {3, "assert"};


}
}

