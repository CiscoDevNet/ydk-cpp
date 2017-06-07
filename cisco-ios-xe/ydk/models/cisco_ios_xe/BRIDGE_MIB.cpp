
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "BRIDGE_MIB.hpp"

namespace ydk {
namespace BRIDGE_MIB {

BridgeMib::BridgeMib()
    :
    dot1dbase(std::make_shared<BridgeMib::Dot1Dbase>())
	,dot1dbaseporttable(std::make_shared<BridgeMib::Dot1Dbaseporttable>())
	,dot1dstatictable(std::make_shared<BridgeMib::Dot1Dstatictable>())
	,dot1dstp(std::make_shared<BridgeMib::Dot1Dstp>())
	,dot1dstpporttable(std::make_shared<BridgeMib::Dot1Dstpporttable>())
	,dot1dtp(std::make_shared<BridgeMib::Dot1Dtp>())
	,dot1dtpfdbtable(std::make_shared<BridgeMib::Dot1Dtpfdbtable>())
	,dot1dtpporttable(std::make_shared<BridgeMib::Dot1Dtpporttable>())
{
    dot1dbase->parent = this;

    dot1dbaseporttable->parent = this;

    dot1dstatictable->parent = this;

    dot1dstp->parent = this;

    dot1dstpporttable->parent = this;

    dot1dtp->parent = this;

    dot1dtpfdbtable->parent = this;

    dot1dtpporttable->parent = this;

    yang_name = "BRIDGE-MIB"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::~BridgeMib()
{
}

bool BridgeMib::has_data() const
{
    return (dot1dbase !=  nullptr && dot1dbase->has_data())
	|| (dot1dbaseporttable !=  nullptr && dot1dbaseporttable->has_data())
	|| (dot1dstatictable !=  nullptr && dot1dstatictable->has_data())
	|| (dot1dstp !=  nullptr && dot1dstp->has_data())
	|| (dot1dstpporttable !=  nullptr && dot1dstpporttable->has_data())
	|| (dot1dtp !=  nullptr && dot1dtp->has_data())
	|| (dot1dtpfdbtable !=  nullptr && dot1dtpfdbtable->has_data())
	|| (dot1dtpporttable !=  nullptr && dot1dtpporttable->has_data());
}

bool BridgeMib::has_operation() const
{
    return is_set(operation)
	|| (dot1dbase !=  nullptr && dot1dbase->has_operation())
	|| (dot1dbaseporttable !=  nullptr && dot1dbaseporttable->has_operation())
	|| (dot1dstatictable !=  nullptr && dot1dstatictable->has_operation())
	|| (dot1dstp !=  nullptr && dot1dstp->has_operation())
	|| (dot1dstpporttable !=  nullptr && dot1dstpporttable->has_operation())
	|| (dot1dtp !=  nullptr && dot1dtp->has_operation())
	|| (dot1dtpfdbtable !=  nullptr && dot1dtpfdbtable->has_operation())
	|| (dot1dtpporttable !=  nullptr && dot1dtpporttable->has_operation());
}

std::string BridgeMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB";

    return path_buffer.str();

}

const EntityPath BridgeMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BridgeMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dBase")
    {
        if(dot1dbase == nullptr)
        {
            dot1dbase = std::make_shared<BridgeMib::Dot1Dbase>();
        }
        return dot1dbase;
    }

    if(child_yang_name == "dot1dBasePortTable")
    {
        if(dot1dbaseporttable == nullptr)
        {
            dot1dbaseporttable = std::make_shared<BridgeMib::Dot1Dbaseporttable>();
        }
        return dot1dbaseporttable;
    }

    if(child_yang_name == "dot1dStaticTable")
    {
        if(dot1dstatictable == nullptr)
        {
            dot1dstatictable = std::make_shared<BridgeMib::Dot1Dstatictable>();
        }
        return dot1dstatictable;
    }

    if(child_yang_name == "dot1dStp")
    {
        if(dot1dstp == nullptr)
        {
            dot1dstp = std::make_shared<BridgeMib::Dot1Dstp>();
        }
        return dot1dstp;
    }

    if(child_yang_name == "dot1dStpPortTable")
    {
        if(dot1dstpporttable == nullptr)
        {
            dot1dstpporttable = std::make_shared<BridgeMib::Dot1Dstpporttable>();
        }
        return dot1dstpporttable;
    }

    if(child_yang_name == "dot1dTp")
    {
        if(dot1dtp == nullptr)
        {
            dot1dtp = std::make_shared<BridgeMib::Dot1Dtp>();
        }
        return dot1dtp;
    }

    if(child_yang_name == "dot1dTpFdbTable")
    {
        if(dot1dtpfdbtable == nullptr)
        {
            dot1dtpfdbtable = std::make_shared<BridgeMib::Dot1Dtpfdbtable>();
        }
        return dot1dtpfdbtable;
    }

    if(child_yang_name == "dot1dTpPortTable")
    {
        if(dot1dtpporttable == nullptr)
        {
            dot1dtpporttable = std::make_shared<BridgeMib::Dot1Dtpporttable>();
        }
        return dot1dtpporttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1dbase != nullptr)
    {
        children["dot1dBase"] = dot1dbase;
    }

    if(dot1dbaseporttable != nullptr)
    {
        children["dot1dBasePortTable"] = dot1dbaseporttable;
    }

    if(dot1dstatictable != nullptr)
    {
        children["dot1dStaticTable"] = dot1dstatictable;
    }

    if(dot1dstp != nullptr)
    {
        children["dot1dStp"] = dot1dstp;
    }

