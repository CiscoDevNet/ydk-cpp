
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_L3VPN_STD_MIB.hpp"

namespace ydk {
namespace MPLS_L3VPN_STD_MIB {

MplsL3VpnStdMib::MplsL3VpnStdMib()
    :
    mplsl3vpnifconftable(std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnifconftable>())
	,mplsl3vpnscalars(std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnscalars>())
	,mplsl3vpnvrfrtetable(std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable>())
	,mplsl3vpnvrfrttable(std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrfrttable>())
	,mplsl3vpnvrftable(std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrftable>())
{
    mplsl3vpnifconftable->parent = this;

    mplsl3vpnscalars->parent = this;

    mplsl3vpnvrfrtetable->parent = this;

    mplsl3vpnvrfrttable->parent = this;

    mplsl3vpnvrftable->parent = this;

    yang_name = "MPLS-L3VPN-STD-MIB"; yang_parent_name = "MPLS-L3VPN-STD-MIB";
}

MplsL3VpnStdMib::~MplsL3VpnStdMib()
{
}

bool MplsL3VpnStdMib::has_data() const
{
    return (mplsl3vpnifconftable !=  nullptr && mplsl3vpnifconftable->has_data())
	|| (mplsl3vpnscalars !=  nullptr && mplsl3vpnscalars->has_data())
	|| (mplsl3vpnvrfrtetable !=  nullptr && mplsl3vpnvrfrtetable->has_data())
	|| (mplsl3vpnvrfrttable !=  nullptr && mplsl3vpnvrfrttable->has_data())
	|| (mplsl3vpnvrftable !=  nullptr && mplsl3vpnvrftable->has_data());
}

bool MplsL3VpnStdMib::has_operation() const
{
    return is_set(operation)
	|| (mplsl3vpnifconftable !=  nullptr && mplsl3vpnifconftable->has_operation())
	|| (mplsl3vpnscalars !=  nullptr && mplsl3vpnscalars->has_operation())
	|| (mplsl3vpnvrfrtetable !=  nullptr && mplsl3vpnvrfrtetable->has_operation())
	|| (mplsl3vpnvrfrttable !=  nullptr && mplsl3vpnvrfrttable->has_operation())
	|| (mplsl3vpnvrftable !=  nullptr && mplsl3vpnvrftable->has_operation());
}

std::string MplsL3VpnStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsL3VpnStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnIfConfTable")
    {
        if(mplsl3vpnifconftable == nullptr)
        {
            mplsl3vpnifconftable = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnifconftable>();
        }
        return mplsl3vpnifconftable;
    }

    if(child_yang_name == "mplsL3VpnScalars")
    {
        if(mplsl3vpnscalars == nullptr)
        {
            mplsl3vpnscalars = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnscalars>();
        }
        return mplsl3vpnscalars;
    }

    if(child_yang_name == "mplsL3VpnVrfRteTable")
    {
        if(mplsl3vpnvrfrtetable == nullptr)
        {
            mplsl3vpnvrfrtetable = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable>();
        }
        return mplsl3vpnvrfrtetable;
    }

    if(child_yang_name == "mplsL3VpnVrfRTTable")
    {
        if(mplsl3vpnvrfrttable == nullptr)
        {
            mplsl3vpnvrfrttable = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrfrttable>();
        }
        return mplsl3vpnvrfrttable;
    }

    if(child_yang_name == "mplsL3VpnVrfTable")
    {
        if(mplsl3vpnvrftable == nullptr)
        {
            mplsl3vpnvrftable = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrftable>();
        }
        return mplsl3vpnvrftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsl3vpnifconftable != nullptr)
    {
        children["mplsL3VpnIfConfTable"] = mplsl3vpnifconftable;
    }

    if(mplsl3vpnscalars != nullptr)
    {
        children["mplsL3VpnScalars"] = mplsl3vpnscalars;
    }

    if(mplsl3vpnvrfrtetable != nullptr)
    {
        children["mplsL3VpnVrfRteTable"] = mplsl3vpnvrfrtetable;
    }

    if(mplsl3vpnvrfrttable != nullptr)
    {
        children["mplsL3VpnVrfRTTable"] = mplsl3vpnvrfrttable;
    }

    if(mplsl3vpnvrftable != nullptr)
    {
        children["mplsL3VpnVrfTable"] = mplsl3vpnvrftable;
    }

