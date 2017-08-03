
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VLAN_MEMBERSHIP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VLAN_MEMBERSHIP_MIB {

CiscoVlanMembershipMib::CiscoVlanMembershipMib()
    :
    vmmembership(std::make_shared<CiscoVlanMembershipMib::Vmmembership>())
	,vmmembershipsummaryexttable(std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummaryexttable>())
	,vmmembershipsummarytable(std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummarytable>())
	,vmmembershiptable(std::make_shared<CiscoVlanMembershipMib::Vmmembershiptable>())
	,vmstatistics(std::make_shared<CiscoVlanMembershipMib::Vmstatistics>())
	,vmstatus(std::make_shared<CiscoVlanMembershipMib::Vmstatus>())
	,vmvmps(std::make_shared<CiscoVlanMembershipMib::Vmvmps>())
	,vmvmpstable(std::make_shared<CiscoVlanMembershipMib::Vmvmpstable>())
	,vmvoicevlantable(std::make_shared<CiscoVlanMembershipMib::Vmvoicevlantable>())
{
    vmmembership->parent = this;

    vmmembershipsummaryexttable->parent = this;

    vmmembershipsummarytable->parent = this;

    vmmembershiptable->parent = this;

    vmstatistics->parent = this;

    vmstatus->parent = this;

    vmvmps->parent = this;

    vmvmpstable->parent = this;

    vmvoicevlantable->parent = this;

    yang_name = "CISCO-VLAN-MEMBERSHIP-MIB"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::~CiscoVlanMembershipMib()
{
}

bool CiscoVlanMembershipMib::has_data() const
{
    return (vmmembership !=  nullptr && vmmembership->has_data())
	|| (vmmembershipsummaryexttable !=  nullptr && vmmembershipsummaryexttable->has_data())
	|| (vmmembershipsummarytable !=  nullptr && vmmembershipsummarytable->has_data())
	|| (vmmembershiptable !=  nullptr && vmmembershiptable->has_data())
	|| (vmstatistics !=  nullptr && vmstatistics->has_data())
	|| (vmstatus !=  nullptr && vmstatus->has_data())
	|| (vmvmps !=  nullptr && vmvmps->has_data())
	|| (vmvmpstable !=  nullptr && vmvmpstable->has_data())
	|| (vmvoicevlantable !=  nullptr && vmvoicevlantable->has_data());
}

bool CiscoVlanMembershipMib::has_operation() const
{
    return is_set(yfilter)
	|| (vmmembership !=  nullptr && vmmembership->has_operation())
	|| (vmmembershipsummaryexttable !=  nullptr && vmmembershipsummaryexttable->has_operation())
	|| (vmmembershipsummarytable !=  nullptr && vmmembershipsummarytable->has_operation())
	|| (vmmembershiptable !=  nullptr && vmmembershiptable->has_operation())
	|| (vmstatistics !=  nullptr && vmstatistics->has_operation())
	|| (vmstatus !=  nullptr && vmstatus->has_operation())
	|| (vmvmps !=  nullptr && vmvmps->has_operation())
	|| (vmvmpstable !=  nullptr && vmvmpstable->has_operation())
	|| (vmvoicevlantable !=  nullptr && vmvoicevlantable->has_operation());
}

std::string CiscoVlanMembershipMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoVlanMembershipMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmMembership")
    {
        if(vmmembership == nullptr)
        {
            vmmembership = std::make_shared<CiscoVlanMembershipMib::Vmmembership>();
        }
        return vmmembership;
    }

    if(child_yang_name == "vmMembershipSummaryExtTable")
    {
        if(vmmembershipsummaryexttable == nullptr)
        {
            vmmembershipsummaryexttable = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummaryexttable>();
        }
        return vmmembershipsummaryexttable;
    }

    if(child_yang_name == "vmMembershipSummaryTable")
    {
        if(vmmembershipsummarytable == nullptr)
        {
            vmmembershipsummarytable = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummarytable>();
        }
        return vmmembershipsummarytable;
    }

    if(child_yang_name == "vmMembershipTable")
    {
        if(vmmembershiptable == nullptr)
        {
            vmmembershiptable = std::make_shared<CiscoVlanMembershipMib::Vmmembershiptable>();
        }
        return vmmembershiptable;
    }

    if(child_yang_name == "vmStatistics")
    {
        if(vmstatistics == nullptr)
        {
            vmstatistics = std::make_shared<CiscoVlanMembershipMib::Vmstatistics>();
        }
        return vmstatistics;
    }

    if(child_yang_name == "vmStatus")
    {
        if(vmstatus == nullptr)
        {
            vmstatus = std::make_shared<CiscoVlanMembershipMib::Vmstatus>();
        }
        return vmstatus;
    }

    if(child_yang_name == "vmVmps")
    {
        if(vmvmps == nullptr)
        {
            vmvmps = std::make_shared<CiscoVlanMembershipMib::Vmvmps>();
        }
        return vmvmps;
    }

    if(child_yang_name == "vmVmpsTable")
    {
        if(vmvmpstable == nullptr)
        {
            vmvmpstable = std::make_shared<CiscoVlanMembershipMib::Vmvmpstable>();
        }
        return vmvmpstable;
    }

    if(child_yang_name == "vmVoiceVlanTable")
    {
        if(vmvoicevlantable == nullptr)
        {
            vmvoicevlantable = std::make_shared<CiscoVlanMembershipMib::Vmvoicevlantable>();
        }
        return vmvoicevlantable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vmmembership != nullptr)
    {
        children["vmMembership"] = vmmembership;
    }

    if(vmmembershipsummaryexttable != nullptr)
    {
        children["vmMembershipSummaryExtTable"] = vmmembershipsummaryexttable;
    }

    if(vmmembershipsummarytable != nullptr)
    {
        children["vmMembershipSummaryTable"] = vmmembershipsummarytable;
    }

    if(vmmembershiptable != nullptr)
    {
        children["vmMembershipTable"] = vmmembershiptable;
    }

    if(vmstatistics != nullptr)
    {
        children["vmStatistics"] = vmstatistics;
    }

    if(vmstatus != nullptr)
    {
        children["vmStatus"] = vmstatus;
    }

    if(vmvmps != nullptr)
    {
        children["vmVmps"] = vmvmps;
    }

    if(vmvmpstable != nullptr)
    {
        children["vmVmpsTable"] = vmvmpstable;
    }

    if(vmvoicevlantable != nullptr)
    {
        children["vmVoiceVlanTable"] = vmvoicevlantable;
    }

    return children;
}

void CiscoVlanMembershipMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVlanMembershipMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoVlanMembershipMib::clone_ptr() const
{
    return std::make_shared<CiscoVlanMembershipMib>();
}

std::string CiscoVlanMembershipMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoVlanMembershipMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoVlanMembershipMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoVlanMembershipMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoVlanMembershipMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembership" || name == "vmMembershipSummaryExtTable" || name == "vmMembershipSummaryTable" || name == "vmMembershipTable" || name == "vmStatistics" || name == "vmStatus" || name == "vmVmps" || name == "vmVmpsTable" || name == "vmVoiceVlanTable")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmvmps::Vmvmps()
    :
    vmvmpscurrent{YType::str, "vmVmpsCurrent"},
    vmvmpsreconfirm{YType::enumeration, "vmVmpsReconfirm"},
    vmvmpsreconfirminterval{YType::int32, "vmVmpsReconfirmInterval"},
    vmvmpsreconfirmresult{YType::enumeration, "vmVmpsReconfirmResult"},
    vmvmpsretries{YType::int32, "vmVmpsRetries"},
    vmvmpsvqpversion{YType::int32, "vmVmpsVQPVersion"}
{
    yang_name = "vmVmps"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmvmps::~Vmvmps()
{
}

bool CiscoVlanMembershipMib::Vmvmps::has_data() const
{
    return vmvmpscurrent.is_set
	|| vmvmpsreconfirm.is_set
	|| vmvmpsreconfirminterval.is_set
	|| vmvmpsreconfirmresult.is_set
	|| vmvmpsretries.is_set
	|| vmvmpsvqpversion.is_set;
}

bool CiscoVlanMembershipMib::Vmvmps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvmpscurrent.yfilter)
	|| ydk::is_set(vmvmpsreconfirm.yfilter)
	|| ydk::is_set(vmvmpsreconfirminterval.yfilter)
	|| ydk::is_set(vmvmpsreconfirmresult.yfilter)
	|| ydk::is_set(vmvmpsretries.yfilter)
	|| ydk::is_set(vmvmpsvqpversion.yfilter);
}

