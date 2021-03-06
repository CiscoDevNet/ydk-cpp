
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_VPN_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_VPN_MIB {

MPLSVPNMIB::MPLSVPNMIB()
    :
    mplsvpnscalars(std::make_shared<MPLSVPNMIB::MplsVpnScalars>())
    , mplsvpninterfaceconftable(std::make_shared<MPLSVPNMIB::MplsVpnInterfaceConfTable>())
    , mplsvpnvrftable(std::make_shared<MPLSVPNMIB::MplsVpnVrfTable>())
    , mplsvpnvrfroutetargettable(std::make_shared<MPLSVPNMIB::MplsVpnVrfRouteTargetTable>())
    , mplsvpnvrfbgpnbraddrtable(std::make_shared<MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable>())
    , mplsvpnvrfbgpnbrprefixtable(std::make_shared<MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable>())
    , mplsvpnvrfroutetable(std::make_shared<MPLSVPNMIB::MplsVpnVrfRouteTable>())
{
    mplsvpnscalars->parent = this;
    mplsvpninterfaceconftable->parent = this;
    mplsvpnvrftable->parent = this;
    mplsvpnvrfroutetargettable->parent = this;
    mplsvpnvrfbgpnbraddrtable->parent = this;
    mplsvpnvrfbgpnbrprefixtable->parent = this;
    mplsvpnvrfroutetable->parent = this;

    yang_name = "MPLS-VPN-MIB"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

MPLSVPNMIB::~MPLSVPNMIB()
{
}

bool MPLSVPNMIB::has_data() const
{
    if (is_presence_container) return true;
    return (mplsvpnscalars !=  nullptr && mplsvpnscalars->has_data())
	|| (mplsvpninterfaceconftable !=  nullptr && mplsvpninterfaceconftable->has_data())
	|| (mplsvpnvrftable !=  nullptr && mplsvpnvrftable->has_data())
	|| (mplsvpnvrfroutetargettable !=  nullptr && mplsvpnvrfroutetargettable->has_data())
	|| (mplsvpnvrfbgpnbraddrtable !=  nullptr && mplsvpnvrfbgpnbraddrtable->has_data())
	|| (mplsvpnvrfbgpnbrprefixtable !=  nullptr && mplsvpnvrfbgpnbrprefixtable->has_data())
	|| (mplsvpnvrfroutetable !=  nullptr && mplsvpnvrfroutetable->has_data());
}

bool MPLSVPNMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mplsvpnscalars !=  nullptr && mplsvpnscalars->has_operation())
	|| (mplsvpninterfaceconftable !=  nullptr && mplsvpninterfaceconftable->has_operation())
	|| (mplsvpnvrftable !=  nullptr && mplsvpnvrftable->has_operation())
	|| (mplsvpnvrfroutetargettable !=  nullptr && mplsvpnvrfroutetargettable->has_operation())
	|| (mplsvpnvrfbgpnbraddrtable !=  nullptr && mplsvpnvrfbgpnbraddrtable->has_operation())
	|| (mplsvpnvrfbgpnbrprefixtable !=  nullptr && mplsvpnvrfbgpnbrprefixtable->has_operation())
	|| (mplsvpnvrfroutetable !=  nullptr && mplsvpnvrfroutetable->has_operation());
}

std::string MPLSVPNMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnScalars")
    {
        if(mplsvpnscalars == nullptr)
        {
            mplsvpnscalars = std::make_shared<MPLSVPNMIB::MplsVpnScalars>();
        }
        return mplsvpnscalars;
    }

    if(child_yang_name == "mplsVpnInterfaceConfTable")
    {
        if(mplsvpninterfaceconftable == nullptr)
        {
            mplsvpninterfaceconftable = std::make_shared<MPLSVPNMIB::MplsVpnInterfaceConfTable>();
        }
        return mplsvpninterfaceconftable;
    }

    if(child_yang_name == "mplsVpnVrfTable")
    {
        if(mplsvpnvrftable == nullptr)
        {
            mplsvpnvrftable = std::make_shared<MPLSVPNMIB::MplsVpnVrfTable>();
        }
        return mplsvpnvrftable;
    }

    if(child_yang_name == "mplsVpnVrfRouteTargetTable")
    {
        if(mplsvpnvrfroutetargettable == nullptr)
        {
            mplsvpnvrfroutetargettable = std::make_shared<MPLSVPNMIB::MplsVpnVrfRouteTargetTable>();
        }
        return mplsvpnvrfroutetargettable;
    }

    if(child_yang_name == "mplsVpnVrfBgpNbrAddrTable")
    {
        if(mplsvpnvrfbgpnbraddrtable == nullptr)
        {
            mplsvpnvrfbgpnbraddrtable = std::make_shared<MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable>();
        }
        return mplsvpnvrfbgpnbraddrtable;
    }

    if(child_yang_name == "mplsVpnVrfBgpNbrPrefixTable")
    {
        if(mplsvpnvrfbgpnbrprefixtable == nullptr)
        {
            mplsvpnvrfbgpnbrprefixtable = std::make_shared<MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable>();
        }
        return mplsvpnvrfbgpnbrprefixtable;
    }

    if(child_yang_name == "mplsVpnVrfRouteTable")
    {
        if(mplsvpnvrfroutetable == nullptr)
        {
            mplsvpnvrfroutetable = std::make_shared<MPLSVPNMIB::MplsVpnVrfRouteTable>();
        }
        return mplsvpnvrfroutetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mplsvpnscalars != nullptr)
    {
        _children["mplsVpnScalars"] = mplsvpnscalars;
    }

    if(mplsvpninterfaceconftable != nullptr)
    {
        _children["mplsVpnInterfaceConfTable"] = mplsvpninterfaceconftable;
    }

    if(mplsvpnvrftable != nullptr)
    {
        _children["mplsVpnVrfTable"] = mplsvpnvrftable;
    }

    if(mplsvpnvrfroutetargettable != nullptr)
    {
        _children["mplsVpnVrfRouteTargetTable"] = mplsvpnvrfroutetargettable;
    }

    if(mplsvpnvrfbgpnbraddrtable != nullptr)
    {
        _children["mplsVpnVrfBgpNbrAddrTable"] = mplsvpnvrfbgpnbraddrtable;
    }

    if(mplsvpnvrfbgpnbrprefixtable != nullptr)
    {
        _children["mplsVpnVrfBgpNbrPrefixTable"] = mplsvpnvrfbgpnbrprefixtable;
    }

    if(mplsvpnvrfroutetable != nullptr)
    {
        _children["mplsVpnVrfRouteTable"] = mplsvpnvrfroutetable;
    }

    return _children;
}

void MPLSVPNMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSVPNMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::clone_ptr() const
{
    return std::make_shared<MPLSVPNMIB>();
}

std::string MPLSVPNMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MPLSVPNMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MPLSVPNMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MPLSVPNMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MPLSVPNMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnScalars" || name == "mplsVpnInterfaceConfTable" || name == "mplsVpnVrfTable" || name == "mplsVpnVrfRouteTargetTable" || name == "mplsVpnVrfBgpNbrAddrTable" || name == "mplsVpnVrfBgpNbrPrefixTable" || name == "mplsVpnVrfRouteTable")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnScalars::MplsVpnScalars()
    :
    mplsvpnconfiguredvrfs{YType::uint32, "mplsVpnConfiguredVrfs"},
    mplsvpnactivevrfs{YType::uint32, "mplsVpnActiveVrfs"},
    mplsvpnconnectedinterfaces{YType::uint32, "mplsVpnConnectedInterfaces"},
    mplsvpnnotificationenable{YType::boolean, "mplsVpnNotificationEnable"},
    mplsvpnvrfconfmaxpossibleroutes{YType::uint32, "mplsVpnVrfConfMaxPossibleRoutes"}
{

    yang_name = "mplsVpnScalars"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnScalars::~MplsVpnScalars()
{
}

bool MPLSVPNMIB::MplsVpnScalars::has_data() const
{
    if (is_presence_container) return true;
    return mplsvpnconfiguredvrfs.is_set
	|| mplsvpnactivevrfs.is_set
	|| mplsvpnconnectedinterfaces.is_set
	|| mplsvpnnotificationenable.is_set
	|| mplsvpnvrfconfmaxpossibleroutes.is_set;
}

bool MPLSVPNMIB::MplsVpnScalars::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnconfiguredvrfs.yfilter)
	|| ydk::is_set(mplsvpnactivevrfs.yfilter)
	|| ydk::is_set(mplsvpnconnectedinterfaces.yfilter)
	|| ydk::is_set(mplsvpnnotificationenable.yfilter)
	|| ydk::is_set(mplsvpnvrfconfmaxpossibleroutes.yfilter);
}

