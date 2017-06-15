
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_MPLS_TE_EXT_STD_03_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_MPLS_TE_EXT_STD_03_MIB {

CiscoIetfMplsTeExtStd03Mib::CiscoIetfMplsTeExtStd03Mib()
    :
    cmplsnodeconfigtable_(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable>())
	,cmplsnodeiccmaptable_(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable>())
	,cmplsnodeipmaptable_(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable>())
	,cmplstunnelexttable_(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable>())
	,cmplstunnelreverseperftable_(std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable>())
{
    cmplsnodeconfigtable_->parent = this;

    cmplsnodeiccmaptable_->parent = this;

    cmplsnodeipmaptable_->parent = this;

    cmplstunnelexttable_->parent = this;

    cmplstunnelreverseperftable_->parent = this;

    yang_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::~CiscoIetfMplsTeExtStd03Mib()
{
}

bool CiscoIetfMplsTeExtStd03Mib::has_data() const
{
    return (cmplsnodeconfigtable_ !=  nullptr && cmplsnodeconfigtable_->has_data())
	|| (cmplsnodeiccmaptable_ !=  nullptr && cmplsnodeiccmaptable_->has_data())
	|| (cmplsnodeipmaptable_ !=  nullptr && cmplsnodeipmaptable_->has_data())
	|| (cmplstunnelexttable_ !=  nullptr && cmplstunnelexttable_->has_data())
	|| (cmplstunnelreverseperftable_ !=  nullptr && cmplstunnelreverseperftable_->has_data());
}

bool CiscoIetfMplsTeExtStd03Mib::has_operation() const
{
    return is_set(operation)
	|| (cmplsnodeconfigtable_ !=  nullptr && cmplsnodeconfigtable_->has_operation())
	|| (cmplsnodeiccmaptable_ !=  nullptr && cmplsnodeiccmaptable_->has_operation())
	|| (cmplsnodeipmaptable_ !=  nullptr && cmplsnodeipmaptable_->has_operation())
	|| (cmplstunnelexttable_ !=  nullptr && cmplstunnelexttable_->has_operation())
	|| (cmplstunnelreverseperftable_ !=  nullptr && cmplstunnelreverseperftable_->has_operation());
}

std::string CiscoIetfMplsTeExtStd03Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeConfigTable")
    {
        if(cmplsnodeconfigtable_ == nullptr)
        {
            cmplsnodeconfigtable_ = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable>();
        }
        return cmplsnodeconfigtable_;
    }

    if(child_yang_name == "cmplsNodeIccMapTable")
    {
        if(cmplsnodeiccmaptable_ == nullptr)
        {
            cmplsnodeiccmaptable_ = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable>();
        }
        return cmplsnodeiccmaptable_;
    }

    if(child_yang_name == "cmplsNodeIpMapTable")
    {
        if(cmplsnodeipmaptable_ == nullptr)
        {
            cmplsnodeipmaptable_ = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable>();
        }
        return cmplsnodeipmaptable_;
    }

    if(child_yang_name == "cmplsTunnelExtTable")
    {
        if(cmplstunnelexttable_ == nullptr)
        {
            cmplstunnelexttable_ = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable>();
        }
        return cmplstunnelexttable_;
    }

    if(child_yang_name == "cmplsTunnelReversePerfTable")
    {
        if(cmplstunnelreverseperftable_ == nullptr)
        {
            cmplstunnelreverseperftable_ = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable>();
        }
        return cmplstunnelreverseperftable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cmplsnodeconfigtable_ != nullptr)
    {
        children["cmplsNodeConfigTable"] = cmplsnodeconfigtable_;
    }

    if(cmplsnodeiccmaptable_ != nullptr)
    {
        children["cmplsNodeIccMapTable"] = cmplsnodeiccmaptable_;
    }

    if(cmplsnodeipmaptable_ != nullptr)
    {
        children["cmplsNodeIpMapTable"] = cmplsnodeipmaptable_;
    }

    if(cmplstunnelexttable_ != nullptr)
    {
        children["cmplsTunnelExtTable"] = cmplstunnelexttable_;
    }

    if(cmplstunnelreverseperftable_ != nullptr)
    {
        children["cmplsTunnelReversePerfTable"] = cmplstunnelreverseperftable_;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::clone_ptr() const
{
    return std::make_shared<CiscoIetfMplsTeExtStd03Mib>();
}

std::string CiscoIetfMplsTeExtStd03Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfMplsTeExtStd03Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfMplsTeExtStd03Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigtable()
{
    yang_name = "cmplsNodeConfigTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::~Cmplsnodeconfigtable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::has_data() const
{
    for (std::size_t index=0; index<cmplsnodeconfigentry_.size(); index++)
    {
        if(cmplsnodeconfigentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeconfigentry_.size(); index++)
    {
        if(cmplsnodeconfigentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeConfigEntry")
    {
        for(auto const & c : cmplsnodeconfigentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry>();
        c->parent = this;
        cmplsnodeconfigentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsnodeconfigentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::Cmplsnodeconfigentry()
    :
    cmplsnodeconfiglocalid{YType::uint32, "cmplsNodeConfigLocalId"},
    cmplsnodeconfigglobalid{YType::str, "cmplsNodeConfigGlobalId"},
    cmplsnodeconfigiccid{YType::str, "cmplsNodeConfigIccId"},
    cmplsnodeconfignodeid{YType::uint32, "cmplsNodeConfigNodeId"},
    cmplsnodeconfigrowstatus{YType::enumeration, "cmplsNodeConfigRowStatus"},
    cmplsnodeconfigstoragetype{YType::enumeration, "cmplsNodeConfigStorageType"}
{
    yang_name = "cmplsNodeConfigEntry"; yang_parent_name = "cmplsNodeConfigTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::~Cmplsnodeconfigentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::has_data() const
{
    return cmplsnodeconfiglocalid.is_set
	|| cmplsnodeconfigglobalid.is_set
	|| cmplsnodeconfigiccid.is_set
	|| cmplsnodeconfignodeid.is_set
	|| cmplsnodeconfigrowstatus.is_set
	|| cmplsnodeconfigstoragetype.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmplsnodeconfiglocalid.operation)
	|| is_set(cmplsnodeconfigglobalid.operation)
	|| is_set(cmplsnodeconfigiccid.operation)
	|| is_set(cmplsnodeconfignodeid.operation)
	|| is_set(cmplsnodeconfigrowstatus.operation)
	|| is_set(cmplsnodeconfigstoragetype.operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeConfigEntry" <<"[cmplsNodeConfigLocalId='" <<cmplsnodeconfiglocalid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeconfiglocalid.is_set || is_set(cmplsnodeconfiglocalid.operation)) leaf_name_data.push_back(cmplsnodeconfiglocalid.get_name_leafdata());
    if (cmplsnodeconfigglobalid.is_set || is_set(cmplsnodeconfigglobalid.operation)) leaf_name_data.push_back(cmplsnodeconfigglobalid.get_name_leafdata());
    if (cmplsnodeconfigiccid.is_set || is_set(cmplsnodeconfigiccid.operation)) leaf_name_data.push_back(cmplsnodeconfigiccid.get_name_leafdata());
    if (cmplsnodeconfignodeid.is_set || is_set(cmplsnodeconfignodeid.operation)) leaf_name_data.push_back(cmplsnodeconfignodeid.get_name_leafdata());
    if (cmplsnodeconfigrowstatus.is_set || is_set(cmplsnodeconfigrowstatus.operation)) leaf_name_data.push_back(cmplsnodeconfigrowstatus.get_name_leafdata());
    if (cmplsnodeconfigstoragetype.is_set || is_set(cmplsnodeconfigstoragetype.operation)) leaf_name_data.push_back(cmplsnodeconfigstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeconfigtable::Cmplsnodeconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmplsNodeConfigLocalId")
    {
        cmplsnodeconfiglocalid = value;
    }
    if(value_path == "cmplsNodeConfigGlobalId")
    {
        cmplsnodeconfigglobalid = value;
    }
    if(value_path == "cmplsNodeConfigIccId")
    {
        cmplsnodeconfigiccid = value;
    }
    if(value_path == "cmplsNodeConfigNodeId")
    {
        cmplsnodeconfignodeid = value;
    }
    if(value_path == "cmplsNodeConfigRowStatus")
    {
        cmplsnodeconfigrowstatus = value;
    }
    if(value_path == "cmplsNodeConfigStorageType")
    {
        cmplsnodeconfigstoragetype = value;
    }
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmaptable()
{
    yang_name = "cmplsNodeIpMapTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::~Cmplsnodeipmaptable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::has_data() const
{
    for (std::size_t index=0; index<cmplsnodeipmapentry_.size(); index++)
    {
        if(cmplsnodeipmapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeipmapentry_.size(); index++)
    {
        if(cmplsnodeipmapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIpMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeIpMapEntry")
    {
        for(auto const & c : cmplsnodeipmapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry>();
        c->parent = this;
        cmplsnodeipmapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsnodeipmapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::Cmplsnodeipmapentry()
    :
    cmplsnodeipmapglobalid{YType::str, "cmplsNodeIpMapGlobalId"},
    cmplsnodeipmapnodeid{YType::uint32, "cmplsNodeIpMapNodeId"},
    cmplsnodeipmaplocalid{YType::uint32, "cmplsNodeIpMapLocalId"}
{
    yang_name = "cmplsNodeIpMapEntry"; yang_parent_name = "cmplsNodeIpMapTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::~Cmplsnodeipmapentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::has_data() const
{
    return cmplsnodeipmapglobalid.is_set
	|| cmplsnodeipmapnodeid.is_set
	|| cmplsnodeipmaplocalid.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmplsnodeipmapglobalid.operation)
	|| is_set(cmplsnodeipmapnodeid.operation)
	|| is_set(cmplsnodeipmaplocalid.operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIpMapEntry" <<"[cmplsNodeIpMapGlobalId='" <<cmplsnodeipmapglobalid <<"']" <<"[cmplsNodeIpMapNodeId='" <<cmplsnodeipmapnodeid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeIpMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeipmapglobalid.is_set || is_set(cmplsnodeipmapglobalid.operation)) leaf_name_data.push_back(cmplsnodeipmapglobalid.get_name_leafdata());
    if (cmplsnodeipmapnodeid.is_set || is_set(cmplsnodeipmapnodeid.operation)) leaf_name_data.push_back(cmplsnodeipmapnodeid.get_name_leafdata());
    if (cmplsnodeipmaplocalid.is_set || is_set(cmplsnodeipmaplocalid.operation)) leaf_name_data.push_back(cmplsnodeipmaplocalid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeipmaptable::Cmplsnodeipmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmplsNodeIpMapGlobalId")
    {
        cmplsnodeipmapglobalid = value;
    }
    if(value_path == "cmplsNodeIpMapNodeId")
    {
        cmplsnodeipmapnodeid = value;
    }
    if(value_path == "cmplsNodeIpMapLocalId")
    {
        cmplsnodeipmaplocalid = value;
    }
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmaptable()
{
    yang_name = "cmplsNodeIccMapTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::~Cmplsnodeiccmaptable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::has_data() const
{
    for (std::size_t index=0; index<cmplsnodeiccmapentry_.size(); index++)
    {
        if(cmplsnodeiccmapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::has_operation() const
{
    for (std::size_t index=0; index<cmplsnodeiccmapentry_.size(); index++)
    {
        if(cmplsnodeiccmapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIccMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsNodeIccMapEntry")
    {
        for(auto const & c : cmplsnodeiccmapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry>();
        c->parent = this;
        cmplsnodeiccmapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsnodeiccmapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::Cmplsnodeiccmapentry()
    :
    cmplsnodeiccmapiccid{YType::str, "cmplsNodeIccMapIccId"},
    cmplsnodeiccmaplocalid{YType::uint32, "cmplsNodeIccMapLocalId"}
{
    yang_name = "cmplsNodeIccMapEntry"; yang_parent_name = "cmplsNodeIccMapTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::~Cmplsnodeiccmapentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::has_data() const
{
    return cmplsnodeiccmapiccid.is_set
	|| cmplsnodeiccmaplocalid.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmplsnodeiccmapiccid.operation)
	|| is_set(cmplsnodeiccmaplocalid.operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsNodeIccMapEntry" <<"[cmplsNodeIccMapIccId='" <<cmplsnodeiccmapiccid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsNodeIccMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsnodeiccmapiccid.is_set || is_set(cmplsnodeiccmapiccid.operation)) leaf_name_data.push_back(cmplsnodeiccmapiccid.get_name_leafdata());
    if (cmplsnodeiccmaplocalid.is_set || is_set(cmplsnodeiccmaplocalid.operation)) leaf_name_data.push_back(cmplsnodeiccmaplocalid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplsnodeiccmaptable::Cmplsnodeiccmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmplsNodeIccMapIccId")
    {
        cmplsnodeiccmapiccid = value;
    }
    if(value_path == "cmplsNodeIccMapLocalId")
    {
        cmplsnodeiccmaplocalid = value;
    }
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelexttable()
{
    yang_name = "cmplsTunnelExtTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::~Cmplstunnelexttable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::has_data() const
{
    for (std::size_t index=0; index<cmplstunnelextentry_.size(); index++)
    {
        if(cmplstunnelextentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::has_operation() const
{
    for (std::size_t index=0; index<cmplstunnelextentry_.size(); index++)
    {
        if(cmplstunnelextentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelExtTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsTunnelExtEntry")
    {
        for(auto const & c : cmplstunnelextentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry>();
        c->parent = this;
        cmplstunnelextentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplstunnelextentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::Cmplstunnelextentry()
    :
    mplstunnelindex{YType::str, "mplsTunnelIndex"},
    mplstunnelinstance{YType::str, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::str, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::str, "mplsTunnelEgressLSRId"},
    cmplstunnelextdesttnlindex{YType::uint32, "cmplsTunnelExtDestTnlIndex"},
    cmplstunnelextdesttnllspindex{YType::uint32, "cmplsTunnelExtDestTnlLspIndex"},
    cmplstunnelextdesttnlvalid{YType::boolean, "cmplsTunnelExtDestTnlValid"},
    cmplstunnelextoppositedirtnlvalid{YType::boolean, "cmplsTunnelExtOppositeDirTnlValid"},
    cmplstunneloppositedirptr{YType::str, "cmplsTunnelOppositeDirPtr"}
{
    yang_name = "cmplsTunnelExtEntry"; yang_parent_name = "cmplsTunnelExtTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::~Cmplstunnelextentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::has_data() const
{
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| cmplstunnelextdesttnlindex.is_set
	|| cmplstunnelextdesttnllspindex.is_set
	|| cmplstunnelextdesttnlvalid.is_set
	|| cmplstunnelextoppositedirtnlvalid.is_set
	|| cmplstunneloppositedirptr.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelindex.operation)
	|| is_set(mplstunnelinstance.operation)
	|| is_set(mplstunnelingresslsrid.operation)
	|| is_set(mplstunnelegresslsrid.operation)
	|| is_set(cmplstunnelextdesttnlindex.operation)
	|| is_set(cmplstunnelextdesttnllspindex.operation)
	|| is_set(cmplstunnelextdesttnlvalid.operation)
	|| is_set(cmplstunnelextoppositedirtnlvalid.operation)
	|| is_set(cmplstunneloppositedirptr.operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelExtEntry" <<"[mplsTunnelIndex='" <<mplstunnelindex <<"']" <<"[mplsTunnelInstance='" <<mplstunnelinstance <<"']" <<"[mplsTunnelIngressLSRId='" <<mplstunnelingresslsrid <<"']" <<"[mplsTunnelEgressLSRId='" <<mplstunnelegresslsrid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsTunnelExtTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.operation)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.operation)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.operation)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.operation)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (cmplstunnelextdesttnlindex.is_set || is_set(cmplstunnelextdesttnlindex.operation)) leaf_name_data.push_back(cmplstunnelextdesttnlindex.get_name_leafdata());
    if (cmplstunnelextdesttnllspindex.is_set || is_set(cmplstunnelextdesttnllspindex.operation)) leaf_name_data.push_back(cmplstunnelextdesttnllspindex.get_name_leafdata());
    if (cmplstunnelextdesttnlvalid.is_set || is_set(cmplstunnelextdesttnlvalid.operation)) leaf_name_data.push_back(cmplstunnelextdesttnlvalid.get_name_leafdata());
    if (cmplstunnelextoppositedirtnlvalid.is_set || is_set(cmplstunnelextoppositedirtnlvalid.operation)) leaf_name_data.push_back(cmplstunnelextoppositedirtnlvalid.get_name_leafdata());
    if (cmplstunneloppositedirptr.is_set || is_set(cmplstunneloppositedirptr.operation)) leaf_name_data.push_back(cmplstunneloppositedirptr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelexttable::Cmplstunnelextentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex = value;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance = value;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid = value;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid = value;
    }
    if(value_path == "cmplsTunnelExtDestTnlIndex")
    {
        cmplstunnelextdesttnlindex = value;
    }
    if(value_path == "cmplsTunnelExtDestTnlLspIndex")
    {
        cmplstunnelextdesttnllspindex = value;
    }
    if(value_path == "cmplsTunnelExtDestTnlValid")
    {
        cmplstunnelextdesttnlvalid = value;
    }
    if(value_path == "cmplsTunnelExtOppositeDirTnlValid")
    {
        cmplstunnelextoppositedirtnlvalid = value;
    }
    if(value_path == "cmplsTunnelOppositeDirPtr")
    {
        cmplstunneloppositedirptr = value;
    }
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperftable()
{
    yang_name = "cmplsTunnelReversePerfTable"; yang_parent_name = "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::~Cmplstunnelreverseperftable()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::has_data() const
{
    for (std::size_t index=0; index<cmplstunnelreverseperfentry_.size(); index++)
    {
        if(cmplstunnelreverseperfentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::has_operation() const
{
    for (std::size_t index=0; index<cmplstunnelreverseperfentry_.size(); index++)
    {
        if(cmplstunnelreverseperfentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelReversePerfTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsTunnelReversePerfEntry")
    {
        for(auto const & c : cmplstunnelreverseperfentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry>();
        c->parent = this;
        cmplstunnelreverseperfentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplstunnelreverseperfentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::Cmplstunnelreverseperfentry()
    :
    mplstunnelindex{YType::str, "mplsTunnelIndex"},
    mplstunnelinstance{YType::str, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::str, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::str, "mplsTunnelEgressLSRId"},
    cmplstunnelreverseperfbytes{YType::uint32, "cmplsTunnelReversePerfBytes"},
    cmplstunnelreverseperferrors{YType::uint32, "cmplsTunnelReversePerfErrors"},
    cmplstunnelreverseperfhcbytes{YType::uint64, "cmplsTunnelReversePerfHCBytes"},
    cmplstunnelreverseperfhcpackets{YType::uint64, "cmplsTunnelReversePerfHCPackets"},
    cmplstunnelreverseperfpackets{YType::uint32, "cmplsTunnelReversePerfPackets"}
{
    yang_name = "cmplsTunnelReversePerfEntry"; yang_parent_name = "cmplsTunnelReversePerfTable";
}

CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::~Cmplstunnelreverseperfentry()
{
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::has_data() const
{
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| cmplstunnelreverseperfbytes.is_set
	|| cmplstunnelreverseperferrors.is_set
	|| cmplstunnelreverseperfhcbytes.is_set
	|| cmplstunnelreverseperfhcpackets.is_set
	|| cmplstunnelreverseperfpackets.is_set;
}

bool CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelindex.operation)
	|| is_set(mplstunnelinstance.operation)
	|| is_set(mplstunnelingresslsrid.operation)
	|| is_set(mplstunnelegresslsrid.operation)
	|| is_set(cmplstunnelreverseperfbytes.operation)
	|| is_set(cmplstunnelreverseperferrors.operation)
	|| is_set(cmplstunnelreverseperfhcbytes.operation)
	|| is_set(cmplstunnelreverseperfhcpackets.operation)
	|| is_set(cmplstunnelreverseperfpackets.operation);
}

std::string CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsTunnelReversePerfEntry" <<"[mplsTunnelIndex='" <<mplstunnelindex <<"']" <<"[mplsTunnelInstance='" <<mplstunnelinstance <<"']" <<"[mplsTunnelIngressLSRId='" <<mplstunnelingresslsrid <<"']" <<"[mplsTunnelEgressLSRId='" <<mplstunnelegresslsrid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-MPLS-TE-EXT-STD-03-MIB:CISCO-IETF-MPLS-TE-EXT-STD-03-MIB/cmplsTunnelReversePerfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.operation)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.operation)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.operation)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.operation)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (cmplstunnelreverseperfbytes.is_set || is_set(cmplstunnelreverseperfbytes.operation)) leaf_name_data.push_back(cmplstunnelreverseperfbytes.get_name_leafdata());
    if (cmplstunnelreverseperferrors.is_set || is_set(cmplstunnelreverseperferrors.operation)) leaf_name_data.push_back(cmplstunnelreverseperferrors.get_name_leafdata());
    if (cmplstunnelreverseperfhcbytes.is_set || is_set(cmplstunnelreverseperfhcbytes.operation)) leaf_name_data.push_back(cmplstunnelreverseperfhcbytes.get_name_leafdata());
    if (cmplstunnelreverseperfhcpackets.is_set || is_set(cmplstunnelreverseperfhcpackets.operation)) leaf_name_data.push_back(cmplstunnelreverseperfhcpackets.get_name_leafdata());
    if (cmplstunnelreverseperfpackets.is_set || is_set(cmplstunnelreverseperfpackets.operation)) leaf_name_data.push_back(cmplstunnelreverseperfpackets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfMplsTeExtStd03Mib::Cmplstunnelreverseperftable::Cmplstunnelreverseperfentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex = value;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance = value;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid = value;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid = value;
    }
    if(value_path == "cmplsTunnelReversePerfBytes")
    {
        cmplstunnelreverseperfbytes = value;
    }
    if(value_path == "cmplsTunnelReversePerfErrors")
    {
        cmplstunnelreverseperferrors = value;
    }
    if(value_path == "cmplsTunnelReversePerfHCBytes")
    {
        cmplstunnelreverseperfhcbytes = value;
    }
    if(value_path == "cmplsTunnelReversePerfHCPackets")
    {
        cmplstunnelreverseperfhcpackets = value;
    }
    if(value_path == "cmplsTunnelReversePerfPackets")
    {
        cmplstunnelreverseperfpackets = value;
    }
}


}
}

