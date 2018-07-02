
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TE_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_TE_STD_MIB {

MPLSTESTDMIB::MPLSTESTDMIB()
    :
    mplstescalars(std::make_shared<MPLSTESTDMIB::MplsTeScalars>())
    , mplsteobjects(std::make_shared<MPLSTESTDMIB::MplsTeObjects>())
    , mplstunneltable(std::make_shared<MPLSTESTDMIB::MplsTunnelTable>())
    , mplstunnelhoptable(std::make_shared<MPLSTESTDMIB::MplsTunnelHopTable>())
    , mplstunnelresourcetable(std::make_shared<MPLSTESTDMIB::MplsTunnelResourceTable>())
    , mplstunnelarhoptable(std::make_shared<MPLSTESTDMIB::MplsTunnelARHopTable>())
    , mplstunnelchoptable(std::make_shared<MPLSTESTDMIB::MplsTunnelCHopTable>())
    , mplstunnelcrldprestable(std::make_shared<MPLSTESTDMIB::MplsTunnelCRLDPResTable>())
{
    mplstescalars->parent = this;
    mplsteobjects->parent = this;
    mplstunneltable->parent = this;
    mplstunnelhoptable->parent = this;
    mplstunnelresourcetable->parent = this;
    mplstunnelarhoptable->parent = this;
    mplstunnelchoptable->parent = this;
    mplstunnelcrldprestable->parent = this;

    yang_name = "MPLS-TE-STD-MIB"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

MPLSTESTDMIB::~MPLSTESTDMIB()
{
}

bool MPLSTESTDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (mplstescalars !=  nullptr && mplstescalars->has_data())
	|| (mplsteobjects !=  nullptr && mplsteobjects->has_data())
	|| (mplstunneltable !=  nullptr && mplstunneltable->has_data())
	|| (mplstunnelhoptable !=  nullptr && mplstunnelhoptable->has_data())
	|| (mplstunnelresourcetable !=  nullptr && mplstunnelresourcetable->has_data())
	|| (mplstunnelarhoptable !=  nullptr && mplstunnelarhoptable->has_data())
	|| (mplstunnelchoptable !=  nullptr && mplstunnelchoptable->has_data())
	|| (mplstunnelcrldprestable !=  nullptr && mplstunnelcrldprestable->has_data());
}

bool MPLSTESTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mplstescalars !=  nullptr && mplstescalars->has_operation())
	|| (mplsteobjects !=  nullptr && mplsteobjects->has_operation())
	|| (mplstunneltable !=  nullptr && mplstunneltable->has_operation())
	|| (mplstunnelhoptable !=  nullptr && mplstunnelhoptable->has_operation())
	|| (mplstunnelresourcetable !=  nullptr && mplstunnelresourcetable->has_operation())
	|| (mplstunnelarhoptable !=  nullptr && mplstunnelarhoptable->has_operation())
	|| (mplstunnelchoptable !=  nullptr && mplstunnelchoptable->has_operation())
	|| (mplstunnelcrldprestable !=  nullptr && mplstunnelcrldprestable->has_operation());
}

std::string MPLSTESTDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTeScalars")
    {
        if(mplstescalars == nullptr)
        {
            mplstescalars = std::make_shared<MPLSTESTDMIB::MplsTeScalars>();
        }
        return mplstescalars;
    }

    if(child_yang_name == "mplsTeObjects")
    {
        if(mplsteobjects == nullptr)
        {
            mplsteobjects = std::make_shared<MPLSTESTDMIB::MplsTeObjects>();
        }
        return mplsteobjects;
    }

    if(child_yang_name == "mplsTunnelTable")
    {
        if(mplstunneltable == nullptr)
        {
            mplstunneltable = std::make_shared<MPLSTESTDMIB::MplsTunnelTable>();
        }
        return mplstunneltable;
    }

    if(child_yang_name == "mplsTunnelHopTable")
    {
        if(mplstunnelhoptable == nullptr)
        {
            mplstunnelhoptable = std::make_shared<MPLSTESTDMIB::MplsTunnelHopTable>();
        }
        return mplstunnelhoptable;
    }

    if(child_yang_name == "mplsTunnelResourceTable")
    {
        if(mplstunnelresourcetable == nullptr)
        {
            mplstunnelresourcetable = std::make_shared<MPLSTESTDMIB::MplsTunnelResourceTable>();
        }
        return mplstunnelresourcetable;
    }

    if(child_yang_name == "mplsTunnelARHopTable")
    {
        if(mplstunnelarhoptable == nullptr)
        {
            mplstunnelarhoptable = std::make_shared<MPLSTESTDMIB::MplsTunnelARHopTable>();
        }
        return mplstunnelarhoptable;
    }

    if(child_yang_name == "mplsTunnelCHopTable")
    {
        if(mplstunnelchoptable == nullptr)
        {
            mplstunnelchoptable = std::make_shared<MPLSTESTDMIB::MplsTunnelCHopTable>();
        }
        return mplstunnelchoptable;
    }

    if(child_yang_name == "mplsTunnelCRLDPResTable")
    {
        if(mplstunnelcrldprestable == nullptr)
        {
            mplstunnelcrldprestable = std::make_shared<MPLSTESTDMIB::MplsTunnelCRLDPResTable>();
        }
        return mplstunnelcrldprestable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mplstescalars != nullptr)
    {
        children["mplsTeScalars"] = mplstescalars;
    }

    if(mplsteobjects != nullptr)
    {
        children["mplsTeObjects"] = mplsteobjects;
    }

    if(mplstunneltable != nullptr)
    {
        children["mplsTunnelTable"] = mplstunneltable;
    }

    if(mplstunnelhoptable != nullptr)
    {
        children["mplsTunnelHopTable"] = mplstunnelhoptable;
    }

    if(mplstunnelresourcetable != nullptr)
    {
        children["mplsTunnelResourceTable"] = mplstunnelresourcetable;
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

    return children;
}

void MPLSTESTDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> MPLSTESTDMIB::clone_ptr() const
{
    return std::make_shared<MPLSTESTDMIB>();
}

std::string MPLSTESTDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MPLSTESTDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MPLSTESTDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> MPLSTESTDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool MPLSTESTDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTeScalars" || name == "mplsTeObjects" || name == "mplsTunnelTable" || name == "mplsTunnelHopTable" || name == "mplsTunnelResourceTable" || name == "mplsTunnelARHopTable" || name == "mplsTunnelCHopTable" || name == "mplsTunnelCRLDPResTable")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTeScalars::MplsTeScalars()
    :
    mplstunnelconfigured{YType::uint32, "mplsTunnelConfigured"},
    mplstunnelactive{YType::uint32, "mplsTunnelActive"},
    mplstunneltedistproto{YType::bits, "mplsTunnelTEDistProto"},
    mplstunnelmaxhops{YType::uint32, "mplsTunnelMaxHops"},
    mplstunnelnotificationmaxrate{YType::uint32, "mplsTunnelNotificationMaxRate"}
{

    yang_name = "mplsTeScalars"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTeScalars::~MplsTeScalars()
{
}

bool MPLSTESTDMIB::MplsTeScalars::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelconfigured.is_set
	|| mplstunnelactive.is_set
	|| mplstunneltedistproto.is_set
	|| mplstunnelmaxhops.is_set
	|| mplstunnelnotificationmaxrate.is_set;
}

bool MPLSTESTDMIB::MplsTeScalars::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelconfigured.yfilter)
	|| ydk::is_set(mplstunnelactive.yfilter)
	|| ydk::is_set(mplstunneltedistproto.yfilter)
	|| ydk::is_set(mplstunnelmaxhops.yfilter)
	|| ydk::is_set(mplstunnelnotificationmaxrate.yfilter);
}

