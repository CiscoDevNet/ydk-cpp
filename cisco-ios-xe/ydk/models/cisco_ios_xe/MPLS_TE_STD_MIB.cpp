
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TE_STD_MIB.hpp"

namespace ydk {
namespace MPLS_TE_STD_MIB {

MplsTeStdMib::MplsTeStdMib()
    :
    mplsteobjects(std::make_shared<MplsTeStdMib::Mplsteobjects>())
	,mplstescalars(std::make_shared<MplsTeStdMib::Mplstescalars>())
	,mplstunnelarhoptable(std::make_shared<MplsTeStdMib::Mplstunnelarhoptable>())
	,mplstunnelchoptable(std::make_shared<MplsTeStdMib::Mplstunnelchoptable>())
	,mplstunnelcrldprestable(std::make_shared<MplsTeStdMib::Mplstunnelcrldprestable>())
	,mplstunnelhoptable(std::make_shared<MplsTeStdMib::Mplstunnelhoptable>())
	,mplstunnelresourcetable(std::make_shared<MplsTeStdMib::Mplstunnelresourcetable>())
	,mplstunneltable(std::make_shared<MplsTeStdMib::Mplstunneltable>())
{
    mplsteobjects->parent = this;

    mplstescalars->parent = this;

    mplstunnelarhoptable->parent = this;

    mplstunnelchoptable->parent = this;

    mplstunnelcrldprestable->parent = this;

    mplstunnelhoptable->parent = this;

    mplstunnelresourcetable->parent = this;

    mplstunneltable->parent = this;

    yang_name = "MPLS-TE-STD-MIB"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::~MplsTeStdMib()
{
}

bool MplsTeStdMib::has_data() const
{
    return (mplsteobjects !=  nullptr && mplsteobjects->has_data())
	|| (mplstescalars !=  nullptr && mplstescalars->has_data())
	|| (mplstunnelarhoptable !=  nullptr && mplstunnelarhoptable->has_data())
	|| (mplstunnelchoptable !=  nullptr && mplstunnelchoptable->has_data())
	|| (mplstunnelcrldprestable !=  nullptr && mplstunnelcrldprestable->has_data())
	|| (mplstunnelhoptable !=  nullptr && mplstunnelhoptable->has_data())
	|| (mplstunnelresourcetable !=  nullptr && mplstunnelresourcetable->has_data())
	|| (mplstunneltable !=  nullptr && mplstunneltable->has_data());
}

bool MplsTeStdMib::has_operation() const
{
    return is_set(operation)
	|| (mplsteobjects !=  nullptr && mplsteobjects->has_operation())
	|| (mplstescalars !=  nullptr && mplstescalars->has_operation())
	|| (mplstunnelarhoptable !=  nullptr && mplstunnelarhoptable->has_operation())
	|| (mplstunnelchoptable !=  nullptr && mplstunnelchoptable->has_operation())
	|| (mplstunnelcrldprestable !=  nullptr && mplstunnelcrldprestable->has_operation())
	|| (mplstunnelhoptable !=  nullptr && mplstunnelhoptable->has_operation())
	|| (mplstunnelresourcetable !=  nullptr && mplstunnelresourcetable->has_operation())
	|| (mplstunneltable !=  nullptr && mplstunneltable->has_operation());
}

std::string MplsTeStdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsTeStdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTeObjects")
    {
        if(mplsteobjects == nullptr)
        {
            mplsteobjects = std::make_shared<MplsTeStdMib::Mplsteobjects>();
        }
        return mplsteobjects;
    }

    if(child_yang_name == "mplsTeScalars")
    {
        if(mplstescalars == nullptr)
        {
            mplstescalars = std::make_shared<MplsTeStdMib::Mplstescalars>();
        }
        return mplstescalars;
    }

    if(child_yang_name == "mplsTunnelARHopTable")
    {
        if(mplstunnelarhoptable == nullptr)
        {
            mplstunnelarhoptable = std::make_shared<MplsTeStdMib::Mplstunnelarhoptable>();
        }
        return mplstunnelarhoptable;
    }

    if(child_yang_name == "mplsTunnelCHopTable")
    {
        if(mplstunnelchoptable == nullptr)
        {
            mplstunnelchoptable = std::make_shared<MplsTeStdMib::Mplstunnelchoptable>();
        }
        return mplstunnelchoptable;
    }

    if(child_yang_name == "mplsTunnelCRLDPResTable")
    {
        if(mplstunnelcrldprestable == nullptr)
        {
            mplstunnelcrldprestable = std::make_shared<MplsTeStdMib::Mplstunnelcrldprestable>();
        }
        return mplstunnelcrldprestable;
    }

    if(child_yang_name == "mplsTunnelHopTable")
    {
        if(mplstunnelhoptable == nullptr)
        {
            mplstunnelhoptable = std::make_shared<MplsTeStdMib::Mplstunnelhoptable>();
        }
        return mplstunnelhoptable;
    }

    if(child_yang_name == "mplsTunnelResourceTable")
    {
        if(mplstunnelresourcetable == nullptr)
        {
            mplstunnelresourcetable = std::make_shared<MplsTeStdMib::Mplstunnelresourcetable>();
        }
        return mplstunnelresourcetable;
    }

    if(child_yang_name == "mplsTunnelTable")
    {
        if(mplstunneltable == nullptr)
        {
            mplstunneltable = std::make_shared<MplsTeStdMib::Mplstunneltable>();
        }
        return mplstunneltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mplsteobjects != nullptr)
    {
        children["mplsTeObjects"] = mplsteobjects;
    }

    if(mplstescalars != nullptr)
    {
        children["mplsTeScalars"] = mplstescalars;
    }

    if(mplstunnelarhoptable != nullptr)
    {
        children["mplsTunnelARHopTable"] = mplstunnelarhoptable;
    }

    if(mplstunnelchoptable != nullptr)
    {
        children["mplsTunnelCHopTable"] = mplstunnelchoptable;
    }

    if(mplstunnelcrldprestable != nullptr)
    {
        children["mplsTunnelCRLDPResTable"] = mplstunnelcrldprestable;
    }

    if(mplstunnelhoptable != nullptr)
    {
        children["mplsTunnelHopTable"] = mplstunnelhoptable;
    }

    if(mplstunnelresourcetable != nullptr)
    {
        children["mplsTunnelResourceTable"] = mplstunnelresourcetable;
    }

    if(mplstunneltable != nullptr)
    {
        children["mplsTunnelTable"] = mplstunneltable;
    }

    return children;
}

void MplsTeStdMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsTeStdMib::clone_ptr() const
{
    return std::make_shared<MplsTeStdMib>();
}

std::string MplsTeStdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsTeStdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsTeStdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

MplsTeStdMib::Mplstescalars::Mplstescalars()
    :
    mplstunnelactive{YType::uint32, "mplsTunnelActive"},
    mplstunnelconfigured{YType::uint32, "mplsTunnelConfigured"},
    mplstunnelmaxhops{YType::uint32, "mplsTunnelMaxHops"},
    mplstunnelnotificationmaxrate{YType::uint32, "mplsTunnelNotificationMaxRate"},
    mplstunneltedistproto{YType::bits, "mplsTunnelTEDistProto"}
{
    yang_name = "mplsTeScalars"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplstescalars::~Mplstescalars()
{
}

bool MplsTeStdMib::Mplstescalars::has_data() const
{
    return mplstunnelactive.is_set
	|| mplstunnelconfigured.is_set
	|| mplstunnelmaxhops.is_set
	|| mplstunnelnotificationmaxrate.is_set
	|| mplstunneltedistproto.is_set;
}

bool MplsTeStdMib::Mplstescalars::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelactive.operation)
	|| is_set(mplstunnelconfigured.operation)
	|| is_set(mplstunnelmaxhops.operation)
	|| is_set(mplstunnelnotificationmaxrate.operation)
	|| is_set(mplstunneltedistproto.operation);
}

std::string MplsTeStdMib::Mplstescalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTeScalars";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstescalars::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelactive.is_set || is_set(mplstunnelactive.operation)) leaf_name_data.push_back(mplstunnelactive.get_name_leafdata());
    if (mplstunnelconfigured.is_set || is_set(mplstunnelconfigured.operation)) leaf_name_data.push_back(mplstunnelconfigured.get_name_leafdata());
    if (mplstunnelmaxhops.is_set || is_set(mplstunnelmaxhops.operation)) leaf_name_data.push_back(mplstunnelmaxhops.get_name_leafdata());
    if (mplstunnelnotificationmaxrate.is_set || is_set(mplstunnelnotificationmaxrate.operation)) leaf_name_data.push_back(mplstunnelnotificationmaxrate.get_name_leafdata());
    if (mplstunneltedistproto.is_set || is_set(mplstunneltedistproto.operation)) leaf_name_data.push_back(mplstunneltedistproto.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstescalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstescalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplstescalars::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelActive")
    {
        mplstunnelactive = value;
    }
    if(value_path == "mplsTunnelConfigured")
    {
        mplstunnelconfigured = value;
    }
    if(value_path == "mplsTunnelMaxHops")
    {
        mplstunnelmaxhops = value;
    }
    if(value_path == "mplsTunnelNotificationMaxRate")
    {
        mplstunnelnotificationmaxrate = value;
    }
    if(value_path == "mplsTunnelTEDistProto")
    {
        mplstunneltedistproto[value] = true;
    }
}

MplsTeStdMib::Mplsteobjects::Mplsteobjects()
    :
    mplstunnelhoplistindexnext{YType::uint32, "mplsTunnelHopListIndexNext"},
    mplstunnelindexnext{YType::uint32, "mplsTunnelIndexNext"},
    mplstunnelnotificationenable{YType::boolean, "mplsTunnelNotificationEnable"},
    mplstunnelresourceindexnext{YType::uint32, "mplsTunnelResourceIndexNext"}
{
    yang_name = "mplsTeObjects"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplsteobjects::~Mplsteobjects()
{
}

bool MplsTeStdMib::Mplsteobjects::has_data() const
{
    return mplstunnelhoplistindexnext.is_set
	|| mplstunnelindexnext.is_set
	|| mplstunnelnotificationenable.is_set
	|| mplstunnelresourceindexnext.is_set;
}

bool MplsTeStdMib::Mplsteobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelhoplistindexnext.operation)
	|| is_set(mplstunnelindexnext.operation)
	|| is_set(mplstunnelnotificationenable.operation)
	|| is_set(mplstunnelresourceindexnext.operation);
}

