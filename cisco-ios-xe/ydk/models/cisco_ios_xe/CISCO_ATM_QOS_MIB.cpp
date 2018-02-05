
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ATM_QOS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ATM_QOS_MIB {

CISCOATMQOSMIB::CISCOATMQOSMIB()
    :
    caqvccparamstable(std::make_shared<CISCOATMQOSMIB::Caqvccparamstable>())
	,caqvpcparamstable(std::make_shared<CISCOATMQOSMIB::Caqvpcparamstable>())
	,caqqueuingparamstable(std::make_shared<CISCOATMQOSMIB::Caqqueuingparamstable>())
	,caqqueuingparamsclasstable(std::make_shared<CISCOATMQOSMIB::Caqqueuingparamsclasstable>())
{
    caqvccparamstable->parent = this;
    caqvpcparamstable->parent = this;
    caqqueuingparamstable->parent = this;
    caqqueuingparamsclasstable->parent = this;

    yang_name = "CISCO-ATM-QOS-MIB"; yang_parent_name = "CISCO-ATM-QOS-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOATMQOSMIB::~CISCOATMQOSMIB()
{
}

bool CISCOATMQOSMIB::has_data() const
{
    return (caqvccparamstable !=  nullptr && caqvccparamstable->has_data())
	|| (caqvpcparamstable !=  nullptr && caqvpcparamstable->has_data())
	|| (caqqueuingparamstable !=  nullptr && caqqueuingparamstable->has_data())
	|| (caqqueuingparamsclasstable !=  nullptr && caqqueuingparamsclasstable->has_data());
}

bool CISCOATMQOSMIB::has_operation() const
{
    return is_set(yfilter)
	|| (caqvccparamstable !=  nullptr && caqvccparamstable->has_operation())
	|| (caqvpcparamstable !=  nullptr && caqvpcparamstable->has_operation())
	|| (caqqueuingparamstable !=  nullptr && caqqueuingparamstable->has_operation())
	|| (caqqueuingparamsclasstable !=  nullptr && caqqueuingparamsclasstable->has_operation());
}

std::string CISCOATMQOSMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqVccParamsTable")
    {
        if(caqvccparamstable == nullptr)
        {
            caqvccparamstable = std::make_shared<CISCOATMQOSMIB::Caqvccparamstable>();
        }
        return caqvccparamstable;
    }

    if(child_yang_name == "caqVpcParamsTable")
    {
        if(caqvpcparamstable == nullptr)
        {
            caqvpcparamstable = std::make_shared<CISCOATMQOSMIB::Caqvpcparamstable>();
        }
        return caqvpcparamstable;
    }

    if(child_yang_name == "caqQueuingParamsTable")
    {
        if(caqqueuingparamstable == nullptr)
        {
            caqqueuingparamstable = std::make_shared<CISCOATMQOSMIB::Caqqueuingparamstable>();
        }
        return caqqueuingparamstable;
    }

    if(child_yang_name == "caqQueuingParamsClassTable")
    {
        if(caqqueuingparamsclasstable == nullptr)
        {
            caqqueuingparamsclasstable = std::make_shared<CISCOATMQOSMIB::Caqqueuingparamsclasstable>();
        }
        return caqqueuingparamsclasstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(caqvccparamstable != nullptr)
    {
        children["caqVccParamsTable"] = caqvccparamstable;
    }

    if(caqvpcparamstable != nullptr)
    {
        children["caqVpcParamsTable"] = caqvpcparamstable;
    }

    if(caqqueuingparamstable != nullptr)
    {
        children["caqQueuingParamsTable"] = caqqueuingparamstable;
    }

    if(caqqueuingparamsclasstable != nullptr)
    {
        children["caqQueuingParamsClassTable"] = caqqueuingparamsclasstable;
    }

    return children;
}

void CISCOATMQOSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMQOSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOATMQOSMIB::clone_ptr() const
{
    return std::make_shared<CISCOATMQOSMIB>();
}

std::string CISCOATMQOSMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOATMQOSMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOATMQOSMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOATMQOSMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOATMQOSMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "caqVccParamsTable" || name == "caqVpcParamsTable" || name == "caqQueuingParamsTable" || name == "caqQueuingParamsClassTable")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamstable()
{

    yang_name = "caqVccParamsTable"; yang_parent_name = "CISCO-ATM-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqvccparamstable::~Caqvccparamstable()
{
}

bool CISCOATMQOSMIB::Caqvccparamstable::has_data() const
{
    for (std::size_t index=0; index<caqvccparamsentry.size(); index++)
    {
        if(caqvccparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMQOSMIB::Caqvccparamstable::has_operation() const
{
    for (std::size_t index=0; index<caqvccparamsentry.size(); index++)
    {
        if(caqvccparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMQOSMIB::Caqvccparamstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqvccparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVccParamsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqvccparamstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqvccparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqVccParamsEntry")
    {
        auto c = std::make_shared<CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry>();
        c->parent = this;
        caqvccparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqvccparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : caqvccparamsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOATMQOSMIB::Caqvccparamstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMQOSMIB::Caqvccparamstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMQOSMIB::Caqvccparamstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "caqVccParamsEntry")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::Caqvccparamsentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    caqvccparamstype{YType::enumeration, "caqVccParamsType"},
    caqvccparamspcrin0{YType::uint32, "caqVccParamsPcrIn0"},
    caqvccparamspcrin01{YType::uint32, "caqVccParamsPcrIn01"},
    caqvccparamspcrout0{YType::uint32, "caqVccParamsPcrOut0"},
    caqvccparamspcrout01{YType::uint32, "caqVccParamsPcrOut01"},
    caqvccparamsscrin0{YType::uint32, "caqVccParamsScrIn0"},
    caqvccparamsscrin01{YType::uint32, "caqVccParamsScrIn01"},
    caqvccparamsscrout0{YType::uint32, "caqVccParamsScrOut0"},
    caqvccparamsscrout01{YType::uint32, "caqVccParamsScrOut01"},
    caqvccparamsbcsin0{YType::uint32, "caqVccParamsBcsIn0"},
    caqvccparamsbcsin01{YType::uint32, "caqVccParamsBcsIn01"},
    caqvccparamsbcsout0{YType::uint32, "caqVccParamsBcsOut0"},
    caqvccparamsbcsout01{YType::uint32, "caqVccParamsBcsOut01"},
    caqvccparamsinheritlevel{YType::enumeration, "caqVccParamsInheritLevel"},
    caqvccparamsmcrin{YType::uint32, "caqVccParamsMcrIn"},
    caqvccparamsmcrout{YType::uint32, "caqVccParamsMcrOut"},
    caqvccparamsinvrdf{YType::uint32, "caqVccParamsInvRdf"},
    caqvccparamsinvrif{YType::uint32, "caqVccParamsInvRif"},
    caqvccparamsrfl{YType::enumeration, "caqVccParamsRfl"},
    caqvccparamscdv{YType::uint32, "caqVccParamsCdv"},
    caqvccparamscdvt{YType::uint32, "caqVccParamsCdvt"},
    caqvccparamsicr{YType::uint32, "caqVccParamsIcr"},
    caqvccparamstbe{YType::uint32, "caqVccParamsTbe"},
    caqvccparamsfrtt{YType::uint32, "caqVccParamsFrtt"},
    caqvccparamsnrm{YType::uint32, "caqVccParamsNrm"},
    caqvccparamsinvtrm{YType::uint32, "caqVccParamsInvTrm"},
    caqvccparamsinvcdf{YType::uint32, "caqVccParamsInvCdf"},
    caqvccparamsadtf{YType::uint32, "caqVccParamsAdtf"}
{

    yang_name = "caqVccParamsEntry"; yang_parent_name = "caqVccParamsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::~Caqvccparamsentry()
{
}

bool CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| caqvccparamstype.is_set
	|| caqvccparamspcrin0.is_set
	|| caqvccparamspcrin01.is_set
	|| caqvccparamspcrout0.is_set
	|| caqvccparamspcrout01.is_set
	|| caqvccparamsscrin0.is_set
	|| caqvccparamsscrin01.is_set
	|| caqvccparamsscrout0.is_set
	|| caqvccparamsscrout01.is_set
	|| caqvccparamsbcsin0.is_set
	|| caqvccparamsbcsin01.is_set
	|| caqvccparamsbcsout0.is_set
	|| caqvccparamsbcsout01.is_set
	|| caqvccparamsinheritlevel.is_set
	|| caqvccparamsmcrin.is_set
	|| caqvccparamsmcrout.is_set
	|| caqvccparamsinvrdf.is_set
	|| caqvccparamsinvrif.is_set
	|| caqvccparamsrfl.is_set
	|| caqvccparamscdv.is_set
	|| caqvccparamscdvt.is_set
	|| caqvccparamsicr.is_set
	|| caqvccparamstbe.is_set
	|| caqvccparamsfrtt.is_set
	|| caqvccparamsnrm.is_set
	|| caqvccparamsinvtrm.is_set
	|| caqvccparamsinvcdf.is_set
	|| caqvccparamsadtf.is_set;
}

bool CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(caqvccparamstype.yfilter)
	|| ydk::is_set(caqvccparamspcrin0.yfilter)
	|| ydk::is_set(caqvccparamspcrin01.yfilter)
	|| ydk::is_set(caqvccparamspcrout0.yfilter)
	|| ydk::is_set(caqvccparamspcrout01.yfilter)
	|| ydk::is_set(caqvccparamsscrin0.yfilter)
	|| ydk::is_set(caqvccparamsscrin01.yfilter)
	|| ydk::is_set(caqvccparamsscrout0.yfilter)
	|| ydk::is_set(caqvccparamsscrout01.yfilter)
	|| ydk::is_set(caqvccparamsbcsin0.yfilter)
	|| ydk::is_set(caqvccparamsbcsin01.yfilter)
	|| ydk::is_set(caqvccparamsbcsout0.yfilter)
	|| ydk::is_set(caqvccparamsbcsout01.yfilter)
	|| ydk::is_set(caqvccparamsinheritlevel.yfilter)
	|| ydk::is_set(caqvccparamsmcrin.yfilter)
	|| ydk::is_set(caqvccparamsmcrout.yfilter)
	|| ydk::is_set(caqvccparamsinvrdf.yfilter)
	|| ydk::is_set(caqvccparamsinvrif.yfilter)
	|| ydk::is_set(caqvccparamsrfl.yfilter)
	|| ydk::is_set(caqvccparamscdv.yfilter)
	|| ydk::is_set(caqvccparamscdvt.yfilter)
	|| ydk::is_set(caqvccparamsicr.yfilter)
	|| ydk::is_set(caqvccparamstbe.yfilter)
	|| ydk::is_set(caqvccparamsfrtt.yfilter)
	|| ydk::is_set(caqvccparamsnrm.yfilter)
	|| ydk::is_set(caqvccparamsinvtrm.yfilter)
	|| ydk::is_set(caqvccparamsinvcdf.yfilter)
	|| ydk::is_set(caqvccparamsadtf.yfilter);
}

std::string CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqVccParamsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVccParamsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (caqvccparamstype.is_set || is_set(caqvccparamstype.yfilter)) leaf_name_data.push_back(caqvccparamstype.get_name_leafdata());
    if (caqvccparamspcrin0.is_set || is_set(caqvccparamspcrin0.yfilter)) leaf_name_data.push_back(caqvccparamspcrin0.get_name_leafdata());
    if (caqvccparamspcrin01.is_set || is_set(caqvccparamspcrin01.yfilter)) leaf_name_data.push_back(caqvccparamspcrin01.get_name_leafdata());
    if (caqvccparamspcrout0.is_set || is_set(caqvccparamspcrout0.yfilter)) leaf_name_data.push_back(caqvccparamspcrout0.get_name_leafdata());
    if (caqvccparamspcrout01.is_set || is_set(caqvccparamspcrout01.yfilter)) leaf_name_data.push_back(caqvccparamspcrout01.get_name_leafdata());
    if (caqvccparamsscrin0.is_set || is_set(caqvccparamsscrin0.yfilter)) leaf_name_data.push_back(caqvccparamsscrin0.get_name_leafdata());
    if (caqvccparamsscrin01.is_set || is_set(caqvccparamsscrin01.yfilter)) leaf_name_data.push_back(caqvccparamsscrin01.get_name_leafdata());
    if (caqvccparamsscrout0.is_set || is_set(caqvccparamsscrout0.yfilter)) leaf_name_data.push_back(caqvccparamsscrout0.get_name_leafdata());
    if (caqvccparamsscrout01.is_set || is_set(caqvccparamsscrout01.yfilter)) leaf_name_data.push_back(caqvccparamsscrout01.get_name_leafdata());
    if (caqvccparamsbcsin0.is_set || is_set(caqvccparamsbcsin0.yfilter)) leaf_name_data.push_back(caqvccparamsbcsin0.get_name_leafdata());
    if (caqvccparamsbcsin01.is_set || is_set(caqvccparamsbcsin01.yfilter)) leaf_name_data.push_back(caqvccparamsbcsin01.get_name_leafdata());
    if (caqvccparamsbcsout0.is_set || is_set(caqvccparamsbcsout0.yfilter)) leaf_name_data.push_back(caqvccparamsbcsout0.get_name_leafdata());
    if (caqvccparamsbcsout01.is_set || is_set(caqvccparamsbcsout01.yfilter)) leaf_name_data.push_back(caqvccparamsbcsout01.get_name_leafdata());
    if (caqvccparamsinheritlevel.is_set || is_set(caqvccparamsinheritlevel.yfilter)) leaf_name_data.push_back(caqvccparamsinheritlevel.get_name_leafdata());
    if (caqvccparamsmcrin.is_set || is_set(caqvccparamsmcrin.yfilter)) leaf_name_data.push_back(caqvccparamsmcrin.get_name_leafdata());
    if (caqvccparamsmcrout.is_set || is_set(caqvccparamsmcrout.yfilter)) leaf_name_data.push_back(caqvccparamsmcrout.get_name_leafdata());
    if (caqvccparamsinvrdf.is_set || is_set(caqvccparamsinvrdf.yfilter)) leaf_name_data.push_back(caqvccparamsinvrdf.get_name_leafdata());
    if (caqvccparamsinvrif.is_set || is_set(caqvccparamsinvrif.yfilter)) leaf_name_data.push_back(caqvccparamsinvrif.get_name_leafdata());
    if (caqvccparamsrfl.is_set || is_set(caqvccparamsrfl.yfilter)) leaf_name_data.push_back(caqvccparamsrfl.get_name_leafdata());
    if (caqvccparamscdv.is_set || is_set(caqvccparamscdv.yfilter)) leaf_name_data.push_back(caqvccparamscdv.get_name_leafdata());
    if (caqvccparamscdvt.is_set || is_set(caqvccparamscdvt.yfilter)) leaf_name_data.push_back(caqvccparamscdvt.get_name_leafdata());
    if (caqvccparamsicr.is_set || is_set(caqvccparamsicr.yfilter)) leaf_name_data.push_back(caqvccparamsicr.get_name_leafdata());
    if (caqvccparamstbe.is_set || is_set(caqvccparamstbe.yfilter)) leaf_name_data.push_back(caqvccparamstbe.get_name_leafdata());
    if (caqvccparamsfrtt.is_set || is_set(caqvccparamsfrtt.yfilter)) leaf_name_data.push_back(caqvccparamsfrtt.get_name_leafdata());
    if (caqvccparamsnrm.is_set || is_set(caqvccparamsnrm.yfilter)) leaf_name_data.push_back(caqvccparamsnrm.get_name_leafdata());
    if (caqvccparamsinvtrm.is_set || is_set(caqvccparamsinvtrm.yfilter)) leaf_name_data.push_back(caqvccparamsinvtrm.get_name_leafdata());
    if (caqvccparamsinvcdf.is_set || is_set(caqvccparamsinvcdf.yfilter)) leaf_name_data.push_back(caqvccparamsinvcdf.get_name_leafdata());
    if (caqvccparamsadtf.is_set || is_set(caqvccparamsadtf.yfilter)) leaf_name_data.push_back(caqvccparamsadtf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
        atmvclvpi.value_namespace = name_space;
        atmvclvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
        atmvclvci.value_namespace = name_space;
        atmvclvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsType")
    {
        caqvccparamstype = value;
        caqvccparamstype.value_namespace = name_space;
        caqvccparamstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsPcrIn0")
    {
        caqvccparamspcrin0 = value;
        caqvccparamspcrin0.value_namespace = name_space;
        caqvccparamspcrin0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsPcrIn01")
    {
        caqvccparamspcrin01 = value;
        caqvccparamspcrin01.value_namespace = name_space;
        caqvccparamspcrin01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsPcrOut0")
    {
        caqvccparamspcrout0 = value;
        caqvccparamspcrout0.value_namespace = name_space;
        caqvccparamspcrout0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsPcrOut01")
    {
        caqvccparamspcrout01 = value;
        caqvccparamspcrout01.value_namespace = name_space;
        caqvccparamspcrout01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsScrIn0")
    {
        caqvccparamsscrin0 = value;
        caqvccparamsscrin0.value_namespace = name_space;
        caqvccparamsscrin0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsScrIn01")
    {
        caqvccparamsscrin01 = value;
        caqvccparamsscrin01.value_namespace = name_space;
        caqvccparamsscrin01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsScrOut0")
    {
        caqvccparamsscrout0 = value;
        caqvccparamsscrout0.value_namespace = name_space;
        caqvccparamsscrout0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsScrOut01")
    {
        caqvccparamsscrout01 = value;
        caqvccparamsscrout01.value_namespace = name_space;
        caqvccparamsscrout01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsBcsIn0")
    {
        caqvccparamsbcsin0 = value;
        caqvccparamsbcsin0.value_namespace = name_space;
        caqvccparamsbcsin0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsBcsIn01")
    {
        caqvccparamsbcsin01 = value;
        caqvccparamsbcsin01.value_namespace = name_space;
        caqvccparamsbcsin01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsBcsOut0")
    {
        caqvccparamsbcsout0 = value;
        caqvccparamsbcsout0.value_namespace = name_space;
        caqvccparamsbcsout0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsBcsOut01")
    {
        caqvccparamsbcsout01 = value;
        caqvccparamsbcsout01.value_namespace = name_space;
        caqvccparamsbcsout01.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsInheritLevel")
    {
        caqvccparamsinheritlevel = value;
        caqvccparamsinheritlevel.value_namespace = name_space;
        caqvccparamsinheritlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsMcrIn")
    {
        caqvccparamsmcrin = value;
        caqvccparamsmcrin.value_namespace = name_space;
        caqvccparamsmcrin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsMcrOut")
    {
        caqvccparamsmcrout = value;
        caqvccparamsmcrout.value_namespace = name_space;
        caqvccparamsmcrout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsInvRdf")
    {
        caqvccparamsinvrdf = value;
        caqvccparamsinvrdf.value_namespace = name_space;
        caqvccparamsinvrdf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsInvRif")
    {
        caqvccparamsinvrif = value;
        caqvccparamsinvrif.value_namespace = name_space;
        caqvccparamsinvrif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsRfl")
    {
        caqvccparamsrfl = value;
        caqvccparamsrfl.value_namespace = name_space;
        caqvccparamsrfl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsCdv")
    {
        caqvccparamscdv = value;
        caqvccparamscdv.value_namespace = name_space;
        caqvccparamscdv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsCdvt")
    {
        caqvccparamscdvt = value;
        caqvccparamscdvt.value_namespace = name_space;
        caqvccparamscdvt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsIcr")
    {
        caqvccparamsicr = value;
        caqvccparamsicr.value_namespace = name_space;
        caqvccparamsicr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsTbe")
    {
        caqvccparamstbe = value;
        caqvccparamstbe.value_namespace = name_space;
        caqvccparamstbe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsFrtt")
    {
        caqvccparamsfrtt = value;
        caqvccparamsfrtt.value_namespace = name_space;
        caqvccparamsfrtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsNrm")
    {
        caqvccparamsnrm = value;
        caqvccparamsnrm.value_namespace = name_space;
        caqvccparamsnrm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsInvTrm")
    {
        caqvccparamsinvtrm = value;
        caqvccparamsinvtrm.value_namespace = name_space;
        caqvccparamsinvtrm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsInvCdf")
    {
        caqvccparamsinvcdf = value;
        caqvccparamsinvcdf.value_namespace = name_space;
        caqvccparamsinvcdf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVccParamsAdtf")
    {
        caqvccparamsadtf = value;
        caqvccparamsadtf.value_namespace = name_space;
        caqvccparamsadtf.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsType")
    {
        caqvccparamstype.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsPcrIn0")
    {
        caqvccparamspcrin0.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsPcrIn01")
    {
        caqvccparamspcrin01.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsPcrOut0")
    {
        caqvccparamspcrout0.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsPcrOut01")
    {
        caqvccparamspcrout01.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsScrIn0")
    {
        caqvccparamsscrin0.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsScrIn01")
    {
        caqvccparamsscrin01.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsScrOut0")
    {
        caqvccparamsscrout0.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsScrOut01")
    {
        caqvccparamsscrout01.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsBcsIn0")
    {
        caqvccparamsbcsin0.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsBcsIn01")
    {
        caqvccparamsbcsin01.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsBcsOut0")
    {
        caqvccparamsbcsout0.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsBcsOut01")
    {
        caqvccparamsbcsout01.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsInheritLevel")
    {
        caqvccparamsinheritlevel.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsMcrIn")
    {
        caqvccparamsmcrin.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsMcrOut")
    {
        caqvccparamsmcrout.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsInvRdf")
    {
        caqvccparamsinvrdf.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsInvRif")
    {
        caqvccparamsinvrif.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsRfl")
    {
        caqvccparamsrfl.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsCdv")
    {
        caqvccparamscdv.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsCdvt")
    {
        caqvccparamscdvt.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsIcr")
    {
        caqvccparamsicr.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsTbe")
    {
        caqvccparamstbe.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsFrtt")
    {
        caqvccparamsfrtt.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsNrm")
    {
        caqvccparamsnrm.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsInvTrm")
    {
        caqvccparamsinvtrm.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsInvCdf")
    {
        caqvccparamsinvcdf.yfilter = yfilter;
    }
    if(value_path == "caqVccParamsAdtf")
    {
        caqvccparamsadtf.yfilter = yfilter;
    }
}

bool CISCOATMQOSMIB::Caqvccparamstable::Caqvccparamsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "caqVccParamsType" || name == "caqVccParamsPcrIn0" || name == "caqVccParamsPcrIn01" || name == "caqVccParamsPcrOut0" || name == "caqVccParamsPcrOut01" || name == "caqVccParamsScrIn0" || name == "caqVccParamsScrIn01" || name == "caqVccParamsScrOut0" || name == "caqVccParamsScrOut01" || name == "caqVccParamsBcsIn0" || name == "caqVccParamsBcsIn01" || name == "caqVccParamsBcsOut0" || name == "caqVccParamsBcsOut01" || name == "caqVccParamsInheritLevel" || name == "caqVccParamsMcrIn" || name == "caqVccParamsMcrOut" || name == "caqVccParamsInvRdf" || name == "caqVccParamsInvRif" || name == "caqVccParamsRfl" || name == "caqVccParamsCdv" || name == "caqVccParamsCdvt" || name == "caqVccParamsIcr" || name == "caqVccParamsTbe" || name == "caqVccParamsFrtt" || name == "caqVccParamsNrm" || name == "caqVccParamsInvTrm" || name == "caqVccParamsInvCdf" || name == "caqVccParamsAdtf")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamstable()
{

    yang_name = "caqVpcParamsTable"; yang_parent_name = "CISCO-ATM-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqvpcparamstable::~Caqvpcparamstable()
{
}

bool CISCOATMQOSMIB::Caqvpcparamstable::has_data() const
{
    for (std::size_t index=0; index<caqvpcparamsentry.size(); index++)
    {
        if(caqvpcparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMQOSMIB::Caqvpcparamstable::has_operation() const
{
    for (std::size_t index=0; index<caqvpcparamsentry.size(); index++)
    {
        if(caqvpcparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMQOSMIB::Caqvpcparamstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqvpcparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVpcParamsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqvpcparamstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqvpcparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqVpcParamsEntry")
    {
        auto c = std::make_shared<CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry>();
        c->parent = this;
        caqvpcparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqvpcparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : caqvpcparamsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOATMQOSMIB::Caqvpcparamstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMQOSMIB::Caqvpcparamstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMQOSMIB::Caqvpcparamstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "caqVpcParamsEntry")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::Caqvpcparamsentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvplvpi{YType::str, "atmVplVpi"},
    caqvpcparamsvpstate{YType::enumeration, "caqVpcParamsVpState"},
    caqvpcparamspeakrate{YType::uint32, "caqVpcParamsPeakRate"},
    caqvpcparamscesrate{YType::uint32, "caqVpcParamsCesRate"},
    caqvpcparamsdatavccount{YType::int32, "caqVpcParamsDataVcCount"},
    caqvpcparamscesvccount{YType::int32, "caqVpcParamsCesVcCount"},
    caqvpcparamsvcdf4seg{YType::int32, "caqVpcParamsVcdF4Seg"},
    caqvpcparamsvcdf4ete{YType::int32, "caqVpcParamsVcdF4Ete"},
    caqvpcparamsscr{YType::uint32, "caqVpcParamsScr"},
    caqvpcparamsmbs{YType::uint32, "caqVpcParamsMbs"},
    caqvpcparamsavailbw{YType::uint32, "caqVpcParamsAvailBw"}
{

    yang_name = "caqVpcParamsEntry"; yang_parent_name = "caqVpcParamsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::~Caqvpcparamsentry()
{
}

bool CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::has_data() const
{
    return ifindex.is_set
	|| atmvplvpi.is_set
	|| caqvpcparamsvpstate.is_set
	|| caqvpcparamspeakrate.is_set
	|| caqvpcparamscesrate.is_set
	|| caqvpcparamsdatavccount.is_set
	|| caqvpcparamscesvccount.is_set
	|| caqvpcparamsvcdf4seg.is_set
	|| caqvpcparamsvcdf4ete.is_set
	|| caqvpcparamsscr.is_set
	|| caqvpcparamsmbs.is_set
	|| caqvpcparamsavailbw.is_set;
}

bool CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvplvpi.yfilter)
	|| ydk::is_set(caqvpcparamsvpstate.yfilter)
	|| ydk::is_set(caqvpcparamspeakrate.yfilter)
	|| ydk::is_set(caqvpcparamscesrate.yfilter)
	|| ydk::is_set(caqvpcparamsdatavccount.yfilter)
	|| ydk::is_set(caqvpcparamscesvccount.yfilter)
	|| ydk::is_set(caqvpcparamsvcdf4seg.yfilter)
	|| ydk::is_set(caqvpcparamsvcdf4ete.yfilter)
	|| ydk::is_set(caqvpcparamsscr.yfilter)
	|| ydk::is_set(caqvpcparamsmbs.yfilter)
	|| ydk::is_set(caqvpcparamsavailbw.yfilter);
}

std::string CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqVpcParamsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVpcParamsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVplVpi='" <<atmvplvpi <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvplvpi.is_set || is_set(atmvplvpi.yfilter)) leaf_name_data.push_back(atmvplvpi.get_name_leafdata());
    if (caqvpcparamsvpstate.is_set || is_set(caqvpcparamsvpstate.yfilter)) leaf_name_data.push_back(caqvpcparamsvpstate.get_name_leafdata());
    if (caqvpcparamspeakrate.is_set || is_set(caqvpcparamspeakrate.yfilter)) leaf_name_data.push_back(caqvpcparamspeakrate.get_name_leafdata());
    if (caqvpcparamscesrate.is_set || is_set(caqvpcparamscesrate.yfilter)) leaf_name_data.push_back(caqvpcparamscesrate.get_name_leafdata());
    if (caqvpcparamsdatavccount.is_set || is_set(caqvpcparamsdatavccount.yfilter)) leaf_name_data.push_back(caqvpcparamsdatavccount.get_name_leafdata());
    if (caqvpcparamscesvccount.is_set || is_set(caqvpcparamscesvccount.yfilter)) leaf_name_data.push_back(caqvpcparamscesvccount.get_name_leafdata());
    if (caqvpcparamsvcdf4seg.is_set || is_set(caqvpcparamsvcdf4seg.yfilter)) leaf_name_data.push_back(caqvpcparamsvcdf4seg.get_name_leafdata());
    if (caqvpcparamsvcdf4ete.is_set || is_set(caqvpcparamsvcdf4ete.yfilter)) leaf_name_data.push_back(caqvpcparamsvcdf4ete.get_name_leafdata());
    if (caqvpcparamsscr.is_set || is_set(caqvpcparamsscr.yfilter)) leaf_name_data.push_back(caqvpcparamsscr.get_name_leafdata());
    if (caqvpcparamsmbs.is_set || is_set(caqvpcparamsmbs.yfilter)) leaf_name_data.push_back(caqvpcparamsmbs.get_name_leafdata());
    if (caqvpcparamsavailbw.is_set || is_set(caqvpcparamsavailbw.yfilter)) leaf_name_data.push_back(caqvpcparamsavailbw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVplVpi")
    {
        atmvplvpi = value;
        atmvplvpi.value_namespace = name_space;
        atmvplvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsVpState")
    {
        caqvpcparamsvpstate = value;
        caqvpcparamsvpstate.value_namespace = name_space;
        caqvpcparamsvpstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsPeakRate")
    {
        caqvpcparamspeakrate = value;
        caqvpcparamspeakrate.value_namespace = name_space;
        caqvpcparamspeakrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsCesRate")
    {
        caqvpcparamscesrate = value;
        caqvpcparamscesrate.value_namespace = name_space;
        caqvpcparamscesrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsDataVcCount")
    {
        caqvpcparamsdatavccount = value;
        caqvpcparamsdatavccount.value_namespace = name_space;
        caqvpcparamsdatavccount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsCesVcCount")
    {
        caqvpcparamscesvccount = value;
        caqvpcparamscesvccount.value_namespace = name_space;
        caqvpcparamscesvccount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsVcdF4Seg")
    {
        caqvpcparamsvcdf4seg = value;
        caqvpcparamsvcdf4seg.value_namespace = name_space;
        caqvpcparamsvcdf4seg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsVcdF4Ete")
    {
        caqvpcparamsvcdf4ete = value;
        caqvpcparamsvcdf4ete.value_namespace = name_space;
        caqvpcparamsvcdf4ete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsScr")
    {
        caqvpcparamsscr = value;
        caqvpcparamsscr.value_namespace = name_space;
        caqvpcparamsscr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsMbs")
    {
        caqvpcparamsmbs = value;
        caqvpcparamsmbs.value_namespace = name_space;
        caqvpcparamsmbs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqVpcParamsAvailBw")
    {
        caqvpcparamsavailbw = value;
        caqvpcparamsavailbw.value_namespace = name_space;
        caqvpcparamsavailbw.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVplVpi")
    {
        atmvplvpi.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsVpState")
    {
        caqvpcparamsvpstate.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsPeakRate")
    {
        caqvpcparamspeakrate.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsCesRate")
    {
        caqvpcparamscesrate.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsDataVcCount")
    {
        caqvpcparamsdatavccount.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsCesVcCount")
    {
        caqvpcparamscesvccount.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsVcdF4Seg")
    {
        caqvpcparamsvcdf4seg.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsVcdF4Ete")
    {
        caqvpcparamsvcdf4ete.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsScr")
    {
        caqvpcparamsscr.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsMbs")
    {
        caqvpcparamsmbs.yfilter = yfilter;
    }
    if(value_path == "caqVpcParamsAvailBw")
    {
        caqvpcparamsavailbw.yfilter = yfilter;
    }
}

bool CISCOATMQOSMIB::Caqvpcparamstable::Caqvpcparamsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVplVpi" || name == "caqVpcParamsVpState" || name == "caqVpcParamsPeakRate" || name == "caqVpcParamsCesRate" || name == "caqVpcParamsDataVcCount" || name == "caqVpcParamsCesVcCount" || name == "caqVpcParamsVcdF4Seg" || name == "caqVpcParamsVcdF4Ete" || name == "caqVpcParamsScr" || name == "caqVpcParamsMbs" || name == "caqVpcParamsAvailBw")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamstable()
{

    yang_name = "caqQueuingParamsTable"; yang_parent_name = "CISCO-ATM-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqqueuingparamstable::~Caqqueuingparamstable()
{
}

bool CISCOATMQOSMIB::Caqqueuingparamstable::has_data() const
{
    for (std::size_t index=0; index<caqqueuingparamsentry.size(); index++)
    {
        if(caqqueuingparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMQOSMIB::Caqqueuingparamstable::has_operation() const
{
    for (std::size_t index=0; index<caqqueuingparamsentry.size(); index++)
    {
        if(caqqueuingparamsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMQOSMIB::Caqqueuingparamstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqqueuingparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqqueuingparamstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqqueuingparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqQueuingParamsEntry")
    {
        auto c = std::make_shared<CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry>();
        c->parent = this;
        caqqueuingparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqqueuingparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : caqqueuingparamsentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOATMQOSMIB::Caqqueuingparamstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMQOSMIB::Caqqueuingparamstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMQOSMIB::Caqqueuingparamstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "caqQueuingParamsEntry")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::Caqqueuingparamsentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    caqqueuingparamsmeanqdepth{YType::uint32, "caqQueuingParamsMeanQDepth"}
{

    yang_name = "caqQueuingParamsEntry"; yang_parent_name = "caqQueuingParamsTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::~Caqqueuingparamsentry()
{
}

bool CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| caqqueuingparamsmeanqdepth.is_set;
}

bool CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(caqqueuingparamsmeanqdepth.yfilter);
}

std::string CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqQueuingParamsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (caqqueuingparamsmeanqdepth.is_set || is_set(caqqueuingparamsmeanqdepth.yfilter)) leaf_name_data.push_back(caqqueuingparamsmeanqdepth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
        atmvclvpi.value_namespace = name_space;
        atmvclvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
        atmvclvci.value_namespace = name_space;
        atmvclvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqQueuingParamsMeanQDepth")
    {
        caqqueuingparamsmeanqdepth = value;
        caqqueuingparamsmeanqdepth.value_namespace = name_space;
        caqqueuingparamsmeanqdepth.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci.yfilter = yfilter;
    }
    if(value_path == "caqQueuingParamsMeanQDepth")
    {
        caqqueuingparamsmeanqdepth.yfilter = yfilter;
    }
}

bool CISCOATMQOSMIB::Caqqueuingparamstable::Caqqueuingparamsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "caqQueuingParamsMeanQDepth")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclasstable()
{

    yang_name = "caqQueuingParamsClassTable"; yang_parent_name = "CISCO-ATM-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqqueuingparamsclasstable::~Caqqueuingparamsclasstable()
{
}

bool CISCOATMQOSMIB::Caqqueuingparamsclasstable::has_data() const
{
    for (std::size_t index=0; index<caqqueuingparamsclassentry.size(); index++)
    {
        if(caqqueuingparamsclassentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOATMQOSMIB::Caqqueuingparamsclasstable::has_operation() const
{
    for (std::size_t index=0; index<caqqueuingparamsclassentry.size(); index++)
    {
        if(caqqueuingparamsclassentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOATMQOSMIB::Caqqueuingparamsclasstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqqueuingparamsclasstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsClassTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqqueuingparamsclasstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqqueuingparamsclasstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqQueuingParamsClassEntry")
    {
        auto c = std::make_shared<CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry>();
        c->parent = this;
        caqqueuingparamsclassentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqqueuingparamsclasstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : caqqueuingparamsclassentry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOATMQOSMIB::Caqqueuingparamsclasstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOATMQOSMIB::Caqqueuingparamsclasstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOATMQOSMIB::Caqqueuingparamsclasstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "caqQueuingParamsClassEntry")
        return true;
    return false;
}

CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::Caqqueuingparamsclassentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    caqqueuingparamsclassindex{YType::int32, "caqQueuingParamsClassIndex"},
    caqqueuingparamsclassranddrp{YType::uint32, "caqQueuingParamsClassRandDrp"},
    caqqueuingparamsclasstaildrp{YType::uint32, "caqQueuingParamsClassTailDrp"},
    caqqueuingparamsclassminthre{YType::uint32, "caqQueuingParamsClassMinThre"},
    caqqueuingparamsclassmaxthre{YType::uint32, "caqQueuingParamsClassMaxThre"},
    caqqueuingparamsclassmrkprob{YType::uint32, "caqQueuingParamsClassMrkProb"}
{

    yang_name = "caqQueuingParamsClassEntry"; yang_parent_name = "caqQueuingParamsClassTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::~Caqqueuingparamsclassentry()
{
}

bool CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| caqqueuingparamsclassindex.is_set
	|| caqqueuingparamsclassranddrp.is_set
	|| caqqueuingparamsclasstaildrp.is_set
	|| caqqueuingparamsclassminthre.is_set
	|| caqqueuingparamsclassmaxthre.is_set
	|| caqqueuingparamsclassmrkprob.is_set;
}

bool CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(atmvclvpi.yfilter)
	|| ydk::is_set(atmvclvci.yfilter)
	|| ydk::is_set(caqqueuingparamsclassindex.yfilter)
	|| ydk::is_set(caqqueuingparamsclassranddrp.yfilter)
	|| ydk::is_set(caqqueuingparamsclasstaildrp.yfilter)
	|| ydk::is_set(caqqueuingparamsclassminthre.yfilter)
	|| ydk::is_set(caqqueuingparamsclassmaxthre.yfilter)
	|| ydk::is_set(caqqueuingparamsclassmrkprob.yfilter);
}

std::string CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqQueuingParamsClassTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsClassEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']" <<"[caqQueuingParamsClassIndex='" <<caqqueuingparamsclassindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.yfilter)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.yfilter)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (caqqueuingparamsclassindex.is_set || is_set(caqqueuingparamsclassindex.yfilter)) leaf_name_data.push_back(caqqueuingparamsclassindex.get_name_leafdata());
    if (caqqueuingparamsclassranddrp.is_set || is_set(caqqueuingparamsclassranddrp.yfilter)) leaf_name_data.push_back(caqqueuingparamsclassranddrp.get_name_leafdata());
    if (caqqueuingparamsclasstaildrp.is_set || is_set(caqqueuingparamsclasstaildrp.yfilter)) leaf_name_data.push_back(caqqueuingparamsclasstaildrp.get_name_leafdata());
    if (caqqueuingparamsclassminthre.is_set || is_set(caqqueuingparamsclassminthre.yfilter)) leaf_name_data.push_back(caqqueuingparamsclassminthre.get_name_leafdata());
    if (caqqueuingparamsclassmaxthre.is_set || is_set(caqqueuingparamsclassmaxthre.yfilter)) leaf_name_data.push_back(caqqueuingparamsclassmaxthre.get_name_leafdata());
    if (caqqueuingparamsclassmrkprob.is_set || is_set(caqqueuingparamsclassmrkprob.yfilter)) leaf_name_data.push_back(caqqueuingparamsclassmrkprob.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
        atmvclvpi.value_namespace = name_space;
        atmvclvpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
        atmvclvci.value_namespace = name_space;
        atmvclvci.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqQueuingParamsClassIndex")
    {
        caqqueuingparamsclassindex = value;
        caqqueuingparamsclassindex.value_namespace = name_space;
        caqqueuingparamsclassindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqQueuingParamsClassRandDrp")
    {
        caqqueuingparamsclassranddrp = value;
        caqqueuingparamsclassranddrp.value_namespace = name_space;
        caqqueuingparamsclassranddrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqQueuingParamsClassTailDrp")
    {
        caqqueuingparamsclasstaildrp = value;
        caqqueuingparamsclasstaildrp.value_namespace = name_space;
        caqqueuingparamsclasstaildrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqQueuingParamsClassMinThre")
    {
        caqqueuingparamsclassminthre = value;
        caqqueuingparamsclassminthre.value_namespace = name_space;
        caqqueuingparamsclassminthre.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqQueuingParamsClassMaxThre")
    {
        caqqueuingparamsclassmaxthre = value;
        caqqueuingparamsclassmaxthre.value_namespace = name_space;
        caqqueuingparamsclassmaxthre.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "caqQueuingParamsClassMrkProb")
    {
        caqqueuingparamsclassmrkprob = value;
        caqqueuingparamsclassmrkprob.value_namespace = name_space;
        caqqueuingparamsclassmrkprob.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi.yfilter = yfilter;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci.yfilter = yfilter;
    }
    if(value_path == "caqQueuingParamsClassIndex")
    {
        caqqueuingparamsclassindex.yfilter = yfilter;
    }
    if(value_path == "caqQueuingParamsClassRandDrp")
    {
        caqqueuingparamsclassranddrp.yfilter = yfilter;
    }
    if(value_path == "caqQueuingParamsClassTailDrp")
    {
        caqqueuingparamsclasstaildrp.yfilter = yfilter;
    }
    if(value_path == "caqQueuingParamsClassMinThre")
    {
        caqqueuingparamsclassminthre.yfilter = yfilter;
    }
    if(value_path == "caqQueuingParamsClassMaxThre")
    {
        caqqueuingparamsclassmaxthre.yfilter = yfilter;
    }
    if(value_path == "caqQueuingParamsClassMrkProb")
    {
        caqqueuingparamsclassmrkprob.yfilter = yfilter;
    }
}

bool CISCOATMQOSMIB::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "atmVclVpi" || name == "atmVclVci" || name == "caqQueuingParamsClassIndex" || name == "caqQueuingParamsClassRandDrp" || name == "caqQueuingParamsClassTailDrp" || name == "caqQueuingParamsClassMinThre" || name == "caqQueuingParamsClassMaxThre" || name == "caqQueuingParamsClassMrkProb")
        return true;
    return false;
}

const Enum::YLeaf VcParamConfigLocation::configDefault {1, "configDefault"};
const Enum::YLeaf VcParamConfigLocation::configVcDirect {2, "configVcDirect"};
const Enum::YLeaf VcParamConfigLocation::configVcClass {3, "configVcClass"};
const Enum::YLeaf VcParamConfigLocation::configVcClassSubInterface {4, "configVcClassSubInterface"};
const Enum::YLeaf VcParamConfigLocation::configVcClassInterface {5, "configVcClassInterface"};

const Enum::YLeaf VpState::vpStateInactive {1, "vpStateInactive"};
const Enum::YLeaf VpState::vpStateActive {2, "vpStateActive"};


}
}

