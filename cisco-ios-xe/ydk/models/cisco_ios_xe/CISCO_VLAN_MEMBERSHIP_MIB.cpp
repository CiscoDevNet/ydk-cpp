
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VLAN_MEMBERSHIP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_VLAN_MEMBERSHIP_MIB {

CISCOVLANMEMBERSHIPMIB::CISCOVLANMEMBERSHIPMIB()
    :
    vmvmps(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVmps>())
    , vmmembership(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembership>())
    , vmstatistics(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmStatistics>())
    , vmstatus(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmStatus>())
    , vmvmpstable(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVmpsTable>())
    , vmmembershipsummarytable(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable>())
    , vmmembershiptable(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipTable>())
    , vmmembershipsummaryexttable(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable>())
    , vmvoicevlantable(std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable>())
{
    vmvmps->parent = this;
    vmmembership->parent = this;
    vmstatistics->parent = this;
    vmstatus->parent = this;
    vmvmpstable->parent = this;
    vmmembershipsummarytable->parent = this;
    vmmembershiptable->parent = this;
    vmmembershipsummaryexttable->parent = this;
    vmvoicevlantable->parent = this;

    yang_name = "CISCO-VLAN-MEMBERSHIP-MIB"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::~CISCOVLANMEMBERSHIPMIB()
{
}

bool CISCOVLANMEMBERSHIPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (vmvmps !=  nullptr && vmvmps->has_data())
	|| (vmmembership !=  nullptr && vmmembership->has_data())
	|| (vmstatistics !=  nullptr && vmstatistics->has_data())
	|| (vmstatus !=  nullptr && vmstatus->has_data())
	|| (vmvmpstable !=  nullptr && vmvmpstable->has_data())
	|| (vmmembershipsummarytable !=  nullptr && vmmembershipsummarytable->has_data())
	|| (vmmembershiptable !=  nullptr && vmmembershiptable->has_data())
	|| (vmmembershipsummaryexttable !=  nullptr && vmmembershipsummaryexttable->has_data())
	|| (vmvoicevlantable !=  nullptr && vmvoicevlantable->has_data());
}

bool CISCOVLANMEMBERSHIPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (vmvmps !=  nullptr && vmvmps->has_operation())
	|| (vmmembership !=  nullptr && vmmembership->has_operation())
	|| (vmstatistics !=  nullptr && vmstatistics->has_operation())
	|| (vmstatus !=  nullptr && vmstatus->has_operation())
	|| (vmvmpstable !=  nullptr && vmvmpstable->has_operation())
	|| (vmmembershipsummarytable !=  nullptr && vmmembershipsummarytable->has_operation())
	|| (vmmembershiptable !=  nullptr && vmmembershiptable->has_operation())
	|| (vmmembershipsummaryexttable !=  nullptr && vmmembershipsummaryexttable->has_operation())
	|| (vmvoicevlantable !=  nullptr && vmvoicevlantable->has_operation());
}

std::string CISCOVLANMEMBERSHIPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmVmps")
    {
        if(vmvmps == nullptr)
        {
            vmvmps = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVmps>();
        }
        return vmvmps;
    }

    if(child_yang_name == "vmMembership")
    {
        if(vmmembership == nullptr)
        {
            vmmembership = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembership>();
        }
        return vmmembership;
    }

    if(child_yang_name == "vmStatistics")
    {
        if(vmstatistics == nullptr)
        {
            vmstatistics = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmStatistics>();
        }
        return vmstatistics;
    }

    if(child_yang_name == "vmStatus")
    {
        if(vmstatus == nullptr)
        {
            vmstatus = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmStatus>();
        }
        return vmstatus;
    }

    if(child_yang_name == "vmVmpsTable")
    {
        if(vmvmpstable == nullptr)
        {
            vmvmpstable = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVmpsTable>();
        }
        return vmvmpstable;
    }

    if(child_yang_name == "vmMembershipSummaryTable")
    {
        if(vmmembershipsummarytable == nullptr)
        {
            vmmembershipsummarytable = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable>();
        }
        return vmmembershipsummarytable;
    }

    if(child_yang_name == "vmMembershipTable")
    {
        if(vmmembershiptable == nullptr)
        {
            vmmembershiptable = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipTable>();
        }
        return vmmembershiptable;
    }

    if(child_yang_name == "vmMembershipSummaryExtTable")
    {
        if(vmmembershipsummaryexttable == nullptr)
        {
            vmmembershipsummaryexttable = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable>();
        }
        return vmmembershipsummaryexttable;
    }

    if(child_yang_name == "vmVoiceVlanTable")
    {
        if(vmvoicevlantable == nullptr)
        {
            vmvoicevlantable = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable>();
        }
        return vmvoicevlantable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vmvmps != nullptr)
    {
        children["vmVmps"] = vmvmps;
    }

    if(vmmembership != nullptr)
    {
        children["vmMembership"] = vmmembership;
    }

    if(vmstatistics != nullptr)
    {
        children["vmStatistics"] = vmstatistics;
    }

    if(vmstatus != nullptr)
    {
        children["vmStatus"] = vmstatus;
    }

    if(vmvmpstable != nullptr)
    {
        children["vmVmpsTable"] = vmvmpstable;
    }

    if(vmmembershipsummarytable != nullptr)
    {
        children["vmMembershipSummaryTable"] = vmmembershipsummarytable;
    }

    if(vmmembershiptable != nullptr)
    {
        children["vmMembershipTable"] = vmmembershiptable;
    }

    if(vmmembershipsummaryexttable != nullptr)
    {
        children["vmMembershipSummaryExtTable"] = vmmembershipsummaryexttable;
    }

    if(vmvoicevlantable != nullptr)
    {
        children["vmVoiceVlanTable"] = vmvoicevlantable;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::clone_ptr() const
{
    return std::make_shared<CISCOVLANMEMBERSHIPMIB>();
}

std::string CISCOVLANMEMBERSHIPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOVLANMEMBERSHIPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOVLANMEMBERSHIPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOVLANMEMBERSHIPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOVLANMEMBERSHIPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmps" || name == "vmMembership" || name == "vmStatistics" || name == "vmStatus" || name == "vmVmpsTable" || name == "vmMembershipSummaryTable" || name == "vmMembershipTable" || name == "vmMembershipSummaryExtTable" || name == "vmVoiceVlanTable")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmps()
    :
    vmvmpsvqpversion{YType::int32, "vmVmpsVQPVersion"},
    vmvmpsretries{YType::int32, "vmVmpsRetries"},
    vmvmpsreconfirminterval{YType::int32, "vmVmpsReconfirmInterval"},
    vmvmpsreconfirm{YType::enumeration, "vmVmpsReconfirm"},
    vmvmpsreconfirmresult{YType::enumeration, "vmVmpsReconfirmResult"},
    vmvmpscurrent{YType::str, "vmVmpsCurrent"}
{

    yang_name = "vmVmps"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmVmps::~VmVmps()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmVmps::has_data() const
{
    if (is_presence_container) return true;
    return vmvmpsvqpversion.is_set
	|| vmvmpsretries.is_set
	|| vmvmpsreconfirminterval.is_set
	|| vmvmpsreconfirm.is_set
	|| vmvmpsreconfirmresult.is_set
	|| vmvmpscurrent.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmVmps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvmpsvqpversion.yfilter)
	|| ydk::is_set(vmvmpsretries.yfilter)
	|| ydk::is_set(vmvmpsreconfirminterval.yfilter)
	|| ydk::is_set(vmvmpsreconfirm.yfilter)
	|| ydk::is_set(vmvmpsreconfirmresult.yfilter)
	|| ydk::is_set(vmvmpscurrent.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmVmps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmVmps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmVmps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvmpsvqpversion.is_set || is_set(vmvmpsvqpversion.yfilter)) leaf_name_data.push_back(vmvmpsvqpversion.get_name_leafdata());
    if (vmvmpsretries.is_set || is_set(vmvmpsretries.yfilter)) leaf_name_data.push_back(vmvmpsretries.get_name_leafdata());
    if (vmvmpsreconfirminterval.is_set || is_set(vmvmpsreconfirminterval.yfilter)) leaf_name_data.push_back(vmvmpsreconfirminterval.get_name_leafdata());
    if (vmvmpsreconfirm.is_set || is_set(vmvmpsreconfirm.yfilter)) leaf_name_data.push_back(vmvmpsreconfirm.get_name_leafdata());
    if (vmvmpsreconfirmresult.is_set || is_set(vmvmpsreconfirmresult.yfilter)) leaf_name_data.push_back(vmvmpsreconfirmresult.get_name_leafdata());
    if (vmvmpscurrent.is_set || is_set(vmvmpscurrent.yfilter)) leaf_name_data.push_back(vmvmpscurrent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmVmps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmVmps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmVmps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmVmpsVQPVersion")
    {
        vmvmpsvqpversion = value;
        vmvmpsvqpversion.value_namespace = name_space;
        vmvmpsvqpversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsRetries")
    {
        vmvmpsretries = value;
        vmvmpsretries.value_namespace = name_space;
        vmvmpsretries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsReconfirmInterval")
    {
        vmvmpsreconfirminterval = value;
        vmvmpsreconfirminterval.value_namespace = name_space;
        vmvmpsreconfirminterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsReconfirm")
    {
        vmvmpsreconfirm = value;
        vmvmpsreconfirm.value_namespace = name_space;
        vmvmpsreconfirm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsReconfirmResult")
    {
        vmvmpsreconfirmresult = value;
        vmvmpsreconfirmresult.value_namespace = name_space;
        vmvmpsreconfirmresult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVmpsCurrent")
    {
        vmvmpscurrent = value;
        vmvmpscurrent.value_namespace = name_space;
        vmvmpscurrent.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::VmVmps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmVmpsVQPVersion")
    {
        vmvmpsvqpversion.yfilter = yfilter;
    }
    if(value_path == "vmVmpsRetries")
    {
        vmvmpsretries.yfilter = yfilter;
    }
    if(value_path == "vmVmpsReconfirmInterval")
    {
        vmvmpsreconfirminterval.yfilter = yfilter;
    }
    if(value_path == "vmVmpsReconfirm")
    {
        vmvmpsreconfirm.yfilter = yfilter;
    }
    if(value_path == "vmVmpsReconfirmResult")
    {
        vmvmpsreconfirmresult.yfilter = yfilter;
    }
    if(value_path == "vmVmpsCurrent")
    {
        vmvmpscurrent.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::VmVmps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsVQPVersion" || name == "vmVmpsRetries" || name == "vmVmpsReconfirmInterval" || name == "vmVmpsReconfirm" || name == "vmVmpsReconfirmResult" || name == "vmVmpsCurrent")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmMembership::VmMembership()
    :
    vmvlancreationmode{YType::enumeration, "vmVlanCreationMode"}
{

    yang_name = "vmMembership"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmMembership::~VmMembership()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembership::has_data() const
{
    if (is_presence_container) return true;
    return vmvlancreationmode.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmMembership::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvlancreationmode.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembership::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembership";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmMembership::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvlancreationmode.is_set || is_set(vmvlancreationmode.yfilter)) leaf_name_data.push_back(vmvlancreationmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmMembership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmMembership::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmMembership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmVlanCreationMode")
    {
        vmvlancreationmode = value;
        vmvlancreationmode.value_namespace = name_space;
        vmvlancreationmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::VmMembership::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmVlanCreationMode")
    {
        vmvlancreationmode.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::VmMembership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVlanCreationMode")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmStatistics::VmStatistics()
    :
    vmvqpqueries{YType::uint32, "vmVQPQueries"},
    vmvqpresponses{YType::uint32, "vmVQPResponses"},
    vmvmpschanges{YType::uint32, "vmVmpsChanges"},
    vmvqpshutdown{YType::uint32, "vmVQPShutdown"},
    vmvqpdenied{YType::uint32, "vmVQPDenied"},
    vmvqpwrongdomain{YType::uint32, "vmVQPWrongDomain"},
    vmvqpwrongversion{YType::uint32, "vmVQPWrongVersion"},
    vminsufficientresources{YType::uint32, "vmInsufficientResources"}
{

    yang_name = "vmStatistics"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmStatistics::~VmStatistics()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmStatistics::has_data() const
{
    if (is_presence_container) return true;
    return vmvqpqueries.is_set
	|| vmvqpresponses.is_set
	|| vmvmpschanges.is_set
	|| vmvqpshutdown.is_set
	|| vmvqpdenied.is_set
	|| vmvqpwrongdomain.is_set
	|| vmvqpwrongversion.is_set
	|| vminsufficientresources.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvqpqueries.yfilter)
	|| ydk::is_set(vmvqpresponses.yfilter)
	|| ydk::is_set(vmvmpschanges.yfilter)
	|| ydk::is_set(vmvqpshutdown.yfilter)
	|| ydk::is_set(vmvqpdenied.yfilter)
	|| ydk::is_set(vmvqpwrongdomain.yfilter)
	|| ydk::is_set(vmvqpwrongversion.yfilter)
	|| ydk::is_set(vminsufficientresources.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmStatistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvqpqueries.is_set || is_set(vmvqpqueries.yfilter)) leaf_name_data.push_back(vmvqpqueries.get_name_leafdata());
    if (vmvqpresponses.is_set || is_set(vmvqpresponses.yfilter)) leaf_name_data.push_back(vmvqpresponses.get_name_leafdata());
    if (vmvmpschanges.is_set || is_set(vmvmpschanges.yfilter)) leaf_name_data.push_back(vmvmpschanges.get_name_leafdata());
    if (vmvqpshutdown.is_set || is_set(vmvqpshutdown.yfilter)) leaf_name_data.push_back(vmvqpshutdown.get_name_leafdata());
    if (vmvqpdenied.is_set || is_set(vmvqpdenied.yfilter)) leaf_name_data.push_back(vmvqpdenied.get_name_leafdata());
    if (vmvqpwrongdomain.is_set || is_set(vmvqpwrongdomain.yfilter)) leaf_name_data.push_back(vmvqpwrongdomain.get_name_leafdata());
    if (vmvqpwrongversion.is_set || is_set(vmvqpwrongversion.yfilter)) leaf_name_data.push_back(vmvqpwrongversion.get_name_leafdata());
    if (vminsufficientresources.is_set || is_set(vminsufficientresources.yfilter)) leaf_name_data.push_back(vminsufficientresources.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "vmVmpsChanges")
    {
        vmvmpschanges = value;
        vmvmpschanges.value_namespace = name_space;
        vmvmpschanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPShutdown")
    {
        vmvqpshutdown = value;
        vmvqpshutdown.value_namespace = name_space;
        vmvqpshutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVQPDenied")
    {
        vmvqpdenied = value;
        vmvqpdenied.value_namespace = name_space;
        vmvqpdenied.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vmInsufficientResources")
    {
        vminsufficientresources = value;
        vminsufficientresources.value_namespace = name_space;
        vminsufficientresources.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::VmStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmVQPQueries")
    {
        vmvqpqueries.yfilter = yfilter;
    }
    if(value_path == "vmVQPResponses")
    {
        vmvqpresponses.yfilter = yfilter;
    }
    if(value_path == "vmVmpsChanges")
    {
        vmvmpschanges.yfilter = yfilter;
    }
    if(value_path == "vmVQPShutdown")
    {
        vmvqpshutdown.yfilter = yfilter;
    }
    if(value_path == "vmVQPDenied")
    {
        vmvqpdenied.yfilter = yfilter;
    }
    if(value_path == "vmVQPWrongDomain")
    {
        vmvqpwrongdomain.yfilter = yfilter;
    }
    if(value_path == "vmVQPWrongVersion")
    {
        vmvqpwrongversion.yfilter = yfilter;
    }
    if(value_path == "vmInsufficientResources")
    {
        vminsufficientresources.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::VmStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVQPQueries" || name == "vmVQPResponses" || name == "vmVmpsChanges" || name == "vmVQPShutdown" || name == "vmVQPDenied" || name == "vmVQPWrongDomain" || name == "vmVQPWrongVersion" || name == "vmInsufficientResources")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmStatus::VmStatus()
    :
    vmnotificationsenabled{YType::boolean, "vmNotificationsEnabled"}
{

    yang_name = "vmStatus"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmStatus::~VmStatus()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmStatus::has_data() const
{
    if (is_presence_container) return true;
    return vmnotificationsenabled.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmnotificationsenabled.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmStatus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmnotificationsenabled.is_set || is_set(vmnotificationsenabled.yfilter)) leaf_name_data.push_back(vmnotificationsenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmNotificationsEnabled")
    {
        vmnotificationsenabled = value;
        vmnotificationsenabled.value_namespace = name_space;
        vmnotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::VmStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmNotificationsEnabled")
    {
        vmnotificationsenabled.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::VmStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmNotificationsEnabled")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsTable()
    :
    vmvmpsentry(this, {"vmvmpsipaddress"})
{

    yang_name = "vmVmpsTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmVmpsTable::~VmVmpsTable()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmVmpsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vmvmpsentry.len(); index++)
    {
        if(vmvmpsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::VmVmpsTable::has_operation() const
{
    for (std::size_t index=0; index<vmvmpsentry.len(); index++)
    {
        if(vmvmpsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmVmpsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmVmpsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmpsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmVmpsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmVmpsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmVmpsEntry")
    {
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry>();
        c->parent = this;
        vmvmpsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmVmpsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vmvmpsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmVmpsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::VmVmpsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::VmVmpsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::VmVmpsEntry()
    :
    vmvmpsipaddress{YType::str, "vmVmpsIpAddress"},
    vmvmpsprimary{YType::boolean, "vmVmpsPrimary"},
    vmvmpsrowstatus{YType::enumeration, "vmVmpsRowStatus"}
{

    yang_name = "vmVmpsEntry"; yang_parent_name = "vmVmpsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::~VmVmpsEntry()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::has_data() const
{
    if (is_presence_container) return true;
    return vmvmpsipaddress.is_set
	|| vmvmpsprimary.is_set
	|| vmvmpsrowstatus.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvmpsipaddress.yfilter)
	|| ydk::is_set(vmvmpsprimary.yfilter)
	|| ydk::is_set(vmvmpsrowstatus.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmVmpsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmpsEntry";
    ADD_KEY_TOKEN(vmvmpsipaddress, "vmVmpsIpAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvmpsipaddress.is_set || is_set(vmvmpsipaddress.yfilter)) leaf_name_data.push_back(vmvmpsipaddress.get_name_leafdata());
    if (vmvmpsprimary.is_set || is_set(vmvmpsprimary.yfilter)) leaf_name_data.push_back(vmvmpsprimary.get_name_leafdata());
    if (vmvmpsrowstatus.is_set || is_set(vmvmpsrowstatus.yfilter)) leaf_name_data.push_back(vmvmpsrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::VmVmpsTable::VmVmpsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsIpAddress" || name == "vmVmpsPrimary" || name == "vmVmpsRowStatus")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryTable()
    :
    vmmembershipsummaryentry(this, {"vmmembershipsummaryvlanindex"})
{

    yang_name = "vmMembershipSummaryTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::~VmMembershipSummaryTable()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vmmembershipsummaryentry.len(); index++)
    {
        if(vmmembershipsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryentry.len(); index++)
    {
        if(vmmembershipsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmMembershipSummaryEntry")
    {
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry>();
        c->parent = this;
        vmmembershipsummaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vmmembershipsummaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::VmMembershipSummaryEntry()
    :
    vmmembershipsummaryvlanindex{YType::int32, "vmMembershipSummaryVlanIndex"},
    vmmembershipsummarymemberports{YType::str, "vmMembershipSummaryMemberPorts"},
    vmmembershipsummarymember2kports{YType::str, "vmMembershipSummaryMember2kPorts"}
{

    yang_name = "vmMembershipSummaryEntry"; yang_parent_name = "vmMembershipSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::~VmMembershipSummaryEntry()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return vmmembershipsummaryvlanindex.is_set
	|| vmmembershipsummarymemberports.is_set
	|| vmmembershipsummarymember2kports.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmmembershipsummaryvlanindex.yfilter)
	|| ydk::is_set(vmmembershipsummarymemberports.yfilter)
	|| ydk::is_set(vmmembershipsummarymember2kports.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryEntry";
    ADD_KEY_TOKEN(vmmembershipsummaryvlanindex, "vmMembershipSummaryVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.yfilter)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipsummarymemberports.is_set || is_set(vmmembershipsummarymemberports.yfilter)) leaf_name_data.push_back(vmmembershipsummarymemberports.get_name_leafdata());
    if (vmmembershipsummarymember2kports.is_set || is_set(vmmembershipsummarymember2kports.yfilter)) leaf_name_data.push_back(vmmembershipsummarymember2kports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex = value;
        vmmembershipsummaryvlanindex.value_namespace = name_space;
        vmmembershipsummaryvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmMembershipSummaryMemberPorts")
    {
        vmmembershipsummarymemberports = value;
        vmmembershipsummarymemberports.value_namespace = name_space;
        vmmembershipsummarymemberports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmMembershipSummaryMember2kPorts")
    {
        vmmembershipsummarymember2kports = value;
        vmmembershipsummarymember2kports.value_namespace = name_space;
        vmmembershipsummarymember2kports.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex.yfilter = yfilter;
    }
    if(value_path == "vmMembershipSummaryMemberPorts")
    {
        vmmembershipsummarymemberports.yfilter = yfilter;
    }
    if(value_path == "vmMembershipSummaryMember2kPorts")
    {
        vmmembershipsummarymember2kports.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryTable::VmMembershipSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryVlanIndex" || name == "vmMembershipSummaryMemberPorts" || name == "vmMembershipSummaryMember2kPorts")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipTable()
    :
    vmmembershipentry(this, {"ifindex"})
{

    yang_name = "vmMembershipTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmMembershipTable::~VmMembershipTable()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vmmembershipentry.len(); index++)
    {
        if(vmmembershipentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipTable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipentry.len(); index++)
    {
        if(vmmembershipentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmMembershipTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmMembershipTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmMembershipEntry")
    {
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry>();
        c->parent = this;
        vmmembershipentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmMembershipTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vmmembershipentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmMembershipEntry()
    :
    ifindex{YType::str, "ifIndex"},
    vmvlantype{YType::enumeration, "vmVlanType"},
    vmvlan{YType::int32, "vmVlan"},
    vmportstatus{YType::enumeration, "vmPortStatus"},
    vmvlans{YType::str, "vmVlans"},
    vmvlans2k{YType::str, "vmVlans2k"},
    vmvlans3k{YType::str, "vmVlans3k"},
    vmvlans4k{YType::str, "vmVlans4k"}
{

    yang_name = "vmMembershipEntry"; yang_parent_name = "vmMembershipTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::~VmMembershipEntry()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| vmvlantype.is_set
	|| vmvlan.is_set
	|| vmportstatus.is_set
	|| vmvlans.is_set
	|| vmvlans2k.is_set
	|| vmvlans3k.is_set
	|| vmvlans4k.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(vmvlantype.yfilter)
	|| ydk::is_set(vmvlan.yfilter)
	|| ydk::is_set(vmportstatus.yfilter)
	|| ydk::is_set(vmvlans.yfilter)
	|| ydk::is_set(vmvlans2k.yfilter)
	|| ydk::is_set(vmvlans3k.yfilter)
	|| ydk::is_set(vmvlans4k.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (vmvlantype.is_set || is_set(vmvlantype.yfilter)) leaf_name_data.push_back(vmvlantype.get_name_leafdata());
    if (vmvlan.is_set || is_set(vmvlan.yfilter)) leaf_name_data.push_back(vmvlan.get_name_leafdata());
    if (vmportstatus.is_set || is_set(vmportstatus.yfilter)) leaf_name_data.push_back(vmportstatus.get_name_leafdata());
    if (vmvlans.is_set || is_set(vmvlans.yfilter)) leaf_name_data.push_back(vmvlans.get_name_leafdata());
    if (vmvlans2k.is_set || is_set(vmvlans2k.yfilter)) leaf_name_data.push_back(vmvlans2k.get_name_leafdata());
    if (vmvlans3k.is_set || is_set(vmvlans3k.yfilter)) leaf_name_data.push_back(vmvlans3k.get_name_leafdata());
    if (vmvlans4k.is_set || is_set(vmvlans4k.yfilter)) leaf_name_data.push_back(vmvlans4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlanType")
    {
        vmvlantype = value;
        vmvlantype.value_namespace = name_space;
        vmvlantype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVlan")
    {
        vmvlan = value;
        vmvlan.value_namespace = name_space;
        vmvlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmPortStatus")
    {
        vmportstatus = value;
        vmportstatus.value_namespace = name_space;
        vmportstatus.value_namespace_prefix = name_space_prefix;
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
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "vmVlanType")
    {
        vmvlantype.yfilter = yfilter;
    }
    if(value_path == "vmVlan")
    {
        vmvlan.yfilter = yfilter;
    }
    if(value_path == "vmPortStatus")
    {
        vmportstatus.yfilter = yfilter;
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
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "vmVlanType" || name == "vmVlan" || name == "vmPortStatus" || name == "vmVlans" || name == "vmVlans2k" || name == "vmVlans3k" || name == "vmVlans4k")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtTable()
    :
    vmmembershipsummaryextentry(this, {"vmmembershipsummaryvlanindex", "vmmembershipportrangeindex"})
{

    yang_name = "vmMembershipSummaryExtTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::~VmMembershipSummaryExtTable()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vmmembershipsummaryextentry.len(); index++)
    {
        if(vmmembershipsummaryextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryextentry.len(); index++)
    {
        if(vmmembershipsummaryextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmMembershipSummaryExtEntry")
    {
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry>();
        c->parent = this;
        vmmembershipsummaryextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vmmembershipsummaryextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryExtEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::VmMembershipSummaryExtEntry()
    :
    vmmembershipsummaryvlanindex{YType::str, "vmMembershipSummaryVlanIndex"},
    vmmembershipportrangeindex{YType::enumeration, "vmMembershipPortRangeIndex"},
    vmmembershipsummaryextports{YType::str, "vmMembershipSummaryExtPorts"}
{

    yang_name = "vmMembershipSummaryExtEntry"; yang_parent_name = "vmMembershipSummaryExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::~VmMembershipSummaryExtEntry()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return vmmembershipsummaryvlanindex.is_set
	|| vmmembershipportrangeindex.is_set
	|| vmmembershipsummaryextports.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmmembershipsummaryvlanindex.yfilter)
	|| ydk::is_set(vmmembershipportrangeindex.yfilter)
	|| ydk::is_set(vmmembershipsummaryextports.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipSummaryExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryExtEntry";
    ADD_KEY_TOKEN(vmmembershipsummaryvlanindex, "vmMembershipSummaryVlanIndex");
    ADD_KEY_TOKEN(vmmembershipportrangeindex, "vmMembershipPortRangeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.yfilter)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipportrangeindex.is_set || is_set(vmmembershipportrangeindex.yfilter)) leaf_name_data.push_back(vmmembershipportrangeindex.get_name_leafdata());
    if (vmmembershipsummaryextports.is_set || is_set(vmmembershipsummaryextports.yfilter)) leaf_name_data.push_back(vmmembershipsummaryextports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::VmMembershipSummaryExtTable::VmMembershipSummaryExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryVlanIndex" || name == "vmMembershipPortRangeIndex" || name == "vmMembershipSummaryExtPorts")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanTable()
    :
    vmvoicevlanentry(this, {"ifindex"})
{

    yang_name = "vmVoiceVlanTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::~VmVoiceVlanTable()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vmvoicevlanentry.len(); index++)
    {
        if(vmvoicevlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::has_operation() const
{
    for (std::size_t index=0; index<vmvoicevlanentry.len(); index++)
    {
        if(vmvoicevlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVoiceVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vmVoiceVlanEntry")
    {
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry>();
        c->parent = this;
        vmvoicevlanentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vmvoicevlanentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVoiceVlanEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::VmVoiceVlanEntry()
    :
    ifindex{YType::str, "ifIndex"},
    vmvoicevlanid{YType::int32, "vmVoiceVlanId"},
    vmvoicevlancdpverifyenable{YType::boolean, "vmVoiceVlanCdpVerifyEnable"}
{

    yang_name = "vmVoiceVlanEntry"; yang_parent_name = "vmVoiceVlanTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::~VmVoiceVlanEntry()
{
}

bool CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| vmvoicevlanid.is_set
	|| vmvoicevlancdpverifyenable.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(vmvoicevlanid.yfilter)
	|| ydk::is_set(vmvoicevlancdpverifyenable.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmVoiceVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVoiceVlanEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (vmvoicevlanid.is_set || is_set(vmvoicevlanid.yfilter)) leaf_name_data.push_back(vmvoicevlanid.get_name_leafdata());
    if (vmvoicevlancdpverifyenable.is_set || is_set(vmvoicevlancdpverifyenable.yfilter)) leaf_name_data.push_back(vmvoicevlancdpverifyenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVoiceVlanId")
    {
        vmvoicevlanid = value;
        vmvoicevlanid.value_namespace = name_space;
        vmvoicevlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmVoiceVlanCdpVerifyEnable")
    {
        vmvoicevlancdpverifyenable = value;
        vmvoicevlancdpverifyenable.value_namespace = name_space;
        vmvoicevlancdpverifyenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "vmVoiceVlanId")
    {
        vmvoicevlanid.yfilter = yfilter;
    }
    if(value_path == "vmVoiceVlanCdpVerifyEnable")
    {
        vmvoicevlancdpverifyenable.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::VmVoiceVlanTable::VmVoiceVlanEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "vmVoiceVlanId" || name == "vmVoiceVlanCdpVerifyEnable")
        return true;
    return false;
}

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirm::ready {1, "ready"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirm::execute {2, "execute"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult::other {1, "other"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult::inProgress {2, "inProgress"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult::success {3, "success"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult::noResponse {4, "noResponse"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult::noVmps {5, "noVmps"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult::noDynamicPort {6, "noDynamicPort"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmVmps::VmVmpsReconfirmResult::noHostConnected {7, "noHostConnected"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembership::VmVlanCreationMode::automatic {1, "automatic"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembership::VmVlanCreationMode::manual {2, "manual"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmVlanType::static_ {1, "static"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmVlanType::dynamic {2, "dynamic"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmVlanType::multiVlan {3, "multiVlan"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmPortStatus::inactive {1, "inactive"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmPortStatus::active {2, "active"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::VmMembershipTable::VmMembershipEntry::VmPortStatus::shutdown {3, "shutdown"};


}
}

