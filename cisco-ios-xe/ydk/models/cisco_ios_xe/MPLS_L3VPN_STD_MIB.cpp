
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_L3VPN_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_L3VPN_STD_MIB {

MPLSL3VPNSTDMIB::MPLSL3VPNSTDMIB()
    :
    mplsl3vpnscalars(std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnscalars>())
	,mplsl3vpnifconftable(std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable>())
	,mplsl3vpnvrftable(std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable>())
	,mplsl3vpnvrfrttable(std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable>())
	,mplsl3vpnvrfrtetable(std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable>())
{
    mplsl3vpnscalars->parent = this;
    mplsl3vpnifconftable->parent = this;
    mplsl3vpnvrftable->parent = this;
    mplsl3vpnvrfrttable->parent = this;
    mplsl3vpnvrfrtetable->parent = this;

    yang_name = "MPLS-L3VPN-STD-MIB"; yang_parent_name = "MPLS-L3VPN-STD-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::~MPLSL3VPNSTDMIB()
{
}

bool MPLSL3VPNSTDMIB::has_data() const
{
    return (mplsl3vpnscalars !=  nullptr && mplsl3vpnscalars->has_data())
	|| (mplsl3vpnifconftable !=  nullptr && mplsl3vpnifconftable->has_data())
	|| (mplsl3vpnvrftable !=  nullptr && mplsl3vpnvrftable->has_data())
	|| (mplsl3vpnvrfrttable !=  nullptr && mplsl3vpnvrfrttable->has_data())
	|| (mplsl3vpnvrfrtetable !=  nullptr && mplsl3vpnvrfrtetable->has_data());
}

bool MPLSL3VPNSTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mplsl3vpnscalars !=  nullptr && mplsl3vpnscalars->has_operation())
	|| (mplsl3vpnifconftable !=  nullptr && mplsl3vpnifconftable->has_operation())
	|| (mplsl3vpnvrftable !=  nullptr && mplsl3vpnvrftable->has_operation())
	|| (mplsl3vpnvrfrttable !=  nullptr && mplsl3vpnvrfrttable->has_operation())
	|| (mplsl3vpnvrfrtetable !=  nullptr && mplsl3vpnvrfrtetable->has_operation());
}

std::string MPLSL3VPNSTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnScalars")
    {
        if(mplsl3vpnscalars == nullptr)
        {
            mplsl3vpnscalars = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnscalars>();
        }
        return mplsl3vpnscalars;
    }

    if(child_yang_name == "mplsL3VpnIfConfTable")
    {
        if(mplsl3vpnifconftable == nullptr)
        {
            mplsl3vpnifconftable = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable>();
        }
        return mplsl3vpnifconftable;
    }

    if(child_yang_name == "mplsL3VpnVrfTable")
    {
        if(mplsl3vpnvrftable == nullptr)
        {
            mplsl3vpnvrftable = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable>();
        }
        return mplsl3vpnvrftable;
    }

    if(child_yang_name == "mplsL3VpnVrfRTTable")
    {
        if(mplsl3vpnvrfrttable == nullptr)
        {
            mplsl3vpnvrfrttable = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable>();
        }
        return mplsl3vpnvrfrttable;
    }

    if(child_yang_name == "mplsL3VpnVrfRteTable")
    {
        if(mplsl3vpnvrfrtetable == nullptr)
        {
            mplsl3vpnvrfrtetable = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable>();
        }
        return mplsl3vpnvrfrtetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mplsl3vpnscalars != nullptr)
    {
        children["mplsL3VpnScalars"] = mplsl3vpnscalars;
    }

    if(mplsl3vpnifconftable != nullptr)
    {
        children["mplsL3VpnIfConfTable"] = mplsl3vpnifconftable;
    }

    if(mplsl3vpnvrftable != nullptr)
    {
        children["mplsL3VpnVrfTable"] = mplsl3vpnvrftable;
    }

    if(mplsl3vpnvrfrttable != nullptr)
    {
        children["mplsL3VpnVrfRTTable"] = mplsl3vpnvrfrttable;
    }

    if(mplsl3vpnvrfrtetable != nullptr)
    {
        children["mplsL3VpnVrfRteTable"] = mplsl3vpnvrfrtetable;
    }

    return children;
}

void MPLSL3VPNSTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSL3VPNSTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::clone_ptr() const
{
    return std::make_shared<MPLSL3VPNSTDMIB>();
}

