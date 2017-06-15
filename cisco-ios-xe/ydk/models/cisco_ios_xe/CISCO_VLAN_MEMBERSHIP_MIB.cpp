
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_VLAN_MEMBERSHIP_MIB.hpp"

namespace ydk {
namespace CISCO_VLAN_MEMBERSHIP_MIB {

CiscoVlanMembershipMib::CiscoVlanMembershipMib()
    :
    vmmembership_(std::make_shared<CiscoVlanMembershipMib::Vmmembership>())
	,vmmembershipsummaryexttable_(std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummaryexttable>())
	,vmmembershipsummarytable_(std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummarytable>())
	,vmmembershiptable_(std::make_shared<CiscoVlanMembershipMib::Vmmembershiptable>())
	,vmstatistics_(std::make_shared<CiscoVlanMembershipMib::Vmstatistics>())
	,vmstatus_(std::make_shared<CiscoVlanMembershipMib::Vmstatus>())
	,vmvmps_(std::make_shared<CiscoVlanMembershipMib::Vmvmps>())
	,vmvmpstable_(std::make_shared<CiscoVlanMembershipMib::Vmvmpstable>())
	,vmvoicevlantable_(std::make_shared<CiscoVlanMembershipMib::Vmvoicevlantable>())
{
    vmmembership_->parent = this;

    vmmembershipsummaryexttable_->parent = this;

    vmmembershipsummarytable_->parent = this;

    vmmembershiptable_->parent = this;

    vmstatistics_->parent = this;

    vmstatus_->parent = this;

    vmvmps_->parent = this;

    vmvmpstable_->parent = this;

    vmvoicevlantable_->parent = this;

    yang_name = "CISCO-VLAN-MEMBERSHIP-MIB"; yang_parent_name = "CISCO-VLAN-MEMBERSHIP-MIB";
}

CiscoVlanMembershipMib::~CiscoVlanMembershipMib()
{
}

bool CiscoVlanMembershipMib::has_data() const
{
    return (vmmembership_ !=  nullptr && vmmembership_->has_data())
	|| (vmmembershipsummaryexttable_ !=  nullptr && vmmembershipsummaryexttable_->has_data())
	|| (vmmembershipsummarytable_ !=  nullptr && vmmembershipsummarytable_->has_data())
	|| (vmmembershiptable_ !=  nullptr && vmmembershiptable_->has_data())
	|| (vmstatistics_ !=  nullptr && vmstatistics_->has_data())
	|| (vmstatus_ !=  nullptr && vmstatus_->has_data())
	|| (vmvmps_ !=  nullptr && vmvmps_->has_data())
	|| (vmvmpstable_ !=  nullptr && vmvmpstable_->has_data())
	|| (vmvoicevlantable_ !=  nullptr && vmvoicevlantable_->has_data());
}

bool CiscoVlanMembershipMib::has_operation() const
{
    return is_set(operation)
	|| (vmmembership_ !=  nullptr && vmmembership_->has_operation())
	|| (vmmembershipsummaryexttable_ !=  nullptr && vmmembershipsummaryexttable_->has_operation())
	|| (vmmembershipsummarytable_ !=  nullptr && vmmembershipsummarytable_->has_operation())
	|| (vmmembershiptable_ !=  nullptr && vmmembershiptable_->has_operation())
	|| (vmstatistics_ !=  nullptr && vmstatistics_->has_operation())
	|| (vmstatus_ !=  nullptr && vmstatus_->has_operation())
	|| (vmvmps_ !=  nullptr && vmvmps_->has_operation())
	|| (vmvmpstable_ !=  nullptr && vmvmpstable_->has_operation())
	|| (vmvoicevlantable_ !=  nullptr && vmvoicevlantable_->has_operation());
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
        if(vmmembership_ == nullptr)
        {
            vmmembership_ = std::make_shared<CiscoVlanMembershipMib::Vmmembership>();
        }
        return vmmembership_;
    }

    if(child_yang_name == "vmMembershipSummaryExtTable")
    {
        if(vmmembershipsummaryexttable_ == nullptr)
        {
            vmmembershipsummaryexttable_ = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummaryexttable>();
        }
        return vmmembershipsummaryexttable_;
    }

