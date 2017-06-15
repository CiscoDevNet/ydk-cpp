
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_VPN_MIB.hpp"

namespace ydk {
namespace MPLS_VPN_MIB {

MplsVpnMib::MplsVpnMib()
    :
    mplsvpninterfaceconftable_(std::make_shared<MplsVpnMib::Mplsvpninterfaceconftable>())
	,mplsvpnscalars_(std::make_shared<MplsVpnMib::Mplsvpnscalars>())
	,mplsvpnvrfbgpnbraddrtable_(std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbraddrtable>())
	,mplsvpnvrfbgpnbrprefixtable_(std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable>())
	,mplsvpnvrfroutetable_(std::make_shared<MplsVpnMib::Mplsvpnvrfroutetable>())
	,mplsvpnvrfroutetargettable_(std::make_shared<MplsVpnMib::Mplsvpnvrfroutetargettable>())
	,mplsvpnvrftable_(std::make_shared<MplsVpnMib::Mplsvpnvrftable>())
{
    mplsvpninterfaceconftable_->parent = this;

    mplsvpnscalars_->parent = this;

    mplsvpnvrfbgpnbraddrtable_->parent = this;

    mplsvpnvrfbgpnbrprefixtable_->parent = this;

    mplsvpnvrfroutetable_->parent = this;

    mplsvpnvrfroutetargettable_->parent = this;

    mplsvpnvrftable_->parent = this;

    yang_name = "MPLS-VPN-MIB"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::~MplsVpnMib()
{
}

bool MplsVpnMib::has_data() const
{
    return (mplsvpninterfaceconftable_ !=  nullptr && mplsvpninterfaceconftable_->has_data())
	|| (mplsvpnscalars_ !=  nullptr && mplsvpnscalars_->has_data())
	|| (mplsvpnvrfbgpnbraddrtable_ !=  nullptr && mplsvpnvrfbgpnbraddrtable_->has_data())
	|| (mplsvpnvrfbgpnbrprefixtable_ !=  nullptr && mplsvpnvrfbgpnbrprefixtable_->has_data())
	|| (mplsvpnvrfroutetable_ !=  nullptr && mplsvpnvrfroutetable_->has_data())
	|| (mplsvpnvrfroutetargettable_ !=  nullptr && mplsvpnvrfroutetargettable_->has_data())
	|| (mplsvpnvrftable_ !=  nullptr && mplsvpnvrftable_->has_data());
}

bool MplsVpnMib::has_operation() const
{
    return is_set(operation)
	|| (mplsvpninterfaceconftable_ !=  nullptr && mplsvpninterfaceconftable_->has_operation())
	|| (mplsvpnscalars_ !=  nullptr && mplsvpnscalars_->has_operation())
	|| (mplsvpnvrfbgpnbraddrtable_ !=  nullptr && mplsvpnvrfbgpnbraddrtable_->has_operation())
	|| (mplsvpnvrfbgpnbrprefixtable_ !=  nullptr && mplsvpnvrfbgpnbrprefixtable_->has_operation())
	|| (mplsvpnvrfroutetable_ !=  nullptr && mplsvpnvrfroutetable_->has_operation())
	|| (mplsvpnvrfroutetargettable_ !=  nullptr && mplsvpnvrfroutetargettable_->has_operation())
	|| (mplsvpnvrftable_ !=  nullptr && mplsvpnvrftable_->has_operation());
}

std::string MplsVpnMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsVpnMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnInterfaceConfTable")
    {
        if(mplsvpninterfaceconftable_ == nullptr)
        {
            mplsvpninterfaceconftable_ = std::make_shared<MplsVpnMib::Mplsvpninterfaceconftable>();
        }
        return mplsvpninterfaceconftable_;
    }

    if(child_yang_name == "mplsVpnScalars")
    {
        if(mplsvpnscalars_ == nullptr)
        {
            mplsvpnscalars_ = std::make_shared<MplsVpnMib::Mplsvpnscalars>();
        }
        return mplsvpnscalars_;
    }

    if(child_yang_name == "mplsVpnVrfBgpNbrAddrTable")
    {
        if(mplsvpnvrfbgpnbraddrtable_ == nullptr)
        {
            mplsvpnvrfbgpnbraddrtable_ = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbraddrtable>();
        }
        return mplsvpnvrfbgpnbraddrtable_;
    }

    if(child_yang_name == "mplsVpnVrfBgpNbrPrefixTable")
    {
        if(mplsvpnvrfbgpnbrprefixtable_ == nullptr)
        {
            mplsvpnvrfbgpnbrprefixtable_ = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable>();
        }
        return mplsvpnvrfbgpnbrprefixtable_;
    }

    if(child_yang_name == "mplsVpnVrfRouteTable")
    {
        if(mplsvpnvrfroutetable_ == nullptr)
        {
            mplsvpnvrfroutetable_ = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetable>();
        }
        return mplsvpnvrfroutetable_;
    }

    if(child_yang_name == "mplsVpnVrfRouteTargetTable")
    {
        if(mplsvpnvrfroutetargettable_ == nullptr)
        {
            mplsvpnvrfroutetargettable_ = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetargettable>();
        }
        return mplsvpnvrfroutetargettable_;
    }

    if(child_yang_name == "mplsVpnVrfTable")
    {
        if(mplsvpnvrftable_ == nullptr)
        {
            mplsvpnvrftable_ = std::make_shared<MplsVpnMib::Mplsvpnvrftable>();
        }
        return mplsvpnvrftable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsvpninterfaceconftable_ != nullptr)
    {
        children["mplsVpnInterfaceConfTable"] = mplsvpninterfaceconftable_;
    }

    if(mplsvpnscalars_ != nullptr)
    {
        children["mplsVpnScalars"] = mplsvpnscalars_;
    }

    if(mplsvpnvrfbgpnbraddrtable_ != nullptr)
    {
        children["mplsVpnVrfBgpNbrAddrTable"] = mplsvpnvrfbgpnbraddrtable_;
    }

    if(mplsvpnvrfbgpnbrprefixtable_ != nullptr)
    {
        children["mplsVpnVrfBgpNbrPrefixTable"] = mplsvpnvrfbgpnbrprefixtable_;
    }

    if(mplsvpnvrfroutetable_ != nullptr)
    {
        children["mplsVpnVrfRouteTable"] = mplsvpnvrfroutetable_;
    }

    if(mplsvpnvrfroutetargettable_ != nullptr)
    {
        children["mplsVpnVrfRouteTargetTable"] = mplsvpnvrfroutetargettable_;
    }

    if(mplsvpnvrftable_ != nullptr)
    {
        children["mplsVpnVrfTable"] = mplsvpnvrftable_;
    }

    return children;
}

void MplsVpnMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsVpnMib::clone_ptr() const
{
    return std::make_shared<MplsVpnMib>();
}

std::string MplsVpnMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsVpnMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsVpnMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

MplsVpnMib::Mplsvpnscalars::Mplsvpnscalars()
    :
    mplsvpnactivevrfs{YType::uint32, "mplsVpnActiveVrfs"},
    mplsvpnconfiguredvrfs{YType::uint32, "mplsVpnConfiguredVrfs"},
    mplsvpnconnectedinterfaces{YType::uint32, "mplsVpnConnectedInterfaces"},
    mplsvpnnotificationenable{YType::boolean, "mplsVpnNotificationEnable"},
    mplsvpnvrfconfmaxpossibleroutes{YType::uint32, "mplsVpnVrfConfMaxPossibleRoutes"}
{
    yang_name = "mplsVpnScalars"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::Mplsvpnscalars::~Mplsvpnscalars()
{
}

bool MplsVpnMib::Mplsvpnscalars::has_data() const
{
    return mplsvpnactivevrfs.is_set
	|| mplsvpnconfiguredvrfs.is_set
	|| mplsvpnconnectedinterfaces.is_set
	|| mplsvpnnotificationenable.is_set
	|| mplsvpnvrfconfmaxpossibleroutes.is_set;
}

bool MplsVpnMib::Mplsvpnscalars::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsvpnactivevrfs.operation)
	|| is_set(mplsvpnconfiguredvrfs.operation)
	|| is_set(mplsvpnconnectedinterfaces.operation)
	|| is_set(mplsvpnnotificationenable.operation)
	|| is_set(mplsvpnvrfconfmaxpossibleroutes.operation);
}

std::string MplsVpnMib::Mplsvpnscalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnScalars";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnscalars::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnactivevrfs.is_set || is_set(mplsvpnactivevrfs.operation)) leaf_name_data.push_back(mplsvpnactivevrfs.get_name_leafdata());
    if (mplsvpnconfiguredvrfs.is_set || is_set(mplsvpnconfiguredvrfs.operation)) leaf_name_data.push_back(mplsvpnconfiguredvrfs.get_name_leafdata());
    if (mplsvpnconnectedinterfaces.is_set || is_set(mplsvpnconnectedinterfaces.operation)) leaf_name_data.push_back(mplsvpnconnectedinterfaces.get_name_leafdata());
    if (mplsvpnnotificationenable.is_set || is_set(mplsvpnnotificationenable.operation)) leaf_name_data.push_back(mplsvpnnotificationenable.get_name_leafdata());
    if (mplsvpnvrfconfmaxpossibleroutes.is_set || is_set(mplsvpnvrfconfmaxpossibleroutes.operation)) leaf_name_data.push_back(mplsvpnvrfconfmaxpossibleroutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnscalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnscalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsVpnMib::Mplsvpnscalars::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsVpnActiveVrfs")
    {
        mplsvpnactivevrfs = value;
    }
    if(value_path == "mplsVpnConfiguredVrfs")
    {
        mplsvpnconfiguredvrfs = value;
    }
    if(value_path == "mplsVpnConnectedInterfaces")
    {
        mplsvpnconnectedinterfaces = value;
    }
    if(value_path == "mplsVpnNotificationEnable")
    {
        mplsvpnnotificationenable = value;
    }
    if(value_path == "mplsVpnVrfConfMaxPossibleRoutes")
    {
        mplsvpnvrfconfmaxpossibleroutes = value;
    }
}

MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconftable()
{
    yang_name = "mplsVpnInterfaceConfTable"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::Mplsvpninterfaceconftable::~Mplsvpninterfaceconftable()
{
}

bool MplsVpnMib::Mplsvpninterfaceconftable::has_data() const
{
    for (std::size_t index=0; index<mplsvpninterfaceconfentry_.size(); index++)
    {
        if(mplsvpninterfaceconfentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpninterfaceconftable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpninterfaceconfentry_.size(); index++)
    {
        if(mplsvpninterfaceconfentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsVpnMib::Mplsvpninterfaceconftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnInterfaceConfTable";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpninterfaceconftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpninterfaceconftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnInterfaceConfEntry")
    {
        for(auto const & c : mplsvpninterfaceconfentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry>();
        c->parent = this;
        mplsvpninterfaceconfentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpninterfaceconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpninterfaceconfentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpninterfaceconftable::set_value(const std::string & value_path, std::string value)
{
}

MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfaceconfentry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpninterfaceconfindex{YType::int32, "mplsVpnInterfaceConfIndex"},
    mplsvpninterfaceconfrowstatus{YType::enumeration, "mplsVpnInterfaceConfRowStatus"},
    mplsvpninterfaceconfstoragetype{YType::enumeration, "mplsVpnInterfaceConfStorageType"},
    mplsvpninterfacelabeledgetype{YType::enumeration, "mplsVpnInterfaceLabelEdgeType"},
    mplsvpninterfacevpnclassification{YType::enumeration, "mplsVpnInterfaceVpnClassification"},
    mplsvpninterfacevpnroutedistprotocol{YType::bits, "mplsVpnInterfaceVpnRouteDistProtocol"}
{
    yang_name = "mplsVpnInterfaceConfEntry"; yang_parent_name = "mplsVpnInterfaceConfTable";
}

MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::~Mplsvpninterfaceconfentry()
{
}

bool MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::has_data() const
{
    return mplsvpnvrfname.is_set
	|| mplsvpninterfaceconfindex.is_set
	|| mplsvpninterfaceconfrowstatus.is_set
	|| mplsvpninterfaceconfstoragetype.is_set
	|| mplsvpninterfacelabeledgetype.is_set
	|| mplsvpninterfacevpnclassification.is_set
	|| mplsvpninterfacevpnroutedistprotocol.is_set;
}

bool MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsvpnvrfname.operation)
	|| is_set(mplsvpninterfaceconfindex.operation)
	|| is_set(mplsvpninterfaceconfrowstatus.operation)
	|| is_set(mplsvpninterfaceconfstoragetype.operation)
	|| is_set(mplsvpninterfacelabeledgetype.operation)
	|| is_set(mplsvpninterfacevpnclassification.operation)
	|| is_set(mplsvpninterfacevpnroutedistprotocol.operation);
}

std::string MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnInterfaceConfEntry" <<"[mplsVpnVrfName='" <<mplsvpnvrfname <<"']" <<"[mplsVpnInterfaceConfIndex='" <<mplsvpninterfaceconfindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnInterfaceConfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.operation)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpninterfaceconfindex.is_set || is_set(mplsvpninterfaceconfindex.operation)) leaf_name_data.push_back(mplsvpninterfaceconfindex.get_name_leafdata());
    if (mplsvpninterfaceconfrowstatus.is_set || is_set(mplsvpninterfaceconfrowstatus.operation)) leaf_name_data.push_back(mplsvpninterfaceconfrowstatus.get_name_leafdata());
    if (mplsvpninterfaceconfstoragetype.is_set || is_set(mplsvpninterfaceconfstoragetype.operation)) leaf_name_data.push_back(mplsvpninterfaceconfstoragetype.get_name_leafdata());
    if (mplsvpninterfacelabeledgetype.is_set || is_set(mplsvpninterfacelabeledgetype.operation)) leaf_name_data.push_back(mplsvpninterfacelabeledgetype.get_name_leafdata());
    if (mplsvpninterfacevpnclassification.is_set || is_set(mplsvpninterfacevpnclassification.operation)) leaf_name_data.push_back(mplsvpninterfacevpnclassification.get_name_leafdata());
    if (mplsvpninterfacevpnroutedistprotocol.is_set || is_set(mplsvpninterfacevpnroutedistprotocol.operation)) leaf_name_data.push_back(mplsvpninterfacevpnroutedistprotocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
    }
    if(value_path == "mplsVpnInterfaceConfIndex")
    {
        mplsvpninterfaceconfindex = value;
    }
    if(value_path == "mplsVpnInterfaceConfRowStatus")
    {
        mplsvpninterfaceconfrowstatus = value;
    }
    if(value_path == "mplsVpnInterfaceConfStorageType")
    {
        mplsvpninterfaceconfstoragetype = value;
    }
    if(value_path == "mplsVpnInterfaceLabelEdgeType")
    {
        mplsvpninterfacelabeledgetype = value;
    }
    if(value_path == "mplsVpnInterfaceVpnClassification")
    {
        mplsvpninterfacevpnclassification = value;
    }
    if(value_path == "mplsVpnInterfaceVpnRouteDistProtocol")
    {
        mplsvpninterfacevpnroutedistprotocol[value] = true;
    }
}

MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrftable()
{
    yang_name = "mplsVpnVrfTable"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::Mplsvpnvrftable::~Mplsvpnvrftable()
{
}

bool MplsVpnMib::Mplsvpnvrftable::has_data() const
{
    for (std::size_t index=0; index<mplsvpnvrfentry_.size(); index++)
    {
        if(mplsvpnvrfentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrftable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfentry_.size(); index++)
    {
        if(mplsvpnvrfentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsVpnMib::Mplsvpnvrftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfTable";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfEntry")
    {
        for(auto const & c : mplsvpnvrfentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry>();
        c->parent = this;
        mplsvpnvrfentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrftable::set_value(const std::string & value_path, std::string value)
{
}

MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::Mplsvpnvrfentry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfactiveinterfaces{YType::uint32, "mplsVpnVrfActiveInterfaces"},
    mplsvpnvrfassociatedinterfaces{YType::uint32, "mplsVpnVrfAssociatedInterfaces"},
    mplsvpnvrfconfhighroutethreshold{YType::uint32, "mplsVpnVrfConfHighRouteThreshold"},
    mplsvpnvrfconflastchanged{YType::uint32, "mplsVpnVrfConfLastChanged"},
    mplsvpnvrfconfmaxroutes{YType::uint32, "mplsVpnVrfConfMaxRoutes"},
    mplsvpnvrfconfmidroutethreshold{YType::uint32, "mplsVpnVrfConfMidRouteThreshold"},
    mplsvpnvrfconfrowstatus{YType::enumeration, "mplsVpnVrfConfRowStatus"},
    mplsvpnvrfconfstoragetype{YType::enumeration, "mplsVpnVrfConfStorageType"},
    mplsvpnvrfcreationtime{YType::uint32, "mplsVpnVrfCreationTime"},
    mplsvpnvrfdescription{YType::str, "mplsVpnVrfDescription"},
    mplsvpnvrfoperstatus{YType::enumeration, "mplsVpnVrfOperStatus"},
    mplsvpnvrfperfcurrnumroutes{YType::uint32, "mplsVpnVrfPerfCurrNumRoutes"},
    mplsvpnvrfperfroutesadded{YType::uint32, "mplsVpnVrfPerfRoutesAdded"},
    mplsvpnvrfperfroutesdeleted{YType::uint32, "mplsVpnVrfPerfRoutesDeleted"},
    mplsvpnvrfroutedistinguisher{YType::str, "mplsVpnVrfRouteDistinguisher"},
    mplsvpnvrfsecillegallabelrcvthresh{YType::uint32, "mplsVpnVrfSecIllegalLabelRcvThresh"},
    mplsvpnvrfsecillegallabelviolations{YType::uint32, "mplsVpnVrfSecIllegalLabelViolations"}
{
    yang_name = "mplsVpnVrfEntry"; yang_parent_name = "mplsVpnVrfTable";
}

MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::~Mplsvpnvrfentry()
{
}

bool MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::has_data() const
{
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfactiveinterfaces.is_set
	|| mplsvpnvrfassociatedinterfaces.is_set
	|| mplsvpnvrfconfhighroutethreshold.is_set
	|| mplsvpnvrfconflastchanged.is_set
	|| mplsvpnvrfconfmaxroutes.is_set
	|| mplsvpnvrfconfmidroutethreshold.is_set
	|| mplsvpnvrfconfrowstatus.is_set
	|| mplsvpnvrfconfstoragetype.is_set
	|| mplsvpnvrfcreationtime.is_set
	|| mplsvpnvrfdescription.is_set
	|| mplsvpnvrfoperstatus.is_set
	|| mplsvpnvrfperfcurrnumroutes.is_set
	|| mplsvpnvrfperfroutesadded.is_set
	|| mplsvpnvrfperfroutesdeleted.is_set
	|| mplsvpnvrfroutedistinguisher.is_set
	|| mplsvpnvrfsecillegallabelrcvthresh.is_set
	|| mplsvpnvrfsecillegallabelviolations.is_set;
}

bool MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsvpnvrfname.operation)
	|| is_set(mplsvpnvrfactiveinterfaces.operation)
	|| is_set(mplsvpnvrfassociatedinterfaces.operation)
	|| is_set(mplsvpnvrfconfhighroutethreshold.operation)
	|| is_set(mplsvpnvrfconflastchanged.operation)
	|| is_set(mplsvpnvrfconfmaxroutes.operation)
	|| is_set(mplsvpnvrfconfmidroutethreshold.operation)
	|| is_set(mplsvpnvrfconfrowstatus.operation)
	|| is_set(mplsvpnvrfconfstoragetype.operation)
	|| is_set(mplsvpnvrfcreationtime.operation)
	|| is_set(mplsvpnvrfdescription.operation)
	|| is_set(mplsvpnvrfoperstatus.operation)
	|| is_set(mplsvpnvrfperfcurrnumroutes.operation)
	|| is_set(mplsvpnvrfperfroutesadded.operation)
	|| is_set(mplsvpnvrfperfroutesdeleted.operation)
	|| is_set(mplsvpnvrfroutedistinguisher.operation)
	|| is_set(mplsvpnvrfsecillegallabelrcvthresh.operation)
	|| is_set(mplsvpnvrfsecillegallabelviolations.operation);
}

std::string MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfEntry" <<"[mplsVpnVrfName='" <<mplsvpnvrfname <<"']";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.operation)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfactiveinterfaces.is_set || is_set(mplsvpnvrfactiveinterfaces.operation)) leaf_name_data.push_back(mplsvpnvrfactiveinterfaces.get_name_leafdata());
    if (mplsvpnvrfassociatedinterfaces.is_set || is_set(mplsvpnvrfassociatedinterfaces.operation)) leaf_name_data.push_back(mplsvpnvrfassociatedinterfaces.get_name_leafdata());
    if (mplsvpnvrfconfhighroutethreshold.is_set || is_set(mplsvpnvrfconfhighroutethreshold.operation)) leaf_name_data.push_back(mplsvpnvrfconfhighroutethreshold.get_name_leafdata());
    if (mplsvpnvrfconflastchanged.is_set || is_set(mplsvpnvrfconflastchanged.operation)) leaf_name_data.push_back(mplsvpnvrfconflastchanged.get_name_leafdata());
    if (mplsvpnvrfconfmaxroutes.is_set || is_set(mplsvpnvrfconfmaxroutes.operation)) leaf_name_data.push_back(mplsvpnvrfconfmaxroutes.get_name_leafdata());
    if (mplsvpnvrfconfmidroutethreshold.is_set || is_set(mplsvpnvrfconfmidroutethreshold.operation)) leaf_name_data.push_back(mplsvpnvrfconfmidroutethreshold.get_name_leafdata());
    if (mplsvpnvrfconfrowstatus.is_set || is_set(mplsvpnvrfconfrowstatus.operation)) leaf_name_data.push_back(mplsvpnvrfconfrowstatus.get_name_leafdata());
    if (mplsvpnvrfconfstoragetype.is_set || is_set(mplsvpnvrfconfstoragetype.operation)) leaf_name_data.push_back(mplsvpnvrfconfstoragetype.get_name_leafdata());
    if (mplsvpnvrfcreationtime.is_set || is_set(mplsvpnvrfcreationtime.operation)) leaf_name_data.push_back(mplsvpnvrfcreationtime.get_name_leafdata());
    if (mplsvpnvrfdescription.is_set || is_set(mplsvpnvrfdescription.operation)) leaf_name_data.push_back(mplsvpnvrfdescription.get_name_leafdata());
    if (mplsvpnvrfoperstatus.is_set || is_set(mplsvpnvrfoperstatus.operation)) leaf_name_data.push_back(mplsvpnvrfoperstatus.get_name_leafdata());
    if (mplsvpnvrfperfcurrnumroutes.is_set || is_set(mplsvpnvrfperfcurrnumroutes.operation)) leaf_name_data.push_back(mplsvpnvrfperfcurrnumroutes.get_name_leafdata());
    if (mplsvpnvrfperfroutesadded.is_set || is_set(mplsvpnvrfperfroutesadded.operation)) leaf_name_data.push_back(mplsvpnvrfperfroutesadded.get_name_leafdata());
    if (mplsvpnvrfperfroutesdeleted.is_set || is_set(mplsvpnvrfperfroutesdeleted.operation)) leaf_name_data.push_back(mplsvpnvrfperfroutesdeleted.get_name_leafdata());
    if (mplsvpnvrfroutedistinguisher.is_set || is_set(mplsvpnvrfroutedistinguisher.operation)) leaf_name_data.push_back(mplsvpnvrfroutedistinguisher.get_name_leafdata());
    if (mplsvpnvrfsecillegallabelrcvthresh.is_set || is_set(mplsvpnvrfsecillegallabelrcvthresh.operation)) leaf_name_data.push_back(mplsvpnvrfsecillegallabelrcvthresh.get_name_leafdata());
    if (mplsvpnvrfsecillegallabelviolations.is_set || is_set(mplsvpnvrfsecillegallabelviolations.operation)) leaf_name_data.push_back(mplsvpnvrfsecillegallabelviolations.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
    }
    if(value_path == "mplsVpnVrfActiveInterfaces")
    {
        mplsvpnvrfactiveinterfaces = value;
    }
    if(value_path == "mplsVpnVrfAssociatedInterfaces")
    {
        mplsvpnvrfassociatedinterfaces = value;
    }
    if(value_path == "mplsVpnVrfConfHighRouteThreshold")
    {
        mplsvpnvrfconfhighroutethreshold = value;
    }
    if(value_path == "mplsVpnVrfConfLastChanged")
    {
        mplsvpnvrfconflastchanged = value;
    }
    if(value_path == "mplsVpnVrfConfMaxRoutes")
    {
        mplsvpnvrfconfmaxroutes = value;
    }
    if(value_path == "mplsVpnVrfConfMidRouteThreshold")
    {
        mplsvpnvrfconfmidroutethreshold = value;
    }
    if(value_path == "mplsVpnVrfConfRowStatus")
    {
        mplsvpnvrfconfrowstatus = value;
    }
    if(value_path == "mplsVpnVrfConfStorageType")
    {
        mplsvpnvrfconfstoragetype = value;
    }
    if(value_path == "mplsVpnVrfCreationTime")
    {
        mplsvpnvrfcreationtime = value;
    }
    if(value_path == "mplsVpnVrfDescription")
    {
        mplsvpnvrfdescription = value;
    }
    if(value_path == "mplsVpnVrfOperStatus")
    {
        mplsvpnvrfoperstatus = value;
    }
    if(value_path == "mplsVpnVrfPerfCurrNumRoutes")
    {
        mplsvpnvrfperfcurrnumroutes = value;
    }
    if(value_path == "mplsVpnVrfPerfRoutesAdded")
    {
        mplsvpnvrfperfroutesadded = value;
    }
    if(value_path == "mplsVpnVrfPerfRoutesDeleted")
    {
        mplsvpnvrfperfroutesdeleted = value;
    }
    if(value_path == "mplsVpnVrfRouteDistinguisher")
    {
        mplsvpnvrfroutedistinguisher = value;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelRcvThresh")
    {
        mplsvpnvrfsecillegallabelrcvthresh = value;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelViolations")
    {
        mplsvpnvrfsecillegallabelviolations = value;
    }
}

MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargettable()
{
    yang_name = "mplsVpnVrfRouteTargetTable"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::Mplsvpnvrfroutetargettable::~Mplsvpnvrfroutetargettable()
{
}

bool MplsVpnMib::Mplsvpnvrfroutetargettable::has_data() const
{
    for (std::size_t index=0; index<mplsvpnvrfroutetargetentry_.size(); index++)
    {
        if(mplsvpnvrfroutetargetentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfroutetargettable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfroutetargetentry_.size(); index++)
    {
        if(mplsvpnvrfroutetargetentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsVpnMib::Mplsvpnvrfroutetargettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteTargetTable";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfroutetargettable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfroutetargettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfRouteTargetEntry")
    {
        for(auto const & c : mplsvpnvrfroutetargetentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry>();
        c->parent = this;
        mplsvpnvrfroutetargetentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfroutetargettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfroutetargetentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfroutetargettable::set_value(const std::string & value_path, std::string value)
{
}

MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::Mplsvpnvrfroutetargetentry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfroutetargetindex{YType::uint32, "mplsVpnVrfRouteTargetIndex"},
    mplsvpnvrfroutetargettype{YType::enumeration, "mplsVpnVrfRouteTargetType"},
    mplsvpnvrfroutetarget{YType::str, "mplsVpnVrfRouteTarget"},
    mplsvpnvrfroutetargetdescr{YType::str, "mplsVpnVrfRouteTargetDescr"},
    mplsvpnvrfroutetargetrowstatus{YType::enumeration, "mplsVpnVrfRouteTargetRowStatus"}
{
    yang_name = "mplsVpnVrfRouteTargetEntry"; yang_parent_name = "mplsVpnVrfRouteTargetTable";
}

MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::~Mplsvpnvrfroutetargetentry()
{
}

bool MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::has_data() const
{
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfroutetargetindex.is_set
	|| mplsvpnvrfroutetargettype.is_set
	|| mplsvpnvrfroutetarget.is_set
	|| mplsvpnvrfroutetargetdescr.is_set
	|| mplsvpnvrfroutetargetrowstatus.is_set;
}

bool MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsvpnvrfname.operation)
	|| is_set(mplsvpnvrfroutetargetindex.operation)
	|| is_set(mplsvpnvrfroutetargettype.operation)
	|| is_set(mplsvpnvrfroutetarget.operation)
	|| is_set(mplsvpnvrfroutetargetdescr.operation)
	|| is_set(mplsvpnvrfroutetargetrowstatus.operation);
}

std::string MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteTargetEntry" <<"[mplsVpnVrfName='" <<mplsvpnvrfname <<"']" <<"[mplsVpnVrfRouteTargetIndex='" <<mplsvpnvrfroutetargetindex <<"']" <<"[mplsVpnVrfRouteTargetType='" <<mplsvpnvrfroutetargettype <<"']";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfRouteTargetTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.operation)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfroutetargetindex.is_set || is_set(mplsvpnvrfroutetargetindex.operation)) leaf_name_data.push_back(mplsvpnvrfroutetargetindex.get_name_leafdata());
    if (mplsvpnvrfroutetargettype.is_set || is_set(mplsvpnvrfroutetargettype.operation)) leaf_name_data.push_back(mplsvpnvrfroutetargettype.get_name_leafdata());
    if (mplsvpnvrfroutetarget.is_set || is_set(mplsvpnvrfroutetarget.operation)) leaf_name_data.push_back(mplsvpnvrfroutetarget.get_name_leafdata());
    if (mplsvpnvrfroutetargetdescr.is_set || is_set(mplsvpnvrfroutetargetdescr.operation)) leaf_name_data.push_back(mplsvpnvrfroutetargetdescr.get_name_leafdata());
    if (mplsvpnvrfroutetargetrowstatus.is_set || is_set(mplsvpnvrfroutetargetrowstatus.operation)) leaf_name_data.push_back(mplsvpnvrfroutetargetrowstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
    }
    if(value_path == "mplsVpnVrfRouteTargetIndex")
    {
        mplsvpnvrfroutetargetindex = value;
    }
    if(value_path == "mplsVpnVrfRouteTargetType")
    {
        mplsvpnvrfroutetargettype = value;
    }
    if(value_path == "mplsVpnVrfRouteTarget")
    {
        mplsvpnvrfroutetarget = value;
    }
    if(value_path == "mplsVpnVrfRouteTargetDescr")
    {
        mplsvpnvrfroutetargetdescr = value;
    }
    if(value_path == "mplsVpnVrfRouteTargetRowStatus")
    {
        mplsvpnvrfroutetargetrowstatus = value;
    }
}

MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrtable()
{
    yang_name = "mplsVpnVrfBgpNbrAddrTable"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::~Mplsvpnvrfbgpnbraddrtable()
{
}

bool MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::has_data() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbraddrentry_.size(); index++)
    {
        if(mplsvpnvrfbgpnbraddrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbraddrentry_.size(); index++)
    {
        if(mplsvpnvrfbgpnbraddrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrAddrTable";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfBgpNbrAddrEntry")
    {
        for(auto const & c : mplsvpnvrfbgpnbraddrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry>();
        c->parent = this;
        mplsvpnvrfbgpnbraddrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfbgpnbraddrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::set_value(const std::string & value_path, std::string value)
{
}

MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::Mplsvpnvrfbgpnbraddrentry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpninterfaceconfindex{YType::str, "mplsVpnInterfaceConfIndex"},
    mplsvpnvrfbgpnbrindex{YType::uint32, "mplsVpnVrfBgpNbrIndex"},
    mplsvpnvrfbgpnbraddr{YType::str, "mplsVpnVrfBgpNbrAddr"},
    mplsvpnvrfbgpnbrrole{YType::enumeration, "mplsVpnVrfBgpNbrRole"},
    mplsvpnvrfbgpnbrrowstatus{YType::enumeration, "mplsVpnVrfBgpNbrRowStatus"},
    mplsvpnvrfbgpnbrstoragetype{YType::enumeration, "mplsVpnVrfBgpNbrStorageType"},
    mplsvpnvrfbgpnbrtype{YType::enumeration, "mplsVpnVrfBgpNbrType"}
{
    yang_name = "mplsVpnVrfBgpNbrAddrEntry"; yang_parent_name = "mplsVpnVrfBgpNbrAddrTable";
}

MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::~Mplsvpnvrfbgpnbraddrentry()
{
}

bool MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::has_data() const
{
    return mplsvpnvrfname.is_set
	|| mplsvpninterfaceconfindex.is_set
	|| mplsvpnvrfbgpnbrindex.is_set
	|| mplsvpnvrfbgpnbraddr.is_set
	|| mplsvpnvrfbgpnbrrole.is_set
	|| mplsvpnvrfbgpnbrrowstatus.is_set
	|| mplsvpnvrfbgpnbrstoragetype.is_set
	|| mplsvpnvrfbgpnbrtype.is_set;
}

bool MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsvpnvrfname.operation)
	|| is_set(mplsvpninterfaceconfindex.operation)
	|| is_set(mplsvpnvrfbgpnbrindex.operation)
	|| is_set(mplsvpnvrfbgpnbraddr.operation)
	|| is_set(mplsvpnvrfbgpnbrrole.operation)
	|| is_set(mplsvpnvrfbgpnbrrowstatus.operation)
	|| is_set(mplsvpnvrfbgpnbrstoragetype.operation)
	|| is_set(mplsvpnvrfbgpnbrtype.operation);
}

std::string MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrAddrEntry" <<"[mplsVpnVrfName='" <<mplsvpnvrfname <<"']" <<"[mplsVpnInterfaceConfIndex='" <<mplsvpninterfaceconfindex <<"']" <<"[mplsVpnVrfBgpNbrIndex='" <<mplsvpnvrfbgpnbrindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfBgpNbrAddrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.operation)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpninterfaceconfindex.is_set || is_set(mplsvpninterfaceconfindex.operation)) leaf_name_data.push_back(mplsvpninterfaceconfindex.get_name_leafdata());
    if (mplsvpnvrfbgpnbrindex.is_set || is_set(mplsvpnvrfbgpnbrindex.operation)) leaf_name_data.push_back(mplsvpnvrfbgpnbrindex.get_name_leafdata());
    if (mplsvpnvrfbgpnbraddr.is_set || is_set(mplsvpnvrfbgpnbraddr.operation)) leaf_name_data.push_back(mplsvpnvrfbgpnbraddr.get_name_leafdata());
    if (mplsvpnvrfbgpnbrrole.is_set || is_set(mplsvpnvrfbgpnbrrole.operation)) leaf_name_data.push_back(mplsvpnvrfbgpnbrrole.get_name_leafdata());
    if (mplsvpnvrfbgpnbrrowstatus.is_set || is_set(mplsvpnvrfbgpnbrrowstatus.operation)) leaf_name_data.push_back(mplsvpnvrfbgpnbrrowstatus.get_name_leafdata());
    if (mplsvpnvrfbgpnbrstoragetype.is_set || is_set(mplsvpnvrfbgpnbrstoragetype.operation)) leaf_name_data.push_back(mplsvpnvrfbgpnbrstoragetype.get_name_leafdata());
    if (mplsvpnvrfbgpnbrtype.is_set || is_set(mplsvpnvrfbgpnbrtype.operation)) leaf_name_data.push_back(mplsvpnvrfbgpnbrtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
    }
    if(value_path == "mplsVpnInterfaceConfIndex")
    {
        mplsvpninterfaceconfindex = value;
    }
    if(value_path == "mplsVpnVrfBgpNbrIndex")
    {
        mplsvpnvrfbgpnbrindex = value;
    }
    if(value_path == "mplsVpnVrfBgpNbrAddr")
    {
        mplsvpnvrfbgpnbraddr = value;
    }
    if(value_path == "mplsVpnVrfBgpNbrRole")
    {
        mplsvpnvrfbgpnbrrole = value;
    }
    if(value_path == "mplsVpnVrfBgpNbrRowStatus")
    {
        mplsvpnvrfbgpnbrrowstatus = value;
    }
    if(value_path == "mplsVpnVrfBgpNbrStorageType")
    {
        mplsvpnvrfbgpnbrstoragetype = value;
    }
    if(value_path == "mplsVpnVrfBgpNbrType")
    {
        mplsvpnvrfbgpnbrtype = value;
    }
}

MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixtable()
{
    yang_name = "mplsVpnVrfBgpNbrPrefixTable"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::~Mplsvpnvrfbgpnbrprefixtable()
{
}

bool MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::has_data() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbrprefixentry_.size(); index++)
    {
        if(mplsvpnvrfbgpnbrprefixentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbrprefixentry_.size(); index++)
    {
        if(mplsvpnvrfbgpnbrprefixentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrPrefixTable";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfBgpNbrPrefixEntry")
    {
        for(auto const & c : mplsvpnvrfbgpnbrprefixentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry>();
        c->parent = this;
        mplsvpnvrfbgpnbrprefixentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfbgpnbrprefixentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::set_value(const std::string & value_path, std::string value)
{
}

MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgpnbrprefixentry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfbgppathattripaddrprefix{YType::str, "mplsVpnVrfBgpPathAttrIpAddrPrefix"},
    mplsvpnvrfbgppathattripaddrprefixlen{YType::int32, "mplsVpnVrfBgpPathAttrIpAddrPrefixLen"},
    mplsvpnvrfbgppathattrpeer{YType::str, "mplsVpnVrfBgpPathAttrPeer"},
    mplsvpnvrfbgppathattraggregatoraddr{YType::str, "mplsVpnVrfBgpPathAttrAggregatorAddr"},
    mplsvpnvrfbgppathattraggregatoras{YType::int32, "mplsVpnVrfBgpPathAttrAggregatorAS"},
    mplsvpnvrfbgppathattraspathsegment{YType::str, "mplsVpnVrfBgpPathAttrASPathSegment"},
    mplsvpnvrfbgppathattratomicaggregate{YType::enumeration, "mplsVpnVrfBgpPathAttrAtomicAggregate"},
    mplsvpnvrfbgppathattrbest{YType::enumeration, "mplsVpnVrfBgpPathAttrBest"},
    mplsvpnvrfbgppathattrcalclocalpref{YType::int32, "mplsVpnVrfBgpPathAttrCalcLocalPref"},
    mplsvpnvrfbgppathattrlocalpref{YType::int32, "mplsVpnVrfBgpPathAttrLocalPref"},
    mplsvpnvrfbgppathattrmultiexitdisc{YType::int32, "mplsVpnVrfBgpPathAttrMultiExitDisc"},
    mplsvpnvrfbgppathattrnexthop{YType::str, "mplsVpnVrfBgpPathAttrNextHop"},
    mplsvpnvrfbgppathattrorigin{YType::enumeration, "mplsVpnVrfBgpPathAttrOrigin"},
    mplsvpnvrfbgppathattrunknown{YType::str, "mplsVpnVrfBgpPathAttrUnknown"}
{
    yang_name = "mplsVpnVrfBgpNbrPrefixEntry"; yang_parent_name = "mplsVpnVrfBgpNbrPrefixTable";
}

MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::~Mplsvpnvrfbgpnbrprefixentry()
{
}

bool MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::has_data() const
{
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfbgppathattripaddrprefix.is_set
	|| mplsvpnvrfbgppathattripaddrprefixlen.is_set
	|| mplsvpnvrfbgppathattrpeer.is_set
	|| mplsvpnvrfbgppathattraggregatoraddr.is_set
	|| mplsvpnvrfbgppathattraggregatoras.is_set
	|| mplsvpnvrfbgppathattraspathsegment.is_set
	|| mplsvpnvrfbgppathattratomicaggregate.is_set
	|| mplsvpnvrfbgppathattrbest.is_set
	|| mplsvpnvrfbgppathattrcalclocalpref.is_set
	|| mplsvpnvrfbgppathattrlocalpref.is_set
	|| mplsvpnvrfbgppathattrmultiexitdisc.is_set
	|| mplsvpnvrfbgppathattrnexthop.is_set
	|| mplsvpnvrfbgppathattrorigin.is_set
	|| mplsvpnvrfbgppathattrunknown.is_set;
}

bool MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsvpnvrfname.operation)
	|| is_set(mplsvpnvrfbgppathattripaddrprefix.operation)
	|| is_set(mplsvpnvrfbgppathattripaddrprefixlen.operation)
	|| is_set(mplsvpnvrfbgppathattrpeer.operation)
	|| is_set(mplsvpnvrfbgppathattraggregatoraddr.operation)
	|| is_set(mplsvpnvrfbgppathattraggregatoras.operation)
	|| is_set(mplsvpnvrfbgppathattraspathsegment.operation)
	|| is_set(mplsvpnvrfbgppathattratomicaggregate.operation)
	|| is_set(mplsvpnvrfbgppathattrbest.operation)
	|| is_set(mplsvpnvrfbgppathattrcalclocalpref.operation)
	|| is_set(mplsvpnvrfbgppathattrlocalpref.operation)
	|| is_set(mplsvpnvrfbgppathattrmultiexitdisc.operation)
	|| is_set(mplsvpnvrfbgppathattrnexthop.operation)
	|| is_set(mplsvpnvrfbgppathattrorigin.operation)
	|| is_set(mplsvpnvrfbgppathattrunknown.operation);
}

std::string MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrPrefixEntry" <<"[mplsVpnVrfName='" <<mplsvpnvrfname <<"']" <<"[mplsVpnVrfBgpPathAttrIpAddrPrefix='" <<mplsvpnvrfbgppathattripaddrprefix <<"']" <<"[mplsVpnVrfBgpPathAttrIpAddrPrefixLen='" <<mplsvpnvrfbgppathattripaddrprefixlen <<"']" <<"[mplsVpnVrfBgpPathAttrPeer='" <<mplsvpnvrfbgppathattrpeer <<"']";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfBgpNbrPrefixTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.operation)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfbgppathattripaddrprefix.is_set || is_set(mplsvpnvrfbgppathattripaddrprefix.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattripaddrprefix.get_name_leafdata());
    if (mplsvpnvrfbgppathattripaddrprefixlen.is_set || is_set(mplsvpnvrfbgppathattripaddrprefixlen.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattripaddrprefixlen.get_name_leafdata());
    if (mplsvpnvrfbgppathattrpeer.is_set || is_set(mplsvpnvrfbgppathattrpeer.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrpeer.get_name_leafdata());
    if (mplsvpnvrfbgppathattraggregatoraddr.is_set || is_set(mplsvpnvrfbgppathattraggregatoraddr.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattraggregatoraddr.get_name_leafdata());
    if (mplsvpnvrfbgppathattraggregatoras.is_set || is_set(mplsvpnvrfbgppathattraggregatoras.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattraggregatoras.get_name_leafdata());
    if (mplsvpnvrfbgppathattraspathsegment.is_set || is_set(mplsvpnvrfbgppathattraspathsegment.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattraspathsegment.get_name_leafdata());
    if (mplsvpnvrfbgppathattratomicaggregate.is_set || is_set(mplsvpnvrfbgppathattratomicaggregate.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattratomicaggregate.get_name_leafdata());
    if (mplsvpnvrfbgppathattrbest.is_set || is_set(mplsvpnvrfbgppathattrbest.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrbest.get_name_leafdata());
    if (mplsvpnvrfbgppathattrcalclocalpref.is_set || is_set(mplsvpnvrfbgppathattrcalclocalpref.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrcalclocalpref.get_name_leafdata());
    if (mplsvpnvrfbgppathattrlocalpref.is_set || is_set(mplsvpnvrfbgppathattrlocalpref.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrlocalpref.get_name_leafdata());
    if (mplsvpnvrfbgppathattrmultiexitdisc.is_set || is_set(mplsvpnvrfbgppathattrmultiexitdisc.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrmultiexitdisc.get_name_leafdata());
    if (mplsvpnvrfbgppathattrnexthop.is_set || is_set(mplsvpnvrfbgppathattrnexthop.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrnexthop.get_name_leafdata());
    if (mplsvpnvrfbgppathattrorigin.is_set || is_set(mplsvpnvrfbgppathattrorigin.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrorigin.get_name_leafdata());
    if (mplsvpnvrfbgppathattrunknown.is_set || is_set(mplsvpnvrfbgppathattrunknown.operation)) leaf_name_data.push_back(mplsvpnvrfbgppathattrunknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrIpAddrPrefix")
    {
        mplsvpnvrfbgppathattripaddrprefix = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrIpAddrPrefixLen")
    {
        mplsvpnvrfbgppathattripaddrprefixlen = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrPeer")
    {
        mplsvpnvrfbgppathattrpeer = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAddr")
    {
        mplsvpnvrfbgppathattraggregatoraddr = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAS")
    {
        mplsvpnvrfbgppathattraggregatoras = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrASPathSegment")
    {
        mplsvpnvrfbgppathattraspathsegment = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAtomicAggregate")
    {
        mplsvpnvrfbgppathattratomicaggregate = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrBest")
    {
        mplsvpnvrfbgppathattrbest = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrCalcLocalPref")
    {
        mplsvpnvrfbgppathattrcalclocalpref = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrLocalPref")
    {
        mplsvpnvrfbgppathattrlocalpref = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrMultiExitDisc")
    {
        mplsvpnvrfbgppathattrmultiexitdisc = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrNextHop")
    {
        mplsvpnvrfbgppathattrnexthop = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrOrigin")
    {
        mplsvpnvrfbgppathattrorigin = value;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrUnknown")
    {
        mplsvpnvrfbgppathattrunknown = value;
    }
}

MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfroutetable()
{
    yang_name = "mplsVpnVrfRouteTable"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::Mplsvpnvrfroutetable::~Mplsvpnvrfroutetable()
{
}

bool MplsVpnMib::Mplsvpnvrfroutetable::has_data() const
{
    for (std::size_t index=0; index<mplsvpnvrfrouteentry_.size(); index++)
    {
        if(mplsvpnvrfrouteentry_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfroutetable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfrouteentry_.size(); index++)
    {
        if(mplsvpnvrfrouteentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsVpnMib::Mplsvpnvrfroutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteTable";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfroutetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfroutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfRouteEntry")
    {
        for(auto const & c : mplsvpnvrfrouteentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry>();
        c->parent = this;
        mplsvpnvrfrouteentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfrouteentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfroutetable::set_value(const std::string & value_path, std::string value)
{
}

MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteentry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfroutedest{YType::str, "mplsVpnVrfRouteDest"},
    mplsvpnvrfroutemask{YType::str, "mplsVpnVrfRouteMask"},
    mplsvpnvrfroutetos{YType::uint32, "mplsVpnVrfRouteTos"},
    mplsvpnvrfroutenexthop{YType::str, "mplsVpnVrfRouteNextHop"},
    mplsvpnvrfrouteage{YType::uint32, "mplsVpnVrfRouteAge"},
    mplsvpnvrfroutedestaddrtype{YType::enumeration, "mplsVpnVrfRouteDestAddrType"},
    mplsvpnvrfrouteifindex{YType::int32, "mplsVpnVrfRouteIfIndex"},
    mplsvpnvrfrouteinfo{YType::str, "mplsVpnVrfRouteInfo"},
    mplsvpnvrfroutemaskaddrtype{YType::enumeration, "mplsVpnVrfRouteMaskAddrType"},
    mplsvpnvrfroutemetric1{YType::int32, "mplsVpnVrfRouteMetric1"},
    mplsvpnvrfroutemetric2{YType::int32, "mplsVpnVrfRouteMetric2"},
    mplsvpnvrfroutemetric3{YType::int32, "mplsVpnVrfRouteMetric3"},
    mplsvpnvrfroutemetric4{YType::int32, "mplsVpnVrfRouteMetric4"},
    mplsvpnvrfroutemetric5{YType::int32, "mplsVpnVrfRouteMetric5"},
    mplsvpnvrfroutenexthopaddrtype{YType::enumeration, "mplsVpnVrfRouteNextHopAddrType"},
    mplsvpnvrfroutenexthopas{YType::uint32, "mplsVpnVrfRouteNextHopAS"},
    mplsvpnvrfrouteproto{YType::enumeration, "mplsVpnVrfRouteProto"},
    mplsvpnvrfrouterowstatus{YType::enumeration, "mplsVpnVrfRouteRowStatus"},
    mplsvpnvrfroutestoragetype{YType::enumeration, "mplsVpnVrfRouteStorageType"},
    mplsvpnvrfroutetype{YType::enumeration, "mplsVpnVrfRouteType"}
{
    yang_name = "mplsVpnVrfRouteEntry"; yang_parent_name = "mplsVpnVrfRouteTable";
}

MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::~Mplsvpnvrfrouteentry()
{
}

bool MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::has_data() const
{
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfroutedest.is_set
	|| mplsvpnvrfroutemask.is_set
	|| mplsvpnvrfroutetos.is_set
	|| mplsvpnvrfroutenexthop.is_set
	|| mplsvpnvrfrouteage.is_set
	|| mplsvpnvrfroutedestaddrtype.is_set
	|| mplsvpnvrfrouteifindex.is_set
	|| mplsvpnvrfrouteinfo.is_set
	|| mplsvpnvrfroutemaskaddrtype.is_set
	|| mplsvpnvrfroutemetric1.is_set
	|| mplsvpnvrfroutemetric2.is_set
	|| mplsvpnvrfroutemetric3.is_set
	|| mplsvpnvrfroutemetric4.is_set
	|| mplsvpnvrfroutemetric5.is_set
	|| mplsvpnvrfroutenexthopaddrtype.is_set
	|| mplsvpnvrfroutenexthopas.is_set
	|| mplsvpnvrfrouteproto.is_set
	|| mplsvpnvrfrouterowstatus.is_set
	|| mplsvpnvrfroutestoragetype.is_set
	|| mplsvpnvrfroutetype.is_set;
}

bool MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsvpnvrfname.operation)
	|| is_set(mplsvpnvrfroutedest.operation)
	|| is_set(mplsvpnvrfroutemask.operation)
	|| is_set(mplsvpnvrfroutetos.operation)
	|| is_set(mplsvpnvrfroutenexthop.operation)
	|| is_set(mplsvpnvrfrouteage.operation)
	|| is_set(mplsvpnvrfroutedestaddrtype.operation)
	|| is_set(mplsvpnvrfrouteifindex.operation)
	|| is_set(mplsvpnvrfrouteinfo.operation)
	|| is_set(mplsvpnvrfroutemaskaddrtype.operation)
	|| is_set(mplsvpnvrfroutemetric1.operation)
	|| is_set(mplsvpnvrfroutemetric2.operation)
	|| is_set(mplsvpnvrfroutemetric3.operation)
	|| is_set(mplsvpnvrfroutemetric4.operation)
	|| is_set(mplsvpnvrfroutemetric5.operation)
	|| is_set(mplsvpnvrfroutenexthopaddrtype.operation)
	|| is_set(mplsvpnvrfroutenexthopas.operation)
	|| is_set(mplsvpnvrfrouteproto.operation)
	|| is_set(mplsvpnvrfrouterowstatus.operation)
	|| is_set(mplsvpnvrfroutestoragetype.operation)
	|| is_set(mplsvpnvrfroutetype.operation);
}

std::string MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteEntry" <<"[mplsVpnVrfName='" <<mplsvpnvrfname <<"']" <<"[mplsVpnVrfRouteDest='" <<mplsvpnvrfroutedest <<"']" <<"[mplsVpnVrfRouteMask='" <<mplsvpnvrfroutemask <<"']" <<"[mplsVpnVrfRouteTos='" <<mplsvpnvrfroutetos <<"']" <<"[mplsVpnVrfRouteNextHop='" <<mplsvpnvrfroutenexthop <<"']";

    return path_buffer.str();

}

const EntityPath MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfRouteTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.operation)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfroutedest.is_set || is_set(mplsvpnvrfroutedest.operation)) leaf_name_data.push_back(mplsvpnvrfroutedest.get_name_leafdata());
    if (mplsvpnvrfroutemask.is_set || is_set(mplsvpnvrfroutemask.operation)) leaf_name_data.push_back(mplsvpnvrfroutemask.get_name_leafdata());
    if (mplsvpnvrfroutetos.is_set || is_set(mplsvpnvrfroutetos.operation)) leaf_name_data.push_back(mplsvpnvrfroutetos.get_name_leafdata());
    if (mplsvpnvrfroutenexthop.is_set || is_set(mplsvpnvrfroutenexthop.operation)) leaf_name_data.push_back(mplsvpnvrfroutenexthop.get_name_leafdata());
    if (mplsvpnvrfrouteage.is_set || is_set(mplsvpnvrfrouteage.operation)) leaf_name_data.push_back(mplsvpnvrfrouteage.get_name_leafdata());
    if (mplsvpnvrfroutedestaddrtype.is_set || is_set(mplsvpnvrfroutedestaddrtype.operation)) leaf_name_data.push_back(mplsvpnvrfroutedestaddrtype.get_name_leafdata());
    if (mplsvpnvrfrouteifindex.is_set || is_set(mplsvpnvrfrouteifindex.operation)) leaf_name_data.push_back(mplsvpnvrfrouteifindex.get_name_leafdata());
    if (mplsvpnvrfrouteinfo.is_set || is_set(mplsvpnvrfrouteinfo.operation)) leaf_name_data.push_back(mplsvpnvrfrouteinfo.get_name_leafdata());
    if (mplsvpnvrfroutemaskaddrtype.is_set || is_set(mplsvpnvrfroutemaskaddrtype.operation)) leaf_name_data.push_back(mplsvpnvrfroutemaskaddrtype.get_name_leafdata());
    if (mplsvpnvrfroutemetric1.is_set || is_set(mplsvpnvrfroutemetric1.operation)) leaf_name_data.push_back(mplsvpnvrfroutemetric1.get_name_leafdata());
    if (mplsvpnvrfroutemetric2.is_set || is_set(mplsvpnvrfroutemetric2.operation)) leaf_name_data.push_back(mplsvpnvrfroutemetric2.get_name_leafdata());
    if (mplsvpnvrfroutemetric3.is_set || is_set(mplsvpnvrfroutemetric3.operation)) leaf_name_data.push_back(mplsvpnvrfroutemetric3.get_name_leafdata());
    if (mplsvpnvrfroutemetric4.is_set || is_set(mplsvpnvrfroutemetric4.operation)) leaf_name_data.push_back(mplsvpnvrfroutemetric4.get_name_leafdata());
    if (mplsvpnvrfroutemetric5.is_set || is_set(mplsvpnvrfroutemetric5.operation)) leaf_name_data.push_back(mplsvpnvrfroutemetric5.get_name_leafdata());
    if (mplsvpnvrfroutenexthopaddrtype.is_set || is_set(mplsvpnvrfroutenexthopaddrtype.operation)) leaf_name_data.push_back(mplsvpnvrfroutenexthopaddrtype.get_name_leafdata());
    if (mplsvpnvrfroutenexthopas.is_set || is_set(mplsvpnvrfroutenexthopas.operation)) leaf_name_data.push_back(mplsvpnvrfroutenexthopas.get_name_leafdata());
    if (mplsvpnvrfrouteproto.is_set || is_set(mplsvpnvrfrouteproto.operation)) leaf_name_data.push_back(mplsvpnvrfrouteproto.get_name_leafdata());
    if (mplsvpnvrfrouterowstatus.is_set || is_set(mplsvpnvrfrouterowstatus.operation)) leaf_name_data.push_back(mplsvpnvrfrouterowstatus.get_name_leafdata());
    if (mplsvpnvrfroutestoragetype.is_set || is_set(mplsvpnvrfroutestoragetype.operation)) leaf_name_data.push_back(mplsvpnvrfroutestoragetype.get_name_leafdata());
    if (mplsvpnvrfroutetype.is_set || is_set(mplsvpnvrfroutetype.operation)) leaf_name_data.push_back(mplsvpnvrfroutetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
    }
    if(value_path == "mplsVpnVrfRouteDest")
    {
        mplsvpnvrfroutedest = value;
    }
    if(value_path == "mplsVpnVrfRouteMask")
    {
        mplsvpnvrfroutemask = value;
    }
    if(value_path == "mplsVpnVrfRouteTos")
    {
        mplsvpnvrfroutetos = value;
    }
    if(value_path == "mplsVpnVrfRouteNextHop")
    {
        mplsvpnvrfroutenexthop = value;
    }
    if(value_path == "mplsVpnVrfRouteAge")
    {
        mplsvpnvrfrouteage = value;
    }
    if(value_path == "mplsVpnVrfRouteDestAddrType")
    {
        mplsvpnvrfroutedestaddrtype = value;
    }
    if(value_path == "mplsVpnVrfRouteIfIndex")
    {
        mplsvpnvrfrouteifindex = value;
    }
    if(value_path == "mplsVpnVrfRouteInfo")
    {
        mplsvpnvrfrouteinfo = value;
    }
    if(value_path == "mplsVpnVrfRouteMaskAddrType")
    {
        mplsvpnvrfroutemaskaddrtype = value;
    }
    if(value_path == "mplsVpnVrfRouteMetric1")
    {
        mplsvpnvrfroutemetric1 = value;
    }
    if(value_path == "mplsVpnVrfRouteMetric2")
    {
        mplsvpnvrfroutemetric2 = value;
    }
    if(value_path == "mplsVpnVrfRouteMetric3")
    {
        mplsvpnvrfroutemetric3 = value;
    }
    if(value_path == "mplsVpnVrfRouteMetric4")
    {
        mplsvpnvrfroutemetric4 = value;
    }
    if(value_path == "mplsVpnVrfRouteMetric5")
    {
        mplsvpnvrfroutemetric5 = value;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAddrType")
    {
        mplsvpnvrfroutenexthopaddrtype = value;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAS")
    {
        mplsvpnvrfroutenexthopas = value;
    }
    if(value_path == "mplsVpnVrfRouteProto")
    {
        mplsvpnvrfrouteproto = value;
    }
    if(value_path == "mplsVpnVrfRouteRowStatus")
    {
        mplsvpnvrfrouterowstatus = value;
    }
    if(value_path == "mplsVpnVrfRouteStorageType")
    {
        mplsvpnvrfroutestoragetype = value;
    }
    if(value_path == "mplsVpnVrfRouteType")
    {
        mplsvpnvrfroutetype = value;
    }
}

const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::MplsvpninterfacelabeledgetypeEnum::providerEdge {1, "providerEdge"};
const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::MplsvpninterfacelabeledgetypeEnum::customerEdge {2, "customerEdge"};

const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::MplsvpninterfacevpnclassificationEnum::carrierOfCarrier {1, "carrierOfCarrier"};
const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::MplsvpninterfacevpnclassificationEnum::enterprise {2, "enterprise"};
const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::MplsvpninterfacevpnclassificationEnum::interProvider {3, "interProvider"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::MplsvpnvrfoperstatusEnum::up {1, "up"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::MplsvpnvrfoperstatusEnum::down {2, "down"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::MplsvpnvrfroutetargettypeEnum::import {1, "import"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::MplsvpnvrfroutetargettypeEnum::export_ {2, "export"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::MplsvpnvrfroutetargettypeEnum::both {3, "both"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::MplsvpnvrfbgpnbrroleEnum::ce {1, "ce"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::MplsvpnvrfbgpnbrroleEnum::pe {2, "pe"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattroriginEnum::igp {1, "igp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattroriginEnum::egp {2, "egp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattroriginEnum::incomplete {3, "incomplete"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattratomicaggregateEnum::lessSpecificRrouteNotSelected {1, "lessSpecificRrouteNotSelected"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattratomicaggregateEnum::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattrbestEnum::false_ {1, "false"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::MplsvpnvrfbgppathattrbestEnum::true_ {2, "true"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfroutetypeEnum::other {1, "other"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfroutetypeEnum::reject {2, "reject"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfroutetypeEnum::local {3, "local"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfroutetypeEnum::remote {4, "remote"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::other {1, "other"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::local {2, "local"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::netmgmt {3, "netmgmt"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::icmp {4, "icmp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::egp {5, "egp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::ggp {6, "ggp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::hello {7, "hello"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::rip {8, "rip"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::isIs {9, "isIs"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::esIs {10, "esIs"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::ospf {13, "ospf"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::bgp {14, "bgp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::idpr {15, "idpr"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::MplsvpnvrfrouteprotoEnum::ciscoEigrp {16, "ciscoEigrp"};


}
}