    if(dot1dstpporttable != nullptr)
    {
        children["dot1dStpPortTable"] = dot1dstpporttable;
    }

    if(dot1dtp != nullptr)
    {
        children["dot1dTp"] = dot1dtp;
    }

    if(dot1dtpfdbtable != nullptr)
    {
        children["dot1dTpFdbTable"] = dot1dtpfdbtable;
    }

    if(dot1dtpporttable != nullptr)
    {
        children["dot1dTpPortTable"] = dot1dtpporttable;
    }

    return children;
}

void BridgeMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> BridgeMib::clone_ptr() const
{
    return std::make_shared<BridgeMib>();
}

std::string BridgeMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BridgeMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BridgeMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

BridgeMib::Dot1Dbase::Dot1Dbase()
    :
    dot1dbasebridgeaddress{YType::str, "dot1dBaseBridgeAddress"},
    dot1dbasenumports{YType::int32, "dot1dBaseNumPorts"},
    dot1dbasetype{YType::enumeration, "dot1dBaseType"}
{
    yang_name = "dot1dBase"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dbase::~Dot1Dbase()
{
}

bool BridgeMib::Dot1Dbase::has_data() const
{
    return dot1dbasebridgeaddress.is_set
	|| dot1dbasenumports.is_set
	|| dot1dbasetype.is_set;
}

bool BridgeMib::Dot1Dbase::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dbasebridgeaddress.operation)
	|| is_set(dot1dbasenumports.operation)
	|| is_set(dot1dbasetype.operation);
}

std::string BridgeMib::Dot1Dbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dBase";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dbase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbasebridgeaddress.is_set || is_set(dot1dbasebridgeaddress.operation)) leaf_name_data.push_back(dot1dbasebridgeaddress.get_name_leafdata());
    if (dot1dbasenumports.is_set || is_set(dot1dbasenumports.operation)) leaf_name_data.push_back(dot1dbasenumports.get_name_leafdata());
    if (dot1dbasetype.is_set || is_set(dot1dbasetype.operation)) leaf_name_data.push_back(dot1dbasetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dbase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dBaseBridgeAddress")
    {
        dot1dbasebridgeaddress = value;
    }
    if(value_path == "dot1dBaseNumPorts")
    {
        dot1dbasenumports = value;
    }
    if(value_path == "dot1dBaseType")
    {
        dot1dbasetype = value;
    }
}

BridgeMib::Dot1Dstp::Dot1Dstp()
    :
    dot1dstpbridgeforwarddelay{YType::int32, "dot1dStpBridgeForwardDelay"},
    dot1dstpbridgehellotime{YType::int32, "dot1dStpBridgeHelloTime"},
    dot1dstpbridgemaxage{YType::int32, "dot1dStpBridgeMaxAge"},
    dot1dstpdesignatedroot{YType::str, "dot1dStpDesignatedRoot"},
    dot1dstpforwarddelay{YType::int32, "dot1dStpForwardDelay"},
    dot1dstphellotime{YType::int32, "dot1dStpHelloTime"},
    dot1dstpholdtime{YType::int32, "dot1dStpHoldTime"},
    dot1dstpmaxage{YType::int32, "dot1dStpMaxAge"},
    dot1dstppriority{YType::int32, "dot1dStpPriority"},
    dot1dstpprotocolspecification{YType::enumeration, "dot1dStpProtocolSpecification"},
    dot1dstprootcost{YType::int32, "dot1dStpRootCost"},
    dot1dstprootport{YType::int32, "dot1dStpRootPort"},
    dot1dstptimesincetopologychange{YType::uint32, "dot1dStpTimeSinceTopologyChange"},
    dot1dstptopchanges{YType::uint32, "dot1dStpTopChanges"}
{
    yang_name = "dot1dStp"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dstp::~Dot1Dstp()
{
}

bool BridgeMib::Dot1Dstp::has_data() const
{
    return dot1dstpbridgeforwarddelay.is_set
	|| dot1dstpbridgehellotime.is_set
	|| dot1dstpbridgemaxage.is_set
	|| dot1dstpdesignatedroot.is_set
	|| dot1dstpforwarddelay.is_set
	|| dot1dstphellotime.is_set
	|| dot1dstpholdtime.is_set
	|| dot1dstpmaxage.is_set
	|| dot1dstppriority.is_set
	|| dot1dstpprotocolspecification.is_set
	|| dot1dstprootcost.is_set
	|| dot1dstprootport.is_set
	|| dot1dstptimesincetopologychange.is_set
	|| dot1dstptopchanges.is_set;
}

bool BridgeMib::Dot1Dstp::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dstpbridgeforwarddelay.operation)
	|| is_set(dot1dstpbridgehellotime.operation)
	|| is_set(dot1dstpbridgemaxage.operation)
	|| is_set(dot1dstpdesignatedroot.operation)
	|| is_set(dot1dstpforwarddelay.operation)
	|| is_set(dot1dstphellotime.operation)
	|| is_set(dot1dstpholdtime.operation)
	|| is_set(dot1dstpmaxage.operation)
	|| is_set(dot1dstppriority.operation)
	|| is_set(dot1dstpprotocolspecification.operation)
	|| is_set(dot1dstprootcost.operation)
	|| is_set(dot1dstprootport.operation)
	|| is_set(dot1dstptimesincetopologychange.operation)
	|| is_set(dot1dstptopchanges.operation);
}

