
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "EtherLike_MIB.hpp"

namespace ydk {
namespace EtherLike_MIB {

Dot3ErroriniterrorIdentity::Dot3ErroriniterrorIdentity()
     : Identity("EtherLike-MIB:dot3ErrorInitError")
{
}

Dot3ErroriniterrorIdentity::~Dot3ErroriniterrorIdentity()
{
}

Dot3TesttdrIdentity::Dot3TesttdrIdentity()
     : Identity("EtherLike-MIB:dot3TestTdr")
{
}

Dot3TesttdrIdentity::~Dot3TesttdrIdentity()
{
}

Dot3ErrorloopbackerrorIdentity::Dot3ErrorloopbackerrorIdentity()
     : Identity("EtherLike-MIB:dot3ErrorLoopbackError")
{
}

Dot3ErrorloopbackerrorIdentity::~Dot3ErrorloopbackerrorIdentity()
{
}

Dot3TestloopbackIdentity::Dot3TestloopbackIdentity()
     : Identity("EtherLike-MIB:dot3TestLoopBack")
{
}

Dot3TestloopbackIdentity::~Dot3TestloopbackIdentity()
{
}

EtherlikeMib::EtherlikeMib()
    :
    dot3colltable_(std::make_shared<EtherlikeMib::Dot3Colltable>())
	,dot3controltable_(std::make_shared<EtherlikeMib::Dot3Controltable>())
	,dot3hcstatstable_(std::make_shared<EtherlikeMib::Dot3Hcstatstable>())
	,dot3pausetable_(std::make_shared<EtherlikeMib::Dot3Pausetable>())
	,dot3statstable_(std::make_shared<EtherlikeMib::Dot3Statstable>())
{
    dot3colltable_->parent = this;

    dot3controltable_->parent = this;

    dot3hcstatstable_->parent = this;

    dot3pausetable_->parent = this;

    dot3statstable_->parent = this;

    yang_name = "EtherLike-MIB"; yang_parent_name = "EtherLike-MIB";
}

EtherlikeMib::~EtherlikeMib()
{
}

bool EtherlikeMib::has_data() const
{
    return (dot3colltable_ !=  nullptr && dot3colltable_->has_data())
	|| (dot3controltable_ !=  nullptr && dot3controltable_->has_data())
	|| (dot3hcstatstable_ !=  nullptr && dot3hcstatstable_->has_data())
	|| (dot3pausetable_ !=  nullptr && dot3pausetable_->has_data())
	|| (dot3statstable_ !=  nullptr && dot3statstable_->has_data());
}

bool EtherlikeMib::has_operation() const
{
    return is_set(operation)
	|| (dot3colltable_ !=  nullptr && dot3colltable_->has_operation())
	|| (dot3controltable_ !=  nullptr && dot3controltable_->has_operation())
	|| (dot3hcstatstable_ !=  nullptr && dot3hcstatstable_->has_operation())
	|| (dot3pausetable_ !=  nullptr && dot3pausetable_->has_operation())
	|| (dot3statstable_ !=  nullptr && dot3statstable_->has_operation());
}

std::string EtherlikeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EtherLike-MIB:EtherLike-MIB";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> EtherlikeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3CollTable")
    {
        if(dot3colltable_ == nullptr)
        {
            dot3colltable_ = std::make_shared<EtherlikeMib::Dot3Colltable>();
        }
        return dot3colltable_;
    }

    if(child_yang_name == "dot3ControlTable")
    {
        if(dot3controltable_ == nullptr)
        {
            dot3controltable_ = std::make_shared<EtherlikeMib::Dot3Controltable>();
        }
        return dot3controltable_;
    }

    if(child_yang_name == "dot3HCStatsTable")
    {
        if(dot3hcstatstable_ == nullptr)
        {
            dot3hcstatstable_ = std::make_shared<EtherlikeMib::Dot3Hcstatstable>();
        }
        return dot3hcstatstable_;
    }

    if(child_yang_name == "dot3PauseTable")
    {
        if(dot3pausetable_ == nullptr)
        {
            dot3pausetable_ = std::make_shared<EtherlikeMib::Dot3Pausetable>();
        }
        return dot3pausetable_;
    }