    return children;
}

void MplsL3VpnStdMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsL3VpnStdMib::clone_ptr() const
{
    return std::make_shared<MplsL3VpnStdMib>();
}

std::string MplsL3VpnStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsL3VpnStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsL3VpnStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

MplsL3VpnStdMib::Mplsl3Vpnscalars::Mplsl3Vpnscalars()
    :
    mplsl3vpnactivevrfs{YType::uint32, "mplsL3VpnActiveVrfs"},
    mplsl3vpnconfiguredvrfs{YType::uint32, "mplsL3VpnConfiguredVrfs"},
    mplsl3vpnconnectedinterfaces{YType::uint32, "mplsL3VpnConnectedInterfaces"},
    mplsl3vpnilllblrcvthrsh{YType::uint32, "mplsL3VpnIllLblRcvThrsh"},
    mplsl3vpnnotificationenable{YType::boolean, "mplsL3VpnNotificationEnable"},
    mplsl3vpnvrfconfmaxpossrts{YType::uint32, "mplsL3VpnVrfConfMaxPossRts"},
    mplsl3vpnvrfconfrtemxthrshtime{YType::uint32, "mplsL3VpnVrfConfRteMxThrshTime"}
{
    yang_name = "mplsL3VpnScalars"; yang_parent_name = "MPLS-L3VPN-STD-MIB";
}

MplsL3VpnStdMib::Mplsl3Vpnscalars::~Mplsl3Vpnscalars()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnscalars::has_data() const
{
    return mplsl3vpnactivevrfs.is_set
	|| mplsl3vpnconfiguredvrfs.is_set
	|| mplsl3vpnconnectedinterfaces.is_set
	|| mplsl3vpnilllblrcvthrsh.is_set
	|| mplsl3vpnnotificationenable.is_set
	|| mplsl3vpnvrfconfmaxpossrts.is_set
	|| mplsl3vpnvrfconfrtemxthrshtime.is_set;
}

bool MplsL3VpnStdMib::Mplsl3Vpnscalars::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsl3vpnactivevrfs.operation)
	|| is_set(mplsl3vpnconfiguredvrfs.operation)
	|| is_set(mplsl3vpnconnectedinterfaces.operation)
	|| is_set(mplsl3vpnilllblrcvthrsh.operation)
	|| is_set(mplsl3vpnnotificationenable.operation)
	|| is_set(mplsl3vpnvrfconfmaxpossrts.operation)
	|| is_set(mplsl3vpnvrfconfrtemxthrshtime.operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnscalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnScalars";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnscalars::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnactivevrfs.is_set || is_set(mplsl3vpnactivevrfs.operation)) leaf_name_data.push_back(mplsl3vpnactivevrfs.get_name_leafdata());
    if (mplsl3vpnconfiguredvrfs.is_set || is_set(mplsl3vpnconfiguredvrfs.operation)) leaf_name_data.push_back(mplsl3vpnconfiguredvrfs.get_name_leafdata());
    if (mplsl3vpnconnectedinterfaces.is_set || is_set(mplsl3vpnconnectedinterfaces.operation)) leaf_name_data.push_back(mplsl3vpnconnectedinterfaces.get_name_leafdata());
    if (mplsl3vpnilllblrcvthrsh.is_set || is_set(mplsl3vpnilllblrcvthrsh.operation)) leaf_name_data.push_back(mplsl3vpnilllblrcvthrsh.get_name_leafdata());
    if (mplsl3vpnnotificationenable.is_set || is_set(mplsl3vpnnotificationenable.operation)) leaf_name_data.push_back(mplsl3vpnnotificationenable.get_name_leafdata());
    if (mplsl3vpnvrfconfmaxpossrts.is_set || is_set(mplsl3vpnvrfconfmaxpossrts.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfmaxpossrts.get_name_leafdata());
    if (mplsl3vpnvrfconfrtemxthrshtime.is_set || is_set(mplsl3vpnvrfconfrtemxthrshtime.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfrtemxthrshtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnscalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnscalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnscalars::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsL3VpnActiveVrfs")
    {
        mplsl3vpnactivevrfs = value;
    }
    if(value_path == "mplsL3VpnConfiguredVrfs")
    {
        mplsl3vpnconfiguredvrfs = value;
    }
    if(value_path == "mplsL3VpnConnectedInterfaces")
    {
        mplsl3vpnconnectedinterfaces = value;
    }
    if(value_path == "mplsL3VpnIllLblRcvThrsh")
    {
        mplsl3vpnilllblrcvthrsh = value;
    }
    if(value_path == "mplsL3VpnNotificationEnable")
    {
        mplsl3vpnnotificationenable = value;
    }
    if(value_path == "mplsL3VpnVrfConfMaxPossRts")
    {
        mplsl3vpnvrfconfmaxpossrts = value;
    }
    if(value_path == "mplsL3VpnVrfConfRteMxThrshTime")
    {
        mplsl3vpnvrfconfrtemxthrshtime = value;
    }
}

MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconftable()
{
    yang_name = "mplsL3VpnIfConfTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB";
}

MplsL3VpnStdMib::Mplsl3Vpnifconftable::~Mplsl3Vpnifconftable()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnifconftable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnifconfentry.size(); index++)
    {
        if(mplsl3vpnifconfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsL3VpnStdMib::Mplsl3Vpnifconftable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnifconfentry.size(); index++)
    {
        if(mplsl3vpnifconfentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnifconftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnIfConfTable";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnifconftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnifconftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnIfConfEntry")
    {
        for(auto const & c : mplsl3vpnifconfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry>();
        c->parent = this;
        mplsl3vpnifconfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnifconftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsl3vpnifconfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnifconftable::set_value(const std::string & value_path, std::string value)
{
}

MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3Vpnifconfentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnifconfindex{YType::int32, "mplsL3VpnIfConfIndex"},
    mplsl3vpnifconfrowstatus{YType::enumeration, "mplsL3VpnIfConfRowStatus"},
    mplsl3vpnifconfstoragetype{YType::enumeration, "mplsL3VpnIfConfStorageType"},
    mplsl3vpnifvpnclassification{YType::enumeration, "mplsL3VpnIfVpnClassification"},
    mplsl3vpnifvpnroutedistprotocol{YType::bits, "mplsL3VpnIfVpnRouteDistProtocol"}
{
    yang_name = "mplsL3VpnIfConfEntry"; yang_parent_name = "mplsL3VpnIfConfTable";
}

MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::~Mplsl3Vpnifconfentry()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnifconfindex.is_set
	|| mplsl3vpnifconfrowstatus.is_set
	|| mplsl3vpnifconfstoragetype.is_set
	|| mplsl3vpnifvpnclassification.is_set
	|| mplsl3vpnifvpnroutedistprotocol.is_set;
}

bool MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsl3vpnvrfname.operation)
	|| is_set(mplsl3vpnifconfindex.operation)
	|| is_set(mplsl3vpnifconfrowstatus.operation)
	|| is_set(mplsl3vpnifconfstoragetype.operation)
	|| is_set(mplsl3vpnifvpnclassification.operation)
	|| is_set(mplsl3vpnifvpnroutedistprotocol.operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnIfConfEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']" <<"[mplsL3VpnIfConfIndex='" <<mplsl3vpnifconfindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnIfConfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.operation)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnifconfindex.is_set || is_set(mplsl3vpnifconfindex.operation)) leaf_name_data.push_back(mplsl3vpnifconfindex.get_name_leafdata());
    if (mplsl3vpnifconfrowstatus.is_set || is_set(mplsl3vpnifconfrowstatus.operation)) leaf_name_data.push_back(mplsl3vpnifconfrowstatus.get_name_leafdata());
    if (mplsl3vpnifconfstoragetype.is_set || is_set(mplsl3vpnifconfstoragetype.operation)) leaf_name_data.push_back(mplsl3vpnifconfstoragetype.get_name_leafdata());
    if (mplsl3vpnifvpnclassification.is_set || is_set(mplsl3vpnifvpnclassification.operation)) leaf_name_data.push_back(mplsl3vpnifvpnclassification.get_name_leafdata());
    if (mplsl3vpnifvpnroutedistprotocol.is_set || is_set(mplsl3vpnifvpnroutedistprotocol.operation)) leaf_name_data.push_back(mplsl3vpnifvpnroutedistprotocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
    }
    if(value_path == "mplsL3VpnIfConfIndex")
    {
        mplsl3vpnifconfindex = value;
    }
    if(value_path == "mplsL3VpnIfConfRowStatus")
    {
        mplsl3vpnifconfrowstatus = value;
    }
    if(value_path == "mplsL3VpnIfConfStorageType")
    {
        mplsl3vpnifconfstoragetype = value;
    }
    if(value_path == "mplsL3VpnIfVpnClassification")
    {
        mplsl3vpnifvpnclassification = value;
    }
    if(value_path == "mplsL3VpnIfVpnRouteDistProtocol")
    {
        mplsl3vpnifvpnroutedistprotocol[value] = true;
    }
}

MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrftable()
{
    yang_name = "mplsL3VpnVrfTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB";
}

MplsL3VpnStdMib::Mplsl3Vpnvrftable::~Mplsl3Vpnvrftable()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrftable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfentry.size(); index++)
    {
        if(mplsl3vpnvrfentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrftable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfentry.size(); index++)
    {
        if(mplsl3vpnvrfentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnvrftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfTable";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnvrftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnvrftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnVrfEntry")
    {
        for(auto const & c : mplsl3vpnvrfentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry>();
        c->parent = this;
        mplsl3vpnvrfentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnvrftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsl3vpnvrfentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnvrftable::set_value(const std::string & value_path, std::string value)
{
}

MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnvrfactiveinterfaces{YType::uint32, "mplsL3VpnVrfActiveInterfaces"},
    mplsl3vpnvrfassociatedinterfaces{YType::uint32, "mplsL3VpnVrfAssociatedInterfaces"},
    mplsl3vpnvrfconfadminstatus{YType::enumeration, "mplsL3VpnVrfConfAdminStatus"},
    mplsl3vpnvrfconfhighrtethresh{YType::uint32, "mplsL3VpnVrfConfHighRteThresh"},
    mplsl3vpnvrfconflastchanged{YType::uint32, "mplsL3VpnVrfConfLastChanged"},
    mplsl3vpnvrfconfmaxroutes{YType::uint32, "mplsL3VpnVrfConfMaxRoutes"},
    mplsl3vpnvrfconfmidrtethresh{YType::uint32, "mplsL3VpnVrfConfMidRteThresh"},
    mplsl3vpnvrfconfrowstatus{YType::enumeration, "mplsL3VpnVrfConfRowStatus"},
    mplsl3vpnvrfconfstoragetype{YType::enumeration, "mplsL3VpnVrfConfStorageType"},
    mplsl3vpnvrfcreationtime{YType::uint32, "mplsL3VpnVrfCreationTime"},
    mplsl3vpnvrfdescription{YType::str, "mplsL3VpnVrfDescription"},
    mplsl3vpnvrfoperstatus{YType::enumeration, "mplsL3VpnVrfOperStatus"},
    mplsl3vpnvrfperfcurrnumroutes{YType::uint32, "mplsL3VpnVrfPerfCurrNumRoutes"},
    mplsl3vpnvrfperfdisctime{YType::uint32, "mplsL3VpnVrfPerfDiscTime"},
    mplsl3vpnvrfperfroutesadded{YType::uint32, "mplsL3VpnVrfPerfRoutesAdded"},
    mplsl3vpnvrfperfroutesdeleted{YType::uint32, "mplsL3VpnVrfPerfRoutesDeleted"},
    mplsl3vpnvrfperfroutesdropped{YType::uint32, "mplsL3VpnVrfPerfRoutesDropped"},
    mplsl3vpnvrfrd{YType::str, "mplsL3VpnVrfRD"},
    mplsl3vpnvrfsecdiscontinuitytime{YType::uint32, "mplsL3VpnVrfSecDiscontinuityTime"},
    mplsl3vpnvrfsecillegallblvltns{YType::uint32, "mplsL3VpnVrfSecIllegalLblVltns"},
    mplsl3vpnvrfvpnid{YType::str, "mplsL3VpnVrfVpnId"}
{
    yang_name = "mplsL3VpnVrfEntry"; yang_parent_name = "mplsL3VpnVrfTable";
}

MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::~Mplsl3Vpnvrfentry()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnvrfactiveinterfaces.is_set
	|| mplsl3vpnvrfassociatedinterfaces.is_set
	|| mplsl3vpnvrfconfadminstatus.is_set
	|| mplsl3vpnvrfconfhighrtethresh.is_set
	|| mplsl3vpnvrfconflastchanged.is_set
	|| mplsl3vpnvrfconfmaxroutes.is_set
	|| mplsl3vpnvrfconfmidrtethresh.is_set
	|| mplsl3vpnvrfconfrowstatus.is_set
	|| mplsl3vpnvrfconfstoragetype.is_set
	|| mplsl3vpnvrfcreationtime.is_set
	|| mplsl3vpnvrfdescription.is_set
	|| mplsl3vpnvrfoperstatus.is_set
	|| mplsl3vpnvrfperfcurrnumroutes.is_set
	|| mplsl3vpnvrfperfdisctime.is_set
	|| mplsl3vpnvrfperfroutesadded.is_set
	|| mplsl3vpnvrfperfroutesdeleted.is_set
	|| mplsl3vpnvrfperfroutesdropped.is_set
	|| mplsl3vpnvrfrd.is_set
	|| mplsl3vpnvrfsecdiscontinuitytime.is_set
	|| mplsl3vpnvrfsecillegallblvltns.is_set
	|| mplsl3vpnvrfvpnid.is_set;
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsl3vpnvrfname.operation)
	|| is_set(mplsl3vpnvrfactiveinterfaces.operation)
	|| is_set(mplsl3vpnvrfassociatedinterfaces.operation)
	|| is_set(mplsl3vpnvrfconfadminstatus.operation)
	|| is_set(mplsl3vpnvrfconfhighrtethresh.operation)
	|| is_set(mplsl3vpnvrfconflastchanged.operation)
	|| is_set(mplsl3vpnvrfconfmaxroutes.operation)
	|| is_set(mplsl3vpnvrfconfmidrtethresh.operation)
	|| is_set(mplsl3vpnvrfconfrowstatus.operation)
	|| is_set(mplsl3vpnvrfconfstoragetype.operation)
	|| is_set(mplsl3vpnvrfcreationtime.operation)
	|| is_set(mplsl3vpnvrfdescription.operation)
	|| is_set(mplsl3vpnvrfoperstatus.operation)
	|| is_set(mplsl3vpnvrfperfcurrnumroutes.operation)
	|| is_set(mplsl3vpnvrfperfdisctime.operation)
	|| is_set(mplsl3vpnvrfperfroutesadded.operation)
	|| is_set(mplsl3vpnvrfperfroutesdeleted.operation)
	|| is_set(mplsl3vpnvrfperfroutesdropped.operation)
	|| is_set(mplsl3vpnvrfrd.operation)
	|| is_set(mplsl3vpnvrfsecdiscontinuitytime.operation)
	|| is_set(mplsl3vpnvrfsecillegallblvltns.operation)
	|| is_set(mplsl3vpnvrfvpnid.operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnVrfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.operation)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnvrfactiveinterfaces.is_set || is_set(mplsl3vpnvrfactiveinterfaces.operation)) leaf_name_data.push_back(mplsl3vpnvrfactiveinterfaces.get_name_leafdata());
    if (mplsl3vpnvrfassociatedinterfaces.is_set || is_set(mplsl3vpnvrfassociatedinterfaces.operation)) leaf_name_data.push_back(mplsl3vpnvrfassociatedinterfaces.get_name_leafdata());
    if (mplsl3vpnvrfconfadminstatus.is_set || is_set(mplsl3vpnvrfconfadminstatus.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfadminstatus.get_name_leafdata());
    if (mplsl3vpnvrfconfhighrtethresh.is_set || is_set(mplsl3vpnvrfconfhighrtethresh.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfhighrtethresh.get_name_leafdata());
    if (mplsl3vpnvrfconflastchanged.is_set || is_set(mplsl3vpnvrfconflastchanged.operation)) leaf_name_data.push_back(mplsl3vpnvrfconflastchanged.get_name_leafdata());
    if (mplsl3vpnvrfconfmaxroutes.is_set || is_set(mplsl3vpnvrfconfmaxroutes.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfmaxroutes.get_name_leafdata());
    if (mplsl3vpnvrfconfmidrtethresh.is_set || is_set(mplsl3vpnvrfconfmidrtethresh.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfmidrtethresh.get_name_leafdata());
    if (mplsl3vpnvrfconfrowstatus.is_set || is_set(mplsl3vpnvrfconfrowstatus.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfrowstatus.get_name_leafdata());
    if (mplsl3vpnvrfconfstoragetype.is_set || is_set(mplsl3vpnvrfconfstoragetype.operation)) leaf_name_data.push_back(mplsl3vpnvrfconfstoragetype.get_name_leafdata());
    if (mplsl3vpnvrfcreationtime.is_set || is_set(mplsl3vpnvrfcreationtime.operation)) leaf_name_data.push_back(mplsl3vpnvrfcreationtime.get_name_leafdata());
    if (mplsl3vpnvrfdescription.is_set || is_set(mplsl3vpnvrfdescription.operation)) leaf_name_data.push_back(mplsl3vpnvrfdescription.get_name_leafdata());
    if (mplsl3vpnvrfoperstatus.is_set || is_set(mplsl3vpnvrfoperstatus.operation)) leaf_name_data.push_back(mplsl3vpnvrfoperstatus.get_name_leafdata());
    if (mplsl3vpnvrfperfcurrnumroutes.is_set || is_set(mplsl3vpnvrfperfcurrnumroutes.operation)) leaf_name_data.push_back(mplsl3vpnvrfperfcurrnumroutes.get_name_leafdata());
    if (mplsl3vpnvrfperfdisctime.is_set || is_set(mplsl3vpnvrfperfdisctime.operation)) leaf_name_data.push_back(mplsl3vpnvrfperfdisctime.get_name_leafdata());
    if (mplsl3vpnvrfperfroutesadded.is_set || is_set(mplsl3vpnvrfperfroutesadded.operation)) leaf_name_data.push_back(mplsl3vpnvrfperfroutesadded.get_name_leafdata());
    if (mplsl3vpnvrfperfroutesdeleted.is_set || is_set(mplsl3vpnvrfperfroutesdeleted.operation)) leaf_name_data.push_back(mplsl3vpnvrfperfroutesdeleted.get_name_leafdata());
    if (mplsl3vpnvrfperfroutesdropped.is_set || is_set(mplsl3vpnvrfperfroutesdropped.operation)) leaf_name_data.push_back(mplsl3vpnvrfperfroutesdropped.get_name_leafdata());
    if (mplsl3vpnvrfrd.is_set || is_set(mplsl3vpnvrfrd.operation)) leaf_name_data.push_back(mplsl3vpnvrfrd.get_name_leafdata());
    if (mplsl3vpnvrfsecdiscontinuitytime.is_set || is_set(mplsl3vpnvrfsecdiscontinuitytime.operation)) leaf_name_data.push_back(mplsl3vpnvrfsecdiscontinuitytime.get_name_leafdata());
    if (mplsl3vpnvrfsecillegallblvltns.is_set || is_set(mplsl3vpnvrfsecillegallblvltns.operation)) leaf_name_data.push_back(mplsl3vpnvrfsecillegallblvltns.get_name_leafdata());
    if (mplsl3vpnvrfvpnid.is_set || is_set(mplsl3vpnvrfvpnid.operation)) leaf_name_data.push_back(mplsl3vpnvrfvpnid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
    }
    if(value_path == "mplsL3VpnVrfActiveInterfaces")
    {
        mplsl3vpnvrfactiveinterfaces = value;
    }
    if(value_path == "mplsL3VpnVrfAssociatedInterfaces")
    {
        mplsl3vpnvrfassociatedinterfaces = value;
    }
    if(value_path == "mplsL3VpnVrfConfAdminStatus")
    {
        mplsl3vpnvrfconfadminstatus = value;
    }
    if(value_path == "mplsL3VpnVrfConfHighRteThresh")
    {
        mplsl3vpnvrfconfhighrtethresh = value;
    }
    if(value_path == "mplsL3VpnVrfConfLastChanged")
    {
        mplsl3vpnvrfconflastchanged = value;
    }
    if(value_path == "mplsL3VpnVrfConfMaxRoutes")
    {
        mplsl3vpnvrfconfmaxroutes = value;
    }
    if(value_path == "mplsL3VpnVrfConfMidRteThresh")
    {
        mplsl3vpnvrfconfmidrtethresh = value;
    }
    if(value_path == "mplsL3VpnVrfConfRowStatus")
    {
        mplsl3vpnvrfconfrowstatus = value;
    }
    if(value_path == "mplsL3VpnVrfConfStorageType")
    {
        mplsl3vpnvrfconfstoragetype = value;
    }
    if(value_path == "mplsL3VpnVrfCreationTime")
    {
        mplsl3vpnvrfcreationtime = value;
    }
    if(value_path == "mplsL3VpnVrfDescription")
    {
        mplsl3vpnvrfdescription = value;
    }
    if(value_path == "mplsL3VpnVrfOperStatus")
    {
        mplsl3vpnvrfoperstatus = value;
    }
    if(value_path == "mplsL3VpnVrfPerfCurrNumRoutes")
    {
        mplsl3vpnvrfperfcurrnumroutes = value;
    }
    if(value_path == "mplsL3VpnVrfPerfDiscTime")
    {
        mplsl3vpnvrfperfdisctime = value;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesAdded")
    {
        mplsl3vpnvrfperfroutesadded = value;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesDeleted")
    {
        mplsl3vpnvrfperfroutesdeleted = value;
    }
    if(value_path == "mplsL3VpnVrfPerfRoutesDropped")
    {
        mplsl3vpnvrfperfroutesdropped = value;
    }
    if(value_path == "mplsL3VpnVrfRD")
    {
        mplsl3vpnvrfrd = value;
    }
    if(value_path == "mplsL3VpnVrfSecDiscontinuityTime")
    {
        mplsl3vpnvrfsecdiscontinuitytime = value;
    }
    if(value_path == "mplsL3VpnVrfSecIllegalLblVltns")
    {
        mplsl3vpnvrfsecillegallblvltns = value;
    }
    if(value_path == "mplsL3VpnVrfVpnId")
    {
        mplsl3vpnvrfvpnid = value;
    }
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrttable()
{
    yang_name = "mplsL3VpnVrfRTTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB";
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::~Mplsl3Vpnvrfrttable()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrtentry.size(); index++)
    {
        if(mplsl3vpnvrfrtentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrtentry.size(); index++)
    {
        if(mplsl3vpnvrfrtentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRTTable";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnVrfRTEntry")
    {
        for(auto const & c : mplsl3vpnvrfrtentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry>();
        c->parent = this;
        mplsl3vpnvrfrtentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsl3vpnvrfrtentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::set_value(const std::string & value_path, std::string value)
{
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::Mplsl3Vpnvrfrtentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnvrfrtindex{YType::uint32, "mplsL3VpnVrfRTIndex"},
    mplsl3vpnvrfrttype{YType::enumeration, "mplsL3VpnVrfRTType"},
    mplsl3vpnvrfrt{YType::str, "mplsL3VpnVrfRT"},
    mplsl3vpnvrfrtdescr{YType::str, "mplsL3VpnVrfRTDescr"},
    mplsl3vpnvrfrtrowstatus{YType::enumeration, "mplsL3VpnVrfRTRowStatus"},
    mplsl3vpnvrfrtstoragetype{YType::enumeration, "mplsL3VpnVrfRTStorageType"}
{
    yang_name = "mplsL3VpnVrfRTEntry"; yang_parent_name = "mplsL3VpnVrfRTTable";
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::~Mplsl3Vpnvrfrtentry()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnvrfrtindex.is_set
	|| mplsl3vpnvrfrttype.is_set
	|| mplsl3vpnvrfrt.is_set
	|| mplsl3vpnvrfrtdescr.is_set
	|| mplsl3vpnvrfrtrowstatus.is_set
	|| mplsl3vpnvrfrtstoragetype.is_set;
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsl3vpnvrfname.operation)
	|| is_set(mplsl3vpnvrfrtindex.operation)
	|| is_set(mplsl3vpnvrfrttype.operation)
	|| is_set(mplsl3vpnvrfrt.operation)
	|| is_set(mplsl3vpnvrfrtdescr.operation)
	|| is_set(mplsl3vpnvrfrtrowstatus.operation)
	|| is_set(mplsl3vpnvrfrtstoragetype.operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRTEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']" <<"[mplsL3VpnVrfRTIndex='" <<mplsl3vpnvrfrtindex <<"']" <<"[mplsL3VpnVrfRTType='" <<mplsl3vpnvrfrttype <<"']";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnVrfRTTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.operation)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnvrfrtindex.is_set || is_set(mplsl3vpnvrfrtindex.operation)) leaf_name_data.push_back(mplsl3vpnvrfrtindex.get_name_leafdata());
    if (mplsl3vpnvrfrttype.is_set || is_set(mplsl3vpnvrfrttype.operation)) leaf_name_data.push_back(mplsl3vpnvrfrttype.get_name_leafdata());
    if (mplsl3vpnvrfrt.is_set || is_set(mplsl3vpnvrfrt.operation)) leaf_name_data.push_back(mplsl3vpnvrfrt.get_name_leafdata());
    if (mplsl3vpnvrfrtdescr.is_set || is_set(mplsl3vpnvrfrtdescr.operation)) leaf_name_data.push_back(mplsl3vpnvrfrtdescr.get_name_leafdata());
    if (mplsl3vpnvrfrtrowstatus.is_set || is_set(mplsl3vpnvrfrtrowstatus.operation)) leaf_name_data.push_back(mplsl3vpnvrfrtrowstatus.get_name_leafdata());
    if (mplsl3vpnvrfrtstoragetype.is_set || is_set(mplsl3vpnvrfrtstoragetype.operation)) leaf_name_data.push_back(mplsl3vpnvrfrtstoragetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
    }
    if(value_path == "mplsL3VpnVrfRTIndex")
    {
        mplsl3vpnvrfrtindex = value;
    }
    if(value_path == "mplsL3VpnVrfRTType")
    {
        mplsl3vpnvrfrttype = value;
    }
    if(value_path == "mplsL3VpnVrfRT")
    {
        mplsl3vpnvrfrt = value;
    }
    if(value_path == "mplsL3VpnVrfRTDescr")
    {
        mplsl3vpnvrfrtdescr = value;
    }
    if(value_path == "mplsL3VpnVrfRTRowStatus")
    {
        mplsl3vpnvrfrtrowstatus = value;
    }
    if(value_path == "mplsL3VpnVrfRTStorageType")
    {
        mplsl3vpnvrfrtstoragetype = value;
    }
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrtetable()
{
    yang_name = "mplsL3VpnVrfRteTable"; yang_parent_name = "MPLS-L3VPN-STD-MIB";
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::~Mplsl3Vpnvrfrtetable()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::has_data() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrteentry.size(); index++)
    {
        if(mplsl3vpnvrfrteentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::has_operation() const
{
    for (std::size_t index=0; index<mplsl3vpnvrfrteentry.size(); index++)
    {
        if(mplsl3vpnvrfrteentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRteTable";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsL3VpnVrfRteEntry")
    {
        for(auto const & c : mplsl3vpnvrfrteentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry>();
        c->parent = this;
        mplsl3vpnvrfrteentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplsl3vpnvrfrteentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::set_value(const std::string & value_path, std::string value)
{
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteentry()
    :
    mplsl3vpnvrfname{YType::str, "mplsL3VpnVrfName"},
    mplsl3vpnvrfrteinetcidrdesttype{YType::enumeration, "mplsL3VpnVrfRteInetCidrDestType"},
    mplsl3vpnvrfrteinetcidrdest{YType::str, "mplsL3VpnVrfRteInetCidrDest"},
    mplsl3vpnvrfrteinetcidrpfxlen{YType::uint32, "mplsL3VpnVrfRteInetCidrPfxLen"},
    mplsl3vpnvrfrteinetcidrpolicy{YType::str, "mplsL3VpnVrfRteInetCidrPolicy"},
    mplsl3vpnvrfrteinetcidrnhoptype{YType::enumeration, "mplsL3VpnVrfRteInetCidrNHopType"},
    mplsl3vpnvrfrteinetcidrnexthop{YType::str, "mplsL3VpnVrfRteInetCidrNextHop"},
    mplsl3vpnvrfrteinetcidrage{YType::uint32, "mplsL3VpnVrfRteInetCidrAge"},
    mplsl3vpnvrfrteinetcidrifindex{YType::int32, "mplsL3VpnVrfRteInetCidrIfIndex"},
    mplsl3vpnvrfrteinetcidrmetric1{YType::int32, "mplsL3VpnVrfRteInetCidrMetric1"},
    mplsl3vpnvrfrteinetcidrmetric2{YType::int32, "mplsL3VpnVrfRteInetCidrMetric2"},
    mplsl3vpnvrfrteinetcidrmetric3{YType::int32, "mplsL3VpnVrfRteInetCidrMetric3"},
    mplsl3vpnvrfrteinetcidrmetric4{YType::int32, "mplsL3VpnVrfRteInetCidrMetric4"},
    mplsl3vpnvrfrteinetcidrmetric5{YType::int32, "mplsL3VpnVrfRteInetCidrMetric5"},
    mplsl3vpnvrfrteinetcidrnexthopas{YType::uint32, "mplsL3VpnVrfRteInetCidrNextHopAS"},
    mplsl3vpnvrfrteinetcidrproto{YType::enumeration, "mplsL3VpnVrfRteInetCidrProto"},
    mplsl3vpnvrfrteinetcidrstatus{YType::enumeration, "mplsL3VpnVrfRteInetCidrStatus"},
    mplsl3vpnvrfrteinetcidrtype{YType::enumeration, "mplsL3VpnVrfRteInetCidrType"},
    mplsl3vpnvrfrtexcpointer{YType::str, "mplsL3VpnVrfRteXCPointer"}
{
    yang_name = "mplsL3VpnVrfRteEntry"; yang_parent_name = "mplsL3VpnVrfRteTable";
}

MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::~Mplsl3Vpnvrfrteentry()
{
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::has_data() const
{
    return mplsl3vpnvrfname.is_set
	|| mplsl3vpnvrfrteinetcidrdesttype.is_set
	|| mplsl3vpnvrfrteinetcidrdest.is_set
	|| mplsl3vpnvrfrteinetcidrpfxlen.is_set
	|| mplsl3vpnvrfrteinetcidrpolicy.is_set
	|| mplsl3vpnvrfrteinetcidrnhoptype.is_set
	|| mplsl3vpnvrfrteinetcidrnexthop.is_set
	|| mplsl3vpnvrfrteinetcidrage.is_set
	|| mplsl3vpnvrfrteinetcidrifindex.is_set
	|| mplsl3vpnvrfrteinetcidrmetric1.is_set
	|| mplsl3vpnvrfrteinetcidrmetric2.is_set
	|| mplsl3vpnvrfrteinetcidrmetric3.is_set
	|| mplsl3vpnvrfrteinetcidrmetric4.is_set
	|| mplsl3vpnvrfrteinetcidrmetric5.is_set
	|| mplsl3vpnvrfrteinetcidrnexthopas.is_set
	|| mplsl3vpnvrfrteinetcidrproto.is_set
	|| mplsl3vpnvrfrteinetcidrstatus.is_set
	|| mplsl3vpnvrfrteinetcidrtype.is_set
	|| mplsl3vpnvrfrtexcpointer.is_set;
}

bool MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplsl3vpnvrfname.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrdesttype.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrdest.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrpfxlen.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrpolicy.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrnhoptype.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrnexthop.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrage.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrifindex.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrmetric1.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrmetric2.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrmetric3.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrmetric4.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrmetric5.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrnexthopas.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrproto.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrstatus.operation)
	|| is_set(mplsl3vpnvrfrteinetcidrtype.operation)
	|| is_set(mplsl3vpnvrfrtexcpointer.operation);
}

std::string MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsL3VpnVrfRteEntry" <<"[mplsL3VpnVrfName='" <<mplsl3vpnvrfname <<"']" <<"[mplsL3VpnVrfRteInetCidrDestType='" <<mplsl3vpnvrfrteinetcidrdesttype <<"']" <<"[mplsL3VpnVrfRteInetCidrDest='" <<mplsl3vpnvrfrteinetcidrdest <<"']" <<"[mplsL3VpnVrfRteInetCidrPfxLen='" <<mplsl3vpnvrfrteinetcidrpfxlen <<"']" <<"[mplsL3VpnVrfRteInetCidrPolicy='" <<mplsl3vpnvrfrteinetcidrpolicy <<"']" <<"[mplsL3VpnVrfRteInetCidrNHopType='" <<mplsl3vpnvrfrteinetcidrnhoptype <<"']" <<"[mplsL3VpnVrfRteInetCidrNextHop='" <<mplsl3vpnvrfrteinetcidrnexthop <<"']";

    return path_buffer.str();

}

const EntityPath MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-L3VPN-STD-MIB:MPLS-L3VPN-STD-MIB/mplsL3VpnVrfRteTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplsl3vpnvrfname.is_set || is_set(mplsl3vpnvrfname.operation)) leaf_name_data.push_back(mplsl3vpnvrfname.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrdesttype.is_set || is_set(mplsl3vpnvrfrteinetcidrdesttype.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrdesttype.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrdest.is_set || is_set(mplsl3vpnvrfrteinetcidrdest.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrdest.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrpfxlen.is_set || is_set(mplsl3vpnvrfrteinetcidrpfxlen.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrpfxlen.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrpolicy.is_set || is_set(mplsl3vpnvrfrteinetcidrpolicy.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrpolicy.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrnhoptype.is_set || is_set(mplsl3vpnvrfrteinetcidrnhoptype.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrnhoptype.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrnexthop.is_set || is_set(mplsl3vpnvrfrteinetcidrnexthop.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrnexthop.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrage.is_set || is_set(mplsl3vpnvrfrteinetcidrage.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrage.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrifindex.is_set || is_set(mplsl3vpnvrfrteinetcidrifindex.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrifindex.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric1.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric1.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric1.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric2.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric2.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric2.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric3.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric3.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric3.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric4.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric4.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric4.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrmetric5.is_set || is_set(mplsl3vpnvrfrteinetcidrmetric5.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrmetric5.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrnexthopas.is_set || is_set(mplsl3vpnvrfrteinetcidrnexthopas.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrnexthopas.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrproto.is_set || is_set(mplsl3vpnvrfrteinetcidrproto.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrproto.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrstatus.is_set || is_set(mplsl3vpnvrfrteinetcidrstatus.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrstatus.get_name_leafdata());
    if (mplsl3vpnvrfrteinetcidrtype.is_set || is_set(mplsl3vpnvrfrteinetcidrtype.operation)) leaf_name_data.push_back(mplsl3vpnvrfrteinetcidrtype.get_name_leafdata());
    if (mplsl3vpnvrfrtexcpointer.is_set || is_set(mplsl3vpnvrfrtexcpointer.operation)) leaf_name_data.push_back(mplsl3vpnvrfrtexcpointer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsL3VpnVrfName")
    {
        mplsl3vpnvrfname = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrDestType")
    {
        mplsl3vpnvrfrteinetcidrdesttype = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrDest")
    {
        mplsl3vpnvrfrteinetcidrdest = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrPfxLen")
    {
        mplsl3vpnvrfrteinetcidrpfxlen = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrPolicy")
    {
        mplsl3vpnvrfrteinetcidrpolicy = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNHopType")
    {
        mplsl3vpnvrfrteinetcidrnhoptype = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNextHop")
    {
        mplsl3vpnvrfrteinetcidrnexthop = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrAge")
    {
        mplsl3vpnvrfrteinetcidrage = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrIfIndex")
    {
        mplsl3vpnvrfrteinetcidrifindex = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric1")
    {
        mplsl3vpnvrfrteinetcidrmetric1 = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric2")
    {
        mplsl3vpnvrfrteinetcidrmetric2 = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric3")
    {
        mplsl3vpnvrfrteinetcidrmetric3 = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric4")
    {
        mplsl3vpnvrfrteinetcidrmetric4 = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrMetric5")
    {
        mplsl3vpnvrfrteinetcidrmetric5 = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrNextHopAS")
    {
        mplsl3vpnvrfrteinetcidrnexthopas = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrProto")
    {
        mplsl3vpnvrfrteinetcidrproto = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrStatus")
    {
        mplsl3vpnvrfrteinetcidrstatus = value;
    }
    if(value_path == "mplsL3VpnVrfRteInetCidrType")
    {
        mplsl3vpnvrfrteinetcidrtype = value;
    }
    if(value_path == "mplsL3VpnVrfRteXCPointer")
    {
        mplsl3vpnvrfrtexcpointer = value;
    }
}

const Enum::YLeaf Mplsl3VpnrttypeEnum::import {1, "import"};
const Enum::YLeaf Mplsl3VpnrttypeEnum::export_ {2, "export"};
const Enum::YLeaf Mplsl3VpnrttypeEnum::both {3, "both"};

const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3VpnifvpnclassificationEnum::carrierOfCarrier {1, "carrierOfCarrier"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3VpnifvpnclassificationEnum::enterprise {2, "enterprise"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3VpnifvpnclassificationEnum::interProvider {3, "interProvider"};

const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3VpnvrfoperstatusEnum::up {1, "up"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3VpnvrfoperstatusEnum::down {2, "down"};

const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3VpnvrfconfadminstatusEnum::up {1, "up"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3VpnvrfconfadminstatusEnum::down {2, "down"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3VpnvrfconfadminstatusEnum::testing {3, "testing"};

const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3VpnvrfrteinetcidrtypeEnum::other {1, "other"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3VpnvrfrteinetcidrtypeEnum::reject {2, "reject"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3VpnvrfrteinetcidrtypeEnum::local {3, "local"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3VpnvrfrteinetcidrtypeEnum::remote {4, "remote"};
const Enum::YLeaf MplsL3VpnStdMib::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3VpnvrfrteinetcidrtypeEnum::blackhole {5, "blackhole"};


}
}

