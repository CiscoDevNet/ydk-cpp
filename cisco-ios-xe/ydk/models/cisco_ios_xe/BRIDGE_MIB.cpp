
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "BRIDGE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace BRIDGE_MIB {

BRIDGEMIB::BRIDGEMIB()
    :
    dot1dbase(std::make_shared<BRIDGEMIB::Dot1dBase>())
    , dot1dstp(std::make_shared<BRIDGEMIB::Dot1dStp>())
    , dot1dtp(std::make_shared<BRIDGEMIB::Dot1dTp>())
    , dot1dbaseporttable(std::make_shared<BRIDGEMIB::Dot1dBasePortTable>())
    , dot1dstpporttable(std::make_shared<BRIDGEMIB::Dot1dStpPortTable>())
    , dot1dtpfdbtable(std::make_shared<BRIDGEMIB::Dot1dTpFdbTable>())
    , dot1dtpporttable(std::make_shared<BRIDGEMIB::Dot1dTpPortTable>())
    , dot1dstatictable(std::make_shared<BRIDGEMIB::Dot1dStaticTable>())
{
    dot1dbase->parent = this;
    dot1dstp->parent = this;
    dot1dtp->parent = this;
    dot1dbaseporttable->parent = this;
    dot1dstpporttable->parent = this;
    dot1dtpfdbtable->parent = this;
    dot1dtpporttable->parent = this;
    dot1dstatictable->parent = this;

    yang_name = "BRIDGE-MIB"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

BRIDGEMIB::~BRIDGEMIB()
{
}

bool BRIDGEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (dot1dbase !=  nullptr && dot1dbase->has_data())
	|| (dot1dstp !=  nullptr && dot1dstp->has_data())
	|| (dot1dtp !=  nullptr && dot1dtp->has_data())
	|| (dot1dbaseporttable !=  nullptr && dot1dbaseporttable->has_data())
	|| (dot1dstpporttable !=  nullptr && dot1dstpporttable->has_data())
	|| (dot1dtpfdbtable !=  nullptr && dot1dtpfdbtable->has_data())
	|| (dot1dtpporttable !=  nullptr && dot1dtpporttable->has_data())
	|| (dot1dstatictable !=  nullptr && dot1dstatictable->has_data());
}

bool BRIDGEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (dot1dbase !=  nullptr && dot1dbase->has_operation())
	|| (dot1dstp !=  nullptr && dot1dstp->has_operation())
	|| (dot1dtp !=  nullptr && dot1dtp->has_operation())
	|| (dot1dbaseporttable !=  nullptr && dot1dbaseporttable->has_operation())
	|| (dot1dstpporttable !=  nullptr && dot1dstpporttable->has_operation())
	|| (dot1dtpfdbtable !=  nullptr && dot1dtpfdbtable->has_operation())
	|| (dot1dtpporttable !=  nullptr && dot1dtpporttable->has_operation())
	|| (dot1dstatictable !=  nullptr && dot1dstatictable->has_operation());
}

std::string BRIDGEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dBase")
    {
        if(dot1dbase == nullptr)
        {
            dot1dbase = std::make_shared<BRIDGEMIB::Dot1dBase>();
        }
        return dot1dbase;
    }

    if(child_yang_name == "dot1dStp")
    {
        if(dot1dstp == nullptr)
        {
            dot1dstp = std::make_shared<BRIDGEMIB::Dot1dStp>();
        }
        return dot1dstp;
    }

    if(child_yang_name == "dot1dTp")
    {
        if(dot1dtp == nullptr)
        {
            dot1dtp = std::make_shared<BRIDGEMIB::Dot1dTp>();
        }
        return dot1dtp;
    }

    if(child_yang_name == "dot1dBasePortTable")
    {
        if(dot1dbaseporttable == nullptr)
        {
            dot1dbaseporttable = std::make_shared<BRIDGEMIB::Dot1dBasePortTable>();
        }
        return dot1dbaseporttable;
    }

    if(child_yang_name == "dot1dStpPortTable")
    {
        if(dot1dstpporttable == nullptr)
        {
            dot1dstpporttable = std::make_shared<BRIDGEMIB::Dot1dStpPortTable>();
        }
        return dot1dstpporttable;
    }

    if(child_yang_name == "dot1dTpFdbTable")
    {
        if(dot1dtpfdbtable == nullptr)
        {
            dot1dtpfdbtable = std::make_shared<BRIDGEMIB::Dot1dTpFdbTable>();
        }
        return dot1dtpfdbtable;
    }

    if(child_yang_name == "dot1dTpPortTable")
    {
        if(dot1dtpporttable == nullptr)
        {
            dot1dtpporttable = std::make_shared<BRIDGEMIB::Dot1dTpPortTable>();
        }
        return dot1dtpporttable;
    }

    if(child_yang_name == "dot1dStaticTable")
    {
        if(dot1dstatictable == nullptr)
        {
            dot1dstatictable = std::make_shared<BRIDGEMIB::Dot1dStaticTable>();
        }
        return dot1dstatictable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dot1dbase != nullptr)
    {
        children["dot1dBase"] = dot1dbase;
    }

    if(dot1dstp != nullptr)
    {
        children["dot1dStp"] = dot1dstp;
    }

    if(dot1dtp != nullptr)
    {
        children["dot1dTp"] = dot1dtp;
    }

    if(dot1dbaseporttable != nullptr)
    {
        children["dot1dBasePortTable"] = dot1dbaseporttable;
    }

    if(dot1dstpporttable != nullptr)
    {
        children["dot1dStpPortTable"] = dot1dstpporttable;
    }

    if(dot1dtpfdbtable != nullptr)
    {
        children["dot1dTpFdbTable"] = dot1dtpfdbtable;
    }

    if(dot1dtpporttable != nullptr)
    {
        children["dot1dTpPortTable"] = dot1dtpporttable;
    }

    if(dot1dstatictable != nullptr)
    {
        children["dot1dStaticTable"] = dot1dstatictable;
    }

    return children;
}

void BRIDGEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BRIDGEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BRIDGEMIB::clone_ptr() const
{
    return std::make_shared<BRIDGEMIB>();
}

std::string BRIDGEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BRIDGEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BRIDGEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BRIDGEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BRIDGEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBase" || name == "dot1dStp" || name == "dot1dTp" || name == "dot1dBasePortTable" || name == "dot1dStpPortTable" || name == "dot1dTpFdbTable" || name == "dot1dTpPortTable" || name == "dot1dStaticTable")
        return true;
    return false;
}

BRIDGEMIB::Dot1dBase::Dot1dBase()
    :
    dot1dbasebridgeaddress{YType::str, "dot1dBaseBridgeAddress"},
    dot1dbasenumports{YType::int32, "dot1dBaseNumPorts"},
    dot1dbasetype{YType::enumeration, "dot1dBaseType"}
{

    yang_name = "dot1dBase"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dBase::~Dot1dBase()
{
}

bool BRIDGEMIB::Dot1dBase::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbasebridgeaddress.is_set
	|| dot1dbasenumports.is_set
	|| dot1dbasetype.is_set;
}

bool BRIDGEMIB::Dot1dBase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbasebridgeaddress.yfilter)
	|| ydk::is_set(dot1dbasenumports.yfilter)
	|| ydk::is_set(dot1dbasetype.yfilter);
}

std::string BRIDGEMIB::Dot1dBase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dBase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dBase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dBase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbasebridgeaddress.is_set || is_set(dot1dbasebridgeaddress.yfilter)) leaf_name_data.push_back(dot1dbasebridgeaddress.get_name_leafdata());
    if (dot1dbasenumports.is_set || is_set(dot1dbasenumports.yfilter)) leaf_name_data.push_back(dot1dbasenumports.get_name_leafdata());
    if (dot1dbasetype.is_set || is_set(dot1dbasetype.yfilter)) leaf_name_data.push_back(dot1dbasetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dBase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dBase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dBase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BRIDGEMIB::Dot1dBase::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BRIDGEMIB::Dot1dBase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBaseBridgeAddress" || name == "dot1dBaseNumPorts" || name == "dot1dBaseType")
        return true;
    return false;
}

