
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_VPN_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_VPN_MIB {

MplsVpnMib::MplsVpnMib()
    :
    mplsvpninterfaceconftable(std::make_shared<MplsVpnMib::Mplsvpninterfaceconftable>())
	,mplsvpnscalars(std::make_shared<MplsVpnMib::Mplsvpnscalars>())
	,mplsvpnvrfbgpnbraddrtable(std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbraddrtable>())
	,mplsvpnvrfbgpnbrprefixtable(std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable>())
	,mplsvpnvrfroutetable(std::make_shared<MplsVpnMib::Mplsvpnvrfroutetable>())
	,mplsvpnvrfroutetargettable(std::make_shared<MplsVpnMib::Mplsvpnvrfroutetargettable>())
	,mplsvpnvrftable(std::make_shared<MplsVpnMib::Mplsvpnvrftable>())
{
    mplsvpninterfaceconftable->parent = this;

    mplsvpnscalars->parent = this;

    mplsvpnvrfbgpnbraddrtable->parent = this;

    mplsvpnvrfbgpnbrprefixtable->parent = this;

    mplsvpnvrfroutetable->parent = this;

    mplsvpnvrfroutetargettable->parent = this;

    mplsvpnvrftable->parent = this;

    yang_name = "MPLS-VPN-MIB"; yang_parent_name = "MPLS-VPN-MIB";
}

MplsVpnMib::~MplsVpnMib()
{
}

bool MplsVpnMib::has_data() const
{
    return (mplsvpninterfaceconftable !=  nullptr && mplsvpninterfaceconftable->has_data())
	|| (mplsvpnscalars !=  nullptr && mplsvpnscalars->has_data())
	|| (mplsvpnvrfbgpnbraddrtable !=  nullptr && mplsvpnvrfbgpnbraddrtable->has_data())
	|| (mplsvpnvrfbgpnbrprefixtable !=  nullptr && mplsvpnvrfbgpnbrprefixtable->has_data())
	|| (mplsvpnvrfroutetable !=  nullptr && mplsvpnvrfroutetable->has_data())
	|| (mplsvpnvrfroutetargettable !=  nullptr && mplsvpnvrfroutetargettable->has_data())
	|| (mplsvpnvrftable !=  nullptr && mplsvpnvrftable->has_data());
}

bool MplsVpnMib::has_operation() const
{
    return is_set(yfilter)
	|| (mplsvpninterfaceconftable !=  nullptr && mplsvpninterfaceconftable->has_operation())
	|| (mplsvpnscalars !=  nullptr && mplsvpnscalars->has_operation())
	|| (mplsvpnvrfbgpnbraddrtable !=  nullptr && mplsvpnvrfbgpnbraddrtable->has_operation())
	|| (mplsvpnvrfbgpnbrprefixtable !=  nullptr && mplsvpnvrfbgpnbrprefixtable->has_operation())
	|| (mplsvpnvrfroutetable !=  nullptr && mplsvpnvrfroutetable->has_operation())
	|| (mplsvpnvrfroutetargettable !=  nullptr && mplsvpnvrfroutetargettable->has_operation())
	|| (mplsvpnvrftable !=  nullptr && mplsvpnvrftable->has_operation());
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
        if(mplsvpninterfaceconftable == nullptr)
        {
            mplsvpninterfaceconftable = std::make_shared<MplsVpnMib::Mplsvpninterfaceconftable>();
        }
        return mplsvpninterfaceconftable;
    }

    if(child_yang_name == "mplsVpnScalars")
    {
        if(mplsvpnscalars == nullptr)
        {
            mplsvpnscalars = std::make_shared<MplsVpnMib::Mplsvpnscalars>();
        }
        return mplsvpnscalars;
    }

    if(child_yang_name == "mplsVpnVrfBgpNbrAddrTable")
    {
        if(mplsvpnvrfbgpnbraddrtable == nullptr)
        {
            mplsvpnvrfbgpnbraddrtable = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbraddrtable>();
        }
        return mplsvpnvrfbgpnbraddrtable;
    }

    if(child_yang_name == "mplsVpnVrfBgpNbrPrefixTable")
    {
        if(mplsvpnvrfbgpnbrprefixtable == nullptr)
        {
            mplsvpnvrfbgpnbrprefixtable = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable>();
        }
        return mplsvpnvrfbgpnbrprefixtable;
    }

    if(child_yang_name == "mplsVpnVrfRouteTable")
    {
        if(mplsvpnvrfroutetable == nullptr)
        {
            mplsvpnvrfroutetable = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetable>();
        }
        return mplsvpnvrfroutetable;
    }

    if(child_yang_name == "mplsVpnVrfRouteTargetTable")
    {
        if(mplsvpnvrfroutetargettable == nullptr)
        {
            mplsvpnvrfroutetargettable = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetargettable>();
        }
        return mplsvpnvrfroutetargettable;
    }

    if(child_yang_name == "mplsVpnVrfTable")
    {
        if(mplsvpnvrftable == nullptr)
        {
            mplsvpnvrftable = std::make_shared<MplsVpnMib::Mplsvpnvrftable>();
        }
        return mplsvpnvrftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsvpninterfaceconftable != nullptr)
    {
        children["mplsVpnInterfaceConfTable"] = mplsvpninterfaceconftable;
    }

    if(mplsvpnscalars != nullptr)
    {
        children["mplsVpnScalars"] = mplsvpnscalars;
    }

    if(mplsvpnvrfbgpnbraddrtable != nullptr)
    {
        children["mplsVpnVrfBgpNbrAddrTable"] = mplsvpnvrfbgpnbraddrtable;
    }

    if(mplsvpnvrfbgpnbrprefixtable != nullptr)
    {
        children["mplsVpnVrfBgpNbrPrefixTable"] = mplsvpnvrfbgpnbrprefixtable;
    }

    if(mplsvpnvrfroutetable != nullptr)
    {
        children["mplsVpnVrfRouteTable"] = mplsvpnvrfroutetable;
    }

    if(mplsvpnvrfroutetargettable != nullptr)
    {
        children["mplsVpnVrfRouteTargetTable"] = mplsvpnvrfroutetargettable;
    }

    if(mplsvpnvrftable != nullptr)
    {
        children["mplsVpnVrfTable"] = mplsvpnvrftable;
    }

    return children;
}

void MplsVpnMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsVpnMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> MplsVpnMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MplsVpnMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnInterfaceConfTable" || name == "mplsVpnScalars" || name == "mplsVpnVrfBgpNbrAddrTable" || name == "mplsVpnVrfBgpNbrPrefixTable" || name == "mplsVpnVrfRouteTable" || name == "mplsVpnVrfRouteTargetTable" || name == "mplsVpnVrfTable")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnactivevrfs.yfilter)
	|| ydk::is_set(mplsvpnconfiguredvrfs.yfilter)
	|| ydk::is_set(mplsvpnconnectedinterfaces.yfilter)
	|| ydk::is_set(mplsvpnnotificationenable.yfilter)
	|| ydk::is_set(mplsvpnvrfconfmaxpossibleroutes.yfilter);
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

    if (mplsvpnactivevrfs.is_set || is_set(mplsvpnactivevrfs.yfilter)) leaf_name_data.push_back(mplsvpnactivevrfs.get_name_leafdata());
    if (mplsvpnconfiguredvrfs.is_set || is_set(mplsvpnconfiguredvrfs.yfilter)) leaf_name_data.push_back(mplsvpnconfiguredvrfs.get_name_leafdata());
    if (mplsvpnconnectedinterfaces.is_set || is_set(mplsvpnconnectedinterfaces.yfilter)) leaf_name_data.push_back(mplsvpnconnectedinterfaces.get_name_leafdata());
    if (mplsvpnnotificationenable.is_set || is_set(mplsvpnnotificationenable.yfilter)) leaf_name_data.push_back(mplsvpnnotificationenable.get_name_leafdata());
    if (mplsvpnvrfconfmaxpossibleroutes.is_set || is_set(mplsvpnvrfconfmaxpossibleroutes.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfmaxpossibleroutes.get_name_leafdata());


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

void MplsVpnMib::Mplsvpnscalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnActiveVrfs")
    {
        mplsvpnactivevrfs = value;
        mplsvpnactivevrfs.value_namespace = name_space;
        mplsvpnactivevrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnConfiguredVrfs")
    {
        mplsvpnconfiguredvrfs = value;
        mplsvpnconfiguredvrfs.value_namespace = name_space;
        mplsvpnconfiguredvrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnConnectedInterfaces")
    {
        mplsvpnconnectedinterfaces = value;
        mplsvpnconnectedinterfaces.value_namespace = name_space;
        mplsvpnconnectedinterfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnNotificationEnable")
    {
        mplsvpnnotificationenable = value;
        mplsvpnnotificationenable.value_namespace = name_space;
        mplsvpnnotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfMaxPossibleRoutes")
    {
        mplsvpnvrfconfmaxpossibleroutes = value;
        mplsvpnvrfconfmaxpossibleroutes.value_namespace = name_space;
        mplsvpnvrfconfmaxpossibleroutes.value_namespace_prefix = name_space_prefix;
    }
}

void MplsVpnMib::Mplsvpnscalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnActiveVrfs")
    {
        mplsvpnactivevrfs.yfilter = yfilter;
    }
    if(value_path == "mplsVpnConfiguredVrfs")
    {
        mplsvpnconfiguredvrfs.yfilter = yfilter;
    }
    if(value_path == "mplsVpnConnectedInterfaces")
    {
        mplsvpnconnectedinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsVpnNotificationEnable")
    {
        mplsvpnnotificationenable.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfMaxPossibleRoutes")
    {
        mplsvpnvrfconfmaxpossibleroutes.yfilter = yfilter;
    }
}

bool MplsVpnMib::Mplsvpnscalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnActiveVrfs" || name == "mplsVpnConfiguredVrfs" || name == "mplsVpnConnectedInterfaces" || name == "mplsVpnNotificationEnable" || name == "mplsVpnVrfConfMaxPossibleRoutes")
        return true;
    return false;
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
    for (std::size_t index=0; index<mplsvpninterfaceconfentry.size(); index++)
    {
        if(mplsvpninterfaceconfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpninterfaceconftable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpninterfaceconfentry.size(); index++)
    {
        if(mplsvpninterfaceconfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mplsvpninterfaceconfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry>();
        c->parent = this;
        mplsvpninterfaceconfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpninterfaceconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpninterfaceconfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpninterfaceconftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsVpnMib::Mplsvpninterfaceconftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsVpnMib::Mplsvpninterfaceconftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnInterfaceConfEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfindex.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfrowstatus.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfstoragetype.yfilter)
	|| ydk::is_set(mplsvpninterfacelabeledgetype.yfilter)
	|| ydk::is_set(mplsvpninterfacevpnclassification.yfilter)
	|| ydk::is_set(mplsvpninterfacevpnroutedistprotocol.yfilter);
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

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpninterfaceconfindex.is_set || is_set(mplsvpninterfaceconfindex.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfindex.get_name_leafdata());
    if (mplsvpninterfaceconfrowstatus.is_set || is_set(mplsvpninterfaceconfrowstatus.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfrowstatus.get_name_leafdata());
    if (mplsvpninterfaceconfstoragetype.is_set || is_set(mplsvpninterfaceconfstoragetype.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfstoragetype.get_name_leafdata());
    if (mplsvpninterfacelabeledgetype.is_set || is_set(mplsvpninterfacelabeledgetype.yfilter)) leaf_name_data.push_back(mplsvpninterfacelabeledgetype.get_name_leafdata());
    if (mplsvpninterfacevpnclassification.is_set || is_set(mplsvpninterfacevpnclassification.yfilter)) leaf_name_data.push_back(mplsvpninterfacevpnclassification.get_name_leafdata());
    if (mplsvpninterfacevpnroutedistprotocol.is_set || is_set(mplsvpninterfacevpnroutedistprotocol.yfilter)) leaf_name_data.push_back(mplsvpninterfacevpnroutedistprotocol.get_name_leafdata());


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

void MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
        mplsvpnvrfname.value_namespace = name_space;
        mplsvpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceConfIndex")
    {
        mplsvpninterfaceconfindex = value;
        mplsvpninterfaceconfindex.value_namespace = name_space;
        mplsvpninterfaceconfindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceConfRowStatus")
    {
        mplsvpninterfaceconfrowstatus = value;
        mplsvpninterfaceconfrowstatus.value_namespace = name_space;
        mplsvpninterfaceconfrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceConfStorageType")
    {
        mplsvpninterfaceconfstoragetype = value;
        mplsvpninterfaceconfstoragetype.value_namespace = name_space;
        mplsvpninterfaceconfstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceLabelEdgeType")
    {
        mplsvpninterfacelabeledgetype = value;
        mplsvpninterfacelabeledgetype.value_namespace = name_space;
        mplsvpninterfacelabeledgetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceVpnClassification")
    {
        mplsvpninterfacevpnclassification = value;
        mplsvpninterfacevpnclassification.value_namespace = name_space;
        mplsvpninterfacevpnclassification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceVpnRouteDistProtocol")
    {
        mplsvpninterfacevpnroutedistprotocol[value] = true;
    }
}

void MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceConfIndex")
    {
        mplsvpninterfaceconfindex.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceConfRowStatus")
    {
        mplsvpninterfaceconfrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceConfStorageType")
    {
        mplsvpninterfaceconfstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceLabelEdgeType")
    {
        mplsvpninterfacelabeledgetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceVpnClassification")
    {
        mplsvpninterfacevpnclassification.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceVpnRouteDistProtocol")
    {
        mplsvpninterfacevpnroutedistprotocol.yfilter = yfilter;
    }
}

bool MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnInterfaceConfIndex" || name == "mplsVpnInterfaceConfRowStatus" || name == "mplsVpnInterfaceConfStorageType" || name == "mplsVpnInterfaceLabelEdgeType" || name == "mplsVpnInterfaceVpnClassification" || name == "mplsVpnInterfaceVpnRouteDistProtocol")
        return true;
    return false;
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
    for (std::size_t index=0; index<mplsvpnvrfentry.size(); index++)
    {
        if(mplsvpnvrfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrftable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfentry.size(); index++)
    {
        if(mplsvpnvrfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mplsvpnvrfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry>();
        c->parent = this;
        mplsvpnvrfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsVpnMib::Mplsvpnvrftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsVpnMib::Mplsvpnvrftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfactiveinterfaces.yfilter)
	|| ydk::is_set(mplsvpnvrfassociatedinterfaces.yfilter)
	|| ydk::is_set(mplsvpnvrfconfhighroutethreshold.yfilter)
	|| ydk::is_set(mplsvpnvrfconflastchanged.yfilter)
	|| ydk::is_set(mplsvpnvrfconfmaxroutes.yfilter)
	|| ydk::is_set(mplsvpnvrfconfmidroutethreshold.yfilter)
	|| ydk::is_set(mplsvpnvrfconfrowstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfconfstoragetype.yfilter)
	|| ydk::is_set(mplsvpnvrfcreationtime.yfilter)
	|| ydk::is_set(mplsvpnvrfdescription.yfilter)
	|| ydk::is_set(mplsvpnvrfoperstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfperfcurrnumroutes.yfilter)
	|| ydk::is_set(mplsvpnvrfperfroutesadded.yfilter)
	|| ydk::is_set(mplsvpnvrfperfroutesdeleted.yfilter)
	|| ydk::is_set(mplsvpnvrfroutedistinguisher.yfilter)
	|| ydk::is_set(mplsvpnvrfsecillegallabelrcvthresh.yfilter)
	|| ydk::is_set(mplsvpnvrfsecillegallabelviolations.yfilter);
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

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfactiveinterfaces.is_set || is_set(mplsvpnvrfactiveinterfaces.yfilter)) leaf_name_data.push_back(mplsvpnvrfactiveinterfaces.get_name_leafdata());
    if (mplsvpnvrfassociatedinterfaces.is_set || is_set(mplsvpnvrfassociatedinterfaces.yfilter)) leaf_name_data.push_back(mplsvpnvrfassociatedinterfaces.get_name_leafdata());
    if (mplsvpnvrfconfhighroutethreshold.is_set || is_set(mplsvpnvrfconfhighroutethreshold.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfhighroutethreshold.get_name_leafdata());
    if (mplsvpnvrfconflastchanged.is_set || is_set(mplsvpnvrfconflastchanged.yfilter)) leaf_name_data.push_back(mplsvpnvrfconflastchanged.get_name_leafdata());
    if (mplsvpnvrfconfmaxroutes.is_set || is_set(mplsvpnvrfconfmaxroutes.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfmaxroutes.get_name_leafdata());
    if (mplsvpnvrfconfmidroutethreshold.is_set || is_set(mplsvpnvrfconfmidroutethreshold.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfmidroutethreshold.get_name_leafdata());
    if (mplsvpnvrfconfrowstatus.is_set || is_set(mplsvpnvrfconfrowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfrowstatus.get_name_leafdata());
    if (mplsvpnvrfconfstoragetype.is_set || is_set(mplsvpnvrfconfstoragetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfstoragetype.get_name_leafdata());
    if (mplsvpnvrfcreationtime.is_set || is_set(mplsvpnvrfcreationtime.yfilter)) leaf_name_data.push_back(mplsvpnvrfcreationtime.get_name_leafdata());
    if (mplsvpnvrfdescription.is_set || is_set(mplsvpnvrfdescription.yfilter)) leaf_name_data.push_back(mplsvpnvrfdescription.get_name_leafdata());
    if (mplsvpnvrfoperstatus.is_set || is_set(mplsvpnvrfoperstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfoperstatus.get_name_leafdata());
    if (mplsvpnvrfperfcurrnumroutes.is_set || is_set(mplsvpnvrfperfcurrnumroutes.yfilter)) leaf_name_data.push_back(mplsvpnvrfperfcurrnumroutes.get_name_leafdata());
    if (mplsvpnvrfperfroutesadded.is_set || is_set(mplsvpnvrfperfroutesadded.yfilter)) leaf_name_data.push_back(mplsvpnvrfperfroutesadded.get_name_leafdata());
    if (mplsvpnvrfperfroutesdeleted.is_set || is_set(mplsvpnvrfperfroutesdeleted.yfilter)) leaf_name_data.push_back(mplsvpnvrfperfroutesdeleted.get_name_leafdata());
    if (mplsvpnvrfroutedistinguisher.is_set || is_set(mplsvpnvrfroutedistinguisher.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutedistinguisher.get_name_leafdata());
    if (mplsvpnvrfsecillegallabelrcvthresh.is_set || is_set(mplsvpnvrfsecillegallabelrcvthresh.yfilter)) leaf_name_data.push_back(mplsvpnvrfsecillegallabelrcvthresh.get_name_leafdata());
    if (mplsvpnvrfsecillegallabelviolations.is_set || is_set(mplsvpnvrfsecillegallabelviolations.yfilter)) leaf_name_data.push_back(mplsvpnvrfsecillegallabelviolations.get_name_leafdata());


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

void MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
        mplsvpnvrfname.value_namespace = name_space;
        mplsvpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfActiveInterfaces")
    {
        mplsvpnvrfactiveinterfaces = value;
        mplsvpnvrfactiveinterfaces.value_namespace = name_space;
        mplsvpnvrfactiveinterfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfAssociatedInterfaces")
    {
        mplsvpnvrfassociatedinterfaces = value;
        mplsvpnvrfassociatedinterfaces.value_namespace = name_space;
        mplsvpnvrfassociatedinterfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfHighRouteThreshold")
    {
        mplsvpnvrfconfhighroutethreshold = value;
        mplsvpnvrfconfhighroutethreshold.value_namespace = name_space;
        mplsvpnvrfconfhighroutethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfLastChanged")
    {
        mplsvpnvrfconflastchanged = value;
        mplsvpnvrfconflastchanged.value_namespace = name_space;
        mplsvpnvrfconflastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfMaxRoutes")
    {
        mplsvpnvrfconfmaxroutes = value;
        mplsvpnvrfconfmaxroutes.value_namespace = name_space;
        mplsvpnvrfconfmaxroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfMidRouteThreshold")
    {
        mplsvpnvrfconfmidroutethreshold = value;
        mplsvpnvrfconfmidroutethreshold.value_namespace = name_space;
        mplsvpnvrfconfmidroutethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfRowStatus")
    {
        mplsvpnvrfconfrowstatus = value;
        mplsvpnvrfconfrowstatus.value_namespace = name_space;
        mplsvpnvrfconfrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfStorageType")
    {
        mplsvpnvrfconfstoragetype = value;
        mplsvpnvrfconfstoragetype.value_namespace = name_space;
        mplsvpnvrfconfstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfCreationTime")
    {
        mplsvpnvrfcreationtime = value;
        mplsvpnvrfcreationtime.value_namespace = name_space;
        mplsvpnvrfcreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfDescription")
    {
        mplsvpnvrfdescription = value;
        mplsvpnvrfdescription.value_namespace = name_space;
        mplsvpnvrfdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfOperStatus")
    {
        mplsvpnvrfoperstatus = value;
        mplsvpnvrfoperstatus.value_namespace = name_space;
        mplsvpnvrfoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfPerfCurrNumRoutes")
    {
        mplsvpnvrfperfcurrnumroutes = value;
        mplsvpnvrfperfcurrnumroutes.value_namespace = name_space;
        mplsvpnvrfperfcurrnumroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfPerfRoutesAdded")
    {
        mplsvpnvrfperfroutesadded = value;
        mplsvpnvrfperfroutesadded.value_namespace = name_space;
        mplsvpnvrfperfroutesadded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfPerfRoutesDeleted")
    {
        mplsvpnvrfperfroutesdeleted = value;
        mplsvpnvrfperfroutesdeleted.value_namespace = name_space;
        mplsvpnvrfperfroutesdeleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteDistinguisher")
    {
        mplsvpnvrfroutedistinguisher = value;
        mplsvpnvrfroutedistinguisher.value_namespace = name_space;
        mplsvpnvrfroutedistinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelRcvThresh")
    {
        mplsvpnvrfsecillegallabelrcvthresh = value;
        mplsvpnvrfsecillegallabelrcvthresh.value_namespace = name_space;
        mplsvpnvrfsecillegallabelrcvthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelViolations")
    {
        mplsvpnvrfsecillegallabelviolations = value;
        mplsvpnvrfsecillegallabelviolations.value_namespace = name_space;
        mplsvpnvrfsecillegallabelviolations.value_namespace_prefix = name_space_prefix;
    }
}

void MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfActiveInterfaces")
    {
        mplsvpnvrfactiveinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfAssociatedInterfaces")
    {
        mplsvpnvrfassociatedinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfHighRouteThreshold")
    {
        mplsvpnvrfconfhighroutethreshold.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfLastChanged")
    {
        mplsvpnvrfconflastchanged.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfMaxRoutes")
    {
        mplsvpnvrfconfmaxroutes.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfMidRouteThreshold")
    {
        mplsvpnvrfconfmidroutethreshold.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfRowStatus")
    {
        mplsvpnvrfconfrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfStorageType")
    {
        mplsvpnvrfconfstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfCreationTime")
    {
        mplsvpnvrfcreationtime.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfDescription")
    {
        mplsvpnvrfdescription.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfOperStatus")
    {
        mplsvpnvrfoperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfPerfCurrNumRoutes")
    {
        mplsvpnvrfperfcurrnumroutes.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfPerfRoutesAdded")
    {
        mplsvpnvrfperfroutesadded.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfPerfRoutesDeleted")
    {
        mplsvpnvrfperfroutesdeleted.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteDistinguisher")
    {
        mplsvpnvrfroutedistinguisher.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelRcvThresh")
    {
        mplsvpnvrfsecillegallabelrcvthresh.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelViolations")
    {
        mplsvpnvrfsecillegallabelviolations.yfilter = yfilter;
    }
}

bool MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfActiveInterfaces" || name == "mplsVpnVrfAssociatedInterfaces" || name == "mplsVpnVrfConfHighRouteThreshold" || name == "mplsVpnVrfConfLastChanged" || name == "mplsVpnVrfConfMaxRoutes" || name == "mplsVpnVrfConfMidRouteThreshold" || name == "mplsVpnVrfConfRowStatus" || name == "mplsVpnVrfConfStorageType" || name == "mplsVpnVrfCreationTime" || name == "mplsVpnVrfDescription" || name == "mplsVpnVrfOperStatus" || name == "mplsVpnVrfPerfCurrNumRoutes" || name == "mplsVpnVrfPerfRoutesAdded" || name == "mplsVpnVrfPerfRoutesDeleted" || name == "mplsVpnVrfRouteDistinguisher" || name == "mplsVpnVrfSecIllegalLabelRcvThresh" || name == "mplsVpnVrfSecIllegalLabelViolations")
        return true;
    return false;
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
    for (std::size_t index=0; index<mplsvpnvrfroutetargetentry.size(); index++)
    {
        if(mplsvpnvrfroutetargetentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfroutetargettable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfroutetargetentry.size(); index++)
    {
        if(mplsvpnvrfroutetargetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mplsvpnvrfroutetargetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry>();
        c->parent = this;
        mplsvpnvrfroutetargetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfroutetargettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfroutetargetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfroutetargettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsVpnMib::Mplsvpnvrfroutetargettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsVpnMib::Mplsvpnvrfroutetargettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfRouteTargetEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargetindex.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargettype.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetarget.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargetdescr.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargetrowstatus.yfilter);
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

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfroutetargetindex.is_set || is_set(mplsvpnvrfroutetargetindex.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargetindex.get_name_leafdata());
    if (mplsvpnvrfroutetargettype.is_set || is_set(mplsvpnvrfroutetargettype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargettype.get_name_leafdata());
    if (mplsvpnvrfroutetarget.is_set || is_set(mplsvpnvrfroutetarget.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetarget.get_name_leafdata());
    if (mplsvpnvrfroutetargetdescr.is_set || is_set(mplsvpnvrfroutetargetdescr.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargetdescr.get_name_leafdata());
    if (mplsvpnvrfroutetargetrowstatus.is_set || is_set(mplsvpnvrfroutetargetrowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargetrowstatus.get_name_leafdata());


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

void MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
        mplsvpnvrfname.value_namespace = name_space;
        mplsvpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteTargetIndex")
    {
        mplsvpnvrfroutetargetindex = value;
        mplsvpnvrfroutetargetindex.value_namespace = name_space;
        mplsvpnvrfroutetargetindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteTargetType")
    {
        mplsvpnvrfroutetargettype = value;
        mplsvpnvrfroutetargettype.value_namespace = name_space;
        mplsvpnvrfroutetargettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteTarget")
    {
        mplsvpnvrfroutetarget = value;
        mplsvpnvrfroutetarget.value_namespace = name_space;
        mplsvpnvrfroutetarget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteTargetDescr")
    {
        mplsvpnvrfroutetargetdescr = value;
        mplsvpnvrfroutetargetdescr.value_namespace = name_space;
        mplsvpnvrfroutetargetdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteTargetRowStatus")
    {
        mplsvpnvrfroutetargetrowstatus = value;
        mplsvpnvrfroutetargetrowstatus.value_namespace = name_space;
        mplsvpnvrfroutetargetrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteTargetIndex")
    {
        mplsvpnvrfroutetargetindex.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteTargetType")
    {
        mplsvpnvrfroutetargettype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteTarget")
    {
        mplsvpnvrfroutetarget.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteTargetDescr")
    {
        mplsvpnvrfroutetargetdescr.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteTargetRowStatus")
    {
        mplsvpnvrfroutetargetrowstatus.yfilter = yfilter;
    }
}

bool MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfRouteTargetIndex" || name == "mplsVpnVrfRouteTargetType" || name == "mplsVpnVrfRouteTarget" || name == "mplsVpnVrfRouteTargetDescr" || name == "mplsVpnVrfRouteTargetRowStatus")
        return true;
    return false;
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
    for (std::size_t index=0; index<mplsvpnvrfbgpnbraddrentry.size(); index++)
    {
        if(mplsvpnvrfbgpnbraddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbraddrentry.size(); index++)
    {
        if(mplsvpnvrfbgpnbraddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mplsvpnvrfbgpnbraddrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry>();
        c->parent = this;
        mplsvpnvrfbgpnbraddrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfbgpnbraddrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfBgpNbrAddrEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfindex.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrindex.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbraddr.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrrole.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrrowstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrstoragetype.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrtype.yfilter);
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

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpninterfaceconfindex.is_set || is_set(mplsvpninterfaceconfindex.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfindex.get_name_leafdata());
    if (mplsvpnvrfbgpnbrindex.is_set || is_set(mplsvpnvrfbgpnbrindex.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrindex.get_name_leafdata());
    if (mplsvpnvrfbgpnbraddr.is_set || is_set(mplsvpnvrfbgpnbraddr.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbraddr.get_name_leafdata());
    if (mplsvpnvrfbgpnbrrole.is_set || is_set(mplsvpnvrfbgpnbrrole.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrrole.get_name_leafdata());
    if (mplsvpnvrfbgpnbrrowstatus.is_set || is_set(mplsvpnvrfbgpnbrrowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrrowstatus.get_name_leafdata());
    if (mplsvpnvrfbgpnbrstoragetype.is_set || is_set(mplsvpnvrfbgpnbrstoragetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrstoragetype.get_name_leafdata());
    if (mplsvpnvrfbgpnbrtype.is_set || is_set(mplsvpnvrfbgpnbrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrtype.get_name_leafdata());


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

void MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
        mplsvpnvrfname.value_namespace = name_space;
        mplsvpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceConfIndex")
    {
        mplsvpninterfaceconfindex = value;
        mplsvpninterfaceconfindex.value_namespace = name_space;
        mplsvpninterfaceconfindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrIndex")
    {
        mplsvpnvrfbgpnbrindex = value;
        mplsvpnvrfbgpnbrindex.value_namespace = name_space;
        mplsvpnvrfbgpnbrindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrAddr")
    {
        mplsvpnvrfbgpnbraddr = value;
        mplsvpnvrfbgpnbraddr.value_namespace = name_space;
        mplsvpnvrfbgpnbraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrRole")
    {
        mplsvpnvrfbgpnbrrole = value;
        mplsvpnvrfbgpnbrrole.value_namespace = name_space;
        mplsvpnvrfbgpnbrrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrRowStatus")
    {
        mplsvpnvrfbgpnbrrowstatus = value;
        mplsvpnvrfbgpnbrrowstatus.value_namespace = name_space;
        mplsvpnvrfbgpnbrrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrStorageType")
    {
        mplsvpnvrfbgpnbrstoragetype = value;
        mplsvpnvrfbgpnbrstoragetype.value_namespace = name_space;
        mplsvpnvrfbgpnbrstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrType")
    {
        mplsvpnvrfbgpnbrtype = value;
        mplsvpnvrfbgpnbrtype.value_namespace = name_space;
        mplsvpnvrfbgpnbrtype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceConfIndex")
    {
        mplsvpninterfaceconfindex.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrIndex")
    {
        mplsvpnvrfbgpnbrindex.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrAddr")
    {
        mplsvpnvrfbgpnbraddr.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrRole")
    {
        mplsvpnvrfbgpnbrrole.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrRowStatus")
    {
        mplsvpnvrfbgpnbrrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrStorageType")
    {
        mplsvpnvrfbgpnbrstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrType")
    {
        mplsvpnvrfbgpnbrtype.yfilter = yfilter;
    }
}

bool MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnInterfaceConfIndex" || name == "mplsVpnVrfBgpNbrIndex" || name == "mplsVpnVrfBgpNbrAddr" || name == "mplsVpnVrfBgpNbrRole" || name == "mplsVpnVrfBgpNbrRowStatus" || name == "mplsVpnVrfBgpNbrStorageType" || name == "mplsVpnVrfBgpNbrType")
        return true;
    return false;
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
    for (std::size_t index=0; index<mplsvpnvrfbgpnbrprefixentry.size(); index++)
    {
        if(mplsvpnvrfbgpnbrprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbrprefixentry.size(); index++)
    {
        if(mplsvpnvrfbgpnbrprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mplsvpnvrfbgpnbrprefixentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry>();
        c->parent = this;
        mplsvpnvrfbgpnbrprefixentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfbgpnbrprefixentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfBgpNbrPrefixEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattripaddrprefix.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattripaddrprefixlen.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrpeer.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattraggregatoraddr.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattraggregatoras.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattraspathsegment.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattratomicaggregate.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrbest.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrcalclocalpref.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrlocalpref.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrmultiexitdisc.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrnexthop.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrorigin.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrunknown.yfilter);
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

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfbgppathattripaddrprefix.is_set || is_set(mplsvpnvrfbgppathattripaddrprefix.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattripaddrprefix.get_name_leafdata());
    if (mplsvpnvrfbgppathattripaddrprefixlen.is_set || is_set(mplsvpnvrfbgppathattripaddrprefixlen.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattripaddrprefixlen.get_name_leafdata());
    if (mplsvpnvrfbgppathattrpeer.is_set || is_set(mplsvpnvrfbgppathattrpeer.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrpeer.get_name_leafdata());
    if (mplsvpnvrfbgppathattraggregatoraddr.is_set || is_set(mplsvpnvrfbgppathattraggregatoraddr.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattraggregatoraddr.get_name_leafdata());
    if (mplsvpnvrfbgppathattraggregatoras.is_set || is_set(mplsvpnvrfbgppathattraggregatoras.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattraggregatoras.get_name_leafdata());
    if (mplsvpnvrfbgppathattraspathsegment.is_set || is_set(mplsvpnvrfbgppathattraspathsegment.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattraspathsegment.get_name_leafdata());
    if (mplsvpnvrfbgppathattratomicaggregate.is_set || is_set(mplsvpnvrfbgppathattratomicaggregate.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattratomicaggregate.get_name_leafdata());
    if (mplsvpnvrfbgppathattrbest.is_set || is_set(mplsvpnvrfbgppathattrbest.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrbest.get_name_leafdata());
    if (mplsvpnvrfbgppathattrcalclocalpref.is_set || is_set(mplsvpnvrfbgppathattrcalclocalpref.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrcalclocalpref.get_name_leafdata());
    if (mplsvpnvrfbgppathattrlocalpref.is_set || is_set(mplsvpnvrfbgppathattrlocalpref.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrlocalpref.get_name_leafdata());
    if (mplsvpnvrfbgppathattrmultiexitdisc.is_set || is_set(mplsvpnvrfbgppathattrmultiexitdisc.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrmultiexitdisc.get_name_leafdata());
    if (mplsvpnvrfbgppathattrnexthop.is_set || is_set(mplsvpnvrfbgppathattrnexthop.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrnexthop.get_name_leafdata());
    if (mplsvpnvrfbgppathattrorigin.is_set || is_set(mplsvpnvrfbgppathattrorigin.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrorigin.get_name_leafdata());
    if (mplsvpnvrfbgppathattrunknown.is_set || is_set(mplsvpnvrfbgppathattrunknown.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrunknown.get_name_leafdata());


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

void MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
        mplsvpnvrfname.value_namespace = name_space;
        mplsvpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrIpAddrPrefix")
    {
        mplsvpnvrfbgppathattripaddrprefix = value;
        mplsvpnvrfbgppathattripaddrprefix.value_namespace = name_space;
        mplsvpnvrfbgppathattripaddrprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrIpAddrPrefixLen")
    {
        mplsvpnvrfbgppathattripaddrprefixlen = value;
        mplsvpnvrfbgppathattripaddrprefixlen.value_namespace = name_space;
        mplsvpnvrfbgppathattripaddrprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrPeer")
    {
        mplsvpnvrfbgppathattrpeer = value;
        mplsvpnvrfbgppathattrpeer.value_namespace = name_space;
        mplsvpnvrfbgppathattrpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAddr")
    {
        mplsvpnvrfbgppathattraggregatoraddr = value;
        mplsvpnvrfbgppathattraggregatoraddr.value_namespace = name_space;
        mplsvpnvrfbgppathattraggregatoraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAS")
    {
        mplsvpnvrfbgppathattraggregatoras = value;
        mplsvpnvrfbgppathattraggregatoras.value_namespace = name_space;
        mplsvpnvrfbgppathattraggregatoras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrASPathSegment")
    {
        mplsvpnvrfbgppathattraspathsegment = value;
        mplsvpnvrfbgppathattraspathsegment.value_namespace = name_space;
        mplsvpnvrfbgppathattraspathsegment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAtomicAggregate")
    {
        mplsvpnvrfbgppathattratomicaggregate = value;
        mplsvpnvrfbgppathattratomicaggregate.value_namespace = name_space;
        mplsvpnvrfbgppathattratomicaggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrBest")
    {
        mplsvpnvrfbgppathattrbest = value;
        mplsvpnvrfbgppathattrbest.value_namespace = name_space;
        mplsvpnvrfbgppathattrbest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrCalcLocalPref")
    {
        mplsvpnvrfbgppathattrcalclocalpref = value;
        mplsvpnvrfbgppathattrcalclocalpref.value_namespace = name_space;
        mplsvpnvrfbgppathattrcalclocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrLocalPref")
    {
        mplsvpnvrfbgppathattrlocalpref = value;
        mplsvpnvrfbgppathattrlocalpref.value_namespace = name_space;
        mplsvpnvrfbgppathattrlocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrMultiExitDisc")
    {
        mplsvpnvrfbgppathattrmultiexitdisc = value;
        mplsvpnvrfbgppathattrmultiexitdisc.value_namespace = name_space;
        mplsvpnvrfbgppathattrmultiexitdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrNextHop")
    {
        mplsvpnvrfbgppathattrnexthop = value;
        mplsvpnvrfbgppathattrnexthop.value_namespace = name_space;
        mplsvpnvrfbgppathattrnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrOrigin")
    {
        mplsvpnvrfbgppathattrorigin = value;
        mplsvpnvrfbgppathattrorigin.value_namespace = name_space;
        mplsvpnvrfbgppathattrorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrUnknown")
    {
        mplsvpnvrfbgppathattrunknown = value;
        mplsvpnvrfbgppathattrunknown.value_namespace = name_space;
        mplsvpnvrfbgppathattrunknown.value_namespace_prefix = name_space_prefix;
    }
}

void MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrIpAddrPrefix")
    {
        mplsvpnvrfbgppathattripaddrprefix.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrIpAddrPrefixLen")
    {
        mplsvpnvrfbgppathattripaddrprefixlen.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrPeer")
    {
        mplsvpnvrfbgppathattrpeer.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAddr")
    {
        mplsvpnvrfbgppathattraggregatoraddr.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAS")
    {
        mplsvpnvrfbgppathattraggregatoras.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrASPathSegment")
    {
        mplsvpnvrfbgppathattraspathsegment.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAtomicAggregate")
    {
        mplsvpnvrfbgppathattratomicaggregate.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrBest")
    {
        mplsvpnvrfbgppathattrbest.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrCalcLocalPref")
    {
        mplsvpnvrfbgppathattrcalclocalpref.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrLocalPref")
    {
        mplsvpnvrfbgppathattrlocalpref.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrMultiExitDisc")
    {
        mplsvpnvrfbgppathattrmultiexitdisc.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrNextHop")
    {
        mplsvpnvrfbgppathattrnexthop.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrOrigin")
    {
        mplsvpnvrfbgppathattrorigin.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrUnknown")
    {
        mplsvpnvrfbgppathattrunknown.yfilter = yfilter;
    }
}

bool MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfBgpPathAttrIpAddrPrefix" || name == "mplsVpnVrfBgpPathAttrIpAddrPrefixLen" || name == "mplsVpnVrfBgpPathAttrPeer" || name == "mplsVpnVrfBgpPathAttrAggregatorAddr" || name == "mplsVpnVrfBgpPathAttrAggregatorAS" || name == "mplsVpnVrfBgpPathAttrASPathSegment" || name == "mplsVpnVrfBgpPathAttrAtomicAggregate" || name == "mplsVpnVrfBgpPathAttrBest" || name == "mplsVpnVrfBgpPathAttrCalcLocalPref" || name == "mplsVpnVrfBgpPathAttrLocalPref" || name == "mplsVpnVrfBgpPathAttrMultiExitDisc" || name == "mplsVpnVrfBgpPathAttrNextHop" || name == "mplsVpnVrfBgpPathAttrOrigin" || name == "mplsVpnVrfBgpPathAttrUnknown")
        return true;
    return false;
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
    for (std::size_t index=0; index<mplsvpnvrfrouteentry.size(); index++)
    {
        if(mplsvpnvrfrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsVpnMib::Mplsvpnvrfroutetable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfrouteentry.size(); index++)
    {
        if(mplsvpnvrfrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : mplsvpnvrfrouteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry>();
        c->parent = this;
        mplsvpnvrfrouteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsVpnMib::Mplsvpnvrfroutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsvpnvrfrouteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsVpnMib::Mplsvpnvrfroutetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsVpnMib::Mplsvpnvrfroutetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsVpnMib::Mplsvpnvrfroutetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfRouteEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfroutedest.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemask.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetos.yfilter)
	|| ydk::is_set(mplsvpnvrfroutenexthop.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteage.yfilter)
	|| ydk::is_set(mplsvpnvrfroutedestaddrtype.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteifindex.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteinfo.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemaskaddrtype.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric1.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric2.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric3.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric4.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric5.yfilter)
	|| ydk::is_set(mplsvpnvrfroutenexthopaddrtype.yfilter)
	|| ydk::is_set(mplsvpnvrfroutenexthopas.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteproto.yfilter)
	|| ydk::is_set(mplsvpnvrfrouterowstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfroutestoragetype.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetype.yfilter);
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

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfroutedest.is_set || is_set(mplsvpnvrfroutedest.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutedest.get_name_leafdata());
    if (mplsvpnvrfroutemask.is_set || is_set(mplsvpnvrfroutemask.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemask.get_name_leafdata());
    if (mplsvpnvrfroutetos.is_set || is_set(mplsvpnvrfroutetos.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetos.get_name_leafdata());
    if (mplsvpnvrfroutenexthop.is_set || is_set(mplsvpnvrfroutenexthop.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutenexthop.get_name_leafdata());
    if (mplsvpnvrfrouteage.is_set || is_set(mplsvpnvrfrouteage.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteage.get_name_leafdata());
    if (mplsvpnvrfroutedestaddrtype.is_set || is_set(mplsvpnvrfroutedestaddrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutedestaddrtype.get_name_leafdata());
    if (mplsvpnvrfrouteifindex.is_set || is_set(mplsvpnvrfrouteifindex.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteifindex.get_name_leafdata());
    if (mplsvpnvrfrouteinfo.is_set || is_set(mplsvpnvrfrouteinfo.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteinfo.get_name_leafdata());
    if (mplsvpnvrfroutemaskaddrtype.is_set || is_set(mplsvpnvrfroutemaskaddrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemaskaddrtype.get_name_leafdata());
    if (mplsvpnvrfroutemetric1.is_set || is_set(mplsvpnvrfroutemetric1.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric1.get_name_leafdata());
    if (mplsvpnvrfroutemetric2.is_set || is_set(mplsvpnvrfroutemetric2.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric2.get_name_leafdata());
    if (mplsvpnvrfroutemetric3.is_set || is_set(mplsvpnvrfroutemetric3.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric3.get_name_leafdata());
    if (mplsvpnvrfroutemetric4.is_set || is_set(mplsvpnvrfroutemetric4.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric4.get_name_leafdata());
    if (mplsvpnvrfroutemetric5.is_set || is_set(mplsvpnvrfroutemetric5.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric5.get_name_leafdata());
    if (mplsvpnvrfroutenexthopaddrtype.is_set || is_set(mplsvpnvrfroutenexthopaddrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutenexthopaddrtype.get_name_leafdata());
    if (mplsvpnvrfroutenexthopas.is_set || is_set(mplsvpnvrfroutenexthopas.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutenexthopas.get_name_leafdata());
    if (mplsvpnvrfrouteproto.is_set || is_set(mplsvpnvrfrouteproto.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteproto.get_name_leafdata());
    if (mplsvpnvrfrouterowstatus.is_set || is_set(mplsvpnvrfrouterowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouterowstatus.get_name_leafdata());
    if (mplsvpnvrfroutestoragetype.is_set || is_set(mplsvpnvrfroutestoragetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutestoragetype.get_name_leafdata());
    if (mplsvpnvrfroutetype.is_set || is_set(mplsvpnvrfroutetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetype.get_name_leafdata());


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

void MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
        mplsvpnvrfname.value_namespace = name_space;
        mplsvpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteDest")
    {
        mplsvpnvrfroutedest = value;
        mplsvpnvrfroutedest.value_namespace = name_space;
        mplsvpnvrfroutedest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMask")
    {
        mplsvpnvrfroutemask = value;
        mplsvpnvrfroutemask.value_namespace = name_space;
        mplsvpnvrfroutemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteTos")
    {
        mplsvpnvrfroutetos = value;
        mplsvpnvrfroutetos.value_namespace = name_space;
        mplsvpnvrfroutetos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteNextHop")
    {
        mplsvpnvrfroutenexthop = value;
        mplsvpnvrfroutenexthop.value_namespace = name_space;
        mplsvpnvrfroutenexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteAge")
    {
        mplsvpnvrfrouteage = value;
        mplsvpnvrfrouteage.value_namespace = name_space;
        mplsvpnvrfrouteage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteDestAddrType")
    {
        mplsvpnvrfroutedestaddrtype = value;
        mplsvpnvrfroutedestaddrtype.value_namespace = name_space;
        mplsvpnvrfroutedestaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteIfIndex")
    {
        mplsvpnvrfrouteifindex = value;
        mplsvpnvrfrouteifindex.value_namespace = name_space;
        mplsvpnvrfrouteifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteInfo")
    {
        mplsvpnvrfrouteinfo = value;
        mplsvpnvrfrouteinfo.value_namespace = name_space;
        mplsvpnvrfrouteinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMaskAddrType")
    {
        mplsvpnvrfroutemaskaddrtype = value;
        mplsvpnvrfroutemaskaddrtype.value_namespace = name_space;
        mplsvpnvrfroutemaskaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMetric1")
    {
        mplsvpnvrfroutemetric1 = value;
        mplsvpnvrfroutemetric1.value_namespace = name_space;
        mplsvpnvrfroutemetric1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMetric2")
    {
        mplsvpnvrfroutemetric2 = value;
        mplsvpnvrfroutemetric2.value_namespace = name_space;
        mplsvpnvrfroutemetric2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMetric3")
    {
        mplsvpnvrfroutemetric3 = value;
        mplsvpnvrfroutemetric3.value_namespace = name_space;
        mplsvpnvrfroutemetric3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMetric4")
    {
        mplsvpnvrfroutemetric4 = value;
        mplsvpnvrfroutemetric4.value_namespace = name_space;
        mplsvpnvrfroutemetric4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMetric5")
    {
        mplsvpnvrfroutemetric5 = value;
        mplsvpnvrfroutemetric5.value_namespace = name_space;
        mplsvpnvrfroutemetric5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAddrType")
    {
        mplsvpnvrfroutenexthopaddrtype = value;
        mplsvpnvrfroutenexthopaddrtype.value_namespace = name_space;
        mplsvpnvrfroutenexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAS")
    {
        mplsvpnvrfroutenexthopas = value;
        mplsvpnvrfroutenexthopas.value_namespace = name_space;
        mplsvpnvrfroutenexthopas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteProto")
    {
        mplsvpnvrfrouteproto = value;
        mplsvpnvrfrouteproto.value_namespace = name_space;
        mplsvpnvrfrouteproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteRowStatus")
    {
        mplsvpnvrfrouterowstatus = value;
        mplsvpnvrfrouterowstatus.value_namespace = name_space;
        mplsvpnvrfrouterowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteStorageType")
    {
        mplsvpnvrfroutestoragetype = value;
        mplsvpnvrfroutestoragetype.value_namespace = name_space;
        mplsvpnvrfroutestoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteType")
    {
        mplsvpnvrfroutetype = value;
        mplsvpnvrfroutetype.value_namespace = name_space;
        mplsvpnvrfroutetype.value_namespace_prefix = name_space_prefix;
    }
}

void MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteDest")
    {
        mplsvpnvrfroutedest.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMask")
    {
        mplsvpnvrfroutemask.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteTos")
    {
        mplsvpnvrfroutetos.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteNextHop")
    {
        mplsvpnvrfroutenexthop.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteAge")
    {
        mplsvpnvrfrouteage.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteDestAddrType")
    {
        mplsvpnvrfroutedestaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteIfIndex")
    {
        mplsvpnvrfrouteifindex.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteInfo")
    {
        mplsvpnvrfrouteinfo.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMaskAddrType")
    {
        mplsvpnvrfroutemaskaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMetric1")
    {
        mplsvpnvrfroutemetric1.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMetric2")
    {
        mplsvpnvrfroutemetric2.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMetric3")
    {
        mplsvpnvrfroutemetric3.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMetric4")
    {
        mplsvpnvrfroutemetric4.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMetric5")
    {
        mplsvpnvrfroutemetric5.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAddrType")
    {
        mplsvpnvrfroutenexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAS")
    {
        mplsvpnvrfroutenexthopas.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteProto")
    {
        mplsvpnvrfrouteproto.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteRowStatus")
    {
        mplsvpnvrfrouterowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteStorageType")
    {
        mplsvpnvrfroutestoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteType")
    {
        mplsvpnvrfroutetype.yfilter = yfilter;
    }
}

bool MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfRouteDest" || name == "mplsVpnVrfRouteMask" || name == "mplsVpnVrfRouteTos" || name == "mplsVpnVrfRouteNextHop" || name == "mplsVpnVrfRouteAge" || name == "mplsVpnVrfRouteDestAddrType" || name == "mplsVpnVrfRouteIfIndex" || name == "mplsVpnVrfRouteInfo" || name == "mplsVpnVrfRouteMaskAddrType" || name == "mplsVpnVrfRouteMetric1" || name == "mplsVpnVrfRouteMetric2" || name == "mplsVpnVrfRouteMetric3" || name == "mplsVpnVrfRouteMetric4" || name == "mplsVpnVrfRouteMetric5" || name == "mplsVpnVrfRouteNextHopAddrType" || name == "mplsVpnVrfRouteNextHopAS" || name == "mplsVpnVrfRouteProto" || name == "mplsVpnVrfRouteRowStatus" || name == "mplsVpnVrfRouteStorageType" || name == "mplsVpnVrfRouteType")
        return true;
    return false;
}

const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfacelabeledgetype::providerEdge {1, "providerEdge"};
const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfacelabeledgetype::customerEdge {2, "customerEdge"};

const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfacevpnclassification::carrierOfCarrier {1, "carrierOfCarrier"};
const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfacevpnclassification::enterprise {2, "enterprise"};
const Enum::YLeaf MplsVpnMib::Mplsvpninterfaceconftable::Mplsvpninterfaceconfentry::Mplsvpninterfacevpnclassification::interProvider {3, "interProvider"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::Mplsvpnvrfoperstatus::up {1, "up"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrftable::Mplsvpnvrfentry::Mplsvpnvrfoperstatus::down {2, "down"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::Mplsvpnvrfroutetargettype::import {1, "import"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::Mplsvpnvrfroutetargettype::export_ {2, "export"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetargettable::Mplsvpnvrfroutetargetentry::Mplsvpnvrfroutetargettype::both {3, "both"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::Mplsvpnvrfbgpnbrrole::ce {1, "ce"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbraddrtable::Mplsvpnvrfbgpnbraddrentry::Mplsvpnvrfbgpnbrrole::pe {2, "pe"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattrorigin::igp {1, "igp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattrorigin::egp {2, "egp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattrorigin::incomplete {3, "incomplete"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattratomicaggregate::lessSpecificRrouteNotSelected {1, "lessSpecificRrouteNotSelected"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattratomicaggregate::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattrbest::false_ {1, "false"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfbgpnbrprefixtable::Mplsvpnvrfbgpnbrprefixentry::Mplsvpnvrfbgppathattrbest::true_ {2, "true"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfroutetype::other {1, "other"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfroutetype::reject {2, "reject"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfroutetype::local {3, "local"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfroutetype::remote {4, "remote"};

const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::other {1, "other"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::local {2, "local"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::netmgmt {3, "netmgmt"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::icmp {4, "icmp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::egp {5, "egp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::ggp {6, "ggp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::hello {7, "hello"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::rip {8, "rip"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::isIs {9, "isIs"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::esIs {10, "esIs"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::ospf {13, "ospf"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::bgp {14, "bgp"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::idpr {15, "idpr"};
const Enum::YLeaf MplsVpnMib::Mplsvpnvrfroutetable::Mplsvpnvrfrouteentry::Mplsvpnvrfrouteproto::ciscoEigrp {16, "ciscoEigrp"};


}
}

