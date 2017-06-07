
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ATM_QOS_MIB.hpp"

namespace ydk {
namespace CISCO_ATM_QOS_MIB {

CiscoAtmQosMib::CiscoAtmQosMib()
    :
    caqqueuingparamsclasstable(std::make_shared<CiscoAtmQosMib::Caqqueuingparamsclasstable>())
	,caqqueuingparamstable(std::make_shared<CiscoAtmQosMib::Caqqueuingparamstable>())
	,caqvccparamstable(std::make_shared<CiscoAtmQosMib::Caqvccparamstable>())
	,caqvpcparamstable(std::make_shared<CiscoAtmQosMib::Caqvpcparamstable>())
{
    caqqueuingparamsclasstable->parent = this;

    caqqueuingparamstable->parent = this;

    caqvccparamstable->parent = this;

    caqvpcparamstable->parent = this;

    yang_name = "CISCO-ATM-QOS-MIB"; yang_parent_name = "CISCO-ATM-QOS-MIB";
}

CiscoAtmQosMib::~CiscoAtmQosMib()
{
}

bool CiscoAtmQosMib::has_data() const
{
    return (caqqueuingparamsclasstable !=  nullptr && caqqueuingparamsclasstable->has_data())
	|| (caqqueuingparamstable !=  nullptr && caqqueuingparamstable->has_data())
	|| (caqvccparamstable !=  nullptr && caqvccparamstable->has_data())
	|| (caqvpcparamstable !=  nullptr && caqvpcparamstable->has_data());
}

bool CiscoAtmQosMib::has_operation() const
{
    return is_set(operation)
	|| (caqqueuingparamsclasstable !=  nullptr && caqqueuingparamsclasstable->has_operation())
	|| (caqqueuingparamstable !=  nullptr && caqqueuingparamstable->has_operation())
	|| (caqvccparamstable !=  nullptr && caqvccparamstable->has_operation())
	|| (caqvpcparamstable !=  nullptr && caqvpcparamstable->has_operation());
}

std::string CiscoAtmQosMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoAtmQosMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqQueuingParamsClassTable")
    {
        if(caqqueuingparamsclasstable == nullptr)
        {
            caqqueuingparamsclasstable = std::make_shared<CiscoAtmQosMib::Caqqueuingparamsclasstable>();
        }
        return caqqueuingparamsclasstable;
    }

    if(child_yang_name == "caqQueuingParamsTable")
    {
        if(caqqueuingparamstable == nullptr)
        {
            caqqueuingparamstable = std::make_shared<CiscoAtmQosMib::Caqqueuingparamstable>();
        }
        return caqqueuingparamstable;
    }

    if(child_yang_name == "caqVccParamsTable")
    {
        if(caqvccparamstable == nullptr)
        {
            caqvccparamstable = std::make_shared<CiscoAtmQosMib::Caqvccparamstable>();
        }
        return caqvccparamstable;
    }