BRIDGEMIB::Dot1dStp::Dot1dStp()
    :
    dot1dstpprotocolspecification{YType::enumeration, "dot1dStpProtocolSpecification"},
    dot1dstppriority{YType::int32, "dot1dStpPriority"},
    dot1dstptimesincetopologychange{YType::uint32, "dot1dStpTimeSinceTopologyChange"},
    dot1dstptopchanges{YType::uint32, "dot1dStpTopChanges"},
    dot1dstpdesignatedroot{YType::str, "dot1dStpDesignatedRoot"},
    dot1dstprootcost{YType::int32, "dot1dStpRootCost"},
    dot1dstprootport{YType::int32, "dot1dStpRootPort"},
    dot1dstpmaxage{YType::int32, "dot1dStpMaxAge"},
    dot1dstphellotime{YType::int32, "dot1dStpHelloTime"},
    dot1dstpholdtime{YType::int32, "dot1dStpHoldTime"},
    dot1dstpforwarddelay{YType::int32, "dot1dStpForwardDelay"},
    dot1dstpbridgemaxage{YType::int32, "dot1dStpBridgeMaxAge"},
    dot1dstpbridgehellotime{YType::int32, "dot1dStpBridgeHelloTime"},
    dot1dstpbridgeforwarddelay{YType::int32, "dot1dStpBridgeForwardDelay"}
{

    yang_name = "dot1dStp"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dStp::~Dot1dStp()
{
}

bool BRIDGEMIB::Dot1dStp::has_data() const
{
    if (is_presence_container) return true;
    return dot1dstpprotocolspecification.is_set
	|| dot1dstppriority.is_set
	|| dot1dstptimesincetopologychange.is_set
	|| dot1dstptopchanges.is_set
	|| dot1dstpdesignatedroot.is_set
	|| dot1dstprootcost.is_set
	|| dot1dstprootport.is_set
	|| dot1dstpmaxage.is_set
	|| dot1dstphellotime.is_set
	|| dot1dstpholdtime.is_set
	|| dot1dstpforwarddelay.is_set
	|| dot1dstpbridgemaxage.is_set
	|| dot1dstpbridgehellotime.is_set
	|| dot1dstpbridgeforwarddelay.is_set;
}

bool BRIDGEMIB::Dot1dStp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dstpprotocolspecification.yfilter)
	|| ydk::is_set(dot1dstppriority.yfilter)
	|| ydk::is_set(dot1dstptimesincetopologychange.yfilter)
	|| ydk::is_set(dot1dstptopchanges.yfilter)
	|| ydk::is_set(dot1dstpdesignatedroot.yfilter)
	|| ydk::is_set(dot1dstprootcost.yfilter)
	|| ydk::is_set(dot1dstprootport.yfilter)
	|| ydk::is_set(dot1dstpmaxage.yfilter)
	|| ydk::is_set(dot1dstphellotime.yfilter)
	|| ydk::is_set(dot1dstpholdtime.yfilter)
	|| ydk::is_set(dot1dstpforwarddelay.yfilter)
	|| ydk::is_set(dot1dstpbridgemaxage.yfilter)
	|| ydk::is_set(dot1dstpbridgehellotime.yfilter)
	|| ydk::is_set(dot1dstpbridgeforwarddelay.yfilter);
}

