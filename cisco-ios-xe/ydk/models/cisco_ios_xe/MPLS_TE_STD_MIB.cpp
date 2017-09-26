
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
    mplsteobjects(std::make_shared<MPLSTESTDMIB::Mplsteobjects>())
	,mplstescalars(std::make_shared<MPLSTESTDMIB::Mplstescalars>())
	,mplstunnelarhoptable(std::make_shared<MPLSTESTDMIB::Mplstunnelarhoptable>())
	,mplstunnelchoptable(std::make_shared<MPLSTESTDMIB::Mplstunnelchoptable>())
	,mplstunnelcrldprestable(std::make_shared<MPLSTESTDMIB::Mplstunnelcrldprestable>())
	,mplstunnelhoptable(std::make_shared<MPLSTESTDMIB::Mplstunnelhoptable>())
	,mplstunnelresourcetable(std::make_shared<MPLSTESTDMIB::Mplstunnelresourcetable>())
	,mplstunneltable(std::make_shared<MPLSTESTDMIB::Mplstunneltable>())
{
    mplsteobjects->parent = this;
    mplstescalars->parent = this;
    mplstunnelarhoptable->parent = this;
    mplstunnelchoptable->parent = this;
    mplstunnelcrldprestable->parent = this;
    mplstunnelhoptable->parent = this;
    mplstunnelresourcetable->parent = this;
    mplstunneltable->parent = this;

    yang_name = "MPLS-TE-STD-MIB"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

MPLSTESTDMIB::~MPLSTESTDMIB()
{
}

bool MPLSTESTDMIB::has_data() const
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

bool MPLSTESTDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (mplsteobjects !=  nullptr && mplsteobjects->has_operation())
	|| (mplstescalars !=  nullptr && mplstescalars->has_operation())
	|| (mplstunnelarhoptable !=  nullptr && mplstunnelarhoptable->has_operation())
	|| (mplstunnelchoptable !=  nullptr && mplstunnelchoptable->has_operation())
	|| (mplstunnelcrldprestable !=  nullptr && mplstunnelcrldprestable->has_operation())
	|| (mplstunnelhoptable !=  nullptr && mplstunnelhoptable->has_operation())
	|| (mplstunnelresourcetable !=  nullptr && mplstunnelresourcetable->has_operation())
	|| (mplstunneltable !=  nullptr && mplstunneltable->has_operation());
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
    if(child_yang_name == "mplsTeObjects")
    {
        if(mplsteobjects == nullptr)
        {
            mplsteobjects = std::make_shared<MPLSTESTDMIB::Mplsteobjects>();
        }
        return mplsteobjects;
    }

    if(child_yang_name == "mplsTeScalars")
    {
        if(mplstescalars == nullptr)
        {
            mplstescalars = std::make_shared<MPLSTESTDMIB::Mplstescalars>();
        }
        return mplstescalars;
    }

    if(child_yang_name == "mplsTunnelARHopTable")
    {
        if(mplstunnelarhoptable == nullptr)
        {
            mplstunnelarhoptable = std::make_shared<MPLSTESTDMIB::Mplstunnelarhoptable>();
        }
        return mplstunnelarhoptable;
    }

    if(child_yang_name == "mplsTunnelCHopTable")
    {
        if(mplstunnelchoptable == nullptr)
        {
            mplstunnelchoptable = std::make_shared<MPLSTESTDMIB::Mplstunnelchoptable>();
        }
        return mplstunnelchoptable;
    }

    if(child_yang_name == "mplsTunnelCRLDPResTable")
    {
        if(mplstunnelcrldprestable == nullptr)
        {
            mplstunnelcrldprestable = std::make_shared<MPLSTESTDMIB::Mplstunnelcrldprestable>();
        }
        return mplstunnelcrldprestable;
    }

    if(child_yang_name == "mplsTunnelHopTable")
    {
        if(mplstunnelhoptable == nullptr)
        {
            mplstunnelhoptable = std::make_shared<MPLSTESTDMIB::Mplstunnelhoptable>();
        }
        return mplstunnelhoptable;
    }

    if(child_yang_name == "mplsTunnelResourceTable")
    {
        if(mplstunnelresourcetable == nullptr)
        {
            mplstunnelresourcetable = std::make_shared<MPLSTESTDMIB::Mplstunnelresourcetable>();
        }
        return mplstunnelresourcetable;
    }

    if(child_yang_name == "mplsTunnelTable")
    {
        if(mplstunneltable == nullptr)
        {
            mplstunneltable = std::make_shared<MPLSTESTDMIB::Mplstunneltable>();
        }
        return mplstunneltable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::get_children() const
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
    if(name == "mplsTeObjects" || name == "mplsTeScalars" || name == "mplsTunnelARHopTable" || name == "mplsTunnelCHopTable" || name == "mplsTunnelCRLDPResTable" || name == "mplsTunnelHopTable" || name == "mplsTunnelResourceTable" || name == "mplsTunnelTable")
        return true;
    return false;
}

MPLSTESTDMIB::Mplsteobjects::Mplsteobjects()
    :
    mplstunnelhoplistindexnext{YType::uint32, "mplsTunnelHopListIndexNext"},
    mplstunnelindexnext{YType::uint32, "mplsTunnelIndexNext"},
    mplstunnelnotificationenable{YType::boolean, "mplsTunnelNotificationEnable"},
    mplstunnelresourceindexnext{YType::uint32, "mplsTunnelResourceIndexNext"}
{

    yang_name = "mplsTeObjects"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplsteobjects::~Mplsteobjects()
{
}

bool MPLSTESTDMIB::Mplsteobjects::has_data() const
{
    return mplstunnelhoplistindexnext.is_set
	|| mplstunnelindexnext.is_set
	|| mplstunnelnotificationenable.is_set
	|| mplstunnelresourceindexnext.is_set;
}

bool MPLSTESTDMIB::Mplsteobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelhoplistindexnext.yfilter)
	|| ydk::is_set(mplstunnelindexnext.yfilter)
	|| ydk::is_set(mplstunnelnotificationenable.yfilter)
	|| ydk::is_set(mplstunnelresourceindexnext.yfilter);
}