    if(child_yang_name == "caqVpcParamsTable")
    {
        if(caqvpcparamstable == nullptr)
        {
            caqvpcparamstable = std::make_shared<CiscoAtmQosMib::Caqvpcparamstable>();
        }
        return caqvpcparamstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(caqqueuingparamsclasstable != nullptr)
    {
        children["caqQueuingParamsClassTable"] = caqqueuingparamsclasstable;
    }

    if(caqqueuingparamstable != nullptr)
    {
        children["caqQueuingParamsTable"] = caqqueuingparamstable;
    }

    if(caqvccparamstable != nullptr)
    {
        children["caqVccParamsTable"] = caqvccparamstable;
    }

    if(caqvpcparamstable != nullptr)
    {
        children["caqVpcParamsTable"] = caqvpcparamstable;
    }

    return children;
}

void CiscoAtmQosMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoAtmQosMib::clone_ptr() const
{
    return std::make_shared<CiscoAtmQosMib>();
}

std::string CiscoAtmQosMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoAtmQosMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoAtmQosMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoAtmQosMib::Caqvccparamstable::Caqvccparamstable()
{
    yang_name = "caqVccParamsTable"; yang_parent_name = "CISCO-ATM-QOS-MIB";
}

CiscoAtmQosMib::Caqvccparamstable::~Caqvccparamstable()
{
}

bool CiscoAtmQosMib::Caqvccparamstable::has_data() const
{
    for (std::size_t index=0; index<caqvccparamsentry.size(); index++)
    {
        if(caqvccparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmQosMib::Caqvccparamstable::has_operation() const
{
    for (std::size_t index=0; index<caqvccparamsentry.size(); index++)
    {
        if(caqvccparamsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmQosMib::Caqvccparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVccParamsTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqvccparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqvccparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqVccParamsEntry")
    {
        for(auto const & c : caqvccparamsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry>();
        c->parent = this;
        caqvccparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqvccparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : caqvccparamsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmQosMib::Caqvccparamstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::Caqvccparamsentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    caqvccparamsadtf{YType::uint32, "caqVccParamsAdtf"},
    caqvccparamsbcsin0{YType::uint32, "caqVccParamsBcsIn0"},
    caqvccparamsbcsin01{YType::uint32, "caqVccParamsBcsIn01"},
    caqvccparamsbcsout0{YType::uint32, "caqVccParamsBcsOut0"},
    caqvccparamsbcsout01{YType::uint32, "caqVccParamsBcsOut01"},
    caqvccparamscdv{YType::uint32, "caqVccParamsCdv"},
    caqvccparamscdvt{YType::uint32, "caqVccParamsCdvt"},
    caqvccparamsfrtt{YType::uint32, "caqVccParamsFrtt"},
    caqvccparamsicr{YType::uint32, "caqVccParamsIcr"},
    caqvccparamsinheritlevel{YType::enumeration, "caqVccParamsInheritLevel"},
    caqvccparamsinvcdf{YType::uint32, "caqVccParamsInvCdf"},
    caqvccparamsinvrdf{YType::uint32, "caqVccParamsInvRdf"},
    caqvccparamsinvrif{YType::uint32, "caqVccParamsInvRif"},
    caqvccparamsinvtrm{YType::uint32, "caqVccParamsInvTrm"},
    caqvccparamsmcrin{YType::uint32, "caqVccParamsMcrIn"},
    caqvccparamsmcrout{YType::uint32, "caqVccParamsMcrOut"},
    caqvccparamsnrm{YType::uint32, "caqVccParamsNrm"},
    caqvccparamspcrin0{YType::uint32, "caqVccParamsPcrIn0"},
    caqvccparamspcrin01{YType::uint32, "caqVccParamsPcrIn01"},
    caqvccparamspcrout0{YType::uint32, "caqVccParamsPcrOut0"},
    caqvccparamspcrout01{YType::uint32, "caqVccParamsPcrOut01"},
    caqvccparamsrfl{YType::enumeration, "caqVccParamsRfl"},
    caqvccparamsscrin0{YType::uint32, "caqVccParamsScrIn0"},
    caqvccparamsscrin01{YType::uint32, "caqVccParamsScrIn01"},
    caqvccparamsscrout0{YType::uint32, "caqVccParamsScrOut0"},
    caqvccparamsscrout01{YType::uint32, "caqVccParamsScrOut01"},
    caqvccparamstbe{YType::uint32, "caqVccParamsTbe"},
    caqvccparamstype{YType::enumeration, "caqVccParamsType"}
{
    yang_name = "caqVccParamsEntry"; yang_parent_name = "caqVccParamsTable";
}

CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::~Caqvccparamsentry()
{
}

bool CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| caqvccparamsadtf.is_set
	|| caqvccparamsbcsin0.is_set
	|| caqvccparamsbcsin01.is_set
	|| caqvccparamsbcsout0.is_set
	|| caqvccparamsbcsout01.is_set
	|| caqvccparamscdv.is_set
	|| caqvccparamscdvt.is_set
	|| caqvccparamsfrtt.is_set
	|| caqvccparamsicr.is_set
	|| caqvccparamsinheritlevel.is_set
	|| caqvccparamsinvcdf.is_set
	|| caqvccparamsinvrdf.is_set
	|| caqvccparamsinvrif.is_set
	|| caqvccparamsinvtrm.is_set
	|| caqvccparamsmcrin.is_set
	|| caqvccparamsmcrout.is_set
	|| caqvccparamsnrm.is_set
	|| caqvccparamspcrin0.is_set
	|| caqvccparamspcrin01.is_set
	|| caqvccparamspcrout0.is_set
	|| caqvccparamspcrout01.is_set
	|| caqvccparamsrfl.is_set
	|| caqvccparamsscrin0.is_set
	|| caqvccparamsscrin01.is_set
	|| caqvccparamsscrout0.is_set
	|| caqvccparamsscrout01.is_set
	|| caqvccparamstbe.is_set
	|| caqvccparamstype.is_set;
}

bool CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(atmvclvci.operation)
	|| is_set(caqvccparamsadtf.operation)
	|| is_set(caqvccparamsbcsin0.operation)
	|| is_set(caqvccparamsbcsin01.operation)
	|| is_set(caqvccparamsbcsout0.operation)
	|| is_set(caqvccparamsbcsout01.operation)
	|| is_set(caqvccparamscdv.operation)
	|| is_set(caqvccparamscdvt.operation)
	|| is_set(caqvccparamsfrtt.operation)
	|| is_set(caqvccparamsicr.operation)
	|| is_set(caqvccparamsinheritlevel.operation)
	|| is_set(caqvccparamsinvcdf.operation)
	|| is_set(caqvccparamsinvrdf.operation)
	|| is_set(caqvccparamsinvrif.operation)
	|| is_set(caqvccparamsinvtrm.operation)
	|| is_set(caqvccparamsmcrin.operation)
	|| is_set(caqvccparamsmcrout.operation)
	|| is_set(caqvccparamsnrm.operation)
	|| is_set(caqvccparamspcrin0.operation)
	|| is_set(caqvccparamspcrin01.operation)
	|| is_set(caqvccparamspcrout0.operation)
	|| is_set(caqvccparamspcrout01.operation)
	|| is_set(caqvccparamsrfl.operation)
	|| is_set(caqvccparamsscrin0.operation)
	|| is_set(caqvccparamsscrin01.operation)
	|| is_set(caqvccparamsscrout0.operation)
	|| is_set(caqvccparamsscrout01.operation)
	|| is_set(caqvccparamstbe.operation)
	|| is_set(caqvccparamstype.operation);
}

std::string CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVccParamsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqVccParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.operation)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (caqvccparamsadtf.is_set || is_set(caqvccparamsadtf.operation)) leaf_name_data.push_back(caqvccparamsadtf.get_name_leafdata());
    if (caqvccparamsbcsin0.is_set || is_set(caqvccparamsbcsin0.operation)) leaf_name_data.push_back(caqvccparamsbcsin0.get_name_leafdata());
    if (caqvccparamsbcsin01.is_set || is_set(caqvccparamsbcsin01.operation)) leaf_name_data.push_back(caqvccparamsbcsin01.get_name_leafdata());
    if (caqvccparamsbcsout0.is_set || is_set(caqvccparamsbcsout0.operation)) leaf_name_data.push_back(caqvccparamsbcsout0.get_name_leafdata());
    if (caqvccparamsbcsout01.is_set || is_set(caqvccparamsbcsout01.operation)) leaf_name_data.push_back(caqvccparamsbcsout01.get_name_leafdata());
    if (caqvccparamscdv.is_set || is_set(caqvccparamscdv.operation)) leaf_name_data.push_back(caqvccparamscdv.get_name_leafdata());
    if (caqvccparamscdvt.is_set || is_set(caqvccparamscdvt.operation)) leaf_name_data.push_back(caqvccparamscdvt.get_name_leafdata());
    if (caqvccparamsfrtt.is_set || is_set(caqvccparamsfrtt.operation)) leaf_name_data.push_back(caqvccparamsfrtt.get_name_leafdata());
    if (caqvccparamsicr.is_set || is_set(caqvccparamsicr.operation)) leaf_name_data.push_back(caqvccparamsicr.get_name_leafdata());
    if (caqvccparamsinheritlevel.is_set || is_set(caqvccparamsinheritlevel.operation)) leaf_name_data.push_back(caqvccparamsinheritlevel.get_name_leafdata());
    if (caqvccparamsinvcdf.is_set || is_set(caqvccparamsinvcdf.operation)) leaf_name_data.push_back(caqvccparamsinvcdf.get_name_leafdata());
    if (caqvccparamsinvrdf.is_set || is_set(caqvccparamsinvrdf.operation)) leaf_name_data.push_back(caqvccparamsinvrdf.get_name_leafdata());
    if (caqvccparamsinvrif.is_set || is_set(caqvccparamsinvrif.operation)) leaf_name_data.push_back(caqvccparamsinvrif.get_name_leafdata());
    if (caqvccparamsinvtrm.is_set || is_set(caqvccparamsinvtrm.operation)) leaf_name_data.push_back(caqvccparamsinvtrm.get_name_leafdata());
    if (caqvccparamsmcrin.is_set || is_set(caqvccparamsmcrin.operation)) leaf_name_data.push_back(caqvccparamsmcrin.get_name_leafdata());
    if (caqvccparamsmcrout.is_set || is_set(caqvccparamsmcrout.operation)) leaf_name_data.push_back(caqvccparamsmcrout.get_name_leafdata());
    if (caqvccparamsnrm.is_set || is_set(caqvccparamsnrm.operation)) leaf_name_data.push_back(caqvccparamsnrm.get_name_leafdata());
    if (caqvccparamspcrin0.is_set || is_set(caqvccparamspcrin0.operation)) leaf_name_data.push_back(caqvccparamspcrin0.get_name_leafdata());
    if (caqvccparamspcrin01.is_set || is_set(caqvccparamspcrin01.operation)) leaf_name_data.push_back(caqvccparamspcrin01.get_name_leafdata());
    if (caqvccparamspcrout0.is_set || is_set(caqvccparamspcrout0.operation)) leaf_name_data.push_back(caqvccparamspcrout0.get_name_leafdata());
    if (caqvccparamspcrout01.is_set || is_set(caqvccparamspcrout01.operation)) leaf_name_data.push_back(caqvccparamspcrout01.get_name_leafdata());
    if (caqvccparamsrfl.is_set || is_set(caqvccparamsrfl.operation)) leaf_name_data.push_back(caqvccparamsrfl.get_name_leafdata());
    if (caqvccparamsscrin0.is_set || is_set(caqvccparamsscrin0.operation)) leaf_name_data.push_back(caqvccparamsscrin0.get_name_leafdata());
    if (caqvccparamsscrin01.is_set || is_set(caqvccparamsscrin01.operation)) leaf_name_data.push_back(caqvccparamsscrin01.get_name_leafdata());
    if (caqvccparamsscrout0.is_set || is_set(caqvccparamsscrout0.operation)) leaf_name_data.push_back(caqvccparamsscrout0.get_name_leafdata());
    if (caqvccparamsscrout01.is_set || is_set(caqvccparamsscrout01.operation)) leaf_name_data.push_back(caqvccparamsscrout01.get_name_leafdata());
    if (caqvccparamstbe.is_set || is_set(caqvccparamstbe.operation)) leaf_name_data.push_back(caqvccparamstbe.get_name_leafdata());
    if (caqvccparamstype.is_set || is_set(caqvccparamstype.operation)) leaf_name_data.push_back(caqvccparamstype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmQosMib::Caqvccparamstable::Caqvccparamsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
    }
    if(value_path == "caqVccParamsAdtf")
    {
        caqvccparamsadtf = value;
    }
    if(value_path == "caqVccParamsBcsIn0")
    {
        caqvccparamsbcsin0 = value;
    }
    if(value_path == "caqVccParamsBcsIn01")
    {
        caqvccparamsbcsin01 = value;
    }
    if(value_path == "caqVccParamsBcsOut0")
    {
        caqvccparamsbcsout0 = value;
    }
    if(value_path == "caqVccParamsBcsOut01")
    {
        caqvccparamsbcsout01 = value;
    }
    if(value_path == "caqVccParamsCdv")
    {
        caqvccparamscdv = value;
    }
    if(value_path == "caqVccParamsCdvt")
    {
        caqvccparamscdvt = value;
    }
    if(value_path == "caqVccParamsFrtt")
    {
        caqvccparamsfrtt = value;
    }
    if(value_path == "caqVccParamsIcr")
    {
        caqvccparamsicr = value;
    }
    if(value_path == "caqVccParamsInheritLevel")
    {
        caqvccparamsinheritlevel = value;
    }
    if(value_path == "caqVccParamsInvCdf")
    {
        caqvccparamsinvcdf = value;
    }
    if(value_path == "caqVccParamsInvRdf")
    {
        caqvccparamsinvrdf = value;
    }
    if(value_path == "caqVccParamsInvRif")
    {
        caqvccparamsinvrif = value;
    }
    if(value_path == "caqVccParamsInvTrm")
    {
        caqvccparamsinvtrm = value;
    }
    if(value_path == "caqVccParamsMcrIn")
    {
        caqvccparamsmcrin = value;
    }
    if(value_path == "caqVccParamsMcrOut")
    {
        caqvccparamsmcrout = value;
    }
    if(value_path == "caqVccParamsNrm")
    {
        caqvccparamsnrm = value;
    }
    if(value_path == "caqVccParamsPcrIn0")
    {
        caqvccparamspcrin0 = value;
    }
    if(value_path == "caqVccParamsPcrIn01")
    {
        caqvccparamspcrin01 = value;
    }
    if(value_path == "caqVccParamsPcrOut0")
    {
        caqvccparamspcrout0 = value;
    }
    if(value_path == "caqVccParamsPcrOut01")
    {
        caqvccparamspcrout01 = value;
    }
    if(value_path == "caqVccParamsRfl")
    {
        caqvccparamsrfl = value;
    }
    if(value_path == "caqVccParamsScrIn0")
    {
        caqvccparamsscrin0 = value;
    }
    if(value_path == "caqVccParamsScrIn01")
    {
        caqvccparamsscrin01 = value;
    }
    if(value_path == "caqVccParamsScrOut0")
    {
        caqvccparamsscrout0 = value;
    }
    if(value_path == "caqVccParamsScrOut01")
    {
        caqvccparamsscrout01 = value;
    }
    if(value_path == "caqVccParamsTbe")
    {
        caqvccparamstbe = value;
    }
    if(value_path == "caqVccParamsType")
    {
        caqvccparamstype = value;
    }
}

CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamstable()
{
    yang_name = "caqVpcParamsTable"; yang_parent_name = "CISCO-ATM-QOS-MIB";
}

CiscoAtmQosMib::Caqvpcparamstable::~Caqvpcparamstable()
{
}

bool CiscoAtmQosMib::Caqvpcparamstable::has_data() const
{
    for (std::size_t index=0; index<caqvpcparamsentry.size(); index++)
    {
        if(caqvpcparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmQosMib::Caqvpcparamstable::has_operation() const
{
    for (std::size_t index=0; index<caqvpcparamsentry.size(); index++)
    {
        if(caqvpcparamsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmQosMib::Caqvpcparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVpcParamsTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqvpcparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqvpcparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqVpcParamsEntry")
    {
        for(auto const & c : caqvpcparamsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry>();
        c->parent = this;
        caqvpcparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqvpcparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : caqvpcparamsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmQosMib::Caqvpcparamstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::Caqvpcparamsentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvplvpi{YType::str, "atmVplVpi"},
    caqvpcparamsavailbw{YType::uint32, "caqVpcParamsAvailBw"},
    caqvpcparamscesrate{YType::uint32, "caqVpcParamsCesRate"},
    caqvpcparamscesvccount{YType::int32, "caqVpcParamsCesVcCount"},
    caqvpcparamsdatavccount{YType::int32, "caqVpcParamsDataVcCount"},
    caqvpcparamsmbs{YType::uint32, "caqVpcParamsMbs"},
    caqvpcparamspeakrate{YType::uint32, "caqVpcParamsPeakRate"},
    caqvpcparamsscr{YType::uint32, "caqVpcParamsScr"},
    caqvpcparamsvcdf4ete{YType::int32, "caqVpcParamsVcdF4Ete"},
    caqvpcparamsvcdf4seg{YType::int32, "caqVpcParamsVcdF4Seg"},
    caqvpcparamsvpstate{YType::enumeration, "caqVpcParamsVpState"}
{
    yang_name = "caqVpcParamsEntry"; yang_parent_name = "caqVpcParamsTable";
}

CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::~Caqvpcparamsentry()
{
}

bool CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::has_data() const
{
    return ifindex.is_set
	|| atmvplvpi.is_set
	|| caqvpcparamsavailbw.is_set
	|| caqvpcparamscesrate.is_set
	|| caqvpcparamscesvccount.is_set
	|| caqvpcparamsdatavccount.is_set
	|| caqvpcparamsmbs.is_set
	|| caqvpcparamspeakrate.is_set
	|| caqvpcparamsscr.is_set
	|| caqvpcparamsvcdf4ete.is_set
	|| caqvpcparamsvcdf4seg.is_set
	|| caqvpcparamsvpstate.is_set;
}

bool CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvplvpi.operation)
	|| is_set(caqvpcparamsavailbw.operation)
	|| is_set(caqvpcparamscesrate.operation)
	|| is_set(caqvpcparamscesvccount.operation)
	|| is_set(caqvpcparamsdatavccount.operation)
	|| is_set(caqvpcparamsmbs.operation)
	|| is_set(caqvpcparamspeakrate.operation)
	|| is_set(caqvpcparamsscr.operation)
	|| is_set(caqvpcparamsvcdf4ete.operation)
	|| is_set(caqvpcparamsvcdf4seg.operation)
	|| is_set(caqvpcparamsvpstate.operation);
}

std::string CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqVpcParamsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVplVpi='" <<atmvplvpi <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqVpcParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvplvpi.is_set || is_set(atmvplvpi.operation)) leaf_name_data.push_back(atmvplvpi.get_name_leafdata());
    if (caqvpcparamsavailbw.is_set || is_set(caqvpcparamsavailbw.operation)) leaf_name_data.push_back(caqvpcparamsavailbw.get_name_leafdata());
    if (caqvpcparamscesrate.is_set || is_set(caqvpcparamscesrate.operation)) leaf_name_data.push_back(caqvpcparamscesrate.get_name_leafdata());
    if (caqvpcparamscesvccount.is_set || is_set(caqvpcparamscesvccount.operation)) leaf_name_data.push_back(caqvpcparamscesvccount.get_name_leafdata());
    if (caqvpcparamsdatavccount.is_set || is_set(caqvpcparamsdatavccount.operation)) leaf_name_data.push_back(caqvpcparamsdatavccount.get_name_leafdata());
    if (caqvpcparamsmbs.is_set || is_set(caqvpcparamsmbs.operation)) leaf_name_data.push_back(caqvpcparamsmbs.get_name_leafdata());
    if (caqvpcparamspeakrate.is_set || is_set(caqvpcparamspeakrate.operation)) leaf_name_data.push_back(caqvpcparamspeakrate.get_name_leafdata());
    if (caqvpcparamsscr.is_set || is_set(caqvpcparamsscr.operation)) leaf_name_data.push_back(caqvpcparamsscr.get_name_leafdata());
    if (caqvpcparamsvcdf4ete.is_set || is_set(caqvpcparamsvcdf4ete.operation)) leaf_name_data.push_back(caqvpcparamsvcdf4ete.get_name_leafdata());
    if (caqvpcparamsvcdf4seg.is_set || is_set(caqvpcparamsvcdf4seg.operation)) leaf_name_data.push_back(caqvpcparamsvcdf4seg.get_name_leafdata());
    if (caqvpcparamsvpstate.is_set || is_set(caqvpcparamsvpstate.operation)) leaf_name_data.push_back(caqvpcparamsvpstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmQosMib::Caqvpcparamstable::Caqvpcparamsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVplVpi")
    {
        atmvplvpi = value;
    }
    if(value_path == "caqVpcParamsAvailBw")
    {
        caqvpcparamsavailbw = value;
    }
    if(value_path == "caqVpcParamsCesRate")
    {
        caqvpcparamscesrate = value;
    }
    if(value_path == "caqVpcParamsCesVcCount")
    {
        caqvpcparamscesvccount = value;
    }
    if(value_path == "caqVpcParamsDataVcCount")
    {
        caqvpcparamsdatavccount = value;
    }
    if(value_path == "caqVpcParamsMbs")
    {
        caqvpcparamsmbs = value;
    }
    if(value_path == "caqVpcParamsPeakRate")
    {
        caqvpcparamspeakrate = value;
    }
    if(value_path == "caqVpcParamsScr")
    {
        caqvpcparamsscr = value;
    }
    if(value_path == "caqVpcParamsVcdF4Ete")
    {
        caqvpcparamsvcdf4ete = value;
    }
    if(value_path == "caqVpcParamsVcdF4Seg")
    {
        caqvpcparamsvcdf4seg = value;
    }
    if(value_path == "caqVpcParamsVpState")
    {
        caqvpcparamsvpstate = value;
    }
}

CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamstable()
{
    yang_name = "caqQueuingParamsTable"; yang_parent_name = "CISCO-ATM-QOS-MIB";
}

CiscoAtmQosMib::Caqqueuingparamstable::~Caqqueuingparamstable()
{
}

bool CiscoAtmQosMib::Caqqueuingparamstable::has_data() const
{
    for (std::size_t index=0; index<caqqueuingparamsentry.size(); index++)
    {
        if(caqqueuingparamsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmQosMib::Caqqueuingparamstable::has_operation() const
{
    for (std::size_t index=0; index<caqqueuingparamsentry.size(); index++)
    {
        if(caqqueuingparamsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmQosMib::Caqqueuingparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqqueuingparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqqueuingparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqQueuingParamsEntry")
    {
        for(auto const & c : caqqueuingparamsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry>();
        c->parent = this;
        caqqueuingparamsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqqueuingparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : caqqueuingparamsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmQosMib::Caqqueuingparamstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::Caqqueuingparamsentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    caqqueuingparamsmeanqdepth{YType::uint32, "caqQueuingParamsMeanQDepth"}
{
    yang_name = "caqQueuingParamsEntry"; yang_parent_name = "caqQueuingParamsTable";
}

CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::~Caqqueuingparamsentry()
{
}

bool CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| caqqueuingparamsmeanqdepth.is_set;
}

bool CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(atmvclvci.operation)
	|| is_set(caqqueuingparamsmeanqdepth.operation);
}

std::string CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqQueuingParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.operation)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (caqqueuingparamsmeanqdepth.is_set || is_set(caqqueuingparamsmeanqdepth.operation)) leaf_name_data.push_back(caqqueuingparamsmeanqdepth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmQosMib::Caqqueuingparamstable::Caqqueuingparamsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
    }
    if(value_path == "caqQueuingParamsMeanQDepth")
    {
        caqqueuingparamsmeanqdepth = value;
    }
}

CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclasstable()
{
    yang_name = "caqQueuingParamsClassTable"; yang_parent_name = "CISCO-ATM-QOS-MIB";
}

CiscoAtmQosMib::Caqqueuingparamsclasstable::~Caqqueuingparamsclasstable()
{
}

bool CiscoAtmQosMib::Caqqueuingparamsclasstable::has_data() const
{
    for (std::size_t index=0; index<caqqueuingparamsclassentry.size(); index++)
    {
        if(caqqueuingparamsclassentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAtmQosMib::Caqqueuingparamsclasstable::has_operation() const
{
    for (std::size_t index=0; index<caqqueuingparamsclassentry.size(); index++)
    {
        if(caqqueuingparamsclassentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAtmQosMib::Caqqueuingparamsclasstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsClassTable";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqqueuingparamsclasstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqqueuingparamsclasstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "caqQueuingParamsClassEntry")
    {
        for(auto const & c : caqqueuingparamsclassentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry>();
        c->parent = this;
        caqqueuingparamsclassentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqqueuingparamsclasstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : caqqueuingparamsclassentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAtmQosMib::Caqqueuingparamsclasstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::Caqqueuingparamsclassentry()
    :
    ifindex{YType::str, "ifIndex"},
    atmvclvpi{YType::str, "atmVclVpi"},
    atmvclvci{YType::str, "atmVclVci"},
    caqqueuingparamsclassindex{YType::int32, "caqQueuingParamsClassIndex"},
    caqqueuingparamsclassmaxthre{YType::uint32, "caqQueuingParamsClassMaxThre"},
    caqqueuingparamsclassminthre{YType::uint32, "caqQueuingParamsClassMinThre"},
    caqqueuingparamsclassmrkprob{YType::uint32, "caqQueuingParamsClassMrkProb"},
    caqqueuingparamsclassranddrp{YType::uint32, "caqQueuingParamsClassRandDrp"},
    caqqueuingparamsclasstaildrp{YType::uint32, "caqQueuingParamsClassTailDrp"}
{
    yang_name = "caqQueuingParamsClassEntry"; yang_parent_name = "caqQueuingParamsClassTable";
}

CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::~Caqqueuingparamsclassentry()
{
}

bool CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::has_data() const
{
    return ifindex.is_set
	|| atmvclvpi.is_set
	|| atmvclvci.is_set
	|| caqqueuingparamsclassindex.is_set
	|| caqqueuingparamsclassmaxthre.is_set
	|| caqqueuingparamsclassminthre.is_set
	|| caqqueuingparamsclassmrkprob.is_set
	|| caqqueuingparamsclassranddrp.is_set
	|| caqqueuingparamsclasstaildrp.is_set;
}

bool CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(atmvclvpi.operation)
	|| is_set(atmvclvci.operation)
	|| is_set(caqqueuingparamsclassindex.operation)
	|| is_set(caqqueuingparamsclassmaxthre.operation)
	|| is_set(caqqueuingparamsclassminthre.operation)
	|| is_set(caqqueuingparamsclassmrkprob.operation)
	|| is_set(caqqueuingparamsclassranddrp.operation)
	|| is_set(caqqueuingparamsclasstaildrp.operation);
}

std::string CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caqQueuingParamsClassEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[atmVclVpi='" <<atmvclvpi <<"']" <<"[atmVclVci='" <<atmvclvci <<"']" <<"[caqQueuingParamsClassIndex='" <<caqqueuingparamsclassindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-ATM-QOS-MIB:CISCO-ATM-QOS-MIB/caqQueuingParamsClassTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (atmvclvpi.is_set || is_set(atmvclvpi.operation)) leaf_name_data.push_back(atmvclvpi.get_name_leafdata());
    if (atmvclvci.is_set || is_set(atmvclvci.operation)) leaf_name_data.push_back(atmvclvci.get_name_leafdata());
    if (caqqueuingparamsclassindex.is_set || is_set(caqqueuingparamsclassindex.operation)) leaf_name_data.push_back(caqqueuingparamsclassindex.get_name_leafdata());
    if (caqqueuingparamsclassmaxthre.is_set || is_set(caqqueuingparamsclassmaxthre.operation)) leaf_name_data.push_back(caqqueuingparamsclassmaxthre.get_name_leafdata());
    if (caqqueuingparamsclassminthre.is_set || is_set(caqqueuingparamsclassminthre.operation)) leaf_name_data.push_back(caqqueuingparamsclassminthre.get_name_leafdata());
    if (caqqueuingparamsclassmrkprob.is_set || is_set(caqqueuingparamsclassmrkprob.operation)) leaf_name_data.push_back(caqqueuingparamsclassmrkprob.get_name_leafdata());
    if (caqqueuingparamsclassranddrp.is_set || is_set(caqqueuingparamsclassranddrp.operation)) leaf_name_data.push_back(caqqueuingparamsclassranddrp.get_name_leafdata());
    if (caqqueuingparamsclasstaildrp.is_set || is_set(caqqueuingparamsclasstaildrp.operation)) leaf_name_data.push_back(caqqueuingparamsclasstaildrp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAtmQosMib::Caqqueuingparamsclasstable::Caqqueuingparamsclassentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "atmVclVpi")
    {
        atmvclvpi = value;
    }
    if(value_path == "atmVclVci")
    {
        atmvclvci = value;
    }
    if(value_path == "caqQueuingParamsClassIndex")
    {
        caqqueuingparamsclassindex = value;
    }
    if(value_path == "caqQueuingParamsClassMaxThre")
    {
        caqqueuingparamsclassmaxthre = value;
    }
    if(value_path == "caqQueuingParamsClassMinThre")
    {
        caqqueuingparamsclassminthre = value;
    }
    if(value_path == "caqQueuingParamsClassMrkProb")
    {
        caqqueuingparamsclassmrkprob = value;
    }
    if(value_path == "caqQueuingParamsClassRandDrp")
    {
        caqqueuingparamsclassranddrp = value;
    }
    if(value_path == "caqQueuingParamsClassTailDrp")
    {
        caqqueuingparamsclasstaildrp = value;
    }
}

const Enum::YLeaf VcparamconfiglocationEnum::configDefault {1, "configDefault"};
const Enum::YLeaf VcparamconfiglocationEnum::configVcDirect {2, "configVcDirect"};
const Enum::YLeaf VcparamconfiglocationEnum::configVcClass {3, "configVcClass"};
const Enum::YLeaf VcparamconfiglocationEnum::configVcClassSubInterface {4, "configVcClassSubInterface"};
const Enum::YLeaf VcparamconfiglocationEnum::configVcClassInterface {5, "configVcClassInterface"};

const Enum::YLeaf VpstateEnum::vpStateInactive {1, "vpStateInactive"};
const Enum::YLeaf VpstateEnum::vpStateActive {2, "vpStateActive"};


}
}