std::string BRIDGEMIB::Dot1dStp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dStp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dStp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dstpprotocolspecification.is_set || is_set(dot1dstpprotocolspecification.yfilter)) leaf_name_data.push_back(dot1dstpprotocolspecification.get_name_leafdata());
    if (dot1dstppriority.is_set || is_set(dot1dstppriority.yfilter)) leaf_name_data.push_back(dot1dstppriority.get_name_leafdata());
    if (dot1dstptimesincetopologychange.is_set || is_set(dot1dstptimesincetopologychange.yfilter)) leaf_name_data.push_back(dot1dstptimesincetopologychange.get_name_leafdata());
    if (dot1dstptopchanges.is_set || is_set(dot1dstptopchanges.yfilter)) leaf_name_data.push_back(dot1dstptopchanges.get_name_leafdata());
    if (dot1dstpdesignatedroot.is_set || is_set(dot1dstpdesignatedroot.yfilter)) leaf_name_data.push_back(dot1dstpdesignatedroot.get_name_leafdata());
    if (dot1dstprootcost.is_set || is_set(dot1dstprootcost.yfilter)) leaf_name_data.push_back(dot1dstprootcost.get_name_leafdata());
    if (dot1dstprootport.is_set || is_set(dot1dstprootport.yfilter)) leaf_name_data.push_back(dot1dstprootport.get_name_leafdata());
    if (dot1dstpmaxage.is_set || is_set(dot1dstpmaxage.yfilter)) leaf_name_data.push_back(dot1dstpmaxage.get_name_leafdata());
    if (dot1dstphellotime.is_set || is_set(dot1dstphellotime.yfilter)) leaf_name_data.push_back(dot1dstphellotime.get_name_leafdata());
    if (dot1dstpholdtime.is_set || is_set(dot1dstpholdtime.yfilter)) leaf_name_data.push_back(dot1dstpholdtime.get_name_leafdata());
    if (dot1dstpforwarddelay.is_set || is_set(dot1dstpforwarddelay.yfilter)) leaf_name_data.push_back(dot1dstpforwarddelay.get_name_leafdata());
    if (dot1dstpbridgemaxage.is_set || is_set(dot1dstpbridgemaxage.yfilter)) leaf_name_data.push_back(dot1dstpbridgemaxage.get_name_leafdata());
    if (dot1dstpbridgehellotime.is_set || is_set(dot1dstpbridgehellotime.yfilter)) leaf_name_data.push_back(dot1dstpbridgehellotime.get_name_leafdata());
    if (dot1dstpbridgeforwarddelay.is_set || is_set(dot1dstpbridgeforwarddelay.yfilter)) leaf_name_data.push_back(dot1dstpbridgeforwarddelay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dStp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dStp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dStp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dStpProtocolSpecification")
    {
        dot1dstpprotocolspecification = value;
        dot1dstpprotocolspecification.value_namespace = name_space;
        dot1dstpprotocolspecification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPriority")
    {
        dot1dstppriority = value;
        dot1dstppriority.value_namespace = name_space;
        dot1dstppriority.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1dStpDesignatedRoot")
    {
        dot1dstpdesignatedroot = value;
        dot1dstpdesignatedroot.value_namespace = name_space;
        dot1dstpdesignatedroot.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1dStpMaxAge")
    {
        dot1dstpmaxage = value;
        dot1dstpmaxage.value_namespace = name_space;
        dot1dstpmaxage.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1dStpForwardDelay")
    {
        dot1dstpforwarddelay = value;
        dot1dstpforwarddelay.value_namespace = name_space;
        dot1dstpforwarddelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpBridgeMaxAge")
    {
        dot1dstpbridgemaxage = value;
        dot1dstpbridgemaxage.value_namespace = name_space;
        dot1dstpbridgemaxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpBridgeHelloTime")
    {
        dot1dstpbridgehellotime = value;
        dot1dstpbridgehellotime.value_namespace = name_space;
        dot1dstpbridgehellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpBridgeForwardDelay")
    {
        dot1dstpbridgeforwarddelay = value;
        dot1dstpbridgeforwarddelay.value_namespace = name_space;
        dot1dstpbridgeforwarddelay.value_namespace_prefix = name_space_prefix;
    }
}

void BRIDGEMIB::Dot1dStp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dStpProtocolSpecification")
    {
        dot1dstpprotocolspecification.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPriority")
    {
        dot1dstppriority.yfilter = yfilter;
    }
    if(value_path == "dot1dStpTimeSinceTopologyChange")
    {
        dot1dstptimesincetopologychange.yfilter = yfilter;
    }
    if(value_path == "dot1dStpTopChanges")
    {
        dot1dstptopchanges.yfilter = yfilter;
    }
    if(value_path == "dot1dStpDesignatedRoot")
    {
        dot1dstpdesignatedroot.yfilter = yfilter;
    }
    if(value_path == "dot1dStpRootCost")
    {
        dot1dstprootcost.yfilter = yfilter;
    }
    if(value_path == "dot1dStpRootPort")
    {
        dot1dstprootport.yfilter = yfilter;
    }
    if(value_path == "dot1dStpMaxAge")
    {
        dot1dstpmaxage.yfilter = yfilter;
    }
    if(value_path == "dot1dStpHelloTime")
    {
        dot1dstphellotime.yfilter = yfilter;
    }
    if(value_path == "dot1dStpHoldTime")
    {
        dot1dstpholdtime.yfilter = yfilter;
    }
    if(value_path == "dot1dStpForwardDelay")
    {
        dot1dstpforwarddelay.yfilter = yfilter;
    }
    if(value_path == "dot1dStpBridgeMaxAge")
    {
        dot1dstpbridgemaxage.yfilter = yfilter;
    }
    if(value_path == "dot1dStpBridgeHelloTime")
    {
        dot1dstpbridgehellotime.yfilter = yfilter;
    }
    if(value_path == "dot1dStpBridgeForwardDelay")
    {
        dot1dstpbridgeforwarddelay.yfilter = yfilter;
    }
}

bool BRIDGEMIB::Dot1dStp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStpProtocolSpecification" || name == "dot1dStpPriority" || name == "dot1dStpTimeSinceTopologyChange" || name == "dot1dStpTopChanges" || name == "dot1dStpDesignatedRoot" || name == "dot1dStpRootCost" || name == "dot1dStpRootPort" || name == "dot1dStpMaxAge" || name == "dot1dStpHelloTime" || name == "dot1dStpHoldTime" || name == "dot1dStpForwardDelay" || name == "dot1dStpBridgeMaxAge" || name == "dot1dStpBridgeHelloTime" || name == "dot1dStpBridgeForwardDelay")
        return true;
    return false;
}

BRIDGEMIB::Dot1dTp::Dot1dTp()
    :
    dot1dtplearnedentrydiscards{YType::uint32, "dot1dTpLearnedEntryDiscards"},
    dot1dtpagingtime{YType::int32, "dot1dTpAgingTime"}
{

    yang_name = "dot1dTp"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dTp::~Dot1dTp()
{
}

bool BRIDGEMIB::Dot1dTp::has_data() const
{
    if (is_presence_container) return true;
    return dot1dtplearnedentrydiscards.is_set
	|| dot1dtpagingtime.is_set;
}

bool BRIDGEMIB::Dot1dTp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dtplearnedentrydiscards.yfilter)
	|| ydk::is_set(dot1dtpagingtime.yfilter);
}

std::string BRIDGEMIB::Dot1dTp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dTp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dTp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtplearnedentrydiscards.is_set || is_set(dot1dtplearnedentrydiscards.yfilter)) leaf_name_data.push_back(dot1dtplearnedentrydiscards.get_name_leafdata());
    if (dot1dtpagingtime.is_set || is_set(dot1dtpagingtime.yfilter)) leaf_name_data.push_back(dot1dtpagingtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dTp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dTp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dTp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dTpLearnedEntryDiscards")
    {
        dot1dtplearnedentrydiscards = value;
        dot1dtplearnedentrydiscards.value_namespace = name_space;
        dot1dtplearnedentrydiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpAgingTime")
    {
        dot1dtpagingtime = value;
        dot1dtpagingtime.value_namespace = name_space;
        dot1dtpagingtime.value_namespace_prefix = name_space_prefix;
    }
}

void BRIDGEMIB::Dot1dTp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dTpLearnedEntryDiscards")
    {
        dot1dtplearnedentrydiscards.yfilter = yfilter;
    }
    if(value_path == "dot1dTpAgingTime")
    {
        dot1dtpagingtime.yfilter = yfilter;
    }
}

bool BRIDGEMIB::Dot1dTp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpLearnedEntryDiscards" || name == "dot1dTpAgingTime")
        return true;
    return false;
}

BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortTable()
    :
    dot1dbaseportentry(this, {"dot1dbaseport"})
{

    yang_name = "dot1dBasePortTable"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dBasePortTable::~Dot1dBasePortTable()
{
}

bool BRIDGEMIB::Dot1dBasePortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dbaseportentry.len(); index++)
    {
        if(dot1dbaseportentry[index]->has_data())
            return true;
    }
    return false;
}

bool BRIDGEMIB::Dot1dBasePortTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dbaseportentry.len(); index++)
    {
        if(dot1dbaseportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BRIDGEMIB::Dot1dBasePortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dBasePortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dBasePortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dBasePortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dBasePortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dBasePortEntry")
    {
        auto c = std::make_shared<BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry>();
        c->parent = this;
        dot1dbaseportentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dBasePortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dbaseportentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BRIDGEMIB::Dot1dBasePortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BRIDGEMIB::Dot1dBasePortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BRIDGEMIB::Dot1dBasePortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePortEntry")
        return true;
    return false;
}

BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::Dot1dBasePortEntry()
    :
    dot1dbaseport{YType::int32, "dot1dBasePort"},
    dot1dbaseportifindex{YType::int32, "dot1dBasePortIfIndex"},
    dot1dbaseportcircuit{YType::str, "dot1dBasePortCircuit"},
    dot1dbaseportdelayexceededdiscards{YType::uint32, "dot1dBasePortDelayExceededDiscards"},
    dot1dbaseportmtuexceededdiscards{YType::uint32, "dot1dBasePortMtuExceededDiscards"},
    dot1dportcapabilities{YType::bits, "P-BRIDGE-MIB:dot1dPortCapabilities"},
    dot1dportdefaultuserpriority{YType::int32, "P-BRIDGE-MIB:dot1dPortDefaultUserPriority"},
    dot1dportnumtrafficclasses{YType::int32, "P-BRIDGE-MIB:dot1dPortNumTrafficClasses"},
    dot1dportgarpjointime{YType::int32, "P-BRIDGE-MIB:dot1dPortGarpJoinTime"},
    dot1dportgarpleavetime{YType::int32, "P-BRIDGE-MIB:dot1dPortGarpLeaveTime"},
    dot1dportgarpleavealltime{YType::int32, "P-BRIDGE-MIB:dot1dPortGarpLeaveAllTime"},
    dot1dportgmrpstatus{YType::enumeration, "P-BRIDGE-MIB:dot1dPortGmrpStatus"},
    dot1dportgmrpfailedregistrations{YType::uint32, "P-BRIDGE-MIB:dot1dPortGmrpFailedRegistrations"},
    dot1dportgmrplastpduorigin{YType::str, "P-BRIDGE-MIB:dot1dPortGmrpLastPduOrigin"},
    dot1dportrestrictedgroupregistration{YType::boolean, "P-BRIDGE-MIB:dot1dPortRestrictedGroupRegistration"},
    dot1qpvid{YType::uint32, "Q-BRIDGE-MIB:dot1qPvid"},
    dot1qportacceptableframetypes{YType::enumeration, "Q-BRIDGE-MIB:dot1qPortAcceptableFrameTypes"},
    dot1qportingressfiltering{YType::boolean, "Q-BRIDGE-MIB:dot1qPortIngressFiltering"},
    dot1qportgvrpstatus{YType::enumeration, "Q-BRIDGE-MIB:dot1qPortGvrpStatus"},
    dot1qportgvrpfailedregistrations{YType::uint32, "Q-BRIDGE-MIB:dot1qPortGvrpFailedRegistrations"},
    dot1qportgvrplastpduorigin{YType::str, "Q-BRIDGE-MIB:dot1qPortGvrpLastPduOrigin"},
    dot1qportrestrictedvlanregistration{YType::boolean, "Q-BRIDGE-MIB:dot1qPortRestrictedVlanRegistration"}
{

    yang_name = "dot1dBasePortEntry"; yang_parent_name = "dot1dBasePortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::~Dot1dBasePortEntry()
{
}

bool BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dbaseport.is_set
	|| dot1dbaseportifindex.is_set
	|| dot1dbaseportcircuit.is_set
	|| dot1dbaseportdelayexceededdiscards.is_set
	|| dot1dbaseportmtuexceededdiscards.is_set
	|| dot1dportcapabilities.is_set
	|| dot1dportdefaultuserpriority.is_set
	|| dot1dportnumtrafficclasses.is_set
	|| dot1dportgarpjointime.is_set
	|| dot1dportgarpleavetime.is_set
	|| dot1dportgarpleavealltime.is_set
	|| dot1dportgmrpstatus.is_set
	|| dot1dportgmrpfailedregistrations.is_set
	|| dot1dportgmrplastpduorigin.is_set
	|| dot1dportrestrictedgroupregistration.is_set
	|| dot1qpvid.is_set
	|| dot1qportacceptableframetypes.is_set
	|| dot1qportingressfiltering.is_set
	|| dot1qportgvrpstatus.is_set
	|| dot1qportgvrpfailedregistrations.is_set
	|| dot1qportgvrplastpduorigin.is_set
	|| dot1qportrestrictedvlanregistration.is_set;
}

bool BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dbaseport.yfilter)
	|| ydk::is_set(dot1dbaseportifindex.yfilter)
	|| ydk::is_set(dot1dbaseportcircuit.yfilter)
	|| ydk::is_set(dot1dbaseportdelayexceededdiscards.yfilter)
	|| ydk::is_set(dot1dbaseportmtuexceededdiscards.yfilter)
	|| ydk::is_set(dot1dportcapabilities.yfilter)
	|| ydk::is_set(dot1dportdefaultuserpriority.yfilter)
	|| ydk::is_set(dot1dportnumtrafficclasses.yfilter)
	|| ydk::is_set(dot1dportgarpjointime.yfilter)
	|| ydk::is_set(dot1dportgarpleavetime.yfilter)
	|| ydk::is_set(dot1dportgarpleavealltime.yfilter)
	|| ydk::is_set(dot1dportgmrpstatus.yfilter)
	|| ydk::is_set(dot1dportgmrpfailedregistrations.yfilter)
	|| ydk::is_set(dot1dportgmrplastpduorigin.yfilter)
	|| ydk::is_set(dot1dportrestrictedgroupregistration.yfilter)
	|| ydk::is_set(dot1qpvid.yfilter)
	|| ydk::is_set(dot1qportacceptableframetypes.yfilter)
	|| ydk::is_set(dot1qportingressfiltering.yfilter)
	|| ydk::is_set(dot1qportgvrpstatus.yfilter)
	|| ydk::is_set(dot1qportgvrpfailedregistrations.yfilter)
	|| ydk::is_set(dot1qportgvrplastpduorigin.yfilter)
	|| ydk::is_set(dot1qportrestrictedvlanregistration.yfilter);
}

std::string BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dBasePortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dBasePortEntry";
    ADD_KEY_TOKEN(dot1dbaseport, "dot1dBasePort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dbaseport.is_set || is_set(dot1dbaseport.yfilter)) leaf_name_data.push_back(dot1dbaseport.get_name_leafdata());
    if (dot1dbaseportifindex.is_set || is_set(dot1dbaseportifindex.yfilter)) leaf_name_data.push_back(dot1dbaseportifindex.get_name_leafdata());
    if (dot1dbaseportcircuit.is_set || is_set(dot1dbaseportcircuit.yfilter)) leaf_name_data.push_back(dot1dbaseportcircuit.get_name_leafdata());
    if (dot1dbaseportdelayexceededdiscards.is_set || is_set(dot1dbaseportdelayexceededdiscards.yfilter)) leaf_name_data.push_back(dot1dbaseportdelayexceededdiscards.get_name_leafdata());
    if (dot1dbaseportmtuexceededdiscards.is_set || is_set(dot1dbaseportmtuexceededdiscards.yfilter)) leaf_name_data.push_back(dot1dbaseportmtuexceededdiscards.get_name_leafdata());
    if (dot1dportcapabilities.is_set || is_set(dot1dportcapabilities.yfilter)) leaf_name_data.push_back(dot1dportcapabilities.get_name_leafdata());
    if (dot1dportdefaultuserpriority.is_set || is_set(dot1dportdefaultuserpriority.yfilter)) leaf_name_data.push_back(dot1dportdefaultuserpriority.get_name_leafdata());
    if (dot1dportnumtrafficclasses.is_set || is_set(dot1dportnumtrafficclasses.yfilter)) leaf_name_data.push_back(dot1dportnumtrafficclasses.get_name_leafdata());
    if (dot1dportgarpjointime.is_set || is_set(dot1dportgarpjointime.yfilter)) leaf_name_data.push_back(dot1dportgarpjointime.get_name_leafdata());
    if (dot1dportgarpleavetime.is_set || is_set(dot1dportgarpleavetime.yfilter)) leaf_name_data.push_back(dot1dportgarpleavetime.get_name_leafdata());
    if (dot1dportgarpleavealltime.is_set || is_set(dot1dportgarpleavealltime.yfilter)) leaf_name_data.push_back(dot1dportgarpleavealltime.get_name_leafdata());
    if (dot1dportgmrpstatus.is_set || is_set(dot1dportgmrpstatus.yfilter)) leaf_name_data.push_back(dot1dportgmrpstatus.get_name_leafdata());
    if (dot1dportgmrpfailedregistrations.is_set || is_set(dot1dportgmrpfailedregistrations.yfilter)) leaf_name_data.push_back(dot1dportgmrpfailedregistrations.get_name_leafdata());
    if (dot1dportgmrplastpduorigin.is_set || is_set(dot1dportgmrplastpduorigin.yfilter)) leaf_name_data.push_back(dot1dportgmrplastpduorigin.get_name_leafdata());
    if (dot1dportrestrictedgroupregistration.is_set || is_set(dot1dportrestrictedgroupregistration.yfilter)) leaf_name_data.push_back(dot1dportrestrictedgroupregistration.get_name_leafdata());
    if (dot1qpvid.is_set || is_set(dot1qpvid.yfilter)) leaf_name_data.push_back(dot1qpvid.get_name_leafdata());
    if (dot1qportacceptableframetypes.is_set || is_set(dot1qportacceptableframetypes.yfilter)) leaf_name_data.push_back(dot1qportacceptableframetypes.get_name_leafdata());
    if (dot1qportingressfiltering.is_set || is_set(dot1qportingressfiltering.yfilter)) leaf_name_data.push_back(dot1qportingressfiltering.get_name_leafdata());
    if (dot1qportgvrpstatus.is_set || is_set(dot1qportgvrpstatus.yfilter)) leaf_name_data.push_back(dot1qportgvrpstatus.get_name_leafdata());
    if (dot1qportgvrpfailedregistrations.is_set || is_set(dot1qportgvrpfailedregistrations.yfilter)) leaf_name_data.push_back(dot1qportgvrpfailedregistrations.get_name_leafdata());
    if (dot1qportgvrplastpduorigin.is_set || is_set(dot1qportgvrplastpduorigin.yfilter)) leaf_name_data.push_back(dot1qportgvrplastpduorigin.get_name_leafdata());
    if (dot1qportrestrictedvlanregistration.is_set || is_set(dot1qportrestrictedvlanregistration.yfilter)) leaf_name_data.push_back(dot1qportrestrictedvlanregistration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport = value;
        dot1dbaseport.value_namespace = name_space;
        dot1dbaseport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dBasePortIfIndex")
    {
        dot1dbaseportifindex = value;
        dot1dbaseportifindex.value_namespace = name_space;
        dot1dbaseportifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1dBasePortMtuExceededDiscards")
    {
        dot1dbaseportmtuexceededdiscards = value;
        dot1dbaseportmtuexceededdiscards.value_namespace = name_space;
        dot1dbaseportmtuexceededdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortCapabilities")
    {
        dot1dportcapabilities[value] = true;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortDefaultUserPriority")
    {
        dot1dportdefaultuserpriority = value;
        dot1dportdefaultuserpriority.value_namespace = name_space;
        dot1dportdefaultuserpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortNumTrafficClasses")
    {
        dot1dportnumtrafficclasses = value;
        dot1dportnumtrafficclasses.value_namespace = name_space;
        dot1dportnumtrafficclasses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortGarpJoinTime")
    {
        dot1dportgarpjointime = value;
        dot1dportgarpjointime.value_namespace = name_space;
        dot1dportgarpjointime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortGarpLeaveTime")
    {
        dot1dportgarpleavetime = value;
        dot1dportgarpleavetime.value_namespace = name_space;
        dot1dportgarpleavetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortGarpLeaveAllTime")
    {
        dot1dportgarpleavealltime = value;
        dot1dportgarpleavealltime.value_namespace = name_space;
        dot1dportgarpleavealltime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortGmrpStatus")
    {
        dot1dportgmrpstatus = value;
        dot1dportgmrpstatus.value_namespace = name_space;
        dot1dportgmrpstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortGmrpFailedRegistrations")
    {
        dot1dportgmrpfailedregistrations = value;
        dot1dportgmrpfailedregistrations.value_namespace = name_space;
        dot1dportgmrpfailedregistrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortGmrpLastPduOrigin")
    {
        dot1dportgmrplastpduorigin = value;
        dot1dportgmrplastpduorigin.value_namespace = name_space;
        dot1dportgmrplastpduorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "P-BRIDGE-MIB:dot1dPortRestrictedGroupRegistration")
    {
        dot1dportrestrictedgroupregistration = value;
        dot1dportrestrictedgroupregistration.value_namespace = name_space;
        dot1dportrestrictedgroupregistration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Q-BRIDGE-MIB:dot1qPvid")
    {
        dot1qpvid = value;
        dot1qpvid.value_namespace = name_space;
        dot1qpvid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Q-BRIDGE-MIB:dot1qPortAcceptableFrameTypes")
    {
        dot1qportacceptableframetypes = value;
        dot1qportacceptableframetypes.value_namespace = name_space;
        dot1qportacceptableframetypes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Q-BRIDGE-MIB:dot1qPortIngressFiltering")
    {
        dot1qportingressfiltering = value;
        dot1qportingressfiltering.value_namespace = name_space;
        dot1qportingressfiltering.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Q-BRIDGE-MIB:dot1qPortGvrpStatus")
    {
        dot1qportgvrpstatus = value;
        dot1qportgvrpstatus.value_namespace = name_space;
        dot1qportgvrpstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Q-BRIDGE-MIB:dot1qPortGvrpFailedRegistrations")
    {
        dot1qportgvrpfailedregistrations = value;
        dot1qportgvrpfailedregistrations.value_namespace = name_space;
        dot1qportgvrpfailedregistrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Q-BRIDGE-MIB:dot1qPortGvrpLastPduOrigin")
    {
        dot1qportgvrplastpduorigin = value;
        dot1qportgvrplastpduorigin.value_namespace = name_space;
        dot1qportgvrplastpduorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Q-BRIDGE-MIB:dot1qPortRestrictedVlanRegistration")
    {
        dot1qportrestrictedvlanregistration = value;
        dot1qportrestrictedvlanregistration.value_namespace = name_space;
        dot1qportrestrictedvlanregistration.value_namespace_prefix = name_space_prefix;
    }
}

void BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dBasePort")
    {
        dot1dbaseport.yfilter = yfilter;
    }
    if(value_path == "dot1dBasePortIfIndex")
    {
        dot1dbaseportifindex.yfilter = yfilter;
    }
    if(value_path == "dot1dBasePortCircuit")
    {
        dot1dbaseportcircuit.yfilter = yfilter;
    }
    if(value_path == "dot1dBasePortDelayExceededDiscards")
    {
        dot1dbaseportdelayexceededdiscards.yfilter = yfilter;
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
    if(value_path == "dot1dPortNumTrafficClasses")
    {
        dot1dportnumtrafficclasses.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGarpJoinTime")
    {
        dot1dportgarpjointime.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGarpLeaveTime")
    {
        dot1dportgarpleavetime.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGarpLeaveAllTime")
    {
        dot1dportgarpleavealltime.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGmrpStatus")
    {
        dot1dportgmrpstatus.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGmrpFailedRegistrations")
    {
        dot1dportgmrpfailedregistrations.yfilter = yfilter;
    }
    if(value_path == "dot1dPortGmrpLastPduOrigin")
    {
        dot1dportgmrplastpduorigin.yfilter = yfilter;
    }
    if(value_path == "dot1dPortRestrictedGroupRegistration")
    {
        dot1dportrestrictedgroupregistration.yfilter = yfilter;
    }
    if(value_path == "dot1qPvid")
    {
        dot1qpvid.yfilter = yfilter;
    }
    if(value_path == "dot1qPortAcceptableFrameTypes")
    {
        dot1qportacceptableframetypes.yfilter = yfilter;
    }
    if(value_path == "dot1qPortIngressFiltering")
    {
        dot1qportingressfiltering.yfilter = yfilter;
    }
    if(value_path == "dot1qPortGvrpStatus")
    {
        dot1qportgvrpstatus.yfilter = yfilter;
    }
    if(value_path == "dot1qPortGvrpFailedRegistrations")
    {
        dot1qportgvrpfailedregistrations.yfilter = yfilter;
    }
    if(value_path == "dot1qPortGvrpLastPduOrigin")
    {
        dot1qportgvrplastpduorigin.yfilter = yfilter;
    }
    if(value_path == "dot1qPortRestrictedVlanRegistration")
    {
        dot1qportrestrictedvlanregistration.yfilter = yfilter;
    }
}

bool BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dBasePort" || name == "dot1dBasePortIfIndex" || name == "dot1dBasePortCircuit" || name == "dot1dBasePortDelayExceededDiscards" || name == "dot1dBasePortMtuExceededDiscards" || name == "dot1dPortCapabilities" || name == "dot1dPortDefaultUserPriority" || name == "dot1dPortNumTrafficClasses" || name == "dot1dPortGarpJoinTime" || name == "dot1dPortGarpLeaveTime" || name == "dot1dPortGarpLeaveAllTime" || name == "dot1dPortGmrpStatus" || name == "dot1dPortGmrpFailedRegistrations" || name == "dot1dPortGmrpLastPduOrigin" || name == "dot1dPortRestrictedGroupRegistration" || name == "dot1qPvid" || name == "dot1qPortAcceptableFrameTypes" || name == "dot1qPortIngressFiltering" || name == "dot1qPortGvrpStatus" || name == "dot1qPortGvrpFailedRegistrations" || name == "dot1qPortGvrpLastPduOrigin" || name == "dot1qPortRestrictedVlanRegistration")
        return true;
    return false;
}

BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortTable()
    :
    dot1dstpportentry(this, {"dot1dstpport"})
{

    yang_name = "dot1dStpPortTable"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dStpPortTable::~Dot1dStpPortTable()
{
}

bool BRIDGEMIB::Dot1dStpPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dstpportentry.len(); index++)
    {
        if(dot1dstpportentry[index]->has_data())
            return true;
    }
    return false;
}

bool BRIDGEMIB::Dot1dStpPortTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dstpportentry.len(); index++)
    {
        if(dot1dstpportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BRIDGEMIB::Dot1dStpPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dStpPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStpPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dStpPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dStpPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dStpPortEntry")
    {
        auto c = std::make_shared<BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry>();
        c->parent = this;
        dot1dstpportentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dStpPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dstpportentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BRIDGEMIB::Dot1dStpPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BRIDGEMIB::Dot1dStpPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BRIDGEMIB::Dot1dStpPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStpPortEntry")
        return true;
    return false;
}

BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortEntry()
    :
    dot1dstpport{YType::int32, "dot1dStpPort"},
    dot1dstpportpriority{YType::int32, "dot1dStpPortPriority"},
    dot1dstpportstate{YType::enumeration, "dot1dStpPortState"},
    dot1dstpportenable{YType::enumeration, "dot1dStpPortEnable"},
    dot1dstpportpathcost{YType::int32, "dot1dStpPortPathCost"},
    dot1dstpportdesignatedroot{YType::str, "dot1dStpPortDesignatedRoot"},
    dot1dstpportdesignatedcost{YType::int32, "dot1dStpPortDesignatedCost"},
    dot1dstpportdesignatedbridge{YType::str, "dot1dStpPortDesignatedBridge"},
    dot1dstpportdesignatedport{YType::str, "dot1dStpPortDesignatedPort"},
    dot1dstpportforwardtransitions{YType::uint32, "dot1dStpPortForwardTransitions"},
    dot1dstpportpathcost32{YType::int32, "dot1dStpPortPathCost32"},
    stpxlongstpportpathcost{YType::uint32, "CISCO-STP-EXTENSIONS-MIB:stpxLongStpPortPathCost"}
{

    yang_name = "dot1dStpPortEntry"; yang_parent_name = "dot1dStpPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::~Dot1dStpPortEntry()
{
}

bool BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dstpport.is_set
	|| dot1dstpportpriority.is_set
	|| dot1dstpportstate.is_set
	|| dot1dstpportenable.is_set
	|| dot1dstpportpathcost.is_set
	|| dot1dstpportdesignatedroot.is_set
	|| dot1dstpportdesignatedcost.is_set
	|| dot1dstpportdesignatedbridge.is_set
	|| dot1dstpportdesignatedport.is_set
	|| dot1dstpportforwardtransitions.is_set
	|| dot1dstpportpathcost32.is_set
	|| stpxlongstpportpathcost.is_set;
}

bool BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dstpport.yfilter)
	|| ydk::is_set(dot1dstpportpriority.yfilter)
	|| ydk::is_set(dot1dstpportstate.yfilter)
	|| ydk::is_set(dot1dstpportenable.yfilter)
	|| ydk::is_set(dot1dstpportpathcost.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedroot.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedcost.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedbridge.yfilter)
	|| ydk::is_set(dot1dstpportdesignatedport.yfilter)
	|| ydk::is_set(dot1dstpportforwardtransitions.yfilter)
	|| ydk::is_set(dot1dstpportpathcost32.yfilter)
	|| ydk::is_set(stpxlongstpportpathcost.yfilter);
}

std::string BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dStpPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStpPortEntry";
    ADD_KEY_TOKEN(dot1dstpport, "dot1dStpPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dstpport.is_set || is_set(dot1dstpport.yfilter)) leaf_name_data.push_back(dot1dstpport.get_name_leafdata());
    if (dot1dstpportpriority.is_set || is_set(dot1dstpportpriority.yfilter)) leaf_name_data.push_back(dot1dstpportpriority.get_name_leafdata());
    if (dot1dstpportstate.is_set || is_set(dot1dstpportstate.yfilter)) leaf_name_data.push_back(dot1dstpportstate.get_name_leafdata());
    if (dot1dstpportenable.is_set || is_set(dot1dstpportenable.yfilter)) leaf_name_data.push_back(dot1dstpportenable.get_name_leafdata());
    if (dot1dstpportpathcost.is_set || is_set(dot1dstpportpathcost.yfilter)) leaf_name_data.push_back(dot1dstpportpathcost.get_name_leafdata());
    if (dot1dstpportdesignatedroot.is_set || is_set(dot1dstpportdesignatedroot.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedroot.get_name_leafdata());
    if (dot1dstpportdesignatedcost.is_set || is_set(dot1dstpportdesignatedcost.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedcost.get_name_leafdata());
    if (dot1dstpportdesignatedbridge.is_set || is_set(dot1dstpportdesignatedbridge.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedbridge.get_name_leafdata());
    if (dot1dstpportdesignatedport.is_set || is_set(dot1dstpportdesignatedport.yfilter)) leaf_name_data.push_back(dot1dstpportdesignatedport.get_name_leafdata());
    if (dot1dstpportforwardtransitions.is_set || is_set(dot1dstpportforwardtransitions.yfilter)) leaf_name_data.push_back(dot1dstpportforwardtransitions.get_name_leafdata());
    if (dot1dstpportpathcost32.is_set || is_set(dot1dstpportpathcost32.yfilter)) leaf_name_data.push_back(dot1dstpportpathcost32.get_name_leafdata());
    if (stpxlongstpportpathcost.is_set || is_set(stpxlongstpportpathcost.yfilter)) leaf_name_data.push_back(stpxlongstpportpathcost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dStpPort")
    {
        dot1dstpport = value;
        dot1dstpport.value_namespace = name_space;
        dot1dstpport.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "dot1dStpPortEnable")
    {
        dot1dstpportenable = value;
        dot1dstpportenable.value_namespace = name_space;
        dot1dstpportenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortPathCost")
    {
        dot1dstpportpathcost = value;
        dot1dstpportpathcost.value_namespace = name_space;
        dot1dstpportpathcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedRoot")
    {
        dot1dstpportdesignatedroot = value;
        dot1dstpportdesignatedroot.value_namespace = name_space;
        dot1dstpportdesignatedroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedCost")
    {
        dot1dstpportdesignatedcost = value;
        dot1dstpportdesignatedcost.value_namespace = name_space;
        dot1dstpportdesignatedcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedBridge")
    {
        dot1dstpportdesignatedbridge = value;
        dot1dstpportdesignatedbridge.value_namespace = name_space;
        dot1dstpportdesignatedbridge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortDesignatedPort")
    {
        dot1dstpportdesignatedport = value;
        dot1dstpportdesignatedport.value_namespace = name_space;
        dot1dstpportdesignatedport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortForwardTransitions")
    {
        dot1dstpportforwardtransitions = value;
        dot1dstpportforwardtransitions.value_namespace = name_space;
        dot1dstpportforwardtransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dStpPortPathCost32")
    {
        dot1dstpportpathcost32 = value;
        dot1dstpportpathcost32.value_namespace = name_space;
        dot1dstpportpathcost32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-STP-EXTENSIONS-MIB:stpxLongStpPortPathCost")
    {
        stpxlongstpportpathcost = value;
        stpxlongstpportpathcost.value_namespace = name_space;
        stpxlongstpportpathcost.value_namespace_prefix = name_space_prefix;
    }
}

void BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dStpPort")
    {
        dot1dstpport.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortPriority")
    {
        dot1dstpportpriority.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortState")
    {
        dot1dstpportstate.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortEnable")
    {
        dot1dstpportenable.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortPathCost")
    {
        dot1dstpportpathcost.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedRoot")
    {
        dot1dstpportdesignatedroot.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedCost")
    {
        dot1dstpportdesignatedcost.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedBridge")
    {
        dot1dstpportdesignatedbridge.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortDesignatedPort")
    {
        dot1dstpportdesignatedport.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortForwardTransitions")
    {
        dot1dstpportforwardtransitions.yfilter = yfilter;
    }
    if(value_path == "dot1dStpPortPathCost32")
    {
        dot1dstpportpathcost32.yfilter = yfilter;
    }
    if(value_path == "stpxLongStpPortPathCost")
    {
        stpxlongstpportpathcost.yfilter = yfilter;
    }
}

bool BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStpPort" || name == "dot1dStpPortPriority" || name == "dot1dStpPortState" || name == "dot1dStpPortEnable" || name == "dot1dStpPortPathCost" || name == "dot1dStpPortDesignatedRoot" || name == "dot1dStpPortDesignatedCost" || name == "dot1dStpPortDesignatedBridge" || name == "dot1dStpPortDesignatedPort" || name == "dot1dStpPortForwardTransitions" || name == "dot1dStpPortPathCost32" || name == "stpxLongStpPortPathCost")
        return true;
    return false;
}

BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbTable()
    :
    dot1dtpfdbentry(this, {"dot1dtpfdbaddress"})
{

    yang_name = "dot1dTpFdbTable"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dTpFdbTable::~Dot1dTpFdbTable()
{
}

bool BRIDGEMIB::Dot1dTpFdbTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dtpfdbentry.len(); index++)
    {
        if(dot1dtpfdbentry[index]->has_data())
            return true;
    }
    return false;
}

bool BRIDGEMIB::Dot1dTpFdbTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtpfdbentry.len(); index++)
    {
        if(dot1dtpfdbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BRIDGEMIB::Dot1dTpFdbTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dTpFdbTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpFdbTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dTpFdbTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dTpFdbTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpFdbEntry")
    {
        auto c = std::make_shared<BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry>();
        c->parent = this;
        dot1dtpfdbentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dTpFdbTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dtpfdbentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BRIDGEMIB::Dot1dTpFdbTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BRIDGEMIB::Dot1dTpFdbTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BRIDGEMIB::Dot1dTpFdbTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpFdbEntry")
        return true;
    return false;
}

BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::Dot1dTpFdbEntry()
    :
    dot1dtpfdbaddress{YType::str, "dot1dTpFdbAddress"},
    dot1dtpfdbport{YType::int32, "dot1dTpFdbPort"},
    dot1dtpfdbstatus{YType::enumeration, "dot1dTpFdbStatus"}
{

    yang_name = "dot1dTpFdbEntry"; yang_parent_name = "dot1dTpFdbTable"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::~Dot1dTpFdbEntry()
{
}

bool BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dtpfdbaddress.is_set
	|| dot1dtpfdbport.is_set
	|| dot1dtpfdbstatus.is_set;
}

bool BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dtpfdbaddress.yfilter)
	|| ydk::is_set(dot1dtpfdbport.yfilter)
	|| ydk::is_set(dot1dtpfdbstatus.yfilter);
}

std::string BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dTpFdbTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpFdbEntry";
    ADD_KEY_TOKEN(dot1dtpfdbaddress, "dot1dTpFdbAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpfdbaddress.is_set || is_set(dot1dtpfdbaddress.yfilter)) leaf_name_data.push_back(dot1dtpfdbaddress.get_name_leafdata());
    if (dot1dtpfdbport.is_set || is_set(dot1dtpfdbport.yfilter)) leaf_name_data.push_back(dot1dtpfdbport.get_name_leafdata());
    if (dot1dtpfdbstatus.is_set || is_set(dot1dtpfdbstatus.yfilter)) leaf_name_data.push_back(dot1dtpfdbstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpFdbAddress" || name == "dot1dTpFdbPort" || name == "dot1dTpFdbStatus")
        return true;
    return false;
}

BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortTable()
    :
    dot1dtpportentry(this, {"dot1dtpport"})
{

    yang_name = "dot1dTpPortTable"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dTpPortTable::~Dot1dTpPortTable()
{
}

bool BRIDGEMIB::Dot1dTpPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dtpportentry.len(); index++)
    {
        if(dot1dtpportentry[index]->has_data())
            return true;
    }
    return false;
}

bool BRIDGEMIB::Dot1dTpPortTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dtpportentry.len(); index++)
    {
        if(dot1dtpportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BRIDGEMIB::Dot1dTpPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dTpPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dTpPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dTpPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dTpPortEntry")
    {
        auto c = std::make_shared<BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry>();
        c->parent = this;
        dot1dtpportentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dTpPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dtpportentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BRIDGEMIB::Dot1dTpPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BRIDGEMIB::Dot1dTpPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BRIDGEMIB::Dot1dTpPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpPortEntry")
        return true;
    return false;
}

BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::Dot1dTpPortEntry()
    :
    dot1dtpport{YType::int32, "dot1dTpPort"},
    dot1dtpportmaxinfo{YType::int32, "dot1dTpPortMaxInfo"},
    dot1dtpportinframes{YType::uint32, "dot1dTpPortInFrames"},
    dot1dtpportoutframes{YType::uint32, "dot1dTpPortOutFrames"},
    dot1dtpportindiscards{YType::uint32, "dot1dTpPortInDiscards"}
{

    yang_name = "dot1dTpPortEntry"; yang_parent_name = "dot1dTpPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::~Dot1dTpPortEntry()
{
}

bool BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dtpport.is_set
	|| dot1dtpportmaxinfo.is_set
	|| dot1dtpportinframes.is_set
	|| dot1dtpportoutframes.is_set
	|| dot1dtpportindiscards.is_set;
}

bool BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dtpport.yfilter)
	|| ydk::is_set(dot1dtpportmaxinfo.yfilter)
	|| ydk::is_set(dot1dtpportinframes.yfilter)
	|| ydk::is_set(dot1dtpportoutframes.yfilter)
	|| ydk::is_set(dot1dtpportindiscards.yfilter);
}

std::string BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dTpPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dTpPortEntry";
    ADD_KEY_TOKEN(dot1dtpport, "dot1dTpPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dtpport.is_set || is_set(dot1dtpport.yfilter)) leaf_name_data.push_back(dot1dtpport.get_name_leafdata());
    if (dot1dtpportmaxinfo.is_set || is_set(dot1dtpportmaxinfo.yfilter)) leaf_name_data.push_back(dot1dtpportmaxinfo.get_name_leafdata());
    if (dot1dtpportinframes.is_set || is_set(dot1dtpportinframes.yfilter)) leaf_name_data.push_back(dot1dtpportinframes.get_name_leafdata());
    if (dot1dtpportoutframes.is_set || is_set(dot1dtpportoutframes.yfilter)) leaf_name_data.push_back(dot1dtpportoutframes.get_name_leafdata());
    if (dot1dtpportindiscards.is_set || is_set(dot1dtpportindiscards.yfilter)) leaf_name_data.push_back(dot1dtpportindiscards.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport = value;
        dot1dtpport.value_namespace = name_space;
        dot1dtpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortMaxInfo")
    {
        dot1dtpportmaxinfo = value;
        dot1dtpportmaxinfo.value_namespace = name_space;
        dot1dtpportmaxinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortInFrames")
    {
        dot1dtpportinframes = value;
        dot1dtpportinframes.value_namespace = name_space;
        dot1dtpportinframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortOutFrames")
    {
        dot1dtpportoutframes = value;
        dot1dtpportoutframes.value_namespace = name_space;
        dot1dtpportoutframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1dTpPortInDiscards")
    {
        dot1dtpportindiscards = value;
        dot1dtpportindiscards.value_namespace = name_space;
        dot1dtpportindiscards.value_namespace_prefix = name_space_prefix;
    }
}

void BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1dTpPort")
    {
        dot1dtpport.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortMaxInfo")
    {
        dot1dtpportmaxinfo.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortInFrames")
    {
        dot1dtpportinframes.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortOutFrames")
    {
        dot1dtpportoutframes.yfilter = yfilter;
    }
    if(value_path == "dot1dTpPortInDiscards")
    {
        dot1dtpportindiscards.yfilter = yfilter;
    }
}

bool BRIDGEMIB::Dot1dTpPortTable::Dot1dTpPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dTpPort" || name == "dot1dTpPortMaxInfo" || name == "dot1dTpPortInFrames" || name == "dot1dTpPortOutFrames" || name == "dot1dTpPortInDiscards")
        return true;
    return false;
}

BRIDGEMIB::Dot1dStaticTable::Dot1dStaticTable()
    :
    dot1dstaticentry(this, {"dot1dstaticaddress", "dot1dstaticreceiveport"})
{

    yang_name = "dot1dStaticTable"; yang_parent_name = "BRIDGE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dStaticTable::~Dot1dStaticTable()
{
}

bool BRIDGEMIB::Dot1dStaticTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dot1dstaticentry.len(); index++)
    {
        if(dot1dstaticentry[index]->has_data())
            return true;
    }
    return false;
}

bool BRIDGEMIB::Dot1dStaticTable::has_operation() const
{
    for (std::size_t index=0; index<dot1dstaticentry.len(); index++)
    {
        if(dot1dstaticentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BRIDGEMIB::Dot1dStaticTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dStaticTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStaticTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dStaticTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dStaticTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1dStaticEntry")
    {
        auto c = std::make_shared<BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry>();
        c->parent = this;
        dot1dstaticentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dStaticTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dot1dstaticentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void BRIDGEMIB::Dot1dStaticTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BRIDGEMIB::Dot1dStaticTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BRIDGEMIB::Dot1dStaticTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStaticEntry")
        return true;
    return false;
}

BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::Dot1dStaticEntry()
    :
    dot1dstaticaddress{YType::str, "dot1dStaticAddress"},
    dot1dstaticreceiveport{YType::int32, "dot1dStaticReceivePort"},
    dot1dstaticallowedtogoto{YType::str, "dot1dStaticAllowedToGoTo"},
    dot1dstaticstatus{YType::enumeration, "dot1dStaticStatus"}
{

    yang_name = "dot1dStaticEntry"; yang_parent_name = "dot1dStaticTable"; is_top_level_class = false; has_list_ancestor = false; 
}

BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::~Dot1dStaticEntry()
{
}

bool BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::has_data() const
{
    if (is_presence_container) return true;
    return dot1dstaticaddress.is_set
	|| dot1dstaticreceiveport.is_set
	|| dot1dstaticallowedtogoto.is_set
	|| dot1dstaticstatus.is_set;
}

bool BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1dstaticaddress.yfilter)
	|| ydk::is_set(dot1dstaticreceiveport.yfilter)
	|| ydk::is_set(dot1dstaticallowedtogoto.yfilter)
	|| ydk::is_set(dot1dstaticstatus.yfilter);
}

std::string BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BRIDGE-MIB:BRIDGE-MIB/dot1dStaticTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1dStaticEntry";
    ADD_KEY_TOKEN(dot1dstaticaddress, "dot1dStaticAddress");
    ADD_KEY_TOKEN(dot1dstaticreceiveport, "dot1dStaticReceivePort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1dstaticaddress.is_set || is_set(dot1dstaticaddress.yfilter)) leaf_name_data.push_back(dot1dstaticaddress.get_name_leafdata());
    if (dot1dstaticreceiveport.is_set || is_set(dot1dstaticreceiveport.yfilter)) leaf_name_data.push_back(dot1dstaticreceiveport.get_name_leafdata());
    if (dot1dstaticallowedtogoto.is_set || is_set(dot1dstaticallowedtogoto.yfilter)) leaf_name_data.push_back(dot1dstaticallowedtogoto.get_name_leafdata());
    if (dot1dstaticstatus.is_set || is_set(dot1dstaticstatus.yfilter)) leaf_name_data.push_back(dot1dstaticstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1dStaticAddress" || name == "dot1dStaticReceivePort" || name == "dot1dStaticAllowedToGoTo" || name == "dot1dStaticStatus")
        return true;
    return false;
}

const Enum::YLeaf BRIDGEMIB::Dot1dBase::Dot1dBaseType::unknown {1, "unknown"};
const Enum::YLeaf BRIDGEMIB::Dot1dBase::Dot1dBaseType::transparent_only {2, "transparent-only"};
const Enum::YLeaf BRIDGEMIB::Dot1dBase::Dot1dBaseType::sourceroute_only {3, "sourceroute-only"};
const Enum::YLeaf BRIDGEMIB::Dot1dBase::Dot1dBaseType::srt {4, "srt"};

const Enum::YLeaf BRIDGEMIB::Dot1dStp::Dot1dStpProtocolSpecification::unknown {1, "unknown"};
const Enum::YLeaf BRIDGEMIB::Dot1dStp::Dot1dStpProtocolSpecification::decLb100 {2, "decLb100"};
const Enum::YLeaf BRIDGEMIB::Dot1dStp::Dot1dStpProtocolSpecification::ieee8021d {3, "ieee8021d"};

const Enum::YLeaf BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::Dot1qPortAcceptableFrameTypes::admitAll {1, "admitAll"};
const Enum::YLeaf BRIDGEMIB::Dot1dBasePortTable::Dot1dBasePortEntry::Dot1qPortAcceptableFrameTypes::admitOnlyVlanTagged {2, "admitOnlyVlanTagged"};

const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortState::disabled {1, "disabled"};
const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortState::blocking {2, "blocking"};
const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortState::listening {3, "listening"};
const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortState::learning {4, "learning"};
const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortState::forwarding {5, "forwarding"};
const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortState::broken {6, "broken"};

const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortEnable::enabled {1, "enabled"};
const Enum::YLeaf BRIDGEMIB::Dot1dStpPortTable::Dot1dStpPortEntry::Dot1dStpPortEnable::disabled {2, "disabled"};

const Enum::YLeaf BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::Dot1dTpFdbStatus::other {1, "other"};
const Enum::YLeaf BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::Dot1dTpFdbStatus::invalid {2, "invalid"};
const Enum::YLeaf BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::Dot1dTpFdbStatus::learned {3, "learned"};
const Enum::YLeaf BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::Dot1dTpFdbStatus::self {4, "self"};
const Enum::YLeaf BRIDGEMIB::Dot1dTpFdbTable::Dot1dTpFdbEntry::Dot1dTpFdbStatus::mgmt {5, "mgmt"};

const Enum::YLeaf BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::Dot1dStaticStatus::other {1, "other"};
const Enum::YLeaf BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::Dot1dStaticStatus::invalid {2, "invalid"};
const Enum::YLeaf BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::Dot1dStaticStatus::permanent {3, "permanent"};
const Enum::YLeaf BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::Dot1dStaticStatus::deleteOnReset {4, "deleteOnReset"};
const Enum::YLeaf BRIDGEMIB::Dot1dStaticTable::Dot1dStaticEntry::Dot1dStaticStatus::deleteOnTimeout {5, "deleteOnTimeout"};


}
}