std::string MPLSTESTDMIB::Mplsteobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplsteobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTeObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplsteobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelhoplistindexnext.is_set || is_set(mplstunnelhoplistindexnext.yfilter)) leaf_name_data.push_back(mplstunnelhoplistindexnext.get_name_leafdata());
    if (mplstunnelindexnext.is_set || is_set(mplstunnelindexnext.yfilter)) leaf_name_data.push_back(mplstunnelindexnext.get_name_leafdata());
    if (mplstunnelnotificationenable.is_set || is_set(mplstunnelnotificationenable.yfilter)) leaf_name_data.push_back(mplstunnelnotificationenable.get_name_leafdata());
    if (mplstunnelresourceindexnext.is_set || is_set(mplstunnelresourceindexnext.yfilter)) leaf_name_data.push_back(mplstunnelresourceindexnext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplsteobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplsteobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplsteobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelHopListIndexNext")
    {
        mplstunnelhoplistindexnext = value;
        mplstunnelhoplistindexnext.value_namespace = name_space;
        mplstunnelhoplistindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIndexNext")
    {
        mplstunnelindexnext = value;
        mplstunnelindexnext.value_namespace = name_space;
        mplstunnelindexnext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelNotificationEnable")
    {
        mplstunnelnotificationenable = value;
        mplstunnelnotificationenable.value_namespace = name_space;
        mplstunnelnotificationenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceIndexNext")
    {
        mplstunnelresourceindexnext = value;
        mplstunnelresourceindexnext.value_namespace = name_space;
        mplstunnelresourceindexnext.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::Mplsteobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelHopListIndexNext")
    {
        mplstunnelhoplistindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIndexNext")
    {
        mplstunnelindexnext.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelNotificationEnable")
    {
        mplstunnelnotificationenable.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceIndexNext")
    {
        mplstunnelresourceindexnext.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::Mplsteobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelHopListIndexNext" || name == "mplsTunnelIndexNext" || name == "mplsTunnelNotificationEnable" || name == "mplsTunnelResourceIndexNext")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstescalars::Mplstescalars()
    :
    mplstunnelactive{YType::uint32, "mplsTunnelActive"},
    mplstunnelconfigured{YType::uint32, "mplsTunnelConfigured"},
    mplstunnelmaxhops{YType::uint32, "mplsTunnelMaxHops"},
    mplstunnelnotificationmaxrate{YType::uint32, "mplsTunnelNotificationMaxRate"},
    mplstunneltedistproto{YType::bits, "mplsTunnelTEDistProto"}
{

    yang_name = "mplsTeScalars"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstescalars::~Mplstescalars()
{
}

bool MPLSTESTDMIB::Mplstescalars::has_data() const
{
    return mplstunnelactive.is_set
	|| mplstunnelconfigured.is_set
	|| mplstunnelmaxhops.is_set
	|| mplstunnelnotificationmaxrate.is_set
	|| mplstunneltedistproto.is_set;
}

bool MPLSTESTDMIB::Mplstescalars::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelactive.yfilter)
	|| ydk::is_set(mplstunnelconfigured.yfilter)
	|| ydk::is_set(mplstunnelmaxhops.yfilter)
	|| ydk::is_set(mplstunnelnotificationmaxrate.yfilter)
	|| ydk::is_set(mplstunneltedistproto.yfilter);
}

std::string MPLSTESTDMIB::Mplstescalars::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstescalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTeScalars";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstescalars::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelactive.is_set || is_set(mplstunnelactive.yfilter)) leaf_name_data.push_back(mplstunnelactive.get_name_leafdata());
    if (mplstunnelconfigured.is_set || is_set(mplstunnelconfigured.yfilter)) leaf_name_data.push_back(mplstunnelconfigured.get_name_leafdata());
    if (mplstunnelmaxhops.is_set || is_set(mplstunnelmaxhops.yfilter)) leaf_name_data.push_back(mplstunnelmaxhops.get_name_leafdata());
    if (mplstunnelnotificationmaxrate.is_set || is_set(mplstunnelnotificationmaxrate.yfilter)) leaf_name_data.push_back(mplstunnelnotificationmaxrate.get_name_leafdata());
    if (mplstunneltedistproto.is_set || is_set(mplstunneltedistproto.yfilter)) leaf_name_data.push_back(mplstunneltedistproto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstescalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstescalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplstescalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelActive")
    {
        mplstunnelactive = value;
        mplstunnelactive.value_namespace = name_space;
        mplstunnelactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelConfigured")
    {
        mplstunnelconfigured = value;
        mplstunnelconfigured.value_namespace = name_space;
        mplstunnelconfigured.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsTunnelTEDistProto")
    {
        mplstunneltedistproto[value] = true;
    }
}

void MPLSTESTDMIB::Mplstescalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelActive")
    {
        mplstunnelactive.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelConfigured")
    {
        mplstunnelconfigured.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelMaxHops")
    {
        mplstunnelmaxhops.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelNotificationMaxRate")
    {
        mplstunnelnotificationmaxrate.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelTEDistProto")
    {
        mplstunneltedistproto.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::Mplstescalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelActive" || name == "mplsTunnelConfigured" || name == "mplsTunnelMaxHops" || name == "mplsTunnelNotificationMaxRate" || name == "mplsTunnelTEDistProto")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhoptable()
{

    yang_name = "mplsTunnelARHopTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelarhoptable::~Mplstunnelarhoptable()
{
}

bool MPLSTESTDMIB::Mplstunnelarhoptable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelarhopentry.size(); index++)
    {
        if(mplstunnelarhopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::Mplstunnelarhoptable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelarhopentry.size(); index++)
    {
        if(mplstunnelarhopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelarhoptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelarhoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelARHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelarhoptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelarhoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry>();
        c->parent = this;
        mplstunnelarhopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelarhoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelarhopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MPLSTESTDMIB::Mplstunnelarhoptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::Mplstunnelarhoptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::Mplstunnelarhoptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelARHopEntry")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::Mplstunnelarhopentry()
    :
    mplstunnelarhoplistindex{YType::uint32, "mplsTunnelARHopListIndex"},
    mplstunnelarhopindex{YType::uint32, "mplsTunnelARHopIndex"},
    mplstunnelarhopaddrtype{YType::enumeration, "mplsTunnelARHopAddrType"},
    mplstunnelarhopaddrunnum{YType::str, "mplsTunnelARHopAddrUnnum"},
    mplstunnelarhopipaddr{YType::str, "mplsTunnelARHopIpAddr"},
    mplstunnelarhoplspid{YType::str, "mplsTunnelARHopLspId"}
{

    yang_name = "mplsTunnelARHopEntry"; yang_parent_name = "mplsTunnelARHopTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::~Mplstunnelarhopentry()
{
}

bool MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::has_data() const
{
    return mplstunnelarhoplistindex.is_set
	|| mplstunnelarhopindex.is_set
	|| mplstunnelarhopaddrtype.is_set
	|| mplstunnelarhopaddrunnum.is_set
	|| mplstunnelarhopipaddr.is_set
	|| mplstunnelarhoplspid.is_set;
}

bool MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelarhoplistindex.yfilter)
	|| ydk::is_set(mplstunnelarhopindex.yfilter)
	|| ydk::is_set(mplstunnelarhopaddrtype.yfilter)
	|| ydk::is_set(mplstunnelarhopaddrunnum.yfilter)
	|| ydk::is_set(mplstunnelarhopipaddr.yfilter)
	|| ydk::is_set(mplstunnelarhoplspid.yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelARHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelARHopEntry" <<"[mplsTunnelARHopListIndex='" <<mplstunnelarhoplistindex <<"']" <<"[mplsTunnelARHopIndex='" <<mplstunnelarhopindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelarhoplistindex.is_set || is_set(mplstunnelarhoplistindex.yfilter)) leaf_name_data.push_back(mplstunnelarhoplistindex.get_name_leafdata());
    if (mplstunnelarhopindex.is_set || is_set(mplstunnelarhopindex.yfilter)) leaf_name_data.push_back(mplstunnelarhopindex.get_name_leafdata());
    if (mplstunnelarhopaddrtype.is_set || is_set(mplstunnelarhopaddrtype.yfilter)) leaf_name_data.push_back(mplstunnelarhopaddrtype.get_name_leafdata());
    if (mplstunnelarhopaddrunnum.is_set || is_set(mplstunnelarhopaddrunnum.yfilter)) leaf_name_data.push_back(mplstunnelarhopaddrunnum.get_name_leafdata());
    if (mplstunnelarhopipaddr.is_set || is_set(mplstunnelarhopipaddr.yfilter)) leaf_name_data.push_back(mplstunnelarhopipaddr.get_name_leafdata());
    if (mplstunnelarhoplspid.is_set || is_set(mplstunnelarhoplspid.yfilter)) leaf_name_data.push_back(mplstunnelarhoplspid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsTunnelARHopAddrUnnum")
    {
        mplstunnelarhopaddrunnum = value;
        mplstunnelarhopaddrunnum.value_namespace = name_space;
        mplstunnelarhopaddrunnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopIpAddr")
    {
        mplstunnelarhopipaddr = value;
        mplstunnelarhopipaddr.value_namespace = name_space;
        mplstunnelarhopipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelARHopLspId")
    {
        mplstunnelarhoplspid = value;
        mplstunnelarhoplspid.value_namespace = name_space;
        mplstunnelarhoplspid.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsTunnelARHopAddrUnnum")
    {
        mplstunnelarhopaddrunnum.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopIpAddr")
    {
        mplstunnelarhopipaddr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopLspId")
    {
        mplstunnelarhoplspid.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::Mplstunnelarhoptable::Mplstunnelarhopentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelARHopListIndex" || name == "mplsTunnelARHopIndex" || name == "mplsTunnelARHopAddrType" || name == "mplsTunnelARHopAddrUnnum" || name == "mplsTunnelARHopIpAddr" || name == "mplsTunnelARHopLspId")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchoptable()
{

    yang_name = "mplsTunnelCHopTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelchoptable::~Mplstunnelchoptable()
{
}

bool MPLSTESTDMIB::Mplstunnelchoptable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelchopentry.size(); index++)
    {
        if(mplstunnelchopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::Mplstunnelchoptable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelchopentry.size(); index++)
    {
        if(mplstunnelchopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelchoptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelchoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelchoptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelchoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry>();
        c->parent = this;
        mplstunnelchopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelchoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelchopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MPLSTESTDMIB::Mplstunnelchoptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::Mplstunnelchoptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::Mplstunnelchoptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelCHopEntry")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::Mplstunnelchopentry()
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

    yang_name = "mplsTunnelCHopEntry"; yang_parent_name = "mplsTunnelCHopTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::~Mplstunnelchopentry()
{
}

bool MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::has_data() const
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

bool MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelchoplistindex.yfilter)
	|| ydk::is_set(mplstunnelchopindex.yfilter)
	|| ydk::is_set(mplstunnelchopaddrtype.yfilter)
	|| ydk::is_set(mplstunnelchopaddrunnum.yfilter)
	|| ydk::is_set(mplstunnelchopasnumber.yfilter)
	|| ydk::is_set(mplstunnelchopipaddr.yfilter)
	|| ydk::is_set(mplstunnelchopipprefixlen.yfilter)
	|| ydk::is_set(mplstunnelchoplspid.yfilter)
	|| ydk::is_set(mplstunnelchoptype.yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelCHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCHopEntry" <<"[mplsTunnelCHopListIndex='" <<mplstunnelchoplistindex <<"']" <<"[mplsTunnelCHopIndex='" <<mplstunnelchopindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelchoplistindex.is_set || is_set(mplstunnelchoplistindex.yfilter)) leaf_name_data.push_back(mplstunnelchoplistindex.get_name_leafdata());
    if (mplstunnelchopindex.is_set || is_set(mplstunnelchopindex.yfilter)) leaf_name_data.push_back(mplstunnelchopindex.get_name_leafdata());
    if (mplstunnelchopaddrtype.is_set || is_set(mplstunnelchopaddrtype.yfilter)) leaf_name_data.push_back(mplstunnelchopaddrtype.get_name_leafdata());
    if (mplstunnelchopaddrunnum.is_set || is_set(mplstunnelchopaddrunnum.yfilter)) leaf_name_data.push_back(mplstunnelchopaddrunnum.get_name_leafdata());
    if (mplstunnelchopasnumber.is_set || is_set(mplstunnelchopasnumber.yfilter)) leaf_name_data.push_back(mplstunnelchopasnumber.get_name_leafdata());
    if (mplstunnelchopipaddr.is_set || is_set(mplstunnelchopipaddr.yfilter)) leaf_name_data.push_back(mplstunnelchopipaddr.get_name_leafdata());
    if (mplstunnelchopipprefixlen.is_set || is_set(mplstunnelchopipprefixlen.yfilter)) leaf_name_data.push_back(mplstunnelchopipprefixlen.get_name_leafdata());
    if (mplstunnelchoplspid.is_set || is_set(mplstunnelchoplspid.yfilter)) leaf_name_data.push_back(mplstunnelchoplspid.get_name_leafdata());
    if (mplstunnelchoptype.is_set || is_set(mplstunnelchoptype.yfilter)) leaf_name_data.push_back(mplstunnelchoptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsTunnelCHopAddrUnnum")
    {
        mplstunnelchopaddrunnum = value;
        mplstunnelchopaddrunnum.value_namespace = name_space;
        mplstunnelchopaddrunnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCHopAsNumber")
    {
        mplstunnelchopasnumber = value;
        mplstunnelchopasnumber.value_namespace = name_space;
        mplstunnelchopasnumber.value_namespace_prefix = name_space_prefix;
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

void MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsTunnelCHopAddrUnnum")
    {
        mplstunnelchopaddrunnum.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopAsNumber")
    {
        mplstunnelchopasnumber.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopIpAddr")
    {
        mplstunnelchopipaddr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopIpPrefixLen")
    {
        mplstunnelchopipprefixlen.yfilter = yfilter;
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

bool MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelCHopListIndex" || name == "mplsTunnelCHopIndex" || name == "mplsTunnelCHopAddrType" || name == "mplsTunnelCHopAddrUnnum" || name == "mplsTunnelCHopAsNumber" || name == "mplsTunnelCHopIpAddr" || name == "mplsTunnelCHopIpPrefixLen" || name == "mplsTunnelCHopLspId" || name == "mplsTunnelCHopType")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldprestable()
{

    yang_name = "mplsTunnelCRLDPResTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelcrldprestable::~Mplstunnelcrldprestable()
{
}

bool MPLSTESTDMIB::Mplstunnelcrldprestable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelcrldpresentry.size(); index++)
    {
        if(mplstunnelcrldpresentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::Mplstunnelcrldprestable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelcrldpresentry.size(); index++)
    {
        if(mplstunnelcrldpresentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelcrldprestable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelcrldprestable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCRLDPResTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelcrldprestable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelcrldprestable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry>();
        c->parent = this;
        mplstunnelcrldpresentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelcrldprestable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelcrldpresentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MPLSTESTDMIB::Mplstunnelcrldprestable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::Mplstunnelcrldprestable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::Mplstunnelcrldprestable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelCRLDPResEntry")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::Mplstunnelcrldpresentry()
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

    yang_name = "mplsTunnelCRLDPResEntry"; yang_parent_name = "mplsTunnelCRLDPResTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::~Mplstunnelcrldpresentry()
{
}

bool MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::has_data() const
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

bool MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelresourceindex.yfilter)
	|| ydk::is_set(mplstunnelcrldpresexburstsize.yfilter)
	|| ydk::is_set(mplstunnelcrldpresflags.yfilter)
	|| ydk::is_set(mplstunnelcrldpresfrequency.yfilter)
	|| ydk::is_set(mplstunnelcrldpresmeanburstsize.yfilter)
	|| ydk::is_set(mplstunnelcrldpresrowstatus.yfilter)
	|| ydk::is_set(mplstunnelcrldpresstoragetype.yfilter)
	|| ydk::is_set(mplstunnelcrldpresweight.yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelCRLDPResTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelCRLDPResEntry" <<"[mplsTunnelResourceIndex='" <<mplstunnelresourceindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelresourceindex.is_set || is_set(mplstunnelresourceindex.yfilter)) leaf_name_data.push_back(mplstunnelresourceindex.get_name_leafdata());
    if (mplstunnelcrldpresexburstsize.is_set || is_set(mplstunnelcrldpresexburstsize.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresexburstsize.get_name_leafdata());
    if (mplstunnelcrldpresflags.is_set || is_set(mplstunnelcrldpresflags.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresflags.get_name_leafdata());
    if (mplstunnelcrldpresfrequency.is_set || is_set(mplstunnelcrldpresfrequency.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresfrequency.get_name_leafdata());
    if (mplstunnelcrldpresmeanburstsize.is_set || is_set(mplstunnelcrldpresmeanburstsize.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresmeanburstsize.get_name_leafdata());
    if (mplstunnelcrldpresrowstatus.is_set || is_set(mplstunnelcrldpresrowstatus.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresrowstatus.get_name_leafdata());
    if (mplstunnelcrldpresstoragetype.is_set || is_set(mplstunnelcrldpresstoragetype.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresstoragetype.get_name_leafdata());
    if (mplstunnelcrldpresweight.is_set || is_set(mplstunnelcrldpresweight.yfilter)) leaf_name_data.push_back(mplstunnelcrldpresweight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex = value;
        mplstunnelresourceindex.value_namespace = name_space;
        mplstunnelresourceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResExBurstSize")
    {
        mplstunnelcrldpresexburstsize = value;
        mplstunnelcrldpresexburstsize.value_namespace = name_space;
        mplstunnelcrldpresexburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResFlags")
    {
        mplstunnelcrldpresflags = value;
        mplstunnelcrldpresflags.value_namespace = name_space;
        mplstunnelcrldpresflags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResFrequency")
    {
        mplstunnelcrldpresfrequency = value;
        mplstunnelcrldpresfrequency.value_namespace = name_space;
        mplstunnelcrldpresfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelCRLDPResMeanBurstSize")
    {
        mplstunnelcrldpresmeanburstsize = value;
        mplstunnelcrldpresmeanburstsize.value_namespace = name_space;
        mplstunnelcrldpresmeanburstsize.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsTunnelCRLDPResWeight")
    {
        mplstunnelcrldpresweight = value;
        mplstunnelcrldpresweight.value_namespace = name_space;
        mplstunnelcrldpresweight.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResExBurstSize")
    {
        mplstunnelcrldpresexburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResFlags")
    {
        mplstunnelcrldpresflags.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResFrequency")
    {
        mplstunnelcrldpresfrequency.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResMeanBurstSize")
    {
        mplstunnelcrldpresmeanburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResRowStatus")
    {
        mplstunnelcrldpresrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResStorageType")
    {
        mplstunnelcrldpresstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCRLDPResWeight")
    {
        mplstunnelcrldpresweight.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelResourceIndex" || name == "mplsTunnelCRLDPResExBurstSize" || name == "mplsTunnelCRLDPResFlags" || name == "mplsTunnelCRLDPResFrequency" || name == "mplsTunnelCRLDPResMeanBurstSize" || name == "mplsTunnelCRLDPResRowStatus" || name == "mplsTunnelCRLDPResStorageType" || name == "mplsTunnelCRLDPResWeight")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhoptable()
{

    yang_name = "mplsTunnelHopTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelhoptable::~Mplstunnelhoptable()
{
}

bool MPLSTESTDMIB::Mplstunnelhoptable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelhopentry.size(); index++)
    {
        if(mplstunnelhopentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::Mplstunnelhoptable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelhopentry.size(); index++)
    {
        if(mplstunnelhopentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelhoptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelhoptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelHopTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelhoptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelhoptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry>();
        c->parent = this;
        mplstunnelhopentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelhoptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelhopentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MPLSTESTDMIB::Mplstunnelhoptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::Mplstunnelhoptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::Mplstunnelhoptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelHopEntry")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhopentry()
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

    yang_name = "mplsTunnelHopEntry"; yang_parent_name = "mplsTunnelHopTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::~Mplstunnelhopentry()
{
}

bool MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::has_data() const
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

bool MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelhoplistindex.yfilter)
	|| ydk::is_set(mplstunnelhoppathoptionindex.yfilter)
	|| ydk::is_set(mplstunnelhopindex.yfilter)
	|| ydk::is_set(mplstunnelhopaddrtype.yfilter)
	|| ydk::is_set(mplstunnelhopaddrunnum.yfilter)
	|| ydk::is_set(mplstunnelhopasnumber.yfilter)
	|| ydk::is_set(mplstunnelhopentrypathcomp.yfilter)
	|| ydk::is_set(mplstunnelhopinclude.yfilter)
	|| ydk::is_set(mplstunnelhopipaddr.yfilter)
	|| ydk::is_set(mplstunnelhopipprefixlen.yfilter)
	|| ydk::is_set(mplstunnelhoplspid.yfilter)
	|| ydk::is_set(mplstunnelhoppathoptionname.yfilter)
	|| ydk::is_set(mplstunnelhoprowstatus.yfilter)
	|| ydk::is_set(mplstunnelhopstoragetype.yfilter)
	|| ydk::is_set(mplstunnelhoptype.yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelHopTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelHopEntry" <<"[mplsTunnelHopListIndex='" <<mplstunnelhoplistindex <<"']" <<"[mplsTunnelHopPathOptionIndex='" <<mplstunnelhoppathoptionindex <<"']" <<"[mplsTunnelHopIndex='" <<mplstunnelhopindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelhoplistindex.is_set || is_set(mplstunnelhoplistindex.yfilter)) leaf_name_data.push_back(mplstunnelhoplistindex.get_name_leafdata());
    if (mplstunnelhoppathoptionindex.is_set || is_set(mplstunnelhoppathoptionindex.yfilter)) leaf_name_data.push_back(mplstunnelhoppathoptionindex.get_name_leafdata());
    if (mplstunnelhopindex.is_set || is_set(mplstunnelhopindex.yfilter)) leaf_name_data.push_back(mplstunnelhopindex.get_name_leafdata());
    if (mplstunnelhopaddrtype.is_set || is_set(mplstunnelhopaddrtype.yfilter)) leaf_name_data.push_back(mplstunnelhopaddrtype.get_name_leafdata());
    if (mplstunnelhopaddrunnum.is_set || is_set(mplstunnelhopaddrunnum.yfilter)) leaf_name_data.push_back(mplstunnelhopaddrunnum.get_name_leafdata());
    if (mplstunnelhopasnumber.is_set || is_set(mplstunnelhopasnumber.yfilter)) leaf_name_data.push_back(mplstunnelhopasnumber.get_name_leafdata());
    if (mplstunnelhopentrypathcomp.is_set || is_set(mplstunnelhopentrypathcomp.yfilter)) leaf_name_data.push_back(mplstunnelhopentrypathcomp.get_name_leafdata());
    if (mplstunnelhopinclude.is_set || is_set(mplstunnelhopinclude.yfilter)) leaf_name_data.push_back(mplstunnelhopinclude.get_name_leafdata());
    if (mplstunnelhopipaddr.is_set || is_set(mplstunnelhopipaddr.yfilter)) leaf_name_data.push_back(mplstunnelhopipaddr.get_name_leafdata());
    if (mplstunnelhopipprefixlen.is_set || is_set(mplstunnelhopipprefixlen.yfilter)) leaf_name_data.push_back(mplstunnelhopipprefixlen.get_name_leafdata());
    if (mplstunnelhoplspid.is_set || is_set(mplstunnelhoplspid.yfilter)) leaf_name_data.push_back(mplstunnelhoplspid.get_name_leafdata());
    if (mplstunnelhoppathoptionname.is_set || is_set(mplstunnelhoppathoptionname.yfilter)) leaf_name_data.push_back(mplstunnelhoppathoptionname.get_name_leafdata());
    if (mplstunnelhoprowstatus.is_set || is_set(mplstunnelhoprowstatus.yfilter)) leaf_name_data.push_back(mplstunnelhoprowstatus.get_name_leafdata());
    if (mplstunnelhopstoragetype.is_set || is_set(mplstunnelhopstoragetype.yfilter)) leaf_name_data.push_back(mplstunnelhopstoragetype.get_name_leafdata());
    if (mplstunnelhoptype.is_set || is_set(mplstunnelhoptype.yfilter)) leaf_name_data.push_back(mplstunnelhoptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsTunnelHopAddrUnnum")
    {
        mplstunnelhopaddrunnum = value;
        mplstunnelhopaddrunnum.value_namespace = name_space;
        mplstunnelhopaddrunnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopAsNumber")
    {
        mplstunnelhopasnumber = value;
        mplstunnelhopasnumber.value_namespace = name_space;
        mplstunnelhopasnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopEntryPathComp")
    {
        mplstunnelhopentrypathcomp = value;
        mplstunnelhopentrypathcomp.value_namespace = name_space;
        mplstunnelhopentrypathcomp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopInclude")
    {
        mplstunnelhopinclude = value;
        mplstunnelhopinclude.value_namespace = name_space;
        mplstunnelhopinclude.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsTunnelHopLspId")
    {
        mplstunnelhoplspid = value;
        mplstunnelhoplspid.value_namespace = name_space;
        mplstunnelhoplspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopPathOptionName")
    {
        mplstunnelhoppathoptionname = value;
        mplstunnelhoppathoptionname.value_namespace = name_space;
        mplstunnelhoppathoptionname.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsTunnelHopType")
    {
        mplstunnelhoptype = value;
        mplstunnelhoptype.value_namespace = name_space;
        mplstunnelhoptype.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsTunnelHopAddrUnnum")
    {
        mplstunnelhopaddrunnum.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopAsNumber")
    {
        mplstunnelhopasnumber.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopEntryPathComp")
    {
        mplstunnelhopentrypathcomp.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopInclude")
    {
        mplstunnelhopinclude.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopIpAddr")
    {
        mplstunnelhopipaddr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopIpPrefixLen")
    {
        mplstunnelhopipprefixlen.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopLspId")
    {
        mplstunnelhoplspid.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopPathOptionName")
    {
        mplstunnelhoppathoptionname.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopRowStatus")
    {
        mplstunnelhoprowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopStorageType")
    {
        mplstunnelhopstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopType")
    {
        mplstunnelhoptype.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelHopListIndex" || name == "mplsTunnelHopPathOptionIndex" || name == "mplsTunnelHopIndex" || name == "mplsTunnelHopAddrType" || name == "mplsTunnelHopAddrUnnum" || name == "mplsTunnelHopAsNumber" || name == "mplsTunnelHopEntryPathComp" || name == "mplsTunnelHopInclude" || name == "mplsTunnelHopIpAddr" || name == "mplsTunnelHopIpPrefixLen" || name == "mplsTunnelHopLspId" || name == "mplsTunnelHopPathOptionName" || name == "mplsTunnelHopRowStatus" || name == "mplsTunnelHopStorageType" || name == "mplsTunnelHopType")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourcetable()
{

    yang_name = "mplsTunnelResourceTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelresourcetable::~Mplstunnelresourcetable()
{
}

bool MPLSTESTDMIB::Mplstunnelresourcetable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelresourceentry.size(); index++)
    {
        if(mplstunnelresourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::Mplstunnelresourcetable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelresourceentry.size(); index++)
    {
        if(mplstunnelresourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelresourcetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelresourcetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelResourceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelresourcetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelresourcetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry>();
        c->parent = this;
        mplstunnelresourceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelresourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelresourceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MPLSTESTDMIB::Mplstunnelresourcetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::Mplstunnelresourcetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::Mplstunnelresourcetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelResourceEntry")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::Mplstunnelresourceentry()
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

    yang_name = "mplsTunnelResourceEntry"; yang_parent_name = "mplsTunnelResourceTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::~Mplstunnelresourceentry()
{
}

bool MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::has_data() const
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

bool MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelresourceindex.yfilter)
	|| ydk::is_set(mplstunnelresourceexburstsize.yfilter)
	|| ydk::is_set(mplstunnelresourcefrequency.yfilter)
	|| ydk::is_set(mplstunnelresourcemaxburstsize.yfilter)
	|| ydk::is_set(mplstunnelresourcemaxrate.yfilter)
	|| ydk::is_set(mplstunnelresourcemeanburstsize.yfilter)
	|| ydk::is_set(mplstunnelresourcemeanrate.yfilter)
	|| ydk::is_set(mplstunnelresourcerowstatus.yfilter)
	|| ydk::is_set(mplstunnelresourcestoragetype.yfilter)
	|| ydk::is_set(mplstunnelresourceweight.yfilter);
}

std::string MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelResourceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelResourceEntry" <<"[mplsTunnelResourceIndex='" <<mplstunnelresourceindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelresourceindex.is_set || is_set(mplstunnelresourceindex.yfilter)) leaf_name_data.push_back(mplstunnelresourceindex.get_name_leafdata());
    if (mplstunnelresourceexburstsize.is_set || is_set(mplstunnelresourceexburstsize.yfilter)) leaf_name_data.push_back(mplstunnelresourceexburstsize.get_name_leafdata());
    if (mplstunnelresourcefrequency.is_set || is_set(mplstunnelresourcefrequency.yfilter)) leaf_name_data.push_back(mplstunnelresourcefrequency.get_name_leafdata());
    if (mplstunnelresourcemaxburstsize.is_set || is_set(mplstunnelresourcemaxburstsize.yfilter)) leaf_name_data.push_back(mplstunnelresourcemaxburstsize.get_name_leafdata());
    if (mplstunnelresourcemaxrate.is_set || is_set(mplstunnelresourcemaxrate.yfilter)) leaf_name_data.push_back(mplstunnelresourcemaxrate.get_name_leafdata());
    if (mplstunnelresourcemeanburstsize.is_set || is_set(mplstunnelresourcemeanburstsize.yfilter)) leaf_name_data.push_back(mplstunnelresourcemeanburstsize.get_name_leafdata());
    if (mplstunnelresourcemeanrate.is_set || is_set(mplstunnelresourcemeanrate.yfilter)) leaf_name_data.push_back(mplstunnelresourcemeanrate.get_name_leafdata());
    if (mplstunnelresourcerowstatus.is_set || is_set(mplstunnelresourcerowstatus.yfilter)) leaf_name_data.push_back(mplstunnelresourcerowstatus.get_name_leafdata());
    if (mplstunnelresourcestoragetype.is_set || is_set(mplstunnelresourcestoragetype.yfilter)) leaf_name_data.push_back(mplstunnelresourcestoragetype.get_name_leafdata());
    if (mplstunnelresourceweight.is_set || is_set(mplstunnelresourceweight.yfilter)) leaf_name_data.push_back(mplstunnelresourceweight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex = value;
        mplstunnelresourceindex.value_namespace = name_space;
        mplstunnelresourceindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsTunnelResourceMaxBurstSize")
    {
        mplstunnelresourcemaxburstsize = value;
        mplstunnelresourcemaxburstsize.value_namespace = name_space;
        mplstunnelresourcemaxburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceMaxRate")
    {
        mplstunnelresourcemaxrate = value;
        mplstunnelresourcemaxrate.value_namespace = name_space;
        mplstunnelresourcemaxrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceMeanBurstSize")
    {
        mplstunnelresourcemeanburstsize = value;
        mplstunnelresourcemeanburstsize.value_namespace = name_space;
        mplstunnelresourcemeanburstsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourceMeanRate")
    {
        mplstunnelresourcemeanrate = value;
        mplstunnelresourcemeanrate.value_namespace = name_space;
        mplstunnelresourcemeanrate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsTunnelResourceWeight")
    {
        mplstunnelresourceweight = value;
        mplstunnelresourceweight.value_namespace = name_space;
        mplstunnelresourceweight.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mplsTunnelResourceIndex")
    {
        mplstunnelresourceindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceExBurstSize")
    {
        mplstunnelresourceexburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceFrequency")
    {
        mplstunnelresourcefrequency.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMaxBurstSize")
    {
        mplstunnelresourcemaxburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMaxRate")
    {
        mplstunnelresourcemaxrate.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMeanBurstSize")
    {
        mplstunnelresourcemeanburstsize.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceMeanRate")
    {
        mplstunnelresourcemeanrate.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceRowStatus")
    {
        mplstunnelresourcerowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceStorageType")
    {
        mplstunnelresourcestoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourceWeight")
    {
        mplstunnelresourceweight.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelResourceIndex" || name == "mplsTunnelResourceExBurstSize" || name == "mplsTunnelResourceFrequency" || name == "mplsTunnelResourceMaxBurstSize" || name == "mplsTunnelResourceMaxRate" || name == "mplsTunnelResourceMeanBurstSize" || name == "mplsTunnelResourceMeanRate" || name == "mplsTunnelResourceRowStatus" || name == "mplsTunnelResourceStorageType" || name == "mplsTunnelResourceWeight")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunneltable::Mplstunneltable()
{

    yang_name = "mplsTunnelTable"; yang_parent_name = "MPLS-TE-STD-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunneltable::~Mplstunneltable()
{
}

bool MPLSTESTDMIB::Mplstunneltable::has_data() const
{
    for (std::size_t index=0; index<mplstunnelentry.size(); index++)
    {
        if(mplstunnelentry[index]->has_data())
            return true;
    }
    return false;
}

bool MPLSTESTDMIB::Mplstunneltable::has_operation() const
{
    for (std::size_t index=0; index<mplstunnelentry.size(); index++)
    {
        if(mplstunnelentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MPLSTESTDMIB::Mplstunneltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunneltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunneltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunneltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry>();
        c->parent = this;
        mplstunnelentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunneltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mplstunnelentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MPLSTESTDMIB::Mplstunneltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MPLSTESTDMIB::Mplstunneltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MPLSTESTDMIB::Mplstunneltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelEntry")
        return true;
    return false;
}

MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelentry()
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

    yang_name = "mplsTunnelEntry"; yang_parent_name = "mplsTunnelTable"; is_top_level_class = false; has_list_ancestor = false;
}

MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::~Mplstunnelentry()
{
}

bool MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::has_data() const
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

bool MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mplstunnelindex.yfilter)
	|| ydk::is_set(mplstunnelinstance.yfilter)
	|| ydk::is_set(mplstunnelingresslsrid.yfilter)
	|| ydk::is_set(mplstunnelegresslsrid.yfilter)
	|| ydk::is_set(mplstunneladminstatus.yfilter)
	|| ydk::is_set(mplstunnelarhoptableindex.yfilter)
	|| ydk::is_set(mplstunnelchoptableindex.yfilter)
	|| ydk::is_set(mplstunnelcreationtime.yfilter)
	|| ydk::is_set(mplstunneldescr.yfilter)
	|| ydk::is_set(mplstunnelexcludeanyaffinity.yfilter)
	|| ydk::is_set(mplstunnelholdingprio.yfilter)
	|| ydk::is_set(mplstunnelhoptableindex.yfilter)
	|| ydk::is_set(mplstunnelifindex.yfilter)
	|| ydk::is_set(mplstunnelincludeallaffinity.yfilter)
	|| ydk::is_set(mplstunnelincludeanyaffinity.yfilter)
	|| ydk::is_set(mplstunnelinstancepriority.yfilter)
	|| ydk::is_set(mplstunnelinstanceuptime.yfilter)
	|| ydk::is_set(mplstunnelisif.yfilter)
	|| ydk::is_set(mplstunnellastpathchange.yfilter)
	|| ydk::is_set(mplstunnellocalprotectinuse.yfilter)
	|| ydk::is_set(mplstunnelname.yfilter)
	|| ydk::is_set(mplstunneloperstatus.yfilter)
	|| ydk::is_set(mplstunnelowner.yfilter)
	|| ydk::is_set(mplstunnelpathchanges.yfilter)
	|| ydk::is_set(mplstunnelpathinuse.yfilter)
	|| ydk::is_set(mplstunnelperfbytes.yfilter)
	|| ydk::is_set(mplstunnelperferrors.yfilter)
	|| ydk::is_set(mplstunnelperfhcbytes.yfilter)
	|| ydk::is_set(mplstunnelperfhcpackets.yfilter)
	|| ydk::is_set(mplstunnelperfpackets.yfilter)
	|| ydk::is_set(mplstunnelprimaryinstance.yfilter)
	|| ydk::is_set(mplstunnelprimaryuptime.yfilter)
	|| ydk::is_set(mplstunnelresourcepointer.yfilter)
	|| ydk::is_set(mplstunnelrole.yfilter)
	|| ydk::is_set(mplstunnelrowstatus.yfilter)
	|| ydk::is_set(mplstunnelsessionattributes.yfilter)
	|| ydk::is_set(mplstunnelsetupprio.yfilter)
	|| ydk::is_set(mplstunnelsignallingproto.yfilter)
	|| ydk::is_set(mplstunnelstatetransitions.yfilter)
	|| ydk::is_set(mplstunnelstoragetype.yfilter)
	|| ydk::is_set(mplstunneltotaluptime.yfilter)
	|| ydk::is_set(mplstunnelxcpointer.yfilter);
}

std::string MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "MPLS-TE-STD-MIB:MPLS-TE-STD-MIB/mplsTunnelTable/" << get_segment_path();
    return path_buffer.str();
}

std::string MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mplsTunnelEntry" <<"[mplsTunnelIndex='" <<mplstunnelindex <<"']" <<"[mplsTunnelInstance='" <<mplstunnelinstance <<"']" <<"[mplsTunnelIngressLSRId='" <<mplstunnelingresslsrid <<"']" <<"[mplsTunnelEgressLSRId='" <<mplstunnelegresslsrid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mplstunnelindex.is_set || is_set(mplstunnelindex.yfilter)) leaf_name_data.push_back(mplstunnelindex.get_name_leafdata());
    if (mplstunnelinstance.is_set || is_set(mplstunnelinstance.yfilter)) leaf_name_data.push_back(mplstunnelinstance.get_name_leafdata());
    if (mplstunnelingresslsrid.is_set || is_set(mplstunnelingresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelingresslsrid.get_name_leafdata());
    if (mplstunnelegresslsrid.is_set || is_set(mplstunnelegresslsrid.yfilter)) leaf_name_data.push_back(mplstunnelegresslsrid.get_name_leafdata());
    if (mplstunneladminstatus.is_set || is_set(mplstunneladminstatus.yfilter)) leaf_name_data.push_back(mplstunneladminstatus.get_name_leafdata());
    if (mplstunnelarhoptableindex.is_set || is_set(mplstunnelarhoptableindex.yfilter)) leaf_name_data.push_back(mplstunnelarhoptableindex.get_name_leafdata());
    if (mplstunnelchoptableindex.is_set || is_set(mplstunnelchoptableindex.yfilter)) leaf_name_data.push_back(mplstunnelchoptableindex.get_name_leafdata());
    if (mplstunnelcreationtime.is_set || is_set(mplstunnelcreationtime.yfilter)) leaf_name_data.push_back(mplstunnelcreationtime.get_name_leafdata());
    if (mplstunneldescr.is_set || is_set(mplstunneldescr.yfilter)) leaf_name_data.push_back(mplstunneldescr.get_name_leafdata());
    if (mplstunnelexcludeanyaffinity.is_set || is_set(mplstunnelexcludeanyaffinity.yfilter)) leaf_name_data.push_back(mplstunnelexcludeanyaffinity.get_name_leafdata());
    if (mplstunnelholdingprio.is_set || is_set(mplstunnelholdingprio.yfilter)) leaf_name_data.push_back(mplstunnelholdingprio.get_name_leafdata());
    if (mplstunnelhoptableindex.is_set || is_set(mplstunnelhoptableindex.yfilter)) leaf_name_data.push_back(mplstunnelhoptableindex.get_name_leafdata());
    if (mplstunnelifindex.is_set || is_set(mplstunnelifindex.yfilter)) leaf_name_data.push_back(mplstunnelifindex.get_name_leafdata());
    if (mplstunnelincludeallaffinity.is_set || is_set(mplstunnelincludeallaffinity.yfilter)) leaf_name_data.push_back(mplstunnelincludeallaffinity.get_name_leafdata());
    if (mplstunnelincludeanyaffinity.is_set || is_set(mplstunnelincludeanyaffinity.yfilter)) leaf_name_data.push_back(mplstunnelincludeanyaffinity.get_name_leafdata());
    if (mplstunnelinstancepriority.is_set || is_set(mplstunnelinstancepriority.yfilter)) leaf_name_data.push_back(mplstunnelinstancepriority.get_name_leafdata());
    if (mplstunnelinstanceuptime.is_set || is_set(mplstunnelinstanceuptime.yfilter)) leaf_name_data.push_back(mplstunnelinstanceuptime.get_name_leafdata());
    if (mplstunnelisif.is_set || is_set(mplstunnelisif.yfilter)) leaf_name_data.push_back(mplstunnelisif.get_name_leafdata());
    if (mplstunnellastpathchange.is_set || is_set(mplstunnellastpathchange.yfilter)) leaf_name_data.push_back(mplstunnellastpathchange.get_name_leafdata());
    if (mplstunnellocalprotectinuse.is_set || is_set(mplstunnellocalprotectinuse.yfilter)) leaf_name_data.push_back(mplstunnellocalprotectinuse.get_name_leafdata());
    if (mplstunnelname.is_set || is_set(mplstunnelname.yfilter)) leaf_name_data.push_back(mplstunnelname.get_name_leafdata());
    if (mplstunneloperstatus.is_set || is_set(mplstunneloperstatus.yfilter)) leaf_name_data.push_back(mplstunneloperstatus.get_name_leafdata());
    if (mplstunnelowner.is_set || is_set(mplstunnelowner.yfilter)) leaf_name_data.push_back(mplstunnelowner.get_name_leafdata());
    if (mplstunnelpathchanges.is_set || is_set(mplstunnelpathchanges.yfilter)) leaf_name_data.push_back(mplstunnelpathchanges.get_name_leafdata());
    if (mplstunnelpathinuse.is_set || is_set(mplstunnelpathinuse.yfilter)) leaf_name_data.push_back(mplstunnelpathinuse.get_name_leafdata());
    if (mplstunnelperfbytes.is_set || is_set(mplstunnelperfbytes.yfilter)) leaf_name_data.push_back(mplstunnelperfbytes.get_name_leafdata());
    if (mplstunnelperferrors.is_set || is_set(mplstunnelperferrors.yfilter)) leaf_name_data.push_back(mplstunnelperferrors.get_name_leafdata());
    if (mplstunnelperfhcbytes.is_set || is_set(mplstunnelperfhcbytes.yfilter)) leaf_name_data.push_back(mplstunnelperfhcbytes.get_name_leafdata());
    if (mplstunnelperfhcpackets.is_set || is_set(mplstunnelperfhcpackets.yfilter)) leaf_name_data.push_back(mplstunnelperfhcpackets.get_name_leafdata());
    if (mplstunnelperfpackets.is_set || is_set(mplstunnelperfpackets.yfilter)) leaf_name_data.push_back(mplstunnelperfpackets.get_name_leafdata());
    if (mplstunnelprimaryinstance.is_set || is_set(mplstunnelprimaryinstance.yfilter)) leaf_name_data.push_back(mplstunnelprimaryinstance.get_name_leafdata());
    if (mplstunnelprimaryuptime.is_set || is_set(mplstunnelprimaryuptime.yfilter)) leaf_name_data.push_back(mplstunnelprimaryuptime.get_name_leafdata());
    if (mplstunnelresourcepointer.is_set || is_set(mplstunnelresourcepointer.yfilter)) leaf_name_data.push_back(mplstunnelresourcepointer.get_name_leafdata());
    if (mplstunnelrole.is_set || is_set(mplstunnelrole.yfilter)) leaf_name_data.push_back(mplstunnelrole.get_name_leafdata());
    if (mplstunnelrowstatus.is_set || is_set(mplstunnelrowstatus.yfilter)) leaf_name_data.push_back(mplstunnelrowstatus.get_name_leafdata());
    if (mplstunnelsessionattributes.is_set || is_set(mplstunnelsessionattributes.yfilter)) leaf_name_data.push_back(mplstunnelsessionattributes.get_name_leafdata());
    if (mplstunnelsetupprio.is_set || is_set(mplstunnelsetupprio.yfilter)) leaf_name_data.push_back(mplstunnelsetupprio.get_name_leafdata());
    if (mplstunnelsignallingproto.is_set || is_set(mplstunnelsignallingproto.yfilter)) leaf_name_data.push_back(mplstunnelsignallingproto.get_name_leafdata());
    if (mplstunnelstatetransitions.is_set || is_set(mplstunnelstatetransitions.yfilter)) leaf_name_data.push_back(mplstunnelstatetransitions.get_name_leafdata());
    if (mplstunnelstoragetype.is_set || is_set(mplstunnelstoragetype.yfilter)) leaf_name_data.push_back(mplstunnelstoragetype.get_name_leafdata());
    if (mplstunneltotaluptime.is_set || is_set(mplstunneltotaluptime.yfilter)) leaf_name_data.push_back(mplstunneltotaluptime.get_name_leafdata());
    if (mplstunnelxcpointer.is_set || is_set(mplstunnelxcpointer.yfilter)) leaf_name_data.push_back(mplstunnelxcpointer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mplsTunnelAdminStatus")
    {
        mplstunneladminstatus = value;
        mplstunneladminstatus.value_namespace = name_space;
        mplstunneladminstatus.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mplsTunnelCreationTime")
    {
        mplstunnelcreationtime = value;
        mplstunnelcreationtime.value_namespace = name_space;
        mplstunnelcreationtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelDescr")
    {
        mplstunneldescr = value;
        mplstunneldescr.value_namespace = name_space;
        mplstunneldescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelExcludeAnyAffinity")
    {
        mplstunnelexcludeanyaffinity = value;
        mplstunnelexcludeanyaffinity.value_namespace = name_space;
        mplstunnelexcludeanyaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHoldingPrio")
    {
        mplstunnelholdingprio = value;
        mplstunnelholdingprio.value_namespace = name_space;
        mplstunnelholdingprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelHopTableIndex")
    {
        mplstunnelhoptableindex = value;
        mplstunnelhoptableindex.value_namespace = name_space;
        mplstunnelhoptableindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIfIndex")
    {
        mplstunnelifindex = value;
        mplstunnelifindex.value_namespace = name_space;
        mplstunnelifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIncludeAllAffinity")
    {
        mplstunnelincludeallaffinity = value;
        mplstunnelincludeallaffinity.value_namespace = name_space;
        mplstunnelincludeallaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIncludeAnyAffinity")
    {
        mplstunnelincludeanyaffinity = value;
        mplstunnelincludeanyaffinity.value_namespace = name_space;
        mplstunnelincludeanyaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstancePriority")
    {
        mplstunnelinstancepriority = value;
        mplstunnelinstancepriority.value_namespace = name_space;
        mplstunnelinstancepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelInstanceUpTime")
    {
        mplstunnelinstanceuptime = value;
        mplstunnelinstanceuptime.value_namespace = name_space;
        mplstunnelinstanceuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelIsIf")
    {
        mplstunnelisif = value;
        mplstunnelisif.value_namespace = name_space;
        mplstunnelisif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelLastPathChange")
    {
        mplstunnellastpathchange = value;
        mplstunnellastpathchange.value_namespace = name_space;
        mplstunnellastpathchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelLocalProtectInUse")
    {
        mplstunnellocalprotectinuse = value;
        mplstunnellocalprotectinuse.value_namespace = name_space;
        mplstunnellocalprotectinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelName")
    {
        mplstunnelname = value;
        mplstunnelname.value_namespace = name_space;
        mplstunnelname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelOperStatus")
    {
        mplstunneloperstatus = value;
        mplstunneloperstatus.value_namespace = name_space;
        mplstunneloperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelOwner")
    {
        mplstunnelowner = value;
        mplstunnelowner.value_namespace = name_space;
        mplstunnelowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPathChanges")
    {
        mplstunnelpathchanges = value;
        mplstunnelpathchanges.value_namespace = name_space;
        mplstunnelpathchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPathInUse")
    {
        mplstunnelpathinuse = value;
        mplstunnelpathinuse.value_namespace = name_space;
        mplstunnelpathinuse.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfBytes")
    {
        mplstunnelperfbytes = value;
        mplstunnelperfbytes.value_namespace = name_space;
        mplstunnelperfbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfErrors")
    {
        mplstunnelperferrors = value;
        mplstunnelperferrors.value_namespace = name_space;
        mplstunnelperferrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfHCBytes")
    {
        mplstunnelperfhcbytes = value;
        mplstunnelperfhcbytes.value_namespace = name_space;
        mplstunnelperfhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfHCPackets")
    {
        mplstunnelperfhcpackets = value;
        mplstunnelperfhcpackets.value_namespace = name_space;
        mplstunnelperfhcpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPerfPackets")
    {
        mplstunnelperfpackets = value;
        mplstunnelperfpackets.value_namespace = name_space;
        mplstunnelperfpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPrimaryInstance")
    {
        mplstunnelprimaryinstance = value;
        mplstunnelprimaryinstance.value_namespace = name_space;
        mplstunnelprimaryinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelPrimaryUpTime")
    {
        mplstunnelprimaryuptime = value;
        mplstunnelprimaryuptime.value_namespace = name_space;
        mplstunnelprimaryuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelResourcePointer")
    {
        mplstunnelresourcepointer = value;
        mplstunnelresourcepointer.value_namespace = name_space;
        mplstunnelresourcepointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelRole")
    {
        mplstunnelrole = value;
        mplstunnelrole.value_namespace = name_space;
        mplstunnelrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelRowStatus")
    {
        mplstunnelrowstatus = value;
        mplstunnelrowstatus.value_namespace = name_space;
        mplstunnelrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelSessionAttributes")
    {
        mplstunnelsessionattributes[value] = true;
    }
    if(value_path == "mplsTunnelSetupPrio")
    {
        mplstunnelsetupprio = value;
        mplstunnelsetupprio.value_namespace = name_space;
        mplstunnelsetupprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelSignallingProto")
    {
        mplstunnelsignallingproto = value;
        mplstunnelsignallingproto.value_namespace = name_space;
        mplstunnelsignallingproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelStateTransitions")
    {
        mplstunnelstatetransitions = value;
        mplstunnelstatetransitions.value_namespace = name_space;
        mplstunnelstatetransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelStorageType")
    {
        mplstunnelstoragetype = value;
        mplstunnelstoragetype.value_namespace = name_space;
        mplstunnelstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelTotalUpTime")
    {
        mplstunneltotaluptime = value;
        mplstunneltotaluptime.value_namespace = name_space;
        mplstunneltotaluptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mplsTunnelXCPointer")
    {
        mplstunnelxcpointer = value;
        mplstunnelxcpointer.value_namespace = name_space;
        mplstunnelxcpointer.value_namespace_prefix = name_space_prefix;
    }
}

void MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "mplsTunnelAdminStatus")
    {
        mplstunneladminstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelARHopTableIndex")
    {
        mplstunnelarhoptableindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCHopTableIndex")
    {
        mplstunnelchoptableindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelCreationTime")
    {
        mplstunnelcreationtime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelDescr")
    {
        mplstunneldescr.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelExcludeAnyAffinity")
    {
        mplstunnelexcludeanyaffinity.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHoldingPrio")
    {
        mplstunnelholdingprio.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelHopTableIndex")
    {
        mplstunnelhoptableindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIfIndex")
    {
        mplstunnelifindex.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIncludeAllAffinity")
    {
        mplstunnelincludeallaffinity.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIncludeAnyAffinity")
    {
        mplstunnelincludeanyaffinity.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstancePriority")
    {
        mplstunnelinstancepriority.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelInstanceUpTime")
    {
        mplstunnelinstanceuptime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelIsIf")
    {
        mplstunnelisif.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelLastPathChange")
    {
        mplstunnellastpathchange.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelLocalProtectInUse")
    {
        mplstunnellocalprotectinuse.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelName")
    {
        mplstunnelname.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelOperStatus")
    {
        mplstunneloperstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelOwner")
    {
        mplstunnelowner.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPathChanges")
    {
        mplstunnelpathchanges.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPathInUse")
    {
        mplstunnelpathinuse.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfBytes")
    {
        mplstunnelperfbytes.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfErrors")
    {
        mplstunnelperferrors.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfHCBytes")
    {
        mplstunnelperfhcbytes.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfHCPackets")
    {
        mplstunnelperfhcpackets.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPerfPackets")
    {
        mplstunnelperfpackets.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPrimaryInstance")
    {
        mplstunnelprimaryinstance.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelPrimaryUpTime")
    {
        mplstunnelprimaryuptime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelResourcePointer")
    {
        mplstunnelresourcepointer.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelRole")
    {
        mplstunnelrole.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelRowStatus")
    {
        mplstunnelrowstatus.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelSessionAttributes")
    {
        mplstunnelsessionattributes.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelSetupPrio")
    {
        mplstunnelsetupprio.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelSignallingProto")
    {
        mplstunnelsignallingproto.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelStateTransitions")
    {
        mplstunnelstatetransitions.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelStorageType")
    {
        mplstunnelstoragetype.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelTotalUpTime")
    {
        mplstunneltotaluptime.yfilter = yfilter;
    }
    if(value_path == "mplsTunnelXCPointer")
    {
        mplstunnelxcpointer.yfilter = yfilter;
    }
}

bool MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mplsTunnelIndex" || name == "mplsTunnelInstance" || name == "mplsTunnelIngressLSRId" || name == "mplsTunnelEgressLSRId" || name == "mplsTunnelAdminStatus" || name == "mplsTunnelARHopTableIndex" || name == "mplsTunnelCHopTableIndex" || name == "mplsTunnelCreationTime" || name == "mplsTunnelDescr" || name == "mplsTunnelExcludeAnyAffinity" || name == "mplsTunnelHoldingPrio" || name == "mplsTunnelHopTableIndex" || name == "mplsTunnelIfIndex" || name == "mplsTunnelIncludeAllAffinity" || name == "mplsTunnelIncludeAnyAffinity" || name == "mplsTunnelInstancePriority" || name == "mplsTunnelInstanceUpTime" || name == "mplsTunnelIsIf" || name == "mplsTunnelLastPathChange" || name == "mplsTunnelLocalProtectInUse" || name == "mplsTunnelName" || name == "mplsTunnelOperStatus" || name == "mplsTunnelOwner" || name == "mplsTunnelPathChanges" || name == "mplsTunnelPathInUse" || name == "mplsTunnelPerfBytes" || name == "mplsTunnelPerfErrors" || name == "mplsTunnelPerfHCBytes" || name == "mplsTunnelPerfHCPackets" || name == "mplsTunnelPerfPackets" || name == "mplsTunnelPrimaryInstance" || name == "mplsTunnelPrimaryUpTime" || name == "mplsTunnelResourcePointer" || name == "mplsTunnelRole" || name == "mplsTunnelRowStatus" || name == "mplsTunnelSessionAttributes" || name == "mplsTunnelSetupPrio" || name == "mplsTunnelSignallingProto" || name == "mplsTunnelStateTransitions" || name == "mplsTunnelStorageType" || name == "mplsTunnelTotalUpTime" || name == "mplsTunnelXCPointer")
        return true;
    return false;
}

const Enum::YLeaf MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::Mplstunnelchoptype::strict {1, "strict"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunnelchoptable::Mplstunnelchopentry::Mplstunnelchoptype::loose {2, "loose"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::Mplstunnelcrldpresfrequency::unspecified {1, "unspecified"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::Mplstunnelcrldpresfrequency::frequent {2, "frequent"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunnelcrldprestable::Mplstunnelcrldpresentry::Mplstunnelcrldpresfrequency::veryFrequent {3, "veryFrequent"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhoptype::strict {1, "strict"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhoptype::loose {2, "loose"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhopentrypathcomp::dynamic {1, "dynamic"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunnelhoptable::Mplstunnelhopentry::Mplstunnelhopentrypathcomp::explicit_ {2, "explicit"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::Mplstunnelresourcefrequency::unspecified {1, "unspecified"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::Mplstunnelresourcefrequency::frequent {2, "frequent"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunnelresourcetable::Mplstunnelresourceentry::Mplstunnelresourcefrequency::veryFrequent {3, "veryFrequent"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelrole::head {1, "head"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelrole::transit {2, "transit"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelrole::tail {3, "tail"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelrole::headTail {4, "headTail"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelsignallingproto::none {1, "none"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelsignallingproto::rsvp {2, "rsvp"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelsignallingproto::crldp {3, "crldp"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunnelsignallingproto::other {4, "other"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneladminstatus::up {1, "up"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneladminstatus::down {2, "down"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneladminstatus::testing {3, "testing"};

const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus::up {1, "up"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus::down {2, "down"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus::testing {3, "testing"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus::unknown {4, "unknown"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus::dormant {5, "dormant"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus::notPresent {6, "notPresent"};
const Enum::YLeaf MPLSTESTDMIB::Mplstunneltable::Mplstunnelentry::Mplstunneloperstatus::lowerLayerDown {7, "lowerLayerDown"};


}
}