std::string MPLSVPNMIB::MplsVpnScalars::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnScalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnScalars";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnScalars::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnconfiguredvrfs.is_set || is_set(mplsvpnconfiguredvrfs.yfilter)) leaf_name_data.push_back(mplsvpnconfiguredvrfs.get_name_leafdata());
    if (mplsvpnactivevrfs.is_set || is_set(mplsvpnactivevrfs.yfilter)) leaf_name_data.push_back(mplsvpnactivevrfs.get_name_leafdata());
    if (mplsvpnconnectedinterfaces.is_set || is_set(mplsvpnconnectedinterfaces.yfilter)) leaf_name_data.push_back(mplsvpnconnectedinterfaces.get_name_leafdata());
    if (mplsvpnnotificationenable.is_set || is_set(mplsvpnnotificationenable.yfilter)) leaf_name_data.push_back(mplsvpnnotificationenable.get_name_leafdata());
    if (mplsvpnvrfconfmaxpossibleroutes.is_set || is_set(mplsvpnvrfconfmaxpossibleroutes.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfmaxpossibleroutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnScalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnScalars::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSVPNMIB::MplsVpnScalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnConfiguredVrfs")
    {
        mplsvpnconfiguredvrfs = value;
        mplsvpnconfiguredvrfs.value_namespace = name_space;
        mplsvpnconfiguredvrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnActiveVrfs")
    {
        mplsvpnactivevrfs = value;
        mplsvpnactivevrfs.value_namespace = name_space;
        mplsvpnactivevrfs.value_namespace_prefix = name_space_prefix;
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

void MPLSVPNMIB::MplsVpnScalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnConfiguredVrfs")
    {
        mplsvpnconfiguredvrfs.yfilter = yfilter;
    }
    if(value_path == "mplsVpnActiveVrfs")
    {
        mplsvpnactivevrfs.yfilter = yfilter;
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

bool MPLSVPNMIB::MplsVpnScalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnConfiguredVrfs" || name == "mplsVpnActiveVrfs" || name == "mplsVpnConnectedInterfaces" || name == "mplsVpnNotificationEnable" || name == "mplsVpnVrfConfMaxPossibleRoutes")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfTable()
    :
    mplsvpninterfaceconfentry(this, {"mplsvpnvrfname", "mplsvpninterfaceconfindex"})
{

    yang_name = "mplsVpnInterfaceConfTable"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnInterfaceConfTable::~MplsVpnInterfaceConfTable()
{
}

bool MPLSVPNMIB::MplsVpnInterfaceConfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsvpninterfaceconfentry.len(); index++)
    {
        if(mplsvpninterfaceconfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSVPNMIB::MplsVpnInterfaceConfTable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpninterfaceconfentry.len(); index++)
    {
        if(mplsvpninterfaceconfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSVPNMIB::MplsVpnInterfaceConfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnInterfaceConfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnInterfaceConfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnInterfaceConfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnInterfaceConfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnInterfaceConfEntry")
    {
        auto ent_ = std::make_shared<MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry>();
        ent_->parent = this;
        mplsvpninterfaceconfentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnInterfaceConfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsvpninterfaceconfentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MPLSVPNMIB::MplsVpnInterfaceConfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSVPNMIB::MplsVpnInterfaceConfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSVPNMIB::MplsVpnInterfaceConfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnInterfaceConfEntry")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceConfEntry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpninterfaceconfindex{YType::int32, "mplsVpnInterfaceConfIndex"},
    mplsvpninterfacelabeledgetype{YType::enumeration, "mplsVpnInterfaceLabelEdgeType"},
    mplsvpninterfacevpnclassification{YType::enumeration, "mplsVpnInterfaceVpnClassification"},
    mplsvpninterfacevpnroutedistprotocol{YType::bits, "mplsVpnInterfaceVpnRouteDistProtocol"},
    mplsvpninterfaceconfstoragetype{YType::enumeration, "mplsVpnInterfaceConfStorageType"},
    mplsvpninterfaceconfrowstatus{YType::enumeration, "mplsVpnInterfaceConfRowStatus"}
{

    yang_name = "mplsVpnInterfaceConfEntry"; yang_parent_name = "mplsVpnInterfaceConfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::~MplsVpnInterfaceConfEntry()
{
}

bool MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsvpnvrfname.is_set
	|| mplsvpninterfaceconfindex.is_set
	|| mplsvpninterfacelabeledgetype.is_set
	|| mplsvpninterfacevpnclassification.is_set
	|| mplsvpninterfacevpnroutedistprotocol.is_set
	|| mplsvpninterfaceconfstoragetype.is_set
	|| mplsvpninterfaceconfrowstatus.is_set;
}

bool MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfindex.yfilter)
	|| ydk::is_set(mplsvpninterfacelabeledgetype.yfilter)
	|| ydk::is_set(mplsvpninterfacevpnclassification.yfilter)
	|| ydk::is_set(mplsvpninterfacevpnroutedistprotocol.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfstoragetype.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfrowstatus.yfilter);
}

std::string MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnInterfaceConfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnInterfaceConfEntry";
    ADD_KEY_TOKEN(mplsvpnvrfname, "mplsVpnVrfName");
    ADD_KEY_TOKEN(mplsvpninterfaceconfindex, "mplsVpnInterfaceConfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpninterfaceconfindex.is_set || is_set(mplsvpninterfaceconfindex.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfindex.get_name_leafdata());
    if (mplsvpninterfacelabeledgetype.is_set || is_set(mplsvpninterfacelabeledgetype.yfilter)) leaf_name_data.push_back(mplsvpninterfacelabeledgetype.get_name_leafdata());
    if (mplsvpninterfacevpnclassification.is_set || is_set(mplsvpninterfacevpnclassification.yfilter)) leaf_name_data.push_back(mplsvpninterfacevpnclassification.get_name_leafdata());
    if (mplsvpninterfacevpnroutedistprotocol.is_set || is_set(mplsvpninterfacevpnroutedistprotocol.yfilter)) leaf_name_data.push_back(mplsvpninterfacevpnroutedistprotocol.get_name_leafdata());
    if (mplsvpninterfaceconfstoragetype.is_set || is_set(mplsvpninterfaceconfstoragetype.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfstoragetype.get_name_leafdata());
    if (mplsvpninterfaceconfrowstatus.is_set || is_set(mplsvpninterfaceconfrowstatus.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsVpnInterfaceConfStorageType")
    {
        mplsvpninterfaceconfstoragetype = value;
        mplsvpninterfaceconfstoragetype.value_namespace = name_space;
        mplsvpninterfaceconfstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnInterfaceConfRowStatus")
    {
        mplsvpninterfaceconfrowstatus = value;
        mplsvpninterfaceconfrowstatus.value_namespace = name_space;
        mplsvpninterfaceconfrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceConfIndex")
    {
        mplsvpninterfaceconfindex.yfilter = yfilter;
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
    if(value_path == "mplsVpnInterfaceConfStorageType")
    {
        mplsvpninterfaceconfstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnInterfaceConfRowStatus")
    {
        mplsvpninterfaceconfrowstatus.yfilter = yfilter;
    }
}

bool MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnInterfaceConfIndex" || name == "mplsVpnInterfaceLabelEdgeType" || name == "mplsVpnInterfaceVpnClassification" || name == "mplsVpnInterfaceVpnRouteDistProtocol" || name == "mplsVpnInterfaceConfStorageType" || name == "mplsVpnInterfaceConfRowStatus")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfTable()
    :
    mplsvpnvrfentry(this, {"mplsvpnvrfname"})
{

    yang_name = "mplsVpnVrfTable"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfTable::~MplsVpnVrfTable()
{
}

bool MPLSVPNMIB::MplsVpnVrfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsvpnvrfentry.len(); index++)
    {
        if(mplsvpnvrfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSVPNMIB::MplsVpnVrfTable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfentry.len(); index++)
    {
        if(mplsvpnvrfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfEntry")
    {
        auto ent_ = std::make_shared<MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry>();
        ent_->parent = this;
        mplsvpnvrfentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsvpnvrfentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MPLSVPNMIB::MplsVpnVrfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSVPNMIB::MplsVpnVrfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSVPNMIB::MplsVpnVrfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfEntry")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::MplsVpnVrfEntry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfdescription{YType::str, "mplsVpnVrfDescription"},
    mplsvpnvrfroutedistinguisher{YType::str, "mplsVpnVrfRouteDistinguisher"},
    mplsvpnvrfcreationtime{YType::uint32, "mplsVpnVrfCreationTime"},
    mplsvpnvrfoperstatus{YType::enumeration, "mplsVpnVrfOperStatus"},
    mplsvpnvrfactiveinterfaces{YType::uint32, "mplsVpnVrfActiveInterfaces"},
    mplsvpnvrfassociatedinterfaces{YType::uint32, "mplsVpnVrfAssociatedInterfaces"},
    mplsvpnvrfconfmidroutethreshold{YType::uint32, "mplsVpnVrfConfMidRouteThreshold"},
    mplsvpnvrfconfhighroutethreshold{YType::uint32, "mplsVpnVrfConfHighRouteThreshold"},
    mplsvpnvrfconfmaxroutes{YType::uint32, "mplsVpnVrfConfMaxRoutes"},
    mplsvpnvrfconflastchanged{YType::uint32, "mplsVpnVrfConfLastChanged"},
    mplsvpnvrfconfrowstatus{YType::enumeration, "mplsVpnVrfConfRowStatus"},
    mplsvpnvrfconfstoragetype{YType::enumeration, "mplsVpnVrfConfStorageType"},
    mplsvpnvrfsecillegallabelviolations{YType::uint32, "mplsVpnVrfSecIllegalLabelViolations"},
    mplsvpnvrfsecillegallabelrcvthresh{YType::uint32, "mplsVpnVrfSecIllegalLabelRcvThresh"},
    mplsvpnvrfperfroutesadded{YType::uint32, "mplsVpnVrfPerfRoutesAdded"},
    mplsvpnvrfperfroutesdeleted{YType::uint32, "mplsVpnVrfPerfRoutesDeleted"},
    mplsvpnvrfperfcurrnumroutes{YType::uint32, "mplsVpnVrfPerfCurrNumRoutes"}
{

    yang_name = "mplsVpnVrfEntry"; yang_parent_name = "mplsVpnVrfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::~MplsVpnVrfEntry()
{
}

bool MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfdescription.is_set
	|| mplsvpnvrfroutedistinguisher.is_set
	|| mplsvpnvrfcreationtime.is_set
	|| mplsvpnvrfoperstatus.is_set
	|| mplsvpnvrfactiveinterfaces.is_set
	|| mplsvpnvrfassociatedinterfaces.is_set
	|| mplsvpnvrfconfmidroutethreshold.is_set
	|| mplsvpnvrfconfhighroutethreshold.is_set
	|| mplsvpnvrfconfmaxroutes.is_set
	|| mplsvpnvrfconflastchanged.is_set
	|| mplsvpnvrfconfrowstatus.is_set
	|| mplsvpnvrfconfstoragetype.is_set
	|| mplsvpnvrfsecillegallabelviolations.is_set
	|| mplsvpnvrfsecillegallabelrcvthresh.is_set
	|| mplsvpnvrfperfroutesadded.is_set
	|| mplsvpnvrfperfroutesdeleted.is_set
	|| mplsvpnvrfperfcurrnumroutes.is_set;
}

bool MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfdescription.yfilter)
	|| ydk::is_set(mplsvpnvrfroutedistinguisher.yfilter)
	|| ydk::is_set(mplsvpnvrfcreationtime.yfilter)
	|| ydk::is_set(mplsvpnvrfoperstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfactiveinterfaces.yfilter)
	|| ydk::is_set(mplsvpnvrfassociatedinterfaces.yfilter)
	|| ydk::is_set(mplsvpnvrfconfmidroutethreshold.yfilter)
	|| ydk::is_set(mplsvpnvrfconfhighroutethreshold.yfilter)
	|| ydk::is_set(mplsvpnvrfconfmaxroutes.yfilter)
	|| ydk::is_set(mplsvpnvrfconflastchanged.yfilter)
	|| ydk::is_set(mplsvpnvrfconfrowstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfconfstoragetype.yfilter)
	|| ydk::is_set(mplsvpnvrfsecillegallabelviolations.yfilter)
	|| ydk::is_set(mplsvpnvrfsecillegallabelrcvthresh.yfilter)
	|| ydk::is_set(mplsvpnvrfperfroutesadded.yfilter)
	|| ydk::is_set(mplsvpnvrfperfroutesdeleted.yfilter)
	|| ydk::is_set(mplsvpnvrfperfcurrnumroutes.yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfEntry";
    ADD_KEY_TOKEN(mplsvpnvrfname, "mplsVpnVrfName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfdescription.is_set || is_set(mplsvpnvrfdescription.yfilter)) leaf_name_data.push_back(mplsvpnvrfdescription.get_name_leafdata());
    if (mplsvpnvrfroutedistinguisher.is_set || is_set(mplsvpnvrfroutedistinguisher.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutedistinguisher.get_name_leafdata());
    if (mplsvpnvrfcreationtime.is_set || is_set(mplsvpnvrfcreationtime.yfilter)) leaf_name_data.push_back(mplsvpnvrfcreationtime.get_name_leafdata());
    if (mplsvpnvrfoperstatus.is_set || is_set(mplsvpnvrfoperstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfoperstatus.get_name_leafdata());
    if (mplsvpnvrfactiveinterfaces.is_set || is_set(mplsvpnvrfactiveinterfaces.yfilter)) leaf_name_data.push_back(mplsvpnvrfactiveinterfaces.get_name_leafdata());
    if (mplsvpnvrfassociatedinterfaces.is_set || is_set(mplsvpnvrfassociatedinterfaces.yfilter)) leaf_name_data.push_back(mplsvpnvrfassociatedinterfaces.get_name_leafdata());
    if (mplsvpnvrfconfmidroutethreshold.is_set || is_set(mplsvpnvrfconfmidroutethreshold.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfmidroutethreshold.get_name_leafdata());
    if (mplsvpnvrfconfhighroutethreshold.is_set || is_set(mplsvpnvrfconfhighroutethreshold.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfhighroutethreshold.get_name_leafdata());
    if (mplsvpnvrfconfmaxroutes.is_set || is_set(mplsvpnvrfconfmaxroutes.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfmaxroutes.get_name_leafdata());
    if (mplsvpnvrfconflastchanged.is_set || is_set(mplsvpnvrfconflastchanged.yfilter)) leaf_name_data.push_back(mplsvpnvrfconflastchanged.get_name_leafdata());
    if (mplsvpnvrfconfrowstatus.is_set || is_set(mplsvpnvrfconfrowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfrowstatus.get_name_leafdata());
    if (mplsvpnvrfconfstoragetype.is_set || is_set(mplsvpnvrfconfstoragetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfconfstoragetype.get_name_leafdata());
    if (mplsvpnvrfsecillegallabelviolations.is_set || is_set(mplsvpnvrfsecillegallabelviolations.yfilter)) leaf_name_data.push_back(mplsvpnvrfsecillegallabelviolations.get_name_leafdata());
    if (mplsvpnvrfsecillegallabelrcvthresh.is_set || is_set(mplsvpnvrfsecillegallabelrcvthresh.yfilter)) leaf_name_data.push_back(mplsvpnvrfsecillegallabelrcvthresh.get_name_leafdata());
    if (mplsvpnvrfperfroutesadded.is_set || is_set(mplsvpnvrfperfroutesadded.yfilter)) leaf_name_data.push_back(mplsvpnvrfperfroutesadded.get_name_leafdata());
    if (mplsvpnvrfperfroutesdeleted.is_set || is_set(mplsvpnvrfperfroutesdeleted.yfilter)) leaf_name_data.push_back(mplsvpnvrfperfroutesdeleted.get_name_leafdata());
    if (mplsvpnvrfperfcurrnumroutes.is_set || is_set(mplsvpnvrfperfcurrnumroutes.yfilter)) leaf_name_data.push_back(mplsvpnvrfperfcurrnumroutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname = value;
        mplsvpnvrfname.value_namespace = name_space;
        mplsvpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfDescription")
    {
        mplsvpnvrfdescription = value;
        mplsvpnvrfdescription.value_namespace = name_space;
        mplsvpnvrfdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteDistinguisher")
    {
        mplsvpnvrfroutedistinguisher = value;
        mplsvpnvrfroutedistinguisher.value_namespace = name_space;
        mplsvpnvrfroutedistinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfCreationTime")
    {
        mplsvpnvrfcreationtime = value;
        mplsvpnvrfcreationtime.value_namespace = name_space;
        mplsvpnvrfcreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfOperStatus")
    {
        mplsvpnvrfoperstatus = value;
        mplsvpnvrfoperstatus.value_namespace = name_space;
        mplsvpnvrfoperstatus.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsVpnVrfConfMidRouteThreshold")
    {
        mplsvpnvrfconfmidroutethreshold = value;
        mplsvpnvrfconfmidroutethreshold.value_namespace = name_space;
        mplsvpnvrfconfmidroutethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfHighRouteThreshold")
    {
        mplsvpnvrfconfhighroutethreshold = value;
        mplsvpnvrfconfhighroutethreshold.value_namespace = name_space;
        mplsvpnvrfconfhighroutethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfMaxRoutes")
    {
        mplsvpnvrfconfmaxroutes = value;
        mplsvpnvrfconfmaxroutes.value_namespace = name_space;
        mplsvpnvrfconfmaxroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfConfLastChanged")
    {
        mplsvpnvrfconflastchanged = value;
        mplsvpnvrfconflastchanged.value_namespace = name_space;
        mplsvpnvrfconflastchanged.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsVpnVrfSecIllegalLabelViolations")
    {
        mplsvpnvrfsecillegallabelviolations = value;
        mplsvpnvrfsecillegallabelviolations.value_namespace = name_space;
        mplsvpnvrfsecillegallabelviolations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelRcvThresh")
    {
        mplsvpnvrfsecillegallabelrcvthresh = value;
        mplsvpnvrfsecillegallabelrcvthresh.value_namespace = name_space;
        mplsvpnvrfsecillegallabelrcvthresh.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsVpnVrfPerfCurrNumRoutes")
    {
        mplsvpnvrfperfcurrnumroutes = value;
        mplsvpnvrfperfcurrnumroutes.value_namespace = name_space;
        mplsvpnvrfperfcurrnumroutes.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsVpnVrfName")
    {
        mplsvpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfDescription")
    {
        mplsvpnvrfdescription.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteDistinguisher")
    {
        mplsvpnvrfroutedistinguisher.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfCreationTime")
    {
        mplsvpnvrfcreationtime.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfOperStatus")
    {
        mplsvpnvrfoperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfActiveInterfaces")
    {
        mplsvpnvrfactiveinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfAssociatedInterfaces")
    {
        mplsvpnvrfassociatedinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfMidRouteThreshold")
    {
        mplsvpnvrfconfmidroutethreshold.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfHighRouteThreshold")
    {
        mplsvpnvrfconfhighroutethreshold.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfMaxRoutes")
    {
        mplsvpnvrfconfmaxroutes.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfLastChanged")
    {
        mplsvpnvrfconflastchanged.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfRowStatus")
    {
        mplsvpnvrfconfrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfConfStorageType")
    {
        mplsvpnvrfconfstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelViolations")
    {
        mplsvpnvrfsecillegallabelviolations.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfSecIllegalLabelRcvThresh")
    {
        mplsvpnvrfsecillegallabelrcvthresh.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfPerfRoutesAdded")
    {
        mplsvpnvrfperfroutesadded.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfPerfRoutesDeleted")
    {
        mplsvpnvrfperfroutesdeleted.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfPerfCurrNumRoutes")
    {
        mplsvpnvrfperfcurrnumroutes.yfilter = yfilter;
    }
}

bool MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfDescription" || name == "mplsVpnVrfRouteDistinguisher" || name == "mplsVpnVrfCreationTime" || name == "mplsVpnVrfOperStatus" || name == "mplsVpnVrfActiveInterfaces" || name == "mplsVpnVrfAssociatedInterfaces" || name == "mplsVpnVrfConfMidRouteThreshold" || name == "mplsVpnVrfConfHighRouteThreshold" || name == "mplsVpnVrfConfMaxRoutes" || name == "mplsVpnVrfConfLastChanged" || name == "mplsVpnVrfConfRowStatus" || name == "mplsVpnVrfConfStorageType" || name == "mplsVpnVrfSecIllegalLabelViolations" || name == "mplsVpnVrfSecIllegalLabelRcvThresh" || name == "mplsVpnVrfPerfRoutesAdded" || name == "mplsVpnVrfPerfRoutesDeleted" || name == "mplsVpnVrfPerfCurrNumRoutes")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetTable()
    :
    mplsvpnvrfroutetargetentry(this, {"mplsvpnvrfname", "mplsvpnvrfroutetargetindex", "mplsvpnvrfroutetargettype"})
{

    yang_name = "mplsVpnVrfRouteTargetTable"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfRouteTargetTable::~MplsVpnVrfRouteTargetTable()
{
}

bool MPLSVPNMIB::MplsVpnVrfRouteTargetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsvpnvrfroutetargetentry.len(); index++)
    {
        if(mplsvpnvrfroutetargetentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSVPNMIB::MplsVpnVrfRouteTargetTable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfroutetargetentry.len(); index++)
    {
        if(mplsvpnvrfroutetargetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTargetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTargetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteTargetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfRouteTargetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfRouteTargetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfRouteTargetEntry")
    {
        auto ent_ = std::make_shared<MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry>();
        ent_->parent = this;
        mplsvpnvrfroutetargetentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfRouteTargetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsvpnvrfroutetargetentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MPLSVPNMIB::MplsVpnVrfRouteTargetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSVPNMIB::MplsVpnVrfRouteTargetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSVPNMIB::MplsVpnVrfRouteTargetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfRouteTargetEntry")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::MplsVpnVrfRouteTargetEntry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfroutetargetindex{YType::uint32, "mplsVpnVrfRouteTargetIndex"},
    mplsvpnvrfroutetargettype{YType::enumeration, "mplsVpnVrfRouteTargetType"},
    mplsvpnvrfroutetarget{YType::str, "mplsVpnVrfRouteTarget"},
    mplsvpnvrfroutetargetdescr{YType::str, "mplsVpnVrfRouteTargetDescr"},
    mplsvpnvrfroutetargetrowstatus{YType::enumeration, "mplsVpnVrfRouteTargetRowStatus"}
{

    yang_name = "mplsVpnVrfRouteTargetEntry"; yang_parent_name = "mplsVpnVrfRouteTargetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::~MplsVpnVrfRouteTargetEntry()
{
}

bool MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfroutetargetindex.is_set
	|| mplsvpnvrfroutetargettype.is_set
	|| mplsvpnvrfroutetarget.is_set
	|| mplsvpnvrfroutetargetdescr.is_set
	|| mplsvpnvrfroutetargetrowstatus.is_set;
}

bool MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargetindex.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargettype.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetarget.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargetdescr.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetargetrowstatus.yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfRouteTargetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteTargetEntry";
    ADD_KEY_TOKEN(mplsvpnvrfname, "mplsVpnVrfName");
    ADD_KEY_TOKEN(mplsvpnvrfroutetargetindex, "mplsVpnVrfRouteTargetIndex");
    ADD_KEY_TOKEN(mplsvpnvrfroutetargettype, "mplsVpnVrfRouteTargetType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfroutetargetindex.is_set || is_set(mplsvpnvrfroutetargetindex.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargetindex.get_name_leafdata());
    if (mplsvpnvrfroutetargettype.is_set || is_set(mplsvpnvrfroutetargettype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargettype.get_name_leafdata());
    if (mplsvpnvrfroutetarget.is_set || is_set(mplsvpnvrfroutetarget.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetarget.get_name_leafdata());
    if (mplsvpnvrfroutetargetdescr.is_set || is_set(mplsvpnvrfroutetargetdescr.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargetdescr.get_name_leafdata());
    if (mplsvpnvrfroutetargetrowstatus.is_set || is_set(mplsvpnvrfroutetargetrowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetargetrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfRouteTargetIndex" || name == "mplsVpnVrfRouteTargetType" || name == "mplsVpnVrfRouteTarget" || name == "mplsVpnVrfRouteTargetDescr" || name == "mplsVpnVrfRouteTargetRowStatus")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrTable()
    :
    mplsvpnvrfbgpnbraddrentry(this, {"mplsvpnvrfname", "mplsvpninterfaceconfindex", "mplsvpnvrfbgpnbrindex"})
{

    yang_name = "mplsVpnVrfBgpNbrAddrTable"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::~MplsVpnVrfBgpNbrAddrTable()
{
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsvpnvrfbgpnbraddrentry.len(); index++)
    {
        if(mplsvpnvrfbgpnbraddrentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbraddrentry.len(); index++)
    {
        if(mplsvpnvrfbgpnbraddrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrAddrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfBgpNbrAddrEntry")
    {
        auto ent_ = std::make_shared<MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry>();
        ent_->parent = this;
        mplsvpnvrfbgpnbraddrentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsvpnvrfbgpnbraddrentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfBgpNbrAddrEntry")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::MplsVpnVrfBgpNbrAddrEntry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpninterfaceconfindex{YType::str, "mplsVpnInterfaceConfIndex"},
    mplsvpnvrfbgpnbrindex{YType::uint32, "mplsVpnVrfBgpNbrIndex"},
    mplsvpnvrfbgpnbrrole{YType::enumeration, "mplsVpnVrfBgpNbrRole"},
    mplsvpnvrfbgpnbrtype{YType::enumeration, "mplsVpnVrfBgpNbrType"},
    mplsvpnvrfbgpnbraddr{YType::str, "mplsVpnVrfBgpNbrAddr"},
    mplsvpnvrfbgpnbrrowstatus{YType::enumeration, "mplsVpnVrfBgpNbrRowStatus"},
    mplsvpnvrfbgpnbrstoragetype{YType::enumeration, "mplsVpnVrfBgpNbrStorageType"}
{

    yang_name = "mplsVpnVrfBgpNbrAddrEntry"; yang_parent_name = "mplsVpnVrfBgpNbrAddrTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::~MplsVpnVrfBgpNbrAddrEntry()
{
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsvpnvrfname.is_set
	|| mplsvpninterfaceconfindex.is_set
	|| mplsvpnvrfbgpnbrindex.is_set
	|| mplsvpnvrfbgpnbrrole.is_set
	|| mplsvpnvrfbgpnbrtype.is_set
	|| mplsvpnvrfbgpnbraddr.is_set
	|| mplsvpnvrfbgpnbrrowstatus.is_set
	|| mplsvpnvrfbgpnbrstoragetype.is_set;
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpninterfaceconfindex.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrindex.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrrole.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrtype.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbraddr.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrrowstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfbgpnbrstoragetype.yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfBgpNbrAddrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrAddrEntry";
    ADD_KEY_TOKEN(mplsvpnvrfname, "mplsVpnVrfName");
    ADD_KEY_TOKEN(mplsvpninterfaceconfindex, "mplsVpnInterfaceConfIndex");
    ADD_KEY_TOKEN(mplsvpnvrfbgpnbrindex, "mplsVpnVrfBgpNbrIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpninterfaceconfindex.is_set || is_set(mplsvpninterfaceconfindex.yfilter)) leaf_name_data.push_back(mplsvpninterfaceconfindex.get_name_leafdata());
    if (mplsvpnvrfbgpnbrindex.is_set || is_set(mplsvpnvrfbgpnbrindex.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrindex.get_name_leafdata());
    if (mplsvpnvrfbgpnbrrole.is_set || is_set(mplsvpnvrfbgpnbrrole.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrrole.get_name_leafdata());
    if (mplsvpnvrfbgpnbrtype.is_set || is_set(mplsvpnvrfbgpnbrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrtype.get_name_leafdata());
    if (mplsvpnvrfbgpnbraddr.is_set || is_set(mplsvpnvrfbgpnbraddr.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbraddr.get_name_leafdata());
    if (mplsvpnvrfbgpnbrrowstatus.is_set || is_set(mplsvpnvrfbgpnbrrowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrrowstatus.get_name_leafdata());
    if (mplsvpnvrfbgpnbrstoragetype.is_set || is_set(mplsvpnvrfbgpnbrstoragetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgpnbrstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsVpnVrfBgpNbrRole")
    {
        mplsvpnvrfbgpnbrrole = value;
        mplsvpnvrfbgpnbrrole.value_namespace = name_space;
        mplsvpnvrfbgpnbrrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrType")
    {
        mplsvpnvrfbgpnbrtype = value;
        mplsvpnvrfbgpnbrtype.value_namespace = name_space;
        mplsvpnvrfbgpnbrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpNbrAddr")
    {
        mplsvpnvrfbgpnbraddr = value;
        mplsvpnvrfbgpnbraddr.value_namespace = name_space;
        mplsvpnvrfbgpnbraddr.value_namespace_prefix = name_space_prefix;
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
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsVpnVrfBgpNbrRole")
    {
        mplsvpnvrfbgpnbrrole.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrType")
    {
        mplsvpnvrfbgpnbrtype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrAddr")
    {
        mplsvpnvrfbgpnbraddr.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrRowStatus")
    {
        mplsvpnvrfbgpnbrrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpNbrStorageType")
    {
        mplsvpnvrfbgpnbrstoragetype.yfilter = yfilter;
    }
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnInterfaceConfIndex" || name == "mplsVpnVrfBgpNbrIndex" || name == "mplsVpnVrfBgpNbrRole" || name == "mplsVpnVrfBgpNbrType" || name == "mplsVpnVrfBgpNbrAddr" || name == "mplsVpnVrfBgpNbrRowStatus" || name == "mplsVpnVrfBgpNbrStorageType")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixTable()
    :
    mplsvpnvrfbgpnbrprefixentry(this, {"mplsvpnvrfname", "mplsvpnvrfbgppathattripaddrprefix", "mplsvpnvrfbgppathattripaddrprefixlen", "mplsvpnvrfbgppathattrpeer"})
{

    yang_name = "mplsVpnVrfBgpNbrPrefixTable"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::~MplsVpnVrfBgpNbrPrefixTable()
{
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsvpnvrfbgpnbrprefixentry.len(); index++)
    {
        if(mplsvpnvrfbgpnbrprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfbgpnbrprefixentry.len(); index++)
    {
        if(mplsvpnvrfbgpnbrprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfBgpNbrPrefixEntry")
    {
        auto ent_ = std::make_shared<MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry>();
        ent_->parent = this;
        mplsvpnvrfbgpnbrprefixentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsvpnvrfbgpnbrprefixentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfBgpNbrPrefixEntry")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpNbrPrefixEntry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfbgppathattripaddrprefix{YType::str, "mplsVpnVrfBgpPathAttrIpAddrPrefix"},
    mplsvpnvrfbgppathattripaddrprefixlen{YType::int32, "mplsVpnVrfBgpPathAttrIpAddrPrefixLen"},
    mplsvpnvrfbgppathattrpeer{YType::str, "mplsVpnVrfBgpPathAttrPeer"},
    mplsvpnvrfbgppathattrorigin{YType::enumeration, "mplsVpnVrfBgpPathAttrOrigin"},
    mplsvpnvrfbgppathattraspathsegment{YType::str, "mplsVpnVrfBgpPathAttrASPathSegment"},
    mplsvpnvrfbgppathattrnexthop{YType::str, "mplsVpnVrfBgpPathAttrNextHop"},
    mplsvpnvrfbgppathattrmultiexitdisc{YType::int32, "mplsVpnVrfBgpPathAttrMultiExitDisc"},
    mplsvpnvrfbgppathattrlocalpref{YType::int32, "mplsVpnVrfBgpPathAttrLocalPref"},
    mplsvpnvrfbgppathattratomicaggregate{YType::enumeration, "mplsVpnVrfBgpPathAttrAtomicAggregate"},
    mplsvpnvrfbgppathattraggregatoras{YType::int32, "mplsVpnVrfBgpPathAttrAggregatorAS"},
    mplsvpnvrfbgppathattraggregatoraddr{YType::str, "mplsVpnVrfBgpPathAttrAggregatorAddr"},
    mplsvpnvrfbgppathattrcalclocalpref{YType::int32, "mplsVpnVrfBgpPathAttrCalcLocalPref"},
    mplsvpnvrfbgppathattrbest{YType::enumeration, "mplsVpnVrfBgpPathAttrBest"},
    mplsvpnvrfbgppathattrunknown{YType::str, "mplsVpnVrfBgpPathAttrUnknown"}
{

    yang_name = "mplsVpnVrfBgpNbrPrefixEntry"; yang_parent_name = "mplsVpnVrfBgpNbrPrefixTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::~MplsVpnVrfBgpNbrPrefixEntry()
{
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfbgppathattripaddrprefix.is_set
	|| mplsvpnvrfbgppathattripaddrprefixlen.is_set
	|| mplsvpnvrfbgppathattrpeer.is_set
	|| mplsvpnvrfbgppathattrorigin.is_set
	|| mplsvpnvrfbgppathattraspathsegment.is_set
	|| mplsvpnvrfbgppathattrnexthop.is_set
	|| mplsvpnvrfbgppathattrmultiexitdisc.is_set
	|| mplsvpnvrfbgppathattrlocalpref.is_set
	|| mplsvpnvrfbgppathattratomicaggregate.is_set
	|| mplsvpnvrfbgppathattraggregatoras.is_set
	|| mplsvpnvrfbgppathattraggregatoraddr.is_set
	|| mplsvpnvrfbgppathattrcalclocalpref.is_set
	|| mplsvpnvrfbgppathattrbest.is_set
	|| mplsvpnvrfbgppathattrunknown.is_set;
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattripaddrprefix.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattripaddrprefixlen.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrpeer.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrorigin.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattraspathsegment.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrnexthop.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrmultiexitdisc.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrlocalpref.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattratomicaggregate.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattraggregatoras.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattraggregatoraddr.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrcalclocalpref.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrbest.yfilter)
	|| ydk::is_set(mplsvpnvrfbgppathattrunknown.yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfBgpNbrPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfBgpNbrPrefixEntry";
    ADD_KEY_TOKEN(mplsvpnvrfname, "mplsVpnVrfName");
    ADD_KEY_TOKEN(mplsvpnvrfbgppathattripaddrprefix, "mplsVpnVrfBgpPathAttrIpAddrPrefix");
    ADD_KEY_TOKEN(mplsvpnvrfbgppathattripaddrprefixlen, "mplsVpnVrfBgpPathAttrIpAddrPrefixLen");
    ADD_KEY_TOKEN(mplsvpnvrfbgppathattrpeer, "mplsVpnVrfBgpPathAttrPeer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfbgppathattripaddrprefix.is_set || is_set(mplsvpnvrfbgppathattripaddrprefix.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattripaddrprefix.get_name_leafdata());
    if (mplsvpnvrfbgppathattripaddrprefixlen.is_set || is_set(mplsvpnvrfbgppathattripaddrprefixlen.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattripaddrprefixlen.get_name_leafdata());
    if (mplsvpnvrfbgppathattrpeer.is_set || is_set(mplsvpnvrfbgppathattrpeer.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrpeer.get_name_leafdata());
    if (mplsvpnvrfbgppathattrorigin.is_set || is_set(mplsvpnvrfbgppathattrorigin.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrorigin.get_name_leafdata());
    if (mplsvpnvrfbgppathattraspathsegment.is_set || is_set(mplsvpnvrfbgppathattraspathsegment.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattraspathsegment.get_name_leafdata());
    if (mplsvpnvrfbgppathattrnexthop.is_set || is_set(mplsvpnvrfbgppathattrnexthop.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrnexthop.get_name_leafdata());
    if (mplsvpnvrfbgppathattrmultiexitdisc.is_set || is_set(mplsvpnvrfbgppathattrmultiexitdisc.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrmultiexitdisc.get_name_leafdata());
    if (mplsvpnvrfbgppathattrlocalpref.is_set || is_set(mplsvpnvrfbgppathattrlocalpref.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrlocalpref.get_name_leafdata());
    if (mplsvpnvrfbgppathattratomicaggregate.is_set || is_set(mplsvpnvrfbgppathattratomicaggregate.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattratomicaggregate.get_name_leafdata());
    if (mplsvpnvrfbgppathattraggregatoras.is_set || is_set(mplsvpnvrfbgppathattraggregatoras.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattraggregatoras.get_name_leafdata());
    if (mplsvpnvrfbgppathattraggregatoraddr.is_set || is_set(mplsvpnvrfbgppathattraggregatoraddr.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattraggregatoraddr.get_name_leafdata());
    if (mplsvpnvrfbgppathattrcalclocalpref.is_set || is_set(mplsvpnvrfbgppathattrcalclocalpref.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrcalclocalpref.get_name_leafdata());
    if (mplsvpnvrfbgppathattrbest.is_set || is_set(mplsvpnvrfbgppathattrbest.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrbest.get_name_leafdata());
    if (mplsvpnvrfbgppathattrunknown.is_set || is_set(mplsvpnvrfbgppathattrunknown.yfilter)) leaf_name_data.push_back(mplsvpnvrfbgppathattrunknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsVpnVrfBgpPathAttrOrigin")
    {
        mplsvpnvrfbgppathattrorigin = value;
        mplsvpnvrfbgppathattrorigin.value_namespace = name_space;
        mplsvpnvrfbgppathattrorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrASPathSegment")
    {
        mplsvpnvrfbgppathattraspathsegment = value;
        mplsvpnvrfbgppathattraspathsegment.value_namespace = name_space;
        mplsvpnvrfbgppathattraspathsegment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrNextHop")
    {
        mplsvpnvrfbgppathattrnexthop = value;
        mplsvpnvrfbgppathattrnexthop.value_namespace = name_space;
        mplsvpnvrfbgppathattrnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrMultiExitDisc")
    {
        mplsvpnvrfbgppathattrmultiexitdisc = value;
        mplsvpnvrfbgppathattrmultiexitdisc.value_namespace = name_space;
        mplsvpnvrfbgppathattrmultiexitdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrLocalPref")
    {
        mplsvpnvrfbgppathattrlocalpref = value;
        mplsvpnvrfbgppathattrlocalpref.value_namespace = name_space;
        mplsvpnvrfbgppathattrlocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAtomicAggregate")
    {
        mplsvpnvrfbgppathattratomicaggregate = value;
        mplsvpnvrfbgppathattratomicaggregate.value_namespace = name_space;
        mplsvpnvrfbgppathattratomicaggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAS")
    {
        mplsvpnvrfbgppathattraggregatoras = value;
        mplsvpnvrfbgppathattraggregatoras.value_namespace = name_space;
        mplsvpnvrfbgppathattraggregatoras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAddr")
    {
        mplsvpnvrfbgppathattraggregatoraddr = value;
        mplsvpnvrfbgppathattraggregatoraddr.value_namespace = name_space;
        mplsvpnvrfbgppathattraggregatoraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrCalcLocalPref")
    {
        mplsvpnvrfbgppathattrcalclocalpref = value;
        mplsvpnvrfbgppathattrcalclocalpref.value_namespace = name_space;
        mplsvpnvrfbgppathattrcalclocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrBest")
    {
        mplsvpnvrfbgppathattrbest = value;
        mplsvpnvrfbgppathattrbest.value_namespace = name_space;
        mplsvpnvrfbgppathattrbest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrUnknown")
    {
        mplsvpnvrfbgppathattrunknown = value;
        mplsvpnvrfbgppathattrunknown.value_namespace = name_space;
        mplsvpnvrfbgppathattrunknown.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsVpnVrfBgpPathAttrOrigin")
    {
        mplsvpnvrfbgppathattrorigin.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrASPathSegment")
    {
        mplsvpnvrfbgppathattraspathsegment.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrNextHop")
    {
        mplsvpnvrfbgppathattrnexthop.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrMultiExitDisc")
    {
        mplsvpnvrfbgppathattrmultiexitdisc.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrLocalPref")
    {
        mplsvpnvrfbgppathattrlocalpref.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAtomicAggregate")
    {
        mplsvpnvrfbgppathattratomicaggregate.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAS")
    {
        mplsvpnvrfbgppathattraggregatoras.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrAggregatorAddr")
    {
        mplsvpnvrfbgppathattraggregatoraddr.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrCalcLocalPref")
    {
        mplsvpnvrfbgppathattrcalclocalpref.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrBest")
    {
        mplsvpnvrfbgppathattrbest.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfBgpPathAttrUnknown")
    {
        mplsvpnvrfbgppathattrunknown.yfilter = yfilter;
    }
}

bool MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfBgpPathAttrIpAddrPrefix" || name == "mplsVpnVrfBgpPathAttrIpAddrPrefixLen" || name == "mplsVpnVrfBgpPathAttrPeer" || name == "mplsVpnVrfBgpPathAttrOrigin" || name == "mplsVpnVrfBgpPathAttrASPathSegment" || name == "mplsVpnVrfBgpPathAttrNextHop" || name == "mplsVpnVrfBgpPathAttrMultiExitDisc" || name == "mplsVpnVrfBgpPathAttrLocalPref" || name == "mplsVpnVrfBgpPathAttrAtomicAggregate" || name == "mplsVpnVrfBgpPathAttrAggregatorAS" || name == "mplsVpnVrfBgpPathAttrAggregatorAddr" || name == "mplsVpnVrfBgpPathAttrCalcLocalPref" || name == "mplsVpnVrfBgpPathAttrBest" || name == "mplsVpnVrfBgpPathAttrUnknown")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteTable()
    :
    mplsvpnvrfrouteentry(this, {"mplsvpnvrfname", "mplsvpnvrfroutedest", "mplsvpnvrfroutemask", "mplsvpnvrfroutetos", "mplsvpnvrfroutenexthop"})
{

    yang_name = "mplsVpnVrfRouteTable"; yang_parent_name = "MPLS-VPN-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfRouteTable::~MplsVpnVrfRouteTable()
{
}

bool MPLSVPNMIB::MplsVpnVrfRouteTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplsvpnvrfrouteentry.len(); index++)
    {
        if(mplsvpnvrfrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSVPNMIB::MplsVpnVrfRouteTable::has_operation() const
{
    for (std::size_t index=0; index<mplsvpnvrfrouteentry.len(); index++)
    {
        if(mplsvpnvrfrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsVpnVrfRouteEntry")
    {
        auto ent_ = std::make_shared<MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry>();
        ent_->parent = this;
        mplsvpnvrfrouteentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mplsvpnvrfrouteentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MPLSVPNMIB::MplsVpnVrfRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSVPNMIB::MplsVpnVrfRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSVPNMIB::MplsVpnVrfRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfRouteEntry")
        return true;
    return false;
}

MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteEntry()
    :
    mplsvpnvrfname{YType::str, "mplsVpnVrfName"},
    mplsvpnvrfroutedest{YType::str, "mplsVpnVrfRouteDest"},
    mplsvpnvrfroutemask{YType::str, "mplsVpnVrfRouteMask"},
    mplsvpnvrfroutetos{YType::uint32, "mplsVpnVrfRouteTos"},
    mplsvpnvrfroutenexthop{YType::str, "mplsVpnVrfRouteNextHop"},
    mplsvpnvrfroutedestaddrtype{YType::enumeration, "mplsVpnVrfRouteDestAddrType"},
    mplsvpnvrfroutemaskaddrtype{YType::enumeration, "mplsVpnVrfRouteMaskAddrType"},
    mplsvpnvrfroutenexthopaddrtype{YType::enumeration, "mplsVpnVrfRouteNextHopAddrType"},
    mplsvpnvrfrouteifindex{YType::int32, "mplsVpnVrfRouteIfIndex"},
    mplsvpnvrfroutetype{YType::enumeration, "mplsVpnVrfRouteType"},
    mplsvpnvrfrouteproto{YType::enumeration, "mplsVpnVrfRouteProto"},
    mplsvpnvrfrouteage{YType::uint32, "mplsVpnVrfRouteAge"},
    mplsvpnvrfrouteinfo{YType::str, "mplsVpnVrfRouteInfo"},
    mplsvpnvrfroutenexthopas{YType::uint32, "mplsVpnVrfRouteNextHopAS"},
    mplsvpnvrfroutemetric1{YType::int32, "mplsVpnVrfRouteMetric1"},
    mplsvpnvrfroutemetric2{YType::int32, "mplsVpnVrfRouteMetric2"},
    mplsvpnvrfroutemetric3{YType::int32, "mplsVpnVrfRouteMetric3"},
    mplsvpnvrfroutemetric4{YType::int32, "mplsVpnVrfRouteMetric4"},
    mplsvpnvrfroutemetric5{YType::int32, "mplsVpnVrfRouteMetric5"},
    mplsvpnvrfrouterowstatus{YType::enumeration, "mplsVpnVrfRouteRowStatus"},
    mplsvpnvrfroutestoragetype{YType::enumeration, "mplsVpnVrfRouteStorageType"}
{

    yang_name = "mplsVpnVrfRouteEntry"; yang_parent_name = "mplsVpnVrfRouteTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::~MplsVpnVrfRouteEntry()
{
}

bool MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplsvpnvrfname.is_set
	|| mplsvpnvrfroutedest.is_set
	|| mplsvpnvrfroutemask.is_set
	|| mplsvpnvrfroutetos.is_set
	|| mplsvpnvrfroutenexthop.is_set
	|| mplsvpnvrfroutedestaddrtype.is_set
	|| mplsvpnvrfroutemaskaddrtype.is_set
	|| mplsvpnvrfroutenexthopaddrtype.is_set
	|| mplsvpnvrfrouteifindex.is_set
	|| mplsvpnvrfroutetype.is_set
	|| mplsvpnvrfrouteproto.is_set
	|| mplsvpnvrfrouteage.is_set
	|| mplsvpnvrfrouteinfo.is_set
	|| mplsvpnvrfroutenexthopas.is_set
	|| mplsvpnvrfroutemetric1.is_set
	|| mplsvpnvrfroutemetric2.is_set
	|| mplsvpnvrfroutemetric3.is_set
	|| mplsvpnvrfroutemetric4.is_set
	|| mplsvpnvrfroutemetric5.is_set
	|| mplsvpnvrfrouterowstatus.is_set
	|| mplsvpnvrfroutestoragetype.is_set;
}

bool MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsvpnvrfname.yfilter)
	|| ydk::is_set(mplsvpnvrfroutedest.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemask.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetos.yfilter)
	|| ydk::is_set(mplsvpnvrfroutenexthop.yfilter)
	|| ydk::is_set(mplsvpnvrfroutedestaddrtype.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemaskaddrtype.yfilter)
	|| ydk::is_set(mplsvpnvrfroutenexthopaddrtype.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteifindex.yfilter)
	|| ydk::is_set(mplsvpnvrfroutetype.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteproto.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteage.yfilter)
	|| ydk::is_set(mplsvpnvrfrouteinfo.yfilter)
	|| ydk::is_set(mplsvpnvrfroutenexthopas.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric1.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric2.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric3.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric4.yfilter)
	|| ydk::is_set(mplsvpnvrfroutemetric5.yfilter)
	|| ydk::is_set(mplsvpnvrfrouterowstatus.yfilter)
	|| ydk::is_set(mplsvpnvrfroutestoragetype.yfilter);
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-VPN-MIB:MPLS-VPN-MIB/mplsVpnVrfRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsVpnVrfRouteEntry";
    ADD_KEY_TOKEN(mplsvpnvrfname, "mplsVpnVrfName");
    ADD_KEY_TOKEN(mplsvpnvrfroutedest, "mplsVpnVrfRouteDest");
    ADD_KEY_TOKEN(mplsvpnvrfroutemask, "mplsVpnVrfRouteMask");
    ADD_KEY_TOKEN(mplsvpnvrfroutetos, "mplsVpnVrfRouteTos");
    ADD_KEY_TOKEN(mplsvpnvrfroutenexthop, "mplsVpnVrfRouteNextHop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsvpnvrfname.is_set || is_set(mplsvpnvrfname.yfilter)) leaf_name_data.push_back(mplsvpnvrfname.get_name_leafdata());
    if (mplsvpnvrfroutedest.is_set || is_set(mplsvpnvrfroutedest.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutedest.get_name_leafdata());
    if (mplsvpnvrfroutemask.is_set || is_set(mplsvpnvrfroutemask.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemask.get_name_leafdata());
    if (mplsvpnvrfroutetos.is_set || is_set(mplsvpnvrfroutetos.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetos.get_name_leafdata());
    if (mplsvpnvrfroutenexthop.is_set || is_set(mplsvpnvrfroutenexthop.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutenexthop.get_name_leafdata());
    if (mplsvpnvrfroutedestaddrtype.is_set || is_set(mplsvpnvrfroutedestaddrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutedestaddrtype.get_name_leafdata());
    if (mplsvpnvrfroutemaskaddrtype.is_set || is_set(mplsvpnvrfroutemaskaddrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemaskaddrtype.get_name_leafdata());
    if (mplsvpnvrfroutenexthopaddrtype.is_set || is_set(mplsvpnvrfroutenexthopaddrtype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutenexthopaddrtype.get_name_leafdata());
    if (mplsvpnvrfrouteifindex.is_set || is_set(mplsvpnvrfrouteifindex.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteifindex.get_name_leafdata());
    if (mplsvpnvrfroutetype.is_set || is_set(mplsvpnvrfroutetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutetype.get_name_leafdata());
    if (mplsvpnvrfrouteproto.is_set || is_set(mplsvpnvrfrouteproto.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteproto.get_name_leafdata());
    if (mplsvpnvrfrouteage.is_set || is_set(mplsvpnvrfrouteage.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteage.get_name_leafdata());
    if (mplsvpnvrfrouteinfo.is_set || is_set(mplsvpnvrfrouteinfo.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouteinfo.get_name_leafdata());
    if (mplsvpnvrfroutenexthopas.is_set || is_set(mplsvpnvrfroutenexthopas.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutenexthopas.get_name_leafdata());
    if (mplsvpnvrfroutemetric1.is_set || is_set(mplsvpnvrfroutemetric1.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric1.get_name_leafdata());
    if (mplsvpnvrfroutemetric2.is_set || is_set(mplsvpnvrfroutemetric2.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric2.get_name_leafdata());
    if (mplsvpnvrfroutemetric3.is_set || is_set(mplsvpnvrfroutemetric3.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric3.get_name_leafdata());
    if (mplsvpnvrfroutemetric4.is_set || is_set(mplsvpnvrfroutemetric4.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric4.get_name_leafdata());
    if (mplsvpnvrfroutemetric5.is_set || is_set(mplsvpnvrfroutemetric5.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutemetric5.get_name_leafdata());
    if (mplsvpnvrfrouterowstatus.is_set || is_set(mplsvpnvrfrouterowstatus.yfilter)) leaf_name_data.push_back(mplsvpnvrfrouterowstatus.get_name_leafdata());
    if (mplsvpnvrfroutestoragetype.is_set || is_set(mplsvpnvrfroutestoragetype.yfilter)) leaf_name_data.push_back(mplsvpnvrfroutestoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsVpnVrfRouteDestAddrType")
    {
        mplsvpnvrfroutedestaddrtype = value;
        mplsvpnvrfroutedestaddrtype.value_namespace = name_space;
        mplsvpnvrfroutedestaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteMaskAddrType")
    {
        mplsvpnvrfroutemaskaddrtype = value;
        mplsvpnvrfroutemaskaddrtype.value_namespace = name_space;
        mplsvpnvrfroutemaskaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAddrType")
    {
        mplsvpnvrfroutenexthopaddrtype = value;
        mplsvpnvrfroutenexthopaddrtype.value_namespace = name_space;
        mplsvpnvrfroutenexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteIfIndex")
    {
        mplsvpnvrfrouteifindex = value;
        mplsvpnvrfrouteifindex.value_namespace = name_space;
        mplsvpnvrfrouteifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteType")
    {
        mplsvpnvrfroutetype = value;
        mplsvpnvrfroutetype.value_namespace = name_space;
        mplsvpnvrfroutetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteProto")
    {
        mplsvpnvrfrouteproto = value;
        mplsvpnvrfrouteproto.value_namespace = name_space;
        mplsvpnvrfrouteproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteAge")
    {
        mplsvpnvrfrouteage = value;
        mplsvpnvrfrouteage.value_namespace = name_space;
        mplsvpnvrfrouteage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteInfo")
    {
        mplsvpnvrfrouteinfo = value;
        mplsvpnvrfrouteinfo.value_namespace = name_space;
        mplsvpnvrfrouteinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAS")
    {
        mplsvpnvrfroutenexthopas = value;
        mplsvpnvrfroutenexthopas.value_namespace = name_space;
        mplsvpnvrfroutenexthopas.value_namespace_prefix = name_space_prefix;
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
}

void MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsVpnVrfRouteDestAddrType")
    {
        mplsvpnvrfroutedestaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteMaskAddrType")
    {
        mplsvpnvrfroutemaskaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAddrType")
    {
        mplsvpnvrfroutenexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteIfIndex")
    {
        mplsvpnvrfrouteifindex.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteType")
    {
        mplsvpnvrfroutetype.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteProto")
    {
        mplsvpnvrfrouteproto.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteAge")
    {
        mplsvpnvrfrouteage.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteInfo")
    {
        mplsvpnvrfrouteinfo.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteNextHopAS")
    {
        mplsvpnvrfroutenexthopas.yfilter = yfilter;
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
    if(value_path == "mplsVpnVrfRouteRowStatus")
    {
        mplsvpnvrfrouterowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsVpnVrfRouteStorageType")
    {
        mplsvpnvrfroutestoragetype.yfilter = yfilter;
    }
}

bool MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsVpnVrfName" || name == "mplsVpnVrfRouteDest" || name == "mplsVpnVrfRouteMask" || name == "mplsVpnVrfRouteTos" || name == "mplsVpnVrfRouteNextHop" || name == "mplsVpnVrfRouteDestAddrType" || name == "mplsVpnVrfRouteMaskAddrType" || name == "mplsVpnVrfRouteNextHopAddrType" || name == "mplsVpnVrfRouteIfIndex" || name == "mplsVpnVrfRouteType" || name == "mplsVpnVrfRouteProto" || name == "mplsVpnVrfRouteAge" || name == "mplsVpnVrfRouteInfo" || name == "mplsVpnVrfRouteNextHopAS" || name == "mplsVpnVrfRouteMetric1" || name == "mplsVpnVrfRouteMetric2" || name == "mplsVpnVrfRouteMetric3" || name == "mplsVpnVrfRouteMetric4" || name == "mplsVpnVrfRouteMetric5" || name == "mplsVpnVrfRouteRowStatus" || name == "mplsVpnVrfRouteStorageType")
        return true;
    return false;
}

const Enum::YLeaf MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceLabelEdgeType::providerEdge {1, "providerEdge"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceLabelEdgeType::customerEdge {2, "customerEdge"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceVpnClassification::carrierOfCarrier {1, "carrierOfCarrier"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceVpnClassification::enterprise {2, "enterprise"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnInterfaceConfTable::MplsVpnInterfaceConfEntry::MplsVpnInterfaceVpnClassification::interProvider {3, "interProvider"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::MplsVpnVrfOperStatus::up {1, "up"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfTable::MplsVpnVrfEntry::MplsVpnVrfOperStatus::down {2, "down"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::MplsVpnVrfRouteTargetType::import {1, "import"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::MplsVpnVrfRouteTargetType::export_ {2, "export"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTargetTable::MplsVpnVrfRouteTargetEntry::MplsVpnVrfRouteTargetType::both {3, "both"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::MplsVpnVrfBgpNbrRole::ce {1, "ce"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrAddrTable::MplsVpnVrfBgpNbrAddrEntry::MplsVpnVrfBgpNbrRole::pe {2, "pe"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrOrigin::igp {1, "igp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrOrigin::egp {2, "egp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrOrigin::incomplete {3, "incomplete"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrAtomicAggregate::lessSpecificRrouteNotSelected {1, "lessSpecificRrouteNotSelected"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrAtomicAggregate::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrBest::false_ {1, "false"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfBgpNbrPrefixTable::MplsVpnVrfBgpNbrPrefixEntry::MplsVpnVrfBgpPathAttrBest::true_ {2, "true"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteType::other {1, "other"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteType::reject {2, "reject"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteType::local {3, "local"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteType::remote {4, "remote"};

const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::other {1, "other"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::local {2, "local"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::netmgmt {3, "netmgmt"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::icmp {4, "icmp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::egp {5, "egp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::ggp {6, "ggp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::hello {7, "hello"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::rip {8, "rip"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::isIs {9, "isIs"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::esIs {10, "esIs"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::ospf {13, "ospf"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::bgp {14, "bgp"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::idpr {15, "idpr"};
const Enum::YLeaf MPLSVPNMIB::MplsVpnVrfRouteTable::MplsVpnVrfRouteEntry::MplsVpnVrfRouteProto::ciscoEigrp {16, "ciscoEigrp"};


}
}

