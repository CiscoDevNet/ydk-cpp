
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DOCS_CABLE_DEVICE_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DOCS_CABLE_DEVICE_MIB {

DOCSCABLEDEVICEMIB::DOCSCABLEDEVICEMIB()
    :
    docsdevbase(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevBase>())
    , docsdevsoftware(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevSoftware>())
    , docsdevserver(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevServer>())
    , docsdevevent(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEvent>())
    , docsdevfilter(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilter>())
    , docsdevcpe(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpe>())
    , docsdevnmaccesstable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevNmAccessTable>())
    , docsdevevcontroltable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEvControlTable>())
    , docsdeveventtable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEventTable>())
    , docsdevfilterllctable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable>())
    , docsdevfilteriptable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterIpTable>())
    , docsdevfilterpolicytable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable>())
    , docsdevfiltertostable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterTosTable>())
    , docsdevcpetable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpeTable>())
    , docsdevcpeinettable(std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpeInetTable>())
{
    docsdevbase->parent = this;
    docsdevsoftware->parent = this;
    docsdevserver->parent = this;
    docsdevevent->parent = this;
    docsdevfilter->parent = this;
    docsdevcpe->parent = this;
    docsdevnmaccesstable->parent = this;
    docsdevevcontroltable->parent = this;
    docsdeveventtable->parent = this;
    docsdevfilterllctable->parent = this;
    docsdevfilteriptable->parent = this;
    docsdevfilterpolicytable->parent = this;
    docsdevfiltertostable->parent = this;
    docsdevcpetable->parent = this;
    docsdevcpeinettable->parent = this;

    yang_name = "DOCS-CABLE-DEVICE-MIB"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::~DOCSCABLEDEVICEMIB()
{
}

bool DOCSCABLEDEVICEMIB::has_data() const
{
    if (is_presence_container) return true;
    return (docsdevbase !=  nullptr && docsdevbase->has_data())
	|| (docsdevsoftware !=  nullptr && docsdevsoftware->has_data())
	|| (docsdevserver !=  nullptr && docsdevserver->has_data())
	|| (docsdevevent !=  nullptr && docsdevevent->has_data())
	|| (docsdevfilter !=  nullptr && docsdevfilter->has_data())
	|| (docsdevcpe !=  nullptr && docsdevcpe->has_data())
	|| (docsdevnmaccesstable !=  nullptr && docsdevnmaccesstable->has_data())
	|| (docsdevevcontroltable !=  nullptr && docsdevevcontroltable->has_data())
	|| (docsdeveventtable !=  nullptr && docsdeveventtable->has_data())
	|| (docsdevfilterllctable !=  nullptr && docsdevfilterllctable->has_data())
	|| (docsdevfilteriptable !=  nullptr && docsdevfilteriptable->has_data())
	|| (docsdevfilterpolicytable !=  nullptr && docsdevfilterpolicytable->has_data())
	|| (docsdevfiltertostable !=  nullptr && docsdevfiltertostable->has_data())
	|| (docsdevcpetable !=  nullptr && docsdevcpetable->has_data())
	|| (docsdevcpeinettable !=  nullptr && docsdevcpeinettable->has_data());
}

bool DOCSCABLEDEVICEMIB::has_operation() const
{
    return is_set(yfilter)
	|| (docsdevbase !=  nullptr && docsdevbase->has_operation())
	|| (docsdevsoftware !=  nullptr && docsdevsoftware->has_operation())
	|| (docsdevserver !=  nullptr && docsdevserver->has_operation())
	|| (docsdevevent !=  nullptr && docsdevevent->has_operation())
	|| (docsdevfilter !=  nullptr && docsdevfilter->has_operation())
	|| (docsdevcpe !=  nullptr && docsdevcpe->has_operation())
	|| (docsdevnmaccesstable !=  nullptr && docsdevnmaccesstable->has_operation())
	|| (docsdevevcontroltable !=  nullptr && docsdevevcontroltable->has_operation())
	|| (docsdeveventtable !=  nullptr && docsdeveventtable->has_operation())
	|| (docsdevfilterllctable !=  nullptr && docsdevfilterllctable->has_operation())
	|| (docsdevfilteriptable !=  nullptr && docsdevfilteriptable->has_operation())
	|| (docsdevfilterpolicytable !=  nullptr && docsdevfilterpolicytable->has_operation())
	|| (docsdevfiltertostable !=  nullptr && docsdevfiltertostable->has_operation())
	|| (docsdevcpetable !=  nullptr && docsdevcpetable->has_operation())
	|| (docsdevcpeinettable !=  nullptr && docsdevcpeinettable->has_operation());
}

std::string DOCSCABLEDEVICEMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevBase")
    {
        if(docsdevbase == nullptr)
        {
            docsdevbase = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevBase>();
        }
        return docsdevbase;
    }

    if(child_yang_name == "docsDevSoftware")
    {
        if(docsdevsoftware == nullptr)
        {
            docsdevsoftware = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevSoftware>();
        }
        return docsdevsoftware;
    }

    if(child_yang_name == "docsDevServer")
    {
        if(docsdevserver == nullptr)
        {
            docsdevserver = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevServer>();
        }
        return docsdevserver;
    }

    if(child_yang_name == "docsDevEvent")
    {
        if(docsdevevent == nullptr)
        {
            docsdevevent = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEvent>();
        }
        return docsdevevent;
    }

    if(child_yang_name == "docsDevFilter")
    {
        if(docsdevfilter == nullptr)
        {
            docsdevfilter = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilter>();
        }
        return docsdevfilter;
    }

    if(child_yang_name == "docsDevCpe")
    {
        if(docsdevcpe == nullptr)
        {
            docsdevcpe = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpe>();
        }
        return docsdevcpe;
    }

    if(child_yang_name == "docsDevNmAccessTable")
    {
        if(docsdevnmaccesstable == nullptr)
        {
            docsdevnmaccesstable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevNmAccessTable>();
        }
        return docsdevnmaccesstable;
    }

    if(child_yang_name == "docsDevEvControlTable")
    {
        if(docsdevevcontroltable == nullptr)
        {
            docsdevevcontroltable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEvControlTable>();
        }
        return docsdevevcontroltable;
    }

    if(child_yang_name == "docsDevEventTable")
    {
        if(docsdeveventtable == nullptr)
        {
            docsdeveventtable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEventTable>();
        }
        return docsdeveventtable;
    }

    if(child_yang_name == "docsDevFilterLLCTable")
    {
        if(docsdevfilterllctable == nullptr)
        {
            docsdevfilterllctable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable>();
        }
        return docsdevfilterllctable;
    }

    if(child_yang_name == "docsDevFilterIpTable")
    {
        if(docsdevfilteriptable == nullptr)
        {
            docsdevfilteriptable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterIpTable>();
        }
        return docsdevfilteriptable;
    }

    if(child_yang_name == "docsDevFilterPolicyTable")
    {
        if(docsdevfilterpolicytable == nullptr)
        {
            docsdevfilterpolicytable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable>();
        }
        return docsdevfilterpolicytable;
    }

    if(child_yang_name == "docsDevFilterTosTable")
    {
        if(docsdevfiltertostable == nullptr)
        {
            docsdevfiltertostable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterTosTable>();
        }
        return docsdevfiltertostable;
    }

    if(child_yang_name == "docsDevCpeTable")
    {
        if(docsdevcpetable == nullptr)
        {
            docsdevcpetable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpeTable>();
        }
        return docsdevcpetable;
    }

    if(child_yang_name == "docsDevCpeInetTable")
    {
        if(docsdevcpeinettable == nullptr)
        {
            docsdevcpeinettable = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpeInetTable>();
        }
        return docsdevcpeinettable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(docsdevbase != nullptr)
    {
        children["docsDevBase"] = docsdevbase;
    }

    if(docsdevsoftware != nullptr)
    {
        children["docsDevSoftware"] = docsdevsoftware;
    }

    if(docsdevserver != nullptr)
    {
        children["docsDevServer"] = docsdevserver;
    }

    if(docsdevevent != nullptr)
    {
        children["docsDevEvent"] = docsdevevent;
    }

    if(docsdevfilter != nullptr)
    {
        children["docsDevFilter"] = docsdevfilter;
    }

    if(docsdevcpe != nullptr)
    {
        children["docsDevCpe"] = docsdevcpe;
    }

    if(docsdevnmaccesstable != nullptr)
    {
        children["docsDevNmAccessTable"] = docsdevnmaccesstable;
    }

    if(docsdevevcontroltable != nullptr)
    {
        children["docsDevEvControlTable"] = docsdevevcontroltable;
    }

    if(docsdeveventtable != nullptr)
    {
        children["docsDevEventTable"] = docsdeveventtable;
    }

    if(docsdevfilterllctable != nullptr)
    {
        children["docsDevFilterLLCTable"] = docsdevfilterllctable;
    }

    if(docsdevfilteriptable != nullptr)
    {
        children["docsDevFilterIpTable"] = docsdevfilteriptable;
    }

    if(docsdevfilterpolicytable != nullptr)
    {
        children["docsDevFilterPolicyTable"] = docsdevfilterpolicytable;
    }

    if(docsdevfiltertostable != nullptr)
    {
        children["docsDevFilterTosTable"] = docsdevfiltertostable;
    }

    if(docsdevcpetable != nullptr)
    {
        children["docsDevCpeTable"] = docsdevcpetable;
    }

    if(docsdevcpeinettable != nullptr)
    {
        children["docsDevCpeInetTable"] = docsdevcpeinettable;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::clone_ptr() const
{
    return std::make_shared<DOCSCABLEDEVICEMIB>();
}

std::string DOCSCABLEDEVICEMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DOCSCABLEDEVICEMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DOCSCABLEDEVICEMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DOCSCABLEDEVICEMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DOCSCABLEDEVICEMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevBase" || name == "docsDevSoftware" || name == "docsDevServer" || name == "docsDevEvent" || name == "docsDevFilter" || name == "docsDevCpe" || name == "docsDevNmAccessTable" || name == "docsDevEvControlTable" || name == "docsDevEventTable" || name == "docsDevFilterLLCTable" || name == "docsDevFilterIpTable" || name == "docsDevFilterPolicyTable" || name == "docsDevFilterTosTable" || name == "docsDevCpeTable" || name == "docsDevCpeInetTable")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevBase()
    :
    docsdevrole{YType::enumeration, "docsDevRole"},
    docsdevdatetime{YType::str, "docsDevDateTime"},
    docsdevresetnow{YType::boolean, "docsDevResetNow"},
    docsdevserialnumber{YType::str, "docsDevSerialNumber"},
    docsdevstpcontrol{YType::enumeration, "docsDevSTPControl"},
    docsdevigmpmodecontrol{YType::enumeration, "docsDevIgmpModeControl"},
    docsdevmaxcpe{YType::uint32, "docsDevMaxCpe"}
{

    yang_name = "docsDevBase"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevBase::~DocsDevBase()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevBase::has_data() const
{
    if (is_presence_container) return true;
    return docsdevrole.is_set
	|| docsdevdatetime.is_set
	|| docsdevresetnow.is_set
	|| docsdevserialnumber.is_set
	|| docsdevstpcontrol.is_set
	|| docsdevigmpmodecontrol.is_set
	|| docsdevmaxcpe.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevBase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevrole.yfilter)
	|| ydk::is_set(docsdevdatetime.yfilter)
	|| ydk::is_set(docsdevresetnow.yfilter)
	|| ydk::is_set(docsdevserialnumber.yfilter)
	|| ydk::is_set(docsdevstpcontrol.yfilter)
	|| ydk::is_set(docsdevigmpmodecontrol.yfilter)
	|| ydk::is_set(docsdevmaxcpe.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevBase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevBase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevBase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevBase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevrole.is_set || is_set(docsdevrole.yfilter)) leaf_name_data.push_back(docsdevrole.get_name_leafdata());
    if (docsdevdatetime.is_set || is_set(docsdevdatetime.yfilter)) leaf_name_data.push_back(docsdevdatetime.get_name_leafdata());
    if (docsdevresetnow.is_set || is_set(docsdevresetnow.yfilter)) leaf_name_data.push_back(docsdevresetnow.get_name_leafdata());
    if (docsdevserialnumber.is_set || is_set(docsdevserialnumber.yfilter)) leaf_name_data.push_back(docsdevserialnumber.get_name_leafdata());
    if (docsdevstpcontrol.is_set || is_set(docsdevstpcontrol.yfilter)) leaf_name_data.push_back(docsdevstpcontrol.get_name_leafdata());
    if (docsdevigmpmodecontrol.is_set || is_set(docsdevigmpmodecontrol.yfilter)) leaf_name_data.push_back(docsdevigmpmodecontrol.get_name_leafdata());
    if (docsdevmaxcpe.is_set || is_set(docsdevmaxcpe.yfilter)) leaf_name_data.push_back(docsdevmaxcpe.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevBase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevBase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevBase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevRole")
    {
        docsdevrole = value;
        docsdevrole.value_namespace = name_space;
        docsdevrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevDateTime")
    {
        docsdevdatetime = value;
        docsdevdatetime.value_namespace = name_space;
        docsdevdatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevResetNow")
    {
        docsdevresetnow = value;
        docsdevresetnow.value_namespace = name_space;
        docsdevresetnow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSerialNumber")
    {
        docsdevserialnumber = value;
        docsdevserialnumber.value_namespace = name_space;
        docsdevserialnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSTPControl")
    {
        docsdevstpcontrol = value;
        docsdevstpcontrol.value_namespace = name_space;
        docsdevstpcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevIgmpModeControl")
    {
        docsdevigmpmodecontrol = value;
        docsdevigmpmodecontrol.value_namespace = name_space;
        docsdevigmpmodecontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevMaxCpe")
    {
        docsdevmaxcpe = value;
        docsdevmaxcpe.value_namespace = name_space;
        docsdevmaxcpe.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevBase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevRole")
    {
        docsdevrole.yfilter = yfilter;
    }
    if(value_path == "docsDevDateTime")
    {
        docsdevdatetime.yfilter = yfilter;
    }
    if(value_path == "docsDevResetNow")
    {
        docsdevresetnow.yfilter = yfilter;
    }
    if(value_path == "docsDevSerialNumber")
    {
        docsdevserialnumber.yfilter = yfilter;
    }
    if(value_path == "docsDevSTPControl")
    {
        docsdevstpcontrol.yfilter = yfilter;
    }
    if(value_path == "docsDevIgmpModeControl")
    {
        docsdevigmpmodecontrol.yfilter = yfilter;
    }
    if(value_path == "docsDevMaxCpe")
    {
        docsdevmaxcpe.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevBase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevRole" || name == "docsDevDateTime" || name == "docsDevResetNow" || name == "docsDevSerialNumber" || name == "docsDevSTPControl" || name == "docsDevIgmpModeControl" || name == "docsDevMaxCpe")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSoftware()
    :
    docsdevswserver{YType::str, "docsDevSwServer"},
    docsdevswfilename{YType::str, "docsDevSwFilename"},
    docsdevswadminstatus{YType::enumeration, "docsDevSwAdminStatus"},
    docsdevswoperstatus{YType::enumeration, "docsDevSwOperStatus"},
    docsdevswcurrentvers{YType::str, "docsDevSwCurrentVers"},
    docsdevswserveraddresstype{YType::enumeration, "docsDevSwServerAddressType"},
    docsdevswserveraddress{YType::str, "docsDevSwServerAddress"},
    docsdevswservertransportprotocol{YType::enumeration, "docsDevSwServerTransportProtocol"}
{

    yang_name = "docsDevSoftware"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevSoftware::~DocsDevSoftware()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevSoftware::has_data() const
{
    if (is_presence_container) return true;
    return docsdevswserver.is_set
	|| docsdevswfilename.is_set
	|| docsdevswadminstatus.is_set
	|| docsdevswoperstatus.is_set
	|| docsdevswcurrentvers.is_set
	|| docsdevswserveraddresstype.is_set
	|| docsdevswserveraddress.is_set
	|| docsdevswservertransportprotocol.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevSoftware::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevswserver.yfilter)
	|| ydk::is_set(docsdevswfilename.yfilter)
	|| ydk::is_set(docsdevswadminstatus.yfilter)
	|| ydk::is_set(docsdevswoperstatus.yfilter)
	|| ydk::is_set(docsdevswcurrentvers.yfilter)
	|| ydk::is_set(docsdevswserveraddresstype.yfilter)
	|| ydk::is_set(docsdevswserveraddress.yfilter)
	|| ydk::is_set(docsdevswservertransportprotocol.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevSoftware::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevSoftware::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevSoftware";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevSoftware::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevswserver.is_set || is_set(docsdevswserver.yfilter)) leaf_name_data.push_back(docsdevswserver.get_name_leafdata());
    if (docsdevswfilename.is_set || is_set(docsdevswfilename.yfilter)) leaf_name_data.push_back(docsdevswfilename.get_name_leafdata());
    if (docsdevswadminstatus.is_set || is_set(docsdevswadminstatus.yfilter)) leaf_name_data.push_back(docsdevswadminstatus.get_name_leafdata());
    if (docsdevswoperstatus.is_set || is_set(docsdevswoperstatus.yfilter)) leaf_name_data.push_back(docsdevswoperstatus.get_name_leafdata());
    if (docsdevswcurrentvers.is_set || is_set(docsdevswcurrentvers.yfilter)) leaf_name_data.push_back(docsdevswcurrentvers.get_name_leafdata());
    if (docsdevswserveraddresstype.is_set || is_set(docsdevswserveraddresstype.yfilter)) leaf_name_data.push_back(docsdevswserveraddresstype.get_name_leafdata());
    if (docsdevswserveraddress.is_set || is_set(docsdevswserveraddress.yfilter)) leaf_name_data.push_back(docsdevswserveraddress.get_name_leafdata());
    if (docsdevswservertransportprotocol.is_set || is_set(docsdevswservertransportprotocol.yfilter)) leaf_name_data.push_back(docsdevswservertransportprotocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevSoftware::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevSoftware::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevSoftware::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevSwServer")
    {
        docsdevswserver = value;
        docsdevswserver.value_namespace = name_space;
        docsdevswserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSwFilename")
    {
        docsdevswfilename = value;
        docsdevswfilename.value_namespace = name_space;
        docsdevswfilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSwAdminStatus")
    {
        docsdevswadminstatus = value;
        docsdevswadminstatus.value_namespace = name_space;
        docsdevswadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSwOperStatus")
    {
        docsdevswoperstatus = value;
        docsdevswoperstatus.value_namespace = name_space;
        docsdevswoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSwCurrentVers")
    {
        docsdevswcurrentvers = value;
        docsdevswcurrentvers.value_namespace = name_space;
        docsdevswcurrentvers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSwServerAddressType")
    {
        docsdevswserveraddresstype = value;
        docsdevswserveraddresstype.value_namespace = name_space;
        docsdevswserveraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSwServerAddress")
    {
        docsdevswserveraddress = value;
        docsdevswserveraddress.value_namespace = name_space;
        docsdevswserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevSwServerTransportProtocol")
    {
        docsdevswservertransportprotocol = value;
        docsdevswservertransportprotocol.value_namespace = name_space;
        docsdevswservertransportprotocol.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevSoftware::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevSwServer")
    {
        docsdevswserver.yfilter = yfilter;
    }
    if(value_path == "docsDevSwFilename")
    {
        docsdevswfilename.yfilter = yfilter;
    }
    if(value_path == "docsDevSwAdminStatus")
    {
        docsdevswadminstatus.yfilter = yfilter;
    }
    if(value_path == "docsDevSwOperStatus")
    {
        docsdevswoperstatus.yfilter = yfilter;
    }
    if(value_path == "docsDevSwCurrentVers")
    {
        docsdevswcurrentvers.yfilter = yfilter;
    }
    if(value_path == "docsDevSwServerAddressType")
    {
        docsdevswserveraddresstype.yfilter = yfilter;
    }
    if(value_path == "docsDevSwServerAddress")
    {
        docsdevswserveraddress.yfilter = yfilter;
    }
    if(value_path == "docsDevSwServerTransportProtocol")
    {
        docsdevswservertransportprotocol.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevSoftware::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevSwServer" || name == "docsDevSwFilename" || name == "docsDevSwAdminStatus" || name == "docsDevSwOperStatus" || name == "docsDevSwCurrentVers" || name == "docsDevSwServerAddressType" || name == "docsDevSwServerAddress" || name == "docsDevSwServerTransportProtocol")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServer()
    :
    docsdevserverbootstate{YType::enumeration, "docsDevServerBootState"},
    docsdevserverdhcp{YType::str, "docsDevServerDhcp"},
    docsdevservertime{YType::str, "docsDevServerTime"},
    docsdevservertftp{YType::str, "docsDevServerTftp"},
    docsdevserverconfigfile{YType::str, "docsDevServerConfigFile"},
    docsdevserverdhcpaddresstype{YType::enumeration, "docsDevServerDhcpAddressType"},
    docsdevserverdhcpaddress{YType::str, "docsDevServerDhcpAddress"},
    docsdevservertimeaddresstype{YType::enumeration, "docsDevServerTimeAddressType"},
    docsdevservertimeaddress{YType::str, "docsDevServerTimeAddress"},
    docsdevserverconfigtftpaddresstype{YType::enumeration, "docsDevServerConfigTftpAddressType"},
    docsdevserverconfigtftpaddress{YType::str, "docsDevServerConfigTftpAddress"}
{

    yang_name = "docsDevServer"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevServer::~DocsDevServer()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevServer::has_data() const
{
    if (is_presence_container) return true;
    return docsdevserverbootstate.is_set
	|| docsdevserverdhcp.is_set
	|| docsdevservertime.is_set
	|| docsdevservertftp.is_set
	|| docsdevserverconfigfile.is_set
	|| docsdevserverdhcpaddresstype.is_set
	|| docsdevserverdhcpaddress.is_set
	|| docsdevservertimeaddresstype.is_set
	|| docsdevservertimeaddress.is_set
	|| docsdevserverconfigtftpaddresstype.is_set
	|| docsdevserverconfigtftpaddress.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevserverbootstate.yfilter)
	|| ydk::is_set(docsdevserverdhcp.yfilter)
	|| ydk::is_set(docsdevservertime.yfilter)
	|| ydk::is_set(docsdevservertftp.yfilter)
	|| ydk::is_set(docsdevserverconfigfile.yfilter)
	|| ydk::is_set(docsdevserverdhcpaddresstype.yfilter)
	|| ydk::is_set(docsdevserverdhcpaddress.yfilter)
	|| ydk::is_set(docsdevservertimeaddresstype.yfilter)
	|| ydk::is_set(docsdevservertimeaddress.yfilter)
	|| ydk::is_set(docsdevserverconfigtftpaddresstype.yfilter)
	|| ydk::is_set(docsdevserverconfigtftpaddress.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevServer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevserverbootstate.is_set || is_set(docsdevserverbootstate.yfilter)) leaf_name_data.push_back(docsdevserverbootstate.get_name_leafdata());
    if (docsdevserverdhcp.is_set || is_set(docsdevserverdhcp.yfilter)) leaf_name_data.push_back(docsdevserverdhcp.get_name_leafdata());
    if (docsdevservertime.is_set || is_set(docsdevservertime.yfilter)) leaf_name_data.push_back(docsdevservertime.get_name_leafdata());
    if (docsdevservertftp.is_set || is_set(docsdevservertftp.yfilter)) leaf_name_data.push_back(docsdevservertftp.get_name_leafdata());
    if (docsdevserverconfigfile.is_set || is_set(docsdevserverconfigfile.yfilter)) leaf_name_data.push_back(docsdevserverconfigfile.get_name_leafdata());
    if (docsdevserverdhcpaddresstype.is_set || is_set(docsdevserverdhcpaddresstype.yfilter)) leaf_name_data.push_back(docsdevserverdhcpaddresstype.get_name_leafdata());
    if (docsdevserverdhcpaddress.is_set || is_set(docsdevserverdhcpaddress.yfilter)) leaf_name_data.push_back(docsdevserverdhcpaddress.get_name_leafdata());
    if (docsdevservertimeaddresstype.is_set || is_set(docsdevservertimeaddresstype.yfilter)) leaf_name_data.push_back(docsdevservertimeaddresstype.get_name_leafdata());
    if (docsdevservertimeaddress.is_set || is_set(docsdevservertimeaddress.yfilter)) leaf_name_data.push_back(docsdevservertimeaddress.get_name_leafdata());
    if (docsdevserverconfigtftpaddresstype.is_set || is_set(docsdevserverconfigtftpaddresstype.yfilter)) leaf_name_data.push_back(docsdevserverconfigtftpaddresstype.get_name_leafdata());
    if (docsdevserverconfigtftpaddress.is_set || is_set(docsdevserverconfigtftpaddress.yfilter)) leaf_name_data.push_back(docsdevserverconfigtftpaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevServerBootState")
    {
        docsdevserverbootstate = value;
        docsdevserverbootstate.value_namespace = name_space;
        docsdevserverbootstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerDhcp")
    {
        docsdevserverdhcp = value;
        docsdevserverdhcp.value_namespace = name_space;
        docsdevserverdhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerTime")
    {
        docsdevservertime = value;
        docsdevservertime.value_namespace = name_space;
        docsdevservertime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerTftp")
    {
        docsdevservertftp = value;
        docsdevservertftp.value_namespace = name_space;
        docsdevservertftp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerConfigFile")
    {
        docsdevserverconfigfile = value;
        docsdevserverconfigfile.value_namespace = name_space;
        docsdevserverconfigfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerDhcpAddressType")
    {
        docsdevserverdhcpaddresstype = value;
        docsdevserverdhcpaddresstype.value_namespace = name_space;
        docsdevserverdhcpaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerDhcpAddress")
    {
        docsdevserverdhcpaddress = value;
        docsdevserverdhcpaddress.value_namespace = name_space;
        docsdevserverdhcpaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerTimeAddressType")
    {
        docsdevservertimeaddresstype = value;
        docsdevservertimeaddresstype.value_namespace = name_space;
        docsdevservertimeaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerTimeAddress")
    {
        docsdevservertimeaddress = value;
        docsdevservertimeaddress.value_namespace = name_space;
        docsdevservertimeaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerConfigTftpAddressType")
    {
        docsdevserverconfigtftpaddresstype = value;
        docsdevserverconfigtftpaddresstype.value_namespace = name_space;
        docsdevserverconfigtftpaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevServerConfigTftpAddress")
    {
        docsdevserverconfigtftpaddress = value;
        docsdevserverconfigtftpaddress.value_namespace = name_space;
        docsdevserverconfigtftpaddress.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevServerBootState")
    {
        docsdevserverbootstate.yfilter = yfilter;
    }
    if(value_path == "docsDevServerDhcp")
    {
        docsdevserverdhcp.yfilter = yfilter;
    }
    if(value_path == "docsDevServerTime")
    {
        docsdevservertime.yfilter = yfilter;
    }
    if(value_path == "docsDevServerTftp")
    {
        docsdevservertftp.yfilter = yfilter;
    }
    if(value_path == "docsDevServerConfigFile")
    {
        docsdevserverconfigfile.yfilter = yfilter;
    }
    if(value_path == "docsDevServerDhcpAddressType")
    {
        docsdevserverdhcpaddresstype.yfilter = yfilter;
    }
    if(value_path == "docsDevServerDhcpAddress")
    {
        docsdevserverdhcpaddress.yfilter = yfilter;
    }
    if(value_path == "docsDevServerTimeAddressType")
    {
        docsdevservertimeaddresstype.yfilter = yfilter;
    }
    if(value_path == "docsDevServerTimeAddress")
    {
        docsdevservertimeaddress.yfilter = yfilter;
    }
    if(value_path == "docsDevServerConfigTftpAddressType")
    {
        docsdevserverconfigtftpaddresstype.yfilter = yfilter;
    }
    if(value_path == "docsDevServerConfigTftpAddress")
    {
        docsdevserverconfigtftpaddress.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevServerBootState" || name == "docsDevServerDhcp" || name == "docsDevServerTime" || name == "docsDevServerTftp" || name == "docsDevServerConfigFile" || name == "docsDevServerDhcpAddressType" || name == "docsDevServerDhcpAddress" || name == "docsDevServerTimeAddressType" || name == "docsDevServerTimeAddress" || name == "docsDevServerConfigTftpAddressType" || name == "docsDevServerConfigTftpAddress")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvent()
    :
    docsdevevcontrol{YType::enumeration, "docsDevEvControl"},
    docsdevevsyslog{YType::str, "docsDevEvSyslog"},
    docsdevevthrottleadminstatus{YType::enumeration, "docsDevEvThrottleAdminStatus"},
    docsdevevthrottleinhibited{YType::boolean, "docsDevEvThrottleInhibited"},
    docsdevevthrottlethreshold{YType::uint32, "docsDevEvThrottleThreshold"},
    docsdevevthrottleinterval{YType::int32, "docsDevEvThrottleInterval"},
    docsdevevsyslogaddresstype{YType::enumeration, "docsDevEvSyslogAddressType"},
    docsdevevsyslogaddress{YType::str, "docsDevEvSyslogAddress"},
    docsdevevthrottlethresholdexceeded{YType::boolean, "docsDevEvThrottleThresholdExceeded"}
{

    yang_name = "docsDevEvent"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevEvent::~DocsDevEvent()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevEvent::has_data() const
{
    if (is_presence_container) return true;
    return docsdevevcontrol.is_set
	|| docsdevevsyslog.is_set
	|| docsdevevthrottleadminstatus.is_set
	|| docsdevevthrottleinhibited.is_set
	|| docsdevevthrottlethreshold.is_set
	|| docsdevevthrottleinterval.is_set
	|| docsdevevsyslogaddresstype.is_set
	|| docsdevevsyslogaddress.is_set
	|| docsdevevthrottlethresholdexceeded.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevevcontrol.yfilter)
	|| ydk::is_set(docsdevevsyslog.yfilter)
	|| ydk::is_set(docsdevevthrottleadminstatus.yfilter)
	|| ydk::is_set(docsdevevthrottleinhibited.yfilter)
	|| ydk::is_set(docsdevevthrottlethreshold.yfilter)
	|| ydk::is_set(docsdevevthrottleinterval.yfilter)
	|| ydk::is_set(docsdevevsyslogaddresstype.yfilter)
	|| ydk::is_set(docsdevevsyslogaddress.yfilter)
	|| ydk::is_set(docsdevevthrottlethresholdexceeded.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevEvent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevevcontrol.is_set || is_set(docsdevevcontrol.yfilter)) leaf_name_data.push_back(docsdevevcontrol.get_name_leafdata());
    if (docsdevevsyslog.is_set || is_set(docsdevevsyslog.yfilter)) leaf_name_data.push_back(docsdevevsyslog.get_name_leafdata());
    if (docsdevevthrottleadminstatus.is_set || is_set(docsdevevthrottleadminstatus.yfilter)) leaf_name_data.push_back(docsdevevthrottleadminstatus.get_name_leafdata());
    if (docsdevevthrottleinhibited.is_set || is_set(docsdevevthrottleinhibited.yfilter)) leaf_name_data.push_back(docsdevevthrottleinhibited.get_name_leafdata());
    if (docsdevevthrottlethreshold.is_set || is_set(docsdevevthrottlethreshold.yfilter)) leaf_name_data.push_back(docsdevevthrottlethreshold.get_name_leafdata());
    if (docsdevevthrottleinterval.is_set || is_set(docsdevevthrottleinterval.yfilter)) leaf_name_data.push_back(docsdevevthrottleinterval.get_name_leafdata());
    if (docsdevevsyslogaddresstype.is_set || is_set(docsdevevsyslogaddresstype.yfilter)) leaf_name_data.push_back(docsdevevsyslogaddresstype.get_name_leafdata());
    if (docsdevevsyslogaddress.is_set || is_set(docsdevevsyslogaddress.yfilter)) leaf_name_data.push_back(docsdevevsyslogaddress.get_name_leafdata());
    if (docsdevevthrottlethresholdexceeded.is_set || is_set(docsdevevthrottlethresholdexceeded.yfilter)) leaf_name_data.push_back(docsdevevthrottlethresholdexceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevEvControl")
    {
        docsdevevcontrol = value;
        docsdevevcontrol.value_namespace = name_space;
        docsdevevcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvSyslog")
    {
        docsdevevsyslog = value;
        docsdevevsyslog.value_namespace = name_space;
        docsdevevsyslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvThrottleAdminStatus")
    {
        docsdevevthrottleadminstatus = value;
        docsdevevthrottleadminstatus.value_namespace = name_space;
        docsdevevthrottleadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvThrottleInhibited")
    {
        docsdevevthrottleinhibited = value;
        docsdevevthrottleinhibited.value_namespace = name_space;
        docsdevevthrottleinhibited.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvThrottleThreshold")
    {
        docsdevevthrottlethreshold = value;
        docsdevevthrottlethreshold.value_namespace = name_space;
        docsdevevthrottlethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvThrottleInterval")
    {
        docsdevevthrottleinterval = value;
        docsdevevthrottleinterval.value_namespace = name_space;
        docsdevevthrottleinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvSyslogAddressType")
    {
        docsdevevsyslogaddresstype = value;
        docsdevevsyslogaddresstype.value_namespace = name_space;
        docsdevevsyslogaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvSyslogAddress")
    {
        docsdevevsyslogaddress = value;
        docsdevevsyslogaddress.value_namespace = name_space;
        docsdevevsyslogaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvThrottleThresholdExceeded")
    {
        docsdevevthrottlethresholdexceeded = value;
        docsdevevthrottlethresholdexceeded.value_namespace = name_space;
        docsdevevthrottlethresholdexceeded.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevEvControl")
    {
        docsdevevcontrol.yfilter = yfilter;
    }
    if(value_path == "docsDevEvSyslog")
    {
        docsdevevsyslog.yfilter = yfilter;
    }
    if(value_path == "docsDevEvThrottleAdminStatus")
    {
        docsdevevthrottleadminstatus.yfilter = yfilter;
    }
    if(value_path == "docsDevEvThrottleInhibited")
    {
        docsdevevthrottleinhibited.yfilter = yfilter;
    }
    if(value_path == "docsDevEvThrottleThreshold")
    {
        docsdevevthrottlethreshold.yfilter = yfilter;
    }
    if(value_path == "docsDevEvThrottleInterval")
    {
        docsdevevthrottleinterval.yfilter = yfilter;
    }
    if(value_path == "docsDevEvSyslogAddressType")
    {
        docsdevevsyslogaddresstype.yfilter = yfilter;
    }
    if(value_path == "docsDevEvSyslogAddress")
    {
        docsdevevsyslogaddress.yfilter = yfilter;
    }
    if(value_path == "docsDevEvThrottleThresholdExceeded")
    {
        docsdevevthrottlethresholdexceeded.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevEvControl" || name == "docsDevEvSyslog" || name == "docsDevEvThrottleAdminStatus" || name == "docsDevEvThrottleInhibited" || name == "docsDevEvThrottleThreshold" || name == "docsDevEvThrottleInterval" || name == "docsDevEvSyslogAddressType" || name == "docsDevEvSyslogAddress" || name == "docsDevEvThrottleThresholdExceeded")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilter::DocsDevFilter()
    :
    docsdevfilterllcunmatchedaction{YType::enumeration, "docsDevFilterLLCUnmatchedAction"},
    docsdevfilteripdefault{YType::enumeration, "docsDevFilterIpDefault"}
{

    yang_name = "docsDevFilter"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilter::~DocsDevFilter()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilter::has_data() const
{
    if (is_presence_container) return true;
    return docsdevfilterllcunmatchedaction.is_set
	|| docsdevfilteripdefault.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevfilterllcunmatchedaction.yfilter)
	|| ydk::is_set(docsdevfilteripdefault.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevfilterllcunmatchedaction.is_set || is_set(docsdevfilterllcunmatchedaction.yfilter)) leaf_name_data.push_back(docsdevfilterllcunmatchedaction.get_name_leafdata());
    if (docsdevfilteripdefault.is_set || is_set(docsdevfilteripdefault.yfilter)) leaf_name_data.push_back(docsdevfilteripdefault.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevFilterLLCUnmatchedAction")
    {
        docsdevfilterllcunmatchedaction = value;
        docsdevfilterllcunmatchedaction.value_namespace = name_space;
        docsdevfilterllcunmatchedaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpDefault")
    {
        docsdevfilteripdefault = value;
        docsdevfilteripdefault.value_namespace = name_space;
        docsdevfilteripdefault.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevFilterLLCUnmatchedAction")
    {
        docsdevfilterllcunmatchedaction.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpDefault")
    {
        docsdevfilteripdefault.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterLLCUnmatchedAction" || name == "docsDevFilterIpDefault")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevCpe::DocsDevCpe()
    :
    docsdevcpeenroll{YType::enumeration, "docsDevCpeEnroll"},
    docsdevcpeipmax{YType::int32, "docsDevCpeIpMax"}
{

    yang_name = "docsDevCpe"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevCpe::~DocsDevCpe()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevCpe::has_data() const
{
    if (is_presence_container) return true;
    return docsdevcpeenroll.is_set
	|| docsdevcpeipmax.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevCpe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevcpeenroll.yfilter)
	|| ydk::is_set(docsdevcpeipmax.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevCpe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevCpe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevcpeenroll.is_set || is_set(docsdevcpeenroll.yfilter)) leaf_name_data.push_back(docsdevcpeenroll.get_name_leafdata());
    if (docsdevcpeipmax.is_set || is_set(docsdevcpeipmax.yfilter)) leaf_name_data.push_back(docsdevcpeipmax.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevCpe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevCpe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevCpe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevCpeEnroll")
    {
        docsdevcpeenroll = value;
        docsdevcpeenroll.value_namespace = name_space;
        docsdevcpeenroll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevCpeIpMax")
    {
        docsdevcpeipmax = value;
        docsdevcpeipmax.value_namespace = name_space;
        docsdevcpeipmax.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevCpe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevCpeEnroll")
    {
        docsdevcpeenroll.yfilter = yfilter;
    }
    if(value_path == "docsDevCpeIpMax")
    {
        docsdevcpeipmax.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevCpe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevCpeEnroll" || name == "docsDevCpeIpMax")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessTable()
    :
    docsdevnmaccessentry(this, {"docsdevnmaccessindex"})
{

    yang_name = "docsDevNmAccessTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::~DocsDevNmAccessTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevnmaccessentry.len(); index++)
    {
        if(docsdevnmaccessentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevnmaccessentry.len(); index++)
    {
        if(docsdevnmaccessentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevNmAccessTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevNmAccessEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry>();
        c->parent = this;
        docsdevnmaccessentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevnmaccessentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevNmAccessEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessEntry()
    :
    docsdevnmaccessindex{YType::int32, "docsDevNmAccessIndex"},
    docsdevnmaccessip{YType::str, "docsDevNmAccessIp"},
    docsdevnmaccessipmask{YType::str, "docsDevNmAccessIpMask"},
    docsdevnmaccesscommunity{YType::str, "docsDevNmAccessCommunity"},
    docsdevnmaccesscontrol{YType::enumeration, "docsDevNmAccessControl"},
    docsdevnmaccessinterfaces{YType::str, "docsDevNmAccessInterfaces"},
    docsdevnmaccessstatus{YType::enumeration, "docsDevNmAccessStatus"},
    docsdevnmaccesstrapversion{YType::enumeration, "docsDevNmAccessTrapVersion"}
{

    yang_name = "docsDevNmAccessEntry"; yang_parent_name = "docsDevNmAccessTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::~DocsDevNmAccessEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevnmaccessindex.is_set
	|| docsdevnmaccessip.is_set
	|| docsdevnmaccessipmask.is_set
	|| docsdevnmaccesscommunity.is_set
	|| docsdevnmaccesscontrol.is_set
	|| docsdevnmaccessinterfaces.is_set
	|| docsdevnmaccessstatus.is_set
	|| docsdevnmaccesstrapversion.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevnmaccessindex.yfilter)
	|| ydk::is_set(docsdevnmaccessip.yfilter)
	|| ydk::is_set(docsdevnmaccessipmask.yfilter)
	|| ydk::is_set(docsdevnmaccesscommunity.yfilter)
	|| ydk::is_set(docsdevnmaccesscontrol.yfilter)
	|| ydk::is_set(docsdevnmaccessinterfaces.yfilter)
	|| ydk::is_set(docsdevnmaccessstatus.yfilter)
	|| ydk::is_set(docsdevnmaccesstrapversion.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevNmAccessTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevNmAccessEntry";
    ADD_KEY_TOKEN(docsdevnmaccessindex, "docsDevNmAccessIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevnmaccessindex.is_set || is_set(docsdevnmaccessindex.yfilter)) leaf_name_data.push_back(docsdevnmaccessindex.get_name_leafdata());
    if (docsdevnmaccessip.is_set || is_set(docsdevnmaccessip.yfilter)) leaf_name_data.push_back(docsdevnmaccessip.get_name_leafdata());
    if (docsdevnmaccessipmask.is_set || is_set(docsdevnmaccessipmask.yfilter)) leaf_name_data.push_back(docsdevnmaccessipmask.get_name_leafdata());
    if (docsdevnmaccesscommunity.is_set || is_set(docsdevnmaccesscommunity.yfilter)) leaf_name_data.push_back(docsdevnmaccesscommunity.get_name_leafdata());
    if (docsdevnmaccesscontrol.is_set || is_set(docsdevnmaccesscontrol.yfilter)) leaf_name_data.push_back(docsdevnmaccesscontrol.get_name_leafdata());
    if (docsdevnmaccessinterfaces.is_set || is_set(docsdevnmaccessinterfaces.yfilter)) leaf_name_data.push_back(docsdevnmaccessinterfaces.get_name_leafdata());
    if (docsdevnmaccessstatus.is_set || is_set(docsdevnmaccessstatus.yfilter)) leaf_name_data.push_back(docsdevnmaccessstatus.get_name_leafdata());
    if (docsdevnmaccesstrapversion.is_set || is_set(docsdevnmaccesstrapversion.yfilter)) leaf_name_data.push_back(docsdevnmaccesstrapversion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevNmAccessIndex")
    {
        docsdevnmaccessindex = value;
        docsdevnmaccessindex.value_namespace = name_space;
        docsdevnmaccessindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevNmAccessIp")
    {
        docsdevnmaccessip = value;
        docsdevnmaccessip.value_namespace = name_space;
        docsdevnmaccessip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevNmAccessIpMask")
    {
        docsdevnmaccessipmask = value;
        docsdevnmaccessipmask.value_namespace = name_space;
        docsdevnmaccessipmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevNmAccessCommunity")
    {
        docsdevnmaccesscommunity = value;
        docsdevnmaccesscommunity.value_namespace = name_space;
        docsdevnmaccesscommunity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevNmAccessControl")
    {
        docsdevnmaccesscontrol = value;
        docsdevnmaccesscontrol.value_namespace = name_space;
        docsdevnmaccesscontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevNmAccessInterfaces")
    {
        docsdevnmaccessinterfaces = value;
        docsdevnmaccessinterfaces.value_namespace = name_space;
        docsdevnmaccessinterfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevNmAccessStatus")
    {
        docsdevnmaccessstatus = value;
        docsdevnmaccessstatus.value_namespace = name_space;
        docsdevnmaccessstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevNmAccessTrapVersion")
    {
        docsdevnmaccesstrapversion = value;
        docsdevnmaccesstrapversion.value_namespace = name_space;
        docsdevnmaccesstrapversion.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevNmAccessIndex")
    {
        docsdevnmaccessindex.yfilter = yfilter;
    }
    if(value_path == "docsDevNmAccessIp")
    {
        docsdevnmaccessip.yfilter = yfilter;
    }
    if(value_path == "docsDevNmAccessIpMask")
    {
        docsdevnmaccessipmask.yfilter = yfilter;
    }
    if(value_path == "docsDevNmAccessCommunity")
    {
        docsdevnmaccesscommunity.yfilter = yfilter;
    }
    if(value_path == "docsDevNmAccessControl")
    {
        docsdevnmaccesscontrol.yfilter = yfilter;
    }
    if(value_path == "docsDevNmAccessInterfaces")
    {
        docsdevnmaccessinterfaces.yfilter = yfilter;
    }
    if(value_path == "docsDevNmAccessStatus")
    {
        docsdevnmaccessstatus.yfilter = yfilter;
    }
    if(value_path == "docsDevNmAccessTrapVersion")
    {
        docsdevnmaccesstrapversion.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevNmAccessIndex" || name == "docsDevNmAccessIp" || name == "docsDevNmAccessIpMask" || name == "docsDevNmAccessCommunity" || name == "docsDevNmAccessControl" || name == "docsDevNmAccessInterfaces" || name == "docsDevNmAccessStatus" || name == "docsDevNmAccessTrapVersion")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlTable()
    :
    docsdevevcontrolentry(this, {"docsdevevpriority"})
{

    yang_name = "docsDevEvControlTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevEvControlTable::~DocsDevEvControlTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevEvControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevevcontrolentry.len(); index++)
    {
        if(docsdevevcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevEvControlTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevevcontrolentry.len(); index++)
    {
        if(docsdevevcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevEvControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevEvControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevEvControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevEvControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevEvControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevEvControlEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry>();
        c->parent = this;
        docsdevevcontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevEvControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevevcontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevEvControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevEvControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevEvControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevEvControlEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvControlEntry()
    :
    docsdevevpriority{YType::enumeration, "docsDevEvPriority"},
    docsdevevreporting{YType::str, "docsDevEvReporting"}
{

    yang_name = "docsDevEvControlEntry"; yang_parent_name = "docsDevEvControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::~DocsDevEvControlEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevevpriority.is_set
	|| docsdevevreporting.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevevpriority.yfilter)
	|| ydk::is_set(docsdevevreporting.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevEvControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevEvControlEntry";
    ADD_KEY_TOKEN(docsdevevpriority, "docsDevEvPriority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevevpriority.is_set || is_set(docsdevevpriority.yfilter)) leaf_name_data.push_back(docsdevevpriority.get_name_leafdata());
    if (docsdevevreporting.is_set || is_set(docsdevevreporting.yfilter)) leaf_name_data.push_back(docsdevevreporting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevEvPriority")
    {
        docsdevevpriority = value;
        docsdevevpriority.value_namespace = name_space;
        docsdevevpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvReporting")
    {
        docsdevevreporting = value;
        docsdevevreporting.value_namespace = name_space;
        docsdevevreporting.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevEvPriority")
    {
        docsdevevpriority.yfilter = yfilter;
    }
    if(value_path == "docsDevEvReporting")
    {
        docsdevevreporting.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevEvPriority" || name == "docsDevEvReporting")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventTable()
    :
    docsdevevententry(this, {"docsdevevindex"})
{

    yang_name = "docsDevEventTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevEventTable::~DocsDevEventTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevEventTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevevententry.len(); index++)
    {
        if(docsdevevententry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevEventTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevevententry.len(); index++)
    {
        if(docsdevevententry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevEventTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevEventTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevEventTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevEventTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevEventTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevEventEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry>();
        c->parent = this;
        docsdevevententry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevEventTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevevententry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevEventTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevEventTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevEventTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevEventEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEventEntry()
    :
    docsdevevindex{YType::int32, "docsDevEvIndex"},
    docsdevevfirsttime{YType::str, "docsDevEvFirstTime"},
    docsdevevlasttime{YType::str, "docsDevEvLastTime"},
    docsdevevcounts{YType::uint32, "docsDevEvCounts"},
    docsdevevlevel{YType::enumeration, "docsDevEvLevel"},
    docsdevevid{YType::uint32, "docsDevEvId"},
    docsdevevtext{YType::str, "docsDevEvText"}
{

    yang_name = "docsDevEventEntry"; yang_parent_name = "docsDevEventTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::~DocsDevEventEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevevindex.is_set
	|| docsdevevfirsttime.is_set
	|| docsdevevlasttime.is_set
	|| docsdevevcounts.is_set
	|| docsdevevlevel.is_set
	|| docsdevevid.is_set
	|| docsdevevtext.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevevindex.yfilter)
	|| ydk::is_set(docsdevevfirsttime.yfilter)
	|| ydk::is_set(docsdevevlasttime.yfilter)
	|| ydk::is_set(docsdevevcounts.yfilter)
	|| ydk::is_set(docsdevevlevel.yfilter)
	|| ydk::is_set(docsdevevid.yfilter)
	|| ydk::is_set(docsdevevtext.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevEventTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevEventEntry";
    ADD_KEY_TOKEN(docsdevevindex, "docsDevEvIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevevindex.is_set || is_set(docsdevevindex.yfilter)) leaf_name_data.push_back(docsdevevindex.get_name_leafdata());
    if (docsdevevfirsttime.is_set || is_set(docsdevevfirsttime.yfilter)) leaf_name_data.push_back(docsdevevfirsttime.get_name_leafdata());
    if (docsdevevlasttime.is_set || is_set(docsdevevlasttime.yfilter)) leaf_name_data.push_back(docsdevevlasttime.get_name_leafdata());
    if (docsdevevcounts.is_set || is_set(docsdevevcounts.yfilter)) leaf_name_data.push_back(docsdevevcounts.get_name_leafdata());
    if (docsdevevlevel.is_set || is_set(docsdevevlevel.yfilter)) leaf_name_data.push_back(docsdevevlevel.get_name_leafdata());
    if (docsdevevid.is_set || is_set(docsdevevid.yfilter)) leaf_name_data.push_back(docsdevevid.get_name_leafdata());
    if (docsdevevtext.is_set || is_set(docsdevevtext.yfilter)) leaf_name_data.push_back(docsdevevtext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevEvIndex")
    {
        docsdevevindex = value;
        docsdevevindex.value_namespace = name_space;
        docsdevevindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvFirstTime")
    {
        docsdevevfirsttime = value;
        docsdevevfirsttime.value_namespace = name_space;
        docsdevevfirsttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvLastTime")
    {
        docsdevevlasttime = value;
        docsdevevlasttime.value_namespace = name_space;
        docsdevevlasttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvCounts")
    {
        docsdevevcounts = value;
        docsdevevcounts.value_namespace = name_space;
        docsdevevcounts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvLevel")
    {
        docsdevevlevel = value;
        docsdevevlevel.value_namespace = name_space;
        docsdevevlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvId")
    {
        docsdevevid = value;
        docsdevevid.value_namespace = name_space;
        docsdevevid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevEvText")
    {
        docsdevevtext = value;
        docsdevevtext.value_namespace = name_space;
        docsdevevtext.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevEvIndex")
    {
        docsdevevindex.yfilter = yfilter;
    }
    if(value_path == "docsDevEvFirstTime")
    {
        docsdevevfirsttime.yfilter = yfilter;
    }
    if(value_path == "docsDevEvLastTime")
    {
        docsdevevlasttime.yfilter = yfilter;
    }
    if(value_path == "docsDevEvCounts")
    {
        docsdevevcounts.yfilter = yfilter;
    }
    if(value_path == "docsDevEvLevel")
    {
        docsdevevlevel.yfilter = yfilter;
    }
    if(value_path == "docsDevEvId")
    {
        docsdevevid.yfilter = yfilter;
    }
    if(value_path == "docsDevEvText")
    {
        docsdevevtext.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevEvIndex" || name == "docsDevEvFirstTime" || name == "docsDevEvLastTime" || name == "docsDevEvCounts" || name == "docsDevEvLevel" || name == "docsDevEvId" || name == "docsDevEvText")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCTable()
    :
    docsdevfilterllcentry(this, {"docsdevfilterllcindex"})
{

    yang_name = "docsDevFilterLLCTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::~DocsDevFilterLLCTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevfilterllcentry.len(); index++)
    {
        if(docsdevfilterllcentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevfilterllcentry.len(); index++)
    {
        if(docsdevfilterllcentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterLLCTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevFilterLLCEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry>();
        c->parent = this;
        docsdevfilterllcentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevfilterllcentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterLLCEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::DocsDevFilterLLCEntry()
    :
    docsdevfilterllcindex{YType::int32, "docsDevFilterLLCIndex"},
    docsdevfilterllcstatus{YType::enumeration, "docsDevFilterLLCStatus"},
    docsdevfilterllcifindex{YType::int32, "docsDevFilterLLCIfIndex"},
    docsdevfilterllcprotocoltype{YType::enumeration, "docsDevFilterLLCProtocolType"},
    docsdevfilterllcprotocol{YType::int32, "docsDevFilterLLCProtocol"},
    docsdevfilterllcmatches{YType::uint32, "docsDevFilterLLCMatches"}
{

    yang_name = "docsDevFilterLLCEntry"; yang_parent_name = "docsDevFilterLLCTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::~DocsDevFilterLLCEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevfilterllcindex.is_set
	|| docsdevfilterllcstatus.is_set
	|| docsdevfilterllcifindex.is_set
	|| docsdevfilterllcprotocoltype.is_set
	|| docsdevfilterllcprotocol.is_set
	|| docsdevfilterllcmatches.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevfilterllcindex.yfilter)
	|| ydk::is_set(docsdevfilterllcstatus.yfilter)
	|| ydk::is_set(docsdevfilterllcifindex.yfilter)
	|| ydk::is_set(docsdevfilterllcprotocoltype.yfilter)
	|| ydk::is_set(docsdevfilterllcprotocol.yfilter)
	|| ydk::is_set(docsdevfilterllcmatches.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevFilterLLCTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterLLCEntry";
    ADD_KEY_TOKEN(docsdevfilterllcindex, "docsDevFilterLLCIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevfilterllcindex.is_set || is_set(docsdevfilterllcindex.yfilter)) leaf_name_data.push_back(docsdevfilterllcindex.get_name_leafdata());
    if (docsdevfilterllcstatus.is_set || is_set(docsdevfilterllcstatus.yfilter)) leaf_name_data.push_back(docsdevfilterllcstatus.get_name_leafdata());
    if (docsdevfilterllcifindex.is_set || is_set(docsdevfilterllcifindex.yfilter)) leaf_name_data.push_back(docsdevfilterllcifindex.get_name_leafdata());
    if (docsdevfilterllcprotocoltype.is_set || is_set(docsdevfilterllcprotocoltype.yfilter)) leaf_name_data.push_back(docsdevfilterllcprotocoltype.get_name_leafdata());
    if (docsdevfilterllcprotocol.is_set || is_set(docsdevfilterllcprotocol.yfilter)) leaf_name_data.push_back(docsdevfilterllcprotocol.get_name_leafdata());
    if (docsdevfilterllcmatches.is_set || is_set(docsdevfilterllcmatches.yfilter)) leaf_name_data.push_back(docsdevfilterllcmatches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevFilterLLCIndex")
    {
        docsdevfilterllcindex = value;
        docsdevfilterllcindex.value_namespace = name_space;
        docsdevfilterllcindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterLLCStatus")
    {
        docsdevfilterllcstatus = value;
        docsdevfilterllcstatus.value_namespace = name_space;
        docsdevfilterllcstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterLLCIfIndex")
    {
        docsdevfilterllcifindex = value;
        docsdevfilterllcifindex.value_namespace = name_space;
        docsdevfilterllcifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterLLCProtocolType")
    {
        docsdevfilterllcprotocoltype = value;
        docsdevfilterllcprotocoltype.value_namespace = name_space;
        docsdevfilterllcprotocoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterLLCProtocol")
    {
        docsdevfilterllcprotocol = value;
        docsdevfilterllcprotocol.value_namespace = name_space;
        docsdevfilterllcprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterLLCMatches")
    {
        docsdevfilterllcmatches = value;
        docsdevfilterllcmatches.value_namespace = name_space;
        docsdevfilterllcmatches.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevFilterLLCIndex")
    {
        docsdevfilterllcindex.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterLLCStatus")
    {
        docsdevfilterllcstatus.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterLLCIfIndex")
    {
        docsdevfilterllcifindex.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterLLCProtocolType")
    {
        docsdevfilterllcprotocoltype.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterLLCProtocol")
    {
        docsdevfilterllcprotocol.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterLLCMatches")
    {
        docsdevfilterllcmatches.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterLLCIndex" || name == "docsDevFilterLLCStatus" || name == "docsDevFilterLLCIfIndex" || name == "docsDevFilterLLCProtocolType" || name == "docsDevFilterLLCProtocol" || name == "docsDevFilterLLCMatches")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpTable()
    :
    docsdevfilteripentry(this, {"docsdevfilteripindex"})
{

    yang_name = "docsDevFilterIpTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::~DocsDevFilterIpTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevfilteripentry.len(); index++)
    {
        if(docsdevfilteripentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevfilteripentry.len(); index++)
    {
        if(docsdevfilteripentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterIpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevFilterIpEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry>();
        c->parent = this;
        docsdevfilteripentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevfilteripentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterIpEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpEntry()
    :
    docsdevfilteripindex{YType::int32, "docsDevFilterIpIndex"},
    docsdevfilteripstatus{YType::enumeration, "docsDevFilterIpStatus"},
    docsdevfilteripcontrol{YType::enumeration, "docsDevFilterIpControl"},
    docsdevfilteripifindex{YType::int32, "docsDevFilterIpIfIndex"},
    docsdevfilteripdirection{YType::enumeration, "docsDevFilterIpDirection"},
    docsdevfilteripbroadcast{YType::boolean, "docsDevFilterIpBroadcast"},
    docsdevfilteripsaddr{YType::str, "docsDevFilterIpSaddr"},
    docsdevfilteripsmask{YType::str, "docsDevFilterIpSmask"},
    docsdevfilteripdaddr{YType::str, "docsDevFilterIpDaddr"},
    docsdevfilteripdmask{YType::str, "docsDevFilterIpDmask"},
    docsdevfilteripprotocol{YType::int32, "docsDevFilterIpProtocol"},
    docsdevfilteripsourceportlow{YType::int32, "docsDevFilterIpSourcePortLow"},
    docsdevfilteripsourceporthigh{YType::int32, "docsDevFilterIpSourcePortHigh"},
    docsdevfilteripdestportlow{YType::int32, "docsDevFilterIpDestPortLow"},
    docsdevfilteripdestporthigh{YType::int32, "docsDevFilterIpDestPortHigh"},
    docsdevfilteripmatches{YType::uint32, "docsDevFilterIpMatches"},
    docsdevfilteriptos{YType::str, "docsDevFilterIpTos"},
    docsdevfilteriptosmask{YType::str, "docsDevFilterIpTosMask"},
    docsdevfilteripcontinue{YType::boolean, "docsDevFilterIpContinue"},
    docsdevfilterippolicyid{YType::int32, "docsDevFilterIpPolicyId"}
{

    yang_name = "docsDevFilterIpEntry"; yang_parent_name = "docsDevFilterIpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::~DocsDevFilterIpEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevfilteripindex.is_set
	|| docsdevfilteripstatus.is_set
	|| docsdevfilteripcontrol.is_set
	|| docsdevfilteripifindex.is_set
	|| docsdevfilteripdirection.is_set
	|| docsdevfilteripbroadcast.is_set
	|| docsdevfilteripsaddr.is_set
	|| docsdevfilteripsmask.is_set
	|| docsdevfilteripdaddr.is_set
	|| docsdevfilteripdmask.is_set
	|| docsdevfilteripprotocol.is_set
	|| docsdevfilteripsourceportlow.is_set
	|| docsdevfilteripsourceporthigh.is_set
	|| docsdevfilteripdestportlow.is_set
	|| docsdevfilteripdestporthigh.is_set
	|| docsdevfilteripmatches.is_set
	|| docsdevfilteriptos.is_set
	|| docsdevfilteriptosmask.is_set
	|| docsdevfilteripcontinue.is_set
	|| docsdevfilterippolicyid.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevfilteripindex.yfilter)
	|| ydk::is_set(docsdevfilteripstatus.yfilter)
	|| ydk::is_set(docsdevfilteripcontrol.yfilter)
	|| ydk::is_set(docsdevfilteripifindex.yfilter)
	|| ydk::is_set(docsdevfilteripdirection.yfilter)
	|| ydk::is_set(docsdevfilteripbroadcast.yfilter)
	|| ydk::is_set(docsdevfilteripsaddr.yfilter)
	|| ydk::is_set(docsdevfilteripsmask.yfilter)
	|| ydk::is_set(docsdevfilteripdaddr.yfilter)
	|| ydk::is_set(docsdevfilteripdmask.yfilter)
	|| ydk::is_set(docsdevfilteripprotocol.yfilter)
	|| ydk::is_set(docsdevfilteripsourceportlow.yfilter)
	|| ydk::is_set(docsdevfilteripsourceporthigh.yfilter)
	|| ydk::is_set(docsdevfilteripdestportlow.yfilter)
	|| ydk::is_set(docsdevfilteripdestporthigh.yfilter)
	|| ydk::is_set(docsdevfilteripmatches.yfilter)
	|| ydk::is_set(docsdevfilteriptos.yfilter)
	|| ydk::is_set(docsdevfilteriptosmask.yfilter)
	|| ydk::is_set(docsdevfilteripcontinue.yfilter)
	|| ydk::is_set(docsdevfilterippolicyid.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevFilterIpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterIpEntry";
    ADD_KEY_TOKEN(docsdevfilteripindex, "docsDevFilterIpIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevfilteripindex.is_set || is_set(docsdevfilteripindex.yfilter)) leaf_name_data.push_back(docsdevfilteripindex.get_name_leafdata());
    if (docsdevfilteripstatus.is_set || is_set(docsdevfilteripstatus.yfilter)) leaf_name_data.push_back(docsdevfilteripstatus.get_name_leafdata());
    if (docsdevfilteripcontrol.is_set || is_set(docsdevfilteripcontrol.yfilter)) leaf_name_data.push_back(docsdevfilteripcontrol.get_name_leafdata());
    if (docsdevfilteripifindex.is_set || is_set(docsdevfilteripifindex.yfilter)) leaf_name_data.push_back(docsdevfilteripifindex.get_name_leafdata());
    if (docsdevfilteripdirection.is_set || is_set(docsdevfilteripdirection.yfilter)) leaf_name_data.push_back(docsdevfilteripdirection.get_name_leafdata());
    if (docsdevfilteripbroadcast.is_set || is_set(docsdevfilteripbroadcast.yfilter)) leaf_name_data.push_back(docsdevfilteripbroadcast.get_name_leafdata());
    if (docsdevfilteripsaddr.is_set || is_set(docsdevfilteripsaddr.yfilter)) leaf_name_data.push_back(docsdevfilteripsaddr.get_name_leafdata());
    if (docsdevfilteripsmask.is_set || is_set(docsdevfilteripsmask.yfilter)) leaf_name_data.push_back(docsdevfilteripsmask.get_name_leafdata());
    if (docsdevfilteripdaddr.is_set || is_set(docsdevfilteripdaddr.yfilter)) leaf_name_data.push_back(docsdevfilteripdaddr.get_name_leafdata());
    if (docsdevfilteripdmask.is_set || is_set(docsdevfilteripdmask.yfilter)) leaf_name_data.push_back(docsdevfilteripdmask.get_name_leafdata());
    if (docsdevfilteripprotocol.is_set || is_set(docsdevfilteripprotocol.yfilter)) leaf_name_data.push_back(docsdevfilteripprotocol.get_name_leafdata());
    if (docsdevfilteripsourceportlow.is_set || is_set(docsdevfilteripsourceportlow.yfilter)) leaf_name_data.push_back(docsdevfilteripsourceportlow.get_name_leafdata());
    if (docsdevfilteripsourceporthigh.is_set || is_set(docsdevfilteripsourceporthigh.yfilter)) leaf_name_data.push_back(docsdevfilteripsourceporthigh.get_name_leafdata());
    if (docsdevfilteripdestportlow.is_set || is_set(docsdevfilteripdestportlow.yfilter)) leaf_name_data.push_back(docsdevfilteripdestportlow.get_name_leafdata());
    if (docsdevfilteripdestporthigh.is_set || is_set(docsdevfilteripdestporthigh.yfilter)) leaf_name_data.push_back(docsdevfilteripdestporthigh.get_name_leafdata());
    if (docsdevfilteripmatches.is_set || is_set(docsdevfilteripmatches.yfilter)) leaf_name_data.push_back(docsdevfilteripmatches.get_name_leafdata());
    if (docsdevfilteriptos.is_set || is_set(docsdevfilteriptos.yfilter)) leaf_name_data.push_back(docsdevfilteriptos.get_name_leafdata());
    if (docsdevfilteriptosmask.is_set || is_set(docsdevfilteriptosmask.yfilter)) leaf_name_data.push_back(docsdevfilteriptosmask.get_name_leafdata());
    if (docsdevfilteripcontinue.is_set || is_set(docsdevfilteripcontinue.yfilter)) leaf_name_data.push_back(docsdevfilteripcontinue.get_name_leafdata());
    if (docsdevfilterippolicyid.is_set || is_set(docsdevfilterippolicyid.yfilter)) leaf_name_data.push_back(docsdevfilterippolicyid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevFilterIpIndex")
    {
        docsdevfilteripindex = value;
        docsdevfilteripindex.value_namespace = name_space;
        docsdevfilteripindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpStatus")
    {
        docsdevfilteripstatus = value;
        docsdevfilteripstatus.value_namespace = name_space;
        docsdevfilteripstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpControl")
    {
        docsdevfilteripcontrol = value;
        docsdevfilteripcontrol.value_namespace = name_space;
        docsdevfilteripcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpIfIndex")
    {
        docsdevfilteripifindex = value;
        docsdevfilteripifindex.value_namespace = name_space;
        docsdevfilteripifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpDirection")
    {
        docsdevfilteripdirection = value;
        docsdevfilteripdirection.value_namespace = name_space;
        docsdevfilteripdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpBroadcast")
    {
        docsdevfilteripbroadcast = value;
        docsdevfilteripbroadcast.value_namespace = name_space;
        docsdevfilteripbroadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpSaddr")
    {
        docsdevfilteripsaddr = value;
        docsdevfilteripsaddr.value_namespace = name_space;
        docsdevfilteripsaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpSmask")
    {
        docsdevfilteripsmask = value;
        docsdevfilteripsmask.value_namespace = name_space;
        docsdevfilteripsmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpDaddr")
    {
        docsdevfilteripdaddr = value;
        docsdevfilteripdaddr.value_namespace = name_space;
        docsdevfilteripdaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpDmask")
    {
        docsdevfilteripdmask = value;
        docsdevfilteripdmask.value_namespace = name_space;
        docsdevfilteripdmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpProtocol")
    {
        docsdevfilteripprotocol = value;
        docsdevfilteripprotocol.value_namespace = name_space;
        docsdevfilteripprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpSourcePortLow")
    {
        docsdevfilteripsourceportlow = value;
        docsdevfilteripsourceportlow.value_namespace = name_space;
        docsdevfilteripsourceportlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpSourcePortHigh")
    {
        docsdevfilteripsourceporthigh = value;
        docsdevfilteripsourceporthigh.value_namespace = name_space;
        docsdevfilteripsourceporthigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpDestPortLow")
    {
        docsdevfilteripdestportlow = value;
        docsdevfilteripdestportlow.value_namespace = name_space;
        docsdevfilteripdestportlow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpDestPortHigh")
    {
        docsdevfilteripdestporthigh = value;
        docsdevfilteripdestporthigh.value_namespace = name_space;
        docsdevfilteripdestporthigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpMatches")
    {
        docsdevfilteripmatches = value;
        docsdevfilteripmatches.value_namespace = name_space;
        docsdevfilteripmatches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpTos")
    {
        docsdevfilteriptos = value;
        docsdevfilteriptos.value_namespace = name_space;
        docsdevfilteriptos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpTosMask")
    {
        docsdevfilteriptosmask = value;
        docsdevfilteriptosmask.value_namespace = name_space;
        docsdevfilteriptosmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpContinue")
    {
        docsdevfilteripcontinue = value;
        docsdevfilteripcontinue.value_namespace = name_space;
        docsdevfilteripcontinue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterIpPolicyId")
    {
        docsdevfilterippolicyid = value;
        docsdevfilterippolicyid.value_namespace = name_space;
        docsdevfilterippolicyid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevFilterIpIndex")
    {
        docsdevfilteripindex.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpStatus")
    {
        docsdevfilteripstatus.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpControl")
    {
        docsdevfilteripcontrol.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpIfIndex")
    {
        docsdevfilteripifindex.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpDirection")
    {
        docsdevfilteripdirection.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpBroadcast")
    {
        docsdevfilteripbroadcast.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpSaddr")
    {
        docsdevfilteripsaddr.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpSmask")
    {
        docsdevfilteripsmask.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpDaddr")
    {
        docsdevfilteripdaddr.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpDmask")
    {
        docsdevfilteripdmask.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpProtocol")
    {
        docsdevfilteripprotocol.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpSourcePortLow")
    {
        docsdevfilteripsourceportlow.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpSourcePortHigh")
    {
        docsdevfilteripsourceporthigh.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpDestPortLow")
    {
        docsdevfilteripdestportlow.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpDestPortHigh")
    {
        docsdevfilteripdestporthigh.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpMatches")
    {
        docsdevfilteripmatches.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpTos")
    {
        docsdevfilteriptos.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpTosMask")
    {
        docsdevfilteriptosmask.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpContinue")
    {
        docsdevfilteripcontinue.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterIpPolicyId")
    {
        docsdevfilterippolicyid.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterIpIndex" || name == "docsDevFilterIpStatus" || name == "docsDevFilterIpControl" || name == "docsDevFilterIpIfIndex" || name == "docsDevFilterIpDirection" || name == "docsDevFilterIpBroadcast" || name == "docsDevFilterIpSaddr" || name == "docsDevFilterIpSmask" || name == "docsDevFilterIpDaddr" || name == "docsDevFilterIpDmask" || name == "docsDevFilterIpProtocol" || name == "docsDevFilterIpSourcePortLow" || name == "docsDevFilterIpSourcePortHigh" || name == "docsDevFilterIpDestPortLow" || name == "docsDevFilterIpDestPortHigh" || name == "docsDevFilterIpMatches" || name == "docsDevFilterIpTos" || name == "docsDevFilterIpTosMask" || name == "docsDevFilterIpContinue" || name == "docsDevFilterIpPolicyId")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyTable()
    :
    docsdevfilterpolicyentry(this, {"docsdevfilterpolicyindex"})
{

    yang_name = "docsDevFilterPolicyTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::~DocsDevFilterPolicyTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevfilterpolicyentry.len(); index++)
    {
        if(docsdevfilterpolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevfilterpolicyentry.len(); index++)
    {
        if(docsdevfilterpolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterPolicyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevFilterPolicyEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry>();
        c->parent = this;
        docsdevfilterpolicyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevfilterpolicyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterPolicyEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::DocsDevFilterPolicyEntry()
    :
    docsdevfilterpolicyindex{YType::int32, "docsDevFilterPolicyIndex"},
    docsdevfilterpolicyid{YType::int32, "docsDevFilterPolicyId"},
    docsdevfilterpolicystatus{YType::enumeration, "docsDevFilterPolicyStatus"},
    docsdevfilterpolicyptr{YType::str, "docsDevFilterPolicyPtr"}
{

    yang_name = "docsDevFilterPolicyEntry"; yang_parent_name = "docsDevFilterPolicyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::~DocsDevFilterPolicyEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevfilterpolicyindex.is_set
	|| docsdevfilterpolicyid.is_set
	|| docsdevfilterpolicystatus.is_set
	|| docsdevfilterpolicyptr.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevfilterpolicyindex.yfilter)
	|| ydk::is_set(docsdevfilterpolicyid.yfilter)
	|| ydk::is_set(docsdevfilterpolicystatus.yfilter)
	|| ydk::is_set(docsdevfilterpolicyptr.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevFilterPolicyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterPolicyEntry";
    ADD_KEY_TOKEN(docsdevfilterpolicyindex, "docsDevFilterPolicyIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevfilterpolicyindex.is_set || is_set(docsdevfilterpolicyindex.yfilter)) leaf_name_data.push_back(docsdevfilterpolicyindex.get_name_leafdata());
    if (docsdevfilterpolicyid.is_set || is_set(docsdevfilterpolicyid.yfilter)) leaf_name_data.push_back(docsdevfilterpolicyid.get_name_leafdata());
    if (docsdevfilterpolicystatus.is_set || is_set(docsdevfilterpolicystatus.yfilter)) leaf_name_data.push_back(docsdevfilterpolicystatus.get_name_leafdata());
    if (docsdevfilterpolicyptr.is_set || is_set(docsdevfilterpolicyptr.yfilter)) leaf_name_data.push_back(docsdevfilterpolicyptr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevFilterPolicyIndex")
    {
        docsdevfilterpolicyindex = value;
        docsdevfilterpolicyindex.value_namespace = name_space;
        docsdevfilterpolicyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterPolicyId")
    {
        docsdevfilterpolicyid = value;
        docsdevfilterpolicyid.value_namespace = name_space;
        docsdevfilterpolicyid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterPolicyStatus")
    {
        docsdevfilterpolicystatus = value;
        docsdevfilterpolicystatus.value_namespace = name_space;
        docsdevfilterpolicystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterPolicyPtr")
    {
        docsdevfilterpolicyptr = value;
        docsdevfilterpolicyptr.value_namespace = name_space;
        docsdevfilterpolicyptr.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevFilterPolicyIndex")
    {
        docsdevfilterpolicyindex.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterPolicyId")
    {
        docsdevfilterpolicyid.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterPolicyStatus")
    {
        docsdevfilterpolicystatus.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterPolicyPtr")
    {
        docsdevfilterpolicyptr.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterPolicyTable::DocsDevFilterPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterPolicyIndex" || name == "docsDevFilterPolicyId" || name == "docsDevFilterPolicyStatus" || name == "docsDevFilterPolicyPtr")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosTable()
    :
    docsdevfiltertosentry(this, {"docsdevfiltertosindex"})
{

    yang_name = "docsDevFilterTosTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::~DocsDevFilterTosTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevfiltertosentry.len(); index++)
    {
        if(docsdevfiltertosentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevfiltertosentry.len(); index++)
    {
        if(docsdevfiltertosentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterTosTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevFilterTosEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry>();
        c->parent = this;
        docsdevfiltertosentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevfiltertosentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterTosEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::DocsDevFilterTosEntry()
    :
    docsdevfiltertosindex{YType::int32, "docsDevFilterTosIndex"},
    docsdevfiltertosstatus{YType::enumeration, "docsDevFilterTosStatus"},
    docsdevfiltertosandmask{YType::str, "docsDevFilterTosAndMask"},
    docsdevfiltertosormask{YType::str, "docsDevFilterTosOrMask"}
{

    yang_name = "docsDevFilterTosEntry"; yang_parent_name = "docsDevFilterTosTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::~DocsDevFilterTosEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevfiltertosindex.is_set
	|| docsdevfiltertosstatus.is_set
	|| docsdevfiltertosandmask.is_set
	|| docsdevfiltertosormask.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevfiltertosindex.yfilter)
	|| ydk::is_set(docsdevfiltertosstatus.yfilter)
	|| ydk::is_set(docsdevfiltertosandmask.yfilter)
	|| ydk::is_set(docsdevfiltertosormask.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevFilterTosTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevFilterTosEntry";
    ADD_KEY_TOKEN(docsdevfiltertosindex, "docsDevFilterTosIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevfiltertosindex.is_set || is_set(docsdevfiltertosindex.yfilter)) leaf_name_data.push_back(docsdevfiltertosindex.get_name_leafdata());
    if (docsdevfiltertosstatus.is_set || is_set(docsdevfiltertosstatus.yfilter)) leaf_name_data.push_back(docsdevfiltertosstatus.get_name_leafdata());
    if (docsdevfiltertosandmask.is_set || is_set(docsdevfiltertosandmask.yfilter)) leaf_name_data.push_back(docsdevfiltertosandmask.get_name_leafdata());
    if (docsdevfiltertosormask.is_set || is_set(docsdevfiltertosormask.yfilter)) leaf_name_data.push_back(docsdevfiltertosormask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevFilterTosIndex")
    {
        docsdevfiltertosindex = value;
        docsdevfiltertosindex.value_namespace = name_space;
        docsdevfiltertosindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterTosStatus")
    {
        docsdevfiltertosstatus = value;
        docsdevfiltertosstatus.value_namespace = name_space;
        docsdevfiltertosstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterTosAndMask")
    {
        docsdevfiltertosandmask = value;
        docsdevfiltertosandmask.value_namespace = name_space;
        docsdevfiltertosandmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevFilterTosOrMask")
    {
        docsdevfiltertosormask = value;
        docsdevfiltertosormask.value_namespace = name_space;
        docsdevfiltertosormask.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevFilterTosIndex")
    {
        docsdevfiltertosindex.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterTosStatus")
    {
        docsdevfiltertosstatus.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterTosAndMask")
    {
        docsdevfiltertosandmask.yfilter = yfilter;
    }
    if(value_path == "docsDevFilterTosOrMask")
    {
        docsdevfiltertosormask.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevFilterTosTable::DocsDevFilterTosEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevFilterTosIndex" || name == "docsDevFilterTosStatus" || name == "docsDevFilterTosAndMask" || name == "docsDevFilterTosOrMask")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeTable()
    :
    docsdevcpeentry(this, {"docsdevcpeip"})
{

    yang_name = "docsDevCpeTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevCpeTable::~DocsDevCpeTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevcpeentry.len(); index++)
    {
        if(docsdevcpeentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevcpeentry.len(); index++)
    {
        if(docsdevcpeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevCpeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevCpeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevCpeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevCpeEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry>();
        c->parent = this;
        docsdevcpeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevCpeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevcpeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevCpeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevCpeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevCpeEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::DocsDevCpeEntry()
    :
    docsdevcpeip{YType::str, "docsDevCpeIp"},
    docsdevcpesource{YType::enumeration, "docsDevCpeSource"},
    docsdevcpestatus{YType::enumeration, "docsDevCpeStatus"}
{

    yang_name = "docsDevCpeEntry"; yang_parent_name = "docsDevCpeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::~DocsDevCpeEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevcpeip.is_set
	|| docsdevcpesource.is_set
	|| docsdevcpestatus.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevcpeip.yfilter)
	|| ydk::is_set(docsdevcpesource.yfilter)
	|| ydk::is_set(docsdevcpestatus.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevCpeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevCpeEntry";
    ADD_KEY_TOKEN(docsdevcpeip, "docsDevCpeIp");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevcpeip.is_set || is_set(docsdevcpeip.yfilter)) leaf_name_data.push_back(docsdevcpeip.get_name_leafdata());
    if (docsdevcpesource.is_set || is_set(docsdevcpesource.yfilter)) leaf_name_data.push_back(docsdevcpesource.get_name_leafdata());
    if (docsdevcpestatus.is_set || is_set(docsdevcpestatus.yfilter)) leaf_name_data.push_back(docsdevcpestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevCpeIp")
    {
        docsdevcpeip = value;
        docsdevcpeip.value_namespace = name_space;
        docsdevcpeip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevCpeSource")
    {
        docsdevcpesource = value;
        docsdevcpesource.value_namespace = name_space;
        docsdevcpesource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevCpeStatus")
    {
        docsdevcpestatus = value;
        docsdevcpestatus.value_namespace = name_space;
        docsdevcpestatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevCpeIp")
    {
        docsdevcpeip.yfilter = yfilter;
    }
    if(value_path == "docsDevCpeSource")
    {
        docsdevcpesource.yfilter = yfilter;
    }
    if(value_path == "docsDevCpeStatus")
    {
        docsdevcpestatus.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevCpeIp" || name == "docsDevCpeSource" || name == "docsDevCpeStatus")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetTable()
    :
    docsdevcpeinetentry(this, {"docsdevcpeinettype", "docsdevcpeinetaddr"})
{

    yang_name = "docsDevCpeInetTable"; yang_parent_name = "DOCS-CABLE-DEVICE-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::~DocsDevCpeInetTable()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsdevcpeinetentry.len(); index++)
    {
        if(docsdevcpeinetentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::has_operation() const
{
    for (std::size_t index=0; index<docsdevcpeinetentry.len(); index++)
    {
        if(docsdevcpeinetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevCpeInetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsDevCpeInetEntry")
    {
        auto c = std::make_shared<DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry>();
        c->parent = this;
        docsdevcpeinetentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsdevcpeinetentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevCpeInetEntry")
        return true;
    return false;
}

DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::DocsDevCpeInetEntry()
    :
    docsdevcpeinettype{YType::enumeration, "docsDevCpeInetType"},
    docsdevcpeinetaddr{YType::str, "docsDevCpeInetAddr"},
    docsdevcpeinetsource{YType::enumeration, "docsDevCpeInetSource"},
    docsdevcpeinetrowstatus{YType::enumeration, "docsDevCpeInetRowStatus"}
{

    yang_name = "docsDevCpeInetEntry"; yang_parent_name = "docsDevCpeInetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::~DocsDevCpeInetEntry()
{
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsdevcpeinettype.is_set
	|| docsdevcpeinetaddr.is_set
	|| docsdevcpeinetsource.is_set
	|| docsdevcpeinetrowstatus.is_set;
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsdevcpeinettype.yfilter)
	|| ydk::is_set(docsdevcpeinetaddr.yfilter)
	|| ydk::is_set(docsdevcpeinetsource.yfilter)
	|| ydk::is_set(docsdevcpeinetrowstatus.yfilter);
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-CABLE-DEVICE-MIB:DOCS-CABLE-DEVICE-MIB/docsDevCpeInetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsDevCpeInetEntry";
    ADD_KEY_TOKEN(docsdevcpeinettype, "docsDevCpeInetType");
    ADD_KEY_TOKEN(docsdevcpeinetaddr, "docsDevCpeInetAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsdevcpeinettype.is_set || is_set(docsdevcpeinettype.yfilter)) leaf_name_data.push_back(docsdevcpeinettype.get_name_leafdata());
    if (docsdevcpeinetaddr.is_set || is_set(docsdevcpeinetaddr.yfilter)) leaf_name_data.push_back(docsdevcpeinetaddr.get_name_leafdata());
    if (docsdevcpeinetsource.is_set || is_set(docsdevcpeinetsource.yfilter)) leaf_name_data.push_back(docsdevcpeinetsource.get_name_leafdata());
    if (docsdevcpeinetrowstatus.is_set || is_set(docsdevcpeinetrowstatus.yfilter)) leaf_name_data.push_back(docsdevcpeinetrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsDevCpeInetType")
    {
        docsdevcpeinettype = value;
        docsdevcpeinettype.value_namespace = name_space;
        docsdevcpeinettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevCpeInetAddr")
    {
        docsdevcpeinetaddr = value;
        docsdevcpeinetaddr.value_namespace = name_space;
        docsdevcpeinetaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevCpeInetSource")
    {
        docsdevcpeinetsource = value;
        docsdevcpeinetsource.value_namespace = name_space;
        docsdevcpeinetsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsDevCpeInetRowStatus")
    {
        docsdevcpeinetrowstatus = value;
        docsdevcpeinetrowstatus.value_namespace = name_space;
        docsdevcpeinetrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsDevCpeInetType")
    {
        docsdevcpeinettype.yfilter = yfilter;
    }
    if(value_path == "docsDevCpeInetAddr")
    {
        docsdevcpeinetaddr.yfilter = yfilter;
    }
    if(value_path == "docsDevCpeInetSource")
    {
        docsdevcpeinetsource.yfilter = yfilter;
    }
    if(value_path == "docsDevCpeInetRowStatus")
    {
        docsdevcpeinetrowstatus.yfilter = yfilter;
    }
}

bool DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsDevCpeInetType" || name == "docsDevCpeInetAddr" || name == "docsDevCpeInetSource" || name == "docsDevCpeInetRowStatus")
        return true;
    return false;
}

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevRole::cm {1, "cm"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevRole::cmtsActive {2, "cmtsActive"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevRole::cmtsBackup {3, "cmtsBackup"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevSTPControl::stEnabled {1, "stEnabled"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevSTPControl::noStFilterBpdu {2, "noStFilterBpdu"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevSTPControl::noStPassBpdu {3, "noStPassBpdu"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevIgmpModeControl::passive {1, "passive"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevBase::DocsDevIgmpModeControl::active {2, "active"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwAdminStatus::upgradeFromMgt {1, "upgradeFromMgt"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwAdminStatus::allowProvisioningUpgrade {2, "allowProvisioningUpgrade"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwAdminStatus::ignoreProvisioningUpgrade {3, "ignoreProvisioningUpgrade"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwOperStatus::inProgress {1, "inProgress"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwOperStatus::completeFromProvisioning {2, "completeFromProvisioning"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwOperStatus::completeFromMgt {3, "completeFromMgt"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwOperStatus::failed {4, "failed"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwOperStatus::other {5, "other"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwServerTransportProtocol::tftp {1, "tftp"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevSoftware::DocsDevSwServerTransportProtocol::http {2, "http"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::operational {1, "operational"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::disabled {2, "disabled"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::waitingForDhcpOffer {3, "waitingForDhcpOffer"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::waitingForDhcpResponse {4, "waitingForDhcpResponse"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::waitingForTimeServer {5, "waitingForTimeServer"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::waitingForTftp {6, "waitingForTftp"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::refusedByCmts {7, "refusedByCmts"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::forwardingDenied {8, "forwardingDenied"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::other {9, "other"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevServer::DocsDevServerBootState::unknown {10, "unknown"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvControl::resetLog {1, "resetLog"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvControl::useDefaultReporting {2, "useDefaultReporting"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvThrottleAdminStatus::unconstrained {1, "unconstrained"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvThrottleAdminStatus::maintainBelowThreshold {2, "maintainBelowThreshold"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvThrottleAdminStatus::stopAtThreshold {3, "stopAtThreshold"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvent::DocsDevEvThrottleAdminStatus::inhibited {4, "inhibited"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilter::DocsDevFilterLLCUnmatchedAction::discard {1, "discard"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilter::DocsDevFilterLLCUnmatchedAction::accept {2, "accept"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilter::DocsDevFilterIpDefault::discard {1, "discard"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilter::DocsDevFilterIpDefault::accept {2, "accept"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevCpe::DocsDevCpeEnroll::none {1, "none"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevCpe::DocsDevCpeEnroll::any {2, "any"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessControl::none {1, "none"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessControl::read {2, "read"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessControl::readWrite {3, "readWrite"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessControl::roWithTraps {4, "roWithTraps"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessControl::rwWithTraps {5, "rwWithTraps"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessControl::trapsOnly {6, "trapsOnly"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessTrapVersion::disableSNMPv2trap {1, "disableSNMPv2trap"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevNmAccessTable::DocsDevNmAccessEntry::DocsDevNmAccessTrapVersion::enableSNMPv2trap {2, "enableSNMPv2trap"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::emergency {1, "emergency"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::alert {2, "alert"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::critical {3, "critical"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::error {4, "error"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::warning {5, "warning"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::notice {6, "notice"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::information {7, "information"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEvControlTable::DocsDevEvControlEntry::DocsDevEvPriority::debug {8, "debug"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::emergency {1, "emergency"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::alert {2, "alert"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::critical {3, "critical"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::error {4, "error"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::warning {5, "warning"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::notice {6, "notice"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::information {7, "information"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevEventTable::DocsDevEventEntry::DocsDevEvLevel::debug {8, "debug"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::DocsDevFilterLLCProtocolType::ethertype {1, "ethertype"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterLLCTable::DocsDevFilterLLCEntry::DocsDevFilterLLCProtocolType::dsap {2, "dsap"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpControl::discard {1, "discard"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpControl::accept {2, "accept"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpControl::policy {3, "policy"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpDirection::inbound {1, "inbound"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpDirection::outbound {2, "outbound"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevFilterIpTable::DocsDevFilterIpEntry::DocsDevFilterIpDirection::both {3, "both"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::DocsDevCpeSource::other {1, "other"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::DocsDevCpeSource::manual {2, "manual"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevCpeTable::DocsDevCpeEntry::DocsDevCpeSource::learned {3, "learned"};

const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::DocsDevCpeInetSource::manual {2, "manual"};
const Enum::YLeaf DOCSCABLEDEVICEMIB::DocsDevCpeInetTable::DocsDevCpeInetEntry::DocsDevCpeInetSource::learned {3, "learned"};


}
}