std::string MPLSTESTDMIB::MplsTeScalars::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTeScalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTeScalars";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTeScalars::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelconfigured.is_set || is_set(mplstunnelconfigured.yfilter)) leaf_name_data.push_back(mplstunnelconfigured.get_name_leafdata());
    if (mplstunnelactive.is_set || is_set(mplstunnelactive.yfilter)) leaf_name_data.push_back(mplstunnelactive.get_name_leafdata());
    if (mplstunneltedistproto.is_set || is_set(mplstunneltedistproto.yfilter)) leaf_name_data.push_back(mplstunneltedistproto.get_name_leafdata());
    if (mplstunnelmaxhops.is_set || is_set(mplstunnelmaxhops.yfilter)) leaf_name_data.push_back(mplstunnelmaxhops.get_name_leafdata());
    if (mplstunnelnotificationmaxrate.is_set || is_set(mplstunnelnotificationmaxrate.yfilter)) leaf_name_data.push_back(mplstunnelnotificationmaxrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTeScalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTeScalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTeScalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelConfigured")
    {
        mplstunnelconfigured = value;
        mplstunnelconfigured.value_namespace = name_space;
        mplstunnelconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelActive")
    {
        mplstunnelactive = value;
        mplstunnelactive.value_namespace = name_space;
        mplstunnelactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelTEDistProto")
    {
        mplstunneltedistproto[value] = true;
    }
    if(value_path == "mplsTunnelMaxHops")
    {
        mplstunnelmaxhops = value;
        mplstunnelmaxhops.value_namespace = name_space;
        mplstunnelmaxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelNotificationMaxRate")
    {
        mplstunnelnotificationmaxrate = value;
        mplstunnelnotificationmaxrate.value_namespace = name_space;
        mplstunnelnotificationmaxrate.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTeScalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelConfigured")
    {
        mplstunnelconfigured.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelActive")
    {
        mplstunnelactive.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelTEDistProto")
    {
        mplstunneltedistproto.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelMaxHops")
    {
        mplstunnelmaxhops.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelNotificationMaxRate")
    {
        mplstunnelnotificationmaxrate.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTeScalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelConfigured" || name == "mplsTunnelActive" || name == "mplsTunnelTEDistProto" || name == "mplsTunnelMaxHops" || name == "mplsTunnelNotificationMaxRate")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTeObjects::MplsTeObjects()
    :
    mplstunnelindexnext{YType::uint32, "mplsTunnelIndexNext"},
    mplstunnelhoplistindexnext{YType::uint32, "mplsTunnelHopListIndexNext"},
    mplstunnelresourceindexnext{YType::uint32, "mplsTunnelResourceIndexNext"},
    mplstunnelnotificationenable{YType::boolean, "mplsTunnelNotificationEnable"}
{

    yang_name = "mplsTeObjects"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTeObjects::~MplsTeObjects()
{
}

bool MPLSTESTDMIB::MplsTeObjects::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelindexnext.is_set
	|| mplstunnelhoplistindexnext.is_set
	|| mplstunnelresourceindexnext.is_set
	|| mplstunnelnotificationenable.is_set;
}

bool MPLSTESTDMIB::MplsTeObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelindexnext.yfilter)
	|| ydk::is_set(mplstunnelhoplistindexnext.yfilter)
	|| ydk::is_set(mplstunnelresourceindexnext.yfilter)
	|| ydk::is_set(mplstunnelnotificationenable.yfilter);
}

std::string MPLSTESTDMIB::MplsTeObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTeObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTeObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTeObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindexnext.is_set || is_set(mplstunnelindexnext.yfilter)) leaf_name_data.push_back(mplstunnelindexnext.get_name_leafdata());
    if (mplstunnelhoplistindexnext.is_set || is_set(mplstunnelhoplistindexnext.yfilter)) leaf_name_data.push_back(mplstunnelhoplistindexnext.get_name_leafdata());
    if (mplstunnelresourceindexnext.is_set || is_set(mplstunnelresourceindexnext.yfilter)) leaf_name_data.push_back(mplstunnelresourceindexnext.get_name_leafdata());
    if (mplstunnelnotificationenable.is_set || is_set(mplstunnelnotificationenable.yfilter)) leaf_name_data.push_back(mplstunnelnotificationenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTeObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTeObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTeObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelIndexNext")
    {
        mplstunnelindexnext = value;
        mplstunnelindexnext.value_namespace = name_space;
        mplstunnelindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopListIndexNext")
    {
        mplstunnelhoplistindexnext = value;
        mplstunnelhoplistindexnext.value_namespace = name_space;
        mplstunnelhoplistindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceIndexNext")
    {
        mplstunnelresourceindexnext = value;
        mplstunnelresourceindexnext.value_namespace = name_space;
        mplstunnelresourceindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelNotificationEnable")
    {
        mplstunnelnotificationenable = value;
        mplstunnelnotificationenable.value_namespace = name_space;
        mplstunnelnotificationenable.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTeObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelIndexNext")
    {
        mplstunnelindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopListIndexNext")
    {
        mplstunnelhoplistindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceIndexNext")
    {
        mplstunnelresourceindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelNotificationEnable")
    {
        mplstunnelnotificationenable.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTeObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelIndexNext" || name == "mplsTunnelHopListIndexNext" || name == "mplsTunnelResourceIndexNext" || name == "mplsTunnelNotificationEnable")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelTable::MplsTunnelTable()
    :
    mplstunnelentry(this, {"mplstunnelindex", "mplstunnelinstance", "mplstunnelingresslsrid", "mplstunnelegresslsrid"})
{

    yang_name = "mplsTunnelTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelTable::~MplsTunnelTable()
{
}

bool MPLSTESTDMIB::MplsTunnelTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplstunnelentry.len(); index++)
    {
        if(mplstunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::MplsTunnelTable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelentry.len(); index++)
    {
        if(mplstunnelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelEntry")
    {
        auto c = std::make_shared<MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry>();
        c->parent = this;
        mplstunnelentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplstunnelentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSTESTDMIB::MplsTunnelTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::MplsTunnelTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::MplsTunnelTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelEntry")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelEntry()
    :
    mplstunnelindex{YType::uint32, "mplsTunnelIndex"},
    mplstunnelinstance{YType::uint32, "mplsTunnelInstance"},
    mplstunnelingresslsrid{YType::uint32, "mplsTunnelIngressLSRId"},
    mplstunnelegresslsrid{YType::uint32, "mplsTunnelEgressLSRId"},
    mplstunnelname{YType::str, "mplsTunnelName"},
    mplstunneldescr{YType::str, "mplsTunnelDescr"},
    mplstunnelisif{YType::boolean, "mplsTunnelIsIf"},
    mplstunnelifindex{YType::int32, "mplsTunnelIfIndex"},
    mplstunnelowner{YType::enumeration, "mplsTunnelOwner"},
    mplstunnelrole{YType::enumeration, "mplsTunnelRole"},
    mplstunnelxcpointer{YType::str, "mplsTunnelXCPointer"},
    mplstunnelsignallingproto{YType::enumeration, "mplsTunnelSignallingProto"},
    mplstunnelsetupprio{YType::int32, "mplsTunnelSetupPrio"},
    mplstunnelholdingprio{YType::int32, "mplsTunnelHoldingPrio"},
    mplstunnelsessionattributes{YType::bits, "mplsTunnelSessionAttributes"},
    mplstunnellocalprotectinuse{YType::boolean, "mplsTunnelLocalProtectInUse"},
    mplstunnelresourcepointer{YType::str, "mplsTunnelResourcePointer"},
    mplstunnelprimaryinstance{YType::uint32, "mplsTunnelPrimaryInstance"},
    mplstunnelinstancepriority{YType::uint32, "mplsTunnelInstancePriority"},
    mplstunnelhoptableindex{YType::uint32, "mplsTunnelHopTableIndex"},
    mplstunnelpathinuse{YType::uint32, "mplsTunnelPathInUse"},
    mplstunnelarhoptableindex{YType::uint32, "mplsTunnelARHopTableIndex"},
    mplstunnelchoptableindex{YType::uint32, "mplsTunnelCHopTableIndex"},
    mplstunnelincludeanyaffinity{YType::uint32, "mplsTunnelIncludeAnyAffinity"},
    mplstunnelincludeallaffinity{YType::uint32, "mplsTunnelIncludeAllAffinity"},
    mplstunnelexcludeanyaffinity{YType::uint32, "mplsTunnelExcludeAnyAffinity"},
    mplstunneltotaluptime{YType::uint32, "mplsTunnelTotalUpTime"},
    mplstunnelinstanceuptime{YType::uint32, "mplsTunnelInstanceUpTime"},
    mplstunnelprimaryuptime{YType::uint32, "mplsTunnelPrimaryUpTime"},
    mplstunnelpathchanges{YType::uint32, "mplsTunnelPathChanges"},
    mplstunnellastpathchange{YType::uint32, "mplsTunnelLastPathChange"},
    mplstunnelcreationtime{YType::uint32, "mplsTunnelCreationTime"},
    mplstunnelstatetransitions{YType::uint32, "mplsTunnelStateTransitions"},
    mplstunneladminstatus{YType::enumeration, "mplsTunnelAdminStatus"},
    mplstunneloperstatus{YType::enumeration, "mplsTunnelOperStatus"},
    mplstunnelrowstatus{YType::enumeration, "mplsTunnelRowStatus"},
    mplstunnelstoragetype{YType::enumeration, "mplsTunnelStorageType"},
    mplstunnelperfpackets{YType::uint32, "mplsTunnelPerfPackets"},
    mplstunnelperfhcpackets{YType::uint64, "mplsTunnelPerfHCPackets"},
    mplstunnelperferrors{YType::uint32, "mplsTunnelPerfErrors"},
    mplstunnelperfbytes{YType::uint32, "mplsTunnelPerfBytes"},
    mplstunnelperfhcbytes{YType::uint64, "mplsTunnelPerfHCBytes"}
{

    yang_name = "mplsTunnelEntry"; yang_parent_name = "mplsTunnelTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::~MplsTunnelEntry()
{
}

bool MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelindex.is_set
	|| mplstunnelinstance.is_set
	|| mplstunnelingresslsrid.is_set
	|| mplstunnelegresslsrid.is_set
	|| mplstunnelname.is_set
	|| mplstunneldescr.is_set
	|| mplstunnelisif.is_set
	|| mplstunnelifindex.is_set
	|| mplstunnelowner.is_set
	|| mplstunnelrole.is_set
	|| mplstunnelxcpointer.is_set
	|| mplstunnelsignallingproto.is_set
	|| mplstunnelsetupprio.is_set
	|| mplstunnelholdingprio.is_set
	|| mplstunnelsessionattributes.is_set
	|| mplstunnellocalprotectinuse.is_set
	|| mplstunnelresourcepointer.is_set
	|| mplstunnelprimaryinstance.is_set
	|| mplstunnelinstancepriority.is_set
	|| mplstunnelhoptableindex.is_set
	|| mplstunnelpathinuse.is_set
	|| mplstunnelarhoptableindex.is_set
	|| mplstunnelchoptableindex.is_set
	|| mplstunnelincludeanyaffinity.is_set
	|| mplstunnelincludeallaffinity.is_set
	|| mplstunnelexcludeanyaffinity.is_set
	|| mplstunneltotaluptime.is_set
	|| mplstunnelinstanceuptime.is_set
	|| mplstunnelprimaryuptime.is_set
	|| mplstunnelpathchanges.is_set
	|| mplstunnellastpathchange.is_set
	|| mplstunnelcreationtime.is_set
	|| mplstunnelstatetransitions.is_set
	|| mplstunneladminstatus.is_set
	|| mplstunneloperstatus.is_set
	|| mplstunnelrowstatus.is_set
	|| mplstunnelstoragetype.is_set
	|| mplstunnelperfpackets.is_set
	|| mplstunnelperfhcpackets.is_set
	|| mplstunnelperferrors.is_set
	|| mplstunnelperfbytes.is_set
	|| mplstunnelperfhcbytes.is_set;
}

bool MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelindex.yfilter)
	|| ydk::is_set(mplstunnelinstance.yfilter)
	|| ydk::is_set(mplstunnelingresslsrid.yfilter)
	|| ydk::is_set(mplstunnelegresslsrid.yfilter)
	|| ydk::is_set(mplstunnelname.yfilter)
	|| ydk::is_set(mplstunneldescr.yfilter)
	|| ydk::is_set(mplstunnelisif.yfilter)
	|| ydk::is_set(mplstunnelifindex.yfilter)
	|| ydk::is_set(mplstunnelowner.yfilter)
	|| ydk::is_set(mplstunnelrole.yfilter)
	|| ydk::is_set(mplstunnelxcpointer.yfilter)
	|| ydk::is_set(mplstunnelsignallingproto.yfilter)
	|| ydk::is_set(mplstunnelsetupprio.yfilter)
	|| ydk::is_set(mplstunnelholdingprio.yfilter)
	|| ydk::is_set(mplstunnelsessionattributes.yfilter)
	|| ydk::is_set(mplstunnellocalprotectinuse.yfilter)
	|| ydk::is_set(mplstunnelresourcepointer.yfilter)
	|| ydk::is_set(mplstunnelprimaryinstance.yfilter)
	|| ydk::is_set(mplstunnelinstancepriority.yfilter)
	|| ydk::is_set(mplstunnelhoptableindex.yfilter)
	|| ydk::is_set(mplstunnelpathinuse.yfilter)
	|| ydk::is_set(mplstunnelarhoptableindex.yfilter)
	|| ydk::is_set(mplstunnelchoptableindex.yfilter)
	|| ydk::is_set(mplstunnelincludeanyaffinity.yfilter)
	|| ydk::is_set(mplstunnelincludeallaffinity.yfilter)
	|| ydk::is_set(mplstunnelexcludeanyaffinity.yfilter)
	|| ydk::is_set(mplstunneltotaluptime.yfilter)
	|| ydk::is_set(mplstunnelinstanceuptime.yfilter)
	|| ydk::is_set(mplstunnelprimaryuptime.yfilter)
	|| ydk::is_set(mplstunnelpathchanges.yfilter)
	|| ydk::is_set(mplstunnellastpathchange.yfilter)
	|| ydk::is_set(mplstunnelcreationtime.yfilter)
	|| ydk::is_set(mplstunnelstatetransitions.yfilter)
	|| ydk::is_set(mplstunneladminstatus.yfilter)
	|| ydk::is_set(mplstunneloperstatus.yfilter)
	|| ydk::is_set(mplstunnelrowstatus.yfilter)
	|| ydk::is_set(mplstunnelstoragetype.yfilter)
	|| ydk::is_set(mplstunnelperfpackets.yfilter)
	|| ydk::is_set(mplstunnelperfhcpackets.yfilter)
	|| ydk::is_set(mplstunnelperferrors.yfilter)
	|| ydk::is_set(mplstunnelperfbytes.yfilter)
	|| ydk::is_set(mplstunnelperfhcbytes.yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelEntry";
    ADD_KEY_TOKEN(mplstunnelindex, "mplsTunnelIndex");
    ADD_KEY_TOKEN(mplstunnelinstance, "mplsTunnelInstance");
    ADD_KEY_TOKEN(mplstunnelingresslsrid, "mplsTunnelIngressLSRId");
    ADD_KEY_TOKEN(mplstunnelegresslsrid, "mplsTunnelEgressLSRId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.yfilter)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.yfilter)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (mplstunnelname.is_set || is_set(mplstunnelname.yfilter)) leaf_name_data.push_back(mplstunnelname.get_name_leafdata());
    if (mplstunneldescr.is_set || is_set(mplstunneldescr.yfilter)) leaf_name_data.push_back(mplstunneldescr.get_name_leafdata());
    if (mplstunnelisif.is_set || is_set(mplstunnelisif.yfilter)) leaf_name_data.push_back(mplstunnelisif.get_name_leafdata());
    if (mplstunnelifindex.is_set || is_set(mplstunnelifindex.yfilter)) leaf_name_data.push_back(mplstunnelifindex.get_name_leafdata());
    if (mplstunnelowner.is_set || is_set(mplstunnelowner.yfilter)) leaf_name_data.push_back(mplstunnelowner.get_name_leafdata());
    if (mplstunnelrole.is_set || is_set(mplstunnelrole.yfilter)) leaf_name_data.push_back(mplstunnelrole.get_name_leafdata());
    if (mplstunnelxcpointer.is_set || is_set(mplstunnelxcpointer.yfilter)) leaf_name_data.push_back(mplstunnelxcpointer.get_name_leafdata());
    if (mplstunnelsignallingproto.is_set || is_set(mplstunnelsignallingproto.yfilter)) leaf_name_data.push_back(mplstunnelsignallingproto.get_name_leafdata());
    if (mplstunnelsetupprio.is_set || is_set(mplstunnelsetupprio.yfilter)) leaf_name_data.push_back(mplstunnelsetupprio.get_name_leafdata());
    if (mplstunnelholdingprio.is_set || is_set(mplstunnelholdingprio.yfilter)) leaf_name_data.push_back(mplstunnelholdingprio.get_name_leafdata());
    if (mplstunnelsessionattributes.is_set || is_set(mplstunnelsessionattributes.yfilter)) leaf_name_data.push_back(mplstunnelsessionattributes.get_name_leafdata());
    if (mplstunnellocalprotectinuse.is_set || is_set(mplstunnellocalprotectinuse.yfilter)) leaf_name_data.push_back(mplstunnellocalprotectinuse.get_name_leafdata());
    if (mplstunnelresourcepointer.is_set || is_set(mplstunnelresourcepointer.yfilter)) leaf_name_data.push_back(mplstunnelresourcepointer.get_name_leafdata());
    if (mplstunnelprimaryinstance.is_set || is_set(mplstunnelprimaryinstance.yfilter)) leaf_name_data.push_back(mplstunnelprimaryinstance.get_name_leafdata());
    if (mplstunnelinstancepriority.is_set || is_set(mplstunnelinstancepriority.yfilter)) leaf_name_data.push_back(mplstunnelinstancepriority.get_name_leafdata());
    if (mplstunnelhoptableindex.is_set || is_set(mplstunnelhoptableindex.yfilter)) leaf_name_data.push_back(mplstunnelhoptableindex.get_name_leafdata());
    if (mplstunnelpathinuse.is_set || is_set(mplstunnelpathinuse.yfilter)) leaf_name_data.push_back(mplstunnelpathinuse.get_name_leafdata());
    if (mplstunnelarhoptableindex.is_set || is_set(mplstunnelarhoptableindex.yfilter)) leaf_name_data.push_back(mplstunnelarhoptableindex.get_name_leafdata());
    if (mplstunnelchoptableindex.is_set || is_set(mplstunnelchoptableindex.yfilter)) leaf_name_data.push_back(mplstunnelchoptableindex.get_name_leafdata());
    if (mplstunnelincludeanyaffinity.is_set || is_set(mplstunnelincludeanyaffinity.yfilter)) leaf_name_data.push_back(mplstunnelincludeanyaffinity.get_name_leafdata());
    if (mplstunnelincludeallaffinity.is_set || is_set(mplstunnelincludeallaffinity.yfilter)) leaf_name_data.push_back(mplstunnelincludeallaffinity.get_name_leafdata());
    if (mplstunnelexcludeanyaffinity.is_set || is_set(mplstunnelexcludeanyaffinity.yfilter)) leaf_name_data.push_back(mplstunnelexcludeanyaffinity.get_name_leafdata());
    if (mplstunneltotaluptime.is_set || is_set(mplstunneltotaluptime.yfilter)) leaf_name_data.push_back(mplstunneltotaluptime.get_name_leafdata());
    if (mplstunnelinstanceuptime.is_set || is_set(mplstunnelinstanceuptime.yfilter)) leaf_name_data.push_back(mplstunnelinstanceuptime.get_name_leafdata());
    if (mplstunnelprimaryuptime.is_set || is_set(mplstunnelprimaryuptime.yfilter)) leaf_name_data.push_back(mplstunnelprimaryuptime.get_name_leafdata());
    if (mplstunnelpathchanges.is_set || is_set(mplstunnelpathchanges.yfilter)) leaf_name_data.push_back(mplstunnelpathchanges.get_name_leafdata());
    if (mplstunnellastpathchange.is_set || is_set(mplstunnellastpathchange.yfilter)) leaf_name_data.push_back(mplstunnellastpathchange.get_name_leafdata());
    if (mplstunnelcreationtime.is_set || is_set(mplstunnelcreationtime.yfilter)) leaf_name_data.push_back(mplstunnelcreationtime.get_name_leafdata());
    if (mplstunnelstatetransitions.is_set || is_set(mplstunnelstatetransitions.yfilter)) leaf_name_data.push_back(mplstunnelstatetransitions.get_name_leafdata());
    if (mplstunneladminstatus.is_set || is_set(mplstunneladminstatus.yfilter)) leaf_name_data.push_back(mplstunneladminstatus.get_name_leafdata());
    if (mplstunneloperstatus.is_set || is_set(mplstunneloperstatus.yfilter)) leaf_name_data.push_back(mplstunneloperstatus.get_name_leafdata());
    if (mplstunnelrowstatus.is_set || is_set(mplstunnelrowstatus.yfilter)) leaf_name_data.push_back(mplstunnelrowstatus.get_name_leafdata());
    if (mplstunnelstoragetype.is_set || is_set(mplstunnelstoragetype.yfilter)) leaf_name_data.push_back(mplstunnelstoragetype.get_name_leafdata());
    if (mplstunnelperfpackets.is_set || is_set(mplstunnelperfpackets.yfilter)) leaf_name_data.push_back(mplstunnelperfpackets.get_name_leafdata());
    if (mplstunnelperfhcpackets.is_set || is_set(mplstunnelperfhcpackets.yfilter)) leaf_name_data.push_back(mplstunnelperfhcpackets.get_name_leafdata());
    if (mplstunnelperferrors.is_set || is_set(mplstunnelperferrors.yfilter)) leaf_name_data.push_back(mplstunnelperferrors.get_name_leafdata());
    if (mplstunnelperfbytes.is_set || is_set(mplstunnelperfbytes.yfilter)) leaf_name_data.push_back(mplstunnelperfbytes.get_name_leafdata());
    if (mplstunnelperfhcbytes.is_set || is_set(mplstunnelperfhcbytes.yfilter)) leaf_name_data.push_back(mplstunnelperfhcbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex = value;
        mplstunnelindex.value_namespace = name_space;
        mplstunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance = value;
        mplstunnelinstance.value_namespace = name_space;
        mplstunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid = value;
        mplstunnelingresslsrid.value_namespace = name_space;
        mplstunnelingresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid = value;
        mplstunnelegresslsrid.value_namespace = name_space;
        mplstunnelegresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelName")
    {
        mplstunnelname = value;
        mplstunnelname.value_namespace = name_space;
        mplstunnelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelDescr")
    {
        mplstunneldescr = value;
        mplstunneldescr.value_namespace = name_space;
        mplstunneldescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIsIf")
    {
        mplstunnelisif = value;
        mplstunnelisif.value_namespace = name_space;
        mplstunnelisif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIfIndex")
    {
        mplstunnelifindex = value;
        mplstunnelifindex.value_namespace = name_space;
        mplstunnelifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelOwner")
    {
        mplstunnelowner = value;
        mplstunnelowner.value_namespace = name_space;
        mplstunnelowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelRole")
    {
        mplstunnelrole = value;
        mplstunnelrole.value_namespace = name_space;
        mplstunnelrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelXCPointer")
    {
        mplstunnelxcpointer = value;
        mplstunnelxcpointer.value_namespace = name_space;
        mplstunnelxcpointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelSignallingProto")
    {
        mplstunnelsignallingproto = value;
        mplstunnelsignallingproto.value_namespace = name_space;
        mplstunnelsignallingproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelSetupPrio")
    {
        mplstunnelsetupprio = value;
        mplstunnelsetupprio.value_namespace = name_space;
        mplstunnelsetupprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHoldingPrio")
    {
        mplstunnelholdingprio = value;
        mplstunnelholdingprio.value_namespace = name_space;
        mplstunnelholdingprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelSessionAttributes")
    {
        mplstunnelsessionattributes[value] = true;
    }
    if(value_path == "mplsTunnelLocalProtectInUse")
    {
        mplstunnellocalprotectinuse = value;
        mplstunnellocalprotectinuse.value_namespace = name_space;
        mplstunnellocalprotectinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourcePointer")
    {
        mplstunnelresourcepointer = value;
        mplstunnelresourcepointer.value_namespace = name_space;
        mplstunnelresourcepointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPrimaryInstance")
    {
        mplstunnelprimaryinstance = value;
        mplstunnelprimaryinstance.value_namespace = name_space;
        mplstunnelprimaryinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstancePriority")
    {
        mplstunnelinstancepriority = value;
        mplstunnelinstancepriority.value_namespace = name_space;
        mplstunnelinstancepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopTableIndex")
    {
        mplstunnelhoptableindex = value;
        mplstunnelhoptableindex.value_namespace = name_space;
        mplstunnelhoptableindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPathInUse")
    {
        mplstunnelpathinuse = value;
        mplstunnelpathinuse.value_namespace = name_space;
        mplstunnelpathinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopTableIndex")
    {
        mplstunnelarhoptableindex = value;
        mplstunnelarhoptableindex.value_namespace = name_space;
        mplstunnelarhoptableindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopTableIndex")
    {
        mplstunnelchoptableindex = value;
        mplstunnelchoptableindex.value_namespace = name_space;
        mplstunnelchoptableindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIncludeAnyAffinity")
    {
        mplstunnelincludeanyaffinity = value;
        mplstunnelincludeanyaffinity.value_namespace = name_space;
        mplstunnelincludeanyaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIncludeAllAffinity")
    {
        mplstunnelincludeallaffinity = value;
        mplstunnelincludeallaffinity.value_namespace = name_space;
        mplstunnelincludeallaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelExcludeAnyAffinity")
    {
        mplstunnelexcludeanyaffinity = value;
        mplstunnelexcludeanyaffinity.value_namespace = name_space;
        mplstunnelexcludeanyaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelTotalUpTime")
    {
        mplstunneltotaluptime = value;
        mplstunneltotaluptime.value_namespace = name_space;
        mplstunneltotaluptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstanceUpTime")
    {
        mplstunnelinstanceuptime = value;
        mplstunnelinstanceuptime.value_namespace = name_space;
        mplstunnelinstanceuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPrimaryUpTime")
    {
        mplstunnelprimaryuptime = value;
        mplstunnelprimaryuptime.value_namespace = name_space;
        mplstunnelprimaryuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPathChanges")
    {
        mplstunnelpathchanges = value;
        mplstunnelpathchanges.value_namespace = name_space;
        mplstunnelpathchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelLastPathChange")
    {
        mplstunnellastpathchange = value;
        mplstunnellastpathchange.value_namespace = name_space;
        mplstunnellastpathchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCreationTime")
    {
        mplstunnelcreationtime = value;
        mplstunnelcreationtime.value_namespace = name_space;
        mplstunnelcreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelStateTransitions")
    {
        mplstunnelstatetransitions = value;
        mplstunnelstatetransitions.value_namespace = name_space;
        mplstunnelstatetransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelAdminStatus")
    {
        mplstunneladminstatus = value;
        mplstunneladminstatus.value_namespace = name_space;
        mplstunneladminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelOperStatus")
    {
        mplstunneloperstatus = value;
        mplstunneloperstatus.value_namespace = name_space;
        mplstunneloperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelRowStatus")
    {
        mplstunnelrowstatus = value;
        mplstunnelrowstatus.value_namespace = name_space;
        mplstunnelrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelStorageType")
    {
        mplstunnelstoragetype = value;
        mplstunnelstoragetype.value_namespace = name_space;
        mplstunnelstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfPackets")
    {
        mplstunnelperfpackets = value;
        mplstunnelperfpackets.value_namespace = name_space;
        mplstunnelperfpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfHCPackets")
    {
        mplstunnelperfhcpackets = value;
        mplstunnelperfhcpackets.value_namespace = name_space;
        mplstunnelperfhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfErrors")
    {
        mplstunnelperferrors = value;
        mplstunnelperferrors.value_namespace = name_space;
        mplstunnelperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfBytes")
    {
        mplstunnelperfbytes = value;
        mplstunnelperfbytes.value_namespace = name_space;
        mplstunnelperfbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfHCBytes")
    {
        mplstunnelperfhcbytes = value;
        mplstunnelperfhcbytes.value_namespace = name_space;
        mplstunnelperfhcbytes.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelIndex")
    {
        mplstunnelindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstance")
    {
        mplstunnelinstance.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIngressLSRId")
    {
        mplstunnelingresslsrid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelEgressLSRId")
    {
        mplstunnelegresslsrid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelName")
    {
        mplstunnelname.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelDescr")
    {
        mplstunneldescr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIsIf")
    {
        mplstunnelisif.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIfIndex")
    {
        mplstunnelifindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelOwner")
    {
        mplstunnelowner.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelRole")
    {
        mplstunnelrole.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelXCPointer")
    {
        mplstunnelxcpointer.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelSignallingProto")
    {
        mplstunnelsignallingproto.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelSetupPrio")
    {
        mplstunnelsetupprio.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHoldingPrio")
    {
        mplstunnelholdingprio.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelSessionAttributes")
    {
        mplstunnelsessionattributes.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelLocalProtectInUse")
    {
        mplstunnellocalprotectinuse.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourcePointer")
    {
        mplstunnelresourcepointer.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPrimaryInstance")
    {
        mplstunnelprimaryinstance.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstancePriority")
    {
        mplstunnelinstancepriority.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopTableIndex")
    {
        mplstunnelhoptableindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPathInUse")
    {
        mplstunnelpathinuse.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopTableIndex")
    {
        mplstunnelarhoptableindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopTableIndex")
    {
        mplstunnelchoptableindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIncludeAnyAffinity")
    {
        mplstunnelincludeanyaffinity.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIncludeAllAffinity")
    {
        mplstunnelincludeallaffinity.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelExcludeAnyAffinity")
    {
        mplstunnelexcludeanyaffinity.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelTotalUpTime")
    {
        mplstunneltotaluptime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstanceUpTime")
    {
        mplstunnelinstanceuptime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPrimaryUpTime")
    {
        mplstunnelprimaryuptime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPathChanges")
    {
        mplstunnelpathchanges.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelLastPathChange")
    {
        mplstunnellastpathchange.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCreationTime")
    {
        mplstunnelcreationtime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelStateTransitions")
    {
        mplstunnelstatetransitions.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelAdminStatus")
    {
        mplstunneladminstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelOperStatus")
    {
        mplstunneloperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelRowStatus")
    {
        mplstunnelrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelStorageType")
    {
        mplstunnelstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfPackets")
    {
        mplstunnelperfpackets.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfHCPackets")
    {
        mplstunnelperfhcpackets.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfErrors")
    {
        mplstunnelperferrors.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfBytes")
    {
        mplstunnelperfbytes.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfHCBytes")
    {
        mplstunnelperfhcbytes.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelIndex" || name == "mplsTunnelInstance" || name == "mplsTunnelIngressLSRId" || name == "mplsTunnelEgressLSRId" || name == "mplsTunnelName" || name == "mplsTunnelDescr" || name == "mplsTunnelIsIf" || name == "mplsTunnelIfIndex" || name == "mplsTunnelOwner" || name == "mplsTunnelRole" || name == "mplsTunnelXCPointer" || name == "mplsTunnelSignallingProto" || name == "mplsTunnelSetupPrio" || name == "mplsTunnelHoldingPrio" || name == "mplsTunnelSessionAttributes" || name == "mplsTunnelLocalProtectInUse" || name == "mplsTunnelResourcePointer" || name == "mplsTunnelPrimaryInstance" || name == "mplsTunnelInstancePriority" || name == "mplsTunnelHopTableIndex" || name == "mplsTunnelPathInUse" || name == "mplsTunnelARHopTableIndex" || name == "mplsTunnelCHopTableIndex" || name == "mplsTunnelIncludeAnyAffinity" || name == "mplsTunnelIncludeAllAffinity" || name == "mplsTunnelExcludeAnyAffinity" || name == "mplsTunnelTotalUpTime" || name == "mplsTunnelInstanceUpTime" || name == "mplsTunnelPrimaryUpTime" || name == "mplsTunnelPathChanges" || name == "mplsTunnelLastPathChange" || name == "mplsTunnelCreationTime" || name == "mplsTunnelStateTransitions" || name == "mplsTunnelAdminStatus" || name == "mplsTunnelOperStatus" || name == "mplsTunnelRowStatus" || name == "mplsTunnelStorageType" || name == "mplsTunnelPerfPackets" || name == "mplsTunnelPerfHCPackets" || name == "mplsTunnelPerfErrors" || name == "mplsTunnelPerfBytes" || name == "mplsTunnelPerfHCBytes")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopTable()
    :
    mplstunnelhopentry(this, {"mplstunnelhoplistindex", "mplstunnelhoppathoptionindex", "mplstunnelhopindex"})
{

    yang_name = "mplsTunnelHopTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelHopTable::~MplsTunnelHopTable()
{
}

bool MPLSTESTDMIB::MplsTunnelHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplstunnelhopentry.len(); index++)
    {
        if(mplstunnelhopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::MplsTunnelHopTable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelhopentry.len(); index++)
    {
        if(mplstunnelhopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelHopTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelHopEntry")
    {
        auto c = std::make_shared<MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry>();
        c->parent = this;
        mplstunnelhopentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplstunnelhopentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSTESTDMIB::MplsTunnelHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::MplsTunnelHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::MplsTunnelHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelHopEntry")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::MplsTunnelHopEntry()
    :
    mplstunnelhoplistindex{YType::uint32, "mplsTunnelHopListIndex"},
    mplstunnelhoppathoptionindex{YType::uint32, "mplsTunnelHopPathOptionIndex"},
    mplstunnelhopindex{YType::uint32, "mplsTunnelHopIndex"},
    mplstunnelhopaddrtype{YType::enumeration, "mplsTunnelHopAddrType"},
    mplstunnelhopipaddr{YType::str, "mplsTunnelHopIpAddr"},
    mplstunnelhopipprefixlen{YType::uint32, "mplsTunnelHopIpPrefixLen"},
    mplstunnelhopasnumber{YType::str, "mplsTunnelHopAsNumber"},
    mplstunnelhopaddrunnum{YType::str, "mplsTunnelHopAddrUnnum"},
    mplstunnelhoplspid{YType::str, "mplsTunnelHopLspId"},
    mplstunnelhoptype{YType::enumeration, "mplsTunnelHopType"},
    mplstunnelhopinclude{YType::boolean, "mplsTunnelHopInclude"},
    mplstunnelhoppathoptionname{YType::str, "mplsTunnelHopPathOptionName"},
    mplstunnelhopentrypathcomp{YType::enumeration, "mplsTunnelHopEntryPathComp"},
    mplstunnelhoprowstatus{YType::enumeration, "mplsTunnelHopRowStatus"},
    mplstunnelhopstoragetype{YType::enumeration, "mplsTunnelHopStorageType"}
{

    yang_name = "mplsTunnelHopEntry"; yang_parent_name = "mplsTunnelHopTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::~MplsTunnelHopEntry()
{
}

bool MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelhoplistindex.is_set
	|| mplstunnelhoppathoptionindex.is_set
	|| mplstunnelhopindex.is_set
	|| mplstunnelhopaddrtype.is_set
	|| mplstunnelhopipaddr.is_set
	|| mplstunnelhopipprefixlen.is_set
	|| mplstunnelhopasnumber.is_set
	|| mplstunnelhopaddrunnum.is_set
	|| mplstunnelhoplspid.is_set
	|| mplstunnelhoptype.is_set
	|| mplstunnelhopinclude.is_set
	|| mplstunnelhoppathoptionname.is_set
	|| mplstunnelhopentrypathcomp.is_set
	|| mplstunnelhoprowstatus.is_set
	|| mplstunnelhopstoragetype.is_set;
}

bool MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelhoplistindex.yfilter)
	|| ydk::is_set(mplstunnelhoppathoptionindex.yfilter)
	|| ydk::is_set(mplstunnelhopindex.yfilter)
	|| ydk::is_set(mplstunnelhopaddrtype.yfilter)
	|| ydk::is_set(mplstunnelhopipaddr.yfilter)
	|| ydk::is_set(mplstunnelhopipprefixlen.yfilter)
	|| ydk::is_set(mplstunnelhopasnumber.yfilter)
	|| ydk::is_set(mplstunnelhopaddrunnum.yfilter)
	|| ydk::is_set(mplstunnelhoplspid.yfilter)
	|| ydk::is_set(mplstunnelhoptype.yfilter)
	|| ydk::is_set(mplstunnelhopinclude.yfilter)
	|| ydk::is_set(mplstunnelhoppathoptionname.yfilter)
	|| ydk::is_set(mplstunnelhopentrypathcomp.yfilter)
	|| ydk::is_set(mplstunnelhoprowstatus.yfilter)
	|| ydk::is_set(mplstunnelhopstoragetype.yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelHopEntry";
    ADD_KEY_TOKEN(mplstunnelhoplistindex, "mplsTunnelHopListIndex");
    ADD_KEY_TOKEN(mplstunnelhoppathoptionindex, "mplsTunnelHopPathOptionIndex");
    ADD_KEY_TOKEN(mplstunnelhopindex, "mplsTunnelHopIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelhoplistindex.is_set || is_set(mplstunnelhoplistindex.yfilter)) leaf_name_data.push_back(mplstunnelhoplistindex.get_name_leafdata());
    if (mplstunnelhoppathoptionindex.is_set || is_set(mplstunnelhoppathoptionindex.yfilter)) leaf_name_data.push_back(mplstunnelhoppathoptionindex.get_name_leafdata());
    if (mplstunnelhopindex.is_set || is_set(mplstunnelhopindex.yfilter)) leaf_name_data.push_back(mplstunnelhopindex.get_name_leafdata());
    if (mplstunnelhopaddrtype.is_set || is_set(mplstunnelhopaddrtype.yfilter)) leaf_name_data.push_back(mplstunnelhopaddrtype.get_name_leafdata());
    if (mplstunnelhopipaddr.is_set || is_set(mplstunnelhopipaddr.yfilter)) leaf_name_data.push_back(mplstunnelhopipaddr.get_name_leafdata());
    if (mplstunnelhopipprefixlen.is_set || is_set(mplstunnelhopipprefixlen.yfilter)) leaf_name_data.push_back(mplstunnelhopipprefixlen.get_name_leafdata());
    if (mplstunnelhopasnumber.is_set || is_set(mplstunnelhopasnumber.yfilter)) leaf_name_data.push_back(mplstunnelhopasnumber.get_name_leafdata());
    if (mplstunnelhopaddrunnum.is_set || is_set(mplstunnelhopaddrunnum.yfilter)) leaf_name_data.push_back(mplstunnelhopaddrunnum.get_name_leafdata());
    if (mplstunnelhoplspid.is_set || is_set(mplstunnelhoplspid.yfilter)) leaf_name_data.push_back(mplstunnelhoplspid.get_name_leafdata());
    if (mplstunnelhoptype.is_set || is_set(mplstunnelhoptype.yfilter)) leaf_name_data.push_back(mplstunnelhoptype.get_name_leafdata());
    if (mplstunnelhopinclude.is_set || is_set(mplstunnelhopinclude.yfilter)) leaf_name_data.push_back(mplstunnelhopinclude.get_name_leafdata());
    if (mplstunnelhoppathoptionname.is_set || is_set(mplstunnelhoppathoptionname.yfilter)) leaf_name_data.push_back(mplstunnelhoppathoptionname.get_name_leafdata());
    if (mplstunnelhopentrypathcomp.is_set || is_set(mplstunnelhopentrypathcomp.yfilter)) leaf_name_data.push_back(mplstunnelhopentrypathcomp.get_name_leafdata());
    if (mplstunnelhoprowstatus.is_set || is_set(mplstunnelhoprowstatus.yfilter)) leaf_name_data.push_back(mplstunnelhoprowstatus.get_name_leafdata());
    if (mplstunnelhopstoragetype.is_set || is_set(mplstunnelhopstoragetype.yfilter)) leaf_name_data.push_back(mplstunnelhopstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelHopListIndex")
    {
        mplstunnelhoplistindex = value;
        mplstunnelhoplistindex.value_namespace = name_space;
        mplstunnelhoplistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopPathOptionIndex")
    {
        mplstunnelhoppathoptionindex = value;
        mplstunnelhoppathoptionindex.value_namespace = name_space;
        mplstunnelhoppathoptionindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopIndex")
    {
        mplstunnelhopindex = value;
        mplstunnelhopindex.value_namespace = name_space;
        mplstunnelhopindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopAddrType")
    {
        mplstunnelhopaddrtype = value;
        mplstunnelhopaddrtype.value_namespace = name_space;
        mplstunnelhopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopIpAddr")
    {
        mplstunnelhopipaddr = value;
        mplstunnelhopipaddr.value_namespace = name_space;
        mplstunnelhopipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopIpPrefixLen")
    {
        mplstunnelhopipprefixlen = value;
        mplstunnelhopipprefixlen.value_namespace = name_space;
        mplstunnelhopipprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopAsNumber")
    {
        mplstunnelhopasnumber = value;
        mplstunnelhopasnumber.value_namespace = name_space;
        mplstunnelhopasnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopAddrUnnum")
    {
        mplstunnelhopaddrunnum = value;
        mplstunnelhopaddrunnum.value_namespace = name_space;
        mplstunnelhopaddrunnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopLspId")
    {
        mplstunnelhoplspid = value;
        mplstunnelhoplspid.value_namespace = name_space;
        mplstunnelhoplspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopType")
    {
        mplstunnelhoptype = value;
        mplstunnelhoptype.value_namespace = name_space;
        mplstunnelhoptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopInclude")
    {
        mplstunnelhopinclude = value;
        mplstunnelhopinclude.value_namespace = name_space;
        mplstunnelhopinclude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopPathOptionName")
    {
        mplstunnelhoppathoptionname = value;
        mplstunnelhoppathoptionname.value_namespace = name_space;
        mplstunnelhoppathoptionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopEntryPathComp")
    {
        mplstunnelhopentrypathcomp = value;
        mplstunnelhopentrypathcomp.value_namespace = name_space;
        mplstunnelhopentrypathcomp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopRowStatus")
    {
        mplstunnelhoprowstatus = value;
        mplstunnelhoprowstatus.value_namespace = name_space;
        mplstunnelhoprowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopStorageType")
    {
        mplstunnelhopstoragetype = value;
        mplstunnelhopstoragetype.value_namespace = name_space;
        mplstunnelhopstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelHopListIndex")
    {
        mplstunnelhoplistindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopPathOptionIndex")
    {
        mplstunnelhoppathoptionindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopIndex")
    {
        mplstunnelhopindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopAddrType")
    {
        mplstunnelhopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopIpAddr")
    {
        mplstunnelhopipaddr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopIpPrefixLen")
    {
        mplstunnelhopipprefixlen.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopAsNumber")
    {
        mplstunnelhopasnumber.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopAddrUnnum")
    {
        mplstunnelhopaddrunnum.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopLspId")
    {
        mplstunnelhoplspid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopType")
    {
        mplstunnelhoptype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopInclude")
    {
        mplstunnelhopinclude.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopPathOptionName")
    {
        mplstunnelhoppathoptionname.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopEntryPathComp")
    {
        mplstunnelhopentrypathcomp.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopRowStatus")
    {
        mplstunnelhoprowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopStorageType")
    {
        mplstunnelhopstoragetype.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelHopListIndex" || name == "mplsTunnelHopPathOptionIndex" || name == "mplsTunnelHopIndex" || name == "mplsTunnelHopAddrType" || name == "mplsTunnelHopIpAddr" || name == "mplsTunnelHopIpPrefixLen" || name == "mplsTunnelHopAsNumber" || name == "mplsTunnelHopAddrUnnum" || name == "mplsTunnelHopLspId" || name == "mplsTunnelHopType" || name == "mplsTunnelHopInclude" || name == "mplsTunnelHopPathOptionName" || name == "mplsTunnelHopEntryPathComp" || name == "mplsTunnelHopRowStatus" || name == "mplsTunnelHopStorageType")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceTable()
    :
    mplstunnelresourceentry(this, {"mplstunnelresourceindex"})
{

    yang_name = "mplsTunnelResourceTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelResourceTable::~MplsTunnelResourceTable()
{
}

bool MPLSTESTDMIB::MplsTunnelResourceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplstunnelresourceentry.len(); index++)
    {
        if(mplstunnelresourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::MplsTunnelResourceTable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelresourceentry.len(); index++)
    {
        if(mplstunnelresourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelResourceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelResourceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelResourceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelResourceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelResourceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelResourceEntry")
    {
        auto c = std::make_shared<MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry>();
        c->parent = this;
        mplstunnelresourceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelResourceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplstunnelresourceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSTESTDMIB::MplsTunnelResourceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::MplsTunnelResourceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::MplsTunnelResourceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelResourceEntry")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::MplsTunnelResourceEntry()
    :
    mplstunnelresourceindex{YType::uint32, "mplsTunnelResourceIndex"},
    mplstunnelresourcemaxrate{YType::uint32, "mplsTunnelResourceMaxRate"},
    mplstunnelresourcemeanrate{YType::uint32, "mplsTunnelResourceMeanRate"},
    mplstunnelresourcemaxburstsize{YType::uint32, "mplsTunnelResourceMaxBurstSize"},
    mplstunnelresourcemeanburstsize{YType::uint32, "mplsTunnelResourceMeanBurstSize"},
    mplstunnelresourceexburstsize{YType::uint32, "mplsTunnelResourceExBurstSize"},
    mplstunnelresourcefrequency{YType::enumeration, "mplsTunnelResourceFrequency"},
    mplstunnelresourceweight{YType::uint32, "mplsTunnelResourceWeight"},
    mplstunnelresourcerowstatus{YType::enumeration, "mplsTunnelResourceRowStatus"},
    mplstunnelresourcestoragetype{YType::enumeration, "mplsTunnelResourceStorageType"}
{

    yang_name = "mplsTunnelResourceEntry"; yang_parent_name = "mplsTunnelResourceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::~MplsTunnelResourceEntry()
{
}

bool MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelresourceindex.is_set
	|| mplstunnelresourcemaxrate.is_set
	|| mplstunnelresourcemeanrate.is_set
	|| mplstunnelresourcemaxburstsize.is_set
	|| mplstunnelresourcemeanburstsize.is_set
	|| mplstunnelresourceexburstsize.is_set
	|| mplstunnelresourcefrequency.is_set
	|| mplstunnelresourceweight.is_set
	|| mplstunnelresourcerowstatus.is_set
	|| mplstunnelresourcestoragetype.is_set;
}

bool MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelresourceindex.yfilter)
	|| ydk::is_set(mplstunnelresourcemaxrate.yfilter)
	|| ydk::is_set(mplstunnelresourcemeanrate.yfilter)
	|| ydk::is_set(mplstunnelresourcemaxburstsize.yfilter)
	|| ydk::is_set(mplstunnelresourcemeanburstsize.yfilter)
	|| ydk::is_set(mplstunnelresourceexburstsize.yfilter)
	|| ydk::is_set(mplstunnelresourcefrequency.yfilter)
	|| ydk::is_set(mplstunnelresourceweight.yfilter)
	|| ydk::is_set(mplstunnelresourcerowstatus.yfilter)
	|| ydk::is_set(mplstunnelresourcestoragetype.yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelResourceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelResourceEntry";
    ADD_KEY_TOKEN(mplstunnelresourceindex, "mplsTunnelResourceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelresourceindex.is_set || is_set(mplstunnelresourceindex.yfilter)) leaf_name_data.push_back(mplstunnelresourceindex.get_name_leafdata());
    if (mplstunnelresourcemaxrate.is_set || is_set(mplstunnelresourcemaxrate.yfilter)) leaf_name_data.push_back(mplstunnelresourcemaxrate.get_name_leafdata());
    if (mplstunnelresourcemeanrate.is_set || is_set(mplstunnelresourcemeanrate.yfilter)) leaf_name_data.push_back(mplstunnelresourcemeanrate.get_name_leafdata());
    if (mplstunnelresourcemaxburstsize.is_set || is_set(mplstunnelresourcemaxburstsize.yfilter)) leaf_name_data.push_back(mplstunnelresourcemaxburstsize.get_name_leafdata());
    if (mplstunnelresourcemeanburstsize.is_set || is_set(mplstunnelresourcemeanburstsize.yfilter)) leaf_name_data.push_back(mplstunnelresourcemeanburstsize.get_name_leafdata());
    if (mplstunnelresourceexburstsize.is_set || is_set(mplstunnelresourceexburstsize.yfilter)) leaf_name_data.push_back(mplstunnelresourceexburstsize.get_name_leafdata());
    if (mplstunnelresourcefrequency.is_set || is_set(mplstunnelresourcefrequency.yfilter)) leaf_name_data.push_back(mplstunnelresourcefrequency.get_name_leafdata());
    if (mplstunnelresourceweight.is_set || is_set(mplstunnelresourceweight.yfilter)) leaf_name_data.push_back(mplstunnelresourceweight.get_name_leafdata());
    if (mplstunnelresourcerowstatus.is_set || is_set(mplstunnelresourcerowstatus.yfilter)) leaf_name_data.push_back(mplstunnelresourcerowstatus.get_name_leafdata());
    if (mplstunnelresourcestoragetype.is_set || is_set(mplstunnelresourcestoragetype.yfilter)) leaf_name_data.push_back(mplstunnelresourcestoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex = value;
        mplstunnelresourceindex.value_namespace = name_space;
        mplstunnelresourceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceMaxRate")
    {
        mplstunnelresourcemaxrate = value;
        mplstunnelresourcemaxrate.value_namespace = name_space;
        mplstunnelresourcemaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceMeanRate")
    {
        mplstunnelresourcemeanrate = value;
        mplstunnelresourcemeanrate.value_namespace = name_space;
        mplstunnelresourcemeanrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceMaxBurstSize")
    {
        mplstunnelresourcemaxburstsize = value;
        mplstunnelresourcemaxburstsize.value_namespace = name_space;
        mplstunnelresourcemaxburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceMeanBurstSize")
    {
        mplstunnelresourcemeanburstsize = value;
        mplstunnelresourcemeanburstsize.value_namespace = name_space;
        mplstunnelresourcemeanburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceExBurstSize")
    {
        mplstunnelresourceexburstsize = value;
        mplstunnelresourceexburstsize.value_namespace = name_space;
        mplstunnelresourceexburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceFrequency")
    {
        mplstunnelresourcefrequency = value;
        mplstunnelresourcefrequency.value_namespace = name_space;
        mplstunnelresourcefrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceWeight")
    {
        mplstunnelresourceweight = value;
        mplstunnelresourceweight.value_namespace = name_space;
        mplstunnelresourceweight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceRowStatus")
    {
        mplstunnelresourcerowstatus = value;
        mplstunnelresourcerowstatus.value_namespace = name_space;
        mplstunnelresourcerowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceStorageType")
    {
        mplstunnelresourcestoragetype = value;
        mplstunnelresourcestoragetype.value_namespace = name_space;
        mplstunnelresourcestoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMaxRate")
    {
        mplstunnelresourcemaxrate.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMeanRate")
    {
        mplstunnelresourcemeanrate.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMaxBurstSize")
    {
        mplstunnelresourcemaxburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMeanBurstSize")
    {
        mplstunnelresourcemeanburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceExBurstSize")
    {
        mplstunnelresourceexburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceFrequency")
    {
        mplstunnelresourcefrequency.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceWeight")
    {
        mplstunnelresourceweight.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceRowStatus")
    {
        mplstunnelresourcerowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceStorageType")
    {
        mplstunnelresourcestoragetype.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelResourceIndex" || name == "mplsTunnelResourceMaxRate" || name == "mplsTunnelResourceMeanRate" || name == "mplsTunnelResourceMaxBurstSize" || name == "mplsTunnelResourceMeanBurstSize" || name == "mplsTunnelResourceExBurstSize" || name == "mplsTunnelResourceFrequency" || name == "mplsTunnelResourceWeight" || name == "mplsTunnelResourceRowStatus" || name == "mplsTunnelResourceStorageType")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopTable()
    :
    mplstunnelarhopentry(this, {"mplstunnelarhoplistindex", "mplstunnelarhopindex"})
{

    yang_name = "mplsTunnelARHopTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelARHopTable::~MplsTunnelARHopTable()
{
}

bool MPLSTESTDMIB::MplsTunnelARHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplstunnelarhopentry.len(); index++)
    {
        if(mplstunnelarhopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::MplsTunnelARHopTable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelarhopentry.len(); index++)
    {
        if(mplstunnelarhopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelARHopTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelARHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelARHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelARHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelARHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelARHopEntry")
    {
        auto c = std::make_shared<MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry>();
        c->parent = this;
        mplstunnelarhopentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelARHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplstunnelarhopentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSTESTDMIB::MplsTunnelARHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::MplsTunnelARHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::MplsTunnelARHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelARHopEntry")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::MplsTunnelARHopEntry()
    :
    mplstunnelarhoplistindex{YType::uint32, "mplsTunnelARHopListIndex"},
    mplstunnelarhopindex{YType::uint32, "mplsTunnelARHopIndex"},
    mplstunnelarhopaddrtype{YType::enumeration, "mplsTunnelARHopAddrType"},
    mplstunnelarhopipaddr{YType::str, "mplsTunnelARHopIpAddr"},
    mplstunnelarhopaddrunnum{YType::str, "mplsTunnelARHopAddrUnnum"},
    mplstunnelarhoplspid{YType::str, "mplsTunnelARHopLspId"}
{

    yang_name = "mplsTunnelARHopEntry"; yang_parent_name = "mplsTunnelARHopTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::~MplsTunnelARHopEntry()
{
}

bool MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelarhoplistindex.is_set
	|| mplstunnelarhopindex.is_set
	|| mplstunnelarhopaddrtype.is_set
	|| mplstunnelarhopipaddr.is_set
	|| mplstunnelarhopaddrunnum.is_set
	|| mplstunnelarhoplspid.is_set;
}

bool MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelarhoplistindex.yfilter)
	|| ydk::is_set(mplstunnelarhopindex.yfilter)
	|| ydk::is_set(mplstunnelarhopaddrtype.yfilter)
	|| ydk::is_set(mplstunnelarhopipaddr.yfilter)
	|| ydk::is_set(mplstunnelarhopaddrunnum.yfilter)
	|| ydk::is_set(mplstunnelarhoplspid.yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelARHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelARHopEntry";
    ADD_KEY_TOKEN(mplstunnelarhoplistindex, "mplsTunnelARHopListIndex");
    ADD_KEY_TOKEN(mplstunnelarhopindex, "mplsTunnelARHopIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelarhoplistindex.is_set || is_set(mplstunnelarhoplistindex.yfilter)) leaf_name_data.push_back(mplstunnelarhoplistindex.get_name_leafdata());
    if (mplstunnelarhopindex.is_set || is_set(mplstunnelarhopindex.yfilter)) leaf_name_data.push_back(mplstunnelarhopindex.get_name_leafdata());
    if (mplstunnelarhopaddrtype.is_set || is_set(mplstunnelarhopaddrtype.yfilter)) leaf_name_data.push_back(mplstunnelarhopaddrtype.get_name_leafdata());
    if (mplstunnelarhopipaddr.is_set || is_set(mplstunnelarhopipaddr.yfilter)) leaf_name_data.push_back(mplstunnelarhopipaddr.get_name_leafdata());
    if (mplstunnelarhopaddrunnum.is_set || is_set(mplstunnelarhopaddrunnum.yfilter)) leaf_name_data.push_back(mplstunnelarhopaddrunnum.get_name_leafdata());
    if (mplstunnelarhoplspid.is_set || is_set(mplstunnelarhoplspid.yfilter)) leaf_name_data.push_back(mplstunnelarhoplspid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelARHopListIndex")
    {
        mplstunnelarhoplistindex = value;
        mplstunnelarhoplistindex.value_namespace = name_space;
        mplstunnelarhoplistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopIndex")
    {
        mplstunnelarhopindex = value;
        mplstunnelarhopindex.value_namespace = name_space;
        mplstunnelarhopindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopAddrType")
    {
        mplstunnelarhopaddrtype = value;
        mplstunnelarhopaddrtype.value_namespace = name_space;
        mplstunnelarhopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopIpAddr")
    {
        mplstunnelarhopipaddr = value;
        mplstunnelarhopipaddr.value_namespace = name_space;
        mplstunnelarhopipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopAddrUnnum")
    {
        mplstunnelarhopaddrunnum = value;
        mplstunnelarhopaddrunnum.value_namespace = name_space;
        mplstunnelarhopaddrunnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopLspId")
    {
        mplstunnelarhoplspid = value;
        mplstunnelarhoplspid.value_namespace = name_space;
        mplstunnelarhoplspid.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelARHopListIndex")
    {
        mplstunnelarhoplistindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopIndex")
    {
        mplstunnelarhopindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopAddrType")
    {
        mplstunnelarhopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopIpAddr")
    {
        mplstunnelarhopipaddr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopAddrUnnum")
    {
        mplstunnelarhopaddrunnum.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopLspId")
    {
        mplstunnelarhoplspid.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTunnelARHopTable::MplsTunnelARHopEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelARHopListIndex" || name == "mplsTunnelARHopIndex" || name == "mplsTunnelARHopAddrType" || name == "mplsTunnelARHopIpAddr" || name == "mplsTunnelARHopAddrUnnum" || name == "mplsTunnelARHopLspId")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopTable()
    :
    mplstunnelchopentry(this, {"mplstunnelchoplistindex", "mplstunnelchopindex"})
{

    yang_name = "mplsTunnelCHopTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelCHopTable::~MplsTunnelCHopTable()
{
}

bool MPLSTESTDMIB::MplsTunnelCHopTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplstunnelchopentry.len(); index++)
    {
        if(mplstunnelchopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::MplsTunnelCHopTable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelchopentry.len(); index++)
    {
        if(mplstunnelchopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelCHopTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelCHopTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelCHopTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelCHopTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelCHopEntry")
    {
        auto c = std::make_shared<MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry>();
        c->parent = this;
        mplstunnelchopentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelCHopTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplstunnelchopentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSTESTDMIB::MplsTunnelCHopTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::MplsTunnelCHopTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::MplsTunnelCHopTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelCHopEntry")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::MplsTunnelCHopEntry()
    :
    mplstunnelchoplistindex{YType::uint32, "mplsTunnelCHopListIndex"},
    mplstunnelchopindex{YType::uint32, "mplsTunnelCHopIndex"},
    mplstunnelchopaddrtype{YType::enumeration, "mplsTunnelCHopAddrType"},
    mplstunnelchopipaddr{YType::str, "mplsTunnelCHopIpAddr"},
    mplstunnelchopipprefixlen{YType::uint32, "mplsTunnelCHopIpPrefixLen"},
    mplstunnelchopasnumber{YType::str, "mplsTunnelCHopAsNumber"},
    mplstunnelchopaddrunnum{YType::str, "mplsTunnelCHopAddrUnnum"},
    mplstunnelchoplspid{YType::str, "mplsTunnelCHopLspId"},
    mplstunnelchoptype{YType::enumeration, "mplsTunnelCHopType"}
{

    yang_name = "mplsTunnelCHopEntry"; yang_parent_name = "mplsTunnelCHopTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::~MplsTunnelCHopEntry()
{
}

bool MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelchoplistindex.is_set
	|| mplstunnelchopindex.is_set
	|| mplstunnelchopaddrtype.is_set
	|| mplstunnelchopipaddr.is_set
	|| mplstunnelchopipprefixlen.is_set
	|| mplstunnelchopasnumber.is_set
	|| mplstunnelchopaddrunnum.is_set
	|| mplstunnelchoplspid.is_set
	|| mplstunnelchoptype.is_set;
}

bool MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelchoplistindex.yfilter)
	|| ydk::is_set(mplstunnelchopindex.yfilter)
	|| ydk::is_set(mplstunnelchopaddrtype.yfilter)
	|| ydk::is_set(mplstunnelchopipaddr.yfilter)
	|| ydk::is_set(mplstunnelchopipprefixlen.yfilter)
	|| ydk::is_set(mplstunnelchopasnumber.yfilter)
	|| ydk::is_set(mplstunnelchopaddrunnum.yfilter)
	|| ydk::is_set(mplstunnelchoplspid.yfilter)
	|| ydk::is_set(mplstunnelchoptype.yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelCHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCHopEntry";
    ADD_KEY_TOKEN(mplstunnelchoplistindex, "mplsTunnelCHopListIndex");
    ADD_KEY_TOKEN(mplstunnelchopindex, "mplsTunnelCHopIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelchoplistindex.is_set || is_set(mplstunnelchoplistindex.yfilter)) leaf_name_data.push_back(mplstunnelchoplistindex.get_name_leafdata());
    if (mplstunnelchopindex.is_set || is_set(mplstunnelchopindex.yfilter)) leaf_name_data.push_back(mplstunnelchopindex.get_name_leafdata());
    if (mplstunnelchopaddrtype.is_set || is_set(mplstunnelchopaddrtype.yfilter)) leaf_name_data.push_back(mplstunnelchopaddrtype.get_name_leafdata());
    if (mplstunnelchopipaddr.is_set || is_set(mplstunnelchopipaddr.yfilter)) leaf_name_data.push_back(mplstunnelchopipaddr.get_name_leafdata());
    if (mplstunnelchopipprefixlen.is_set || is_set(mplstunnelchopipprefixlen.yfilter)) leaf_name_data.push_back(mplstunnelchopipprefixlen.get_name_leafdata());
    if (mplstunnelchopasnumber.is_set || is_set(mplstunnelchopasnumber.yfilter)) leaf_name_data.push_back(mplstunnelchopasnumber.get_name_leafdata());
    if (mplstunnelchopaddrunnum.is_set || is_set(mplstunnelchopaddrunnum.yfilter)) leaf_name_data.push_back(mplstunnelchopaddrunnum.get_name_leafdata());
    if (mplstunnelchoplspid.is_set || is_set(mplstunnelchoplspid.yfilter)) leaf_name_data.push_back(mplstunnelchoplspid.get_name_leafdata());
    if (mplstunnelchoptype.is_set || is_set(mplstunnelchoptype.yfilter)) leaf_name_data.push_back(mplstunnelchoptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelCHopListIndex")
    {
        mplstunnelchoplistindex = value;
        mplstunnelchoplistindex.value_namespace = name_space;
        mplstunnelchoplistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopIndex")
    {
        mplstunnelchopindex = value;
        mplstunnelchopindex.value_namespace = name_space;
        mplstunnelchopindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopAddrType")
    {
        mplstunnelchopaddrtype = value;
        mplstunnelchopaddrtype.value_namespace = name_space;
        mplstunnelchopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopIpAddr")
    {
        mplstunnelchopipaddr = value;
        mplstunnelchopipaddr.value_namespace = name_space;
        mplstunnelchopipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopIpPrefixLen")
    {
        mplstunnelchopipprefixlen = value;
        mplstunnelchopipprefixlen.value_namespace = name_space;
        mplstunnelchopipprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopAsNumber")
    {
        mplstunnelchopasnumber = value;
        mplstunnelchopasnumber.value_namespace = name_space;
        mplstunnelchopasnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopAddrUnnum")
    {
        mplstunnelchopaddrunnum = value;
        mplstunnelchopaddrunnum.value_namespace = name_space;
        mplstunnelchopaddrunnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopLspId")
    {
        mplstunnelchoplspid = value;
        mplstunnelchoplspid.value_namespace = name_space;
        mplstunnelchoplspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopType")
    {
        mplstunnelchoptype = value;
        mplstunnelchoptype.value_namespace = name_space;
        mplstunnelchoptype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelCHopListIndex")
    {
        mplstunnelchoplistindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopIndex")
    {
        mplstunnelchopindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopAddrType")
    {
        mplstunnelchopaddrtype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopIpAddr")
    {
        mplstunnelchopipaddr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopIpPrefixLen")
    {
        mplstunnelchopipprefixlen.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopAsNumber")
    {
        mplstunnelchopasnumber.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopAddrUnnum")
    {
        mplstunnelchopaddrunnum.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopLspId")
    {
        mplstunnelchoplspid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopType")
    {
        mplstunnelchoptype.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelCHopListIndex" || name == "mplsTunnelCHopIndex" || name == "mplsTunnelCHopAddrType" || name == "mplsTunnelCHopIpAddr" || name == "mplsTunnelCHopIpPrefixLen" || name == "mplsTunnelCHopAsNumber" || name == "mplsTunnelCHopAddrUnnum" || name == "mplsTunnelCHopLspId" || name == "mplsTunnelCHopType")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResTable()
    :
    mplstunnelcrldpresentry(this, {"mplstunnelresourceindex"})
{

    yang_name = "mplsTunnelCRLDPResTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelCRLDPResTable::~MplsTunnelCRLDPResTable()
{
}

bool MPLSTESTDMIB::MplsTunnelCRLDPResTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mplstunnelcrldpresentry.len(); index++)
    {
        if(mplstunnelcrldpresentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::MplsTunnelCRLDPResTable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelcrldpresentry.len(); index++)
    {
        if(mplstunnelcrldpresentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelCRLDPResTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelCRLDPResTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCRLDPResTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelCRLDPResTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelCRLDPResTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mplsTunnelCRLDPResEntry")
    {
        auto c = std::make_shared<MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry>();
        c->parent = this;
        mplstunnelcrldpresentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelCRLDPResTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mplstunnelcrldpresentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void MPLSTESTDMIB::MplsTunnelCRLDPResTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::MplsTunnelCRLDPResTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::MplsTunnelCRLDPResTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelCRLDPResEntry")
        return true;
    return false;
}

MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::MplsTunnelCRLDPResEntry()
    :
    mplstunnelresourceindex{YType::str, "mplsTunnelResourceIndex"},
    mplstunnelcrldpresmeanburstsize{YType::uint32, "mplsTunnelCRLDPResMeanBurstSize"},
    mplstunnelcrldpresexburstsize{YType::uint32, "mplsTunnelCRLDPResExBurstSize"},
    mplstunnelcrldpresfrequency{YType::enumeration, "mplsTunnelCRLDPResFrequency"},
    mplstunnelcrldpresweight{YType::uint32, "mplsTunnelCRLDPResWeight"},
    mplstunnelcrldpresflags{YType::uint32, "mplsTunnelCRLDPResFlags"},
    mplstunnelcrldpresrowstatus{YType::enumeration, "mplsTunnelCRLDPResRowStatus"},
    mplstunnelcrldpresstoragetype{YType::enumeration, "mplsTunnelCRLDPResStorageType"}
{

    yang_name = "mplsTunnelCRLDPResEntry"; yang_parent_name = "mplsTunnelCRLDPResTable"; is_top_level_class = false; has_list_ancestor = false; 
}

MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::~MplsTunnelCRLDPResEntry()
{
}

bool MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::has_data() const
{
    if (is_presence_container) return true;
    return mplstunnelresourceindex.is_set
	|| mplstunnelcrldpresmeanburstsize.is_set
	|| mplstunnelcrldpresexburstsize.is_set
	|| mplstunnelcrldpresfrequency.is_set
	|| mplstunnelcrldpresweight.is_set
	|| mplstunnelcrldpresflags.is_set
	|| mplstunnelcrldpresrowstatus.is_set
	|| mplstunnelcrldpresstoragetype.is_set;
}

bool MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelresourceindex.yfilter)
	|| ydk::is_set(mplstunnelcrldpresmeanburstsize.yfilter)
	|| ydk::is_set(mplstunnelcrldpresexburstsize.yfilter)
	|| ydk::is_set(mplstunnelcrldpresfrequency.yfilter)
	|| ydk::is_set(mplstunnelcrldpresweight.yfilter)
	|| ydk::is_set(mplstunnelcrldpresflags.yfilter)
	|| ydk::is_set(mplstunnelcrldpresrowstatus.yfilter)
	|| ydk::is_set(mplstunnelcrldpresstoragetype.yfilter);
}

std::string MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelCRLDPResTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCRLDPResEntry";
    ADD_KEY_TOKEN(mplstunnelresourceindex, "mplsTunnelResourceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelresourceindex.is_set || is_set(mplstunnelresourceindex.yfilter)) leaf_name_data.push_back(mplstunnelresourceindex.get_name_leafdata());
    if (mplstunnelcrldpresmeanburstsize.is_set || is_set(mplstunnelcrldpresmeanburstsize.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresmeanburstsize.get_name_leafdata());
    if (mplstunnelcrldpresexburstsize.is_set || is_set(mplstunnelcrldpresexburstsize.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresexburstsize.get_name_leafdata());
    if (mplstunnelcrldpresfrequency.is_set || is_set(mplstunnelcrldpresfrequency.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresfrequency.get_name_leafdata());
    if (mplstunnelcrldpresweight.is_set || is_set(mplstunnelcrldpresweight.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresweight.get_name_leafdata());
    if (mplstunnelcrldpresflags.is_set || is_set(mplstunnelcrldpresflags.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresflags.get_name_leafdata());
    if (mplstunnelcrldpresrowstatus.is_set || is_set(mplstunnelcrldpresrowstatus.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresrowstatus.get_name_leafdata());
    if (mplstunnelcrldpresstoragetype.is_set || is_set(mplstunnelcrldpresstoragetype.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresstoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex = value;
        mplstunnelresourceindex.value_namespace = name_space;
        mplstunnelresourceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResMeanBurstSize")
    {
        mplstunnelcrldpresmeanburstsize = value;
        mplstunnelcrldpresmeanburstsize.value_namespace = name_space;
        mplstunnelcrldpresmeanburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResExBurstSize")
    {
        mplstunnelcrldpresexburstsize = value;
        mplstunnelcrldpresexburstsize.value_namespace = name_space;
        mplstunnelcrldpresexburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResFrequency")
    {
        mplstunnelcrldpresfrequency = value;
        mplstunnelcrldpresfrequency.value_namespace = name_space;
        mplstunnelcrldpresfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResWeight")
    {
        mplstunnelcrldpresweight = value;
        mplstunnelcrldpresweight.value_namespace = name_space;
        mplstunnelcrldpresweight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResFlags")
    {
        mplstunnelcrldpresflags = value;
        mplstunnelcrldpresflags.value_namespace = name_space;
        mplstunnelcrldpresflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResRowStatus")
    {
        mplstunnelcrldpresrowstatus = value;
        mplstunnelcrldpresrowstatus.value_namespace = name_space;
        mplstunnelcrldpresrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResStorageType")
    {
        mplstunnelcrldpresstoragetype = value;
        mplstunnelcrldpresstoragetype.value_namespace = name_space;
        mplstunnelcrldpresstoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResMeanBurstSize")
    {
        mplstunnelcrldpresmeanburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResExBurstSize")
    {
        mplstunnelcrldpresexburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResFrequency")
    {
        mplstunnelcrldpresfrequency.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResWeight")
    {
        mplstunnelcrldpresweight.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResFlags")
    {
        mplstunnelcrldpresflags.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResRowStatus")
    {
        mplstunnelcrldpresrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResStorageType")
    {
        mplstunnelcrldpresstoragetype.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelResourceIndex" || name == "mplsTunnelCRLDPResMeanBurstSize" || name == "mplsTunnelCRLDPResExBurstSize" || name == "mplsTunnelCRLDPResFrequency" || name == "mplsTunnelCRLDPResWeight" || name == "mplsTunnelCRLDPResFlags" || name == "mplsTunnelCRLDPResRowStatus" || name == "mplsTunnelCRLDPResStorageType")
        return true;
    return false;
}

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelRole::head {1, "head"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelRole::transit {2, "transit"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelRole::tail {3, "tail"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelRole::headTail {4, "headTail"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelSignallingProto::none {1, "none"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelSignallingProto::rsvp {2, "rsvp"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelSignallingProto::crldp {3, "crldp"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelSignallingProto::other {4, "other"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelAdminStatus::up {1, "up"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelAdminStatus::down {2, "down"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelAdminStatus::testing {3, "testing"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus::up {1, "up"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus::down {2, "down"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus::testing {3, "testing"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus::unknown {4, "unknown"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus::dormant {5, "dormant"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus::notPresent {6, "notPresent"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelTable::MplsTunnelEntry::MplsTunnelOperStatus::lowerLayerDown {7, "lowerLayerDown"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::MplsTunnelHopType::strict {1, "strict"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::MplsTunnelHopType::loose {2, "loose"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::MplsTunnelHopEntryPathComp::dynamic {1, "dynamic"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelHopTable::MplsTunnelHopEntry::MplsTunnelHopEntryPathComp::explicit_ {2, "explicit"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::MplsTunnelResourceFrequency::unspecified {1, "unspecified"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::MplsTunnelResourceFrequency::frequent {2, "frequent"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelResourceTable::MplsTunnelResourceEntry::MplsTunnelResourceFrequency::veryFrequent {3, "veryFrequent"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::MplsTunnelCHopType::strict {1, "strict"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelCHopTable::MplsTunnelCHopEntry::MplsTunnelCHopType::loose {2, "loose"};

const Enum::YLeaf MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::MplsTunnelCRLDPResFrequency::unspecified {1, "unspecified"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::MplsTunnelCRLDPResFrequency::frequent {2, "frequent"};
const Enum::YLeaf MPLSTESTDMIB::MplsTunnelCRLDPResTable::MplsTunnelCRLDPResEntry::MplsTunnelCRLDPResFrequency::veryFrequent {3, "veryFrequent"};


}
}