    if(child_yang_name == "dot3StatsTable")
    {
        if(dot3statstable_ == nullptr)
        {
            dot3statstable_ = std::make_shared<EtherlikeMib::Dot3Statstable>();
        }
        return dot3statstable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot3colltable_ != nullptr)
    {
        children["dot3CollTable"] = dot3colltable_;
    }

    if(dot3controltable_ != nullptr)
    {
        children["dot3ControlTable"] = dot3controltable_;
    }

    if(dot3hcstatstable_ != nullptr)
    {
        children["dot3HCStatsTable"] = dot3hcstatstable_;
    }

    if(dot3pausetable_ != nullptr)
    {
        children["dot3PauseTable"] = dot3pausetable_;
    }

    if(dot3statstable_ != nullptr)
    {
        children["dot3StatsTable"] = dot3statstable_;
    }

    return children;
}

void EtherlikeMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> EtherlikeMib::clone_ptr() const
{
    return std::make_shared<EtherlikeMib>();
}

std::string EtherlikeMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string EtherlikeMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function EtherlikeMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

EtherlikeMib::Dot3Statstable::Dot3Statstable()
{
    yang_name = "dot3StatsTable"; yang_parent_name = "EtherLike-MIB";
}

EtherlikeMib::Dot3Statstable::~Dot3Statstable()
{
}