    if(child_yang_name == "vmMembershipSummaryTable")
    {
        if(vmmembershipsummarytable_ == nullptr)
        {
            vmmembershipsummarytable_ = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummarytable>();
        }
        return vmmembershipsummarytable_;
    }

    if(child_yang_name == "vmMembershipTable")
    {
        if(vmmembershiptable_ == nullptr)
        {
            vmmembershiptable_ = std::make_shared<CiscoVlanMembershipMib::Vmmembershiptable>();
        }
        return vmmembershiptable_;
    }

    if(child_yang_name == "vmStatistics")
    {
        if(vmstatistics_ == nullptr)
        {
            vmstatistics_ = std::make_shared<CiscoVlanMembershipMib::Vmstatistics>();
        }
        return vmstatistics_;
    }

    if(child_yang_name == "vmStatus")
    {
        if(vmstatus_ == nullptr)
        {
            vmstatus_ = std::make_shared<CiscoVlanMembershipMib::Vmstatus>();
        }
        return vmstatus_;
    }

    if(child_yang_name == "vmVmps")
    {
        if(vmvmps_ == nullptr)
        {
            vmvmps_ = std::make_shared<CiscoVlanMembershipMib::Vmvmps>();
        }
        return vmvmps_;
    }

    if(child_yang_name == "vmVmpsTable")
    {
        if(vmvmpstable_ == nullptr)
        {
            vmvmpstable_ = std::make_shared<CiscoVlanMembershipMib::Vmvmpstable>();
        }
        return vmvmpstable_;
    }

    if(child_yang_name == "vmVoiceVlanTable")
    {
        if(vmvoicevlantable_ == nullptr)
        {
            vmvoicevlantable_ = std::make_shared<CiscoVlanMembershipMib::Vmvoicevlantable>();
        }
        return vmvoicevlantable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vmmembership_ != nullptr)
    {
        children["vmMembership"] = vmmembership_;
    }

    if(vmmembershipsummaryexttable_ != nullptr)
    {
        children["vmMembershipSummaryExtTable"] = vmmembershipsummaryexttable_;
    }

    if(vmmembershipsummarytable_ != nullptr)
    {
        children["vmMembershipSummaryTable"] = vmmembershipsummarytable_;
    }

    if(vmmembershiptable_ != nullptr)
    {
        children["vmMembershipTable"] = vmmembershiptable_;
    }

    if(vmstatistics_ != nullptr)
    {
        children["vmStatistics"] = vmstatistics_;
    }

    if(vmstatus_ != nullptr)
    {
        children["vmStatus"] = vmstatus_;
    }

    if(vmvmps_ != nullptr)
    {
        children["vmVmps"] = vmvmps_;
    }

    if(vmvmpstable_ != nullptr)
    {
        children["vmVmpsTable"] = vmvmpstable_;
    }

    if(vmvoicevlantable_ != nullptr)
    {
        children["vmVoiceVlanTable"] = vmvoicevlantable_;
    }

    return children;
}

void CiscoVlanMembershipMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(vmvmpscurrent.operation)
	|| is_set(vmvmpsreconfirm.operation)
	|| is_set(vmvmpsreconfirminterval.operation)
	|| is_set(vmvmpsreconfirmresult.operation)
	|| is_set(vmvmpsretries.operation)
	|| is_set(vmvmpsvqpversion.operation);
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

