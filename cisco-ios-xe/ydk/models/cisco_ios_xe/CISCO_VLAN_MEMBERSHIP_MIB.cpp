
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
    vmvmps(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvmps>())
	,vmmembership(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembership>())
	,vmstatistics(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmstatistics>())
	,vmstatus(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmstatus>())
	,vmvmpstable(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvmpstable>())
	,vmmembershipsummarytable(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable>())
	,vmmembershiptable(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershiptable>())
	,vmmembershipsummaryexttable(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable>())
	,vmvoicevlantable(std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable>())
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
            vmvmps = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvmps>();
        }
        return vmvmps;
    }

    if(child_yang_name == "vmMembership")
    {
        if(vmmembership == nullptr)
        {
            vmmembership = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembership>();
        }
        return vmmembership;
    }

    if(child_yang_name == "vmStatistics")
    {
        if(vmstatistics == nullptr)
        {
            vmstatistics = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmstatistics>();
        }
        return vmstatistics;
    }

    if(child_yang_name == "vmStatus")
    {
        if(vmstatus == nullptr)
        {
            vmstatus = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmstatus>();
        }
        return vmstatus;
    }

    if(child_yang_name == "vmVmpsTable")
    {
        if(vmvmpstable == nullptr)
        {
            vmvmpstable = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvmpstable>();
        }
        return vmvmpstable;
    }

    if(child_yang_name == "vmMembershipSummaryTable")
    {
        if(vmmembershipsummarytable == nullptr)
        {
            vmmembershipsummarytable = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable>();
        }
        return vmmembershipsummarytable;
    }

    if(child_yang_name == "vmMembershipTable")
    {
        if(vmmembershiptable == nullptr)
        {
            vmmembershiptable = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershiptable>();
        }
        return vmmembershiptable;
    }

    if(child_yang_name == "vmMembershipSummaryExtTable")
    {
        if(vmmembershipsummaryexttable == nullptr)
        {
            vmmembershipsummaryexttable = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable>();
        }
        return vmmembershipsummaryexttable;
    }

    if(child_yang_name == "vmVoiceVlanTable")
    {
        if(vmvoicevlantable == nullptr)
        {
            vmvoicevlantable = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable>();
        }
        return vmvoicevlantable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmps()
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

CISCOVLANMEMBERSHIPMIB::Vmvmps::~Vmvmps()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmvmps::has_data() const
{
    return vmvmpsvqpversion.is_set
	|| vmvmpsretries.is_set
	|| vmvmpsreconfirminterval.is_set
	|| vmvmpsreconfirm.is_set
	|| vmvmpsreconfirmresult.is_set
	|| vmvmpscurrent.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmvmps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvmpsvqpversion.yfilter)
	|| ydk::is_set(vmvmpsretries.yfilter)
	|| ydk::is_set(vmvmpsreconfirminterval.yfilter)
	|| ydk::is_set(vmvmpsreconfirm.yfilter)
	|| ydk::is_set(vmvmpsreconfirmresult.yfilter)
	|| ydk::is_set(vmvmpscurrent.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvmps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvmps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmvmps::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmvmps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmvmps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmvmps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::Vmvmps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::Vmvmps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsVQPVersion" || name == "vmVmpsRetries" || name == "vmVmpsReconfirmInterval" || name == "vmVmpsReconfirm" || name == "vmVmpsReconfirmResult" || name == "vmVmpsCurrent")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembership::Vmmembership()
    :
    vmvlancreationmode{YType::enumeration, "vmVlanCreationMode"}
{

    yang_name = "vmMembership"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembership::~Vmmembership()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembership::has_data() const
{
    return vmvlancreationmode.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembership::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvlancreationmode.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembership::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembership";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmmembership::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvlancreationmode.is_set || is_set(vmvlancreationmode.yfilter)) leaf_name_data.push_back(vmvlancreationmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmmembership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmmembership::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmmembership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmVlanCreationMode")
    {
        vmvlancreationmode = value;
        vmvlancreationmode.value_namespace = name_space;
        vmvlancreationmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::Vmmembership::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmVlanCreationMode")
    {
        vmvlancreationmode.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVlanCreationMode")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmstatistics::Vmstatistics()
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

CISCOVLANMEMBERSHIPMIB::Vmstatistics::~Vmstatistics()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmstatistics::has_data() const
{
    return vmvqpqueries.is_set
	|| vmvqpresponses.is_set
	|| vmvmpschanges.is_set
	|| vmvqpshutdown.is_set
	|| vmvqpdenied.is_set
	|| vmvqpwrongdomain.is_set
	|| vmvqpwrongversion.is_set
	|| vminsufficientresources.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmstatistics::has_operation() const
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

std::string CISCOVLANMEMBERSHIPMIB::Vmstatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmstatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmStatistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmstatistics::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmstatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmstatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmstatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::Vmstatistics::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::Vmstatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVQPQueries" || name == "vmVQPResponses" || name == "vmVmpsChanges" || name == "vmVQPShutdown" || name == "vmVQPDenied" || name == "vmVQPWrongDomain" || name == "vmVQPWrongVersion" || name == "vmInsufficientResources")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmstatus::Vmstatus()
    :
    vmnotificationsenabled{YType::boolean, "vmNotificationsEnabled"}
{

    yang_name = "vmStatus"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmstatus::~Vmstatus()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmstatus::has_data() const
{
    return vmnotificationsenabled.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmstatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmnotificationsenabled.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmstatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmstatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmStatus";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmstatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmnotificationsenabled.is_set || is_set(vmnotificationsenabled.yfilter)) leaf_name_data.push_back(vmnotificationsenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmstatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmstatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmstatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vmNotificationsEnabled")
    {
        vmnotificationsenabled = value;
        vmnotificationsenabled.value_namespace = name_space;
        vmnotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOVLANMEMBERSHIPMIB::Vmstatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vmNotificationsEnabled")
    {
        vmnotificationsenabled.yfilter = yfilter;
    }
}

bool CISCOVLANMEMBERSHIPMIB::Vmstatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmNotificationsEnabled")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpstable()
{

    yang_name = "vmVmpsTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmvmpstable::~Vmvmpstable()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmvmpstable::has_data() const
{
    for (std::size_t index=0; index<vmvmpsentry.size(); index++)
    {
        if(vmvmpsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::Vmvmpstable::has_operation() const
{
    for (std::size_t index=0; index<vmvmpsentry.size(); index++)
    {
        if(vmvmpsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvmpstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvmpstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmpsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmvmpstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmvmpstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry>();
        c->parent = this;
        vmvmpsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmvmpstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmvmpsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmvmpstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::Vmvmpstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmvmpstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::Vmvmpsentry()
    :
    vmvmpsipaddress{YType::str, "vmVmpsIpAddress"},
    vmvmpsprimary{YType::boolean, "vmVmpsPrimary"},
    vmvmpsrowstatus{YType::enumeration, "vmVmpsRowStatus"}
{

    yang_name = "vmVmpsEntry"; yang_parent_name = "vmVmpsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::~Vmvmpsentry()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::has_data() const
{
    return vmvmpsipaddress.is_set
	|| vmvmpsprimary.is_set
	|| vmvmpsrowstatus.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmvmpsipaddress.yfilter)
	|| ydk::is_set(vmvmpsprimary.yfilter)
	|| ydk::is_set(vmvmpsrowstatus.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmVmpsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVmpsEntry" <<"[vmVmpsIpAddress='" <<vmvmpsipaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmvmpsipaddress.is_set || is_set(vmvmpsipaddress.yfilter)) leaf_name_data.push_back(vmvmpsipaddress.get_name_leafdata());
    if (vmvmpsprimary.is_set || is_set(vmvmpsprimary.yfilter)) leaf_name_data.push_back(vmvmpsprimary.get_name_leafdata());
    if (vmvmpsrowstatus.is_set || is_set(vmvmpsrowstatus.yfilter)) leaf_name_data.push_back(vmvmpsrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::Vmvmpstable::Vmvmpsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVmpsIpAddress" || name == "vmVmpsPrimary" || name == "vmVmpsRowStatus")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummarytable()
{

    yang_name = "vmMembershipSummaryTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::~Vmmembershipsummarytable()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::has_data() const
{
    for (std::size_t index=0; index<vmmembershipsummaryentry.size(); index++)
    {
        if(vmmembershipsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryentry.size(); index++)
    {
        if(vmmembershipsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry>();
        c->parent = this;
        vmmembershipsummaryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipsummaryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::Vmmembershipsummaryentry()
    :
    vmmembershipsummaryvlanindex{YType::int32, "vmMembershipSummaryVlanIndex"},
    vmmembershipsummarymemberports{YType::str, "vmMembershipSummaryMemberPorts"},
    vmmembershipsummarymember2kports{YType::str, "vmMembershipSummaryMember2kPorts"}
{

    yang_name = "vmMembershipSummaryEntry"; yang_parent_name = "vmMembershipSummaryTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::~Vmmembershipsummaryentry()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::has_data() const
{
    return vmmembershipsummaryvlanindex.is_set
	|| vmmembershipsummarymemberports.is_set
	|| vmmembershipsummarymember2kports.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmmembershipsummaryvlanindex.yfilter)
	|| ydk::is_set(vmmembershipsummarymemberports.yfilter)
	|| ydk::is_set(vmmembershipsummarymember2kports.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryEntry" <<"[vmMembershipSummaryVlanIndex='" <<vmmembershipsummaryvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.yfilter)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipsummarymemberports.is_set || is_set(vmmembershipsummarymemberports.yfilter)) leaf_name_data.push_back(vmmembershipsummarymemberports.get_name_leafdata());
    if (vmmembershipsummarymember2kports.is_set || is_set(vmmembershipsummarymember2kports.yfilter)) leaf_name_data.push_back(vmmembershipsummarymember2kports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummarytable::Vmmembershipsummaryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryVlanIndex" || name == "vmMembershipSummaryMemberPorts" || name == "vmMembershipSummaryMember2kPorts")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershiptable()
{

    yang_name = "vmMembershipTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::~Vmmembershiptable()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::has_data() const
{
    for (std::size_t index=0; index<vmmembershipentry.size(); index++)
    {
        if(vmmembershipentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipentry.size(); index++)
    {
        if(vmmembershipentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry>();
        c->parent = this;
        vmmembershipentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmmembershipentry()
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

CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::~Vmmembershipentry()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::has_data() const
{
    return ifindex.is_set
	|| vmvlantype.is_set
	|| vmvlan.is_set
	|| vmportstatus.is_set
	|| vmvlans.is_set
	|| vmvlans2k.is_set
	|| vmvlans3k.is_set
	|| vmvlans4k.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::has_operation() const
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

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "vmVlanType" || name == "vmVlan" || name == "vmPortStatus" || name == "vmVlans" || name == "vmVlans2k" || name == "vmVlans3k" || name == "vmVlans4k")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryexttable()
{

    yang_name = "vmMembershipSummaryExtTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::~Vmmembershipsummaryexttable()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::has_data() const
{
    for (std::size_t index=0; index<vmmembershipsummaryextentry.size(); index++)
    {
        if(vmmembershipsummaryextentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryextentry.size(); index++)
    {
        if(vmmembershipsummaryextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry>();
        c->parent = this;
        vmmembershipsummaryextentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipsummaryextentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryExtEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::Vmmembershipsummaryextentry()
    :
    vmmembershipsummaryvlanindex{YType::str, "vmMembershipSummaryVlanIndex"},
    vmmembershipportrangeindex{YType::enumeration, "vmMembershipPortRangeIndex"},
    vmmembershipsummaryextports{YType::str, "vmMembershipSummaryExtPorts"}
{

    yang_name = "vmMembershipSummaryExtEntry"; yang_parent_name = "vmMembershipSummaryExtTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::~Vmmembershipsummaryextentry()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::has_data() const
{
    return vmmembershipsummaryvlanindex.is_set
	|| vmmembershipportrangeindex.is_set
	|| vmmembershipsummaryextports.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vmmembershipsummaryvlanindex.yfilter)
	|| ydk::is_set(vmmembershipportrangeindex.yfilter)
	|| ydk::is_set(vmmembershipsummaryextports.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmMembershipSummaryExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmMembershipSummaryExtEntry" <<"[vmMembershipSummaryVlanIndex='" <<vmmembershipsummaryvlanindex <<"']" <<"[vmMembershipPortRangeIndex='" <<vmmembershipportrangeindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.yfilter)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipportrangeindex.is_set || is_set(vmmembershipportrangeindex.yfilter)) leaf_name_data.push_back(vmmembershipportrangeindex.get_name_leafdata());
    if (vmmembershipsummaryextports.is_set || is_set(vmmembershipsummaryextports.yfilter)) leaf_name_data.push_back(vmmembershipsummaryextports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmMembershipSummaryVlanIndex" || name == "vmMembershipPortRangeIndex" || name == "vmMembershipSummaryExtPorts")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlantable()
{

    yang_name = "vmVoiceVlanTable"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::~Vmvoicevlantable()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::has_data() const
{
    for (std::size_t index=0; index<vmvoicevlanentry.size(); index++)
    {
        if(vmvoicevlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::has_operation() const
{
    for (std::size_t index=0; index<vmvoicevlanentry.size(); index++)
    {
        if(vmvoicevlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVoiceVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry>();
        c->parent = this;
        vmvoicevlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmvoicevlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vmVoiceVlanEntry")
        return true;
    return false;
}

CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::Vmvoicevlanentry()
    :
    ifindex{YType::str, "ifIndex"},
    vmvoicevlanid{YType::int32, "vmVoiceVlanId"},
    vmvoicevlancdpverifyenable{YType::boolean, "vmVoiceVlanCdpVerifyEnable"}
{

    yang_name = "vmVoiceVlanEntry"; yang_parent_name = "vmVoiceVlanTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::~Vmvoicevlanentry()
{
}

bool CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::has_data() const
{
    return ifindex.is_set
	|| vmvoicevlanid.is_set
	|| vmvoicevlancdpverifyenable.is_set;
}

bool CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(vmvoicevlanid.yfilter)
	|| ydk::is_set(vmvoicevlancdpverifyenable.yfilter);
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-VLAN-MEMBERSHIP-MIB:CISCO-VLAN-MEMBERSHIP-MIB/vmVoiceVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vmVoiceVlanEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (vmvoicevlanid.is_set || is_set(vmvoicevlanid.yfilter)) leaf_name_data.push_back(vmvoicevlanid.get_name_leafdata());
    if (vmvoicevlancdpverifyenable.is_set || is_set(vmvoicevlancdpverifyenable.yfilter)) leaf_name_data.push_back(vmvoicevlancdpverifyenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOVLANMEMBERSHIPMIB::Vmvoicevlantable::Vmvoicevlanentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "vmVoiceVlanId" || name == "vmVoiceVlanCdpVerifyEnable")
        return true;
    return false;
}

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirm::ready {1, "ready"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirm::execute {2, "execute"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult::other {1, "other"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult::inProgress {2, "inProgress"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult::success {3, "success"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult::noResponse {4, "noResponse"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult::noVmps {5, "noVmps"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult::noDynamicPort {6, "noDynamicPort"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmvmps::Vmvmpsreconfirmresult::noHostConnected {7, "noHostConnected"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembership::Vmvlancreationmode::automatic {1, "automatic"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembership::Vmvlancreationmode::manual {2, "manual"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmvlantype::static_ {1, "static"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmvlantype::dynamic {2, "dynamic"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmvlantype::multiVlan {3, "multiVlan"};

const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmportstatus::inactive {1, "inactive"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmportstatus::active {2, "active"};
const Enum::YLeaf CISCOVLANMEMBERSHIPMIB::Vmmembershiptable::Vmmembershipentry::Vmportstatus::shutdown {3, "shutdown"};


}
}