std::string MplsTeStdMib::Mplsteobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTeObjects";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplsteobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelhoplistindexnext.is_set || is_set(mplstunnelhoplistindexnext.operation)) leaf_name_data.push_back(mplstunnelhoplistindexnext.get_name_leafdata());
    if (mplstunnelindexnext.is_set || is_set(mplstunnelindexnext.operation)) leaf_name_data.push_back(mplstunnelindexnext.get_name_leafdata());
    if (mplstunnelnotificationenable.is_set || is_set(mplstunnelnotificationenable.operation)) leaf_name_data.push_back(mplstunnelnotificationenable.get_name_leafdata());
    if (mplstunnelresourceindexnext.is_set || is_set(mplstunnelresourceindexnext.operation)) leaf_name_data.push_back(mplstunnelresourceindexnext.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplsteobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplsteobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplsteobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelHopListIndexNext")
    {
        mplstunnelhoplistindexnext = value;
    }
    if(value_path == "mplsTunnelIndexNext")
    {
        mplstunnelindexnext = value;
    }
    if(value_path == "mplsTunnelNotificationEnable")
    {
        mplstunnelnotificationenable = value;
    }
    if(value_path == "mplsTunnelResourceIndexNext")
    {
        mplstunnelresourceindexnext = value;
    }
}

