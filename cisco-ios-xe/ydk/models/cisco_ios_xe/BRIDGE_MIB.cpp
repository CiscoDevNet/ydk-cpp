
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "BRIDGE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void BridgeMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> BridgeMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BridgeMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBase" || name == "dot1dBasePortTable" || name == "dot1dStaticTable" || name == "dot1dStp" || name == "dot1dStpPortTable" || name == "dot1dTp" || name == "dot1dTpFdbTable" || name == "dot1dTpPortTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dot1dbasebridgeaddress.yfilter)
	|| ydk::is_set(dot1dbasenumports.yfilter)
	|| ydk::is_set(dot1dbasetype.yfilter);
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

    if (dot1dbasebridgeaddress.is_set || is_set(dot1dbasebridgeaddress.yfilter)) leaf_name_data.push_back(dot1dbasebridgeaddress.get_name_leafdata());
    if (dot1dbasenumports.is_set || is_set(dot1dbasenumports.yfilter)) leaf_name_data.push_back(dot1dbasenumports.get_name_leafdata());
    if (dot1dbasetype.is_set || is_set(dot1dbasetype.yfilter)) leaf_name_data.push_back(dot1dbasetype.get_name_leafdata());


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

void BridgeMib::Dot1Dbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBaseBridgeAddress")
    {
        dot1dbasebridgeaddress = value;
        dot1dbasebridgeaddress.value_namespace = name_space;
        dot1dbasebridgeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dBaseNumPorts")
    {
        dot1dbasenumports = value;
        dot1dbasenumports.value_namespace = name_space;
        dot1dbasenumports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dBaseType")
    {
        dot1dbasetype = value;
        dot1dbasetype.value_namespace = name_space;
        dot1dbasetype.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBaseBridgeAddress")
    {
        dot1dbasebridgeaddress.yfilter = yfilter;
    }
    if(value_path == "dot1dBaseNumPorts")
    {
        dot1dbasenumports.yfilter = yfilter;
    }
    if(value_path == "dot1dBaseType")
    {
        dot1dbasetype.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBaseBridgeAddress" || name == "dot1dBaseNumPorts" || name == "dot1dBaseType")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dot1dstpbridgeforwarddelay.yfilter)
	|| ydk::is_set(dot1dstpbridgehellotime.yfilter)
	|| ydk::is_set(dot1dstpbridgemaxage.yfilter)
	|| ydk::is_set(dot1dstpdesignatedroot.yfilter)
	|| ydk::is_set(dot1dstpforwarddelay.yfilter)
	|| ydk::is_set(dot1dstphellotime.yfilter)
	|| ydk::is_set(dot1dstpholdtime.yfilter)
	|| ydk::is_set(dot1dstpmaxage.yfilter)
	|| ydk::is_set(dot1dstppriority.yfilter)
	|| ydk::is_set(dot1dstpprotocolspecification.yfilter)
	|| ydk::is_set(dot1dstprootcost.yfilter)
	|| ydk::is_set(dot1dstprootport.yfilter)
	|| ydk::is_set(dot1dstptimesincetopologychange.yfilter)
	|| ydk::is_set(dot1dstptopchanges.yfilter);
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

    if (dot1dstpbridgeforwarddelay.is_set || is_set(dot1dstpbridgeforwarddelay.yfilter)) leaf_name_data.push_back(dot1dstpbridgeforwarddelay.get_name_leafdata());
    if (dot1dstpbridgehellotime.is_set || is_set(dot1dstpbridgehellotime.yfilter)) leaf_name_data.push_back(dot1dstpbridgehellotime.get_name_leafdata());
    if (dot1dstpbridgemaxage.is_set || is_set(dot1dstpbridgemaxage.yfilter)) leaf_name_data.push_back(dot1dstpbridgemaxage.get_name_leafdata());
    if (dot1dstpdesignatedroot.is_set || is_set(dot1dstpdesignatedroot.yfilter)) leaf_name_data.push_back(dot1dstpdesignatedroot.get_name_leafdata());
    if (dot1dstpforwarddelay.is_set || is_set(dot1dstpforwarddelay.yfilter)) leaf_name_data.push_back(dot1dstpforwarddelay.get_name_leafdata());
    if (dot1dstphellotime.is_set || is_set(dot1dstphellotime.yfilter)) leaf_name_data.push_back(dot1dstphellotime.get_name_leafdata());
    if (dot1dstpholdtime.is_set || is_set(dot1dstpholdtime.yfilter)) leaf_name_data.push_back(dot1dstpholdtime.get_name_leafdata());
    if (dot1dstpmaxage.is_set || is_set(dot1dstpmaxage.yfilter)) leaf_name_data.push_back(dot1dstpmaxage.get_name_leafdata());
    if (dot1dstppriority.is_set || is_set(dot1dstppriority.yfilter)) leaf_name_data.push_back(dot1dstppriority.get_name_leafdata());
    if (dot1dstpprotocolspecification.is_set || is_set(dot1dstpprotocolspecification.yfilter)) leaf_name_data.push_back(dot1dstpprotocolspecification.get_name_leafdata());
    if (dot1dstprootcost.is_set || is_set(dot1dstprootcost.yfilter)) leaf_name_data.push_back(dot1dstprootcost.get_name_leafdata());
    if (dot1dstprootport.is_set || is_set(dot1dstprootport.yfilter)) leaf_name_data.push_back(dot1dstprootport.get_name_leafdata());
    if (dot1dstptimesincetopologychange.is_set || is_set(dot1dstptimesincetopologychange.yfilter)) leaf_name_data.push_back(dot1dstptimesincetopologychange.get_name_leafdata());
    if (dot1dstptopchanges.is_set || is_set(dot1dstptopchanges.yfilter)) leaf_name_data.push_back(dot1dstptopchanges.get_name_leafdata());


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

void BridgeMib::Dot1Dstp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dStpBridgeForwardDelay")
    {
        dot1dstpbridgeforwarddelay = value;
        dot1dstpbridgeforwarddelay.value_namespace = name_space;
        dot1dstpbridgeforwarddelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpBridgeHelloTime")
    {
        dot1dstpbridgehellotime = value;
        dot1dstpbridgehellotime.value_namespace = name_space;
        dot1dstpbridgehellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpBridgeMaxAge")
    {
        dot1dstpbridgemaxage = value;
        dot1dstpbridgemaxage.value_namespace = name_space;
        dot1dstpbridgemaxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpDesignatedRoot")
    {
        dot1dstpdesignatedroot = value;
        dot1dstpdesignatedroot.value_namespace = name_space;
        dot1dstpdesignatedroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpForwardDelay")
    {
        dot1dstpforwarddelay = value;
        dot1dstpforwarddelay.value_namespace = name_space;
        dot1dstpforwarddelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpHelloTime")
    {
        dot1dstphellotime = value;
        dot1dstphellotime.value_namespace = name_space;
        dot1dstphellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpHoldTime")
    {
        dot1dstpholdtime = value;
        dot1dstpholdtime.value_namespace = name_space;
        dot1dstpholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpMaxAge")
    {
        dot1dstpmaxage = value;
        dot1dstpmaxage.value_namespace = name_space;
        dot1dstpmaxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPriority")
    {
        dot1dstppriority = value;
        dot1dstppriority.value_namespace = name_space;
        dot1dstppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpProtocolSpecification")
    {
        dot1dstpprotocolspecification = value;
        dot1dstpprotocolspecification.value_namespace = name_space;
        dot1dstpprotocolspecification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpRootCost")
    {
        dot1dstprootcost = value;
        dot1dstprootcost.value_namespace = name_space;
        dot1dstprootcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpRootPort")
    {
        dot1dstprootport = value;
        dot1dstprootport.value_namespace = name_space;
        dot1dstprootport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpTimeSinceTopologyChange")
    {
        dot1dstptimesincetopologychange = value;
        dot1dstptimesincetopologychange.value_namespace = name_space;
        dot1dstptimesincetopologychange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpTopChanges")
    {
        dot1dstptopchanges = value;
        dot1dstptopchanges.value_namespace = name_space;
        dot1dstptopchanges.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dstp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dStpBridgeForwardDelay")
    {
        dot1dstpbridgeforwarddelay.yfilter = yfilter;
    }
    if(value_path == "dot1dStpBridgeHelloTime")
    {
        dot1dstpbridgehellotime.yfilter = yfilter;
    }
    if(value_path == "dot1dStpBridgeMaxAge")
    {
        dot1dstpbridgemaxage.yfilter = yfilter;
    }
    if(value_path == "dot1dStpDesignatedRoot")
    {
        dot1dstpdesignatedroot.yfilter = yfilter;
    }
    if(value_path == "dot1dStpForwardDelay")
    {
        dot1dstpforwarddelay.yfilter = yfilter;
    }
    if(value_path == "dot1dStpHelloTime")
    {
        dot1dstphellotime.yfilter = yfilter;
    }
    if(value_path == "dot1dStpHoldTime")
    {
        dot1dstpholdtime.yfilter = yfilter;
    }
    if(value_path == "dot1dStpMaxAge")
    {
        dot1dstpmaxage.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPriority")
    {
        dot1dstppriority.yfilter = yfilter;
    }
    if(value_path == "dot1dStpProtocolSpecification")
    {
        dot1dstpprotocolspecification.yfilter = yfilter;
    }
    if(value_path == "dot1dStpRootCost")
    {
        dot1dstprootcost.yfilter = yfilter;
    }
    if(value_path == "dot1dStpRootPort")
    {
        dot1dstprootport.yfilter = yfilter;
    }
    if(value_path == "dot1dStpTimeSinceTopologyChange")
    {
        dot1dstptimesincetopologychange.yfilter = yfilter;
    }
    if(value_path == "dot1dStpTopChanges")
    {
        dot1dstptopchanges.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dstp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStpBridgeForwardDelay" || name == "dot1dStpBridgeHelloTime" || name == "dot1dStpBridgeMaxAge" || name == "dot1dStpDesignatedRoot" || name == "dot1dStpForwardDelay" || name == "dot1dStpHelloTime" || name == "dot1dStpHoldTime" || name == "dot1dStpMaxAge" || name == "dot1dStpPriority" || name == "dot1dStpProtocolSpecification" || name == "dot1dStpRootCost" || name == "dot1dStpRootPort" || name == "dot1dStpTimeSinceTopologyChange" || name == "dot1dStpTopChanges")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dot1dtpagingtime.yfilter)
	|| ydk::is_set(dot1dtplearnedentrydiscards.yfilter);
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

    if (dot1dtpagingtime.is_set || is_set(dot1dtpagingtime.yfilter)) leaf_name_data.push_back(dot1dtpagingtime.get_name_leafdata());
    if (dot1dtplearnedentrydiscards.is_set || is_set(dot1dtplearnedentrydiscards.yfilter)) leaf_name_data.push_back(dot1dtplearnedentrydiscards.get_name_leafdata());


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

void BridgeMib::Dot1Dtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dTpAgingTime")
    {
        dot1dtpagingtime = value;
        dot1dtpagingtime.value_namespace = name_space;
        dot1dtpagingtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpLearnedEntryDiscards")
    {
        dot1dtplearnedentrydiscards = value;
        dot1dtplearnedentrydiscards.value_namespace = name_space;
        dot1dtplearnedentrydiscards.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dTpAgingTime")
    {
        dot1dtpagingtime.yfilter = yfilter;
    }
    if(value_path == "dot1dTpLearnedEntryDiscards")
    {
        dot1dtplearnedentrydiscards.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpAgingTime" || name == "dot1dTpLearnedEntryDiscards")
        return true;
    return false;
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
    return is_set(yfilter);
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

void BridgeMib::Dot1Dbaseporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeMib::Dot1Dbaseporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeMib::Dot1Dbaseporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePortEntry")
        return true;
    return false;
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
    dot1dportrestrictedgroupregistration{YType::boolean, "P-BRIDGE-MIB:dot1dPortRestrictedGroupRegistration"},
    dot1qportacceptableframetypes{YType::enumeration, "Q-BRIDGE-MIB:dot1qPortAcceptableFrameTypes"},
    dot1qportgvrpfailedregistrations{YType::uint32, "Q-BRIDGE-MIB:dot1qPortGvrpFailedRegistrations"},
    dot1qportgvrplastpduorigin{YType::str, "Q-BRIDGE-MIB:dot1qPortGvrpLastPduOrigin"},
    dot1qportgvrpstatus{YType::enumeration, "Q-BRIDGE-MIB:dot1qPortGvrpStatus"},
    dot1qportingressfiltering{YType::boolean, "Q-BRIDGE-MIB:dot1qPortIngressFiltering"},
    dot1qportrestrictedvlanregistration{YType::boolean, "Q-BRIDGE-MIB:dot1qPortRestrictedVlanRegistration"},
    dot1qpvid{YType::uint32, "Q-BRIDGE-MIB:dot1qPvid"}
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
	|| dot1dportrestrictedgroupregistration.is_set
	|| dot1qportacceptableframetypes.is_set
	|| dot1qportgvrpfailedregistrations.is_set
	|| dot1qportgvrplastpduorigin.is_set
	|| dot1qportgvrpstatus.is_set
	|| dot1qportingressfiltering.is_set
	|| dot1qportrestrictedvlanregistration.is_set
	|| dot1qpvid.is_set;
}

bool BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1dbaseportcircuit.yfilter)
	|| ydk::is_set(dot1dbaseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(dot1dbaseportifindex.yfilter)
	|| ydk::is_set(dot1dbaseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(dot1dportcapabilities.yfilter)
	|| ydk::is_set(dot1dportdefaultuserpriority.yfilter)
	|| ydk::is_set(dot1dportgarpjointime.yfilter)
	|| ydk::is_set(dot1dportgarpleavealltime.yfilter)
	|| ydk::is_set(dot1dportgarpleavetime.yfilter)
	|| ydk::is_set(dot1dportgmrpfailedregistrations.yfilter)
	|| ydk::is_set(dot1dportgmrplastpduorigin.yfilter)
	|| ydk::is_set(dot1dportgmrpstatus.yfilter)
	|| ydk::is_set(dot1dportnumtrafficclasses.yfilter)
	|| ydk::is_set(dot1dportrestrictedgroupregistration.yfilter)
	|| ydk::is_set(dot1qportacceptableframetypes.yfilter)
	|| ydk::is_set(dot1qportgvrpfailedregistrations.yfilter)
	|| ydk::is_set(dot1qportgvrplastpduorigin.yfilter)
	|| ydk::is_set(dot1qportgvrpstatus.yfilter)
	|| ydk::is_set(dot1qportingressfiltering.yfilter)
	|| ydk::is_set(dot1qportrestrictedvlanregistration.yfilter)
	|| ydk::is_set(dot1qpvid.yfilter);
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

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1dbaseportcircuit.is_set || is_set(dot1dbaseportcircuit.yfilter)) leaf_name_data.push_back(dot1dbaseportcircuit.get_name_leafdata());
    if (dot1dbaseportdelayexceededdiscards.is_set || is_set(dot1dbaseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(dot1dbaseportdelayexceededdiscards.get_name_leafdata());
    if (dot1dbaseportifindex.is_set || is_set(dot1dbaseportifindex.yfilter)) leaf_name_data.push_back(dot1dbaseportifindex.get_name_leafdata());
    if (dot1dbaseportmtuexceededdiscards.is_set || is_set(dot1dbaseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(dot1dbaseportmtuexceededdiscards.get_name_leafdata());
    if (dot1dportcapabilities.is_set || is_set(dot1dportcapabilities.yfilter)) leaf_name_data.push_back(dot1dportcapabilities.get_name_leafdata());
    if (dot1dportdefaultuserpriority.is_set || is_set(dot1dportdefaultuserpriority.yfilter)) leaf_name_data.push_back(dot1dportdefaultuserpriority.get_name_leafdata());
    if (dot1dportgarpjointime.is_set || is_set(dot1dportgarpjointime.yfilter)) leaf_name_data.push_back(dot1dportgarpjointime.get_name_leafdata());
    if (dot1dportgarpleavealltime.is_set || is_set(dot1dportgarpleavealltime.yfilter)) leaf_name_data.push_back(dot1dportgarpleavealltime.get_name_leafdata());
    if (dot1dportgarpleavetime.is_set || is_set(dot1dportgarpleavetime.yfilter)) leaf_name_data.push_back(dot1dportgarpleavetime.get_name_leafdata());
    if (dot1dportgmrpfailedregistrations.is_set || is_set(dot1dportgmrpfailedregistrations.yfilter)) leaf_name_data.push_back(dot1dportgmrpfailedregistrations.get_name_leafdata());
    if (dot1dportgmrplastpduorigin.is_set || is_set(dot1dportgmrplastpduorigin.yfilter)) leaf_name_data.push_back(dot1dportgmrplastpduorigin.get_name_leafdata());
    if (dot1dportgmrpstatus.is_set || is_set(dot1dportgmrpstatus.yfilter)) leaf_name_data.push_back(dot1dportgmrpstatus.get_name_leafdata());
    if (dot1dportnumtrafficclasses.is_set || is_set(dot1dportnumtrafficclasses.yfilter)) leaf_name_data.push_back(dot1dportnumtrafficclasses.get_name_leafdata());
    if (dot1dportrestrictedgroupregistration.is_set || is_set(dot1dportrestrictedgroupregistration.yfilter)) leaf_name_data.push_back(dot1dportrestrictedgroupregistration.get_name_leafdata());
    if (dot1qportacceptableframetypes.is_set || is_set(dot1qportacceptableframetypes.yfilter)) leaf_name_data.push_back(dot1qportacceptableframetypes.get_name_leafdata());
    if (dot1qportgvrpfailedregistrations.is_set || is_set(dot1qportgvrpfailedregistrations.yfilter)) leaf_name_data.push_back(dot1qportgvrpfailedregistrations.get_name_leafdata());
    if (dot1qportgvrplastpduorigin.is_set || is_set(dot1qportgvrplastpduorigin.yfilter)) leaf_name_data.push_back(dot1qportgvrplastpduorigin.get_name_leafdata());
    if (dot1qportgvrpstatus.is_set || is_set(dot1qportgvrpstatus.yfilter)) leaf_name_data.push_back(dot1qportgvrpstatus.get_name_leafdata());
    if (dot1qportingressfiltering.is_set || is_set(dot1qportingressfiltering.yfilter)) leaf_name_data.push_back(dot1qportingressfiltering.get_name_leafdata());
    if (dot1qportrestrictedvlanregistration.is_set || is_set(dot1qportrestrictedvlanregistration.yfilter)) leaf_name_data.push_back(dot1qportrestrictedvlanregistration.get_name_leafdata());
    if (dot1qpvid.is_set || is_set(dot1qpvid.yfilter)) leaf_name_data.push_back(dot1qpvid.get_name_leafdata());


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

void BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dBasePortCircuit")
    {
        dot1dbaseportcircuit = value;
        dot1dbaseportcircuit.value_namespace = name_space;
        dot1dbaseportcircuit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dBasePortDelayExceededDiscards")
    {
        dot1dbaseportdelayexceededdiscards = value;
        dot1dbaseportdelayexceededdiscards.value_namespace = name_space;
        dot1dbaseportdelayexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dBasePortIfIndex")
    {
        dot1dbaseportifindex = value;
        dot1dbaseportifindex.value_namespace = name_space;
        dot1dbaseportifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dBasePortMtuExceededDiscards")
    {
        dot1dbaseportmtuexceededdiscards = value;
        dot1dbaseportmtuexceededdiscards.value_namespace = name_space;
        dot1dbaseportmtuexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortCapabilities")
    {
        dot1dportcapabilities[value] = true;
    }
    if(value_path == "dot1dPortDefaultUserPriority")
    {
        dot1dportdefaultuserpriority = value;
        dot1dportdefaultuserpriority.value_namespace = name_space;
        dot1dportdefaultuserpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortGarpJoinTime")
    {
        dot1dportgarpjointime = value;
        dot1dportgarpjointime.value_namespace = name_space;
        dot1dportgarpjointime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortGarpLeaveAllTime")
    {
        dot1dportgarpleavealltime = value;
        dot1dportgarpleavealltime.value_namespace = name_space;
        dot1dportgarpleavealltime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortGarpLeaveTime")
    {
        dot1dportgarpleavetime = value;
        dot1dportgarpleavetime.value_namespace = name_space;
        dot1dportgarpleavetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortGmrpFailedRegistrations")
    {
        dot1dportgmrpfailedregistrations = value;
        dot1dportgmrpfailedregistrations.value_namespace = name_space;
        dot1dportgmrpfailedregistrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortGmrpLastPduOrigin")
    {
        dot1dportgmrplastpduorigin = value;
        dot1dportgmrplastpduorigin.value_namespace = name_space;
        dot1dportgmrplastpduorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortGmrpStatus")
    {
        dot1dportgmrpstatus = value;
        dot1dportgmrpstatus.value_namespace = name_space;
        dot1dportgmrpstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortNumTrafficClasses")
    {
        dot1dportnumtrafficclasses = value;
        dot1dportnumtrafficclasses.value_namespace = name_space;
        dot1dportnumtrafficclasses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dPortRestrictedGroupRegistration")
    {
        dot1dportrestrictedgroupregistration = value;
        dot1dportrestrictedgroupregistration.value_namespace = name_space;
        dot1dportrestrictedgroupregistration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qPortAcceptableFrameTypes")
    {
        dot1qportacceptableframetypes = value;
        dot1qportacceptableframetypes.value_namespace = name_space;
        dot1qportacceptableframetypes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qPortGvrpFailedRegistrations")
    {
        dot1qportgvrpfailedregistrations = value;
        dot1qportgvrpfailedregistrations.value_namespace = name_space;
        dot1qportgvrpfailedregistrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qPortGvrpLastPduOrigin")
    {
        dot1qportgvrplastpduorigin = value;
        dot1qportgvrplastpduorigin.value_namespace = name_space;
        dot1qportgvrplastpduorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qPortGvrpStatus")
    {
        dot1qportgvrpstatus = value;
        dot1qportgvrpstatus.value_namespace = name_space;
        dot1qportgvrpstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qPortIngressFiltering")
    {
        dot1qportingressfiltering = value;
        dot1qportingressfiltering.value_namespace = name_space;
        dot1qportingressfiltering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qPortRestrictedVlanRegistration")
    {
        dot1qportrestrictedvlanregistration = value;
        dot1qportrestrictedvlanregistration.value_namespace = name_space;
        dot1qportrestrictedvlanregistration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1qPvid")
    {
        dot1qpvid = value;
        dot1qpvid.value_namespace = name_space;
        dot1qpvid.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1dBasePortCircuit")
    {
        dot1dbaseportcircuit.yfilter = yfilter;
    }
    if(value_path == "dot1dBasePortDelayExceededDiscards")
    {
        dot1dbaseportdelayexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "dot1dBasePortIfIndex")
    {
        dot1dbaseportifindex.yfilter = yfilter;
    }
    if(value_path == "dot1dBasePortMtuExceededDiscards")
    {
        dot1dbaseportmtuexceededdiscards.yfilter = yfilter;
    }
    if(value_path == "dot1dPortCapabilities")
    {
        dot1dportcapabilities.yfilter = yfilter;
    }
    if(value_path == "dot1dPortDefaultUserPriority")
    {
        dot1dportdefaultuserpriority.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGarpJoinTime")
    {
        dot1dportgarpjointime.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGarpLeaveAllTime")
    {
        dot1dportgarpleavealltime.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGarpLeaveTime")
    {
        dot1dportgarpleavetime.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGmrpFailedRegistrations")
    {
        dot1dportgmrpfailedregistrations.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGmrpLastPduOrigin")
    {
        dot1dportgmrplastpduorigin.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGmrpStatus")
    {
        dot1dportgmrpstatus.yfilter = yfilter;
    }
    if(value_path == "dot1dPortNumTrafficClasses")
    {
        dot1dportnumtrafficclasses.yfilter = yfilter;
    }
    if(value_path == "dot1dPortRestrictedGroupRegistration")
    {
        dot1dportrestrictedgroupregistration.yfilter = yfilter;
    }
    if(value_path == "dot1qPortAcceptableFrameTypes")
    {
        dot1qportacceptableframetypes.yfilter = yfilter;
    }
    if(value_path == "dot1qPortGvrpFailedRegistrations")
    {
        dot1qportgvrpfailedregistrations.yfilter = yfilter;
    }
    if(value_path == "dot1qPortGvrpLastPduOrigin")
    {
        dot1qportgvrplastpduorigin.yfilter = yfilter;
    }
    if(value_path == "dot1qPortGvrpStatus")
    {
        dot1qportgvrpstatus.yfilter = yfilter;
    }
    if(value_path == "dot1qPortIngressFiltering")
    {
        dot1qportingressfiltering.yfilter = yfilter;
    }
    if(value_path == "dot1qPortRestrictedVlanRegistration")
    {
        dot1qportrestrictedvlanregistration.yfilter = yfilter;
    }
    if(value_path == "dot1qPvid")
    {
        dot1qpvid.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1dBasePortCircuit" || name == "dot1dBasePortDelayExceededDiscards" || name == "dot1dBasePortIfIndex" || name == "dot1dBasePortMtuExceededDiscards" || name == "dot1dPortCapabilities" || name == "dot1dPortDefaultUserPriority" || name == "dot1dPortGarpJoinTime" || name == "dot1dPortGarpLeaveAllTime" || name == "dot1dPortGarpLeaveTime" || name == "dot1dPortGmrpFailedRegistrations" || name == "dot1dPortGmrpLastPduOrigin" || name == "dot1dPortGmrpStatus" || name == "dot1dPortNumTrafficClasses" || name == "dot1dPortRestrictedGroupRegistration" || name == "dot1qPortAcceptableFrameTypes" || name == "dot1qPortGvrpFailedRegistrations" || name == "dot1qPortGvrpLastPduOrigin" || name == "dot1qPortGvrpStatus" || name == "dot1qPortIngressFiltering" || name == "dot1qPortRestrictedVlanRegistration" || name == "dot1qPvid")
        return true;
    return false;
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
    return is_set(yfilter);
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

void BridgeMib::Dot1Dstpporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeMib::Dot1Dstpporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeMib::Dot1Dstpporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStpPortEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dot1dstpport.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedbridge.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedcost.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedport.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedroot.yfilter)
	|| ydk::is_set(dot1dstpportenable.yfilter)
	|| ydk::is_set(dot1dstpportforwardtransitions.yfilter)
	|| ydk::is_set(dot1dstpportpathcost.yfilter)
	|| ydk::is_set(dot1dstpportpathcost32.yfilter)
	|| ydk::is_set(dot1dstpportpriority.yfilter)
	|| ydk::is_set(dot1dstpportstate.yfilter)
	|| ydk::is_set(stpxlongstpportpathcost.yfilter);
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

    if (dot1dstpport.is_set || is_set(dot1dstpport.yfilter)) leaf_name_data.push_back(dot1dstpport.get_name_leafdata());
    if (dot1dstpportdesignatedbridge.is_set || is_set(dot1dstpportdesignatedbridge.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedbridge.get_name_leafdata());
    if (dot1dstpportdesignatedcost.is_set || is_set(dot1dstpportdesignatedcost.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedcost.get_name_leafdata());
    if (dot1dstpportdesignatedport.is_set || is_set(dot1dstpportdesignatedport.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedport.get_name_leafdata());
    if (dot1dstpportdesignatedroot.is_set || is_set(dot1dstpportdesignatedroot.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedroot.get_name_leafdata());
    if (dot1dstpportenable.is_set || is_set(dot1dstpportenable.yfilter)) leaf_name_data.push_back(dot1dstpportenable.get_name_leafdata());
    if (dot1dstpportforwardtransitions.is_set || is_set(dot1dstpportforwardtransitions.yfilter)) leaf_name_data.push_back(dot1dstpportforwardtransitions.get_name_leafdata());
    if (dot1dstpportpathcost.is_set || is_set(dot1dstpportpathcost.yfilter)) leaf_name_data.push_back(dot1dstpportpathcost.get_name_leafdata());
    if (dot1dstpportpathcost32.is_set || is_set(dot1dstpportpathcost32.yfilter)) leaf_name_data.push_back(dot1dstpportpathcost32.get_name_leafdata());
    if (dot1dstpportpriority.is_set || is_set(dot1dstpportpriority.yfilter)) leaf_name_data.push_back(dot1dstpportpriority.get_name_leafdata());
    if (dot1dstpportstate.is_set || is_set(dot1dstpportstate.yfilter)) leaf_name_data.push_back(dot1dstpportstate.get_name_leafdata());
    if (stpxlongstpportpathcost.is_set || is_set(stpxlongstpportpathcost.yfilter)) leaf_name_data.push_back(stpxlongstpportpathcost.get_name_leafdata());


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

void BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dStpPort")
    {
        dot1dstpport = value;
        dot1dstpport.value_namespace = name_space;
        dot1dstpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedBridge")
    {
        dot1dstpportdesignatedbridge = value;
        dot1dstpportdesignatedbridge.value_namespace = name_space;
        dot1dstpportdesignatedbridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedCost")
    {
        dot1dstpportdesignatedcost = value;
        dot1dstpportdesignatedcost.value_namespace = name_space;
        dot1dstpportdesignatedcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedPort")
    {
        dot1dstpportdesignatedport = value;
        dot1dstpportdesignatedport.value_namespace = name_space;
        dot1dstpportdesignatedport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedRoot")
    {
        dot1dstpportdesignatedroot = value;
        dot1dstpportdesignatedroot.value_namespace = name_space;
        dot1dstpportdesignatedroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortEnable")
    {
        dot1dstpportenable = value;
        dot1dstpportenable.value_namespace = name_space;
        dot1dstpportenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortForwardTransitions")
    {
        dot1dstpportforwardtransitions = value;
        dot1dstpportforwardtransitions.value_namespace = name_space;
        dot1dstpportforwardtransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortPathCost")
    {
        dot1dstpportpathcost = value;
        dot1dstpportpathcost.value_namespace = name_space;
        dot1dstpportpathcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortPathCost32")
    {
        dot1dstpportpathcost32 = value;
        dot1dstpportpathcost32.value_namespace = name_space;
        dot1dstpportpathcost32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortPriority")
    {
        dot1dstpportpriority = value;
        dot1dstpportpriority.value_namespace = name_space;
        dot1dstpportpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortState")
    {
        dot1dstpportstate = value;
        dot1dstpportstate.value_namespace = name_space;
        dot1dstpportstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxLongStpPortPathCost")
    {
        stpxlongstpportpathcost = value;
        stpxlongstpportpathcost.value_namespace = name_space;
        stpxlongstpportpathcost.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dStpPort")
    {
        dot1dstpport.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedBridge")
    {
        dot1dstpportdesignatedbridge.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedCost")
    {
        dot1dstpportdesignatedcost.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedPort")
    {
        dot1dstpportdesignatedport.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedRoot")
    {
        dot1dstpportdesignatedroot.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortEnable")
    {
        dot1dstpportenable.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortForwardTransitions")
    {
        dot1dstpportforwardtransitions.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortPathCost")
    {
        dot1dstpportpathcost.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortPathCost32")
    {
        dot1dstpportpathcost32.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortPriority")
    {
        dot1dstpportpriority.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortState")
    {
        dot1dstpportstate.yfilter = yfilter;
    }
    if(value_path == "stpxLongStpPortPathCost")
    {
        stpxlongstpportpathcost.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStpPort" || name == "dot1dStpPortDesignatedBridge" || name == "dot1dStpPortDesignatedCost" || name == "dot1dStpPortDesignatedPort" || name == "dot1dStpPortDesignatedRoot" || name == "dot1dStpPortEnable" || name == "dot1dStpPortForwardTransitions" || name == "dot1dStpPortPathCost" || name == "dot1dStpPortPathCost32" || name == "dot1dStpPortPriority" || name == "dot1dStpPortState" || name == "stpxLongStpPortPathCost")
        return true;
    return false;
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
    return is_set(yfilter);
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

void BridgeMib::Dot1Dtpfdbtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeMib::Dot1Dtpfdbtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeMib::Dot1Dtpfdbtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpFdbEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dot1dtpfdbaddress.yfilter)
	|| ydk::is_set(dot1dtpfdbport.yfilter)
	|| ydk::is_set(dot1dtpfdbstatus.yfilter);
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

    if (dot1dtpfdbaddress.is_set || is_set(dot1dtpfdbaddress.yfilter)) leaf_name_data.push_back(dot1dtpfdbaddress.get_name_leafdata());
    if (dot1dtpfdbport.is_set || is_set(dot1dtpfdbport.yfilter)) leaf_name_data.push_back(dot1dtpfdbport.get_name_leafdata());
    if (dot1dtpfdbstatus.is_set || is_set(dot1dtpfdbstatus.yfilter)) leaf_name_data.push_back(dot1dtpfdbstatus.get_name_leafdata());


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

void BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dTpFdbAddress")
    {
        dot1dtpfdbaddress = value;
        dot1dtpfdbaddress.value_namespace = name_space;
        dot1dtpfdbaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpFdbPort")
    {
        dot1dtpfdbport = value;
        dot1dtpfdbport.value_namespace = name_space;
        dot1dtpfdbport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpFdbStatus")
    {
        dot1dtpfdbstatus = value;
        dot1dtpfdbstatus.value_namespace = name_space;
        dot1dtpfdbstatus.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dTpFdbAddress")
    {
        dot1dtpfdbaddress.yfilter = yfilter;
    }
    if(value_path == "dot1dTpFdbPort")
    {
        dot1dtpfdbport.yfilter = yfilter;
    }
    if(value_path == "dot1dTpFdbStatus")
    {
        dot1dtpfdbstatus.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpFdbAddress" || name == "dot1dTpFdbPort" || name == "dot1dTpFdbStatus")
        return true;
    return false;
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
    return is_set(yfilter);
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

void BridgeMib::Dot1Dtpporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeMib::Dot1Dtpporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeMib::Dot1Dtpporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpPortEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dot1dtpport.yfilter)
	|| ydk::is_set(dot1dtpportindiscards.yfilter)
	|| ydk::is_set(dot1dtpportinframes.yfilter)
	|| ydk::is_set(dot1dtpportmaxinfo.yfilter)
	|| ydk::is_set(dot1dtpportoutframes.yfilter);
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

    if (dot1dtpport.is_set || is_set(dot1dtpport.yfilter)) leaf_name_data.push_back(dot1dtpport.get_name_leafdata());
    if (dot1dtpportindiscards.is_set || is_set(dot1dtpportindiscards.yfilter)) leaf_name_data.push_back(dot1dtpportindiscards.get_name_leafdata());
    if (dot1dtpportinframes.is_set || is_set(dot1dtpportinframes.yfilter)) leaf_name_data.push_back(dot1dtpportinframes.get_name_leafdata());
    if (dot1dtpportmaxinfo.is_set || is_set(dot1dtpportmaxinfo.yfilter)) leaf_name_data.push_back(dot1dtpportmaxinfo.get_name_leafdata());
    if (dot1dtpportoutframes.is_set || is_set(dot1dtpportoutframes.yfilter)) leaf_name_data.push_back(dot1dtpportoutframes.get_name_leafdata());


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

void BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport = value;
        dot1dtpport.value_namespace = name_space;
        dot1dtpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortInDiscards")
    {
        dot1dtpportindiscards = value;
        dot1dtpportindiscards.value_namespace = name_space;
        dot1dtpportindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortInFrames")
    {
        dot1dtpportinframes = value;
        dot1dtpportinframes.value_namespace = name_space;
        dot1dtpportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortMaxInfo")
    {
        dot1dtpportmaxinfo = value;
        dot1dtpportmaxinfo.value_namespace = name_space;
        dot1dtpportmaxinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortOutFrames")
    {
        dot1dtpportoutframes = value;
        dot1dtpportoutframes.value_namespace = name_space;
        dot1dtpportoutframes.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortInDiscards")
    {
        dot1dtpportindiscards.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortInFrames")
    {
        dot1dtpportinframes.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortMaxInfo")
    {
        dot1dtpportmaxinfo.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortOutFrames")
    {
        dot1dtpportoutframes.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dtpporttable::Dot1Dtpportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpPort" || name == "dot1dTpPortInDiscards" || name == "dot1dTpPortInFrames" || name == "dot1dTpPortMaxInfo" || name == "dot1dTpPortOutFrames")
        return true;
    return false;
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
    return is_set(yfilter);
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

void BridgeMib::Dot1Dstatictable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeMib::Dot1Dstatictable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeMib::Dot1Dstatictable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStaticEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(dot1dstaticaddress.yfilter)
	|| ydk::is_set(dot1dstaticreceiveport.yfilter)
	|| ydk::is_set(dot1dstaticallowedtogoto.yfilter)
	|| ydk::is_set(dot1dstaticstatus.yfilter);
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

    if (dot1dstaticaddress.is_set || is_set(dot1dstaticaddress.yfilter)) leaf_name_data.push_back(dot1dstaticaddress.get_name_leafdata());
    if (dot1dstaticreceiveport.is_set || is_set(dot1dstaticreceiveport.yfilter)) leaf_name_data.push_back(dot1dstaticreceiveport.get_name_leafdata());
    if (dot1dstaticallowedtogoto.is_set || is_set(dot1dstaticallowedtogoto.yfilter)) leaf_name_data.push_back(dot1dstaticallowedtogoto.get_name_leafdata());
    if (dot1dstaticstatus.is_set || is_set(dot1dstaticstatus.yfilter)) leaf_name_data.push_back(dot1dstaticstatus.get_name_leafdata());


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

void BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dStaticAddress")
    {
        dot1dstaticaddress = value;
        dot1dstaticaddress.value_namespace = name_space;
        dot1dstaticaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStaticReceivePort")
    {
        dot1dstaticreceiveport = value;
        dot1dstaticreceiveport.value_namespace = name_space;
        dot1dstaticreceiveport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStaticAllowedToGoTo")
    {
        dot1dstaticallowedtogoto = value;
        dot1dstaticallowedtogoto.value_namespace = name_space;
        dot1dstaticallowedtogoto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStaticStatus")
    {
        dot1dstaticstatus = value;
        dot1dstaticstatus.value_namespace = name_space;
        dot1dstaticstatus.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dStaticAddress")
    {
        dot1dstaticaddress.yfilter = yfilter;
    }
    if(value_path == "dot1dStaticReceivePort")
    {
        dot1dstaticreceiveport.yfilter = yfilter;
    }
    if(value_path == "dot1dStaticAllowedToGoTo")
    {
        dot1dstaticallowedtogoto.yfilter = yfilter;
    }
    if(value_path == "dot1dStaticStatus")
    {
        dot1dstaticstatus.yfilter = yfilter;
    }
}

bool BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStaticAddress" || name == "dot1dStaticReceivePort" || name == "dot1dStaticAllowedToGoTo" || name == "dot1dStaticStatus")
        return true;
    return false;
}

const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1Dbasetype::unknown {1, "unknown"};
const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1Dbasetype::transparent_only {2, "transparent-only"};
const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1Dbasetype::sourceroute_only {3, "sourceroute-only"};
const Enum::YLeaf BridgeMib::Dot1Dbase::Dot1Dbasetype::srt {4, "srt"};

const Enum::YLeaf BridgeMib::Dot1Dstp::Dot1Dstpprotocolspecification::unknown {1, "unknown"};
const Enum::YLeaf BridgeMib::Dot1Dstp::Dot1Dstpprotocolspecification::decLb100 {2, "decLb100"};
const Enum::YLeaf BridgeMib::Dot1Dstp::Dot1Dstpprotocolspecification::ieee8021d {3, "ieee8021d"};

const Enum::YLeaf BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::Dot1Qportacceptableframetypes::admitAll {1, "admitAll"};
const Enum::YLeaf BridgeMib::Dot1Dbaseporttable::Dot1Dbaseportentry::Dot1Qportacceptableframetypes::admitOnlyVlanTagged {2, "admitOnlyVlanTagged"};

const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportstate::disabled {1, "disabled"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportstate::blocking {2, "blocking"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportstate::listening {3, "listening"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportstate::learning {4, "learning"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportstate::forwarding {5, "forwarding"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportstate::broken {6, "broken"};

const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportenable::enabled {1, "enabled"};
const Enum::YLeaf BridgeMib::Dot1Dstpporttable::Dot1Dstpportentry::Dot1Dstpportenable::disabled {2, "disabled"};

const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1Dtpfdbstatus::other {1, "other"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1Dtpfdbstatus::invalid {2, "invalid"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1Dtpfdbstatus::learned {3, "learned"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1Dtpfdbstatus::self {4, "self"};
const Enum::YLeaf BridgeMib::Dot1Dtpfdbtable::Dot1Dtpfdbentry::Dot1Dtpfdbstatus::mgmt {5, "mgmt"};

const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1Dstaticstatus::other {1, "other"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1Dstaticstatus::invalid {2, "invalid"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1Dstaticstatus::permanent {3, "permanent"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1Dstaticstatus::deleteOnReset {4, "deleteOnReset"};
const Enum::YLeaf BridgeMib::Dot1Dstatictable::Dot1Dstaticentry::Dot1Dstaticstatus::deleteOnTimeout {5, "deleteOnTimeout"};


}
}