bool EtherlikeMib::Dot3Statstable::has_data() const
{
    for (std::size_t index=0; index<dot3statsentry_.size(); index++)
    {
        if(dot3statsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherlikeMib::Dot3Statstable::has_operation() const
{
    for (std::size_t index=0; index<dot3statsentry_.size(); index++)
    {
        if(dot3statsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherlikeMib::Dot3Statstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3StatsTable";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Statstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Statstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3StatsEntry")
    {
        for(auto const & c : dot3statsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherlikeMib::Dot3Statstable::Dot3Statsentry>();
        c->parent = this;
        dot3statsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Statstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3statsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherlikeMib::Dot3Statstable::set_value(const std::string & value_path, std::string value)
{
}

EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3Statsentry()
    :
    dot3statsindex{YType::int32, "dot3StatsIndex"},
    dot3statsalignmenterrors{YType::uint32, "dot3StatsAlignmentErrors"},
    dot3statscarriersenseerrors{YType::uint32, "dot3StatsCarrierSenseErrors"},
    dot3statsdeferredtransmissions{YType::uint32, "dot3StatsDeferredTransmissions"},
    dot3statsduplexstatus{YType::enumeration, "dot3StatsDuplexStatus"},
    dot3statsetherchipset{YType::str, "dot3StatsEtherChipSet"},
    dot3statsexcessivecollisions{YType::uint32, "dot3StatsExcessiveCollisions"},
    dot3statsfcserrors{YType::uint32, "dot3StatsFCSErrors"},
    dot3statsframetoolongs{YType::uint32, "dot3StatsFrameTooLongs"},
    dot3statsinternalmacreceiveerrors{YType::uint32, "dot3StatsInternalMacReceiveErrors"},
    dot3statsinternalmactransmiterrors{YType::uint32, "dot3StatsInternalMacTransmitErrors"},
    dot3statslatecollisions{YType::uint32, "dot3StatsLateCollisions"},
    dot3statsmultiplecollisionframes{YType::uint32, "dot3StatsMultipleCollisionFrames"},
    dot3statsratecontrolability{YType::boolean, "dot3StatsRateControlAbility"},
    dot3statsratecontrolstatus{YType::enumeration, "dot3StatsRateControlStatus"},
    dot3statssinglecollisionframes{YType::uint32, "dot3StatsSingleCollisionFrames"},
    dot3statssqetesterrors{YType::uint32, "dot3StatsSQETestErrors"},
    dot3statssymbolerrors{YType::uint32, "dot3StatsSymbolErrors"}
{
    yang_name = "dot3StatsEntry"; yang_parent_name = "dot3StatsTable";
}

EtherlikeMib::Dot3Statstable::Dot3Statsentry::~Dot3Statsentry()
{
}

bool EtherlikeMib::Dot3Statstable::Dot3Statsentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3statsalignmenterrors.is_set
	|| dot3statscarriersenseerrors.is_set
	|| dot3statsdeferredtransmissions.is_set
	|| dot3statsduplexstatus.is_set
	|| dot3statsetherchipset.is_set
	|| dot3statsexcessivecollisions.is_set
	|| dot3statsfcserrors.is_set
	|| dot3statsframetoolongs.is_set
	|| dot3statsinternalmacreceiveerrors.is_set
	|| dot3statsinternalmactransmiterrors.is_set
	|| dot3statslatecollisions.is_set
	|| dot3statsmultiplecollisionframes.is_set
	|| dot3statsratecontrolability.is_set
	|| dot3statsratecontrolstatus.is_set
	|| dot3statssinglecollisionframes.is_set
	|| dot3statssqetesterrors.is_set
	|| dot3statssymbolerrors.is_set;
}

bool EtherlikeMib::Dot3Statstable::Dot3Statsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot3statsindex.operation)
	|| is_set(dot3statsalignmenterrors.operation)
	|| is_set(dot3statscarriersenseerrors.operation)
	|| is_set(dot3statsdeferredtransmissions.operation)
	|| is_set(dot3statsduplexstatus.operation)
	|| is_set(dot3statsetherchipset.operation)
	|| is_set(dot3statsexcessivecollisions.operation)
	|| is_set(dot3statsfcserrors.operation)
	|| is_set(dot3statsframetoolongs.operation)
	|| is_set(dot3statsinternalmacreceiveerrors.operation)
	|| is_set(dot3statsinternalmactransmiterrors.operation)
	|| is_set(dot3statslatecollisions.operation)
	|| is_set(dot3statsmultiplecollisionframes.operation)
	|| is_set(dot3statsratecontrolability.operation)
	|| is_set(dot3statsratecontrolstatus.operation)
	|| is_set(dot3statssinglecollisionframes.operation)
	|| is_set(dot3statssqetesterrors.operation)
	|| is_set(dot3statssymbolerrors.operation);
}

std::string EtherlikeMib::Dot3Statstable::Dot3Statsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3StatsEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Statstable::Dot3Statsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3StatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.operation)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3statsalignmenterrors.is_set || is_set(dot3statsalignmenterrors.operation)) leaf_name_data.push_back(dot3statsalignmenterrors.get_name_leafdata());
    if (dot3statscarriersenseerrors.is_set || is_set(dot3statscarriersenseerrors.operation)) leaf_name_data.push_back(dot3statscarriersenseerrors.get_name_leafdata());
    if (dot3statsdeferredtransmissions.is_set || is_set(dot3statsdeferredtransmissions.operation)) leaf_name_data.push_back(dot3statsdeferredtransmissions.get_name_leafdata());
    if (dot3statsduplexstatus.is_set || is_set(dot3statsduplexstatus.operation)) leaf_name_data.push_back(dot3statsduplexstatus.get_name_leafdata());
    if (dot3statsetherchipset.is_set || is_set(dot3statsetherchipset.operation)) leaf_name_data.push_back(dot3statsetherchipset.get_name_leafdata());
    if (dot3statsexcessivecollisions.is_set || is_set(dot3statsexcessivecollisions.operation)) leaf_name_data.push_back(dot3statsexcessivecollisions.get_name_leafdata());
    if (dot3statsfcserrors.is_set || is_set(dot3statsfcserrors.operation)) leaf_name_data.push_back(dot3statsfcserrors.get_name_leafdata());
    if (dot3statsframetoolongs.is_set || is_set(dot3statsframetoolongs.operation)) leaf_name_data.push_back(dot3statsframetoolongs.get_name_leafdata());
    if (dot3statsinternalmacreceiveerrors.is_set || is_set(dot3statsinternalmacreceiveerrors.operation)) leaf_name_data.push_back(dot3statsinternalmacreceiveerrors.get_name_leafdata());
    if (dot3statsinternalmactransmiterrors.is_set || is_set(dot3statsinternalmactransmiterrors.operation)) leaf_name_data.push_back(dot3statsinternalmactransmiterrors.get_name_leafdata());
    if (dot3statslatecollisions.is_set || is_set(dot3statslatecollisions.operation)) leaf_name_data.push_back(dot3statslatecollisions.get_name_leafdata());
    if (dot3statsmultiplecollisionframes.is_set || is_set(dot3statsmultiplecollisionframes.operation)) leaf_name_data.push_back(dot3statsmultiplecollisionframes.get_name_leafdata());
    if (dot3statsratecontrolability.is_set || is_set(dot3statsratecontrolability.operation)) leaf_name_data.push_back(dot3statsratecontrolability.get_name_leafdata());
    if (dot3statsratecontrolstatus.is_set || is_set(dot3statsratecontrolstatus.operation)) leaf_name_data.push_back(dot3statsratecontrolstatus.get_name_leafdata());
    if (dot3statssinglecollisionframes.is_set || is_set(dot3statssinglecollisionframes.operation)) leaf_name_data.push_back(dot3statssinglecollisionframes.get_name_leafdata());
    if (dot3statssqetesterrors.is_set || is_set(dot3statssqetesterrors.operation)) leaf_name_data.push_back(dot3statssqetesterrors.get_name_leafdata());
    if (dot3statssymbolerrors.is_set || is_set(dot3statssymbolerrors.operation)) leaf_name_data.push_back(dot3statssymbolerrors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Statstable::Dot3Statsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Statstable::Dot3Statsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherlikeMib::Dot3Statstable::Dot3Statsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
    }
    if(value_path == "dot3StatsAlignmentErrors")
    {
        dot3statsalignmenterrors = value;
    }
    if(value_path == "dot3StatsCarrierSenseErrors")
    {
        dot3statscarriersenseerrors = value;
    }
    if(value_path == "dot3StatsDeferredTransmissions")
    {
        dot3statsdeferredtransmissions = value;
    }
    if(value_path == "dot3StatsDuplexStatus")
    {
        dot3statsduplexstatus = value;
    }
    if(value_path == "dot3StatsEtherChipSet")
    {
        dot3statsetherchipset = value;
    }
    if(value_path == "dot3StatsExcessiveCollisions")
    {
        dot3statsexcessivecollisions = value;
    }
    if(value_path == "dot3StatsFCSErrors")
    {
        dot3statsfcserrors = value;
    }
    if(value_path == "dot3StatsFrameTooLongs")
    {
        dot3statsframetoolongs = value;
    }
    if(value_path == "dot3StatsInternalMacReceiveErrors")
    {
        dot3statsinternalmacreceiveerrors = value;
    }
    if(value_path == "dot3StatsInternalMacTransmitErrors")
    {
        dot3statsinternalmactransmiterrors = value;
    }
    if(value_path == "dot3StatsLateCollisions")
    {
        dot3statslatecollisions = value;
    }
    if(value_path == "dot3StatsMultipleCollisionFrames")
    {
        dot3statsmultiplecollisionframes = value;
    }
    if(value_path == "dot3StatsRateControlAbility")
    {
        dot3statsratecontrolability = value;
    }
    if(value_path == "dot3StatsRateControlStatus")
    {
        dot3statsratecontrolstatus = value;
    }
    if(value_path == "dot3StatsSingleCollisionFrames")
    {
        dot3statssinglecollisionframes = value;
    }
    if(value_path == "dot3StatsSQETestErrors")
    {
        dot3statssqetesterrors = value;
    }
    if(value_path == "dot3StatsSymbolErrors")
    {
        dot3statssymbolerrors = value;
    }
}

EtherlikeMib::Dot3Colltable::Dot3Colltable()
{
    yang_name = "dot3CollTable"; yang_parent_name = "EtherLike-MIB";
}

EtherlikeMib::Dot3Colltable::~Dot3Colltable()
{
}

bool EtherlikeMib::Dot3Colltable::has_data() const
{
    for (std::size_t index=0; index<dot3collentry_.size(); index++)
    {
        if(dot3collentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherlikeMib::Dot3Colltable::has_operation() const
{
    for (std::size_t index=0; index<dot3collentry_.size(); index++)
    {
        if(dot3collentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherlikeMib::Dot3Colltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3CollTable";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Colltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Colltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3CollEntry")
    {
        for(auto const & c : dot3collentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherlikeMib::Dot3Colltable::Dot3Collentry>();
        c->parent = this;
        dot3collentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Colltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3collentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherlikeMib::Dot3Colltable::set_value(const std::string & value_path, std::string value)
{
}

EtherlikeMib::Dot3Colltable::Dot3Collentry::Dot3Collentry()
    :
    ifindex{YType::str, "ifIndex"},
    dot3collcount{YType::int32, "dot3CollCount"},
    dot3collfrequencies{YType::uint32, "dot3CollFrequencies"}
{
    yang_name = "dot3CollEntry"; yang_parent_name = "dot3CollTable";
}

EtherlikeMib::Dot3Colltable::Dot3Collentry::~Dot3Collentry()
{
}

bool EtherlikeMib::Dot3Colltable::Dot3Collentry::has_data() const
{
    return ifindex.is_set
	|| dot3collcount.is_set
	|| dot3collfrequencies.is_set;
}

bool EtherlikeMib::Dot3Colltable::Dot3Collentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(dot3collcount.operation)
	|| is_set(dot3collfrequencies.operation);
}

std::string EtherlikeMib::Dot3Colltable::Dot3Collentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3CollEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[dot3CollCount='" <<dot3collcount <<"']";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Colltable::Dot3Collentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3CollTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (dot3collcount.is_set || is_set(dot3collcount.operation)) leaf_name_data.push_back(dot3collcount.get_name_leafdata());
    if (dot3collfrequencies.is_set || is_set(dot3collfrequencies.operation)) leaf_name_data.push_back(dot3collfrequencies.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Colltable::Dot3Collentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Colltable::Dot3Collentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherlikeMib::Dot3Colltable::Dot3Collentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "dot3CollCount")
    {
        dot3collcount = value;
    }
    if(value_path == "dot3CollFrequencies")
    {
        dot3collfrequencies = value;
    }
}

EtherlikeMib::Dot3Controltable::Dot3Controltable()
{
    yang_name = "dot3ControlTable"; yang_parent_name = "EtherLike-MIB";
}

EtherlikeMib::Dot3Controltable::~Dot3Controltable()
{
}

bool EtherlikeMib::Dot3Controltable::has_data() const
{
    for (std::size_t index=0; index<dot3controlentry_.size(); index++)
    {
        if(dot3controlentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherlikeMib::Dot3Controltable::has_operation() const
{
    for (std::size_t index=0; index<dot3controlentry_.size(); index++)
    {
        if(dot3controlentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherlikeMib::Dot3Controltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3ControlTable";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Controltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Controltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3ControlEntry")
    {
        for(auto const & c : dot3controlentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherlikeMib::Dot3Controltable::Dot3Controlentry>();
        c->parent = this;
        dot3controlentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Controltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3controlentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherlikeMib::Dot3Controltable::set_value(const std::string & value_path, std::string value)
{
}

EtherlikeMib::Dot3Controltable::Dot3Controlentry::Dot3Controlentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3controlfunctionssupported{YType::bits, "dot3ControlFunctionsSupported"},
    dot3controlinunknownopcodes{YType::uint32, "dot3ControlInUnknownOpcodes"},
    dot3hccontrolinunknownopcodes{YType::uint64, "dot3HCControlInUnknownOpcodes"}
{
    yang_name = "dot3ControlEntry"; yang_parent_name = "dot3ControlTable";
}

EtherlikeMib::Dot3Controltable::Dot3Controlentry::~Dot3Controlentry()
{
}

bool EtherlikeMib::Dot3Controltable::Dot3Controlentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3controlfunctionssupported.is_set
	|| dot3controlinunknownopcodes.is_set
	|| dot3hccontrolinunknownopcodes.is_set;
}

bool EtherlikeMib::Dot3Controltable::Dot3Controlentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot3statsindex.operation)
	|| is_set(dot3controlfunctionssupported.operation)
	|| is_set(dot3controlinunknownopcodes.operation)
	|| is_set(dot3hccontrolinunknownopcodes.operation);
}

std::string EtherlikeMib::Dot3Controltable::Dot3Controlentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3ControlEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Controltable::Dot3Controlentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3ControlTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.operation)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3controlfunctionssupported.is_set || is_set(dot3controlfunctionssupported.operation)) leaf_name_data.push_back(dot3controlfunctionssupported.get_name_leafdata());
    if (dot3controlinunknownopcodes.is_set || is_set(dot3controlinunknownopcodes.operation)) leaf_name_data.push_back(dot3controlinunknownopcodes.get_name_leafdata());
    if (dot3hccontrolinunknownopcodes.is_set || is_set(dot3hccontrolinunknownopcodes.operation)) leaf_name_data.push_back(dot3hccontrolinunknownopcodes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Controltable::Dot3Controlentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Controltable::Dot3Controlentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherlikeMib::Dot3Controltable::Dot3Controlentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
    }
    if(value_path == "dot3ControlFunctionsSupported")
    {
        dot3controlfunctionssupported[value] = true;
    }
    if(value_path == "dot3ControlInUnknownOpcodes")
    {
        dot3controlinunknownopcodes = value;
    }
    if(value_path == "dot3HCControlInUnknownOpcodes")
    {
        dot3hccontrolinunknownopcodes = value;
    }
}

EtherlikeMib::Dot3Pausetable::Dot3Pausetable()
{
    yang_name = "dot3PauseTable"; yang_parent_name = "EtherLike-MIB";
}

EtherlikeMib::Dot3Pausetable::~Dot3Pausetable()
{
}

bool EtherlikeMib::Dot3Pausetable::has_data() const
{
    for (std::size_t index=0; index<dot3pauseentry_.size(); index++)
    {
        if(dot3pauseentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherlikeMib::Dot3Pausetable::has_operation() const
{
    for (std::size_t index=0; index<dot3pauseentry_.size(); index++)
    {
        if(dot3pauseentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherlikeMib::Dot3Pausetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3PauseTable";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Pausetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Pausetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3PauseEntry")
    {
        for(auto const & c : dot3pauseentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherlikeMib::Dot3Pausetable::Dot3Pauseentry>();
        c->parent = this;
        dot3pauseentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Pausetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3pauseentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherlikeMib::Dot3Pausetable::set_value(const std::string & value_path, std::string value)
{
}

EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3Pauseentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3hcinpauseframes{YType::uint64, "dot3HCInPauseFrames"},
    dot3hcoutpauseframes{YType::uint64, "dot3HCOutPauseFrames"},
    dot3inpauseframes{YType::uint32, "dot3InPauseFrames"},
    dot3outpauseframes{YType::uint32, "dot3OutPauseFrames"},
    dot3pauseadminmode{YType::enumeration, "dot3PauseAdminMode"},
    dot3pauseopermode{YType::enumeration, "dot3PauseOperMode"}
{
    yang_name = "dot3PauseEntry"; yang_parent_name = "dot3PauseTable";
}

EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::~Dot3Pauseentry()
{
}

bool EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3hcinpauseframes.is_set
	|| dot3hcoutpauseframes.is_set
	|| dot3inpauseframes.is_set
	|| dot3outpauseframes.is_set
	|| dot3pauseadminmode.is_set
	|| dot3pauseopermode.is_set;
}

bool EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot3statsindex.operation)
	|| is_set(dot3hcinpauseframes.operation)
	|| is_set(dot3hcoutpauseframes.operation)
	|| is_set(dot3inpauseframes.operation)
	|| is_set(dot3outpauseframes.operation)
	|| is_set(dot3pauseadminmode.operation)
	|| is_set(dot3pauseopermode.operation);
}

std::string EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3PauseEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3PauseTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.operation)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3hcinpauseframes.is_set || is_set(dot3hcinpauseframes.operation)) leaf_name_data.push_back(dot3hcinpauseframes.get_name_leafdata());
    if (dot3hcoutpauseframes.is_set || is_set(dot3hcoutpauseframes.operation)) leaf_name_data.push_back(dot3hcoutpauseframes.get_name_leafdata());
    if (dot3inpauseframes.is_set || is_set(dot3inpauseframes.operation)) leaf_name_data.push_back(dot3inpauseframes.get_name_leafdata());
    if (dot3outpauseframes.is_set || is_set(dot3outpauseframes.operation)) leaf_name_data.push_back(dot3outpauseframes.get_name_leafdata());
    if (dot3pauseadminmode.is_set || is_set(dot3pauseadminmode.operation)) leaf_name_data.push_back(dot3pauseadminmode.get_name_leafdata());
    if (dot3pauseopermode.is_set || is_set(dot3pauseopermode.operation)) leaf_name_data.push_back(dot3pauseopermode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
    }
    if(value_path == "dot3HCInPauseFrames")
    {
        dot3hcinpauseframes = value;
    }
    if(value_path == "dot3HCOutPauseFrames")
    {
        dot3hcoutpauseframes = value;
    }
    if(value_path == "dot3InPauseFrames")
    {
        dot3inpauseframes = value;
    }
    if(value_path == "dot3OutPauseFrames")
    {
        dot3outpauseframes = value;
    }
    if(value_path == "dot3PauseAdminMode")
    {
        dot3pauseadminmode = value;
    }
    if(value_path == "dot3PauseOperMode")
    {
        dot3pauseopermode = value;
    }
}

EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatstable()
{
    yang_name = "dot3HCStatsTable"; yang_parent_name = "EtherLike-MIB";
}

EtherlikeMib::Dot3Hcstatstable::~Dot3Hcstatstable()
{
}

bool EtherlikeMib::Dot3Hcstatstable::has_data() const
{
    for (std::size_t index=0; index<dot3hcstatsentry_.size(); index++)
    {
        if(dot3hcstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool EtherlikeMib::Dot3Hcstatstable::has_operation() const
{
    for (std::size_t index=0; index<dot3hcstatsentry_.size(); index++)
    {
        if(dot3hcstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string EtherlikeMib::Dot3Hcstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3HCStatsTable";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Hcstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Hcstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot3HCStatsEntry")
    {
        for(auto const & c : dot3hcstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry>();
        c->parent = this;
        dot3hcstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Hcstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot3hcstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void EtherlikeMib::Dot3Hcstatstable::set_value(const std::string & value_path, std::string value)
{
}

EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::Dot3Hcstatsentry()
    :
    dot3statsindex{YType::str, "dot3StatsIndex"},
    dot3hcstatsalignmenterrors{YType::uint64, "dot3HCStatsAlignmentErrors"},
    dot3hcstatsfcserrors{YType::uint64, "dot3HCStatsFCSErrors"},
    dot3hcstatsframetoolongs{YType::uint64, "dot3HCStatsFrameTooLongs"},
    dot3hcstatsinternalmacreceiveerrors{YType::uint64, "dot3HCStatsInternalMacReceiveErrors"},
    dot3hcstatsinternalmactransmiterrors{YType::uint64, "dot3HCStatsInternalMacTransmitErrors"},
    dot3hcstatssymbolerrors{YType::uint64, "dot3HCStatsSymbolErrors"}
{
    yang_name = "dot3HCStatsEntry"; yang_parent_name = "dot3HCStatsTable";
}

EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::~Dot3Hcstatsentry()
{
}

bool EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::has_data() const
{
    return dot3statsindex.is_set
	|| dot3hcstatsalignmenterrors.is_set
	|| dot3hcstatsfcserrors.is_set
	|| dot3hcstatsframetoolongs.is_set
	|| dot3hcstatsinternalmacreceiveerrors.is_set
	|| dot3hcstatsinternalmactransmiterrors.is_set
	|| dot3hcstatssymbolerrors.is_set;
}

bool EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot3statsindex.operation)
	|| is_set(dot3hcstatsalignmenterrors.operation)
	|| is_set(dot3hcstatsfcserrors.operation)
	|| is_set(dot3hcstatsframetoolongs.operation)
	|| is_set(dot3hcstatsinternalmacreceiveerrors.operation)
	|| is_set(dot3hcstatsinternalmactransmiterrors.operation)
	|| is_set(dot3hcstatssymbolerrors.operation);
}

std::string EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot3HCStatsEntry" <<"[dot3StatsIndex='" <<dot3statsindex <<"']";

    return path_buffer.str();

}

const EntityPath EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "EtherLike-MIB:EtherLike-MIB/dot3HCStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot3statsindex.is_set || is_set(dot3statsindex.operation)) leaf_name_data.push_back(dot3statsindex.get_name_leafdata());
    if (dot3hcstatsalignmenterrors.is_set || is_set(dot3hcstatsalignmenterrors.operation)) leaf_name_data.push_back(dot3hcstatsalignmenterrors.get_name_leafdata());
    if (dot3hcstatsfcserrors.is_set || is_set(dot3hcstatsfcserrors.operation)) leaf_name_data.push_back(dot3hcstatsfcserrors.get_name_leafdata());
    if (dot3hcstatsframetoolongs.is_set || is_set(dot3hcstatsframetoolongs.operation)) leaf_name_data.push_back(dot3hcstatsframetoolongs.get_name_leafdata());
    if (dot3hcstatsinternalmacreceiveerrors.is_set || is_set(dot3hcstatsinternalmacreceiveerrors.operation)) leaf_name_data.push_back(dot3hcstatsinternalmacreceiveerrors.get_name_leafdata());
    if (dot3hcstatsinternalmactransmiterrors.is_set || is_set(dot3hcstatsinternalmactransmiterrors.operation)) leaf_name_data.push_back(dot3hcstatsinternalmactransmiterrors.get_name_leafdata());
    if (dot3hcstatssymbolerrors.is_set || is_set(dot3hcstatssymbolerrors.operation)) leaf_name_data.push_back(dot3hcstatssymbolerrors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void EtherlikeMib::Dot3Hcstatstable::Dot3Hcstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot3StatsIndex")
    {
        dot3statsindex = value;
    }
    if(value_path == "dot3HCStatsAlignmentErrors")
    {
        dot3hcstatsalignmenterrors = value;
    }
    if(value_path == "dot3HCStatsFCSErrors")
    {
        dot3hcstatsfcserrors = value;
    }
    if(value_path == "dot3HCStatsFrameTooLongs")
    {
        dot3hcstatsframetoolongs = value;
    }
    if(value_path == "dot3HCStatsInternalMacReceiveErrors")
    {
        dot3hcstatsinternalmacreceiveerrors = value;
    }
    if(value_path == "dot3HCStatsInternalMacTransmitErrors")
    {
        dot3hcstatsinternalmactransmiterrors = value;
    }
    if(value_path == "dot3HCStatsSymbolErrors")
    {
        dot3hcstatssymbolerrors = value;
    }
}

const Enum::YLeaf EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsduplexstatusEnum::unknown {1, "unknown"};
const Enum::YLeaf EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsduplexstatusEnum::halfDuplex {2, "halfDuplex"};
const Enum::YLeaf EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsduplexstatusEnum::fullDuplex {3, "fullDuplex"};

const Enum::YLeaf EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsratecontrolstatusEnum::rateControlOff {1, "rateControlOff"};
const Enum::YLeaf EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsratecontrolstatusEnum::rateControlOn {2, "rateControlOn"};
const Enum::YLeaf EtherlikeMib::Dot3Statstable::Dot3Statsentry::Dot3StatsratecontrolstatusEnum::unknown {3, "unknown"};

const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseadminmodeEnum::disabled {1, "disabled"};
const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseadminmodeEnum::enabledXmit {2, "enabledXmit"};
const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseadminmodeEnum::enabledRcv {3, "enabledRcv"};
const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseadminmodeEnum::enabledXmitAndRcv {4, "enabledXmitAndRcv"};

const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseopermodeEnum::disabled {1, "disabled"};
const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseopermodeEnum::enabledXmit {2, "enabledXmit"};
const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseopermodeEnum::enabledRcv {3, "enabledRcv"};
const Enum::YLeaf EtherlikeMib::Dot3Pausetable::Dot3Pauseentry::Dot3PauseopermodeEnum::enabledXmitAndRcv {4, "enabledXmitAndRcv"};


}
}

