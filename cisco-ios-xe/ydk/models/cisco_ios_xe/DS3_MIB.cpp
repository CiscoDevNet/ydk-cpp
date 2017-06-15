
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DS3_MIB.hpp"

namespace ydk {
namespace DS3_MIB {

Ds3Mib::Ds3Mib()
    :
    dsx3configtable_(std::make_shared<Ds3Mib::Dsx3Configtable>())
	,dsx3currenttable_(std::make_shared<Ds3Mib::Dsx3Currenttable>())
	,dsx3farendconfigtable_(std::make_shared<Ds3Mib::Dsx3Farendconfigtable>())
	,dsx3farendcurrenttable_(std::make_shared<Ds3Mib::Dsx3Farendcurrenttable>())
	,dsx3farendintervaltable_(std::make_shared<Ds3Mib::Dsx3Farendintervaltable>())
	,dsx3farendtotaltable_(std::make_shared<Ds3Mib::Dsx3Farendtotaltable>())
	,dsx3fractable_(std::make_shared<Ds3Mib::Dsx3Fractable>())
	,dsx3intervaltable_(std::make_shared<Ds3Mib::Dsx3Intervaltable>())
	,dsx3totaltable_(std::make_shared<Ds3Mib::Dsx3Totaltable>())
{
    dsx3configtable_->parent = this;

    dsx3currenttable_->parent = this;

    dsx3farendconfigtable_->parent = this;

    dsx3farendcurrenttable_->parent = this;

    dsx3farendintervaltable_->parent = this;

    dsx3farendtotaltable_->parent = this;

    dsx3fractable_->parent = this;

    dsx3intervaltable_->parent = this;

    dsx3totaltable_->parent = this;

    yang_name = "DS3-MIB"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::~Ds3Mib()
{
}

bool Ds3Mib::has_data() const
{
    return (dsx3configtable_ !=  nullptr && dsx3configtable_->has_data())
	|| (dsx3currenttable_ !=  nullptr && dsx3currenttable_->has_data())
	|| (dsx3farendconfigtable_ !=  nullptr && dsx3farendconfigtable_->has_data())
	|| (dsx3farendcurrenttable_ !=  nullptr && dsx3farendcurrenttable_->has_data())
	|| (dsx3farendintervaltable_ !=  nullptr && dsx3farendintervaltable_->has_data())
	|| (dsx3farendtotaltable_ !=  nullptr && dsx3farendtotaltable_->has_data())
	|| (dsx3fractable_ !=  nullptr && dsx3fractable_->has_data())
	|| (dsx3intervaltable_ !=  nullptr && dsx3intervaltable_->has_data())
	|| (dsx3totaltable_ !=  nullptr && dsx3totaltable_->has_data());
}

bool Ds3Mib::has_operation() const
{
    return is_set(operation)
	|| (dsx3configtable_ !=  nullptr && dsx3configtable_->has_operation())
	|| (dsx3currenttable_ !=  nullptr && dsx3currenttable_->has_operation())
	|| (dsx3farendconfigtable_ !=  nullptr && dsx3farendconfigtable_->has_operation())
	|| (dsx3farendcurrenttable_ !=  nullptr && dsx3farendcurrenttable_->has_operation())
	|| (dsx3farendintervaltable_ !=  nullptr && dsx3farendintervaltable_->has_operation())
	|| (dsx3farendtotaltable_ !=  nullptr && dsx3farendtotaltable_->has_operation())
	|| (dsx3fractable_ !=  nullptr && dsx3fractable_->has_operation())
	|| (dsx3intervaltable_ !=  nullptr && dsx3intervaltable_->has_operation())
	|| (dsx3totaltable_ !=  nullptr && dsx3totaltable_->has_operation());
}

std::string Ds3Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DS3-MIB:DS3-MIB";

    return path_buffer.str();

}

const EntityPath Ds3Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ds3Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3ConfigTable")
    {
        if(dsx3configtable_ == nullptr)
        {
            dsx3configtable_ = std::make_shared<Ds3Mib::Dsx3Configtable>();
        }
        return dsx3configtable_;
    }

    if(child_yang_name == "dsx3CurrentTable")
    {
        if(dsx3currenttable_ == nullptr)
        {
            dsx3currenttable_ = std::make_shared<Ds3Mib::Dsx3Currenttable>();
        }
        return dsx3currenttable_;
    }

    if(child_yang_name == "dsx3FarEndConfigTable")
    {
        if(dsx3farendconfigtable_ == nullptr)
        {
            dsx3farendconfigtable_ = std::make_shared<Ds3Mib::Dsx3Farendconfigtable>();
        }
        return dsx3farendconfigtable_;
    }

    if(child_yang_name == "dsx3FarEndCurrentTable")
    {
        if(dsx3farendcurrenttable_ == nullptr)
        {
            dsx3farendcurrenttable_ = std::make_shared<Ds3Mib::Dsx3Farendcurrenttable>();
        }
        return dsx3farendcurrenttable_;
    }

    if(child_yang_name == "dsx3FarEndIntervalTable")
    {
        if(dsx3farendintervaltable_ == nullptr)
        {
            dsx3farendintervaltable_ = std::make_shared<Ds3Mib::Dsx3Farendintervaltable>();
        }
        return dsx3farendintervaltable_;
    }

    if(child_yang_name == "dsx3FarEndTotalTable")
    {
        if(dsx3farendtotaltable_ == nullptr)
        {
            dsx3farendtotaltable_ = std::make_shared<Ds3Mib::Dsx3Farendtotaltable>();
        }
        return dsx3farendtotaltable_;
    }

    if(child_yang_name == "dsx3FracTable")
    {
        if(dsx3fractable_ == nullptr)
        {
            dsx3fractable_ = std::make_shared<Ds3Mib::Dsx3Fractable>();
        }
        return dsx3fractable_;
    }

    if(child_yang_name == "dsx3IntervalTable")
    {
        if(dsx3intervaltable_ == nullptr)
        {
            dsx3intervaltable_ = std::make_shared<Ds3Mib::Dsx3Intervaltable>();
        }
        return dsx3intervaltable_;
    }

    if(child_yang_name == "dsx3TotalTable")
    {
        if(dsx3totaltable_ == nullptr)
        {
            dsx3totaltable_ = std::make_shared<Ds3Mib::Dsx3Totaltable>();
        }
        return dsx3totaltable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dsx3configtable_ != nullptr)
    {
        children["dsx3ConfigTable"] = dsx3configtable_;
    }

    if(dsx3currenttable_ != nullptr)
    {
        children["dsx3CurrentTable"] = dsx3currenttable_;
    }

    if(dsx3farendconfigtable_ != nullptr)
    {
        children["dsx3FarEndConfigTable"] = dsx3farendconfigtable_;
    }

    if(dsx3farendcurrenttable_ != nullptr)
    {
        children["dsx3FarEndCurrentTable"] = dsx3farendcurrenttable_;
    }

    if(dsx3farendintervaltable_ != nullptr)
    {
        children["dsx3FarEndIntervalTable"] = dsx3farendintervaltable_;
    }

    if(dsx3farendtotaltable_ != nullptr)
    {
        children["dsx3FarEndTotalTable"] = dsx3farendtotaltable_;
    }

    if(dsx3fractable_ != nullptr)
    {
        children["dsx3FracTable"] = dsx3fractable_;
    }

    if(dsx3intervaltable_ != nullptr)
    {
        children["dsx3IntervalTable"] = dsx3intervaltable_;
    }