std::string CiscoVlanMembershipMib::Vmvmps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmps";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmvmps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvmpscurrent.is_set || is_set(vmvmpscurrent.yfilter)) leaf_name_data.push_back(vmvmpscurrent.get_name_leafdata());
    if (vmvmpsreconfirm.is_set || is_set(vmvmpsreconfirm.yfilter)) leaf_name_data.push_back(vmvmpsreconfirm.get_name_leafdata());
    if (vmvmpsreconfirminterval.is_set || is_set(vmvmpsreconfirminterval.yfilter)) leaf_name_data.push_back(vmvmpsreconfirminterval.get_name_leafdata());
    if (vmvmpsreconfirmresult.is_set || is_set(vmvmpsreconfirmresult.yfilter)) leaf_name_data.push_back(vmvmpsreconfirmresult.get_name_leafdata());
    if (vmvmpsretries.is_set || is_set(vmvmpsretries.yfilter)) leaf_name_data.push_back(vmvmpsretries.get_name_leafdata());
    if (vmvmpsvqpversion.is_set || is_set(vmvmpsvqpversion.yfilter)) leaf_name_data.push_back(vmvmpsvqpversion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmvmps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmvmps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmvmps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmVmpsCurrent")
    {
        vmvmpscurrent = value;
        vmvmpscurrent.value_namespace = name_space;
        vmvmpscurrent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsReconfirm")
    {
        vmvmpsreconfirm = value;
        vmvmpsreconfirm.value_namespace = name_space;
        vmvmpsreconfirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsReconfirmInterval")
    {
        vmvmpsreconfirminterval = value;
        vmvmpsreconfirminterval.value_namespace = name_space;
        vmvmpsreconfirminterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsReconfirmResult")
    {
        vmvmpsreconfirmresult = value;
        vmvmpsreconfirmresult.value_namespace = name_space;
        vmvmpsreconfirmresult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsRetries")
    {
        vmvmpsretries = value;
        vmvmpsretries.value_namespace = name_space;
        vmvmpsretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsVQPVersion")
    {
        vmvmpsvqpversion = value;
        vmvmpsvqpversion.value_namespace = name_space;
        vmvmpsvqpversion.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmvmps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmVmpsCurrent")
    {
        vmvmpscurrent.yfilter = yfilter;
    }
    if(value_path == "vmVmpsReconfirm")
    {
        vmvmpsreconfirm.yfilter = yfilter;
    }
    if(value_path == "vmVmpsReconfirmInterval")
    {
        vmvmpsreconfirminterval.yfilter = yfilter;
    }
    if(value_path == "vmVmpsReconfirmResult")
    {
        vmvmpsreconfirmresult.yfilter = yfilter;
    }
    if(value_path == "vmVmpsRetries")
    {
        vmvmpsretries.yfilter = yfilter;
    }
    if(value_path == "vmVmpsVQPVersion")
    {
        vmvmpsvqpversion.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmvmps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsCurrent" || name == "vmVmpsReconfirm" || name == "vmVmpsReconfirmInterval" || name == "vmVmpsReconfirmResult" || name == "vmVmpsRetries" || name == "vmVmpsVQPVersion")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmmembership::Vmmembership()
    :
    vmvlancreationmode{YType::enumeration, "vmVlanCreationMode"}
{
    yang_name = "vmMembership"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmmembership::~Vmmembership()
{
}

bool CiscoVlanMembershipMib::Vmmembership::has_data() const
{
    return vmvlancreationmode.is_set;
}

bool CiscoVlanMembershipMib::Vmmembership::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvlancreationmode.yfilter);
}

std::string CiscoVlanMembershipMib::Vmmembership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembership";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmmembership::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvlancreationmode.is_set || is_set(vmvlancreationmode.yfilter)) leaf_name_data.push_back(vmvlancreationmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmmembership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembership::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmmembership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmVlanCreationMode")
    {
        vmvlancreationmode = value;
        vmvlancreationmode.value_namespace = name_space;
        vmvlancreationmode.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmmembership::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmVlanCreationMode")
    {
        vmvlancreationmode.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmmembership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVlanCreationMode")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmstatistics::Vmstatistics()
    :
    vminsufficientresources{YType::uint32, "vmInsufficientResources"},
    vmvmpschanges{YType::uint32, "vmVmpsChanges"},
    vmvqpdenied{YType::uint32, "vmVQPDenied"},
    vmvqpqueries{YType::uint32, "vmVQPQueries"},
    vmvqpresponses{YType::uint32, "vmVQPResponses"},
    vmvqpshutdown{YType::uint32, "vmVQPShutdown"},
    vmvqpwrongdomain{YType::uint32, "vmVQPWrongDomain"},
    vmvqpwrongversion{YType::uint32, "vmVQPWrongVersion"}
{
    yang_name = "vmStatistics"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmstatistics::~Vmstatistics()
{
}

bool CiscoVlanMembershipMib::Vmstatistics::has_data() const
{
    return vminsufficientresources.is_set
	|| vmvmpschanges.is_set
	|| vmvqpdenied.is_set
	|| vmvqpqueries.is_set
	|| vmvqpresponses.is_set
	|| vmvqpshutdown.is_set
	|| vmvqpwrongdomain.is_set
	|| vmvqpwrongversion.is_set;
}

bool CiscoVlanMembershipMib::Vmstatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vminsufficientresources.yfilter)
	|| ydk::is_set(vmvmpschanges.yfilter)
	|| ydk::is_set(vmvqpdenied.yfilter)
	|| ydk::is_set(vmvqpqueries.yfilter)
	|| ydk::is_set(vmvqpresponses.yfilter)
	|| ydk::is_set(vmvqpshutdown.yfilter)
	|| ydk::is_set(vmvqpwrongdomain.yfilter)
	|| ydk::is_set(vmvqpwrongversion.yfilter);
}

std::string CiscoVlanMembershipMib::Vmstatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmStatistics";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmstatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vminsufficientresources.is_set || is_set(vminsufficientresources.yfilter)) leaf_name_data.push_back(vminsufficientresources.get_name_leafdata());
    if (vmvmpschanges.is_set || is_set(vmvmpschanges.yfilter)) leaf_name_data.push_back(vmvmpschanges.get_name_leafdata());
    if (vmvqpdenied.is_set || is_set(vmvqpdenied.yfilter)) leaf_name_data.push_back(vmvqpdenied.get_name_leafdata());
    if (vmvqpqueries.is_set || is_set(vmvqpqueries.yfilter)) leaf_name_data.push_back(vmvqpqueries.get_name_leafdata());
    if (vmvqpresponses.is_set || is_set(vmvqpresponses.yfilter)) leaf_name_data.push_back(vmvqpresponses.get_name_leafdata());
    if (vmvqpshutdown.is_set || is_set(vmvqpshutdown.yfilter)) leaf_name_data.push_back(vmvqpshutdown.get_name_leafdata());
    if (vmvqpwrongdomain.is_set || is_set(vmvqpwrongdomain.yfilter)) leaf_name_data.push_back(vmvqpwrongdomain.get_name_leafdata());
    if (vmvqpwrongversion.is_set || is_set(vmvqpwrongversion.yfilter)) leaf_name_data.push_back(vmvqpwrongversion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmstatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmstatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmstatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmInsufficientResources")
    {
        vminsufficientresources = value;
        vminsufficientresources.value_namespace = name_space;
        vminsufficientresources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsChanges")
    {
        vmvmpschanges = value;
        vmvmpschanges.value_namespace = name_space;
        vmvmpschanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPDenied")
    {
        vmvqpdenied = value;
        vmvqpdenied.value_namespace = name_space;
        vmvqpdenied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPQueries")
    {
        vmvqpqueries = value;
        vmvqpqueries.value_namespace = name_space;
        vmvqpqueries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPResponses")
    {
        vmvqpresponses = value;
        vmvqpresponses.value_namespace = name_space;
        vmvqpresponses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPShutdown")
    {
        vmvqpshutdown = value;
        vmvqpshutdown.value_namespace = name_space;
        vmvqpshutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPWrongDomain")
    {
        vmvqpwrongdomain = value;
        vmvqpwrongdomain.value_namespace = name_space;
        vmvqpwrongdomain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPWrongVersion")
    {
        vmvqpwrongversion = value;
        vmvqpwrongversion.value_namespace = name_space;
        vmvqpwrongversion.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmstatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmInsufficientResources")
    {
        vminsufficientresources.yfilter = yfilter;
    }
    if(value_path == "vmVmpsChanges")
    {
        vmvmpschanges.yfilter = yfilter;
    }
    if(value_path == "vmVQPDenied")
    {
        vmvqpdenied.yfilter = yfilter;
    }
    if(value_path == "vmVQPQueries")
    {
        vmvqpqueries.yfilter = yfilter;
    }
    if(value_path == "vmVQPResponses")
    {
        vmvqpresponses.yfilter = yfilter;
    }
    if(value_path == "vmVQPShutdown")
    {
        vmvqpshutdown.yfilter = yfilter;
    }
    if(value_path == "vmVQPWrongDomain")
    {
        vmvqpwrongdomain.yfilter = yfilter;
    }
    if(value_path == "vmVQPWrongVersion")
    {
        vmvqpwrongversion.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmstatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmInsufficientResources" || name == "vmVmpsChanges" || name == "vmVQPDenied" || name == "vmVQPQueries" || name == "vmVQPResponses" || name == "vmVQPShutdown" || name == "vmVQPWrongDomain" || name == "vmVQPWrongVersion")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmstatus::Vmstatus()
    :
    vmnotificationsenabled{YType::boolean, "vmNotificationsEnabled"}
{
    yang_name = "vmStatus"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmstatus::~Vmstatus()
{
}

bool CiscoVlanMembershipMib::Vmstatus::has_data() const
{
    return vmnotificationsenabled.is_set;
}

bool CiscoVlanMembershipMib::Vmstatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmnotificationsenabled.yfilter);
}

std::string CiscoVlanMembershipMib::Vmstatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmStatus";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmstatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmnotificationsenabled.is_set || is_set(vmnotificationsenabled.yfilter)) leaf_name_data.push_back(vmnotificationsenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmstatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmstatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmstatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmNotificationsEnabled")
    {
        vmnotificationsenabled = value;
        vmnotificationsenabled.value_namespace = name_space;
        vmnotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmstatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmNotificationsEnabled")
    {
        vmnotificationsenabled.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmstatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmNotificationsEnabled")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmvmpstable::Vmvmpstable()
{
    yang_name = "vmVmpsTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmvmpstable::~Vmvmpstable()
{
}

bool CiscoVlanMembershipMib::Vmvmpstable::has_data() const
{
    for (std::size_t index=0; index<vmvmpsentry.size(); index++)
    {
        if(vmvmpsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmvmpstable::has_operation() const
{
    for (std::size_t index=0; index<vmvmpsentry.size(); index++)
    {
        if(vmvmpsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoVlanMembershipMib::Vmvmpstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmpsTable";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmvmpstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmvmpstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmVmpsEntry")
    {
        for(auto const & c : vmvmpsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry>();
        c->parent = this;
        vmvmpsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmvmpstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmvmpsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmvmpstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVlanMembershipMib::Vmvmpstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVlanMembershipMib::Vmvmpstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsEntry")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::Vmvmpsentry()
    :
    vmvmpsipaddress{YType::str, "vmVmpsIpAddress"},
    vmvmpsprimary{YType::boolean, "vmVmpsPrimary"},
    vmvmpsrowstatus{YType::enumeration, "vmVmpsRowStatus"}
{
    yang_name = "vmVmpsEntry"; yang_parent_name = "vmVmpsTable";
}

CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::~Vmvmpsentry()
{
}

bool CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::has_data() const
{
    return vmvmpsipaddress.is_set
	|| vmvmpsprimary.is_set
	|| vmvmpsrowstatus.is_set;
}

bool CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvmpsipaddress.yfilter)
	|| ydk::is_set(vmvmpsprimary.yfilter)
	|| ydk::is_set(vmvmpsrowstatus.yfilter);
}

std::string CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmpsEntry" <<"[vmVmpsIpAddress='" <<vmvmpsipaddress <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmVmpsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvmpsipaddress.is_set || is_set(vmvmpsipaddress.yfilter)) leaf_name_data.push_back(vmvmpsipaddress.get_name_leafdata());
    if (vmvmpsprimary.is_set || is_set(vmvmpsprimary.yfilter)) leaf_name_data.push_back(vmvmpsprimary.get_name_leafdata());
    if (vmvmpsrowstatus.is_set || is_set(vmvmpsrowstatus.yfilter)) leaf_name_data.push_back(vmvmpsrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmVmpsIpAddress")
    {
        vmvmpsipaddress = value;
        vmvmpsipaddress.value_namespace = name_space;
        vmvmpsipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsPrimary")
    {
        vmvmpsprimary = value;
        vmvmpsprimary.value_namespace = name_space;
        vmvmpsprimary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsRowStatus")
    {
        vmvmpsrowstatus = value;
        vmvmpsrowstatus.value_namespace = name_space;
        vmvmpsrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmVmpsIpAddress")
    {
        vmvmpsipaddress.yfilter = yfilter;
    }
    if(value_path == "vmVmpsPrimary")
    {
        vmvmpsprimary.yfilter = yfilter;
    }
    if(value_path == "vmVmpsRowStatus")
    {
        vmvmpsrowstatus.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsIpAddress" || name == "vmVmpsPrimary" || name == "vmVmpsRowStatus")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummarytable()
{
    yang_name = "vmMembershipSummaryTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmmembershipsummarytable::~Vmmembershipsummarytable()
{
}

bool CiscoVlanMembershipMib::Vmmembershipsummarytable::has_data() const
{
    for (std::size_t index=0; index<vmmembershipsummaryentry.size(); index++)
    {
        if(vmmembershipsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmmembershipsummarytable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryentry.size(); index++)
    {
        if(vmmembershipsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoVlanMembershipMib::Vmmembershipsummarytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryTable";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmmembershipsummarytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmmembershipsummarytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmMembershipSummaryEntry")
    {
        for(auto const & c : vmmembershipsummaryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry>();
        c->parent = this;
        vmmembershipsummaryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershipsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipsummaryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmmembershipsummarytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVlanMembershipMib::Vmmembershipsummarytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVlanMembershipMib::Vmmembershipsummarytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryEntry")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::Vmmembershipsummaryentry()
    :
    vmmembershipsummaryvlanindex{YType::int32, "vmMembershipSummaryVlanIndex"},
    vmmembershipsummarymember2kports{YType::str, "vmMembershipSummaryMember2kPorts"},
    vmmembershipsummarymemberports{YType::str, "vmMembershipSummaryMemberPorts"}
{
    yang_name = "vmMembershipSummaryEntry"; yang_parent_name = "vmMembershipSummaryTable";
}

CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::~Vmmembershipsummaryentry()
{
}

bool CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::has_data() const
{
    return vmmembershipsummaryvlanindex.is_set
	|| vmmembershipsummarymember2kports.is_set
	|| vmmembershipsummarymemberports.is_set;
}

bool CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmmembershipsummaryvlanindex.yfilter)
	|| ydk::is_set(vmmembershipsummarymember2kports.yfilter)
	|| ydk::is_set(vmmembershipsummarymemberports.yfilter);
}

std::string CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryEntry" <<"[vmMembershipSummaryVlanIndex='" <<vmmembershipsummaryvlanindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipSummaryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.yfilter)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipsummarymember2kports.is_set || is_set(vmmembershipsummarymember2kports.yfilter)) leaf_name_data.push_back(vmmembershipsummarymember2kports.get_name_leafdata());
    if (vmmembershipsummarymemberports.is_set || is_set(vmmembershipsummarymemberports.yfilter)) leaf_name_data.push_back(vmmembershipsummarymemberports.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex = value;
        vmmembershipsummaryvlanindex.value_namespace = name_space;
        vmmembershipsummaryvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmMembershipSummaryMember2kPorts")
    {
        vmmembershipsummarymember2kports = value;
        vmmembershipsummarymember2kports.value_namespace = name_space;
        vmmembershipsummarymember2kports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmMembershipSummaryMemberPorts")
    {
        vmmembershipsummarymemberports = value;
        vmmembershipsummarymemberports.value_namespace = name_space;
        vmmembershipsummarymemberports.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex.yfilter = yfilter;
    }
    if(value_path == "vmMembershipSummaryMember2kPorts")
    {
        vmmembershipsummarymember2kports.yfilter = yfilter;
    }
    if(value_path == "vmMembershipSummaryMemberPorts")
    {
        vmmembershipsummarymemberports.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryVlanIndex" || name == "vmMembershipSummaryMember2kPorts" || name == "vmMembershipSummaryMemberPorts")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershiptable()
{
    yang_name = "vmMembershipTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmmembershiptable::~Vmmembershiptable()
{
}

bool CiscoVlanMembershipMib::Vmmembershiptable::has_data() const
{
    for (std::size_t index=0; index<vmmembershipentry.size(); index++)
    {
        if(vmmembershipentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmmembershiptable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipentry.size(); index++)
    {
        if(vmmembershipentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoVlanMembershipMib::Vmmembershiptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipTable";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmmembershiptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmmembershiptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmMembershipEntry")
    {
        for(auto const & c : vmmembershipentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry>();
        c->parent = this;
        vmmembershipentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershiptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmmembershiptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVlanMembershipMib::Vmmembershiptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVlanMembershipMib::Vmmembershiptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipEntry")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmmembershipentry()
    :
    ifindex{YType::str, "ifIndex"},
    vmportstatus{YType::enumeration, "vmPortStatus"},
    vmvlan{YType::int32, "vmVlan"},
    vmvlans{YType::str, "vmVlans"},
    vmvlans2k{YType::str, "vmVlans2k"},
    vmvlans3k{YType::str, "vmVlans3k"},
    vmvlans4k{YType::str, "vmVlans4k"},
    vmvlantype{YType::enumeration, "vmVlanType"}
{
    yang_name = "vmMembershipEntry"; yang_parent_name = "vmMembershipTable";
}

CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::~Vmmembershipentry()
{
}

bool CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::has_data() const
{
    return ifindex.is_set
	|| vmportstatus.is_set
	|| vmvlan.is_set
	|| vmvlans.is_set
	|| vmvlans2k.is_set
	|| vmvlans3k.is_set
	|| vmvlans4k.is_set
	|| vmvlantype.is_set;
}

bool CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(vmportstatus.yfilter)
	|| ydk::is_set(vmvlan.yfilter)
	|| ydk::is_set(vmvlans.yfilter)
	|| ydk::is_set(vmvlans2k.yfilter)
	|| ydk::is_set(vmvlans3k.yfilter)
	|| ydk::is_set(vmvlans4k.yfilter)
	|| ydk::is_set(vmvlantype.yfilter);
}

std::string CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (vmportstatus.is_set || is_set(vmportstatus.yfilter)) leaf_name_data.push_back(vmportstatus.get_name_leafdata());
    if (vmvlan.is_set || is_set(vmvlan.yfilter)) leaf_name_data.push_back(vmvlan.get_name_leafdata());
    if (vmvlans.is_set || is_set(vmvlans.yfilter)) leaf_name_data.push_back(vmvlans.get_name_leafdata());
    if (vmvlans2k.is_set || is_set(vmvlans2k.yfilter)) leaf_name_data.push_back(vmvlans2k.get_name_leafdata());
    if (vmvlans3k.is_set || is_set(vmvlans3k.yfilter)) leaf_name_data.push_back(vmvlans3k.get_name_leafdata());
    if (vmvlans4k.is_set || is_set(vmvlans4k.yfilter)) leaf_name_data.push_back(vmvlans4k.get_name_leafdata());
    if (vmvlantype.is_set || is_set(vmvlantype.yfilter)) leaf_name_data.push_back(vmvlantype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmPortStatus")
    {
        vmportstatus = value;
        vmportstatus.value_namespace = name_space;
        vmportstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlan")
    {
        vmvlan = value;
        vmvlan.value_namespace = name_space;
        vmvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlans")
    {
        vmvlans = value;
        vmvlans.value_namespace = name_space;
        vmvlans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlans2k")
    {
        vmvlans2k = value;
        vmvlans2k.value_namespace = name_space;
        vmvlans2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlans3k")
    {
        vmvlans3k = value;
        vmvlans3k.value_namespace = name_space;
        vmvlans3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlans4k")
    {
        vmvlans4k = value;
        vmvlans4k.value_namespace = name_space;
        vmvlans4k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlanType")
    {
        vmvlantype = value;
        vmvlantype.value_namespace = name_space;
        vmvlantype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "vmPortStatus")
    {
        vmportstatus.yfilter = yfilter;
    }
    if(value_path == "vmVlan")
    {
        vmvlan.yfilter = yfilter;
    }
    if(value_path == "vmVlans")
    {
        vmvlans.yfilter = yfilter;
    }
    if(value_path == "vmVlans2k")
    {
        vmvlans2k.yfilter = yfilter;
    }
    if(value_path == "vmVlans3k")
    {
        vmvlans3k.yfilter = yfilter;
    }
    if(value_path == "vmVlans4k")
    {
        vmvlans4k.yfilter = yfilter;
    }
    if(value_path == "vmVlanType")
    {
        vmvlantype.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "vmPortStatus" || name == "vmVlan" || name == "vmVlans" || name == "vmVlans2k" || name == "vmVlans3k" || name == "vmVlans4k" || name == "vmVlanType")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryexttable()
{
    yang_name = "vmMembershipSummaryExtTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmmembershipsummaryexttable::~Vmmembershipsummaryexttable()
{
}

bool CiscoVlanMembershipMib::Vmmembershipsummaryexttable::has_data() const
{
    for (std::size_t index=0; index<vmmembershipsummaryextentry.size(); index++)
    {
        if(vmmembershipsummaryextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmmembershipsummaryexttable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryextentry.size(); index++)
    {
        if(vmmembershipsummaryextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoVlanMembershipMib::Vmmembershipsummaryexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryExtTable";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmmembershipsummaryexttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmmembershipsummaryexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmMembershipSummaryExtEntry")
    {
        for(auto const & c : vmmembershipsummaryextentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry>();
        c->parent = this;
        vmmembershipsummaryextentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershipsummaryexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipsummaryextentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmmembershipsummaryexttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVlanMembershipMib::Vmmembershipsummaryexttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVlanMembershipMib::Vmmembershipsummaryexttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryExtEntry")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::Vmmembershipsummaryextentry()
    :
    vmmembershipsummaryvlanindex{YType::str, "vmMembershipSummaryVlanIndex"},
    vmmembershipportrangeindex{YType::enumeration, "vmMembershipPortRangeIndex"},
    vmmembershipsummaryextports{YType::str, "vmMembershipSummaryExtPorts"}
{
    yang_name = "vmMembershipSummaryExtEntry"; yang_parent_name = "vmMembershipSummaryExtTable";
}

CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::~Vmmembershipsummaryextentry()
{
}

bool CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::has_data() const
{
    return vmmembershipsummaryvlanindex.is_set
	|| vmmembershipportrangeindex.is_set
	|| vmmembershipsummaryextports.is_set;
}

bool CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmmembershipsummaryvlanindex.yfilter)
	|| ydk::is_set(vmmembershipportrangeindex.yfilter)
	|| ydk::is_set(vmmembershipsummaryextports.yfilter);
}

std::string CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryExtEntry" <<"[vmMembershipSummaryVlanIndex='" <<vmmembershipsummaryvlanindex <<"']" <<"[vmMembershipPortRangeIndex='" <<vmmembershipportrangeindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipSummaryExtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.yfilter)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipportrangeindex.is_set || is_set(vmmembershipportrangeindex.yfilter)) leaf_name_data.push_back(vmmembershipportrangeindex.get_name_leafdata());
    if (vmmembershipsummaryextports.is_set || is_set(vmmembershipsummaryextports.yfilter)) leaf_name_data.push_back(vmmembershipsummaryextports.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex = value;
        vmmembershipsummaryvlanindex.value_namespace = name_space;
        vmmembershipsummaryvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmMembershipPortRangeIndex")
    {
        vmmembershipportrangeindex = value;
        vmmembershipportrangeindex.value_namespace = name_space;
        vmmembershipportrangeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmMembershipSummaryExtPorts")
    {
        vmmembershipsummaryextports = value;
        vmmembershipsummaryextports.value_namespace = name_space;
        vmmembershipsummaryextports.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex.yfilter = yfilter;
    }
    if(value_path == "vmMembershipPortRangeIndex")
    {
        vmmembershipportrangeindex.yfilter = yfilter;
    }
    if(value_path == "vmMembershipSummaryExtPorts")
    {
        vmmembershipsummaryextports.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryVlanIndex" || name == "vmMembershipPortRangeIndex" || name == "vmMembershipSummaryExtPorts")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlantable()
{
    yang_name = "vmVoiceVlanTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::Vmvoicevlantable::~Vmvoicevlantable()
{
}

bool CiscoVlanMembershipMib::Vmvoicevlantable::has_data() const
{
    for (std::size_t index=0; index<vmvoicevlanentry.size(); index++)
    {
        if(vmvoicevlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmvoicevlantable::has_operation() const
{
    for (std::size_t index=0; index<vmvoicevlanentry.size(); index++)
    {
        if(vmvoicevlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoVlanMembershipMib::Vmvoicevlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVoiceVlanTable";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmvoicevlantable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmvoicevlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmVoiceVlanEntry")
    {
        for(auto const & c : vmvoicevlanentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry>();
        c->parent = this;
        vmvoicevlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmvoicevlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmvoicevlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmvoicevlantable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoVlanMembershipMib::Vmvoicevlantable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoVlanMembershipMib::Vmvoicevlantable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVoiceVlanEntry")
        return true;
    return false;
}

CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::Vmvoicevlanentry()
    :
    ifindex{YType::str, "ifIndex"},
    vmvoicevlancdpverifyenable{YType::boolean, "vmVoiceVlanCdpVerifyEnable"},
    vmvoicevlanid{YType::int32, "vmVoiceVlanId"}
{
    yang_name = "vmVoiceVlanEntry"; yang_parent_name = "vmVoiceVlanTable";
}

CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::~Vmvoicevlanentry()
{
}

bool CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::has_data() const
{
    return ifindex.is_set
	|| vmvoicevlancdpverifyenable.is_set
	|| vmvoicevlanid.is_set;
}

bool CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(vmvoicevlancdpverifyenable.yfilter)
	|| ydk::is_set(vmvoicevlanid.yfilter);
}

std::string CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVoiceVlanEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmVoiceVlanTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (vmvoicevlancdpverifyenable.is_set || is_set(vmvoicevlancdpverifyenable.yfilter)) leaf_name_data.push_back(vmvoicevlancdpverifyenable.get_name_leafdata());
    if (vmvoicevlanid.is_set || is_set(vmvoicevlanid.yfilter)) leaf_name_data.push_back(vmvoicevlanid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVoiceVlanCdpVerifyEnable")
    {
        vmvoicevlancdpverifyenable = value;
        vmvoicevlancdpverifyenable.value_namespace = name_space;
        vmvoicevlancdpverifyenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVoiceVlanId")
    {
        vmvoicevlanid = value;
        vmvoicevlanid.value_namespace = name_space;
        vmvoicevlanid.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "vmVoiceVlanCdpVerifyEnable")
    {
        vmvoicevlancdpverifyenable.yfilter = yfilter;
    }
    if(value_path == "vmVoiceVlanId")
    {
        vmvoicevlanid.yfilter = yfilter;
    }
}

bool CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "vmVoiceVlanCdpVerifyEnable" || name == "vmVoiceVlanId")
        return true;
    return false;
}

const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirm::ready {1, "ready"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirm::execute {2, "execute"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult::other {1, "other"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult::inProgress {2, "inProgress"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult::success {3, "success"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult::noResponse {4, "noResponse"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult::noVmps {5, "noVmps"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult::noDynamicPort {6, "noDynamicPort"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::Vmvmpsreconfirmresult::noHostConnected {7, "noHostConnected"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmmembership::Vmvlancreationmode::automatic {1, "automatic"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembership::Vmvlancreationmode::manual {2, "manual"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmvlantype::static_ {1, "static"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmvlantype::dynamic {2, "dynamic"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmvlantype::multiVlan {3, "multiVlan"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmportstatus::inactive {1, "inactive"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmportstatus::active {2, "active"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::Vmportstatus::shutdown {3, "shutdown"};


}
}