std::string BridgeMib::Dot1Dstp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStp";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dstp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dstpbridgeforwarddelay.is_set || is_set(dot1dstpbridgeforwarddelay.operation)) leaf_name_data.push_back(dot1dstpbridgeforwarddelay.get_name_leafdata());
    if (dot1dstpbridgehellotime.is_set || is_set(dot1dstpbridgehellotime.operation)) leaf_name_data.push_back(dot1dstpbridgehellotime.get_name_leafdata());
    if (dot1dstpbridgemaxage.is_set || is_set(dot1dstpbridgemaxage.operation)) leaf_name_data.push_back(dot1dstpbridgemaxage.get_name_leafdata());
    if (dot1dstpdesignatedroot.is_set || is_set(dot1dstpdesignatedroot.operation)) leaf_name_data.push_back(dot1dstpdesignatedroot.get_name_leafdata());
    if (dot1dstpforwarddelay.is_set || is_set(dot1dstpforwarddelay.operation)) leaf_name_data.push_back(dot1dstpforwarddelay.get_name_leafdata());
    if (dot1dstphellotime.is_set || is_set(dot1dstphellotime.operation)) leaf_name_data.push_back(dot1dstphellotime.get_name_leafdata());
    if (dot1dstpholdtime.is_set || is_set(dot1dstpholdtime.operation)) leaf_name_data.push_back(dot1dstpholdtime.get_name_leafdata());
    if (dot1dstpmaxage.is_set || is_set(dot1dstpmaxage.operation)) leaf_name_data.push_back(dot1dstpmaxage.get_name_leafdata());
    if (dot1dstppriority.is_set || is_set(dot1dstppriority.operation)) leaf_name_data.push_back(dot1dstppriority.get_name_leafdata());
    if (dot1dstpprotocolspecification.is_set || is_set(dot1dstpprotocolspecification.operation)) leaf_name_data.push_back(dot1dstpprotocolspecification.get_name_leafdata());
    if (dot1dstprootcost.is_set || is_set(dot1dstprootcost.operation)) leaf_name_data.push_back(dot1dstprootcost.get_name_leafdata());
    if (dot1dstprootport.is_set || is_set(dot1dstprootport.operation)) leaf_name_data.push_back(dot1dstprootport.get_name_leafdata());
    if (dot1dstptimesincetopologychange.is_set || is_set(dot1dstptimesincetopologychange.operation)) leaf_name_data.push_back(dot1dstptimesincetopologychange.get_name_leafdata());
    if (dot1dstptopchanges.is_set || is_set(dot1dstptopchanges.operation)) leaf_name_data.push_back(dot1dstptopchanges.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dstp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dstp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dstp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dStpBridgeForwardDelay")
    {
        dot1dstpbridgeforwarddelay = value;
    }
    if(value_path == "dot1dStpBridgeHelloTime")
    {
        dot1dstpbridgehellotime = value;
    }
    if(value_path == "dot1dStpBridgeMaxAge")
    {
        dot1dstpbridgemaxage = value;
    }
    if(value_path == "dot1dStpDesignatedRoot")
    {
        dot1dstpdesignatedroot = value;
    }
    if(value_path == "dot1dStpForwardDelay")
    {
        dot1dstpforwarddelay = value;
    }
    if(value_path == "dot1dStpHelloTime")
    {
        dot1dstphellotime = value;
    }
    if(value_path == "dot1dStpHoldTime")
    {
        dot1dstpholdtime = value;
    }
    if(value_path == "dot1dStpMaxAge")
    {
        dot1dstpmaxage = value;
    }
    if(value_path == "dot1dStpPriority")
    {
        dot1dstppriority = value;
    }
    if(value_path == "dot1dStpProtocolSpecification")
    {
        dot1dstpprotocolspecification = value;
    }
    if(value_path == "dot1dStpRootCost")
    {
        dot1dstprootcost = value;
    }
    if(value_path == "dot1dStpRootPort")
    {
        dot1dstprootport = value;
    }
    if(value_path == "dot1dStpTimeSinceTopologyChange")
    {
        dot1dstptimesincetopologychange = value;
    }
    if(value_path == "dot1dStpTopChanges")
    {
        dot1dstptopchanges = value;
    }
}

BridgeMib::Dot1Dtp::Dot1Dtp()
    :
    dot1dtpagingtime{YType::int32, "dot1dTpAgingTime"},
    dot1dtplearnedentrydiscards{YType::uint32, "dot1dTpLearnedEntryDiscards"}
{
    yang_name = "dot1dTp"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dtp::~Dot1Dtp()
{
}

bool BridgeMib::Dot1Dtp::has_data() const
{
    return dot1dtpagingtime.is_set
	|| dot1dtplearnedentrydiscards.is_set;
}

bool BridgeMib::Dot1Dtp::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dtpagingtime.operation)
	|| is_set(dot1dtplearnedentrydiscards.operation);
}

std::string BridgeMib::Dot1Dtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTp";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpagingtime.is_set || is_set(dot1dtpagingtime.operation)) leaf_name_data.push_back(dot1dtpagingtime.get_name_leafdata());
    if (dot1dtplearnedentrydiscards.is_set || is_set(dot1dtplearnedentrydiscards.operation)) leaf_name_data.push_back(dot1dtplearnedentrydiscards.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dTpAgingTime")
    {
        dot1dtpagingtime = value;
    }
    if(value_path == "dot1dTpLearnedEntryDiscards")
    {
        dot1dtplearnedentrydiscards = value;
    }
}