std::string MPLSL3VPNSTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MPLSL3VPNSTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MPLSL3VPNSTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MPLSL3VPNSTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MPLSL3VPNSTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnScalars" || name == "mplsL3VpnIfConfTable" || name == "mplsL3VpnVrfTable" || name == "mplsL3VpnVrfRTTable" || name == "mplsL3VpnVrfRteTable")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::Mplsl3Vpnscalars()
    :
    mplsl3vpnconfiguredvrfs{YType::uint32, "mplsL3VpnConfiguredVrfs"},
    mplsl3vpnactivevrfs{YType::uint32, "mplsL3VpnActiveVrfs"},
    mplsl3vpnconnectedinterfaces{YType::uint32, "mplsL3VpnConnectedInterfaces"},
    mplsl3vpnnotificationenable{YType::boolean, "mplsL3VpnNotificationEnable"},
    mplsl3vpnvrfconfmaxpossrts{YType::uint32, "mplsL3VpnVrfConfMaxPossRts"},
    mplsl3vpnvrfconfrtemxthrshtime{YType::uint32, "mplsL3VpnVrfConfRteMxThrshTime"},
    mplsl3vpnilllblrcvthrsh{YType::uint32, "mplsL3VpnIllLblRcvThrsh"}
{

    yang_name = "mplsL3VpnScalars"; yang_parent_name = "MPLS-L3VPN-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::~Mplsl3Vpnscalars()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::has_data() const
{
    return mplsl3vpnconfiguredvrfs.is_set
	|| mplsl3vpnactivevrfs.is_set
	|| mplsl3vpnconnectedinterfaces.is_set
	|| mplsl3vpnnotificationenable.is_set
	|| mplsl3vpnvrfconfmaxpossrts.is_set
	|| mplsl3vpnvrfconfrtemxthrshtime.is_set
	|| mplsl3vpnilllblrcvthrsh.is_set;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsl3vpnconfiguredvrfs.yfilter)
	|| ydk::is_set(mplsl3vpnactivevrfs.yfilter)
	|| ydk::is_set(mplsl3vpnconnectedinterfaces.yfilter)
	|| ydk::is_set(mplsl3vpnnotificationenable.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfmaxpossrts.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfrtemxthrshtime.yfilter)
	|| ydk::is_set(mplsl3vpnilllblrcvthrsh.yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnScalars";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnconfiguredvrfs.is_set || is_set(mplsl3vpnconfiguredvrfs.yfilter)) leaf_name_data.push_back(mplsl3vpnconfiguredvrfs.get_name_leafdata());
    if (mplsl3vpnactivevrfs.is_set || is_set(mplsl3vpnactivevrfs.yfilter)) leaf_name_data.push_back(mplsl3vpnactivevrfs.get_name_leafdata());
    if (mplsl3vpnconnectedinterfaces.is_set || is_set(mplsl3vpnconnectedinterfaces.yfilter)) leaf_name_data.push_back(mplsl3vpnconnectedinterfaces.get_name_leafdata());
    if (mplsl3vpnnotificationenable.is_set || is_set(mplsl3vpnnotificationenable.yfilter)) leaf_name_data.push_back(mplsl3vpnnotificationenable.get_name_leafdata());
    if (mplsl3vpnvrfconfmaxpossrts.is_set || is_set(mplsl3vpnvrfconfmaxpossrts.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfmaxpossrts.get_name_leafdata());
    if (mplsl3vpnvrfconfrtemxthrshtime.is_set || is_set(mplsl3vpnvrfconfrtemxthrshtime.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfrtemxthrshtime.get_name_leafdata());
    if (mplsl3vpnilllblrcvthrsh.is_set || is_set(mplsl3vpnilllblrcvthrsh.yfilter)) leaf_name_data.push_back(mplsl3vpnilllblrcvthrsh.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsL3VpnConfiguredVrfs")
    {
        mplsl3vpnconfiguredvrfs = value;
        mplsl3vpnconfiguredvrfs.value_namespace = name_space;
        mplsl3vpnconfiguredvrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnActiveVrfs")
    {
        mplsl3vpnactivevrfs = value;
        mplsl3vpnactivevrfs.value_namespace = name_space;
        mplsl3vpnactivevrfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnConnectedInterfaces")
    {
        mplsl3vpnconnectedinterfaces = value;
        mplsl3vpnconnectedinterfaces.value_namespace = name_space;
        mplsl3vpnconnectedinterfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnNotificationEnable")
    {
        mplsl3vpnnotificationenable = value;
        mplsl3vpnnotificationenable.value_namespace = name_space;
        mplsl3vpnnotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfMaxPossRts")
    {
        mplsl3vpnvrfconfmaxpossrts = value;
        mplsl3vpnvrfconfmaxpossrts.value_namespace = name_space;
        mplsl3vpnvrfconfmaxpossrts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfRteMxThrshTime")
    {
        mplsl3vpnvrfconfrtemxthrshtime = value;
        mplsl3vpnvrfconfrtemxthrshtime.value_namespace = name_space;
        mplsl3vpnvrfconfrtemxthrshtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnIllLblRcvThrsh")
    {
        mplsl3vpnilllblrcvthrsh = value;
        mplsl3vpnilllblrcvthrsh.value_namespace = name_space;
        mplsl3vpnilllblrcvthrsh.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsL3VpnConfiguredVrfs")
    {
        mplsl3vpnconfiguredvrfs.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnActiveVrfs")
    {
        mplsl3vpnactivevrfs.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnConnectedInterfaces")
    {
        mplsl3vpnconnectedinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnNotificationEnable")
    {
        mplsl3vpnnotificationenable.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfMaxPossRts")
    {
        mplsl3vpnvrfconfmaxpossrts.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfRteMxThrshTime")
    {
        mplsl3vpnvrfconfrtemxthrshtime.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnIllLblRcvThrsh")
    {
        mplsl3vpnilllblrcvthrsh.yfilter = yfilter;
    }
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnscalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnConfiguredVrfs" || name == "mplsL3VpnActiveVrfs" || name == "mplsL3VpnConnectedInterfaces" || name == "mplsL3VpnNotificationEnable" || name == "mplsL3VpnVrfConfMaxPossRts" || name == "mplsL3VpnVrfConfRteMxThrshTime" || name == "mplsL3VpnIllLblRcvThrsh")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconftable()
{

    yang_name = "mplsL3VpnIfConfTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::~Mplsl3Vpnifconftable()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnifconfentry.size(); index++)
    {
        if(mplsl3vpnifconfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnifconfentry.size(); index++)
    {
        if(mplsl3vpnifconfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnIfConfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnIfConfEntry")
    {
        auto c = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry>();
        c->parent = this;
        mplsl3vpnifconfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplsl3vpnifconfentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnIfConfEntry")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3Vpnifconfentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnifconfindex{YType::int32, "mplsL3VpnIfConfIndex"},
    mplsl3vpnifvpnclassification{YType::enumeration, "mplsL3VpnIfVpnClassification"},
    mplsl3vpnifvpnroutedistprotocol{YType::bits, "mplsL3VpnIfVpnRouteDistProtocol"},
    mplsl3vpnifconfstoragetype{YType::enumeration, "mplsL3VpnIfConfStorageType"},
    mplsl3vpnifconfrowstatus{YType::enumeration, "mplsL3VpnIfConfRowStatus"}
{

    yang_name = "mplsL3VpnIfConfEntry"; yang_parent_name = "mplsL3VpnIfConfTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::~Mplsl3Vpnifconfentry()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnifconfindex.is_set
	|| mplsl3vpnifvpnclassification.is_set
	|| mplsl3vpnifvpnroutedistprotocol.is_set
	|| mplsl3vpnifconfstoragetype.is_set
	|| mplsl3vpnifconfrowstatus.is_set;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsl3vpnvrfname.yfilter)
	|| ydk::is_set(mplsl3vpnifconfindex.yfilter)
	|| ydk::is_set(mplsl3vpnifvpnclassification.yfilter)
	|| ydk::is_set(mplsl3vpnifvpnroutedistprotocol.yfilter)
	|| ydk::is_set(mplsl3vpnifconfstoragetype.yfilter)
	|| ydk::is_set(mplsl3vpnifconfrowstatus.yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnIfConfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnIfConfEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']" <<"[mplsL3VpnIfConfIndex='" <<mplsl3vpnifconfindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnifconfindex.is_set || is_set(mplsl3vpnifconfindex.yfilter)) leaf_name_data.push_back(mplsl3vpnifconfindex.get_name_leafdata());
    if (mplsl3vpnifvpnclassification.is_set || is_set(mplsl3vpnifvpnclassification.yfilter)) leaf_name_data.push_back(mplsl3vpnifvpnclassification.get_name_leafdata());
    if (mplsl3vpnifvpnroutedistprotocol.is_set || is_set(mplsl3vpnifvpnroutedistprotocol.yfilter)) leaf_name_data.push_back(mplsl3vpnifvpnroutedistprotocol.get_name_leafdata());
    if (mplsl3vpnifconfstoragetype.is_set || is_set(mplsl3vpnifconfstoragetype.yfilter)) leaf_name_data.push_back(mplsl3vpnifconfstoragetype.get_name_leafdata());
    if (mplsl3vpnifconfrowstatus.is_set || is_set(mplsl3vpnifconfrowstatus.yfilter)) leaf_name_data.push_back(mplsl3vpnifconfrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
        mplsl3vpnvrfname.value_namespace = name_space;
        mplsl3vpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnIfConfIndex")
    {
        mplsl3vpnifconfindex = value;
        mplsl3vpnifconfindex.value_namespace = name_space;
        mplsl3vpnifconfindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnIfVpnClassification")
    {
        mplsl3vpnifvpnclassification = value;
        mplsl3vpnifvpnclassification.value_namespace = name_space;
        mplsl3vpnifvpnclassification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnIfVpnRouteDistProtocol")
    {
        mplsl3vpnifvpnroutedistprotocol[value] = true;
    }
    if(value_path == "mplsL3VpnIfConfStorageType")
    {
        mplsl3vpnifconfstoragetype = value;
        mplsl3vpnifconfstoragetype.value_namespace = name_space;
        mplsl3vpnifconfstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnIfConfRowStatus")
    {
        mplsl3vpnifconfrowstatus = value;
        mplsl3vpnifconfrowstatus.value_namespace = name_space;
        mplsl3vpnifconfrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnIfConfIndex")
    {
        mplsl3vpnifconfindex.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnIfVpnClassification")
    {
        mplsl3vpnifvpnclassification.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnIfVpnRouteDistProtocol")
    {
        mplsl3vpnifvpnroutedistprotocol.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnIfConfStorageType")
    {
        mplsl3vpnifconfstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnIfConfRowStatus")
    {
        mplsl3vpnifconfrowstatus.yfilter = yfilter;
    }
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnVrfName" || name == "mplsL3VpnIfConfIndex" || name == "mplsL3VpnIfVpnClassification" || name == "mplsL3VpnIfVpnRouteDistProtocol" || name == "mplsL3VpnIfConfStorageType" || name == "mplsL3VpnIfConfRowStatus")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrftable()
{

    yang_name = "mplsL3VpnVrfTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::~Mplsl3Vpnvrftable()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfentry.size(); index++)
    {
        if(mplsl3vpnvrfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfentry.size(); index++)
    {
        if(mplsl3vpnvrfentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnVrfEntry")
    {
        auto c = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry>();
        c->parent = this;
        mplsl3vpnvrfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplsl3vpnvrfentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnVrfEntry")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnvrfvpnid{YType::str, "mplsL3VpnVrfVpnId"},
    mplsl3vpnvrfdescription{YType::str, "mplsL3VpnVrfDescription"},
    mplsl3vpnvrfrd{YType::str, "mplsL3VpnVrfRD"},
    mplsl3vpnvrfcreationtime{YType::uint32, "mplsL3VpnVrfCreationTime"},
    mplsl3vpnvrfoperstatus{YType::enumeration, "mplsL3VpnVrfOperStatus"},
    mplsl3vpnvrfactiveinterfaces{YType::uint32, "mplsL3VpnVrfActiveInterfaces"},
    mplsl3vpnvrfassociatedinterfaces{YType::uint32, "mplsL3VpnVrfAssociatedInterfaces"},
    mplsl3vpnvrfconfmidrtethresh{YType::uint32, "mplsL3VpnVrfConfMidRteThresh"},
    mplsl3vpnvrfconfhighrtethresh{YType::uint32, "mplsL3VpnVrfConfHighRteThresh"},
    mplsl3vpnvrfconfmaxroutes{YType::uint32, "mplsL3VpnVrfConfMaxRoutes"},
    mplsl3vpnvrfconflastchanged{YType::uint32, "mplsL3VpnVrfConfLastChanged"},
    mplsl3vpnvrfconfrowstatus{YType::enumeration, "mplsL3VpnVrfConfRowStatus"},
    mplsl3vpnvrfconfadminstatus{YType::enumeration, "mplsL3VpnVrfConfAdminStatus"},
    mplsl3vpnvrfconfstoragetype{YType::enumeration, "mplsL3VpnVrfConfStorageType"},
    mplsl3vpnvrfsecillegallblvltns{YType::uint32, "mplsL3VpnVrfSecIllegalLblVltns"},
    mplsl3vpnvrfsecdiscontinuitytime{YType::uint32, "mplsL3VpnVrfSecDiscontinuityTime"},
    mplsl3vpnvrfperfroutesadded{YType::uint32, "mplsL3VpnVrfPerfRoutesAdded"},
    mplsl3vpnvrfperfroutesdeleted{YType::uint32, "mplsL3VpnVrfPerfRoutesDeleted"},
    mplsl3vpnvrfperfcurrnumroutes{YType::uint32, "mplsL3VpnVrfPerfCurrNumRoutes"},
    mplsl3vpnvrfperfroutesdropped{YType::uint32, "mplsL3VpnVrfPerfRoutesDropped"},
    mplsl3vpnvrfperfdisctime{YType::uint32, "mplsL3VpnVrfPerfDiscTime"}
{

    yang_name = "mplsL3VpnVrfEntry"; yang_parent_name = "mplsL3VpnVrfTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::~Mplsl3Vpnvrfentry()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnvrfvpnid.is_set
	|| mplsl3vpnvrfdescription.is_set
	|| mplsl3vpnvrfrd.is_set
	|| mplsl3vpnvrfcreationtime.is_set
	|| mplsl3vpnvrfoperstatus.is_set
	|| mplsl3vpnvrfactiveinterfaces.is_set
	|| mplsl3vpnvrfassociatedinterfaces.is_set
	|| mplsl3vpnvrfconfmidrtethresh.is_set
	|| mplsl3vpnvrfconfhighrtethresh.is_set
	|| mplsl3vpnvrfconfmaxroutes.is_set
	|| mplsl3vpnvrfconflastchanged.is_set
	|| mplsl3vpnvrfconfrowstatus.is_set
	|| mplsl3vpnvrfconfadminstatus.is_set
	|| mplsl3vpnvrfconfstoragetype.is_set
	|| mplsl3vpnvrfsecillegallblvltns.is_set
	|| mplsl3vpnvrfsecdiscontinuitytime.is_set
	|| mplsl3vpnvrfperfroutesadded.is_set
	|| mplsl3vpnvrfperfroutesdeleted.is_set
	|| mplsl3vpnvrfperfcurrnumroutes.is_set
	|| mplsl3vpnvrfperfroutesdropped.is_set
	|| mplsl3vpnvrfperfdisctime.is_set;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsl3vpnvrfname.yfilter)
	|| ydk::is_set(mplsl3vpnvrfvpnid.yfilter)
	|| ydk::is_set(mplsl3vpnvrfdescription.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrd.yfilter)
	|| ydk::is_set(mplsl3vpnvrfcreationtime.yfilter)
	|| ydk::is_set(mplsl3vpnvrfoperstatus.yfilter)
	|| ydk::is_set(mplsl3vpnvrfactiveinterfaces.yfilter)
	|| ydk::is_set(mplsl3vpnvrfassociatedinterfaces.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfmidrtethresh.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfhighrtethresh.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfmaxroutes.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconflastchanged.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfrowstatus.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfadminstatus.yfilter)
	|| ydk::is_set(mplsl3vpnvrfconfstoragetype.yfilter)
	|| ydk::is_set(mplsl3vpnvrfsecillegallblvltns.yfilter)
	|| ydk::is_set(mplsl3vpnvrfsecdiscontinuitytime.yfilter)
	|| ydk::is_set(mplsl3vpnvrfperfroutesadded.yfilter)
	|| ydk::is_set(mplsl3vpnvrfperfroutesdeleted.yfilter)
	|| ydk::is_set(mplsl3vpnvrfperfcurrnumroutes.yfilter)
	|| ydk::is_set(mplsl3vpnvrfperfroutesdropped.yfilter)
	|| ydk::is_set(mplsl3vpnvrfperfdisctime.yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnVrfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnvrfvpnid.is_set || is_set(mplsl3vpnvrfvpnid.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfvpnid.get_name_leafdata());
    if (mplsl3vpnvrfdescription.is_set || is_set(mplsl3vpnvrfdescription.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfdescription.get_name_leafdata());
    if (mplsl3vpnvrfrd.is_set || is_set(mplsl3vpnvrfrd.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrd.get_name_leafdata());
    if (mplsl3vpnvrfcreationtime.is_set || is_set(mplsl3vpnvrfcreationtime.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfcreationtime.get_name_leafdata());
    if (mplsl3vpnvrfoperstatus.is_set || is_set(mplsl3vpnvrfoperstatus.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfoperstatus.get_name_leafdata());
    if (mplsl3vpnvrfactiveinterfaces.is_set || is_set(mplsl3vpnvrfactiveinterfaces.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfactiveinterfaces.get_name_leafdata());
    if (mplsl3vpnvrfassociatedinterfaces.is_set || is_set(mplsl3vpnvrfassociatedinterfaces.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfassociatedinterfaces.get_name_leafdata());
    if (mplsl3vpnvrfconfmidrtethresh.is_set || is_set(mplsl3vpnvrfconfmidrtethresh.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfmidrtethresh.get_name_leafdata());
    if (mplsl3vpnvrfconfhighrtethresh.is_set || is_set(mplsl3vpnvrfconfhighrtethresh.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfhighrtethresh.get_name_leafdata());
    if (mplsl3vpnvrfconfmaxroutes.is_set || is_set(mplsl3vpnvrfconfmaxroutes.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfmaxroutes.get_name_leafdata());
    if (mplsl3vpnvrfconflastchanged.is_set || is_set(mplsl3vpnvrfconflastchanged.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconflastchanged.get_name_leafdata());
    if (mplsl3vpnvrfconfrowstatus.is_set || is_set(mplsl3vpnvrfconfrowstatus.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfrowstatus.get_name_leafdata());
    if (mplsl3vpnvrfconfadminstatus.is_set || is_set(mplsl3vpnvrfconfadminstatus.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfadminstatus.get_name_leafdata());
    if (mplsl3vpnvrfconfstoragetype.is_set || is_set(mplsl3vpnvrfconfstoragetype.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfconfstoragetype.get_name_leafdata());
    if (mplsl3vpnvrfsecillegallblvltns.is_set || is_set(mplsl3vpnvrfsecillegallblvltns.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfsecillegallblvltns.get_name_leafdata());
    if (mplsl3vpnvrfsecdiscontinuitytime.is_set || is_set(mplsl3vpnvrfsecdiscontinuitytime.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfsecdiscontinuitytime.get_name_leafdata());
    if (mplsl3vpnvrfperfroutesadded.is_set || is_set(mplsl3vpnvrfperfroutesadded.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfperfroutesadded.get_name_leafdata());
    if (mplsl3vpnvrfperfroutesdeleted.is_set || is_set(mplsl3vpnvrfperfroutesdeleted.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfperfroutesdeleted.get_name_leafdata());
    if (mplsl3vpnvrfperfcurrnumroutes.is_set || is_set(mplsl3vpnvrfperfcurrnumroutes.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfperfcurrnumroutes.get_name_leafdata());
    if (mplsl3vpnvrfperfroutesdropped.is_set || is_set(mplsl3vpnvrfperfroutesdropped.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfperfroutesdropped.get_name_leafdata());
    if (mplsl3vpnvrfperfdisctime.is_set || is_set(mplsl3vpnvrfperfdisctime.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfperfdisctime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
        mplsl3vpnvrfname.value_namespace = name_space;
        mplsl3vpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfVpnId")
    {
        mplsl3vpnvrfvpnid = value;
        mplsl3vpnvrfvpnid.value_namespace = name_space;
        mplsl3vpnvrfvpnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfDescription")
    {
        mplsl3vpnvrfdescription = value;
        mplsl3vpnvrfdescription.value_namespace = name_space;
        mplsl3vpnvrfdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRD")
    {
        mplsl3vpnvrfrd = value;
        mplsl3vpnvrfrd.value_namespace = name_space;
        mplsl3vpnvrfrd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfCreationTime")
    {
        mplsl3vpnvrfcreationtime = value;
        mplsl3vpnvrfcreationtime.value_namespace = name_space;
        mplsl3vpnvrfcreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfOperStatus")
    {
        mplsl3vpnvrfoperstatus = value;
        mplsl3vpnvrfoperstatus.value_namespace = name_space;
        mplsl3vpnvrfoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfActiveInterfaces")
    {
        mplsl3vpnvrfactiveinterfaces = value;
        mplsl3vpnvrfactiveinterfaces.value_namespace = name_space;
        mplsl3vpnvrfactiveinterfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfAssociatedInterfaces")
    {
        mplsl3vpnvrfassociatedinterfaces = value;
        mplsl3vpnvrfassociatedinterfaces.value_namespace = name_space;
        mplsl3vpnvrfassociatedinterfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfMidRteThresh")
    {
        mplsl3vpnvrfconfmidrtethresh = value;
        mplsl3vpnvrfconfmidrtethresh.value_namespace = name_space;
        mplsl3vpnvrfconfmidrtethresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfHighRteThresh")
    {
        mplsl3vpnvrfconfhighrtethresh = value;
        mplsl3vpnvrfconfhighrtethresh.value_namespace = name_space;
        mplsl3vpnvrfconfhighrtethresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfMaxRoutes")
    {
        mplsl3vpnvrfconfmaxroutes = value;
        mplsl3vpnvrfconfmaxroutes.value_namespace = name_space;
        mplsl3vpnvrfconfmaxroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfLastChanged")
    {
        mplsl3vpnvrfconflastchanged = value;
        mplsl3vpnvrfconflastchanged.value_namespace = name_space;
        mplsl3vpnvrfconflastchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfRowStatus")
    {
        mplsl3vpnvrfconfrowstatus = value;
        mplsl3vpnvrfconfrowstatus.value_namespace = name_space;
        mplsl3vpnvrfconfrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfAdminStatus")
    {
        mplsl3vpnvrfconfadminstatus = value;
        mplsl3vpnvrfconfadminstatus.value_namespace = name_space;
        mplsl3vpnvrfconfadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfConfStorageType")
    {
        mplsl3vpnvrfconfstoragetype = value;
        mplsl3vpnvrfconfstoragetype.value_namespace = name_space;
        mplsl3vpnvrfconfstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfSecIllegalLblVltns")
    {
        mplsl3vpnvrfsecillegallblvltns = value;
        mplsl3vpnvrfsecillegallblvltns.value_namespace = name_space;
        mplsl3vpnvrfsecillegallblvltns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfSecDiscontinuityTime")
    {
        mplsl3vpnvrfsecdiscontinuitytime = value;
        mplsl3vpnvrfsecdiscontinuitytime.value_namespace = name_space;
        mplsl3vpnvrfsecdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesAdded")
    {
        mplsl3vpnvrfperfroutesadded = value;
        mplsl3vpnvrfperfroutesadded.value_namespace = name_space;
        mplsl3vpnvrfperfroutesadded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesDeleted")
    {
        mplsl3vpnvrfperfroutesdeleted = value;
        mplsl3vpnvrfperfroutesdeleted.value_namespace = name_space;
        mplsl3vpnvrfperfroutesdeleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfPerfCurrNumRoutes")
    {
        mplsl3vpnvrfperfcurrnumroutes = value;
        mplsl3vpnvrfperfcurrnumroutes.value_namespace = name_space;
        mplsl3vpnvrfperfcurrnumroutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesDropped")
    {
        mplsl3vpnvrfperfroutesdropped = value;
        mplsl3vpnvrfperfroutesdropped.value_namespace = name_space;
        mplsl3vpnvrfperfroutesdropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfPerfDiscTime")
    {
        mplsl3vpnvrfperfdisctime = value;
        mplsl3vpnvrfperfdisctime.value_namespace = name_space;
        mplsl3vpnvrfperfdisctime.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfVpnId")
    {
        mplsl3vpnvrfvpnid.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfDescription")
    {
        mplsl3vpnvrfdescription.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRD")
    {
        mplsl3vpnvrfrd.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfCreationTime")
    {
        mplsl3vpnvrfcreationtime.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfOperStatus")
    {
        mplsl3vpnvrfoperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfActiveInterfaces")
    {
        mplsl3vpnvrfactiveinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfAssociatedInterfaces")
    {
        mplsl3vpnvrfassociatedinterfaces.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfMidRteThresh")
    {
        mplsl3vpnvrfconfmidrtethresh.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfHighRteThresh")
    {
        mplsl3vpnvrfconfhighrtethresh.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfMaxRoutes")
    {
        mplsl3vpnvrfconfmaxroutes.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfLastChanged")
    {
        mplsl3vpnvrfconflastchanged.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfRowStatus")
    {
        mplsl3vpnvrfconfrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfAdminStatus")
    {
        mplsl3vpnvrfconfadminstatus.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfConfStorageType")
    {
        mplsl3vpnvrfconfstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfSecIllegalLblVltns")
    {
        mplsl3vpnvrfsecillegallblvltns.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfSecDiscontinuityTime")
    {
        mplsl3vpnvrfsecdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesAdded")
    {
        mplsl3vpnvrfperfroutesadded.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesDeleted")
    {
        mplsl3vpnvrfperfroutesdeleted.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfPerfCurrNumRoutes")
    {
        mplsl3vpnvrfperfcurrnumroutes.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesDropped")
    {
        mplsl3vpnvrfperfroutesdropped.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfPerfDiscTime")
    {
        mplsl3vpnvrfperfdisctime.yfilter = yfilter;
    }
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnVrfName" || name == "mplsL3VpnVrfVpnId" || name == "mplsL3VpnVrfDescription" || name == "mplsL3VpnVrfRD" || name == "mplsL3VpnVrfCreationTime" || name == "mplsL3VpnVrfOperStatus" || name == "mplsL3VpnVrfActiveInterfaces" || name == "mplsL3VpnVrfAssociatedInterfaces" || name == "mplsL3VpnVrfConfMidRteThresh" || name == "mplsL3VpnVrfConfHighRteThresh" || name == "mplsL3VpnVrfConfMaxRoutes" || name == "mplsL3VpnVrfConfLastChanged" || name == "mplsL3VpnVrfConfRowStatus" || name == "mplsL3VpnVrfConfAdminStatus" || name == "mplsL3VpnVrfConfStorageType" || name == "mplsL3VpnVrfSecIllegalLblVltns" || name == "mplsL3VpnVrfSecDiscontinuityTime" || name == "mplsL3VpnVrfPerfRoutesAdded" || name == "mplsL3VpnVrfPerfRoutesDeleted" || name == "mplsL3VpnVrfPerfCurrNumRoutes" || name == "mplsL3VpnVrfPerfRoutesDropped" || name == "mplsL3VpnVrfPerfDiscTime")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrttable()
{

    yang_name = "mplsL3VpnVrfRTTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::~Mplsl3Vpnvrfrttable()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrtentry.size(); index++)
    {
        if(mplsl3vpnvrfrtentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrtentry.size(); index++)
    {
        if(mplsl3vpnvrfrtentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRTTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnVrfRTEntry")
    {
        auto c = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry>();
        c->parent = this;
        mplsl3vpnvrfrtentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplsl3vpnvrfrtentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnVrfRTEntry")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::Mplsl3Vpnvrfrtentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnvrfrtindex{YType::uint32, "mplsL3VpnVrfRTIndex"},
    mplsl3vpnvrfrttype{YType::enumeration, "mplsL3VpnVrfRTType"},
    mplsl3vpnvrfrt{YType::str, "mplsL3VpnVrfRT"},
    mplsl3vpnvrfrtdescr{YType::str, "mplsL3VpnVrfRTDescr"},
    mplsl3vpnvrfrtrowstatus{YType::enumeration, "mplsL3VpnVrfRTRowStatus"},
    mplsl3vpnvrfrtstoragetype{YType::enumeration, "mplsL3VpnVrfRTStorageType"}
{

    yang_name = "mplsL3VpnVrfRTEntry"; yang_parent_name = "mplsL3VpnVrfRTTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::~Mplsl3Vpnvrfrtentry()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnvrfrtindex.is_set
	|| mplsl3vpnvrfrttype.is_set
	|| mplsl3vpnvrfrt.is_set
	|| mplsl3vpnvrfrtdescr.is_set
	|| mplsl3vpnvrfrtrowstatus.is_set
	|| mplsl3vpnvrfrtstoragetype.is_set;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsl3vpnvrfname.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrtindex.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrttype.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrt.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrtdescr.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrtrowstatus.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrtstoragetype.yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnVrfRTTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRTEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']" <<"[mplsL3VpnVrfRTIndex='" <<mplsl3vpnvrfrtindex <<"']" <<"[mplsL3VpnVrfRTType='" <<mplsl3vpnvrfrttype <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnvrfrtindex.is_set || is_set(mplsl3vpnvrfrtindex.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrtindex.get_name_leafdata());
    if (mplsl3vpnvrfrttype.is_set || is_set(mplsl3vpnvrfrttype.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrttype.get_name_leafdata());
    if (mplsl3vpnvrfrt.is_set || is_set(mplsl3vpnvrfrt.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrt.get_name_leafdata());
    if (mplsl3vpnvrfrtdescr.is_set || is_set(mplsl3vpnvrfrtdescr.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrtdescr.get_name_leafdata());
    if (mplsl3vpnvrfrtrowstatus.is_set || is_set(mplsl3vpnvrfrtrowstatus.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrtrowstatus.get_name_leafdata());
    if (mplsl3vpnvrfrtstoragetype.is_set || is_set(mplsl3vpnvrfrtstoragetype.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrtstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
        mplsl3vpnvrfname.value_namespace = name_space;
        mplsl3vpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRTIndex")
    {
        mplsl3vpnvrfrtindex = value;
        mplsl3vpnvrfrtindex.value_namespace = name_space;
        mplsl3vpnvrfrtindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRTType")
    {
        mplsl3vpnvrfrttype = value;
        mplsl3vpnvrfrttype.value_namespace = name_space;
        mplsl3vpnvrfrttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRT")
    {
        mplsl3vpnvrfrt = value;
        mplsl3vpnvrfrt.value_namespace = name_space;
        mplsl3vpnvrfrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRTDescr")
    {
        mplsl3vpnvrfrtdescr = value;
        mplsl3vpnvrfrtdescr.value_namespace = name_space;
        mplsl3vpnvrfrtdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRTRowStatus")
    {
        mplsl3vpnvrfrtrowstatus = value;
        mplsl3vpnvrfrtrowstatus.value_namespace = name_space;
        mplsl3vpnvrfrtrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRTStorageType")
    {
        mplsl3vpnvrfrtstoragetype = value;
        mplsl3vpnvrfrtstoragetype.value_namespace = name_space;
        mplsl3vpnvrfrtstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRTIndex")
    {
        mplsl3vpnvrfrtindex.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRTType")
    {
        mplsl3vpnvrfrttype.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRT")
    {
        mplsl3vpnvrfrt.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRTDescr")
    {
        mplsl3vpnvrfrtdescr.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRTRowStatus")
    {
        mplsl3vpnvrfrtrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRTStorageType")
    {
        mplsl3vpnvrfrtstoragetype.yfilter = yfilter;
    }
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnVrfName" || name == "mplsL3VpnVrfRTIndex" || name == "mplsL3VpnVrfRTType" || name == "mplsL3VpnVrfRT" || name == "mplsL3VpnVrfRTDescr" || name == "mplsL3VpnVrfRTRowStatus" || name == "mplsL3VpnVrfRTStorageType")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrtetable()
{

    yang_name = "mplsL3VpnVrfRteTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::~Mplsl3Vpnvrfrtetable()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrteentry.size(); index++)
    {
        if(mplsl3vpnvrfrteentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrteentry.size(); index++)
    {
        if(mplsl3vpnvrfrteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnVrfRteEntry")
    {
        auto c = std::make_shared<MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry>();
        c->parent = this;
        mplsl3vpnvrfrteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : mplsl3vpnvrfrteentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnVrfRteEntry")
        return true;
    return false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnvrfrteinetcidrdesttype{YType::enumeration, "mplsL3VpnVrfRteInetCidrDestType"},
    mplsl3vpnvrfrteinetcidrdest{YType::str, "mplsL3VpnVrfRteInetCidrDest"},
    mplsl3vpnvrfrteinetcidrpfxlen{YType::uint32, "mplsL3VpnVrfRteInetCidrPfxLen"},
    mplsl3vpnvrfrteinetcidrpolicy{YType::str, "mplsL3VpnVrfRteInetCidrPolicy"},
    mplsl3vpnvrfrteinetcidrnhoptype{YType::enumeration, "mplsL3VpnVrfRteInetCidrNHopType"},
    mplsl3vpnvrfrteinetcidrnexthop{YType::str, "mplsL3VpnVrfRteInetCidrNextHop"},
    mplsl3vpnvrfrteinetcidrifindex{YType::int32, "mplsL3VpnVrfRteInetCidrIfIndex"},
    mplsl3vpnvrfrteinetcidrtype{YType::enumeration, "mplsL3VpnVrfRteInetCidrType"},
    mplsl3vpnvrfrteinetcidrproto{YType::enumeration, "mplsL3VpnVrfRteInetCidrProto"},
    mplsl3vpnvrfrteinetcidrage{YType::uint32, "mplsL3VpnVrfRteInetCidrAge"},
    mplsl3vpnvrfrteinetcidrnexthopas{YType::uint32, "mplsL3VpnVrfRteInetCidrNextHopAS"},
    mplsl3vpnvrfrteinetcidrmetric1{YType::int32, "mplsL3VpnVrfRteInetCidrMetric1"},
    mplsl3vpnvrfrteinetcidrmetric2{YType::int32, "mplsL3VpnVrfRteInetCidrMetric2"},
    mplsl3vpnvrfrteinetcidrmetric3{YType::int32, "mplsL3VpnVrfRteInetCidrMetric3"},
    mplsl3vpnvrfrteinetcidrmetric4{YType::int32, "mplsL3VpnVrfRteInetCidrMetric4"},
    mplsl3vpnvrfrteinetcidrmetric5{YType::int32, "mplsL3VpnVrfRteInetCidrMetric5"},
    mplsl3vpnvrfrtexcpointer{YType::str, "mplsL3VpnVrfRteXCPointer"},
    mplsl3vpnvrfrteinetcidrstatus{YType::enumeration, "mplsL3VpnVrfRteInetCidrStatus"}
{

    yang_name = "mplsL3VpnVrfRteEntry"; yang_parent_name = "mplsL3VpnVrfRteTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::~Mplsl3Vpnvrfrteentry()
{
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnvrfrteinetcidrdesttype.is_set
	|| mplsl3vpnvrfrteinetcidrdest.is_set
	|| mplsl3vpnvrfrteinetcidrpfxlen.is_set
	|| mplsl3vpnvrfrteinetcidrpolicy.is_set
	|| mplsl3vpnvrfrteinetcidrnhoptype.is_set
	|| mplsl3vpnvrfrteinetcidrnexthop.is_set
	|| mplsl3vpnvrfrteinetcidrifindex.is_set
	|| mplsl3vpnvrfrteinetcidrtype.is_set
	|| mplsl3vpnvrfrteinetcidrproto.is_set
	|| mplsl3vpnvrfrteinetcidrage.is_set
	|| mplsl3vpnvrfrteinetcidrnexthopas.is_set
	|| mplsl3vpnvrfrteinetcidrmetric1.is_set
	|| mplsl3vpnvrfrteinetcidrmetric2.is_set
	|| mplsl3vpnvrfrteinetcidrmetric3.is_set
	|| mplsl3vpnvrfrteinetcidrmetric4.is_set
	|| mplsl3vpnvrfrteinetcidrmetric5.is_set
	|| mplsl3vpnvrfrtexcpointer.is_set
	|| mplsl3vpnvrfrteinetcidrstatus.is_set;
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplsl3vpnvrfname.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrdesttype.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrdest.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrpfxlen.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrpolicy.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrnhoptype.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrnexthop.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrifindex.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrtype.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrproto.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrage.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrnexthopas.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrmetric1.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrmetric2.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrmetric3.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrmetric4.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrmetric5.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrtexcpointer.yfilter)
	|| ydk::is_set(mplsl3vpnvrfrteinetcidrstatus.yfilter);
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnVrfRteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRteEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']" <<"[mplsL3VpnVrfRteInetCidrDestType='" <<mplsl3vpnvrfrteinetcidrdesttype <<"']" <<"[mplsL3VpnVrfRteInetCidrDest='" <<mplsl3vpnvrfrteinetcidrdest <<"']" <<"[mplsL3VpnVrfRteInetCidrPfxLen='" <<mplsl3vpnvrfrteinetcidrpfxlen <<"']" <<"[mplsL3VpnVrfRteInetCidrPolicy='" <<mplsl3vpnvrfrteinetcidrpolicy <<"']" <<"[mplsL3VpnVrfRteInetCidrNHopType='" <<mplsl3vpnvrfrteinetcidrnhoptype <<"']" <<"[mplsL3VpnVrfRteInetCidrNextHop='" <<mplsl3vpnvrfrteinetcidrnexthop <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrdesttype.is_set || is_set(mplsl3vpnvrfrteinetcidrdesttype.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrdesttype.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrdest.is_set || is_set(mplsl3vpnvrfrteinetcidrdest.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrdest.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrpfxlen.is_set || is_set(mplsl3vpnvrfrteinetcidrpfxlen.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrpfxlen.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrpolicy.is_set || is_set(mplsl3vpnvrfrteinetcidrpolicy.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrpolicy.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrnhoptype.is_set || is_set(mplsl3vpnvrfrteinetcidrnhoptype.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrnhoptype.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrnexthop.is_set || is_set(mplsl3vpnvrfrteinetcidrnexthop.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrnexthop.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrifindex.is_set || is_set(mplsl3vpnvrfrteinetcidrifindex.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrifindex.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrtype.is_set || is_set(mplsl3vpnvrfrteinetcidrtype.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrtype.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrproto.is_set || is_set(mplsl3vpnvrfrteinetcidrproto.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrproto.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrage.is_set || is_set(mplsl3vpnvrfrteinetcidrage.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrage.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrnexthopas.is_set || is_set(mplsl3vpnvrfrteinetcidrnexthopas.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrnexthopas.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric1.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric1.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric1.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric2.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric2.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric2.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric3.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric3.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric3.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric4.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric4.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric4.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric5.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric5.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric5.get_name_leafdata());
    if (mplsl3vpnvrfrtexcpointer.is_set || is_set(mplsl3vpnvrfrtexcpointer.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrtexcpointer.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrstatus.is_set || is_set(mplsl3vpnvrfrteinetcidrstatus.yfilter)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
        mplsl3vpnvrfname.value_namespace = name_space;
        mplsl3vpnvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrDestType")
    {
        mplsl3vpnvrfrteinetcidrdesttype = value;
        mplsl3vpnvrfrteinetcidrdesttype.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrdesttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrDest")
    {
        mplsl3vpnvrfrteinetcidrdest = value;
        mplsl3vpnvrfrteinetcidrdest.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrdest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrPfxLen")
    {
        mplsl3vpnvrfrteinetcidrpfxlen = value;
        mplsl3vpnvrfrteinetcidrpfxlen.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrpfxlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrPolicy")
    {
        mplsl3vpnvrfrteinetcidrpolicy = value;
        mplsl3vpnvrfrteinetcidrpolicy.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNHopType")
    {
        mplsl3vpnvrfrteinetcidrnhoptype = value;
        mplsl3vpnvrfrteinetcidrnhoptype.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrnhoptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNextHop")
    {
        mplsl3vpnvrfrteinetcidrnexthop = value;
        mplsl3vpnvrfrteinetcidrnexthop.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrIfIndex")
    {
        mplsl3vpnvrfrteinetcidrifindex = value;
        mplsl3vpnvrfrteinetcidrifindex.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrType")
    {
        mplsl3vpnvrfrteinetcidrtype = value;
        mplsl3vpnvrfrteinetcidrtype.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrProto")
    {
        mplsl3vpnvrfrteinetcidrproto = value;
        mplsl3vpnvrfrteinetcidrproto.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrAge")
    {
        mplsl3vpnvrfrteinetcidrage = value;
        mplsl3vpnvrfrteinetcidrage.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNextHopAS")
    {
        mplsl3vpnvrfrteinetcidrnexthopas = value;
        mplsl3vpnvrfrteinetcidrnexthopas.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrnexthopas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric1")
    {
        mplsl3vpnvrfrteinetcidrmetric1 = value;
        mplsl3vpnvrfrteinetcidrmetric1.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrmetric1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric2")
    {
        mplsl3vpnvrfrteinetcidrmetric2 = value;
        mplsl3vpnvrfrteinetcidrmetric2.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrmetric2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric3")
    {
        mplsl3vpnvrfrteinetcidrmetric3 = value;
        mplsl3vpnvrfrteinetcidrmetric3.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrmetric3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric4")
    {
        mplsl3vpnvrfrteinetcidrmetric4 = value;
        mplsl3vpnvrfrteinetcidrmetric4.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrmetric4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric5")
    {
        mplsl3vpnvrfrteinetcidrmetric5 = value;
        mplsl3vpnvrfrteinetcidrmetric5.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrmetric5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteXCPointer")
    {
        mplsl3vpnvrfrtexcpointer = value;
        mplsl3vpnvrfrtexcpointer.value_namespace = name_space;
        mplsl3vpnvrfrtexcpointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrStatus")
    {
        mplsl3vpnvrfrteinetcidrstatus = value;
        mplsl3vpnvrfrteinetcidrstatus.value_namespace = name_space;
        mplsl3vpnvrfrteinetcidrstatus.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrDestType")
    {
        mplsl3vpnvrfrteinetcidrdesttype.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrDest")
    {
        mplsl3vpnvrfrteinetcidrdest.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrPfxLen")
    {
        mplsl3vpnvrfrteinetcidrpfxlen.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrPolicy")
    {
        mplsl3vpnvrfrteinetcidrpolicy.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNHopType")
    {
        mplsl3vpnvrfrteinetcidrnhoptype.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNextHop")
    {
        mplsl3vpnvrfrteinetcidrnexthop.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrIfIndex")
    {
        mplsl3vpnvrfrteinetcidrifindex.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrType")
    {
        mplsl3vpnvrfrteinetcidrtype.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrProto")
    {
        mplsl3vpnvrfrteinetcidrproto.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrAge")
    {
        mplsl3vpnvrfrteinetcidrage.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNextHopAS")
    {
        mplsl3vpnvrfrteinetcidrnexthopas.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric1")
    {
        mplsl3vpnvrfrteinetcidrmetric1.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric2")
    {
        mplsl3vpnvrfrteinetcidrmetric2.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric3")
    {
        mplsl3vpnvrfrteinetcidrmetric3.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric4")
    {
        mplsl3vpnvrfrteinetcidrmetric4.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric5")
    {
        mplsl3vpnvrfrteinetcidrmetric5.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteXCPointer")
    {
        mplsl3vpnvrfrtexcpointer.yfilter = yfilter;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrStatus")
    {
        mplsl3vpnvrfrteinetcidrstatus.yfilter = yfilter;
    }
}

bool MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsL3VpnVrfName" || name == "mplsL3VpnVrfRteInetCidrDestType" || name == "mplsL3VpnVrfRteInetCidrDest" || name == "mplsL3VpnVrfRteInetCidrPfxLen" || name == "mplsL3VpnVrfRteInetCidrPolicy" || name == "mplsL3VpnVrfRteInetCidrNHopType" || name == "mplsL3VpnVrfRteInetCidrNextHop" || name == "mplsL3VpnVrfRteInetCidrIfIndex" || name == "mplsL3VpnVrfRteInetCidrType" || name == "mplsL3VpnVrfRteInetCidrProto" || name == "mplsL3VpnVrfRteInetCidrAge" || name == "mplsL3VpnVrfRteInetCidrNextHopAS" || name == "mplsL3VpnVrfRteInetCidrMetric1" || name == "mplsL3VpnVrfRteInetCidrMetric2" || name == "mplsL3VpnVrfRteInetCidrMetric3" || name == "mplsL3VpnVrfRteInetCidrMetric4" || name == "mplsL3VpnVrfRteInetCidrMetric5" || name == "mplsL3VpnVrfRteXCPointer" || name == "mplsL3VpnVrfRteInetCidrStatus")
        return true;
    return false;
}

const Enum::YLeaf MplsL3VpnRtType::import {1, "import"};
const Enum::YLeaf MplsL3VpnRtType::export_ {2, "export"};
const Enum::YLeaf MplsL3VpnRtType::both {3, "both"};

const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3Vpnifvpnclassification::carrierOfCarrier {1, "carrierOfCarrier"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3Vpnifvpnclassification::enterprise {2, "enterprise"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3Vpnifvpnclassification::interProvider {3, "interProvider"};

const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfoperstatus::up {1, "up"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfoperstatus::down {2, "down"};

const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfconfadminstatus::up {1, "up"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfconfadminstatus::down {2, "down"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfconfadminstatus::testing {3, "testing"};

const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteinetcidrtype::other {1, "other"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteinetcidrtype::reject {2, "reject"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteinetcidrtype::local {3, "local"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteinetcidrtype::remote {4, "remote"};
const Enum::YLeaf MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteinetcidrtype::blackhole {5, "blackhole"};


}
}