    if (vmvmpscurrent.is_set || is_set(vmvmpscurrent.operation)) leaf_name_data.push_back(vmvmpscurrent.get_name_leafdata());
    if (vmvmpsreconfirm.is_set || is_set(vmvmpsreconfirm.operation)) leaf_name_data.push_back(vmvmpsreconfirm.get_name_leafdata());
    if (vmvmpsreconfirminterval.is_set || is_set(vmvmpsreconfirminterval.operation)) leaf_name_data.push_back(vmvmpsreconfirminterval.get_name_leafdata());
    if (vmvmpsreconfirmresult.is_set || is_set(vmvmpsreconfirmresult.operation)) leaf_name_data.push_back(vmvmpsreconfirmresult.get_name_leafdata());
    if (vmvmpsretries.is_set || is_set(vmvmpsretries.operation)) leaf_name_data.push_back(vmvmpsretries.get_name_leafdata());
    if (vmvmpsvqpversion.is_set || is_set(vmvmpsvqpversion.operation)) leaf_name_data.push_back(vmvmpsvqpversion.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmvmps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vmVmpsCurrent")
    {
        vmvmpscurrent = value;
    }
    if(value_path == "vmVmpsReconfirm")
    {
        vmvmpsreconfirm = value;
    }
    if(value_path == "vmVmpsReconfirmInterval")
    {
        vmvmpsreconfirminterval = value;
    }
    if(value_path == "vmVmpsReconfirmResult")
    {
        vmvmpsreconfirmresult = value;
    }
    if(value_path == "vmVmpsRetries")
    {
        vmvmpsretries = value;
    }
    if(value_path == "vmVmpsVQPVersion")
    {
        vmvmpsvqpversion = value;
    }
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
    return is_set(operation)
	|| is_set(vmvlancreationmode.operation);
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

    if (vmvlancreationmode.is_set || is_set(vmvlancreationmode.operation)) leaf_name_data.push_back(vmvlancreationmode.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmmembership::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vmVlanCreationMode")
    {
        vmvlancreationmode = value;
    }
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
    return is_set(operation)
	|| is_set(vminsufficientresources.operation)
	|| is_set(vmvmpschanges.operation)
	|| is_set(vmvqpdenied.operation)
	|| is_set(vmvqpqueries.operation)
	|| is_set(vmvqpresponses.operation)
	|| is_set(vmvqpshutdown.operation)
	|| is_set(vmvqpwrongdomain.operation)
	|| is_set(vmvqpwrongversion.operation);
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

    if (vminsufficientresources.is_set || is_set(vminsufficientresources.operation)) leaf_name_data.push_back(vminsufficientresources.get_name_leafdata());
    if (vmvmpschanges.is_set || is_set(vmvmpschanges.operation)) leaf_name_data.push_back(vmvmpschanges.get_name_leafdata());
    if (vmvqpdenied.is_set || is_set(vmvqpdenied.operation)) leaf_name_data.push_back(vmvqpdenied.get_name_leafdata());
    if (vmvqpqueries.is_set || is_set(vmvqpqueries.operation)) leaf_name_data.push_back(vmvqpqueries.get_name_leafdata());
    if (vmvqpresponses.is_set || is_set(vmvqpresponses.operation)) leaf_name_data.push_back(vmvqpresponses.get_name_leafdata());
    if (vmvqpshutdown.is_set || is_set(vmvqpshutdown.operation)) leaf_name_data.push_back(vmvqpshutdown.get_name_leafdata());
    if (vmvqpwrongdomain.is_set || is_set(vmvqpwrongdomain.operation)) leaf_name_data.push_back(vmvqpwrongdomain.get_name_leafdata());
    if (vmvqpwrongversion.is_set || is_set(vmvqpwrongversion.operation)) leaf_name_data.push_back(vmvqpwrongversion.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmstatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vmInsufficientResources")
    {
        vminsufficientresources = value;
    }
    if(value_path == "vmVmpsChanges")
    {
        vmvmpschanges = value;
    }
    if(value_path == "vmVQPDenied")
    {
        vmvqpdenied = value;
    }
    if(value_path == "vmVQPQueries")
    {
        vmvqpqueries = value;
    }
    if(value_path == "vmVQPResponses")
    {
        vmvqpresponses = value;
    }
    if(value_path == "vmVQPShutdown")
    {
        vmvqpshutdown = value;
    }
    if(value_path == "vmVQPWrongDomain")
    {
        vmvqpwrongdomain = value;
    }
    if(value_path == "vmVQPWrongVersion")
    {
        vmvqpwrongversion = value;
    }
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
    return is_set(operation)
	|| is_set(vmnotificationsenabled.operation);
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

    if (vmnotificationsenabled.is_set || is_set(vmnotificationsenabled.operation)) leaf_name_data.push_back(vmnotificationsenabled.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmstatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vmNotificationsEnabled")
    {
        vmnotificationsenabled = value;
    }
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
    for (std::size_t index=0; index<vmvmpsentry_.size(); index++)
    {
        if(vmvmpsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmvmpstable::has_operation() const
{
    for (std::size_t index=0; index<vmvmpsentry_.size(); index++)
    {
        if(vmvmpsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : vmvmpsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry>();
        c->parent = this;
        vmvmpsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmvmpstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmvmpsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmvmpstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(vmvmpsipaddress.operation)
	|| is_set(vmvmpsprimary.operation)
	|| is_set(vmvmpsrowstatus.operation);
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

    if (vmvmpsipaddress.is_set || is_set(vmvmpsipaddress.operation)) leaf_name_data.push_back(vmvmpsipaddress.get_name_leafdata());
    if (vmvmpsprimary.is_set || is_set(vmvmpsprimary.operation)) leaf_name_data.push_back(vmvmpsprimary.get_name_leafdata());
    if (vmvmpsrowstatus.is_set || is_set(vmvmpsrowstatus.operation)) leaf_name_data.push_back(vmvmpsrowstatus.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmvmpstable::Vmvmpsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vmVmpsIpAddress")
    {
        vmvmpsipaddress = value;
    }
    if(value_path == "vmVmpsPrimary")
    {
        vmvmpsprimary = value;
    }
    if(value_path == "vmVmpsRowStatus")
    {
        vmvmpsrowstatus = value;
    }
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
    for (std::size_t index=0; index<vmmembershipsummaryentry_.size(); index++)
    {
        if(vmmembershipsummaryentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmmembershipsummarytable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryentry_.size(); index++)
    {
        if(vmmembershipsummaryentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : vmmembershipsummaryentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry>();
        c->parent = this;
        vmmembershipsummaryentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershipsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipsummaryentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmmembershipsummarytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(vmmembershipsummaryvlanindex.operation)
	|| is_set(vmmembershipsummarymember2kports.operation)
	|| is_set(vmmembershipsummarymemberports.operation);
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

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.operation)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipsummarymember2kports.is_set || is_set(vmmembershipsummarymember2kports.operation)) leaf_name_data.push_back(vmmembershipsummarymember2kports.get_name_leafdata());
    if (vmmembershipsummarymemberports.is_set || is_set(vmmembershipsummarymemberports.operation)) leaf_name_data.push_back(vmmembershipsummarymemberports.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmmembershipsummarytable::Vmmembershipsummaryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex = value;
    }
    if(value_path == "vmMembershipSummaryMember2kPorts")
    {
        vmmembershipsummarymember2kports = value;
    }
    if(value_path == "vmMembershipSummaryMemberPorts")
    {
        vmmembershipsummarymemberports = value;
    }
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
    for (std::size_t index=0; index<vmmembershipentry_.size(); index++)
    {
        if(vmmembershipentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmmembershiptable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipentry_.size(); index++)
    {
        if(vmmembershipentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : vmmembershipentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry>();
        c->parent = this;
        vmmembershipentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershiptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmmembershiptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(vmportstatus.operation)
	|| is_set(vmvlan.operation)
	|| is_set(vmvlans.operation)
	|| is_set(vmvlans2k.operation)
	|| is_set(vmvlans3k.operation)
	|| is_set(vmvlans4k.operation)
	|| is_set(vmvlantype.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (vmportstatus.is_set || is_set(vmportstatus.operation)) leaf_name_data.push_back(vmportstatus.get_name_leafdata());
    if (vmvlan.is_set || is_set(vmvlan.operation)) leaf_name_data.push_back(vmvlan.get_name_leafdata());
    if (vmvlans.is_set || is_set(vmvlans.operation)) leaf_name_data.push_back(vmvlans.get_name_leafdata());
    if (vmvlans2k.is_set || is_set(vmvlans2k.operation)) leaf_name_data.push_back(vmvlans2k.get_name_leafdata());
    if (vmvlans3k.is_set || is_set(vmvlans3k.operation)) leaf_name_data.push_back(vmvlans3k.get_name_leafdata());
    if (vmvlans4k.is_set || is_set(vmvlans4k.operation)) leaf_name_data.push_back(vmvlans4k.get_name_leafdata());
    if (vmvlantype.is_set || is_set(vmvlantype.operation)) leaf_name_data.push_back(vmvlantype.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "vmPortStatus")
    {
        vmportstatus = value;
    }
    if(value_path == "vmVlan")
    {
        vmvlan = value;
    }
    if(value_path == "vmVlans")
    {
        vmvlans = value;
    }
    if(value_path == "vmVlans2k")
    {
        vmvlans2k = value;
    }
    if(value_path == "vmVlans3k")
    {
        vmvlans3k = value;
    }
    if(value_path == "vmVlans4k")
    {
        vmvlans4k = value;
    }
    if(value_path == "vmVlanType")
    {
        vmvlantype = value;
    }
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
    for (std::size_t index=0; index<vmmembershipsummaryextentry_.size(); index++)
    {
        if(vmmembershipsummaryextentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmmembershipsummaryexttable::has_operation() const
{
    for (std::size_t index=0; index<vmmembershipsummaryextentry_.size(); index++)
    {
        if(vmmembershipsummaryextentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : vmmembershipsummaryextentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry>();
        c->parent = this;
        vmmembershipsummaryextentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmmembershipsummaryexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmmembershipsummaryextentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmmembershipsummaryexttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(vmmembershipsummaryvlanindex.operation)
	|| is_set(vmmembershipportrangeindex.operation)
	|| is_set(vmmembershipsummaryextports.operation);
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

    if (vmmembershipsummaryvlanindex.is_set || is_set(vmmembershipsummaryvlanindex.operation)) leaf_name_data.push_back(vmmembershipsummaryvlanindex.get_name_leafdata());
    if (vmmembershipportrangeindex.is_set || is_set(vmmembershipportrangeindex.operation)) leaf_name_data.push_back(vmmembershipportrangeindex.get_name_leafdata());
    if (vmmembershipsummaryextports.is_set || is_set(vmmembershipsummaryextports.operation)) leaf_name_data.push_back(vmmembershipsummaryextports.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmmembershipsummaryexttable::Vmmembershipsummaryextentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vmMembershipSummaryVlanIndex")
    {
        vmmembershipsummaryvlanindex = value;
    }
    if(value_path == "vmMembershipPortRangeIndex")
    {
        vmmembershipportrangeindex = value;
    }
    if(value_path == "vmMembershipSummaryExtPorts")
    {
        vmmembershipsummaryextports = value;
    }
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
    for (std::size_t index=0; index<vmvoicevlanentry_.size(); index++)
    {
        if(vmvoicevlanentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoVlanMembershipMib::Vmvoicevlantable::has_operation() const
{
    for (std::size_t index=0; index<vmvoicevlanentry_.size(); index++)
    {
        if(vmvoicevlanentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : vmvoicevlanentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry>();
        c->parent = this;
        vmvoicevlanentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoVlanMembershipMib::Vmvoicevlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vmvoicevlanentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoVlanMembershipMib::Vmvoicevlantable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(vmvoicevlancdpverifyenable.operation)
	|| is_set(vmvoicevlanid.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (vmvoicevlancdpverifyenable.is_set || is_set(vmvoicevlancdpverifyenable.operation)) leaf_name_data.push_back(vmvoicevlancdpverifyenable.get_name_leafdata());
    if (vmvoicevlanid.is_set || is_set(vmvoicevlanid.operation)) leaf_name_data.push_back(vmvoicevlanid.get_name_leafdata());


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

void CiscoVlanMembershipMib::Vmvoicevlantable::Vmvoicevlanentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "vmVoiceVlanCdpVerifyEnable")
    {
        vmvoicevlancdpverifyenable = value;
    }
    if(value_path == "vmVoiceVlanId")
    {
        vmvoicevlanid = value;
    }
}

const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmEnum::ready {1, "ready"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmEnum::execute {2, "execute"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum::other {1, "other"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum::inProgress {2, "inProgress"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum::success {3, "success"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum::noResponse {4, "noResponse"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum::noVmps {5, "noVmps"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum::noDynamicPort {6, "noDynamicPort"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmvmps::VmvmpsreconfirmresultEnum::noHostConnected {7, "noHostConnected"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmmembership::VmvlancreationmodeEnum::automatic {1, "automatic"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembership::VmvlancreationmodeEnum::manual {2, "manual"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmvlantypeEnum::static_ {1, "static"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmvlantypeEnum::dynamic {2, "dynamic"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmvlantypeEnum::multiVlan {3, "multiVlan"};

const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmportstatusEnum::inactive {1, "inactive"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmportstatusEnum::active {2, "active"};
const Enum::YLeaf CiscoVlanMembershipMib::Vmmembershiptable::Vmmembershipentry::VmportstatusEnum::shutdown {3, "shutdown"};


}
}