MplsTeStdMib::Mplstunneltable::Mplstunneltable()
{
    yang_name = "mplsTunnelTable"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplstunneltable::~Mplstunneltable()
{
}

bool MplsTeStdMib::Mplstunneltable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelentry.size(); index++)
    {
        if(mplstunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStdMib::Mplstunneltable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelentry.size(); index++)
    {
        if(mplstunnelentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStdMib::Mplstunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelTable";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunneltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelEntry")
    {
        for(auto const & c : mplstunnelentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStdMib::Mplstunneltable::Mplstunnelentry>();
        c->parent = this;
        mplstunnelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStdMib::Mplstunneltable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStdMib::Mplstunneltable::Mplstunnelentry::Mplstunnelentry()
    :
    mplstunnelindex{YType::uint32, "mplsTunnelIndex"},
    mplstunnelinstance{YType::uint32, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::uint32, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::uint32, "mplsTunnelEgressLSRId"},
    mplstunneladminstatus{YType::enumeration, "mplsTunnelAdminStatus"},
    mplstunnelarhoptableindex{YType::uint32, "mplsTunnelARHopTableIndex"},
    mplstunnelchoptableindex{YType::uint32, "mplsTunnelCHopTableIndex"},
    mplstunnelcreationtime{YType::uint32, "mplsTunnelCreationTime"},
    mplstunneldescr{YType::str, "mplsTunnelDescr"},
    mplstunnelexcludeanyaffinity{YType::uint32, "mplsTunnelExcludeAnyAffinity"},
    mplstunnelholdingprio{YType::int32, "mplsTunnelHoldingPrio"},
    mplstunnelhoptableindex{YType::uint32, "mplsTunnelHopTableIndex"},
    mplstunnelifindex{YType::int32, "mplsTunnelIfIndex"},
    mplstunnelincludeallaffinity{YType::uint32, "mplsTunnelIncludeAllAffinity"},
    mplstunnelincludeanyaffinity{YType::uint32, "mplsTunnelIncludeAnyAffinity"},
    mplstunnelinstancepriority{YType::uint32, "mplsTunnelInstancePriority"},
    mplstunnelinstanceuptime{YType::uint32, "mplsTunnelInstanceUpTime"},
    mplstunnelisif{YType::boolean, "mplsTunnelIsIf"},
    mplstunnellastpathchange{YType::uint32, "mplsTunnelLastPathChange"},
    mplstunnellocalprotectinuse{YType::boolean, "mplsTunnelLocalProtectInUse"},
    mplstunnelname{YType::str, "mplsTunnelName"},
    mplstunneloperstatus{YType::enumeration, "mplsTunnelOperStatus"},
    mplstunnelowner{YType::enumeration, "mplsTunnelOwner"},
    mplstunnelpathchanges{YType::uint32, "mplsTunnelPathChanges"},
    mplstunnelpathinuse{YType::uint32, "mplsTunnelPathInUse"},
    mplstunnelperfbytes{YType::uint32, "mplsTunnelPerfBytes"},
    mplstunnelperferrors{YType::uint32, "mplsTunnelPerfErrors"},
    mplstunnelperfhcbytes{YType::uint64, "mplsTunnelPerfHCBytes"},
    mplstunnelperfhcpackets{YType::uint64, "mplsTunnelPerfHCPackets"},
    mplstunnelperfpackets{YType::uint32, "mplsTunnelPerfPackets"},
    mplstunnelprimaryinstance{YType::uint32, "mplsTunnelPrimaryInstance"},
    mplstunnelprimaryuptime{YType::uint32, "mplsTunnelPrimaryUpTime"},
    mplstunnelresourcepointer{YType::str, "mplsTunnelResourcePointer"},
    mplstunnelrole{YType::enumeration, "mplsTunnelRole"},
    mplstunnelrowstatus{YType::enumeration, "mplsTunnelRowStatus"},
    mplstunnelsessionattributes{YType::bits, "mplsTunnelSessionAttributes"},
    mplstunnelsetupprio{YType::int32, "mplsTunnelSetupPrio"},
    mplstunnelsignallingproto{YType::enumeration, "mplsTunnelSignallingProto"},
    mplstunnelstatetransitions{YType::uint32, "mplsTunnelStateTransitions"},
    mplstunnelstoragetype{YType::enumeration, "mplsTunnelStorageType"},
    mplstunneltotaluptime{YType::uint32, "mplsTunnelTotalUpTime"},
    mplstunnelxcpointer{YType::str, "mplsTunnelXCPointer"}
{
    yang_name = "mplsTunnelEntry"; yang_parent_name = "mplsTunnelTable";
}

MplsTeStdMib::Mplstunneltable::Mplstunnelentry::~Mplstunnelentry()
{
}

bool MplsTeStdMib::Mplstunneltable::Mplstunnelentry::has_data() const
{
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| mplstunneladminstatus.is_set
	|| mplstunnelarhoptableindex.is_set
	|| mplstunnelchoptableindex.is_set
	|| mplstunnelcreationtime.is_set
	|| mplstunneldescr.is_set
	|| mplstunnelexcludeanyaffinity.is_set
	|| mplstunnelholdingprio.is_set
	|| mplstunnelhoptableindex.is_set
	|| mplstunnelifindex.is_set
	|| mplstunnelincludeallaffinity.is_set
	|| mplstunnelincludeanyaffinity.is_set
	|| mplstunnelinstancepriority.is_set
	|| mplstunnelinstanceuptime.is_set
	|| mplstunnelisif.is_set
	|| mplstunnellastpathchange.is_set
	|| mplstunnellocalprotectinuse.is_set
	|| mplstunnelname.is_set
	|| mplstunneloperstatus.is_set
	|| mplstunnelowner.is_set
	|| mplstunnelpathchanges.is_set
	|| mplstunnelpathinuse.is_set
	|| mplstunnelperfbytes.is_set
	|| mplstunnelperferrors.is_set
	|| mplstunnelperfhcbytes.is_set
	|| mplstunnelperfhcpackets.is_set
	|| mplstunnelperfpackets.is_set
	|| mplstunnelprimaryinstance.is_set
	|| mplstunnelprimaryuptime.is_set
	|| mplstunnelresourcepointer.is_set
	|| mplstunnelrole.is_set
	|| mplstunnelrowstatus.is_set
	|| mplstunnelsessionattributes.is_set
	|| mplstunnelsetupprio.is_set
	|| mplstunnelsignallingproto.is_set
	|| mplstunnelstatetransitions.is_set
	|| mplstunnelstoragetype.is_set
	|| mplstunneltotaluptime.is_set
	|| mplstunnelxcpointer.is_set;
}

bool MplsTeStdMib::Mplstunneltable::Mplstunnelentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelindex.operation)
	|| is_set(mplstunnelinstance.operation)
	|| is_set(mplstunnelingresslsrid.operation)
	|| is_set(mplstunnelegresslsrid.operation)
	|| is_set(mplstunneladminstatus.operation)
	|| is_set(mplstunnelarhoptableindex.operation)
	|| is_set(mplstunnelchoptableindex.operation)
	|| is_set(mplstunnelcreationtime.operation)
	|| is_set(mplstunneldescr.operation)
	|| is_set(mplstunnelexcludeanyaffinity.operation)
	|| is_set(mplstunnelholdingprio.operation)
	|| is_set(mplstunnelhoptableindex.operation)
	|| is_set(mplstunnelifindex.operation)
	|| is_set(mplstunnelincludeallaffinity.operation)
	|| is_set(mplstunnelincludeanyaffinity.operation)
	|| is_set(mplstunnelinstancepriority.operation)
	|| is_set(mplstunnelinstanceuptime.operation)
	|| is_set(mplstunnelisif.operation)
	|| is_set(mplstunnellastpathchange.operation)
	|| is_set(mplstunnellocalprotectinuse.operation)
	|| is_set(mplstunnelname.operation)
	|| is_set(mplstunneloperstatus.operation)
	|| is_set(mplstunnelowner.operation)
	|| is_set(mplstunnelpathchanges.operation)
	|| is_set(mplstunnelpathinuse.operation)
	|| is_set(mplstunnelperfbytes.operation)
	|| is_set(mplstunnelperferrors.operation)
	|| is_set(mplstunnelperfhcbytes.operation)
	|| is_set(mplstunnelperfhcpackets.operation)
	|| is_set(mplstunnelperfpackets.operation)
	|| is_set(mplstunnelprimaryinstance.operation)
	|| is_set(mplstunnelprimaryuptime.operation)
	|| is_set(mplstunnelresourcepointer.operation)
	|| is_set(mplstunnelrole.operation)
	|| is_set(mplstunnelrowstatus.operation)
	|| is_set(mplstunnelsessionattributes.operation)
	|| is_set(mplstunnelsetupprio.operation)
	|| is_set(mplstunnelsignallingproto.operation)
	|| is_set(mplstunnelstatetransitions.operation)
	|| is_set(mplstunnelstoragetype.operation)
	|| is_set(mplstunneltotaluptime.operation)
	|| is_set(mplstunnelxcpointer.operation);
}

std::string MplsTeStdMib::Mplstunneltable::Mplstunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelEntry" <<"[mplsTunnelIndex='" <<mplstunnelindex <<"']" <<"[mplsTunnelInstance='" <<mplstunnelinstance <<"']" <<"[mplsTunnelIngressLSRId='" <<mplstunnelingresslsrid <<"']" <<"[mplsTunnelEgressLSRId='" <<mplstunnelegresslsrid <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunneltable::Mplstunnelentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelTable/" << get_segment_path();
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
    if (mplstunneladminstatus.is_set || is_set(mplstunneladminstatus.operation)) leaf_name_data.push_back(mplstunneladminstatus.get_name_leafdata());
    if (mplstunnelarhoptableindex.is_set || is_set(mplstunnelarhoptableindex.operation)) leaf_name_data.push_back(mplstunnelarhoptableindex.get_name_leafdata());
    if (mplstunnelchoptableindex.is_set || is_set(mplstunnelchoptableindex.operation)) leaf_name_data.push_back(mplstunnelchoptableindex.get_name_leafdata());
    if (mplstunnelcreationtime.is_set || is_set(mplstunnelcreationtime.operation)) leaf_name_data.push_back(mplstunnelcreationtime.get_name_leafdata());
    if (mplstunneldescr.is_set || is_set(mplstunneldescr.operation)) leaf_name_data.push_back(mplstunneldescr.get_name_leafdata());
    if (mplstunnelexcludeanyaffinity.is_set || is_set(mplstunnelexcludeanyaffinity.operation)) leaf_name_data.push_back(mplstunnelexcludeanyaffinity.get_name_leafdata());
    if (mplstunnelholdingprio.is_set || is_set(mplstunnelholdingprio.operation)) leaf_name_data.push_back(mplstunnelholdingprio.get_name_leafdata());
    if (mplstunnelhoptableindex.is_set || is_set(mplstunnelhoptableindex.operation)) leaf_name_data.push_back(mplstunnelhoptableindex.get_name_leafdata());
    if (mplstunnelifindex.is_set || is_set(mplstunnelifindex.operation)) leaf_name_data.push_back(mplstunnelifindex.get_name_leafdata());
    if (mplstunnelincludeallaffinity.is_set || is_set(mplstunnelincludeallaffinity.operation)) leaf_name_data.push_back(mplstunnelincludeallaffinity.get_name_leafdata());
    if (mplstunnelincludeanyaffinity.is_set || is_set(mplstunnelincludeanyaffinity.operation)) leaf_name_data.push_back(mplstunnelincludeanyaffinity.get_name_leafdata());
    if (mplstunnelinstancepriority.is_set || is_set(mplstunnelinstancepriority.operation)) leaf_name_data.push_back(mplstunnelinstancepriority.get_name_leafdata());
    if (mplstunnelinstanceuptime.is_set || is_set(mplstunnelinstanceuptime.operation)) leaf_name_data.push_back(mplstunnelinstanceuptime.get_name_leafdata());
    if (mplstunnelisif.is_set || is_set(mplstunnelisif.operation)) leaf_name_data.push_back(mplstunnelisif.get_name_leafdata());
    if (mplstunnellastpathchange.is_set || is_set(mplstunnellastpathchange.operation)) leaf_name_data.push_back(mplstunnellastpathchange.get_name_leafdata());
    if (mplstunnellocalprotectinuse.is_set || is_set(mplstunnellocalprotectinuse.operation)) leaf_name_data.push_back(mplstunnellocalprotectinuse.get_name_leafdata());
    if (mplstunnelname.is_set || is_set(mplstunnelname.operation)) leaf_name_data.push_back(mplstunnelname.get_name_leafdata());
    if (mplstunneloperstatus.is_set || is_set(mplstunneloperstatus.operation)) leaf_name_data.push_back(mplstunneloperstatus.get_name_leafdata());
    if (mplstunnelowner.is_set || is_set(mplstunnelowner.operation)) leaf_name_data.push_back(mplstunnelowner.get_name_leafdata());
    if (mplstunnelpathchanges.is_set || is_set(mplstunnelpathchanges.operation)) leaf_name_data.push_back(mplstunnelpathchanges.get_name_leafdata());
    if (mplstunnelpathinuse.is_set || is_set(mplstunnelpathinuse.operation)) leaf_name_data.push_back(mplstunnelpathinuse.get_name_leafdata());
    if (mplstunnelperfbytes.is_set || is_set(mplstunnelperfbytes.operation)) leaf_name_data.push_back(mplstunnelperfbytes.get_name_leafdata());
    if (mplstunnelperferrors.is_set || is_set(mplstunnelperferrors.operation)) leaf_name_data.push_back(mplstunnelperferrors.get_name_leafdata());
    if (mplstunnelperfhcbytes.is_set || is_set(mplstunnelperfhcbytes.operation)) leaf_name_data.push_back(mplstunnelperfhcbytes.get_name_leafdata());
    if (mplstunnelperfhcpackets.is_set || is_set(mplstunnelperfhcpackets.operation)) leaf_name_data.push_back(mplstunnelperfhcpackets.get_name_leafdata());
    if (mplstunnelperfpackets.is_set || is_set(mplstunnelperfpackets.operation)) leaf_name_data.push_back(mplstunnelperfpackets.get_name_leafdata());
    if (mplstunnelprimaryinstance.is_set || is_set(mplstunnelprimaryinstance.operation)) leaf_name_data.push_back(mplstunnelprimaryinstance.get_name_leafdata());
    if (mplstunnelprimaryuptime.is_set || is_set(mplstunnelprimaryuptime.operation)) leaf_name_data.push_back(mplstunnelprimaryuptime.get_name_leafdata());
    if (mplstunnelresourcepointer.is_set || is_set(mplstunnelresourcepointer.operation)) leaf_name_data.push_back(mplstunnelresourcepointer.get_name_leafdata());
    if (mplstunnelrole.is_set || is_set(mplstunnelrole.operation)) leaf_name_data.push_back(mplstunnelrole.get_name_leafdata());
    if (mplstunnelrowstatus.is_set || is_set(mplstunnelrowstatus.operation)) leaf_name_data.push_back(mplstunnelrowstatus.get_name_leafdata());
    if (mplstunnelsessionattributes.is_set || is_set(mplstunnelsessionattributes.operation)) leaf_name_data.push_back(mplstunnelsessionattributes.get_name_leafdata());
    if (mplstunnelsetupprio.is_set || is_set(mplstunnelsetupprio.operation)) leaf_name_data.push_back(mplstunnelsetupprio.get_name_leafdata());
    if (mplstunnelsignallingproto.is_set || is_set(mplstunnelsignallingproto.operation)) leaf_name_data.push_back(mplstunnelsignallingproto.get_name_leafdata());
    if (mplstunnelstatetransitions.is_set || is_set(mplstunnelstatetransitions.operation)) leaf_name_data.push_back(mplstunnelstatetransitions.get_name_leafdata());
    if (mplstunnelstoragetype.is_set || is_set(mplstunnelstoragetype.operation)) leaf_name_data.push_back(mplstunnelstoragetype.get_name_leafdata());
    if (mplstunneltotaluptime.is_set || is_set(mplstunneltotaluptime.operation)) leaf_name_data.push_back(mplstunneltotaluptime.get_name_leafdata());
    if (mplstunnelxcpointer.is_set || is_set(mplstunnelxcpointer.operation)) leaf_name_data.push_back(mplstunnelxcpointer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunneltable::Mplstunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunneltable::Mplstunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplstunneltable::Mplstunnelentry::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "mplsTunnelAdminStatus")
    {
        mplstunneladminstatus = value;
    }
    if(value_path == "mplsTunnelARHopTableIndex")
    {
        mplstunnelarhoptableindex = value;
    }
    if(value_path == "mplsTunnelCHopTableIndex")
    {
        mplstunnelchoptableindex = value;
    }
    if(value_path == "mplsTunnelCreationTime")
    {
        mplstunnelcreationtime = value;
    }
    if(value_path == "mplsTunnelDescr")
    {
        mplstunneldescr = value;
    }
    if(value_path == "mplsTunnelExcludeAnyAffinity")
    {
        mplstunnelexcludeanyaffinity = value;
    }
    if(value_path == "mplsTunnelHoldingPrio")
    {
        mplstunnelholdingprio = value;
    }
    if(value_path == "mplsTunnelHopTableIndex")
    {
        mplstunnelhoptableindex = value;
    }
    if(value_path == "mplsTunnelIfIndex")
    {
        mplstunnelifindex = value;
    }
    if(value_path == "mplsTunnelIncludeAllAffinity")
    {
        mplstunnelincludeallaffinity = value;
    }
    if(value_path == "mplsTunnelIncludeAnyAffinity")
    {
        mplstunnelincludeanyaffinity = value;
    }
    if(value_path == "mplsTunnelInstancePriority")
    {
        mplstunnelinstancepriority = value;
    }
    if(value_path == "mplsTunnelInstanceUpTime")
    {
        mplstunnelinstanceuptime = value;
    }
    if(value_path == "mplsTunnelIsIf")
    {
        mplstunnelisif = value;
    }
    if(value_path == "mplsTunnelLastPathChange")
    {
        mplstunnellastpathchange = value;
    }
    if(value_path == "mplsTunnelLocalProtectInUse")
    {
        mplstunnellocalprotectinuse = value;
    }
    if(value_path == "mplsTunnelName")
    {
        mplstunnelname = value;
    }
    if(value_path == "mplsTunnelOperStatus")
    {
        mplstunneloperstatus = value;
    }
    if(value_path == "mplsTunnelOwner")
    {
        mplstunnelowner = value;
    }
    if(value_path == "mplsTunnelPathChanges")
    {
        mplstunnelpathchanges = value;
    }
    if(value_path == "mplsTunnelPathInUse")
    {
        mplstunnelpathinuse = value;
    }
    if(value_path == "mplsTunnelPerfBytes")
    {
        mplstunnelperfbytes = value;
    }
    if(value_path == "mplsTunnelPerfErrors")
    {
        mplstunnelperferrors = value;
    }
    if(value_path == "mplsTunnelPerfHCBytes")
    {
        mplstunnelperfhcbytes = value;
    }
    if(value_path == "mplsTunnelPerfHCPackets")
    {
        mplstunnelperfhcpackets = value;
    }
    if(value_path == "mplsTunnelPerfPackets")
    {
        mplstunnelperfpackets = value;
    }
    if(value_path == "mplsTunnelPrimaryInstance")
    {
        mplstunnelprimaryinstance = value;
    }
    if(value_path == "mplsTunnelPrimaryUpTime")
    {
        mplstunnelprimaryuptime = value;
    }
    if(value_path == "mplsTunnelResourcePointer")
    {
        mplstunnelresourcepointer = value;
    }
    if(value_path == "mplsTunnelRole")
    {
        mplstunnelrole = value;
    }
    if(value_path == "mplsTunnelRowStatus")
    {
        mplstunnelrowstatus = value;
    }
    if(value_path == "mplsTunnelSessionAttributes")
    {
        mplstunnelsessionattributes[value] = true;
    }
    if(value_path == "mplsTunnelSetupPrio")
    {
        mplstunnelsetupprio = value;
    }
    if(value_path == "mplsTunnelSignallingProto")
    {
        mplstunnelsignallingproto = value;
    }
    if(value_path == "mplsTunnelStateTransitions")
    {
        mplstunnelstatetransitions = value;
    }
    if(value_path == "mplsTunnelStorageType")
    {
        mplstunnelstoragetype = value;
    }
    if(value_path == "mplsTunnelTotalUpTime")
    {
        mplstunneltotaluptime = value;
    }
    if(value_path == "mplsTunnelXCPointer")
    {
        mplstunnelxcpointer = value;
    }
}

MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhoptable()
{
    yang_name = "mplsTunnelHopTable"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplstunnelhoptable::~Mplstunnelhoptable()
{
}

bool MplsTeStdMib::Mplstunnelhoptable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelhopentry.size(); index++)
    {
        if(mplstunnelhopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStdMib::Mplstunnelhoptable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelhopentry.size(); index++)
    {
        if(mplstunnelhopentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStdMib::Mplstunnelhoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelHopTable";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelhoptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelhoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelHopEntry")
    {
        for(auto const & c : mplstunnelhopentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry>();
        c->parent = this;
        mplstunnelhopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelhoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelhopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStdMib::Mplstunnelhoptable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhopentry()
    :
    mplstunnelhoplistindex{YType::uint32, "mplsTunnelHopListIndex"},
    mplstunnelhoppathoptionindex{YType::uint32, "mplsTunnelHopPathOptionIndex"},
    mplstunnelhopindex{YType::uint32, "mplsTunnelHopIndex"},
    mplstunnelhopaddrtype{YType::enumeration, "mplsTunnelHopAddrType"},
    mplstunnelhopaddrunnum{YType::str, "mplsTunnelHopAddrUnnum"},
    mplstunnelhopasnumber{YType::str, "mplsTunnelHopAsNumber"},
    mplstunnelhopentrypathcomp{YType::enumeration, "mplsTunnelHopEntryPathComp"},
    mplstunnelhopinclude{YType::boolean, "mplsTunnelHopInclude"},
    mplstunnelhopipaddr{YType::str, "mplsTunnelHopIpAddr"},
    mplstunnelhopipprefixlen{YType::uint32, "mplsTunnelHopIpPrefixLen"},
    mplstunnelhoplspid{YType::str, "mplsTunnelHopLspId"},
    mplstunnelhoppathoptionname{YType::str, "mplsTunnelHopPathOptionName"},
    mplstunnelhoprowstatus{YType::enumeration, "mplsTunnelHopRowStatus"},
    mplstunnelhopstoragetype{YType::enumeration, "mplsTunnelHopStorageType"},
    mplstunnelhoptype{YType::enumeration, "mplsTunnelHopType"}
{
    yang_name = "mplsTunnelHopEntry"; yang_parent_name = "mplsTunnelHopTable";
}

MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::~Mplstunnelhopentry()
{
}

bool MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::has_data() const
{
    return mplstunnelhoplistindex.is_set
	|| mplstunnelhoppathoptionindex.is_set
	|| mplstunnelhopindex.is_set
	|| mplstunnelhopaddrtype.is_set
	|| mplstunnelhopaddrunnum.is_set
	|| mplstunnelhopasnumber.is_set
	|| mplstunnelhopentrypathcomp.is_set
	|| mplstunnelhopinclude.is_set
	|| mplstunnelhopipaddr.is_set
	|| mplstunnelhopipprefixlen.is_set
	|| mplstunnelhoplspid.is_set
	|| mplstunnelhoppathoptionname.is_set
	|| mplstunnelhoprowstatus.is_set
	|| mplstunnelhopstoragetype.is_set
	|| mplstunnelhoptype.is_set;
}

bool MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelhoplistindex.operation)
	|| is_set(mplstunnelhoppathoptionindex.operation)
	|| is_set(mplstunnelhopindex.operation)
	|| is_set(mplstunnelhopaddrtype.operation)
	|| is_set(mplstunnelhopaddrunnum.operation)
	|| is_set(mplstunnelhopasnumber.operation)
	|| is_set(mplstunnelhopentrypathcomp.operation)
	|| is_set(mplstunnelhopinclude.operation)
	|| is_set(mplstunnelhopipaddr.operation)
	|| is_set(mplstunnelhopipprefixlen.operation)
	|| is_set(mplstunnelhoplspid.operation)
	|| is_set(mplstunnelhoppathoptionname.operation)
	|| is_set(mplstunnelhoprowstatus.operation)
	|| is_set(mplstunnelhopstoragetype.operation)
	|| is_set(mplstunnelhoptype.operation);
}

std::string MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelHopEntry" <<"[mplsTunnelHopListIndex='" <<mplstunnelhoplistindex <<"']" <<"[mplsTunnelHopPathOptionIndex='" <<mplstunnelhoppathoptionindex <<"']" <<"[mplsTunnelHopIndex='" <<mplstunnelhopindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelHopTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelhoplistindex.is_set || is_set(mplstunnelhoplistindex.operation)) leaf_name_data.push_back(mplstunnelhoplistindex.get_name_leafdata());
    if (mplstunnelhoppathoptionindex.is_set || is_set(mplstunnelhoppathoptionindex.operation)) leaf_name_data.push_back(mplstunnelhoppathoptionindex.get_name_leafdata());
    if (mplstunnelhopindex.is_set || is_set(mplstunnelhopindex.operation)) leaf_name_data.push_back(mplstunnelhopindex.get_name_leafdata());
    if (mplstunnelhopaddrtype.is_set || is_set(mplstunnelhopaddrtype.operation)) leaf_name_data.push_back(mplstunnelhopaddrtype.get_name_leafdata());
    if (mplstunnelhopaddrunnum.is_set || is_set(mplstunnelhopaddrunnum.operation)) leaf_name_data.push_back(mplstunnelhopaddrunnum.get_name_leafdata());
    if (mplstunnelhopasnumber.is_set || is_set(mplstunnelhopasnumber.operation)) leaf_name_data.push_back(mplstunnelhopasnumber.get_name_leafdata());
    if (mplstunnelhopentrypathcomp.is_set || is_set(mplstunnelhopentrypathcomp.operation)) leaf_name_data.push_back(mplstunnelhopentrypathcomp.get_name_leafdata());
    if (mplstunnelhopinclude.is_set || is_set(mplstunnelhopinclude.operation)) leaf_name_data.push_back(mplstunnelhopinclude.get_name_leafdata());
    if (mplstunnelhopipaddr.is_set || is_set(mplstunnelhopipaddr.operation)) leaf_name_data.push_back(mplstunnelhopipaddr.get_name_leafdata());
    if (mplstunnelhopipprefixlen.is_set || is_set(mplstunnelhopipprefixlen.operation)) leaf_name_data.push_back(mplstunnelhopipprefixlen.get_name_leafdata());
    if (mplstunnelhoplspid.is_set || is_set(mplstunnelhoplspid.operation)) leaf_name_data.push_back(mplstunnelhoplspid.get_name_leafdata());
    if (mplstunnelhoppathoptionname.is_set || is_set(mplstunnelhoppathoptionname.operation)) leaf_name_data.push_back(mplstunnelhoppathoptionname.get_name_leafdata());
    if (mplstunnelhoprowstatus.is_set || is_set(mplstunnelhoprowstatus.operation)) leaf_name_data.push_back(mplstunnelhoprowstatus.get_name_leafdata());
    if (mplstunnelhopstoragetype.is_set || is_set(mplstunnelhopstoragetype.operation)) leaf_name_data.push_back(mplstunnelhopstoragetype.get_name_leafdata());
    if (mplstunnelhoptype.is_set || is_set(mplstunnelhoptype.operation)) leaf_name_data.push_back(mplstunnelhoptype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelHopListIndex")
    {
        mplstunnelhoplistindex = value;
    }
    if(value_path == "mplsTunnelHopPathOptionIndex")
    {
        mplstunnelhoppathoptionindex = value;
    }
    if(value_path == "mplsTunnelHopIndex")
    {
        mplstunnelhopindex = value;
    }
    if(value_path == "mplsTunnelHopAddrType")
    {
        mplstunnelhopaddrtype = value;
    }
    if(value_path == "mplsTunnelHopAddrUnnum")
    {
        mplstunnelhopaddrunnum = value;
    }
    if(value_path == "mplsTunnelHopAsNumber")
    {
        mplstunnelhopasnumber = value;
    }
    if(value_path == "mplsTunnelHopEntryPathComp")
    {
        mplstunnelhopentrypathcomp = value;
    }
    if(value_path == "mplsTunnelHopInclude")
    {
        mplstunnelhopinclude = value;
    }
    if(value_path == "mplsTunnelHopIpAddr")
    {
        mplstunnelhopipaddr = value;
    }
    if(value_path == "mplsTunnelHopIpPrefixLen")
    {
        mplstunnelhopipprefixlen = value;
    }
    if(value_path == "mplsTunnelHopLspId")
    {
        mplstunnelhoplspid = value;
    }
    if(value_path == "mplsTunnelHopPathOptionName")
    {
        mplstunnelhoppathoptionname = value;
    }
    if(value_path == "mplsTunnelHopRowStatus")
    {
        mplstunnelhoprowstatus = value;
    }
    if(value_path == "mplsTunnelHopStorageType")
    {
        mplstunnelhopstoragetype = value;
    }
    if(value_path == "mplsTunnelHopType")
    {
        mplstunnelhoptype = value;
    }
}

MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourcetable()
{
    yang_name = "mplsTunnelResourceTable"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplstunnelresourcetable::~Mplstunnelresourcetable()
{
}

bool MplsTeStdMib::Mplstunnelresourcetable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelresourceentry.size(); index++)
    {
        if(mplstunnelresourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStdMib::Mplstunnelresourcetable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelresourceentry.size(); index++)
    {
        if(mplstunnelresourceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStdMib::Mplstunnelresourcetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelResourceTable";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelresourcetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelresourcetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelResourceEntry")
    {
        for(auto const & c : mplstunnelresourceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry>();
        c->parent = this;
        mplstunnelresourceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelresourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelresourceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStdMib::Mplstunnelresourcetable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::Mplstunnelresourceentry()
    :
    mplstunnelresourceindex{YType::uint32, "mplsTunnelResourceIndex"},
    mplstunnelresourceexburstsize{YType::uint32, "mplsTunnelResourceExBurstSize"},
    mplstunnelresourcefrequency{YType::enumeration, "mplsTunnelResourceFrequency"},
    mplstunnelresourcemaxburstsize{YType::uint32, "mplsTunnelResourceMaxBurstSize"},
    mplstunnelresourcemaxrate{YType::uint32, "mplsTunnelResourceMaxRate"},
    mplstunnelresourcemeanburstsize{YType::uint32, "mplsTunnelResourceMeanBurstSize"},
    mplstunnelresourcemeanrate{YType::uint32, "mplsTunnelResourceMeanRate"},
    mplstunnelresourcerowstatus{YType::enumeration, "mplsTunnelResourceRowStatus"},
    mplstunnelresourcestoragetype{YType::enumeration, "mplsTunnelResourceStorageType"},
    mplstunnelresourceweight{YType::uint32, "mplsTunnelResourceWeight"}
{
    yang_name = "mplsTunnelResourceEntry"; yang_parent_name = "mplsTunnelResourceTable";
}

MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::~Mplstunnelresourceentry()
{
}

bool MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::has_data() const
{
    return mplstunnelresourceindex.is_set
	|| mplstunnelresourceexburstsize.is_set
	|| mplstunnelresourcefrequency.is_set
	|| mplstunnelresourcemaxburstsize.is_set
	|| mplstunnelresourcemaxrate.is_set
	|| mplstunnelresourcemeanburstsize.is_set
	|| mplstunnelresourcemeanrate.is_set
	|| mplstunnelresourcerowstatus.is_set
	|| mplstunnelresourcestoragetype.is_set
	|| mplstunnelresourceweight.is_set;
}

bool MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelresourceindex.operation)
	|| is_set(mplstunnelresourceexburstsize.operation)
	|| is_set(mplstunnelresourcefrequency.operation)
	|| is_set(mplstunnelresourcemaxburstsize.operation)
	|| is_set(mplstunnelresourcemaxrate.operation)
	|| is_set(mplstunnelresourcemeanburstsize.operation)
	|| is_set(mplstunnelresourcemeanrate.operation)
	|| is_set(mplstunnelresourcerowstatus.operation)
	|| is_set(mplstunnelresourcestoragetype.operation)
	|| is_set(mplstunnelresourceweight.operation);
}

std::string MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelResourceEntry" <<"[mplsTunnelResourceIndex='" <<mplstunnelresourceindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelResourceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelresourceindex.is_set || is_set(mplstunnelresourceindex.operation)) leaf_name_data.push_back(mplstunnelresourceindex.get_name_leafdata());
    if (mplstunnelresourceexburstsize.is_set || is_set(mplstunnelresourceexburstsize.operation)) leaf_name_data.push_back(mplstunnelresourceexburstsize.get_name_leafdata());
    if (mplstunnelresourcefrequency.is_set || is_set(mplstunnelresourcefrequency.operation)) leaf_name_data.push_back(mplstunnelresourcefrequency.get_name_leafdata());
    if (mplstunnelresourcemaxburstsize.is_set || is_set(mplstunnelresourcemaxburstsize.operation)) leaf_name_data.push_back(mplstunnelresourcemaxburstsize.get_name_leafdata());
    if (mplstunnelresourcemaxrate.is_set || is_set(mplstunnelresourcemaxrate.operation)) leaf_name_data.push_back(mplstunnelresourcemaxrate.get_name_leafdata());
    if (mplstunnelresourcemeanburstsize.is_set || is_set(mplstunnelresourcemeanburstsize.operation)) leaf_name_data.push_back(mplstunnelresourcemeanburstsize.get_name_leafdata());
    if (mplstunnelresourcemeanrate.is_set || is_set(mplstunnelresourcemeanrate.operation)) leaf_name_data.push_back(mplstunnelresourcemeanrate.get_name_leafdata());
    if (mplstunnelresourcerowstatus.is_set || is_set(mplstunnelresourcerowstatus.operation)) leaf_name_data.push_back(mplstunnelresourcerowstatus.get_name_leafdata());
    if (mplstunnelresourcestoragetype.is_set || is_set(mplstunnelresourcestoragetype.operation)) leaf_name_data.push_back(mplstunnelresourcestoragetype.get_name_leafdata());
    if (mplstunnelresourceweight.is_set || is_set(mplstunnelresourceweight.operation)) leaf_name_data.push_back(mplstunnelresourceweight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex = value;
    }
    if(value_path == "mplsTunnelResourceExBurstSize")
    {
        mplstunnelresourceexburstsize = value;
    }
    if(value_path == "mplsTunnelResourceFrequency")
    {
        mplstunnelresourcefrequency = value;
    }
    if(value_path == "mplsTunnelResourceMaxBurstSize")
    {
        mplstunnelresourcemaxburstsize = value;
    }
    if(value_path == "mplsTunnelResourceMaxRate")
    {
        mplstunnelresourcemaxrate = value;
    }
    if(value_path == "mplsTunnelResourceMeanBurstSize")
    {
        mplstunnelresourcemeanburstsize = value;
    }
    if(value_path == "mplsTunnelResourceMeanRate")
    {
        mplstunnelresourcemeanrate = value;
    }
    if(value_path == "mplsTunnelResourceRowStatus")
    {
        mplstunnelresourcerowstatus = value;
    }
    if(value_path == "mplsTunnelResourceStorageType")
    {
        mplstunnelresourcestoragetype = value;
    }
    if(value_path == "mplsTunnelResourceWeight")
    {
        mplstunnelresourceweight = value;
    }
}

MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhoptable()
{
    yang_name = "mplsTunnelARHopTable"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplstunnelarhoptable::~Mplstunnelarhoptable()
{
}

bool MplsTeStdMib::Mplstunnelarhoptable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelarhopentry.size(); index++)
    {
        if(mplstunnelarhopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStdMib::Mplstunnelarhoptable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelarhopentry.size(); index++)
    {
        if(mplstunnelarhopentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStdMib::Mplstunnelarhoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelARHopTable";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelarhoptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelarhoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelARHopEntry")
    {
        for(auto const & c : mplstunnelarhopentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry>();
        c->parent = this;
        mplstunnelarhopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelarhoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelarhopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStdMib::Mplstunnelarhoptable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::Mplstunnelarhopentry()
    :
    mplstunnelarhoplistindex{YType::uint32, "mplsTunnelARHopListIndex"},
    mplstunnelarhopindex{YType::uint32, "mplsTunnelARHopIndex"},
    mplstunnelarhopaddrtype{YType::enumeration, "mplsTunnelARHopAddrType"},
    mplstunnelarhopaddrunnum{YType::str, "mplsTunnelARHopAddrUnnum"},
    mplstunnelarhopipaddr{YType::str, "mplsTunnelARHopIpAddr"},
    mplstunnelarhoplspid{YType::str, "mplsTunnelARHopLspId"}
{
    yang_name = "mplsTunnelARHopEntry"; yang_parent_name = "mplsTunnelARHopTable";
}

MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::~Mplstunnelarhopentry()
{
}

bool MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::has_data() const
{
    return mplstunnelarhoplistindex.is_set
	|| mplstunnelarhopindex.is_set
	|| mplstunnelarhopaddrtype.is_set
	|| mplstunnelarhopaddrunnum.is_set
	|| mplstunnelarhopipaddr.is_set
	|| mplstunnelarhoplspid.is_set;
}

bool MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelarhoplistindex.operation)
	|| is_set(mplstunnelarhopindex.operation)
	|| is_set(mplstunnelarhopaddrtype.operation)
	|| is_set(mplstunnelarhopaddrunnum.operation)
	|| is_set(mplstunnelarhopipaddr.operation)
	|| is_set(mplstunnelarhoplspid.operation);
}

std::string MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelARHopEntry" <<"[mplsTunnelARHopListIndex='" <<mplstunnelarhoplistindex <<"']" <<"[mplsTunnelARHopIndex='" <<mplstunnelarhopindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelARHopTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelarhoplistindex.is_set || is_set(mplstunnelarhoplistindex.operation)) leaf_name_data.push_back(mplstunnelarhoplistindex.get_name_leafdata());
    if (mplstunnelarhopindex.is_set || is_set(mplstunnelarhopindex.operation)) leaf_name_data.push_back(mplstunnelarhopindex.get_name_leafdata());
    if (mplstunnelarhopaddrtype.is_set || is_set(mplstunnelarhopaddrtype.operation)) leaf_name_data.push_back(mplstunnelarhopaddrtype.get_name_leafdata());
    if (mplstunnelarhopaddrunnum.is_set || is_set(mplstunnelarhopaddrunnum.operation)) leaf_name_data.push_back(mplstunnelarhopaddrunnum.get_name_leafdata());
    if (mplstunnelarhopipaddr.is_set || is_set(mplstunnelarhopipaddr.operation)) leaf_name_data.push_back(mplstunnelarhopipaddr.get_name_leafdata());
    if (mplstunnelarhoplspid.is_set || is_set(mplstunnelarhoplspid.operation)) leaf_name_data.push_back(mplstunnelarhoplspid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplstunnelarhoptable::Mplstunnelarhopentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelARHopListIndex")
    {
        mplstunnelarhoplistindex = value;
    }
    if(value_path == "mplsTunnelARHopIndex")
    {
        mplstunnelarhopindex = value;
    }
    if(value_path == "mplsTunnelARHopAddrType")
    {
        mplstunnelarhopaddrtype = value;
    }
    if(value_path == "mplsTunnelARHopAddrUnnum")
    {
        mplstunnelarhopaddrunnum = value;
    }
    if(value_path == "mplsTunnelARHopIpAddr")
    {
        mplstunnelarhopipaddr = value;
    }
    if(value_path == "mplsTunnelARHopLspId")
    {
        mplstunnelarhoplspid = value;
    }
}

MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchoptable()
{
    yang_name = "mplsTunnelCHopTable"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplstunnelchoptable::~Mplstunnelchoptable()
{
}

bool MplsTeStdMib::Mplstunnelchoptable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelchopentry.size(); index++)
    {
        if(mplstunnelchopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStdMib::Mplstunnelchoptable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelchopentry.size(); index++)
    {
        if(mplstunnelchopentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStdMib::Mplstunnelchoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCHopTable";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelchoptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelchoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelCHopEntry")
    {
        for(auto const & c : mplstunnelchopentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry>();
        c->parent = this;
        mplstunnelchopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelchoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelchopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStdMib::Mplstunnelchoptable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::Mplstunnelchopentry()
    :
    mplstunnelchoplistindex{YType::uint32, "mplsTunnelCHopListIndex"},
    mplstunnelchopindex{YType::uint32, "mplsTunnelCHopIndex"},
    mplstunnelchopaddrtype{YType::enumeration, "mplsTunnelCHopAddrType"},
    mplstunnelchopaddrunnum{YType::str, "mplsTunnelCHopAddrUnnum"},
    mplstunnelchopasnumber{YType::str, "mplsTunnelCHopAsNumber"},
    mplstunnelchopipaddr{YType::str, "mplsTunnelCHopIpAddr"},
    mplstunnelchopipprefixlen{YType::uint32, "mplsTunnelCHopIpPrefixLen"},
    mplstunnelchoplspid{YType::str, "mplsTunnelCHopLspId"},
    mplstunnelchoptype{YType::enumeration, "mplsTunnelCHopType"}
{
    yang_name = "mplsTunnelCHopEntry"; yang_parent_name = "mplsTunnelCHopTable";
}

MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::~Mplstunnelchopentry()
{
}

bool MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::has_data() const
{
    return mplstunnelchoplistindex.is_set
	|| mplstunnelchopindex.is_set
	|| mplstunnelchopaddrtype.is_set
	|| mplstunnelchopaddrunnum.is_set
	|| mplstunnelchopasnumber.is_set
	|| mplstunnelchopipaddr.is_set
	|| mplstunnelchopipprefixlen.is_set
	|| mplstunnelchoplspid.is_set
	|| mplstunnelchoptype.is_set;
}

bool MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelchoplistindex.operation)
	|| is_set(mplstunnelchopindex.operation)
	|| is_set(mplstunnelchopaddrtype.operation)
	|| is_set(mplstunnelchopaddrunnum.operation)
	|| is_set(mplstunnelchopasnumber.operation)
	|| is_set(mplstunnelchopipaddr.operation)
	|| is_set(mplstunnelchopipprefixlen.operation)
	|| is_set(mplstunnelchoplspid.operation)
	|| is_set(mplstunnelchoptype.operation);
}

std::string MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCHopEntry" <<"[mplsTunnelCHopListIndex='" <<mplstunnelchoplistindex <<"']" <<"[mplsTunnelCHopIndex='" <<mplstunnelchopindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelCHopTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelchoplistindex.is_set || is_set(mplstunnelchoplistindex.operation)) leaf_name_data.push_back(mplstunnelchoplistindex.get_name_leafdata());
    if (mplstunnelchopindex.is_set || is_set(mplstunnelchopindex.operation)) leaf_name_data.push_back(mplstunnelchopindex.get_name_leafdata());
    if (mplstunnelchopaddrtype.is_set || is_set(mplstunnelchopaddrtype.operation)) leaf_name_data.push_back(mplstunnelchopaddrtype.get_name_leafdata());
    if (mplstunnelchopaddrunnum.is_set || is_set(mplstunnelchopaddrunnum.operation)) leaf_name_data.push_back(mplstunnelchopaddrunnum.get_name_leafdata());
    if (mplstunnelchopasnumber.is_set || is_set(mplstunnelchopasnumber.operation)) leaf_name_data.push_back(mplstunnelchopasnumber.get_name_leafdata());
    if (mplstunnelchopipaddr.is_set || is_set(mplstunnelchopipaddr.operation)) leaf_name_data.push_back(mplstunnelchopipaddr.get_name_leafdata());
    if (mplstunnelchopipprefixlen.is_set || is_set(mplstunnelchopipprefixlen.operation)) leaf_name_data.push_back(mplstunnelchopipprefixlen.get_name_leafdata());
    if (mplstunnelchoplspid.is_set || is_set(mplstunnelchoplspid.operation)) leaf_name_data.push_back(mplstunnelchoplspid.get_name_leafdata());
    if (mplstunnelchoptype.is_set || is_set(mplstunnelchoptype.operation)) leaf_name_data.push_back(mplstunnelchoptype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelCHopListIndex")
    {
        mplstunnelchoplistindex = value;
    }
    if(value_path == "mplsTunnelCHopIndex")
    {
        mplstunnelchopindex = value;
    }
    if(value_path == "mplsTunnelCHopAddrType")
    {
        mplstunnelchopaddrtype = value;
    }
    if(value_path == "mplsTunnelCHopAddrUnnum")
    {
        mplstunnelchopaddrunnum = value;
    }
    if(value_path == "mplsTunnelCHopAsNumber")
    {
        mplstunnelchopasnumber = value;
    }
    if(value_path == "mplsTunnelCHopIpAddr")
    {
        mplstunnelchopipaddr = value;
    }
    if(value_path == "mplsTunnelCHopIpPrefixLen")
    {
        mplstunnelchopipprefixlen = value;
    }
    if(value_path == "mplsTunnelCHopLspId")
    {
        mplstunnelchoplspid = value;
    }
    if(value_path == "mplsTunnelCHopType")
    {
        mplstunnelchoptype = value;
    }
}

MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldprestable()
{
    yang_name = "mplsTunnelCRLDPResTable"; yang_parent_name = "MPLS-TE-STD-MIB";
}

MplsTeStdMib::Mplstunnelcrldprestable::~Mplstunnelcrldprestable()
{
}

bool MplsTeStdMib::Mplstunnelcrldprestable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelcrldpresentry.size(); index++)
    {
        if(mplstunnelcrldpresentry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStdMib::Mplstunnelcrldprestable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelcrldpresentry.size(); index++)
    {
        if(mplstunnelcrldpresentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStdMib::Mplstunnelcrldprestable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCRLDPResTable";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelcrldprestable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelcrldprestable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelCRLDPResEntry")
    {
        for(auto const & c : mplstunnelcrldpresentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry>();
        c->parent = this;
        mplstunnelcrldpresentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelcrldprestable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelcrldpresentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStdMib::Mplstunnelcrldprestable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::Mplstunnelcrldpresentry()
    :
    mplstunnelresourceindex{YType::str, "mplsTunnelResourceIndex"},
    mplstunnelcrldpresexburstsize{YType::uint32, "mplsTunnelCRLDPResExBurstSize"},
    mplstunnelcrldpresflags{YType::uint32, "mplsTunnelCRLDPResFlags"},
    mplstunnelcrldpresfrequency{YType::enumeration, "mplsTunnelCRLDPResFrequency"},
    mplstunnelcrldpresmeanburstsize{YType::uint32, "mplsTunnelCRLDPResMeanBurstSize"},
    mplstunnelcrldpresrowstatus{YType::enumeration, "mplsTunnelCRLDPResRowStatus"},
    mplstunnelcrldpresstoragetype{YType::enumeration, "mplsTunnelCRLDPResStorageType"},
    mplstunnelcrldpresweight{YType::uint32, "mplsTunnelCRLDPResWeight"}
{
    yang_name = "mplsTunnelCRLDPResEntry"; yang_parent_name = "mplsTunnelCRLDPResTable";
}

MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::~Mplstunnelcrldpresentry()
{
}

bool MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::has_data() const
{
    return mplstunnelresourceindex.is_set
	|| mplstunnelcrldpresexburstsize.is_set
	|| mplstunnelcrldpresflags.is_set
	|| mplstunnelcrldpresfrequency.is_set
	|| mplstunnelcrldpresmeanburstsize.is_set
	|| mplstunnelcrldpresrowstatus.is_set
	|| mplstunnelcrldpresstoragetype.is_set
	|| mplstunnelcrldpresweight.is_set;
}

bool MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::has_operation() const
{
    return is_set(operation)
	|| is_set(mplstunnelresourceindex.operation)
	|| is_set(mplstunnelcrldpresexburstsize.operation)
	|| is_set(mplstunnelcrldpresflags.operation)
	|| is_set(mplstunnelcrldpresfrequency.operation)
	|| is_set(mplstunnelcrldpresmeanburstsize.operation)
	|| is_set(mplstunnelcrldpresrowstatus.operation)
	|| is_set(mplstunnelcrldpresstoragetype.operation)
	|| is_set(mplstunnelcrldpresweight.operation);
}

std::string MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCRLDPResEntry" <<"[mplsTunnelResourceIndex='" <<mplstunnelresourceindex <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelCRLDPResTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelresourceindex.is_set || is_set(mplstunnelresourceindex.operation)) leaf_name_data.push_back(mplstunnelresourceindex.get_name_leafdata());
    if (mplstunnelcrldpresexburstsize.is_set || is_set(mplstunnelcrldpresexburstsize.operation)) leaf_name_data.push_back(mplstunnelcrldpresexburstsize.get_name_leafdata());
    if (mplstunnelcrldpresflags.is_set || is_set(mplstunnelcrldpresflags.operation)) leaf_name_data.push_back(mplstunnelcrldpresflags.get_name_leafdata());
    if (mplstunnelcrldpresfrequency.is_set || is_set(mplstunnelcrldpresfrequency.operation)) leaf_name_data.push_back(mplstunnelcrldpresfrequency.get_name_leafdata());
    if (mplstunnelcrldpresmeanburstsize.is_set || is_set(mplstunnelcrldpresmeanburstsize.operation)) leaf_name_data.push_back(mplstunnelcrldpresmeanburstsize.get_name_leafdata());
    if (mplstunnelcrldpresrowstatus.is_set || is_set(mplstunnelcrldpresrowstatus.operation)) leaf_name_data.push_back(mplstunnelcrldpresrowstatus.get_name_leafdata());
    if (mplstunnelcrldpresstoragetype.is_set || is_set(mplstunnelcrldpresstoragetype.operation)) leaf_name_data.push_back(mplstunnelcrldpresstoragetype.get_name_leafdata());
    if (mplstunnelcrldpresweight.is_set || is_set(mplstunnelcrldpresweight.operation)) leaf_name_data.push_back(mplstunnelcrldpresweight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex = value;
    }
    if(value_path == "mplsTunnelCRLDPResExBurstSize")
    {
        mplstunnelcrldpresexburstsize = value;
    }
    if(value_path == "mplsTunnelCRLDPResFlags")
    {
        mplstunnelcrldpresflags = value;
    }
    if(value_path == "mplsTunnelCRLDPResFrequency")
    {
        mplstunnelcrldpresfrequency = value;
    }
    if(value_path == "mplsTunnelCRLDPResMeanBurstSize")
    {
        mplstunnelcrldpresmeanburstsize = value;
    }
    if(value_path == "mplsTunnelCRLDPResRowStatus")
    {
        mplstunnelcrldpresrowstatus = value;
    }
    if(value_path == "mplsTunnelCRLDPResStorageType")
    {
        mplstunnelcrldpresstoragetype = value;
    }
    if(value_path == "mplsTunnelCRLDPResWeight")
    {
        mplstunnelcrldpresweight = value;
    }
}

const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelroleEnum::head {1, "head"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelroleEnum::transit {2, "transit"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelroleEnum::tail {3, "tail"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelroleEnum::headTail {4, "headTail"};

const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelsignallingprotoEnum::none {1, "none"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelsignallingprotoEnum::rsvp {2, "rsvp"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelsignallingprotoEnum::crldp {3, "crldp"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunnelsignallingprotoEnum::other {4, "other"};

const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneladminstatusEnum::up {1, "up"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneladminstatusEnum::down {2, "down"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneladminstatusEnum::testing {3, "testing"};

const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum::up {1, "up"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum::down {2, "down"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum::testing {3, "testing"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum::unknown {4, "unknown"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum::dormant {5, "dormant"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum::notPresent {6, "notPresent"};
const Enum::YLeaf MplsTeStdMib::Mplstunneltable::Mplstunnelentry::MplstunneloperstatusEnum::lowerLayerDown {7, "lowerLayerDown"};

const Enum::YLeaf MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::MplstunnelhoptypeEnum::strict {1, "strict"};
const Enum::YLeaf MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::MplstunnelhoptypeEnum::loose {2, "loose"};

const Enum::YLeaf MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::MplstunnelhopentrypathcompEnum::dynamic {1, "dynamic"};
const Enum::YLeaf MplsTeStdMib::Mplstunnelhoptable::Mplstunnelhopentry::MplstunnelhopentrypathcompEnum::explicit_ {2, "explicit"};

const Enum::YLeaf MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::MplstunnelresourcefrequencyEnum::unspecified {1, "unspecified"};
const Enum::YLeaf MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::MplstunnelresourcefrequencyEnum::frequent {2, "frequent"};
const Enum::YLeaf MplsTeStdMib::Mplstunnelresourcetable::Mplstunnelresourceentry::MplstunnelresourcefrequencyEnum::veryFrequent {3, "veryFrequent"};

const Enum::YLeaf MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::MplstunnelchoptypeEnum::strict {1, "strict"};
const Enum::YLeaf MplsTeStdMib::Mplstunnelchoptable::Mplstunnelchopentry::MplstunnelchoptypeEnum::loose {2, "loose"};

const Enum::YLeaf MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::MplstunnelcrldpresfrequencyEnum::unspecified {1, "unspecified"};
const Enum::YLeaf MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::MplstunnelcrldpresfrequencyEnum::frequent {2, "frequent"};
const Enum::YLeaf MplsTeStdMib::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::MplstunnelcrldpresfrequencyEnum::veryFrequent {3, "veryFrequent"};


}
}