    if(dsx3totaltable_ != nullptr)
    {
        children["dsx3TotalTable"] = dsx3totaltable_;
    }

    return children;
}

void Ds3Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ds3Mib::clone_ptr() const
{
    return std::make_shared<Ds3Mib>();
}

std::string Ds3Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Ds3Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Ds3Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Ds3Mib::Dsx3Configtable::Dsx3Configtable()
{
    yang_name = "dsx3ConfigTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Configtable::~Dsx3Configtable()
{
}

bool Ds3Mib::Dsx3Configtable::has_data() const
{
    for (std::size_t index=0; index<dsx3configentry_.size(); index++)
    {
        if(dsx3configentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Configtable::has_operation() const
{
    for (std::size_t index=0; index<dsx3configentry_.size(); index++)
    {
        if(dsx3configentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Configtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3ConfigTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Configtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Configtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3ConfigEntry")
    {
        for(auto const & c : dsx3configentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Configtable::Dsx3Configentry>();
        c->parent = this;
        dsx3configentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Configtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3configentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Configtable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3Configentry()
    :
    dsx3lineindex{YType::int32, "dsx3LineIndex"},
    dsx3channelization{YType::enumeration, "dsx3Channelization"},
    dsx3circuitidentifier{YType::str, "dsx3CircuitIdentifier"},
    dsx3ds1forremoteloop{YType::int32, "dsx3Ds1ForRemoteLoop"},
    dsx3ifindex{YType::int32, "dsx3IfIndex"},
    dsx3invalidintervals{YType::int32, "dsx3InvalidIntervals"},
    dsx3linecoding{YType::enumeration, "dsx3LineCoding"},
    dsx3linelength{YType::int32, "dsx3LineLength"},
    dsx3linestatus{YType::int32, "dsx3LineStatus"},
    dsx3linestatuschangetrapenable{YType::enumeration, "dsx3LineStatusChangeTrapEnable"},
    dsx3linestatuslastchange{YType::uint32, "dsx3LineStatusLastChange"},
    dsx3linetype{YType::enumeration, "dsx3LineType"},
    dsx3loopbackconfig{YType::enumeration, "dsx3LoopbackConfig"},
    dsx3loopbackstatus{YType::int32, "dsx3LoopbackStatus"},
    dsx3sendcode{YType::enumeration, "dsx3SendCode"},
    dsx3timeelapsed{YType::int32, "dsx3TimeElapsed"},
    dsx3transmitclocksource{YType::enumeration, "dsx3TransmitClockSource"},
    dsx3validintervals{YType::int32, "dsx3ValidIntervals"}
{
    yang_name = "dsx3ConfigEntry"; yang_parent_name = "dsx3ConfigTable";
}

Ds3Mib::Dsx3Configtable::Dsx3Configentry::~Dsx3Configentry()
{
}

bool Ds3Mib::Dsx3Configtable::Dsx3Configentry::has_data() const
{
    return dsx3lineindex.is_set
	|| dsx3channelization.is_set
	|| dsx3circuitidentifier.is_set
	|| dsx3ds1forremoteloop.is_set
	|| dsx3ifindex.is_set
	|| dsx3invalidintervals.is_set
	|| dsx3linecoding.is_set
	|| dsx3linelength.is_set
	|| dsx3linestatus.is_set
	|| dsx3linestatuschangetrapenable.is_set
	|| dsx3linestatuslastchange.is_set
	|| dsx3linetype.is_set
	|| dsx3loopbackconfig.is_set
	|| dsx3loopbackstatus.is_set
	|| dsx3sendcode.is_set
	|| dsx3timeelapsed.is_set
	|| dsx3transmitclocksource.is_set
	|| dsx3validintervals.is_set;
}

bool Ds3Mib::Dsx3Configtable::Dsx3Configentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3lineindex.operation)
	|| is_set(dsx3channelization.operation)
	|| is_set(dsx3circuitidentifier.operation)
	|| is_set(dsx3ds1forremoteloop.operation)
	|| is_set(dsx3ifindex.operation)
	|| is_set(dsx3invalidintervals.operation)
	|| is_set(dsx3linecoding.operation)
	|| is_set(dsx3linelength.operation)
	|| is_set(dsx3linestatus.operation)
	|| is_set(dsx3linestatuschangetrapenable.operation)
	|| is_set(dsx3linestatuslastchange.operation)
	|| is_set(dsx3linetype.operation)
	|| is_set(dsx3loopbackconfig.operation)
	|| is_set(dsx3loopbackstatus.operation)
	|| is_set(dsx3sendcode.operation)
	|| is_set(dsx3timeelapsed.operation)
	|| is_set(dsx3transmitclocksource.operation)
	|| is_set(dsx3validintervals.operation);
}

std::string Ds3Mib::Dsx3Configtable::Dsx3Configentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3ConfigEntry" <<"[dsx3LineIndex='" <<dsx3lineindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Configtable::Dsx3Configentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3ConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3lineindex.is_set || is_set(dsx3lineindex.operation)) leaf_name_data.push_back(dsx3lineindex.get_name_leafdata());
    if (dsx3channelization.is_set || is_set(dsx3channelization.operation)) leaf_name_data.push_back(dsx3channelization.get_name_leafdata());
    if (dsx3circuitidentifier.is_set || is_set(dsx3circuitidentifier.operation)) leaf_name_data.push_back(dsx3circuitidentifier.get_name_leafdata());
    if (dsx3ds1forremoteloop.is_set || is_set(dsx3ds1forremoteloop.operation)) leaf_name_data.push_back(dsx3ds1forremoteloop.get_name_leafdata());
    if (dsx3ifindex.is_set || is_set(dsx3ifindex.operation)) leaf_name_data.push_back(dsx3ifindex.get_name_leafdata());
    if (dsx3invalidintervals.is_set || is_set(dsx3invalidintervals.operation)) leaf_name_data.push_back(dsx3invalidintervals.get_name_leafdata());
    if (dsx3linecoding.is_set || is_set(dsx3linecoding.operation)) leaf_name_data.push_back(dsx3linecoding.get_name_leafdata());
    if (dsx3linelength.is_set || is_set(dsx3linelength.operation)) leaf_name_data.push_back(dsx3linelength.get_name_leafdata());
    if (dsx3linestatus.is_set || is_set(dsx3linestatus.operation)) leaf_name_data.push_back(dsx3linestatus.get_name_leafdata());
    if (dsx3linestatuschangetrapenable.is_set || is_set(dsx3linestatuschangetrapenable.operation)) leaf_name_data.push_back(dsx3linestatuschangetrapenable.get_name_leafdata());
    if (dsx3linestatuslastchange.is_set || is_set(dsx3linestatuslastchange.operation)) leaf_name_data.push_back(dsx3linestatuslastchange.get_name_leafdata());
    if (dsx3linetype.is_set || is_set(dsx3linetype.operation)) leaf_name_data.push_back(dsx3linetype.get_name_leafdata());
    if (dsx3loopbackconfig.is_set || is_set(dsx3loopbackconfig.operation)) leaf_name_data.push_back(dsx3loopbackconfig.get_name_leafdata());
    if (dsx3loopbackstatus.is_set || is_set(dsx3loopbackstatus.operation)) leaf_name_data.push_back(dsx3loopbackstatus.get_name_leafdata());
    if (dsx3sendcode.is_set || is_set(dsx3sendcode.operation)) leaf_name_data.push_back(dsx3sendcode.get_name_leafdata());
    if (dsx3timeelapsed.is_set || is_set(dsx3timeelapsed.operation)) leaf_name_data.push_back(dsx3timeelapsed.get_name_leafdata());
    if (dsx3transmitclocksource.is_set || is_set(dsx3transmitclocksource.operation)) leaf_name_data.push_back(dsx3transmitclocksource.get_name_leafdata());
    if (dsx3validintervals.is_set || is_set(dsx3validintervals.operation)) leaf_name_data.push_back(dsx3validintervals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Configtable::Dsx3Configentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Configtable::Dsx3Configentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Configtable::Dsx3Configentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3LineIndex")
    {
        dsx3lineindex = value;
    }
    if(value_path == "dsx3Channelization")
    {
        dsx3channelization = value;
    }
    if(value_path == "dsx3CircuitIdentifier")
    {
        dsx3circuitidentifier = value;
    }
    if(value_path == "dsx3Ds1ForRemoteLoop")
    {
        dsx3ds1forremoteloop = value;
    }
    if(value_path == "dsx3IfIndex")
    {
        dsx3ifindex = value;
    }
    if(value_path == "dsx3InvalidIntervals")
    {
        dsx3invalidintervals = value;
    }
    if(value_path == "dsx3LineCoding")
    {
        dsx3linecoding = value;
    }
    if(value_path == "dsx3LineLength")
    {
        dsx3linelength = value;
    }
    if(value_path == "dsx3LineStatus")
    {
        dsx3linestatus = value;
    }
    if(value_path == "dsx3LineStatusChangeTrapEnable")
    {
        dsx3linestatuschangetrapenable = value;
    }
    if(value_path == "dsx3LineStatusLastChange")
    {
        dsx3linestatuslastchange = value;
    }
    if(value_path == "dsx3LineType")
    {
        dsx3linetype = value;
    }
    if(value_path == "dsx3LoopbackConfig")
    {
        dsx3loopbackconfig = value;
    }
    if(value_path == "dsx3LoopbackStatus")
    {
        dsx3loopbackstatus = value;
    }
    if(value_path == "dsx3SendCode")
    {
        dsx3sendcode = value;
    }
    if(value_path == "dsx3TimeElapsed")
    {
        dsx3timeelapsed = value;
    }
    if(value_path == "dsx3TransmitClockSource")
    {
        dsx3transmitclocksource = value;
    }
    if(value_path == "dsx3ValidIntervals")
    {
        dsx3validintervals = value;
    }
}

Ds3Mib::Dsx3Currenttable::Dsx3Currenttable()
{
    yang_name = "dsx3CurrentTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Currenttable::~Dsx3Currenttable()
{
}

bool Ds3Mib::Dsx3Currenttable::has_data() const
{
    for (std::size_t index=0; index<dsx3currententry_.size(); index++)
    {
        if(dsx3currententry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Currenttable::has_operation() const
{
    for (std::size_t index=0; index<dsx3currententry_.size(); index++)
    {
        if(dsx3currententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Currenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3CurrentTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Currenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Currenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3CurrentEntry")
    {
        for(auto const & c : dsx3currententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Currenttable::Dsx3Currententry>();
        c->parent = this;
        dsx3currententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Currenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3currententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Currenttable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Currenttable::Dsx3Currententry::Dsx3Currententry()
    :
    dsx3currentindex{YType::int32, "dsx3CurrentIndex"},
    dsx3currentccvs{YType::uint32, "dsx3CurrentCCVs"},
    dsx3currentcess{YType::uint32, "dsx3CurrentCESs"},
    dsx3currentcsess{YType::uint32, "dsx3CurrentCSESs"},
    dsx3currentlcvs{YType::uint32, "dsx3CurrentLCVs"},
    dsx3currentless{YType::uint32, "dsx3CurrentLESs"},
    dsx3currentpcvs{YType::uint32, "dsx3CurrentPCVs"},
    dsx3currentpess{YType::uint32, "dsx3CurrentPESs"},
    dsx3currentpsess{YType::uint32, "dsx3CurrentPSESs"},
    dsx3currentsefss{YType::uint32, "dsx3CurrentSEFSs"},
    dsx3currentuass{YType::uint32, "dsx3CurrentUASs"}
{
    yang_name = "dsx3CurrentEntry"; yang_parent_name = "dsx3CurrentTable";
}

Ds3Mib::Dsx3Currenttable::Dsx3Currententry::~Dsx3Currententry()
{
}

bool Ds3Mib::Dsx3Currenttable::Dsx3Currententry::has_data() const
{
    return dsx3currentindex.is_set
	|| dsx3currentccvs.is_set
	|| dsx3currentcess.is_set
	|| dsx3currentcsess.is_set
	|| dsx3currentlcvs.is_set
	|| dsx3currentless.is_set
	|| dsx3currentpcvs.is_set
	|| dsx3currentpess.is_set
	|| dsx3currentpsess.is_set
	|| dsx3currentsefss.is_set
	|| dsx3currentuass.is_set;
}

bool Ds3Mib::Dsx3Currenttable::Dsx3Currententry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3currentindex.operation)
	|| is_set(dsx3currentccvs.operation)
	|| is_set(dsx3currentcess.operation)
	|| is_set(dsx3currentcsess.operation)
	|| is_set(dsx3currentlcvs.operation)
	|| is_set(dsx3currentless.operation)
	|| is_set(dsx3currentpcvs.operation)
	|| is_set(dsx3currentpess.operation)
	|| is_set(dsx3currentpsess.operation)
	|| is_set(dsx3currentsefss.operation)
	|| is_set(dsx3currentuass.operation);
}

std::string Ds3Mib::Dsx3Currenttable::Dsx3Currententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3CurrentEntry" <<"[dsx3CurrentIndex='" <<dsx3currentindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Currenttable::Dsx3Currententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3CurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3currentindex.is_set || is_set(dsx3currentindex.operation)) leaf_name_data.push_back(dsx3currentindex.get_name_leafdata());
    if (dsx3currentccvs.is_set || is_set(dsx3currentccvs.operation)) leaf_name_data.push_back(dsx3currentccvs.get_name_leafdata());
    if (dsx3currentcess.is_set || is_set(dsx3currentcess.operation)) leaf_name_data.push_back(dsx3currentcess.get_name_leafdata());
    if (dsx3currentcsess.is_set || is_set(dsx3currentcsess.operation)) leaf_name_data.push_back(dsx3currentcsess.get_name_leafdata());
    if (dsx3currentlcvs.is_set || is_set(dsx3currentlcvs.operation)) leaf_name_data.push_back(dsx3currentlcvs.get_name_leafdata());
    if (dsx3currentless.is_set || is_set(dsx3currentless.operation)) leaf_name_data.push_back(dsx3currentless.get_name_leafdata());
    if (dsx3currentpcvs.is_set || is_set(dsx3currentpcvs.operation)) leaf_name_data.push_back(dsx3currentpcvs.get_name_leafdata());
    if (dsx3currentpess.is_set || is_set(dsx3currentpess.operation)) leaf_name_data.push_back(dsx3currentpess.get_name_leafdata());
    if (dsx3currentpsess.is_set || is_set(dsx3currentpsess.operation)) leaf_name_data.push_back(dsx3currentpsess.get_name_leafdata());
    if (dsx3currentsefss.is_set || is_set(dsx3currentsefss.operation)) leaf_name_data.push_back(dsx3currentsefss.get_name_leafdata());
    if (dsx3currentuass.is_set || is_set(dsx3currentuass.operation)) leaf_name_data.push_back(dsx3currentuass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Currenttable::Dsx3Currententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Currenttable::Dsx3Currententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Currenttable::Dsx3Currententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3CurrentIndex")
    {
        dsx3currentindex = value;
    }
    if(value_path == "dsx3CurrentCCVs")
    {
        dsx3currentccvs = value;
    }
    if(value_path == "dsx3CurrentCESs")
    {
        dsx3currentcess = value;
    }
    if(value_path == "dsx3CurrentCSESs")
    {
        dsx3currentcsess = value;
    }
    if(value_path == "dsx3CurrentLCVs")
    {
        dsx3currentlcvs = value;
    }
    if(value_path == "dsx3CurrentLESs")
    {
        dsx3currentless = value;
    }
    if(value_path == "dsx3CurrentPCVs")
    {
        dsx3currentpcvs = value;
    }
    if(value_path == "dsx3CurrentPESs")
    {
        dsx3currentpess = value;
    }
    if(value_path == "dsx3CurrentPSESs")
    {
        dsx3currentpsess = value;
    }
    if(value_path == "dsx3CurrentSEFSs")
    {
        dsx3currentsefss = value;
    }
    if(value_path == "dsx3CurrentUASs")
    {
        dsx3currentuass = value;
    }
}

Ds3Mib::Dsx3Intervaltable::Dsx3Intervaltable()
{
    yang_name = "dsx3IntervalTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Intervaltable::~Dsx3Intervaltable()
{
}

bool Ds3Mib::Dsx3Intervaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3intervalentry_.size(); index++)
    {
        if(dsx3intervalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Intervaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3intervalentry_.size(); index++)
    {
        if(dsx3intervalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Intervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3IntervalTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Intervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Intervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3IntervalEntry")
    {
        for(auto const & c : dsx3intervalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry>();
        c->parent = this;
        dsx3intervalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Intervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3intervalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Intervaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::Dsx3Intervalentry()
    :
    dsx3intervalindex{YType::int32, "dsx3IntervalIndex"},
    dsx3intervalnumber{YType::int32, "dsx3IntervalNumber"},
    dsx3intervalccvs{YType::uint32, "dsx3IntervalCCVs"},
    dsx3intervalcess{YType::uint32, "dsx3IntervalCESs"},
    dsx3intervalcsess{YType::uint32, "dsx3IntervalCSESs"},
    dsx3intervallcvs{YType::uint32, "dsx3IntervalLCVs"},
    dsx3intervalless{YType::uint32, "dsx3IntervalLESs"},
    dsx3intervalpcvs{YType::uint32, "dsx3IntervalPCVs"},
    dsx3intervalpess{YType::uint32, "dsx3IntervalPESs"},
    dsx3intervalpsess{YType::uint32, "dsx3IntervalPSESs"},
    dsx3intervalsefss{YType::uint32, "dsx3IntervalSEFSs"},
    dsx3intervaluass{YType::uint32, "dsx3IntervalUASs"},
    dsx3intervalvaliddata{YType::boolean, "dsx3IntervalValidData"}
{
    yang_name = "dsx3IntervalEntry"; yang_parent_name = "dsx3IntervalTable";
}

Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::~Dsx3Intervalentry()
{
}

bool Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::has_data() const
{
    return dsx3intervalindex.is_set
	|| dsx3intervalnumber.is_set
	|| dsx3intervalccvs.is_set
	|| dsx3intervalcess.is_set
	|| dsx3intervalcsess.is_set
	|| dsx3intervallcvs.is_set
	|| dsx3intervalless.is_set
	|| dsx3intervalpcvs.is_set
	|| dsx3intervalpess.is_set
	|| dsx3intervalpsess.is_set
	|| dsx3intervalsefss.is_set
	|| dsx3intervaluass.is_set
	|| dsx3intervalvaliddata.is_set;
}

bool Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3intervalindex.operation)
	|| is_set(dsx3intervalnumber.operation)
	|| is_set(dsx3intervalccvs.operation)
	|| is_set(dsx3intervalcess.operation)
	|| is_set(dsx3intervalcsess.operation)
	|| is_set(dsx3intervallcvs.operation)
	|| is_set(dsx3intervalless.operation)
	|| is_set(dsx3intervalpcvs.operation)
	|| is_set(dsx3intervalpess.operation)
	|| is_set(dsx3intervalpsess.operation)
	|| is_set(dsx3intervalsefss.operation)
	|| is_set(dsx3intervaluass.operation)
	|| is_set(dsx3intervalvaliddata.operation);
}

std::string Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3IntervalEntry" <<"[dsx3IntervalIndex='" <<dsx3intervalindex <<"']" <<"[dsx3IntervalNumber='" <<dsx3intervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3IntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3intervalindex.is_set || is_set(dsx3intervalindex.operation)) leaf_name_data.push_back(dsx3intervalindex.get_name_leafdata());
    if (dsx3intervalnumber.is_set || is_set(dsx3intervalnumber.operation)) leaf_name_data.push_back(dsx3intervalnumber.get_name_leafdata());
    if (dsx3intervalccvs.is_set || is_set(dsx3intervalccvs.operation)) leaf_name_data.push_back(dsx3intervalccvs.get_name_leafdata());
    if (dsx3intervalcess.is_set || is_set(dsx3intervalcess.operation)) leaf_name_data.push_back(dsx3intervalcess.get_name_leafdata());
    if (dsx3intervalcsess.is_set || is_set(dsx3intervalcsess.operation)) leaf_name_data.push_back(dsx3intervalcsess.get_name_leafdata());
    if (dsx3intervallcvs.is_set || is_set(dsx3intervallcvs.operation)) leaf_name_data.push_back(dsx3intervallcvs.get_name_leafdata());
    if (dsx3intervalless.is_set || is_set(dsx3intervalless.operation)) leaf_name_data.push_back(dsx3intervalless.get_name_leafdata());
    if (dsx3intervalpcvs.is_set || is_set(dsx3intervalpcvs.operation)) leaf_name_data.push_back(dsx3intervalpcvs.get_name_leafdata());
    if (dsx3intervalpess.is_set || is_set(dsx3intervalpess.operation)) leaf_name_data.push_back(dsx3intervalpess.get_name_leafdata());
    if (dsx3intervalpsess.is_set || is_set(dsx3intervalpsess.operation)) leaf_name_data.push_back(dsx3intervalpsess.get_name_leafdata());
    if (dsx3intervalsefss.is_set || is_set(dsx3intervalsefss.operation)) leaf_name_data.push_back(dsx3intervalsefss.get_name_leafdata());
    if (dsx3intervaluass.is_set || is_set(dsx3intervaluass.operation)) leaf_name_data.push_back(dsx3intervaluass.get_name_leafdata());
    if (dsx3intervalvaliddata.is_set || is_set(dsx3intervalvaliddata.operation)) leaf_name_data.push_back(dsx3intervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Intervaltable::Dsx3Intervalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3IntervalIndex")
    {
        dsx3intervalindex = value;
    }
    if(value_path == "dsx3IntervalNumber")
    {
        dsx3intervalnumber = value;
    }
    if(value_path == "dsx3IntervalCCVs")
    {
        dsx3intervalccvs = value;
    }
    if(value_path == "dsx3IntervalCESs")
    {
        dsx3intervalcess = value;
    }
    if(value_path == "dsx3IntervalCSESs")
    {
        dsx3intervalcsess = value;
    }
    if(value_path == "dsx3IntervalLCVs")
    {
        dsx3intervallcvs = value;
    }
    if(value_path == "dsx3IntervalLESs")
    {
        dsx3intervalless = value;
    }
    if(value_path == "dsx3IntervalPCVs")
    {
        dsx3intervalpcvs = value;
    }
    if(value_path == "dsx3IntervalPESs")
    {
        dsx3intervalpess = value;
    }
    if(value_path == "dsx3IntervalPSESs")
    {
        dsx3intervalpsess = value;
    }
    if(value_path == "dsx3IntervalSEFSs")
    {
        dsx3intervalsefss = value;
    }
    if(value_path == "dsx3IntervalUASs")
    {
        dsx3intervaluass = value;
    }
    if(value_path == "dsx3IntervalValidData")
    {
        dsx3intervalvaliddata = value;
    }
}

Ds3Mib::Dsx3Totaltable::Dsx3Totaltable()
{
    yang_name = "dsx3TotalTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Totaltable::~Dsx3Totaltable()
{
}

bool Ds3Mib::Dsx3Totaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3totalentry_.size(); index++)
    {
        if(dsx3totalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Totaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3totalentry_.size(); index++)
    {
        if(dsx3totalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Totaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3TotalTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Totaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Totaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3TotalEntry")
    {
        for(auto const & c : dsx3totalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Totaltable::Dsx3Totalentry>();
        c->parent = this;
        dsx3totalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Totaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3totalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Totaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::Dsx3Totalentry()
    :
    dsx3totalindex{YType::int32, "dsx3TotalIndex"},
    dsx3totalccvs{YType::uint32, "dsx3TotalCCVs"},
    dsx3totalcess{YType::uint32, "dsx3TotalCESs"},
    dsx3totalcsess{YType::uint32, "dsx3TotalCSESs"},
    dsx3totallcvs{YType::uint32, "dsx3TotalLCVs"},
    dsx3totalless{YType::uint32, "dsx3TotalLESs"},
    dsx3totalpcvs{YType::uint32, "dsx3TotalPCVs"},
    dsx3totalpess{YType::uint32, "dsx3TotalPESs"},
    dsx3totalpsess{YType::uint32, "dsx3TotalPSESs"},
    dsx3totalsefss{YType::uint32, "dsx3TotalSEFSs"},
    dsx3totaluass{YType::uint32, "dsx3TotalUASs"}
{
    yang_name = "dsx3TotalEntry"; yang_parent_name = "dsx3TotalTable";
}

Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::~Dsx3Totalentry()
{
}

bool Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::has_data() const
{
    return dsx3totalindex.is_set
	|| dsx3totalccvs.is_set
	|| dsx3totalcess.is_set
	|| dsx3totalcsess.is_set
	|| dsx3totallcvs.is_set
	|| dsx3totalless.is_set
	|| dsx3totalpcvs.is_set
	|| dsx3totalpess.is_set
	|| dsx3totalpsess.is_set
	|| dsx3totalsefss.is_set
	|| dsx3totaluass.is_set;
}

bool Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3totalindex.operation)
	|| is_set(dsx3totalccvs.operation)
	|| is_set(dsx3totalcess.operation)
	|| is_set(dsx3totalcsess.operation)
	|| is_set(dsx3totallcvs.operation)
	|| is_set(dsx3totalless.operation)
	|| is_set(dsx3totalpcvs.operation)
	|| is_set(dsx3totalpess.operation)
	|| is_set(dsx3totalpsess.operation)
	|| is_set(dsx3totalsefss.operation)
	|| is_set(dsx3totaluass.operation);
}

std::string Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3TotalEntry" <<"[dsx3TotalIndex='" <<dsx3totalindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3TotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3totalindex.is_set || is_set(dsx3totalindex.operation)) leaf_name_data.push_back(dsx3totalindex.get_name_leafdata());
    if (dsx3totalccvs.is_set || is_set(dsx3totalccvs.operation)) leaf_name_data.push_back(dsx3totalccvs.get_name_leafdata());
    if (dsx3totalcess.is_set || is_set(dsx3totalcess.operation)) leaf_name_data.push_back(dsx3totalcess.get_name_leafdata());
    if (dsx3totalcsess.is_set || is_set(dsx3totalcsess.operation)) leaf_name_data.push_back(dsx3totalcsess.get_name_leafdata());
    if (dsx3totallcvs.is_set || is_set(dsx3totallcvs.operation)) leaf_name_data.push_back(dsx3totallcvs.get_name_leafdata());
    if (dsx3totalless.is_set || is_set(dsx3totalless.operation)) leaf_name_data.push_back(dsx3totalless.get_name_leafdata());
    if (dsx3totalpcvs.is_set || is_set(dsx3totalpcvs.operation)) leaf_name_data.push_back(dsx3totalpcvs.get_name_leafdata());
    if (dsx3totalpess.is_set || is_set(dsx3totalpess.operation)) leaf_name_data.push_back(dsx3totalpess.get_name_leafdata());
    if (dsx3totalpsess.is_set || is_set(dsx3totalpsess.operation)) leaf_name_data.push_back(dsx3totalpsess.get_name_leafdata());
    if (dsx3totalsefss.is_set || is_set(dsx3totalsefss.operation)) leaf_name_data.push_back(dsx3totalsefss.get_name_leafdata());
    if (dsx3totaluass.is_set || is_set(dsx3totaluass.operation)) leaf_name_data.push_back(dsx3totaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Totaltable::Dsx3Totalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3TotalIndex")
    {
        dsx3totalindex = value;
    }
    if(value_path == "dsx3TotalCCVs")
    {
        dsx3totalccvs = value;
    }
    if(value_path == "dsx3TotalCESs")
    {
        dsx3totalcess = value;
    }
    if(value_path == "dsx3TotalCSESs")
    {
        dsx3totalcsess = value;
    }
    if(value_path == "dsx3TotalLCVs")
    {
        dsx3totallcvs = value;
    }
    if(value_path == "dsx3TotalLESs")
    {
        dsx3totalless = value;
    }
    if(value_path == "dsx3TotalPCVs")
    {
        dsx3totalpcvs = value;
    }
    if(value_path == "dsx3TotalPESs")
    {
        dsx3totalpess = value;
    }
    if(value_path == "dsx3TotalPSESs")
    {
        dsx3totalpsess = value;
    }
    if(value_path == "dsx3TotalSEFSs")
    {
        dsx3totalsefss = value;
    }
    if(value_path == "dsx3TotalUASs")
    {
        dsx3totaluass = value;
    }
}

Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigtable()
{
    yang_name = "dsx3FarEndConfigTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Farendconfigtable::~Dsx3Farendconfigtable()
{
}

bool Ds3Mib::Dsx3Farendconfigtable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendconfigentry_.size(); index++)
    {
        if(dsx3farendconfigentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Farendconfigtable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendconfigentry_.size(); index++)
    {
        if(dsx3farendconfigentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Farendconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndConfigTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndConfigEntry")
    {
        for(auto const & c : dsx3farendconfigentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry>();
        c->parent = this;
        dsx3farendconfigentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendconfigentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Farendconfigtable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::Dsx3Farendconfigentry()
    :
    dsx3farendlineindex{YType::int32, "dsx3FarEndLineIndex"},
    dsx3farendequipcode{YType::str, "dsx3FarEndEquipCode"},
    dsx3farendfacilityidcode{YType::str, "dsx3FarEndFacilityIDCode"},
    dsx3farendframeidcode{YType::str, "dsx3FarEndFrameIDCode"},
    dsx3farendlocationidcode{YType::str, "dsx3FarEndLocationIDCode"},
    dsx3farendunitcode{YType::str, "dsx3FarEndUnitCode"}
{
    yang_name = "dsx3FarEndConfigEntry"; yang_parent_name = "dsx3FarEndConfigTable";
}

Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::~Dsx3Farendconfigentry()
{
}

bool Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::has_data() const
{
    return dsx3farendlineindex.is_set
	|| dsx3farendequipcode.is_set
	|| dsx3farendfacilityidcode.is_set
	|| dsx3farendframeidcode.is_set
	|| dsx3farendlocationidcode.is_set
	|| dsx3farendunitcode.is_set;
}

bool Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3farendlineindex.operation)
	|| is_set(dsx3farendequipcode.operation)
	|| is_set(dsx3farendfacilityidcode.operation)
	|| is_set(dsx3farendframeidcode.operation)
	|| is_set(dsx3farendlocationidcode.operation)
	|| is_set(dsx3farendunitcode.operation);
}

std::string Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndConfigEntry" <<"[dsx3FarEndLineIndex='" <<dsx3farendlineindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendlineindex.is_set || is_set(dsx3farendlineindex.operation)) leaf_name_data.push_back(dsx3farendlineindex.get_name_leafdata());
    if (dsx3farendequipcode.is_set || is_set(dsx3farendequipcode.operation)) leaf_name_data.push_back(dsx3farendequipcode.get_name_leafdata());
    if (dsx3farendfacilityidcode.is_set || is_set(dsx3farendfacilityidcode.operation)) leaf_name_data.push_back(dsx3farendfacilityidcode.get_name_leafdata());
    if (dsx3farendframeidcode.is_set || is_set(dsx3farendframeidcode.operation)) leaf_name_data.push_back(dsx3farendframeidcode.get_name_leafdata());
    if (dsx3farendlocationidcode.is_set || is_set(dsx3farendlocationidcode.operation)) leaf_name_data.push_back(dsx3farendlocationidcode.get_name_leafdata());
    if (dsx3farendunitcode.is_set || is_set(dsx3farendunitcode.operation)) leaf_name_data.push_back(dsx3farendunitcode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Farendconfigtable::Dsx3Farendconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3FarEndLineIndex")
    {
        dsx3farendlineindex = value;
    }
    if(value_path == "dsx3FarEndEquipCode")
    {
        dsx3farendequipcode = value;
    }
    if(value_path == "dsx3FarEndFacilityIDCode")
    {
        dsx3farendfacilityidcode = value;
    }
    if(value_path == "dsx3FarEndFrameIDCode")
    {
        dsx3farendframeidcode = value;
    }
    if(value_path == "dsx3FarEndLocationIDCode")
    {
        dsx3farendlocationidcode = value;
    }
    if(value_path == "dsx3FarEndUnitCode")
    {
        dsx3farendunitcode = value;
    }
}

Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrenttable()
{
    yang_name = "dsx3FarEndCurrentTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Farendcurrenttable::~Dsx3Farendcurrenttable()
{
}

bool Ds3Mib::Dsx3Farendcurrenttable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendcurrententry_.size(); index++)
    {
        if(dsx3farendcurrententry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Farendcurrenttable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendcurrententry_.size(); index++)
    {
        if(dsx3farendcurrententry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Farendcurrenttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndCurrentTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendcurrenttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendcurrenttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndCurrentEntry")
    {
        for(auto const & c : dsx3farendcurrententry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry>();
        c->parent = this;
        dsx3farendcurrententry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendcurrenttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendcurrententry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Farendcurrenttable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::Dsx3Farendcurrententry()
    :
    dsx3farendcurrentindex{YType::int32, "dsx3FarEndCurrentIndex"},
    dsx3farendcurrentccvs{YType::uint32, "dsx3FarEndCurrentCCVs"},
    dsx3farendcurrentcess{YType::uint32, "dsx3FarEndCurrentCESs"},
    dsx3farendcurrentcsess{YType::uint32, "dsx3FarEndCurrentCSESs"},
    dsx3farendcurrentuass{YType::uint32, "dsx3FarEndCurrentUASs"},
    dsx3farendinvalidintervals{YType::int32, "dsx3FarEndInvalidIntervals"},
    dsx3farendtimeelapsed{YType::int32, "dsx3FarEndTimeElapsed"},
    dsx3farendvalidintervals{YType::int32, "dsx3FarEndValidIntervals"}
{
    yang_name = "dsx3FarEndCurrentEntry"; yang_parent_name = "dsx3FarEndCurrentTable";
}

Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::~Dsx3Farendcurrententry()
{
}

bool Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::has_data() const
{
    return dsx3farendcurrentindex.is_set
	|| dsx3farendcurrentccvs.is_set
	|| dsx3farendcurrentcess.is_set
	|| dsx3farendcurrentcsess.is_set
	|| dsx3farendcurrentuass.is_set
	|| dsx3farendinvalidintervals.is_set
	|| dsx3farendtimeelapsed.is_set
	|| dsx3farendvalidintervals.is_set;
}

bool Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3farendcurrentindex.operation)
	|| is_set(dsx3farendcurrentccvs.operation)
	|| is_set(dsx3farendcurrentcess.operation)
	|| is_set(dsx3farendcurrentcsess.operation)
	|| is_set(dsx3farendcurrentuass.operation)
	|| is_set(dsx3farendinvalidintervals.operation)
	|| is_set(dsx3farendtimeelapsed.operation)
	|| is_set(dsx3farendvalidintervals.operation);
}

std::string Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndCurrentEntry" <<"[dsx3FarEndCurrentIndex='" <<dsx3farendcurrentindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndCurrentTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendcurrentindex.is_set || is_set(dsx3farendcurrentindex.operation)) leaf_name_data.push_back(dsx3farendcurrentindex.get_name_leafdata());
    if (dsx3farendcurrentccvs.is_set || is_set(dsx3farendcurrentccvs.operation)) leaf_name_data.push_back(dsx3farendcurrentccvs.get_name_leafdata());
    if (dsx3farendcurrentcess.is_set || is_set(dsx3farendcurrentcess.operation)) leaf_name_data.push_back(dsx3farendcurrentcess.get_name_leafdata());
    if (dsx3farendcurrentcsess.is_set || is_set(dsx3farendcurrentcsess.operation)) leaf_name_data.push_back(dsx3farendcurrentcsess.get_name_leafdata());
    if (dsx3farendcurrentuass.is_set || is_set(dsx3farendcurrentuass.operation)) leaf_name_data.push_back(dsx3farendcurrentuass.get_name_leafdata());
    if (dsx3farendinvalidintervals.is_set || is_set(dsx3farendinvalidintervals.operation)) leaf_name_data.push_back(dsx3farendinvalidintervals.get_name_leafdata());
    if (dsx3farendtimeelapsed.is_set || is_set(dsx3farendtimeelapsed.operation)) leaf_name_data.push_back(dsx3farendtimeelapsed.get_name_leafdata());
    if (dsx3farendvalidintervals.is_set || is_set(dsx3farendvalidintervals.operation)) leaf_name_data.push_back(dsx3farendvalidintervals.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Farendcurrenttable::Dsx3Farendcurrententry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3FarEndCurrentIndex")
    {
        dsx3farendcurrentindex = value;
    }
    if(value_path == "dsx3FarEndCurrentCCVs")
    {
        dsx3farendcurrentccvs = value;
    }
    if(value_path == "dsx3FarEndCurrentCESs")
    {
        dsx3farendcurrentcess = value;
    }
    if(value_path == "dsx3FarEndCurrentCSESs")
    {
        dsx3farendcurrentcsess = value;
    }
    if(value_path == "dsx3FarEndCurrentUASs")
    {
        dsx3farendcurrentuass = value;
    }
    if(value_path == "dsx3FarEndInvalidIntervals")
    {
        dsx3farendinvalidintervals = value;
    }
    if(value_path == "dsx3FarEndTimeElapsed")
    {
        dsx3farendtimeelapsed = value;
    }
    if(value_path == "dsx3FarEndValidIntervals")
    {
        dsx3farendvalidintervals = value;
    }
}

Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervaltable()
{
    yang_name = "dsx3FarEndIntervalTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Farendintervaltable::~Dsx3Farendintervaltable()
{
}

bool Ds3Mib::Dsx3Farendintervaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendintervalentry_.size(); index++)
    {
        if(dsx3farendintervalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Farendintervaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendintervalentry_.size(); index++)
    {
        if(dsx3farendintervalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Farendintervaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndIntervalTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendintervaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendintervaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndIntervalEntry")
    {
        for(auto const & c : dsx3farendintervalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry>();
        c->parent = this;
        dsx3farendintervalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendintervaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendintervalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Farendintervaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::Dsx3Farendintervalentry()
    :
    dsx3farendintervalindex{YType::int32, "dsx3FarEndIntervalIndex"},
    dsx3farendintervalnumber{YType::int32, "dsx3FarEndIntervalNumber"},
    dsx3farendintervalccvs{YType::uint32, "dsx3FarEndIntervalCCVs"},
    dsx3farendintervalcess{YType::uint32, "dsx3FarEndIntervalCESs"},
    dsx3farendintervalcsess{YType::uint32, "dsx3FarEndIntervalCSESs"},
    dsx3farendintervaluass{YType::uint32, "dsx3FarEndIntervalUASs"},
    dsx3farendintervalvaliddata{YType::boolean, "dsx3FarEndIntervalValidData"}
{
    yang_name = "dsx3FarEndIntervalEntry"; yang_parent_name = "dsx3FarEndIntervalTable";
}

Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::~Dsx3Farendintervalentry()
{
}

bool Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::has_data() const
{
    return dsx3farendintervalindex.is_set
	|| dsx3farendintervalnumber.is_set
	|| dsx3farendintervalccvs.is_set
	|| dsx3farendintervalcess.is_set
	|| dsx3farendintervalcsess.is_set
	|| dsx3farendintervaluass.is_set
	|| dsx3farendintervalvaliddata.is_set;
}

bool Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3farendintervalindex.operation)
	|| is_set(dsx3farendintervalnumber.operation)
	|| is_set(dsx3farendintervalccvs.operation)
	|| is_set(dsx3farendintervalcess.operation)
	|| is_set(dsx3farendintervalcsess.operation)
	|| is_set(dsx3farendintervaluass.operation)
	|| is_set(dsx3farendintervalvaliddata.operation);
}

std::string Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndIntervalEntry" <<"[dsx3FarEndIntervalIndex='" <<dsx3farendintervalindex <<"']" <<"[dsx3FarEndIntervalNumber='" <<dsx3farendintervalnumber <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndIntervalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendintervalindex.is_set || is_set(dsx3farendintervalindex.operation)) leaf_name_data.push_back(dsx3farendintervalindex.get_name_leafdata());
    if (dsx3farendintervalnumber.is_set || is_set(dsx3farendintervalnumber.operation)) leaf_name_data.push_back(dsx3farendintervalnumber.get_name_leafdata());
    if (dsx3farendintervalccvs.is_set || is_set(dsx3farendintervalccvs.operation)) leaf_name_data.push_back(dsx3farendintervalccvs.get_name_leafdata());
    if (dsx3farendintervalcess.is_set || is_set(dsx3farendintervalcess.operation)) leaf_name_data.push_back(dsx3farendintervalcess.get_name_leafdata());
    if (dsx3farendintervalcsess.is_set || is_set(dsx3farendintervalcsess.operation)) leaf_name_data.push_back(dsx3farendintervalcsess.get_name_leafdata());
    if (dsx3farendintervaluass.is_set || is_set(dsx3farendintervaluass.operation)) leaf_name_data.push_back(dsx3farendintervaluass.get_name_leafdata());
    if (dsx3farendintervalvaliddata.is_set || is_set(dsx3farendintervalvaliddata.operation)) leaf_name_data.push_back(dsx3farendintervalvaliddata.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Farendintervaltable::Dsx3Farendintervalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3FarEndIntervalIndex")
    {
        dsx3farendintervalindex = value;
    }
    if(value_path == "dsx3FarEndIntervalNumber")
    {
        dsx3farendintervalnumber = value;
    }
    if(value_path == "dsx3FarEndIntervalCCVs")
    {
        dsx3farendintervalccvs = value;
    }
    if(value_path == "dsx3FarEndIntervalCESs")
    {
        dsx3farendintervalcess = value;
    }
    if(value_path == "dsx3FarEndIntervalCSESs")
    {
        dsx3farendintervalcsess = value;
    }
    if(value_path == "dsx3FarEndIntervalUASs")
    {
        dsx3farendintervaluass = value;
    }
    if(value_path == "dsx3FarEndIntervalValidData")
    {
        dsx3farendintervalvaliddata = value;
    }
}

Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotaltable()
{
    yang_name = "dsx3FarEndTotalTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Farendtotaltable::~Dsx3Farendtotaltable()
{
}

bool Ds3Mib::Dsx3Farendtotaltable::has_data() const
{
    for (std::size_t index=0; index<dsx3farendtotalentry_.size(); index++)
    {
        if(dsx3farendtotalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Farendtotaltable::has_operation() const
{
    for (std::size_t index=0; index<dsx3farendtotalentry_.size(); index++)
    {
        if(dsx3farendtotalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Farendtotaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndTotalTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendtotaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendtotaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FarEndTotalEntry")
    {
        for(auto const & c : dsx3farendtotalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry>();
        c->parent = this;
        dsx3farendtotalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendtotaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3farendtotalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Farendtotaltable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::Dsx3Farendtotalentry()
    :
    dsx3farendtotalindex{YType::int32, "dsx3FarEndTotalIndex"},
    dsx3farendtotalccvs{YType::uint32, "dsx3FarEndTotalCCVs"},
    dsx3farendtotalcess{YType::uint32, "dsx3FarEndTotalCESs"},
    dsx3farendtotalcsess{YType::uint32, "dsx3FarEndTotalCSESs"},
    dsx3farendtotaluass{YType::uint32, "dsx3FarEndTotalUASs"}
{
    yang_name = "dsx3FarEndTotalEntry"; yang_parent_name = "dsx3FarEndTotalTable";
}

Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::~Dsx3Farendtotalentry()
{
}

bool Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::has_data() const
{
    return dsx3farendtotalindex.is_set
	|| dsx3farendtotalccvs.is_set
	|| dsx3farendtotalcess.is_set
	|| dsx3farendtotalcsess.is_set
	|| dsx3farendtotaluass.is_set;
}

bool Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3farendtotalindex.operation)
	|| is_set(dsx3farendtotalccvs.operation)
	|| is_set(dsx3farendtotalcess.operation)
	|| is_set(dsx3farendtotalcsess.operation)
	|| is_set(dsx3farendtotaluass.operation);
}

std::string Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FarEndTotalEntry" <<"[dsx3FarEndTotalIndex='" <<dsx3farendtotalindex <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3FarEndTotalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3farendtotalindex.is_set || is_set(dsx3farendtotalindex.operation)) leaf_name_data.push_back(dsx3farendtotalindex.get_name_leafdata());
    if (dsx3farendtotalccvs.is_set || is_set(dsx3farendtotalccvs.operation)) leaf_name_data.push_back(dsx3farendtotalccvs.get_name_leafdata());
    if (dsx3farendtotalcess.is_set || is_set(dsx3farendtotalcess.operation)) leaf_name_data.push_back(dsx3farendtotalcess.get_name_leafdata());
    if (dsx3farendtotalcsess.is_set || is_set(dsx3farendtotalcsess.operation)) leaf_name_data.push_back(dsx3farendtotalcsess.get_name_leafdata());
    if (dsx3farendtotaluass.is_set || is_set(dsx3farendtotaluass.operation)) leaf_name_data.push_back(dsx3farendtotaluass.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Farendtotaltable::Dsx3Farendtotalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3FarEndTotalIndex")
    {
        dsx3farendtotalindex = value;
    }
    if(value_path == "dsx3FarEndTotalCCVs")
    {
        dsx3farendtotalccvs = value;
    }
    if(value_path == "dsx3FarEndTotalCESs")
    {
        dsx3farendtotalcess = value;
    }
    if(value_path == "dsx3FarEndTotalCSESs")
    {
        dsx3farendtotalcsess = value;
    }
    if(value_path == "dsx3FarEndTotalUASs")
    {
        dsx3farendtotaluass = value;
    }
}

Ds3Mib::Dsx3Fractable::Dsx3Fractable()
{
    yang_name = "dsx3FracTable"; yang_parent_name = "DS3-MIB";
}

Ds3Mib::Dsx3Fractable::~Dsx3Fractable()
{
}

bool Ds3Mib::Dsx3Fractable::has_data() const
{
    for (std::size_t index=0; index<dsx3fracentry_.size(); index++)
    {
        if(dsx3fracentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Ds3Mib::Dsx3Fractable::has_operation() const
{
    for (std::size_t index=0; index<dsx3fracentry_.size(); index++)
    {
        if(dsx3fracentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ds3Mib::Dsx3Fractable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FracTable";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Fractable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Fractable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dsx3FracEntry")
    {
        for(auto const & c : dsx3fracentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ds3Mib::Dsx3Fractable::Dsx3Fracentry>();
        c->parent = this;
        dsx3fracentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Fractable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dsx3fracentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ds3Mib::Dsx3Fractable::set_value(const std::string & value_path, std::string value)
{
}

Ds3Mib::Dsx3Fractable::Dsx3Fracentry::Dsx3Fracentry()
    :
    dsx3fracindex{YType::int32, "dsx3FracIndex"},
    dsx3fracnumber{YType::int32, "dsx3FracNumber"},
    dsx3fracifindex{YType::int32, "dsx3FracIfIndex"}
{
    yang_name = "dsx3FracEntry"; yang_parent_name = "dsx3FracTable";
}

Ds3Mib::Dsx3Fractable::Dsx3Fracentry::~Dsx3Fracentry()
{
}

bool Ds3Mib::Dsx3Fractable::Dsx3Fracentry::has_data() const
{
    return dsx3fracindex.is_set
	|| dsx3fracnumber.is_set
	|| dsx3fracifindex.is_set;
}

bool Ds3Mib::Dsx3Fractable::Dsx3Fracentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dsx3fracindex.operation)
	|| is_set(dsx3fracnumber.operation)
	|| is_set(dsx3fracifindex.operation);
}

std::string Ds3Mib::Dsx3Fractable::Dsx3Fracentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsx3FracEntry" <<"[dsx3FracIndex='" <<dsx3fracindex <<"']" <<"[dsx3FracNumber='" <<dsx3fracnumber <<"']";

    return path_buffer.str();

}

const EntityPath Ds3Mib::Dsx3Fractable::Dsx3Fracentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DS3-MIB:DS3-MIB/dsx3FracTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsx3fracindex.is_set || is_set(dsx3fracindex.operation)) leaf_name_data.push_back(dsx3fracindex.get_name_leafdata());
    if (dsx3fracnumber.is_set || is_set(dsx3fracnumber.operation)) leaf_name_data.push_back(dsx3fracnumber.get_name_leafdata());
    if (dsx3fracifindex.is_set || is_set(dsx3fracifindex.operation)) leaf_name_data.push_back(dsx3fracifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ds3Mib::Dsx3Fractable::Dsx3Fracentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ds3Mib::Dsx3Fractable::Dsx3Fracentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ds3Mib::Dsx3Fractable::Dsx3Fracentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsx3FracIndex")
    {
        dsx3fracindex = value;
    }
    if(value_path == "dsx3FracNumber")
    {
        dsx3fracnumber = value;
    }
    if(value_path == "dsx3FracIfIndex")
    {
        dsx3fracifindex = value;
    }
}

const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::dsx3other {1, "dsx3other"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::dsx3M23 {2, "dsx3M23"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::dsx3SYNTRAN {3, "dsx3SYNTRAN"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::dsx3CbitParity {4, "dsx3CbitParity"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::dsx3ClearChannel {5, "dsx3ClearChannel"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::e3other {6, "e3other"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::e3Framed {7, "e3Framed"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinetypeEnum::e3Plcp {8, "e3Plcp"};

const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinecodingEnum::dsx3Other {1, "dsx3Other"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinecodingEnum::dsx3B3ZS {2, "dsx3B3ZS"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinecodingEnum::e3HDB3 {3, "e3HDB3"};

const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3SendcodeEnum::dsx3SendNoCode {1, "dsx3SendNoCode"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3SendcodeEnum::dsx3SendLineCode {2, "dsx3SendLineCode"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3SendcodeEnum::dsx3SendPayloadCode {3, "dsx3SendPayloadCode"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3SendcodeEnum::dsx3SendResetCode {4, "dsx3SendResetCode"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3SendcodeEnum::dsx3SendDS1LoopCode {5, "dsx3SendDS1LoopCode"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3SendcodeEnum::dsx3SendTestPattern {6, "dsx3SendTestPattern"};

const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LoopbackconfigEnum::dsx3NoLoop {1, "dsx3NoLoop"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LoopbackconfigEnum::dsx3PayloadLoop {2, "dsx3PayloadLoop"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LoopbackconfigEnum::dsx3LineLoop {3, "dsx3LineLoop"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LoopbackconfigEnum::dsx3OtherLoop {4, "dsx3OtherLoop"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LoopbackconfigEnum::dsx3InwardLoop {5, "dsx3InwardLoop"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LoopbackconfigEnum::dsx3DualLoop {6, "dsx3DualLoop"};

const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3TransmitclocksourceEnum::loopTiming {1, "loopTiming"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3TransmitclocksourceEnum::localTiming {2, "localTiming"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3TransmitclocksourceEnum::throughTiming {3, "throughTiming"};

const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinestatuschangetrapenableEnum::enabled {1, "enabled"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3LinestatuschangetrapenableEnum::disabled {2, "disabled"};

const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3ChannelizationEnum::disabled {1, "disabled"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3ChannelizationEnum::enabledDs1 {2, "enabledDs1"};
const Enum::YLeaf Ds3Mib::Dsx3Configtable::Dsx3Configentry::Dsx3ChannelizationEnum::enabledDs2 {3, "enabledDs2"};


}
}