BridgeMib::Dot1Dbaseporttable::Dot1Dbaseporttable()
{
    yang_name = "dot1dBasePortTable"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dbaseporttable::~Dot1Dbaseporttable()
{
}

bool BridgeMib::Dot1Dbaseporttable::has_data() const
{
    for (std::size_t index=0; index<dot1dbaseportentry.size(); index++)
    {
        if(dot1dbaseportentry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeMib::Dot1Dbaseporttable::has_operation() const
{
    for (std::size_t index=0; index<dot1dbaseportentry.size(); index++)
    {
        if(dot1dbaseportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BridgeMib::Dot1Dbaseporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dBasePortTable";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dbaseporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dbaseporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dBasePortEntry")
    {
        for(auto const & c : dot1dbaseportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry>();
        c->parent = this;
        dot1dbaseportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dbaseporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dbaseportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeMib::Dot1Dbaseporttable::set_value(const std::string & value_path, std::string value)
{
}

BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::Dot1Dbaseportentry()
    :
    dot1dbaseport{YType::int32, "dot1dBasePort"},
    dot1dbaseportcircuit{YType::str, "dot1dBasePortCircuit"},
    dot1dbaseportdelayexceededdiscards{YType::uint32, "dot1dBasePortDelayExceededDiscards"},
    dot1dbaseportifindex{YType::int32, "dot1dBasePortIfIndex"},
    dot1dbaseportmtuexceededdiscards{YType::uint32, "dot1dBasePortMtuExceededDiscards"},
    dot1dportcapabilities{YType::bits, "P-BRIDGE-MIB:dot1dPortCapabilities"},
    dot1dportdefaultuserpriority{YType::int32, "P-BRIDGE-MIB:dot1dPortDefaultUserPriority"},
    dot1dportgarpjointime{YType::int32, "P-BRIDGE-MIB:dot1dPortGarpJoinTime"},
    dot1dportgarpleavealltime{YType::int32, "P-BRIDGE-MIB:dot1dPortGarpLeaveAllTime"},
    dot1dportgarpleavetime{YType::int32, "P-BRIDGE-MIB:dot1dPortGarpLeaveTime"},
    dot1dportgmrpfailedregistrations{YType::uint32, "P-BRIDGE-MIB:dot1dPortGmrpFailedRegistrations"},
    dot1dportgmrplastpduorigin{YType::str, "P-BRIDGE-MIB:dot1dPortGmrpLastPduOrigin"},
    dot1dportgmrpstatus{YType::enumeration, "P-BRIDGE-MIB:dot1dPortGmrpStatus"},
    dot1dportnumtrafficclasses{YType::int32, "P-BRIDGE-MIB:dot1dPortNumTrafficClasses"},
    dot1dportrestrictedgroupregistration{YType::boolean, "P-BRIDGE-MIB:dot1dPortRestrictedGroupRegistration"}
{
    yang_name = "dot1dBasePortEntry"; yang_parent_name = "dot1dBasePortTable";
}

BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::~Dot1Dbaseportentry()
{
}

bool BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::has_data() const
{
    return dot1dbaseport.is_set
	|| dot1dbaseportcircuit.is_set
	|| dot1dbaseportdelayexceededdiscards.is_set
	|| dot1dbaseportifindex.is_set
	|| dot1dbaseportmtuexceededdiscards.is_set
	|| dot1dportcapabilities.is_set
	|| dot1dportdefaultuserpriority.is_set
	|| dot1dportgarpjointime.is_set
	|| dot1dportgarpleavealltime.is_set
	|| dot1dportgarpleavetime.is_set
	|| dot1dportgmrpfailedregistrations.is_set
	|| dot1dportgmrplastpduorigin.is_set
	|| dot1dportgmrpstatus.is_set
	|| dot1dportnumtrafficclasses.is_set
	|| dot1dportrestrictedgroupregistration.is_set;
}

bool BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dbaseport.operation)
	|| is_set(dot1dbaseportcircuit.operation)
	|| is_set(dot1dbaseportdelayexceededdiscards.operation)
	|| is_set(dot1dbaseportifindex.operation)
	|| is_set(dot1dbaseportmtuexceededdiscards.operation)
	|| is_set(dot1dportcapabilities.operation)
	|| is_set(dot1dportdefaultuserpriority.operation)
	|| is_set(dot1dportgarpjointime.operation)
	|| is_set(dot1dportgarpleavealltime.operation)
	|| is_set(dot1dportgarpleavetime.operation)
	|| is_set(dot1dportgmrpfailedregistrations.operation)
	|| is_set(dot1dportgmrplastpduorigin.operation)
	|| is_set(dot1dportgmrpstatus.operation)
	|| is_set(dot1dportnumtrafficclasses.operation)
	|| is_set(dot1dportrestrictedgroupregistration.operation);
}

std::string BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dBasePortEntry" <<"[dot1dBasePort='" <<dot1dbaseport <<"']";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dBasePortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.operation)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1dbaseportcircuit.is_set || is_set(dot1dbaseportcircuit.operation)) leaf_name_data.push_back(dot1dbaseportcircuit.get_name_leafdata());
    if (dot1dbaseportdelayexceededdiscards.is_set || is_set(dot1dbaseportdelayexceededdiscards.operation)) leaf_name_data.push_back(dot1dbaseportdelayexceededdiscards.get_name_leafdata());
    if (dot1dbaseportifindex.is_set || is_set(dot1dbaseportifindex.operation)) leaf_name_data.push_back(dot1dbaseportifindex.get_name_leafdata());
    if (dot1dbaseportmtuexceededdiscards.is_set || is_set(dot1dbaseportmtuexceededdiscards.operation)) leaf_name_data.push_back(dot1dbaseportmtuexceededdiscards.get_name_leafdata());
    if (dot1dportcapabilities.is_set || is_set(dot1dportcapabilities.operation)) leaf_name_data.push_back(dot1dportcapabilities.get_name_leafdata());
    if (dot1dportdefaultuserpriority.is_set || is_set(dot1dportdefaultuserpriority.operation)) leaf_name_data.push_back(dot1dportdefaultuserpriority.get_name_leafdata());
    if (dot1dportgarpjointime.is_set || is_set(dot1dportgarpjointime.operation)) leaf_name_data.push_back(dot1dportgarpjointime.get_name_leafdata());
    if (dot1dportgarpleavealltime.is_set || is_set(dot1dportgarpleavealltime.operation)) leaf_name_data.push_back(dot1dportgarpleavealltime.get_name_leafdata());
    if (dot1dportgarpleavetime.is_set || is_set(dot1dportgarpleavetime.operation)) leaf_name_data.push_back(dot1dportgarpleavetime.get_name_leafdata());
    if (dot1dportgmrpfailedregistrations.is_set || is_set(dot1dportgmrpfailedregistrations.operation)) leaf_name_data.push_back(dot1dportgmrpfailedregistrations.get_name_leafdata());
    if (dot1dportgmrplastpduorigin.is_set || is_set(dot1dportgmrplastpduorigin.operation)) leaf_name_data.push_back(dot1dportgmrplastpduorigin.get_name_leafdata());
    if (dot1dportgmrpstatus.is_set || is_set(dot1dportgmrpstatus.operation)) leaf_name_data.push_back(dot1dportgmrpstatus.get_name_leafdata());
    if (dot1dportnumtrafficclasses.is_set || is_set(dot1dportnumtrafficclasses.operation)) leaf_name_data.push_back(dot1dportnumtrafficclasses.get_name_leafdata());
    if (dot1dportrestrictedgroupregistration.is_set || is_set(dot1dportrestrictedgroupregistration.operation)) leaf_name_data.push_back(dot1dportrestrictedgroupregistration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
    }
    if(value_path == "dot1dBasePortCircuit")
    {
        dot1dbaseportcircuit = value;
    }
    if(value_path == "dot1dBasePortDelayExceededDiscards")
    {
        dot1dbaseportdelayexceededdiscards = value;
    }
    if(value_path == "dot1dBasePortIfIndex")
    {
        dot1dbaseportifindex = value;
    }
    if(value_path == "dot1dBasePortMtuExceededDiscards")
    {
        dot1dbaseportmtuexceededdiscards = value;
    }
    if(value_path == "dot1dPortCapabilities")
    {
        dot1dportcapabilities[value] = true;
    }
    if(value_path == "dot1dPortDefaultUserPriority")
    {
        dot1dportdefaultuserpriority = value;
    }
    if(value_path == "dot1dPortGarpJoinTime")
    {
        dot1dportgarpjointime = value;
    }
    if(value_path == "dot1dPortGarpLeaveAllTime")
    {
        dot1dportgarpleavealltime = value;
    }
    if(value_path == "dot1dPortGarpLeaveTime")
    {
        dot1dportgarpleavetime = value;
    }
    if(value_path == "dot1dPortGmrpFailedRegistrations")
    {
        dot1dportgmrpfailedregistrations = value;
    }
    if(value_path == "dot1dPortGmrpLastPduOrigin")
    {
        dot1dportgmrplastpduorigin = value;
    }
    if(value_path == "dot1dPortGmrpStatus")
    {
        dot1dportgmrpstatus = value;
    }
    if(value_path == "dot1dPortNumTrafficClasses")
    {
        dot1dportnumtrafficclasses = value;
    }
    if(value_path == "dot1dPortRestrictedGroupRegistration")
    {
        dot1dportrestrictedgroupregistration = value;
    }
}

BridgeMib::Dot1Dstpporttable::Dot1Dstpporttable()
{
    yang_name = "dot1dStpPortTable"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dstpporttable::~Dot1Dstpporttable()
{
}

bool BridgeMib::Dot1Dstpporttable::has_data() const
{
    for (std::size_t index=0; index<dot1dstpportentry.size(); index++)
    {
        if(dot1dstpportentry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeMib::Dot1Dstpporttable::has_operation() const
{
    for (std::size_t index=0; index<dot1dstpportentry.size(); index++)
    {
        if(dot1dstpportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BridgeMib::Dot1Dstpporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStpPortTable";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dstpporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dstpporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dStpPortEntry")
    {
        for(auto const & c : dot1dstpportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry>();
        c->parent = this;
        dot1dstpportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dstpporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dstpportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeMib::Dot1Dstpporttable::set_value(const std::string & value_path, std::string value)
{
}

BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportentry()
    :
    dot1dstpport{YType::int32, "dot1dStpPort"},
    dot1dstpportdesignatedbridge{YType::str, "dot1dStpPortDesignatedBridge"},
    dot1dstpportdesignatedcost{YType::int32, "dot1dStpPortDesignatedCost"},
    dot1dstpportdesignatedport{YType::str, "dot1dStpPortDesignatedPort"},
    dot1dstpportdesignatedroot{YType::str, "dot1dStpPortDesignatedRoot"},
    dot1dstpportenable{YType::enumeration, "dot1dStpPortEnable"},
    dot1dstpportforwardtransitions{YType::uint32, "dot1dStpPortForwardTransitions"},
    dot1dstpportpathcost{YType::int32, "dot1dStpPortPathCost"},
    dot1dstpportpathcost32{YType::int32, "dot1dStpPortPathCost32"},
    dot1dstpportpriority{YType::int32, "dot1dStpPortPriority"},
    dot1dstpportstate{YType::enumeration, "dot1dStpPortState"},
    stpxlongstpportpathcost{YType::uint32, "CISCO-STP-EXTENSIONS-MIB:stpxLongStpPortPathCost"}
{
    yang_name = "dot1dStpPortEntry"; yang_parent_name = "dot1dStpPortTable";
}

BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::~Dot1Dstpportentry()
{
}

bool BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::has_data() const
{
    return dot1dstpport.is_set
	|| dot1dstpportdesignatedbridge.is_set
	|| dot1dstpportdesignatedcost.is_set
	|| dot1dstpportdesignatedport.is_set
	|| dot1dstpportdesignatedroot.is_set
	|| dot1dstpportenable.is_set
	|| dot1dstpportforwardtransitions.is_set
	|| dot1dstpportpathcost.is_set
	|| dot1dstpportpathcost32.is_set
	|| dot1dstpportpriority.is_set
	|| dot1dstpportstate.is_set
	|| stpxlongstpportpathcost.is_set;
}

bool BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dstpport.operation)
	|| is_set(dot1dstpportdesignatedbridge.operation)
	|| is_set(dot1dstpportdesignatedcost.operation)
	|| is_set(dot1dstpportdesignatedport.operation)
	|| is_set(dot1dstpportdesignatedroot.operation)
	|| is_set(dot1dstpportenable.operation)
	|| is_set(dot1dstpportforwardtransitions.operation)
	|| is_set(dot1dstpportpathcost.operation)
	|| is_set(dot1dstpportpathcost32.operation)
	|| is_set(dot1dstpportpriority.operation)
	|| is_set(dot1dstpportstate.operation)
	|| is_set(stpxlongstpportpathcost.operation);
}

std::string BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStpPortEntry" <<"[dot1dStpPort='" <<dot1dstpport <<"']";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dStpPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dstpport.is_set || is_set(dot1dstpport.operation)) leaf_name_data.push_back(dot1dstpport.get_name_leafdata());
    if (dot1dstpportdesignatedbridge.is_set || is_set(dot1dstpportdesignatedbridge.operation)) leaf_name_data.push_back(dot1dstpportdesignatedbridge.get_name_leafdata());
    if (dot1dstpportdesignatedcost.is_set || is_set(dot1dstpportdesignatedcost.operation)) leaf_name_data.push_back(dot1dstpportdesignatedcost.get_name_leafdata());
    if (dot1dstpportdesignatedport.is_set || is_set(dot1dstpportdesignatedport.operation)) leaf_name_data.push_back(dot1dstpportdesignatedport.get_name_leafdata());
    if (dot1dstpportdesignatedroot.is_set || is_set(dot1dstpportdesignatedroot.operation)) leaf_name_data.push_back(dot1dstpportdesignatedroot.get_name_leafdata());
    if (dot1dstpportenable.is_set || is_set(dot1dstpportenable.operation)) leaf_name_data.push_back(dot1dstpportenable.get_name_leafdata());
    if (dot1dstpportforwardtransitions.is_set || is_set(dot1dstpportforwardtransitions.operation)) leaf_name_data.push_back(dot1dstpportforwardtransitions.get_name_leafdata());
    if (dot1dstpportpathcost.is_set || is_set(dot1dstpportpathcost.operation)) leaf_name_data.push_back(dot1dstpportpathcost.get_name_leafdata());
    if (dot1dstpportpathcost32.is_set || is_set(dot1dstpportpathcost32.operation)) leaf_name_data.push_back(dot1dstpportpathcost32.get_name_leafdata());
    if (dot1dstpportpriority.is_set || is_set(dot1dstpportpriority.operation)) leaf_name_data.push_back(dot1dstpportpriority.get_name_leafdata());
    if (dot1dstpportstate.is_set || is_set(dot1dstpportstate.operation)) leaf_name_data.push_back(dot1dstpportstate.get_name_leafdata());
    if (stpxlongstpportpathcost.is_set || is_set(stpxlongstpportpathcost.operation)) leaf_name_data.push_back(stpxlongstpportpathcost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dStpPort")
    {
        dot1dstpport = value;
    }
    if(value_path == "dot1dStpPortDesignatedBridge")
    {
        dot1dstpportdesignatedbridge = value;
    }
    if(value_path == "dot1dStpPortDesignatedCost")
    {
        dot1dstpportdesignatedcost = value;
    }
    if(value_path == "dot1dStpPortDesignatedPort")
    {
        dot1dstpportdesignatedport = value;
    }
    if(value_path == "dot1dStpPortDesignatedRoot")
    {
        dot1dstpportdesignatedroot = value;
    }
    if(value_path == "dot1dStpPortEnable")
    {
        dot1dstpportenable = value;
    }
    if(value_path == "dot1dStpPortForwardTransitions")
    {
        dot1dstpportforwardtransitions = value;
    }
    if(value_path == "dot1dStpPortPathCost")
    {
        dot1dstpportpathcost = value;
    }
    if(value_path == "dot1dStpPortPathCost32")
    {
        dot1dstpportpathcost32 = value;
    }
    if(value_path == "dot1dStpPortPriority")
    {
        dot1dstpportpriority = value;
    }
    if(value_path == "dot1dStpPortState")
    {
        dot1dstpportstate = value;
    }
    if(value_path == "stpxLongStpPortPathCost")
    {
        stpxlongstpportpathcost = value;
    }
}

BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbtable()
{
    yang_name = "dot1dTpFdbTable"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dtpfdbtable::~Dot1Dtpfdbtable()
{
}

bool BridgeMib::Dot1Dtpfdbtable::has_data() const
{
    for (std::size_t index=0; index<dot1dtpfdbentry.size(); index++)
    {
        if(dot1dtpfdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeMib::Dot1Dtpfdbtable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtpfdbentry.size(); index++)
    {
        if(dot1dtpfdbentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BridgeMib::Dot1Dtpfdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpFdbTable";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dtpfdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dtpfdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpFdbEntry")
    {
        for(auto const & c : dot1dtpfdbentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry>();
        c->parent = this;
        dot1dtpfdbentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dtpfdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dtpfdbentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeMib::Dot1Dtpfdbtable::set_value(const std::string & value_path, std::string value)
{
}

BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1Dtpfdbentry()
    :
    dot1dtpfdbaddress{YType::str, "dot1dTpFdbAddress"},
    dot1dtpfdbport{YType::int32, "dot1dTpFdbPort"},
    dot1dtpfdbstatus{YType::enumeration, "dot1dTpFdbStatus"}
{
    yang_name = "dot1dTpFdbEntry"; yang_parent_name = "dot1dTpFdbTable";
}

BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::~Dot1Dtpfdbentry()
{
}

bool BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::has_data() const
{
    return dot1dtpfdbaddress.is_set
	|| dot1dtpfdbport.is_set
	|| dot1dtpfdbstatus.is_set;
}

bool BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dtpfdbaddress.operation)
	|| is_set(dot1dtpfdbport.operation)
	|| is_set(dot1dtpfdbstatus.operation);
}

std::string BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpFdbEntry" <<"[dot1dTpFdbAddress='" <<dot1dtpfdbaddress <<"']";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dTpFdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpfdbaddress.is_set || is_set(dot1dtpfdbaddress.operation)) leaf_name_data.push_back(dot1dtpfdbaddress.get_name_leafdata());
    if (dot1dtpfdbport.is_set || is_set(dot1dtpfdbport.operation)) leaf_name_data.push_back(dot1dtpfdbport.get_name_leafdata());
    if (dot1dtpfdbstatus.is_set || is_set(dot1dtpfdbstatus.operation)) leaf_name_data.push_back(dot1dtpfdbstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dTpFdbAddress")
    {
        dot1dtpfdbaddress = value;
    }
    if(value_path == "dot1dTpFdbPort")
    {
        dot1dtpfdbport = value;
    }
    if(value_path == "dot1dTpFdbStatus")
    {
        dot1dtpfdbstatus = value;
    }
}

BridgeMib::Dot1Dtpporttable::Dot1Dtpporttable()
{
    yang_name = "dot1dTpPortTable"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dtpporttable::~Dot1Dtpporttable()
{
}

bool BridgeMib::Dot1Dtpporttable::has_data() const
{
    for (std::size_t index=0; index<dot1dtpportentry.size(); index++)
    {
        if(dot1dtpportentry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeMib::Dot1Dtpporttable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtpportentry.size(); index++)
    {
        if(dot1dtpportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BridgeMib::Dot1Dtpporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortTable";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dtpporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dtpporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpPortEntry")
    {
        for(auto const & c : dot1dtpportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry>();
        c->parent = this;
        dot1dtpportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dtpporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dtpportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeMib::Dot1Dtpporttable::set_value(const std::string & value_path, std::string value)
{
}

BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::Dot1Dtpportentry()
    :
    dot1dtpport{YType::int32, "dot1dTpPort"},
    dot1dtpportindiscards{YType::uint32, "dot1dTpPortInDiscards"},
    dot1dtpportinframes{YType::uint32, "dot1dTpPortInFrames"},
    dot1dtpportmaxinfo{YType::int32, "dot1dTpPortMaxInfo"},
    dot1dtpportoutframes{YType::uint32, "dot1dTpPortOutFrames"}
{
    yang_name = "dot1dTpPortEntry"; yang_parent_name = "dot1dTpPortTable";
}

BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::~Dot1Dtpportentry()
{
}

bool BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::has_data() const
{
    return dot1dtpport.is_set
	|| dot1dtpportindiscards.is_set
	|| dot1dtpportinframes.is_set
	|| dot1dtpportmaxinfo.is_set
	|| dot1dtpportoutframes.is_set;
}

bool BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dtpport.operation)
	|| is_set(dot1dtpportindiscards.operation)
	|| is_set(dot1dtpportinframes.operation)
	|| is_set(dot1dtpportmaxinfo.operation)
	|| is_set(dot1dtpportoutframes.operation);
}

std::string BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortEntry" <<"[dot1dTpPort='" <<dot1dtpport <<"']";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dTpPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpport.is_set || is_set(dot1dtpport.operation)) leaf_name_data.push_back(dot1dtpport.get_name_leafdata());
    if (dot1dtpportindiscards.is_set || is_set(dot1dtpportindiscards.operation)) leaf_name_data.push_back(dot1dtpportindiscards.get_name_leafdata());
    if (dot1dtpportinframes.is_set || is_set(dot1dtpportinframes.operation)) leaf_name_data.push_back(dot1dtpportinframes.get_name_leafdata());
    if (dot1dtpportmaxinfo.is_set || is_set(dot1dtpportmaxinfo.operation)) leaf_name_data.push_back(dot1dtpportmaxinfo.get_name_leafdata());
    if (dot1dtpportoutframes.is_set || is_set(dot1dtpportoutframes.operation)) leaf_name_data.push_back(dot1dtpportoutframes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport = value;
    }
    if(value_path == "dot1dTpPortInDiscards")
    {
        dot1dtpportindiscards = value;
    }
    if(value_path == "dot1dTpPortInFrames")
    {
        dot1dtpportinframes = value;
    }
    if(value_path == "dot1dTpPortMaxInfo")
    {
        dot1dtpportmaxinfo = value;
    }
    if(value_path == "dot1dTpPortOutFrames")
    {
        dot1dtpportoutframes = value;
    }
}

BridgeMib::Dot1Dstatictable::Dot1Dstatictable()
{
    yang_name = "dot1dStaticTable"; yang_parent_name = "BRIDGE-MIB";
}

BridgeMib::Dot1Dstatictable::~Dot1Dstatictable()
{
}

bool BridgeMib::Dot1Dstatictable::has_data() const
{
    for (std::size_t index=0; index<dot1dstaticentry.size(); index++)
    {
        if(dot1dstaticentry[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeMib::Dot1Dstatictable::has_operation() const
{
    for (std::size_t index=0; index<dot1dstaticentry.size(); index++)
    {
        if(dot1dstaticentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BridgeMib::Dot1Dstatictable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStaticTable";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dstatictable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dstatictable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dStaticEntry")
    {
        for(auto const & c : dot1dstaticentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeMib::Dot1Dstatictable::Dot1Dstaticentry>();
        c->parent = this;
        dot1dstaticentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dstatictable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1dstaticentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeMib::Dot1Dstatictable::set_value(const std::string & value_path, std::string value)
{
}

BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1Dstaticentry()
    :
    dot1dstaticaddress{YType::str, "dot1dStaticAddress"},
    dot1dstaticreceiveport{YType::int32, "dot1dStaticReceivePort"},
    dot1dstaticallowedtogoto{YType::str, "dot1dStaticAllowedToGoTo"},
    dot1dstaticstatus{YType::enumeration, "dot1dStaticStatus"}
{
    yang_name = "dot1dStaticEntry"; yang_parent_name = "dot1dStaticTable";
}

BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::~Dot1Dstaticentry()
{
}

bool BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::has_data() const
{
    return dot1dstaticaddress.is_set
	|| dot1dstaticreceiveport.is_set
	|| dot1dstaticallowedtogoto.is_set
	|| dot1dstaticstatus.is_set;
}

bool BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::has_operation() const
{
    return is_set(operation)
	|| is_set(dot1dstaticaddress.operation)
	|| is_set(dot1dstaticreceiveport.operation)
	|| is_set(dot1dstaticallowedtogoto.operation)
	|| is_set(dot1dstaticstatus.operation);
}

std::string BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStaticEntry" <<"[dot1dStaticAddress='" <<dot1dstaticaddress <<"']" <<"[dot1dStaticReceivePort='" <<dot1dstaticreceiveport <<"']";

    return path_buffer.str();

}

const EntityPath BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dStaticTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dstaticaddress.is_set || is_set(dot1dstaticaddress.operation)) leaf_name_data.push_back(dot1dstaticaddress.get_name_leafdata());
    if (dot1dstaticreceiveport.is_set || is_set(dot1dstaticreceiveport.operation)) leaf_name_data.push_back(dot1dstaticreceiveport.get_name_leafdata());
    if (dot1dstaticallowedtogoto.is_set || is_set(dot1dstaticallowedtogoto.operation)) leaf_name_data.push_back(dot1dstaticallowedtogoto.get_name_leafdata());
    if (dot1dstaticstatus.is_set || is_set(dot1dstaticstatus.operation)) leaf_name_data.push_back(dot1dstaticstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dot1dStaticAddress")
    {
        dot1dstaticaddress = value;
    }
    if(value_path == "dot1dStaticReceivePort")
    {
        dot1dstaticreceiveport = value;
    }
    if(value_path == "dot1dStaticAllowedToGoTo")
    {
        dot1dstaticallowedtogoto = value;
    }
    if(value_path == "dot1dStaticStatus")
    {
        dot1dstaticstatus = value;
    }
}

const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1DbasetypeEnum::unknown {1, "unknown"};
const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1DbasetypeEnum::transparent_only {2, "transparent-only"};
const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1DbasetypeEnum::sourceroute_only {3, "sourceroute-only"};
const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1DbasetypeEnum::srt {4, "srt"};

const Enum::YLeaf BridgeMib::Dot1Dstp::Dot1DstpprotocolspecificationEnum::unknown {1, "unknown"};
const Enum::YLeaf BridgeMib::Dot1Dstp::Dot1DstpprotocolspecificationEnum::decLb100 {2, "decLb100"};
const Enum::YLeaf BridgeMib::Dot1Dstp::Dot1DstpprotocolspecificationEnum::ieee8021d {3, "ieee8021d"};

const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportstateEnum::disabled {1, "disabled"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportstateEnum::blocking {2, "blocking"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportstateEnum::listening {3, "listening"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportstateEnum::learning {4, "learning"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportstateEnum::forwarding {5, "forwarding"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportstateEnum::broken {6, "broken"};

const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportenableEnum::enabled {1, "enabled"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1DstpportenableEnum::disabled {2, "disabled"};

const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1DtpfdbstatusEnum::other {1, "other"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1DtpfdbstatusEnum::invalid {2, "invalid"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1DtpfdbstatusEnum::learned {3, "learned"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1DtpfdbstatusEnum::self {4, "self"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1DtpfdbstatusEnum::mgmt {5, "mgmt"};

const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1DstaticstatusEnum::other {1, "other"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1DstaticstatusEnum::invalid {2, "invalid"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1DstaticstatusEnum::permanent {3, "permanent"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1DstaticstatusEnum::deleteOnReset {4, "deleteOnReset"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1DstaticstatusEnum::deleteOnTimeout {5, "deleteOnTimeout"};


}
}

