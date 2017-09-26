
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "RMON2_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace RMON2_MIB {

RMON2MIB::RMON2MIB()
    :
    addressmap(std::make_shared<RMON2MIB::Addressmap>())
	,addressmapcontroltable(std::make_shared<RMON2MIB::Addressmapcontroltable>())
	,addressmaptable(std::make_shared<RMON2MIB::Addressmaptable>())
	,alhosttable(std::make_shared<RMON2MIB::Alhosttable>())
	,almatrixdstable(std::make_shared<RMON2MIB::Almatrixdstable>())
	,almatrixsdtable(std::make_shared<RMON2MIB::Almatrixsdtable>())
	,almatrixtopncontroltable(std::make_shared<RMON2MIB::Almatrixtopncontroltable>())
	,almatrixtopntable(std::make_shared<RMON2MIB::Almatrixtopntable>())
	,hlhostcontroltable(std::make_shared<RMON2MIB::Hlhostcontroltable>())
	,hlmatrixcontroltable(std::make_shared<RMON2MIB::Hlmatrixcontroltable>())
	,netconfigtable(std::make_shared<RMON2MIB::Netconfigtable>())
	,nlhosttable(std::make_shared<RMON2MIB::Nlhosttable>())
	,nlmatrixdstable(std::make_shared<RMON2MIB::Nlmatrixdstable>())
	,nlmatrixsdtable(std::make_shared<RMON2MIB::Nlmatrixsdtable>())
	,nlmatrixtopncontroltable(std::make_shared<RMON2MIB::Nlmatrixtopncontroltable>())
	,nlmatrixtopntable(std::make_shared<RMON2MIB::Nlmatrixtopntable>())
	,probeconfig(std::make_shared<RMON2MIB::Probeconfig>())
	,protocoldir(std::make_shared<RMON2MIB::Protocoldir>())
	,protocoldirtable(std::make_shared<RMON2MIB::Protocoldirtable>())
	,protocoldistcontroltable(std::make_shared<RMON2MIB::Protocoldistcontroltable>())
	,protocoldiststatstable(std::make_shared<RMON2MIB::Protocoldiststatstable>())
	,serialconfigtable(std::make_shared<RMON2MIB::Serialconfigtable>())
	,serialconnectiontable(std::make_shared<RMON2MIB::Serialconnectiontable>())
	,trapdesttable(std::make_shared<RMON2MIB::Trapdesttable>())
	,usrhistorycontroltable(std::make_shared<RMON2MIB::Usrhistorycontroltable>())
	,usrhistoryobjecttable(std::make_shared<RMON2MIB::Usrhistoryobjecttable>())
	,usrhistorytable(std::make_shared<RMON2MIB::Usrhistorytable>())
{
    addressmap->parent = this;
    addressmapcontroltable->parent = this;
    addressmaptable->parent = this;
    alhosttable->parent = this;
    almatrixdstable->parent = this;
    almatrixsdtable->parent = this;
    almatrixtopncontroltable->parent = this;
    almatrixtopntable->parent = this;
    hlhostcontroltable->parent = this;
    hlmatrixcontroltable->parent = this;
    netconfigtable->parent = this;
    nlhosttable->parent = this;
    nlmatrixdstable->parent = this;
    nlmatrixsdtable->parent = this;
    nlmatrixtopncontroltable->parent = this;
    nlmatrixtopntable->parent = this;
    probeconfig->parent = this;
    protocoldir->parent = this;
    protocoldirtable->parent = this;
    protocoldistcontroltable->parent = this;
    protocoldiststatstable->parent = this;
    serialconfigtable->parent = this;
    serialconnectiontable->parent = this;
    trapdesttable->parent = this;
    usrhistorycontroltable->parent = this;
    usrhistoryobjecttable->parent = this;
    usrhistorytable->parent = this;

    yang_name = "RMON2-MIB"; yang_parent_name = "RMON2-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

RMON2MIB::~RMON2MIB()
{
}

bool RMON2MIB::has_data() const
{
    return (addressmap !=  nullptr && addressmap->has_data())
	|| (addressmapcontroltable !=  nullptr && addressmapcontroltable->has_data())
	|| (addressmaptable !=  nullptr && addressmaptable->has_data())
	|| (alhosttable !=  nullptr && alhosttable->has_data())
	|| (almatrixdstable !=  nullptr && almatrixdstable->has_data())
	|| (almatrixsdtable !=  nullptr && almatrixsdtable->has_data())
	|| (almatrixtopncontroltable !=  nullptr && almatrixtopncontroltable->has_data())
	|| (almatrixtopntable !=  nullptr && almatrixtopntable->has_data())
	|| (hlhostcontroltable !=  nullptr && hlhostcontroltable->has_data())
	|| (hlmatrixcontroltable !=  nullptr && hlmatrixcontroltable->has_data())
	|| (netconfigtable !=  nullptr && netconfigtable->has_data())
	|| (nlhosttable !=  nullptr && nlhosttable->has_data())
	|| (nlmatrixdstable !=  nullptr && nlmatrixdstable->has_data())
	|| (nlmatrixsdtable !=  nullptr && nlmatrixsdtable->has_data())
	|| (nlmatrixtopncontroltable !=  nullptr && nlmatrixtopncontroltable->has_data())
	|| (nlmatrixtopntable !=  nullptr && nlmatrixtopntable->has_data())
	|| (probeconfig !=  nullptr && probeconfig->has_data())
	|| (protocoldir !=  nullptr && protocoldir->has_data())
	|| (protocoldirtable !=  nullptr && protocoldirtable->has_data())
	|| (protocoldistcontroltable !=  nullptr && protocoldistcontroltable->has_data())
	|| (protocoldiststatstable !=  nullptr && protocoldiststatstable->has_data())
	|| (serialconfigtable !=  nullptr && serialconfigtable->has_data())
	|| (serialconnectiontable !=  nullptr && serialconnectiontable->has_data())
	|| (trapdesttable !=  nullptr && trapdesttable->has_data())
	|| (usrhistorycontroltable !=  nullptr && usrhistorycontroltable->has_data())
	|| (usrhistoryobjecttable !=  nullptr && usrhistoryobjecttable->has_data())
	|| (usrhistorytable !=  nullptr && usrhistorytable->has_data());
}

bool RMON2MIB::has_operation() const
{
    return is_set(yfilter)
	|| (addressmap !=  nullptr && addressmap->has_operation())
	|| (addressmapcontroltable !=  nullptr && addressmapcontroltable->has_operation())
	|| (addressmaptable !=  nullptr && addressmaptable->has_operation())
	|| (alhosttable !=  nullptr && alhosttable->has_operation())
	|| (almatrixdstable !=  nullptr && almatrixdstable->has_operation())
	|| (almatrixsdtable !=  nullptr && almatrixsdtable->has_operation())
	|| (almatrixtopncontroltable !=  nullptr && almatrixtopncontroltable->has_operation())
	|| (almatrixtopntable !=  nullptr && almatrixtopntable->has_operation())
	|| (hlhostcontroltable !=  nullptr && hlhostcontroltable->has_operation())
	|| (hlmatrixcontroltable !=  nullptr && hlmatrixcontroltable->has_operation())
	|| (netconfigtable !=  nullptr && netconfigtable->has_operation())
	|| (nlhosttable !=  nullptr && nlhosttable->has_operation())
	|| (nlmatrixdstable !=  nullptr && nlmatrixdstable->has_operation())
	|| (nlmatrixsdtable !=  nullptr && nlmatrixsdtable->has_operation())
	|| (nlmatrixtopncontroltable !=  nullptr && nlmatrixtopncontroltable->has_operation())
	|| (nlmatrixtopntable !=  nullptr && nlmatrixtopntable->has_operation())
	|| (probeconfig !=  nullptr && probeconfig->has_operation())
	|| (protocoldir !=  nullptr && protocoldir->has_operation())
	|| (protocoldirtable !=  nullptr && protocoldirtable->has_operation())
	|| (protocoldistcontroltable !=  nullptr && protocoldistcontroltable->has_operation())
	|| (protocoldiststatstable !=  nullptr && protocoldiststatstable->has_operation())
	|| (serialconfigtable !=  nullptr && serialconfigtable->has_operation())
	|| (serialconnectiontable !=  nullptr && serialconnectiontable->has_operation())
	|| (trapdesttable !=  nullptr && trapdesttable->has_operation())
	|| (usrhistorycontroltable !=  nullptr && usrhistorycontroltable->has_operation())
	|| (usrhistoryobjecttable !=  nullptr && usrhistoryobjecttable->has_operation())
	|| (usrhistorytable !=  nullptr && usrhistorytable->has_operation());
}

std::string RMON2MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressMap")
    {
        if(addressmap == nullptr)
        {
            addressmap = std::make_shared<RMON2MIB::Addressmap>();
        }
        return addressmap;
    }

    if(child_yang_name == "addressMapControlTable")
    {
        if(addressmapcontroltable == nullptr)
        {
            addressmapcontroltable = std::make_shared<RMON2MIB::Addressmapcontroltable>();
        }
        return addressmapcontroltable;
    }

    if(child_yang_name == "addressMapTable")
    {
        if(addressmaptable == nullptr)
        {
            addressmaptable = std::make_shared<RMON2MIB::Addressmaptable>();
        }
        return addressmaptable;
    }

    if(child_yang_name == "alHostTable")
    {
        if(alhosttable == nullptr)
        {
            alhosttable = std::make_shared<RMON2MIB::Alhosttable>();
        }
        return alhosttable;
    }

    if(child_yang_name == "alMatrixDSTable")
    {
        if(almatrixdstable == nullptr)
        {
            almatrixdstable = std::make_shared<RMON2MIB::Almatrixdstable>();
        }
        return almatrixdstable;
    }

    if(child_yang_name == "alMatrixSDTable")
    {
        if(almatrixsdtable == nullptr)
        {
            almatrixsdtable = std::make_shared<RMON2MIB::Almatrixsdtable>();
        }
        return almatrixsdtable;
    }

    if(child_yang_name == "alMatrixTopNControlTable")
    {
        if(almatrixtopncontroltable == nullptr)
        {
            almatrixtopncontroltable = std::make_shared<RMON2MIB::Almatrixtopncontroltable>();
        }
        return almatrixtopncontroltable;
    }

    if(child_yang_name == "alMatrixTopNTable")
    {
        if(almatrixtopntable == nullptr)
        {
            almatrixtopntable = std::make_shared<RMON2MIB::Almatrixtopntable>();
        }
        return almatrixtopntable;
    }

    if(child_yang_name == "hlHostControlTable")
    {
        if(hlhostcontroltable == nullptr)
        {
            hlhostcontroltable = std::make_shared<RMON2MIB::Hlhostcontroltable>();
        }
        return hlhostcontroltable;
    }

    if(child_yang_name == "hlMatrixControlTable")
    {
        if(hlmatrixcontroltable == nullptr)
        {
            hlmatrixcontroltable = std::make_shared<RMON2MIB::Hlmatrixcontroltable>();
        }
        return hlmatrixcontroltable;
    }

    if(child_yang_name == "netConfigTable")
    {
        if(netconfigtable == nullptr)
        {
            netconfigtable = std::make_shared<RMON2MIB::Netconfigtable>();
        }
        return netconfigtable;
    }

    if(child_yang_name == "nlHostTable")
    {
        if(nlhosttable == nullptr)
        {
            nlhosttable = std::make_shared<RMON2MIB::Nlhosttable>();
        }
        return nlhosttable;
    }

    if(child_yang_name == "nlMatrixDSTable")
    {
        if(nlmatrixdstable == nullptr)
        {
            nlmatrixdstable = std::make_shared<RMON2MIB::Nlmatrixdstable>();
        }
        return nlmatrixdstable;
    }

    if(child_yang_name == "nlMatrixSDTable")
    {
        if(nlmatrixsdtable == nullptr)
        {
            nlmatrixsdtable = std::make_shared<RMON2MIB::Nlmatrixsdtable>();
        }
        return nlmatrixsdtable;
    }

    if(child_yang_name == "nlMatrixTopNControlTable")
    {
        if(nlmatrixtopncontroltable == nullptr)
        {
            nlmatrixtopncontroltable = std::make_shared<RMON2MIB::Nlmatrixtopncontroltable>();
        }
        return nlmatrixtopncontroltable;
    }

    if(child_yang_name == "nlMatrixTopNTable")
    {
        if(nlmatrixtopntable == nullptr)
        {
            nlmatrixtopntable = std::make_shared<RMON2MIB::Nlmatrixtopntable>();
        }
        return nlmatrixtopntable;
    }

    if(child_yang_name == "probeConfig")
    {
        if(probeconfig == nullptr)
        {
            probeconfig = std::make_shared<RMON2MIB::Probeconfig>();
        }
        return probeconfig;
    }

    if(child_yang_name == "protocolDir")
    {
        if(protocoldir == nullptr)
        {
            protocoldir = std::make_shared<RMON2MIB::Protocoldir>();
        }
        return protocoldir;
    }

    if(child_yang_name == "protocolDirTable")
    {
        if(protocoldirtable == nullptr)
        {
            protocoldirtable = std::make_shared<RMON2MIB::Protocoldirtable>();
        }
        return protocoldirtable;
    }

    if(child_yang_name == "protocolDistControlTable")
    {
        if(protocoldistcontroltable == nullptr)
        {
            protocoldistcontroltable = std::make_shared<RMON2MIB::Protocoldistcontroltable>();
        }
        return protocoldistcontroltable;
    }

    if(child_yang_name == "protocolDistStatsTable")
    {
        if(protocoldiststatstable == nullptr)
        {
            protocoldiststatstable = std::make_shared<RMON2MIB::Protocoldiststatstable>();
        }
        return protocoldiststatstable;
    }

    if(child_yang_name == "serialConfigTable")
    {
        if(serialconfigtable == nullptr)
        {
            serialconfigtable = std::make_shared<RMON2MIB::Serialconfigtable>();
        }
        return serialconfigtable;
    }

    if(child_yang_name == "serialConnectionTable")
    {
        if(serialconnectiontable == nullptr)
        {
            serialconnectiontable = std::make_shared<RMON2MIB::Serialconnectiontable>();
        }
        return serialconnectiontable;
    }

    if(child_yang_name == "trapDestTable")
    {
        if(trapdesttable == nullptr)
        {
            trapdesttable = std::make_shared<RMON2MIB::Trapdesttable>();
        }
        return trapdesttable;
    }

    if(child_yang_name == "usrHistoryControlTable")
    {
        if(usrhistorycontroltable == nullptr)
        {
            usrhistorycontroltable = std::make_shared<RMON2MIB::Usrhistorycontroltable>();
        }
        return usrhistorycontroltable;
    }

    if(child_yang_name == "usrHistoryObjectTable")
    {
        if(usrhistoryobjecttable == nullptr)
        {
            usrhistoryobjecttable = std::make_shared<RMON2MIB::Usrhistoryobjecttable>();
        }
        return usrhistoryobjecttable;
    }

    if(child_yang_name == "usrHistoryTable")
    {
        if(usrhistorytable == nullptr)
        {
            usrhistorytable = std::make_shared<RMON2MIB::Usrhistorytable>();
        }
        return usrhistorytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addressmap != nullptr)
    {
        children["addressMap"] = addressmap;
    }

    if(addressmapcontroltable != nullptr)
    {
        children["addressMapControlTable"] = addressmapcontroltable;
    }

    if(addressmaptable != nullptr)
    {
        children["addressMapTable"] = addressmaptable;
    }

    if(alhosttable != nullptr)
    {
        children["alHostTable"] = alhosttable;
    }

    if(almatrixdstable != nullptr)
    {
        children["alMatrixDSTable"] = almatrixdstable;
    }

    if(almatrixsdtable != nullptr)
    {
        children["alMatrixSDTable"] = almatrixsdtable;
    }

    if(almatrixtopncontroltable != nullptr)
    {
        children["alMatrixTopNControlTable"] = almatrixtopncontroltable;
    }

    if(almatrixtopntable != nullptr)
    {
        children["alMatrixTopNTable"] = almatrixtopntable;
    }

    if(hlhostcontroltable != nullptr)
    {
        children["hlHostControlTable"] = hlhostcontroltable;
    }

    if(hlmatrixcontroltable != nullptr)
    {
        children["hlMatrixControlTable"] = hlmatrixcontroltable;
    }

    if(netconfigtable != nullptr)
    {
        children["netConfigTable"] = netconfigtable;
    }

    if(nlhosttable != nullptr)
    {
        children["nlHostTable"] = nlhosttable;
    }

    if(nlmatrixdstable != nullptr)
    {
        children["nlMatrixDSTable"] = nlmatrixdstable;
    }

    if(nlmatrixsdtable != nullptr)
    {
        children["nlMatrixSDTable"] = nlmatrixsdtable;
    }

    if(nlmatrixtopncontroltable != nullptr)
    {
        children["nlMatrixTopNControlTable"] = nlmatrixtopncontroltable;
    }

    if(nlmatrixtopntable != nullptr)
    {
        children["nlMatrixTopNTable"] = nlmatrixtopntable;
    }

    if(probeconfig != nullptr)
    {
        children["probeConfig"] = probeconfig;
    }

    if(protocoldir != nullptr)
    {
        children["protocolDir"] = protocoldir;
    }

    if(protocoldirtable != nullptr)
    {
        children["protocolDirTable"] = protocoldirtable;
    }

    if(protocoldistcontroltable != nullptr)
    {
        children["protocolDistControlTable"] = protocoldistcontroltable;
    }

    if(protocoldiststatstable != nullptr)
    {
        children["protocolDistStatsTable"] = protocoldiststatstable;
    }

    if(serialconfigtable != nullptr)
    {
        children["serialConfigTable"] = serialconfigtable;
    }

    if(serialconnectiontable != nullptr)
    {
        children["serialConnectionTable"] = serialconnectiontable;
    }

    if(trapdesttable != nullptr)
    {
        children["trapDestTable"] = trapdesttable;
    }

    if(usrhistorycontroltable != nullptr)
    {
        children["usrHistoryControlTable"] = usrhistorycontroltable;
    }

    if(usrhistoryobjecttable != nullptr)
    {
        children["usrHistoryObjectTable"] = usrhistoryobjecttable;
    }

    if(usrhistorytable != nullptr)
    {
        children["usrHistoryTable"] = usrhistorytable;
    }

    return children;
}

void RMON2MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> RMON2MIB::clone_ptr() const
{
    return std::make_shared<RMON2MIB>();
}

std::string RMON2MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string RMON2MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function RMON2MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> RMON2MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool RMON2MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMap" || name == "addressMapControlTable" || name == "addressMapTable" || name == "alHostTable" || name == "alMatrixDSTable" || name == "alMatrixSDTable" || name == "alMatrixTopNControlTable" || name == "alMatrixTopNTable" || name == "hlHostControlTable" || name == "hlMatrixControlTable" || name == "netConfigTable" || name == "nlHostTable" || name == "nlMatrixDSTable" || name == "nlMatrixSDTable" || name == "nlMatrixTopNControlTable" || name == "nlMatrixTopNTable" || name == "probeConfig" || name == "protocolDir" || name == "protocolDirTable" || name == "protocolDistControlTable" || name == "protocolDistStatsTable" || name == "serialConfigTable" || name == "serialConnectionTable" || name == "trapDestTable" || name == "usrHistoryControlTable" || name == "usrHistoryObjectTable" || name == "usrHistoryTable")
        return true;
    return false;
}

RMON2MIB::Addressmap::Addressmap()
    :
    addressmapdeletes{YType::uint32, "addressMapDeletes"},
    addressmapinserts{YType::uint32, "addressMapInserts"},
    addressmapmaxdesiredentries{YType::int32, "addressMapMaxDesiredEntries"}
{

    yang_name = "addressMap"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Addressmap::~Addressmap()
{
}

bool RMON2MIB::Addressmap::has_data() const
{
    return addressmapdeletes.is_set
	|| addressmapinserts.is_set
	|| addressmapmaxdesiredentries.is_set;
}

bool RMON2MIB::Addressmap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addressmapdeletes.yfilter)
	|| ydk::is_set(addressmapinserts.yfilter)
	|| ydk::is_set(addressmapmaxdesiredentries.yfilter);
}

std::string RMON2MIB::Addressmap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Addressmap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Addressmap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addressmapdeletes.is_set || is_set(addressmapdeletes.yfilter)) leaf_name_data.push_back(addressmapdeletes.get_name_leafdata());
    if (addressmapinserts.is_set || is_set(addressmapinserts.yfilter)) leaf_name_data.push_back(addressmapinserts.get_name_leafdata());
    if (addressmapmaxdesiredentries.is_set || is_set(addressmapmaxdesiredentries.yfilter)) leaf_name_data.push_back(addressmapmaxdesiredentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Addressmap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Addressmap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Addressmap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addressMapDeletes")
    {
        addressmapdeletes = value;
        addressmapdeletes.value_namespace = name_space;
        addressmapdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapInserts")
    {
        addressmapinserts = value;
        addressmapinserts.value_namespace = name_space;
        addressmapinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapMaxDesiredEntries")
    {
        addressmapmaxdesiredentries = value;
        addressmapmaxdesiredentries.value_namespace = name_space;
        addressmapmaxdesiredentries.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Addressmap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addressMapDeletes")
    {
        addressmapdeletes.yfilter = yfilter;
    }
    if(value_path == "addressMapInserts")
    {
        addressmapinserts.yfilter = yfilter;
    }
    if(value_path == "addressMapMaxDesiredEntries")
    {
        addressmapmaxdesiredentries.yfilter = yfilter;
    }
}

bool RMON2MIB::Addressmap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapDeletes" || name == "addressMapInserts" || name == "addressMapMaxDesiredEntries")
        return true;
    return false;
}

RMON2MIB::Addressmapcontroltable::Addressmapcontroltable()
{

    yang_name = "addressMapControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Addressmapcontroltable::~Addressmapcontroltable()
{
}

bool RMON2MIB::Addressmapcontroltable::has_data() const
{
    for (std::size_t index=0; index<addressmapcontrolentry.size(); index++)
    {
        if(addressmapcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Addressmapcontroltable::has_operation() const
{
    for (std::size_t index=0; index<addressmapcontrolentry.size(); index++)
    {
        if(addressmapcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Addressmapcontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Addressmapcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Addressmapcontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Addressmapcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressMapControlEntry")
    {
        for(auto const & c : addressmapcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry>();
        c->parent = this;
        addressmapcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Addressmapcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : addressmapcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Addressmapcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Addressmapcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Addressmapcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapControlEntry")
        return true;
    return false;
}

RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::Addressmapcontrolentry()
    :
    addressmapcontrolindex{YType::int32, "addressMapControlIndex"},
    addressmapcontroldatasource{YType::str, "addressMapControlDataSource"},
    addressmapcontroldroppedframes{YType::uint32, "addressMapControlDroppedFrames"},
    addressmapcontrolowner{YType::str, "addressMapControlOwner"},
    addressmapcontrolstatus{YType::enumeration, "addressMapControlStatus"}
{

    yang_name = "addressMapControlEntry"; yang_parent_name = "addressMapControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::~Addressmapcontrolentry()
{
}

bool RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::has_data() const
{
    return addressmapcontrolindex.is_set
	|| addressmapcontroldatasource.is_set
	|| addressmapcontroldroppedframes.is_set
	|| addressmapcontrolowner.is_set
	|| addressmapcontrolstatus.is_set;
}

bool RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addressmapcontrolindex.yfilter)
	|| ydk::is_set(addressmapcontroldatasource.yfilter)
	|| ydk::is_set(addressmapcontroldroppedframes.yfilter)
	|| ydk::is_set(addressmapcontrolowner.yfilter)
	|| ydk::is_set(addressmapcontrolstatus.yfilter);
}

std::string RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/addressMapControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapControlEntry" <<"[addressMapControlIndex='" <<addressmapcontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addressmapcontrolindex.is_set || is_set(addressmapcontrolindex.yfilter)) leaf_name_data.push_back(addressmapcontrolindex.get_name_leafdata());
    if (addressmapcontroldatasource.is_set || is_set(addressmapcontroldatasource.yfilter)) leaf_name_data.push_back(addressmapcontroldatasource.get_name_leafdata());
    if (addressmapcontroldroppedframes.is_set || is_set(addressmapcontroldroppedframes.yfilter)) leaf_name_data.push_back(addressmapcontroldroppedframes.get_name_leafdata());
    if (addressmapcontrolowner.is_set || is_set(addressmapcontrolowner.yfilter)) leaf_name_data.push_back(addressmapcontrolowner.get_name_leafdata());
    if (addressmapcontrolstatus.is_set || is_set(addressmapcontrolstatus.yfilter)) leaf_name_data.push_back(addressmapcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addressMapControlIndex")
    {
        addressmapcontrolindex = value;
        addressmapcontrolindex.value_namespace = name_space;
        addressmapcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapControlDataSource")
    {
        addressmapcontroldatasource = value;
        addressmapcontroldatasource.value_namespace = name_space;
        addressmapcontroldatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapControlDroppedFrames")
    {
        addressmapcontroldroppedframes = value;
        addressmapcontroldroppedframes.value_namespace = name_space;
        addressmapcontroldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapControlOwner")
    {
        addressmapcontrolowner = value;
        addressmapcontrolowner.value_namespace = name_space;
        addressmapcontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapControlStatus")
    {
        addressmapcontrolstatus = value;
        addressmapcontrolstatus.value_namespace = name_space;
        addressmapcontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addressMapControlIndex")
    {
        addressmapcontrolindex.yfilter = yfilter;
    }
    if(value_path == "addressMapControlDataSource")
    {
        addressmapcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "addressMapControlDroppedFrames")
    {
        addressmapcontroldroppedframes.yfilter = yfilter;
    }
    if(value_path == "addressMapControlOwner")
    {
        addressmapcontrolowner.yfilter = yfilter;
    }
    if(value_path == "addressMapControlStatus")
    {
        addressmapcontrolstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapControlIndex" || name == "addressMapControlDataSource" || name == "addressMapControlDroppedFrames" || name == "addressMapControlOwner" || name == "addressMapControlStatus")
        return true;
    return false;
}

RMON2MIB::Addressmaptable::Addressmaptable()
{

    yang_name = "addressMapTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Addressmaptable::~Addressmaptable()
{
}

bool RMON2MIB::Addressmaptable::has_data() const
{
    for (std::size_t index=0; index<addressmapentry.size(); index++)
    {
        if(addressmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Addressmaptable::has_operation() const
{
    for (std::size_t index=0; index<addressmapentry.size(); index++)
    {
        if(addressmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Addressmaptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Addressmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Addressmaptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Addressmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressMapEntry")
    {
        for(auto const & c : addressmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Addressmaptable::Addressmapentry>();
        c->parent = this;
        addressmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Addressmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : addressmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Addressmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Addressmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Addressmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapEntry")
        return true;
    return false;
}

RMON2MIB::Addressmaptable::Addressmapentry::Addressmapentry()
    :
    addressmaptimemark{YType::uint32, "addressMapTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    addressmapnetworkaddress{YType::str, "addressMapNetworkAddress"},
    addressmapsource{YType::str, "addressMapSource"},
    addressmaplastchange{YType::uint32, "addressMapLastChange"},
    addressmapphysicaladdress{YType::str, "addressMapPhysicalAddress"}
{

    yang_name = "addressMapEntry"; yang_parent_name = "addressMapTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Addressmaptable::Addressmapentry::~Addressmapentry()
{
}

bool RMON2MIB::Addressmaptable::Addressmapentry::has_data() const
{
    return addressmaptimemark.is_set
	|| protocoldirlocalindex.is_set
	|| addressmapnetworkaddress.is_set
	|| addressmapsource.is_set
	|| addressmaplastchange.is_set
	|| addressmapphysicaladdress.is_set;
}

bool RMON2MIB::Addressmaptable::Addressmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addressmaptimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(addressmapnetworkaddress.yfilter)
	|| ydk::is_set(addressmapsource.yfilter)
	|| ydk::is_set(addressmaplastchange.yfilter)
	|| ydk::is_set(addressmapphysicaladdress.yfilter);
}

std::string RMON2MIB::Addressmaptable::Addressmapentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/addressMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Addressmaptable::Addressmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapEntry" <<"[addressMapTimeMark='" <<addressmaptimemark <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']" <<"[addressMapNetworkAddress='" <<addressmapnetworkaddress <<"']" <<"[addressMapSource='" <<addressmapsource <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Addressmaptable::Addressmapentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addressmaptimemark.is_set || is_set(addressmaptimemark.yfilter)) leaf_name_data.push_back(addressmaptimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (addressmapnetworkaddress.is_set || is_set(addressmapnetworkaddress.yfilter)) leaf_name_data.push_back(addressmapnetworkaddress.get_name_leafdata());
    if (addressmapsource.is_set || is_set(addressmapsource.yfilter)) leaf_name_data.push_back(addressmapsource.get_name_leafdata());
    if (addressmaplastchange.is_set || is_set(addressmaplastchange.yfilter)) leaf_name_data.push_back(addressmaplastchange.get_name_leafdata());
    if (addressmapphysicaladdress.is_set || is_set(addressmapphysicaladdress.yfilter)) leaf_name_data.push_back(addressmapphysicaladdress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Addressmaptable::Addressmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Addressmaptable::Addressmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Addressmaptable::Addressmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addressMapTimeMark")
    {
        addressmaptimemark = value;
        addressmaptimemark.value_namespace = name_space;
        addressmaptimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapNetworkAddress")
    {
        addressmapnetworkaddress = value;
        addressmapnetworkaddress.value_namespace = name_space;
        addressmapnetworkaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapSource")
    {
        addressmapsource = value;
        addressmapsource.value_namespace = name_space;
        addressmapsource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapLastChange")
    {
        addressmaplastchange = value;
        addressmaplastchange.value_namespace = name_space;
        addressmaplastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapPhysicalAddress")
    {
        addressmapphysicaladdress = value;
        addressmapphysicaladdress.value_namespace = name_space;
        addressmapphysicaladdress.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Addressmaptable::Addressmapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addressMapTimeMark")
    {
        addressmaptimemark.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "addressMapNetworkAddress")
    {
        addressmapnetworkaddress.yfilter = yfilter;
    }
    if(value_path == "addressMapSource")
    {
        addressmapsource.yfilter = yfilter;
    }
    if(value_path == "addressMapLastChange")
    {
        addressmaplastchange.yfilter = yfilter;
    }
    if(value_path == "addressMapPhysicalAddress")
    {
        addressmapphysicaladdress.yfilter = yfilter;
    }
}

bool RMON2MIB::Addressmaptable::Addressmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapTimeMark" || name == "protocolDirLocalIndex" || name == "addressMapNetworkAddress" || name == "addressMapSource" || name == "addressMapLastChange" || name == "addressMapPhysicalAddress")
        return true;
    return false;
}

RMON2MIB::Alhosttable::Alhosttable()
{

    yang_name = "alHostTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Alhosttable::~Alhosttable()
{
}

bool RMON2MIB::Alhosttable::has_data() const
{
    for (std::size_t index=0; index<alhostentry.size(); index++)
    {
        if(alhostentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Alhosttable::has_operation() const
{
    for (std::size_t index=0; index<alhostentry.size(); index++)
    {
        if(alhostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Alhosttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Alhosttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alHostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Alhosttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Alhosttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alHostEntry")
    {
        for(auto const & c : alhostentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Alhosttable::Alhostentry>();
        c->parent = this;
        alhostentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Alhosttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : alhostentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Alhosttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Alhosttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Alhosttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alHostEntry")
        return true;
    return false;
}

RMON2MIB::Alhosttable::Alhostentry::Alhostentry()
    :
    hlhostcontrolindex{YType::str, "hlHostControlIndex"},
    alhosttimemark{YType::uint32, "alHostTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlhostaddress{YType::str, "nlHostAddress"},
    protocoldirlocalindex_2{YType::str, "protocolDirLocalIndex_2"},
    alhostcreatetime{YType::uint32, "alHostCreateTime"},
    alhostinoctets{YType::uint32, "alHostInOctets"},
    alhostinpkts{YType::uint32, "alHostInPkts"},
    alhostoutoctets{YType::uint32, "alHostOutOctets"},
    alhostoutpkts{YType::uint32, "alHostOutPkts"}
{

    yang_name = "alHostEntry"; yang_parent_name = "alHostTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Alhosttable::Alhostentry::~Alhostentry()
{
}

bool RMON2MIB::Alhosttable::Alhostentry::has_data() const
{
    return hlhostcontrolindex.is_set
	|| alhosttimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlhostaddress.is_set
	|| protocoldirlocalindex_2.is_set
	|| alhostcreatetime.is_set
	|| alhostinoctets.is_set
	|| alhostinpkts.is_set
	|| alhostoutoctets.is_set
	|| alhostoutpkts.is_set;
}

bool RMON2MIB::Alhosttable::Alhostentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlhostcontrolindex.yfilter)
	|| ydk::is_set(alhosttimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlhostaddress.yfilter)
	|| ydk::is_set(protocoldirlocalindex_2.yfilter)
	|| ydk::is_set(alhostcreatetime.yfilter)
	|| ydk::is_set(alhostinoctets.yfilter)
	|| ydk::is_set(alhostinpkts.yfilter)
	|| ydk::is_set(alhostoutoctets.yfilter)
	|| ydk::is_set(alhostoutpkts.yfilter);
}

std::string RMON2MIB::Alhosttable::Alhostentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alHostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Alhosttable::Alhostentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alHostEntry" <<"[hlHostControlIndex='" <<hlhostcontrolindex <<"']" <<"[alHostTimeMark='" <<alhosttimemark <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']" <<"[nlHostAddress='" <<nlhostaddress <<"']" <<"[protocolDirLocalIndex_2='" <<protocoldirlocalindex_2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Alhosttable::Alhostentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlhostcontrolindex.is_set || is_set(hlhostcontrolindex.yfilter)) leaf_name_data.push_back(hlhostcontrolindex.get_name_leafdata());
    if (alhosttimemark.is_set || is_set(alhosttimemark.yfilter)) leaf_name_data.push_back(alhosttimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlhostaddress.is_set || is_set(nlhostaddress.yfilter)) leaf_name_data.push_back(nlhostaddress.get_name_leafdata());
    if (protocoldirlocalindex_2.is_set || is_set(protocoldirlocalindex_2.yfilter)) leaf_name_data.push_back(protocoldirlocalindex_2.get_name_leafdata());
    if (alhostcreatetime.is_set || is_set(alhostcreatetime.yfilter)) leaf_name_data.push_back(alhostcreatetime.get_name_leafdata());
    if (alhostinoctets.is_set || is_set(alhostinoctets.yfilter)) leaf_name_data.push_back(alhostinoctets.get_name_leafdata());
    if (alhostinpkts.is_set || is_set(alhostinpkts.yfilter)) leaf_name_data.push_back(alhostinpkts.get_name_leafdata());
    if (alhostoutoctets.is_set || is_set(alhostoutoctets.yfilter)) leaf_name_data.push_back(alhostoutoctets.get_name_leafdata());
    if (alhostoutpkts.is_set || is_set(alhostoutpkts.yfilter)) leaf_name_data.push_back(alhostoutpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Alhosttable::Alhostentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Alhosttable::Alhostentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Alhosttable::Alhostentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex = value;
        hlhostcontrolindex.value_namespace = name_space;
        hlhostcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostTimeMark")
    {
        alhosttimemark = value;
        alhosttimemark.value_namespace = name_space;
        alhosttimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostAddress")
    {
        nlhostaddress = value;
        nlhostaddress.value_namespace = name_space;
        nlhostaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex_2")
    {
        protocoldirlocalindex_2 = value;
        protocoldirlocalindex_2.value_namespace = name_space;
        protocoldirlocalindex_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostCreateTime")
    {
        alhostcreatetime = value;
        alhostcreatetime.value_namespace = name_space;
        alhostcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostInOctets")
    {
        alhostinoctets = value;
        alhostinoctets.value_namespace = name_space;
        alhostinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostInPkts")
    {
        alhostinpkts = value;
        alhostinpkts.value_namespace = name_space;
        alhostinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostOutOctets")
    {
        alhostoutoctets = value;
        alhostoutoctets.value_namespace = name_space;
        alhostoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostOutPkts")
    {
        alhostoutpkts = value;
        alhostoutpkts.value_namespace = name_space;
        alhostoutpkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Alhosttable::Alhostentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex.yfilter = yfilter;
    }
    if(value_path == "alHostTimeMark")
    {
        alhosttimemark.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlHostAddress")
    {
        nlhostaddress.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex_2")
    {
        protocoldirlocalindex_2.yfilter = yfilter;
    }
    if(value_path == "alHostCreateTime")
    {
        alhostcreatetime.yfilter = yfilter;
    }
    if(value_path == "alHostInOctets")
    {
        alhostinoctets.yfilter = yfilter;
    }
    if(value_path == "alHostInPkts")
    {
        alhostinpkts.yfilter = yfilter;
    }
    if(value_path == "alHostOutOctets")
    {
        alhostoutoctets.yfilter = yfilter;
    }
    if(value_path == "alHostOutPkts")
    {
        alhostoutpkts.yfilter = yfilter;
    }
}

bool RMON2MIB::Alhosttable::Alhostentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlIndex" || name == "alHostTimeMark" || name == "protocolDirLocalIndex" || name == "nlHostAddress" || name == "protocolDirLocalIndex_2" || name == "alHostCreateTime" || name == "alHostInOctets" || name == "alHostInPkts" || name == "alHostOutOctets" || name == "alHostOutPkts")
        return true;
    return false;
}

RMON2MIB::Almatrixdstable::Almatrixdstable()
{

    yang_name = "alMatrixDSTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixdstable::~Almatrixdstable()
{
}

bool RMON2MIB::Almatrixdstable::has_data() const
{
    for (std::size_t index=0; index<almatrixdsentry.size(); index++)
    {
        if(almatrixdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Almatrixdstable::has_operation() const
{
    for (std::size_t index=0; index<almatrixdsentry.size(); index++)
    {
        if(almatrixdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Almatrixdstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixdstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixDSEntry")
    {
        for(auto const & c : almatrixdsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Almatrixdstable::Almatrixdsentry>();
        c->parent = this;
        almatrixdsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : almatrixdsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Almatrixdstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Almatrixdstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Almatrixdstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixDSEntry")
        return true;
    return false;
}

RMON2MIB::Almatrixdstable::Almatrixdsentry::Almatrixdsentry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    almatrixdstimemark{YType::uint32, "alMatrixDSTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixdsdestaddress{YType::str, "nlMatrixDSDestAddress"},
    nlmatrixdssourceaddress{YType::str, "nlMatrixDSSourceAddress"},
    protocoldirlocalindex_2{YType::str, "protocolDirLocalIndex_2"},
    almatrixdscreatetime{YType::uint32, "alMatrixDSCreateTime"},
    almatrixdsoctets{YType::uint32, "alMatrixDSOctets"},
    almatrixdspkts{YType::uint32, "alMatrixDSPkts"}
{

    yang_name = "alMatrixDSEntry"; yang_parent_name = "alMatrixDSTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixdstable::Almatrixdsentry::~Almatrixdsentry()
{
}

bool RMON2MIB::Almatrixdstable::Almatrixdsentry::has_data() const
{
    return hlmatrixcontrolindex.is_set
	|| almatrixdstimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixdsdestaddress.is_set
	|| nlmatrixdssourceaddress.is_set
	|| protocoldirlocalindex_2.is_set
	|| almatrixdscreatetime.is_set
	|| almatrixdsoctets.is_set
	|| almatrixdspkts.is_set;
}

bool RMON2MIB::Almatrixdstable::Almatrixdsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(almatrixdstimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixdsdestaddress.yfilter)
	|| ydk::is_set(nlmatrixdssourceaddress.yfilter)
	|| ydk::is_set(protocoldirlocalindex_2.yfilter)
	|| ydk::is_set(almatrixdscreatetime.yfilter)
	|| ydk::is_set(almatrixdsoctets.yfilter)
	|| ydk::is_set(almatrixdspkts.yfilter);
}

std::string RMON2MIB::Almatrixdstable::Almatrixdsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixdstable::Almatrixdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixDSEntry" <<"[hlMatrixControlIndex='" <<hlmatrixcontrolindex <<"']" <<"[alMatrixDSTimeMark='" <<almatrixdstimemark <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']" <<"[nlMatrixDSDestAddress='" <<nlmatrixdsdestaddress <<"']" <<"[nlMatrixDSSourceAddress='" <<nlmatrixdssourceaddress <<"']" <<"[protocolDirLocalIndex_2='" <<protocoldirlocalindex_2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixdstable::Almatrixdsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (almatrixdstimemark.is_set || is_set(almatrixdstimemark.yfilter)) leaf_name_data.push_back(almatrixdstimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixdsdestaddress.is_set || is_set(nlmatrixdsdestaddress.yfilter)) leaf_name_data.push_back(nlmatrixdsdestaddress.get_name_leafdata());
    if (nlmatrixdssourceaddress.is_set || is_set(nlmatrixdssourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixdssourceaddress.get_name_leafdata());
    if (protocoldirlocalindex_2.is_set || is_set(protocoldirlocalindex_2.yfilter)) leaf_name_data.push_back(protocoldirlocalindex_2.get_name_leafdata());
    if (almatrixdscreatetime.is_set || is_set(almatrixdscreatetime.yfilter)) leaf_name_data.push_back(almatrixdscreatetime.get_name_leafdata());
    if (almatrixdsoctets.is_set || is_set(almatrixdsoctets.yfilter)) leaf_name_data.push_back(almatrixdsoctets.get_name_leafdata());
    if (almatrixdspkts.is_set || is_set(almatrixdspkts.yfilter)) leaf_name_data.push_back(almatrixdspkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixdstable::Almatrixdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixdstable::Almatrixdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Almatrixdstable::Almatrixdsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex = value;
        hlmatrixcontrolindex.value_namespace = name_space;
        hlmatrixcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixDSTimeMark")
    {
        almatrixdstimemark = value;
        almatrixdstimemark.value_namespace = name_space;
        almatrixdstimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSDestAddress")
    {
        nlmatrixdsdestaddress = value;
        nlmatrixdsdestaddress.value_namespace = name_space;
        nlmatrixdsdestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSSourceAddress")
    {
        nlmatrixdssourceaddress = value;
        nlmatrixdssourceaddress.value_namespace = name_space;
        nlmatrixdssourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex_2")
    {
        protocoldirlocalindex_2 = value;
        protocoldirlocalindex_2.value_namespace = name_space;
        protocoldirlocalindex_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixDSCreateTime")
    {
        almatrixdscreatetime = value;
        almatrixdscreatetime.value_namespace = name_space;
        almatrixdscreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixDSOctets")
    {
        almatrixdsoctets = value;
        almatrixdsoctets.value_namespace = name_space;
        almatrixdsoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixDSPkts")
    {
        almatrixdspkts = value;
        almatrixdspkts.value_namespace = name_space;
        almatrixdspkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Almatrixdstable::Almatrixdsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixDSTimeMark")
    {
        almatrixdstimemark.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSDestAddress")
    {
        nlmatrixdsdestaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSSourceAddress")
    {
        nlmatrixdssourceaddress.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex_2")
    {
        protocoldirlocalindex_2.yfilter = yfilter;
    }
    if(value_path == "alMatrixDSCreateTime")
    {
        almatrixdscreatetime.yfilter = yfilter;
    }
    if(value_path == "alMatrixDSOctets")
    {
        almatrixdsoctets.yfilter = yfilter;
    }
    if(value_path == "alMatrixDSPkts")
    {
        almatrixdspkts.yfilter = yfilter;
    }
}

bool RMON2MIB::Almatrixdstable::Almatrixdsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "alMatrixDSTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixDSDestAddress" || name == "nlMatrixDSSourceAddress" || name == "protocolDirLocalIndex_2" || name == "alMatrixDSCreateTime" || name == "alMatrixDSOctets" || name == "alMatrixDSPkts")
        return true;
    return false;
}

RMON2MIB::Almatrixsdtable::Almatrixsdtable()
{

    yang_name = "alMatrixSDTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixsdtable::~Almatrixsdtable()
{
}

bool RMON2MIB::Almatrixsdtable::has_data() const
{
    for (std::size_t index=0; index<almatrixsdentry.size(); index++)
    {
        if(almatrixsdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Almatrixsdtable::has_operation() const
{
    for (std::size_t index=0; index<almatrixsdentry.size(); index++)
    {
        if(almatrixsdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Almatrixsdtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixsdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixSDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixsdtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixsdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixSDEntry")
    {
        for(auto const & c : almatrixsdentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Almatrixsdtable::Almatrixsdentry>();
        c->parent = this;
        almatrixsdentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixsdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : almatrixsdentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Almatrixsdtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Almatrixsdtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Almatrixsdtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixSDEntry")
        return true;
    return false;
}

RMON2MIB::Almatrixsdtable::Almatrixsdentry::Almatrixsdentry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    almatrixsdtimemark{YType::uint32, "alMatrixSDTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixsdsourceaddress{YType::str, "nlMatrixSDSourceAddress"},
    nlmatrixsddestaddress{YType::str, "nlMatrixSDDestAddress"},
    protocoldirlocalindex_2{YType::str, "protocolDirLocalIndex_2"},
    almatrixsdcreatetime{YType::uint32, "alMatrixSDCreateTime"},
    almatrixsdoctets{YType::uint32, "alMatrixSDOctets"},
    almatrixsdpkts{YType::uint32, "alMatrixSDPkts"}
{

    yang_name = "alMatrixSDEntry"; yang_parent_name = "alMatrixSDTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixsdtable::Almatrixsdentry::~Almatrixsdentry()
{
}

bool RMON2MIB::Almatrixsdtable::Almatrixsdentry::has_data() const
{
    return hlmatrixcontrolindex.is_set
	|| almatrixsdtimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixsdsourceaddress.is_set
	|| nlmatrixsddestaddress.is_set
	|| protocoldirlocalindex_2.is_set
	|| almatrixsdcreatetime.is_set
	|| almatrixsdoctets.is_set
	|| almatrixsdpkts.is_set;
}

bool RMON2MIB::Almatrixsdtable::Almatrixsdentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(almatrixsdtimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixsdsourceaddress.yfilter)
	|| ydk::is_set(nlmatrixsddestaddress.yfilter)
	|| ydk::is_set(protocoldirlocalindex_2.yfilter)
	|| ydk::is_set(almatrixsdcreatetime.yfilter)
	|| ydk::is_set(almatrixsdoctets.yfilter)
	|| ydk::is_set(almatrixsdpkts.yfilter);
}

std::string RMON2MIB::Almatrixsdtable::Almatrixsdentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixSDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixsdtable::Almatrixsdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixSDEntry" <<"[hlMatrixControlIndex='" <<hlmatrixcontrolindex <<"']" <<"[alMatrixSDTimeMark='" <<almatrixsdtimemark <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']" <<"[nlMatrixSDSourceAddress='" <<nlmatrixsdsourceaddress <<"']" <<"[nlMatrixSDDestAddress='" <<nlmatrixsddestaddress <<"']" <<"[protocolDirLocalIndex_2='" <<protocoldirlocalindex_2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixsdtable::Almatrixsdentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (almatrixsdtimemark.is_set || is_set(almatrixsdtimemark.yfilter)) leaf_name_data.push_back(almatrixsdtimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixsdsourceaddress.is_set || is_set(nlmatrixsdsourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixsdsourceaddress.get_name_leafdata());
    if (nlmatrixsddestaddress.is_set || is_set(nlmatrixsddestaddress.yfilter)) leaf_name_data.push_back(nlmatrixsddestaddress.get_name_leafdata());
    if (protocoldirlocalindex_2.is_set || is_set(protocoldirlocalindex_2.yfilter)) leaf_name_data.push_back(protocoldirlocalindex_2.get_name_leafdata());
    if (almatrixsdcreatetime.is_set || is_set(almatrixsdcreatetime.yfilter)) leaf_name_data.push_back(almatrixsdcreatetime.get_name_leafdata());
    if (almatrixsdoctets.is_set || is_set(almatrixsdoctets.yfilter)) leaf_name_data.push_back(almatrixsdoctets.get_name_leafdata());
    if (almatrixsdpkts.is_set || is_set(almatrixsdpkts.yfilter)) leaf_name_data.push_back(almatrixsdpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixsdtable::Almatrixsdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixsdtable::Almatrixsdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Almatrixsdtable::Almatrixsdentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex = value;
        hlmatrixcontrolindex.value_namespace = name_space;
        hlmatrixcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixSDTimeMark")
    {
        almatrixsdtimemark = value;
        almatrixsdtimemark.value_namespace = name_space;
        almatrixsdtimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDSourceAddress")
    {
        nlmatrixsdsourceaddress = value;
        nlmatrixsdsourceaddress.value_namespace = name_space;
        nlmatrixsdsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDDestAddress")
    {
        nlmatrixsddestaddress = value;
        nlmatrixsddestaddress.value_namespace = name_space;
        nlmatrixsddestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex_2")
    {
        protocoldirlocalindex_2 = value;
        protocoldirlocalindex_2.value_namespace = name_space;
        protocoldirlocalindex_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixSDCreateTime")
    {
        almatrixsdcreatetime = value;
        almatrixsdcreatetime.value_namespace = name_space;
        almatrixsdcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixSDOctets")
    {
        almatrixsdoctets = value;
        almatrixsdoctets.value_namespace = name_space;
        almatrixsdoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixSDPkts")
    {
        almatrixsdpkts = value;
        almatrixsdpkts.value_namespace = name_space;
        almatrixsdpkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Almatrixsdtable::Almatrixsdentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixSDTimeMark")
    {
        almatrixsdtimemark.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDSourceAddress")
    {
        nlmatrixsdsourceaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDDestAddress")
    {
        nlmatrixsddestaddress.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex_2")
    {
        protocoldirlocalindex_2.yfilter = yfilter;
    }
    if(value_path == "alMatrixSDCreateTime")
    {
        almatrixsdcreatetime.yfilter = yfilter;
    }
    if(value_path == "alMatrixSDOctets")
    {
        almatrixsdoctets.yfilter = yfilter;
    }
    if(value_path == "alMatrixSDPkts")
    {
        almatrixsdpkts.yfilter = yfilter;
    }
}

bool RMON2MIB::Almatrixsdtable::Almatrixsdentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "alMatrixSDTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixSDSourceAddress" || name == "nlMatrixSDDestAddress" || name == "protocolDirLocalIndex_2" || name == "alMatrixSDCreateTime" || name == "alMatrixSDOctets" || name == "alMatrixSDPkts")
        return true;
    return false;
}

RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontroltable()
{

    yang_name = "alMatrixTopNControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixtopncontroltable::~Almatrixtopncontroltable()
{
}

bool RMON2MIB::Almatrixtopncontroltable::has_data() const
{
    for (std::size_t index=0; index<almatrixtopncontrolentry.size(); index++)
    {
        if(almatrixtopncontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Almatrixtopncontroltable::has_operation() const
{
    for (std::size_t index=0; index<almatrixtopncontrolentry.size(); index++)
    {
        if(almatrixtopncontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Almatrixtopncontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixtopncontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixtopncontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixtopncontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixTopNControlEntry")
    {
        for(auto const & c : almatrixtopncontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry>();
        c->parent = this;
        almatrixtopncontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixtopncontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : almatrixtopncontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Almatrixtopncontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Almatrixtopncontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Almatrixtopncontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNControlEntry")
        return true;
    return false;
}

RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::Almatrixtopncontrolentry()
    :
    almatrixtopncontrolindex{YType::int32, "alMatrixTopNControlIndex"},
    almatrixtopncontrolduration{YType::int32, "alMatrixTopNControlDuration"},
    almatrixtopncontrolgeneratedreports{YType::uint32, "alMatrixTopNControlGeneratedReports"},
    almatrixtopncontrolgrantedsize{YType::int32, "alMatrixTopNControlGrantedSize"},
    almatrixtopncontrolmatrixindex{YType::int32, "alMatrixTopNControlMatrixIndex"},
    almatrixtopncontrolowner{YType::str, "alMatrixTopNControlOwner"},
    almatrixtopncontrolratebase{YType::enumeration, "alMatrixTopNControlRateBase"},
    almatrixtopncontrolrequestedsize{YType::int32, "alMatrixTopNControlRequestedSize"},
    almatrixtopncontrolstarttime{YType::uint32, "alMatrixTopNControlStartTime"},
    almatrixtopncontrolstatus{YType::enumeration, "alMatrixTopNControlStatus"},
    almatrixtopncontroltimeremaining{YType::int32, "alMatrixTopNControlTimeRemaining"}
{

    yang_name = "alMatrixTopNControlEntry"; yang_parent_name = "alMatrixTopNControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::~Almatrixtopncontrolentry()
{
}

bool RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::has_data() const
{
    return almatrixtopncontrolindex.is_set
	|| almatrixtopncontrolduration.is_set
	|| almatrixtopncontrolgeneratedreports.is_set
	|| almatrixtopncontrolgrantedsize.is_set
	|| almatrixtopncontrolmatrixindex.is_set
	|| almatrixtopncontrolowner.is_set
	|| almatrixtopncontrolratebase.is_set
	|| almatrixtopncontrolrequestedsize.is_set
	|| almatrixtopncontrolstarttime.is_set
	|| almatrixtopncontrolstatus.is_set
	|| almatrixtopncontroltimeremaining.is_set;
}

bool RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(almatrixtopncontrolindex.yfilter)
	|| ydk::is_set(almatrixtopncontrolduration.yfilter)
	|| ydk::is_set(almatrixtopncontrolgeneratedreports.yfilter)
	|| ydk::is_set(almatrixtopncontrolgrantedsize.yfilter)
	|| ydk::is_set(almatrixtopncontrolmatrixindex.yfilter)
	|| ydk::is_set(almatrixtopncontrolowner.yfilter)
	|| ydk::is_set(almatrixtopncontrolratebase.yfilter)
	|| ydk::is_set(almatrixtopncontrolrequestedsize.yfilter)
	|| ydk::is_set(almatrixtopncontrolstarttime.yfilter)
	|| ydk::is_set(almatrixtopncontrolstatus.yfilter)
	|| ydk::is_set(almatrixtopncontroltimeremaining.yfilter);
}

std::string RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixTopNControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNControlEntry" <<"[alMatrixTopNControlIndex='" <<almatrixtopncontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (almatrixtopncontrolindex.is_set || is_set(almatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(almatrixtopncontrolindex.get_name_leafdata());
    if (almatrixtopncontrolduration.is_set || is_set(almatrixtopncontrolduration.yfilter)) leaf_name_data.push_back(almatrixtopncontrolduration.get_name_leafdata());
    if (almatrixtopncontrolgeneratedreports.is_set || is_set(almatrixtopncontrolgeneratedreports.yfilter)) leaf_name_data.push_back(almatrixtopncontrolgeneratedreports.get_name_leafdata());
    if (almatrixtopncontrolgrantedsize.is_set || is_set(almatrixtopncontrolgrantedsize.yfilter)) leaf_name_data.push_back(almatrixtopncontrolgrantedsize.get_name_leafdata());
    if (almatrixtopncontrolmatrixindex.is_set || is_set(almatrixtopncontrolmatrixindex.yfilter)) leaf_name_data.push_back(almatrixtopncontrolmatrixindex.get_name_leafdata());
    if (almatrixtopncontrolowner.is_set || is_set(almatrixtopncontrolowner.yfilter)) leaf_name_data.push_back(almatrixtopncontrolowner.get_name_leafdata());
    if (almatrixtopncontrolratebase.is_set || is_set(almatrixtopncontrolratebase.yfilter)) leaf_name_data.push_back(almatrixtopncontrolratebase.get_name_leafdata());
    if (almatrixtopncontrolrequestedsize.is_set || is_set(almatrixtopncontrolrequestedsize.yfilter)) leaf_name_data.push_back(almatrixtopncontrolrequestedsize.get_name_leafdata());
    if (almatrixtopncontrolstarttime.is_set || is_set(almatrixtopncontrolstarttime.yfilter)) leaf_name_data.push_back(almatrixtopncontrolstarttime.get_name_leafdata());
    if (almatrixtopncontrolstatus.is_set || is_set(almatrixtopncontrolstatus.yfilter)) leaf_name_data.push_back(almatrixtopncontrolstatus.get_name_leafdata());
    if (almatrixtopncontroltimeremaining.is_set || is_set(almatrixtopncontroltimeremaining.yfilter)) leaf_name_data.push_back(almatrixtopncontroltimeremaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alMatrixTopNControlIndex")
    {
        almatrixtopncontrolindex = value;
        almatrixtopncontrolindex.value_namespace = name_space;
        almatrixtopncontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlDuration")
    {
        almatrixtopncontrolduration = value;
        almatrixtopncontrolduration.value_namespace = name_space;
        almatrixtopncontrolduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlGeneratedReports")
    {
        almatrixtopncontrolgeneratedreports = value;
        almatrixtopncontrolgeneratedreports.value_namespace = name_space;
        almatrixtopncontrolgeneratedreports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlGrantedSize")
    {
        almatrixtopncontrolgrantedsize = value;
        almatrixtopncontrolgrantedsize.value_namespace = name_space;
        almatrixtopncontrolgrantedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlMatrixIndex")
    {
        almatrixtopncontrolmatrixindex = value;
        almatrixtopncontrolmatrixindex.value_namespace = name_space;
        almatrixtopncontrolmatrixindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlOwner")
    {
        almatrixtopncontrolowner = value;
        almatrixtopncontrolowner.value_namespace = name_space;
        almatrixtopncontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlRateBase")
    {
        almatrixtopncontrolratebase = value;
        almatrixtopncontrolratebase.value_namespace = name_space;
        almatrixtopncontrolratebase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlRequestedSize")
    {
        almatrixtopncontrolrequestedsize = value;
        almatrixtopncontrolrequestedsize.value_namespace = name_space;
        almatrixtopncontrolrequestedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlStartTime")
    {
        almatrixtopncontrolstarttime = value;
        almatrixtopncontrolstarttime.value_namespace = name_space;
        almatrixtopncontrolstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlStatus")
    {
        almatrixtopncontrolstatus = value;
        almatrixtopncontrolstatus.value_namespace = name_space;
        almatrixtopncontrolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlTimeRemaining")
    {
        almatrixtopncontroltimeremaining = value;
        almatrixtopncontroltimeremaining.value_namespace = name_space;
        almatrixtopncontroltimeremaining.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alMatrixTopNControlIndex")
    {
        almatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlDuration")
    {
        almatrixtopncontrolduration.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlGeneratedReports")
    {
        almatrixtopncontrolgeneratedreports.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlGrantedSize")
    {
        almatrixtopncontrolgrantedsize.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlMatrixIndex")
    {
        almatrixtopncontrolmatrixindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlOwner")
    {
        almatrixtopncontrolowner.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlRateBase")
    {
        almatrixtopncontrolratebase.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlRequestedSize")
    {
        almatrixtopncontrolrequestedsize.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlStartTime")
    {
        almatrixtopncontrolstarttime.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlStatus")
    {
        almatrixtopncontrolstatus.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlTimeRemaining")
    {
        almatrixtopncontroltimeremaining.yfilter = yfilter;
    }
}

bool RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNControlIndex" || name == "alMatrixTopNControlDuration" || name == "alMatrixTopNControlGeneratedReports" || name == "alMatrixTopNControlGrantedSize" || name == "alMatrixTopNControlMatrixIndex" || name == "alMatrixTopNControlOwner" || name == "alMatrixTopNControlRateBase" || name == "alMatrixTopNControlRequestedSize" || name == "alMatrixTopNControlStartTime" || name == "alMatrixTopNControlStatus" || name == "alMatrixTopNControlTimeRemaining")
        return true;
    return false;
}

RMON2MIB::Almatrixtopntable::Almatrixtopntable()
{

    yang_name = "alMatrixTopNTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixtopntable::~Almatrixtopntable()
{
}

bool RMON2MIB::Almatrixtopntable::has_data() const
{
    for (std::size_t index=0; index<almatrixtopnentry.size(); index++)
    {
        if(almatrixtopnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Almatrixtopntable::has_operation() const
{
    for (std::size_t index=0; index<almatrixtopnentry.size(); index++)
    {
        if(almatrixtopnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Almatrixtopntable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixtopntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixtopntable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixtopntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixTopNEntry")
    {
        for(auto const & c : almatrixtopnentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Almatrixtopntable::Almatrixtopnentry>();
        c->parent = this;
        almatrixtopnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixtopntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : almatrixtopnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Almatrixtopntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Almatrixtopntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Almatrixtopntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNEntry")
        return true;
    return false;
}

RMON2MIB::Almatrixtopntable::Almatrixtopnentry::Almatrixtopnentry()
    :
    almatrixtopncontrolindex{YType::str, "alMatrixTopNControlIndex"},
    almatrixtopnindex{YType::int32, "alMatrixTopNIndex"},
    almatrixtopnappprotocoldirlocalindex{YType::int32, "alMatrixTopNAppProtocolDirLocalIndex"},
    almatrixtopndestaddress{YType::str, "alMatrixTopNDestAddress"},
    almatrixtopnoctetrate{YType::uint32, "alMatrixTopNOctetRate"},
    almatrixtopnpktrate{YType::uint32, "alMatrixTopNPktRate"},
    almatrixtopnprotocoldirlocalindex{YType::int32, "alMatrixTopNProtocolDirLocalIndex"},
    almatrixtopnreverseoctetrate{YType::uint32, "alMatrixTopNReverseOctetRate"},
    almatrixtopnreversepktrate{YType::uint32, "alMatrixTopNReversePktRate"},
    almatrixtopnsourceaddress{YType::str, "alMatrixTopNSourceAddress"}
{

    yang_name = "alMatrixTopNEntry"; yang_parent_name = "alMatrixTopNTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Almatrixtopntable::Almatrixtopnentry::~Almatrixtopnentry()
{
}

bool RMON2MIB::Almatrixtopntable::Almatrixtopnentry::has_data() const
{
    return almatrixtopncontrolindex.is_set
	|| almatrixtopnindex.is_set
	|| almatrixtopnappprotocoldirlocalindex.is_set
	|| almatrixtopndestaddress.is_set
	|| almatrixtopnoctetrate.is_set
	|| almatrixtopnpktrate.is_set
	|| almatrixtopnprotocoldirlocalindex.is_set
	|| almatrixtopnreverseoctetrate.is_set
	|| almatrixtopnreversepktrate.is_set
	|| almatrixtopnsourceaddress.is_set;
}

bool RMON2MIB::Almatrixtopntable::Almatrixtopnentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(almatrixtopncontrolindex.yfilter)
	|| ydk::is_set(almatrixtopnindex.yfilter)
	|| ydk::is_set(almatrixtopnappprotocoldirlocalindex.yfilter)
	|| ydk::is_set(almatrixtopndestaddress.yfilter)
	|| ydk::is_set(almatrixtopnoctetrate.yfilter)
	|| ydk::is_set(almatrixtopnpktrate.yfilter)
	|| ydk::is_set(almatrixtopnprotocoldirlocalindex.yfilter)
	|| ydk::is_set(almatrixtopnreverseoctetrate.yfilter)
	|| ydk::is_set(almatrixtopnreversepktrate.yfilter)
	|| ydk::is_set(almatrixtopnsourceaddress.yfilter);
}

std::string RMON2MIB::Almatrixtopntable::Almatrixtopnentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixTopNTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Almatrixtopntable::Almatrixtopnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNEntry" <<"[alMatrixTopNControlIndex='" <<almatrixtopncontrolindex <<"']" <<"[alMatrixTopNIndex='" <<almatrixtopnindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Almatrixtopntable::Almatrixtopnentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (almatrixtopncontrolindex.is_set || is_set(almatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(almatrixtopncontrolindex.get_name_leafdata());
    if (almatrixtopnindex.is_set || is_set(almatrixtopnindex.yfilter)) leaf_name_data.push_back(almatrixtopnindex.get_name_leafdata());
    if (almatrixtopnappprotocoldirlocalindex.is_set || is_set(almatrixtopnappprotocoldirlocalindex.yfilter)) leaf_name_data.push_back(almatrixtopnappprotocoldirlocalindex.get_name_leafdata());
    if (almatrixtopndestaddress.is_set || is_set(almatrixtopndestaddress.yfilter)) leaf_name_data.push_back(almatrixtopndestaddress.get_name_leafdata());
    if (almatrixtopnoctetrate.is_set || is_set(almatrixtopnoctetrate.yfilter)) leaf_name_data.push_back(almatrixtopnoctetrate.get_name_leafdata());
    if (almatrixtopnpktrate.is_set || is_set(almatrixtopnpktrate.yfilter)) leaf_name_data.push_back(almatrixtopnpktrate.get_name_leafdata());
    if (almatrixtopnprotocoldirlocalindex.is_set || is_set(almatrixtopnprotocoldirlocalindex.yfilter)) leaf_name_data.push_back(almatrixtopnprotocoldirlocalindex.get_name_leafdata());
    if (almatrixtopnreverseoctetrate.is_set || is_set(almatrixtopnreverseoctetrate.yfilter)) leaf_name_data.push_back(almatrixtopnreverseoctetrate.get_name_leafdata());
    if (almatrixtopnreversepktrate.is_set || is_set(almatrixtopnreversepktrate.yfilter)) leaf_name_data.push_back(almatrixtopnreversepktrate.get_name_leafdata());
    if (almatrixtopnsourceaddress.is_set || is_set(almatrixtopnsourceaddress.yfilter)) leaf_name_data.push_back(almatrixtopnsourceaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Almatrixtopntable::Almatrixtopnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Almatrixtopntable::Almatrixtopnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Almatrixtopntable::Almatrixtopnentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alMatrixTopNControlIndex")
    {
        almatrixtopncontrolindex = value;
        almatrixtopncontrolindex.value_namespace = name_space;
        almatrixtopncontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNIndex")
    {
        almatrixtopnindex = value;
        almatrixtopnindex.value_namespace = name_space;
        almatrixtopnindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNAppProtocolDirLocalIndex")
    {
        almatrixtopnappprotocoldirlocalindex = value;
        almatrixtopnappprotocoldirlocalindex.value_namespace = name_space;
        almatrixtopnappprotocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNDestAddress")
    {
        almatrixtopndestaddress = value;
        almatrixtopndestaddress.value_namespace = name_space;
        almatrixtopndestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNOctetRate")
    {
        almatrixtopnoctetrate = value;
        almatrixtopnoctetrate.value_namespace = name_space;
        almatrixtopnoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNPktRate")
    {
        almatrixtopnpktrate = value;
        almatrixtopnpktrate.value_namespace = name_space;
        almatrixtopnpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNProtocolDirLocalIndex")
    {
        almatrixtopnprotocoldirlocalindex = value;
        almatrixtopnprotocoldirlocalindex.value_namespace = name_space;
        almatrixtopnprotocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNReverseOctetRate")
    {
        almatrixtopnreverseoctetrate = value;
        almatrixtopnreverseoctetrate.value_namespace = name_space;
        almatrixtopnreverseoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNReversePktRate")
    {
        almatrixtopnreversepktrate = value;
        almatrixtopnreversepktrate.value_namespace = name_space;
        almatrixtopnreversepktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNSourceAddress")
    {
        almatrixtopnsourceaddress = value;
        almatrixtopnsourceaddress.value_namespace = name_space;
        almatrixtopnsourceaddress.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Almatrixtopntable::Almatrixtopnentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alMatrixTopNControlIndex")
    {
        almatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNIndex")
    {
        almatrixtopnindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNAppProtocolDirLocalIndex")
    {
        almatrixtopnappprotocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNDestAddress")
    {
        almatrixtopndestaddress.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNOctetRate")
    {
        almatrixtopnoctetrate.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNPktRate")
    {
        almatrixtopnpktrate.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNProtocolDirLocalIndex")
    {
        almatrixtopnprotocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNReverseOctetRate")
    {
        almatrixtopnreverseoctetrate.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNReversePktRate")
    {
        almatrixtopnreversepktrate.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNSourceAddress")
    {
        almatrixtopnsourceaddress.yfilter = yfilter;
    }
}

bool RMON2MIB::Almatrixtopntable::Almatrixtopnentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNControlIndex" || name == "alMatrixTopNIndex" || name == "alMatrixTopNAppProtocolDirLocalIndex" || name == "alMatrixTopNDestAddress" || name == "alMatrixTopNOctetRate" || name == "alMatrixTopNPktRate" || name == "alMatrixTopNProtocolDirLocalIndex" || name == "alMatrixTopNReverseOctetRate" || name == "alMatrixTopNReversePktRate" || name == "alMatrixTopNSourceAddress")
        return true;
    return false;
}

RMON2MIB::Hlhostcontroltable::Hlhostcontroltable()
{

    yang_name = "hlHostControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Hlhostcontroltable::~Hlhostcontroltable()
{
}

bool RMON2MIB::Hlhostcontroltable::has_data() const
{
    for (std::size_t index=0; index<hlhostcontrolentry.size(); index++)
    {
        if(hlhostcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Hlhostcontroltable::has_operation() const
{
    for (std::size_t index=0; index<hlhostcontrolentry.size(); index++)
    {
        if(hlhostcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Hlhostcontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Hlhostcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlHostControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Hlhostcontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Hlhostcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hlHostControlEntry")
    {
        for(auto const & c : hlhostcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry>();
        c->parent = this;
        hlhostcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Hlhostcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hlhostcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Hlhostcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Hlhostcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Hlhostcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlEntry")
        return true;
    return false;
}

RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::Hlhostcontrolentry()
    :
    hlhostcontrolindex{YType::int32, "hlHostControlIndex"},
    hlhostcontrolaldeletes{YType::uint32, "hlHostControlAlDeletes"},
    hlhostcontrolaldroppedframes{YType::uint32, "hlHostControlAlDroppedFrames"},
    hlhostcontrolalinserts{YType::uint32, "hlHostControlAlInserts"},
    hlhostcontrolalmaxdesiredentries{YType::int32, "hlHostControlAlMaxDesiredEntries"},
    hlhostcontroldatasource{YType::str, "hlHostControlDataSource"},
    hlhostcontrolnldeletes{YType::uint32, "hlHostControlNlDeletes"},
    hlhostcontrolnldroppedframes{YType::uint32, "hlHostControlNlDroppedFrames"},
    hlhostcontrolnlinserts{YType::uint32, "hlHostControlNlInserts"},
    hlhostcontrolnlmaxdesiredentries{YType::int32, "hlHostControlNlMaxDesiredEntries"},
    hlhostcontrolowner{YType::str, "hlHostControlOwner"},
    hlhostcontrolstatus{YType::enumeration, "hlHostControlStatus"}
{

    yang_name = "hlHostControlEntry"; yang_parent_name = "hlHostControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::~Hlhostcontrolentry()
{
}

bool RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::has_data() const
{
    return hlhostcontrolindex.is_set
	|| hlhostcontrolaldeletes.is_set
	|| hlhostcontrolaldroppedframes.is_set
	|| hlhostcontrolalinserts.is_set
	|| hlhostcontrolalmaxdesiredentries.is_set
	|| hlhostcontroldatasource.is_set
	|| hlhostcontrolnldeletes.is_set
	|| hlhostcontrolnldroppedframes.is_set
	|| hlhostcontrolnlinserts.is_set
	|| hlhostcontrolnlmaxdesiredentries.is_set
	|| hlhostcontrolowner.is_set
	|| hlhostcontrolstatus.is_set;
}

bool RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlhostcontrolindex.yfilter)
	|| ydk::is_set(hlhostcontrolaldeletes.yfilter)
	|| ydk::is_set(hlhostcontrolaldroppedframes.yfilter)
	|| ydk::is_set(hlhostcontrolalinserts.yfilter)
	|| ydk::is_set(hlhostcontrolalmaxdesiredentries.yfilter)
	|| ydk::is_set(hlhostcontroldatasource.yfilter)
	|| ydk::is_set(hlhostcontrolnldeletes.yfilter)
	|| ydk::is_set(hlhostcontrolnldroppedframes.yfilter)
	|| ydk::is_set(hlhostcontrolnlinserts.yfilter)
	|| ydk::is_set(hlhostcontrolnlmaxdesiredentries.yfilter)
	|| ydk::is_set(hlhostcontrolowner.yfilter)
	|| ydk::is_set(hlhostcontrolstatus.yfilter);
}

std::string RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/hlHostControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlHostControlEntry" <<"[hlHostControlIndex='" <<hlhostcontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlhostcontrolindex.is_set || is_set(hlhostcontrolindex.yfilter)) leaf_name_data.push_back(hlhostcontrolindex.get_name_leafdata());
    if (hlhostcontrolaldeletes.is_set || is_set(hlhostcontrolaldeletes.yfilter)) leaf_name_data.push_back(hlhostcontrolaldeletes.get_name_leafdata());
    if (hlhostcontrolaldroppedframes.is_set || is_set(hlhostcontrolaldroppedframes.yfilter)) leaf_name_data.push_back(hlhostcontrolaldroppedframes.get_name_leafdata());
    if (hlhostcontrolalinserts.is_set || is_set(hlhostcontrolalinserts.yfilter)) leaf_name_data.push_back(hlhostcontrolalinserts.get_name_leafdata());
    if (hlhostcontrolalmaxdesiredentries.is_set || is_set(hlhostcontrolalmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlhostcontrolalmaxdesiredentries.get_name_leafdata());
    if (hlhostcontroldatasource.is_set || is_set(hlhostcontroldatasource.yfilter)) leaf_name_data.push_back(hlhostcontroldatasource.get_name_leafdata());
    if (hlhostcontrolnldeletes.is_set || is_set(hlhostcontrolnldeletes.yfilter)) leaf_name_data.push_back(hlhostcontrolnldeletes.get_name_leafdata());
    if (hlhostcontrolnldroppedframes.is_set || is_set(hlhostcontrolnldroppedframes.yfilter)) leaf_name_data.push_back(hlhostcontrolnldroppedframes.get_name_leafdata());
    if (hlhostcontrolnlinserts.is_set || is_set(hlhostcontrolnlinserts.yfilter)) leaf_name_data.push_back(hlhostcontrolnlinserts.get_name_leafdata());
    if (hlhostcontrolnlmaxdesiredentries.is_set || is_set(hlhostcontrolnlmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlhostcontrolnlmaxdesiredentries.get_name_leafdata());
    if (hlhostcontrolowner.is_set || is_set(hlhostcontrolowner.yfilter)) leaf_name_data.push_back(hlhostcontrolowner.get_name_leafdata());
    if (hlhostcontrolstatus.is_set || is_set(hlhostcontrolstatus.yfilter)) leaf_name_data.push_back(hlhostcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex = value;
        hlhostcontrolindex.value_namespace = name_space;
        hlhostcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlAlDeletes")
    {
        hlhostcontrolaldeletes = value;
        hlhostcontrolaldeletes.value_namespace = name_space;
        hlhostcontrolaldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlAlDroppedFrames")
    {
        hlhostcontrolaldroppedframes = value;
        hlhostcontrolaldroppedframes.value_namespace = name_space;
        hlhostcontrolaldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlAlInserts")
    {
        hlhostcontrolalinserts = value;
        hlhostcontrolalinserts.value_namespace = name_space;
        hlhostcontrolalinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlAlMaxDesiredEntries")
    {
        hlhostcontrolalmaxdesiredentries = value;
        hlhostcontrolalmaxdesiredentries.value_namespace = name_space;
        hlhostcontrolalmaxdesiredentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlDataSource")
    {
        hlhostcontroldatasource = value;
        hlhostcontroldatasource.value_namespace = name_space;
        hlhostcontroldatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlNlDeletes")
    {
        hlhostcontrolnldeletes = value;
        hlhostcontrolnldeletes.value_namespace = name_space;
        hlhostcontrolnldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlNlDroppedFrames")
    {
        hlhostcontrolnldroppedframes = value;
        hlhostcontrolnldroppedframes.value_namespace = name_space;
        hlhostcontrolnldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlNlInserts")
    {
        hlhostcontrolnlinserts = value;
        hlhostcontrolnlinserts.value_namespace = name_space;
        hlhostcontrolnlinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlNlMaxDesiredEntries")
    {
        hlhostcontrolnlmaxdesiredentries = value;
        hlhostcontrolnlmaxdesiredentries.value_namespace = name_space;
        hlhostcontrolnlmaxdesiredentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlOwner")
    {
        hlhostcontrolowner = value;
        hlhostcontrolowner.value_namespace = name_space;
        hlhostcontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlStatus")
    {
        hlhostcontrolstatus = value;
        hlhostcontrolstatus.value_namespace = name_space;
        hlhostcontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlDeletes")
    {
        hlhostcontrolaldeletes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlDroppedFrames")
    {
        hlhostcontrolaldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlInserts")
    {
        hlhostcontrolalinserts.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlMaxDesiredEntries")
    {
        hlhostcontrolalmaxdesiredentries.yfilter = yfilter;
    }
    if(value_path == "hlHostControlDataSource")
    {
        hlhostcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlDeletes")
    {
        hlhostcontrolnldeletes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlDroppedFrames")
    {
        hlhostcontrolnldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlInserts")
    {
        hlhostcontrolnlinserts.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlMaxDesiredEntries")
    {
        hlhostcontrolnlmaxdesiredentries.yfilter = yfilter;
    }
    if(value_path == "hlHostControlOwner")
    {
        hlhostcontrolowner.yfilter = yfilter;
    }
    if(value_path == "hlHostControlStatus")
    {
        hlhostcontrolstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlIndex" || name == "hlHostControlAlDeletes" || name == "hlHostControlAlDroppedFrames" || name == "hlHostControlAlInserts" || name == "hlHostControlAlMaxDesiredEntries" || name == "hlHostControlDataSource" || name == "hlHostControlNlDeletes" || name == "hlHostControlNlDroppedFrames" || name == "hlHostControlNlInserts" || name == "hlHostControlNlMaxDesiredEntries" || name == "hlHostControlOwner" || name == "hlHostControlStatus")
        return true;
    return false;
}

RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontroltable()
{

    yang_name = "hlMatrixControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Hlmatrixcontroltable::~Hlmatrixcontroltable()
{
}

bool RMON2MIB::Hlmatrixcontroltable::has_data() const
{
    for (std::size_t index=0; index<hlmatrixcontrolentry.size(); index++)
    {
        if(hlmatrixcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Hlmatrixcontroltable::has_operation() const
{
    for (std::size_t index=0; index<hlmatrixcontrolentry.size(); index++)
    {
        if(hlmatrixcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Hlmatrixcontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Hlmatrixcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlMatrixControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Hlmatrixcontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Hlmatrixcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hlMatrixControlEntry")
    {
        for(auto const & c : hlmatrixcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry>();
        c->parent = this;
        hlmatrixcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Hlmatrixcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hlmatrixcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Hlmatrixcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Hlmatrixcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Hlmatrixcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlEntry")
        return true;
    return false;
}

RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::Hlmatrixcontrolentry()
    :
    hlmatrixcontrolindex{YType::int32, "hlMatrixControlIndex"},
    hlmatrixcontrolaldeletes{YType::uint32, "hlMatrixControlAlDeletes"},
    hlmatrixcontrolaldroppedframes{YType::uint32, "hlMatrixControlAlDroppedFrames"},
    hlmatrixcontrolalinserts{YType::uint32, "hlMatrixControlAlInserts"},
    hlmatrixcontrolalmaxdesiredentries{YType::int32, "hlMatrixControlAlMaxDesiredEntries"},
    hlmatrixcontroldatasource{YType::str, "hlMatrixControlDataSource"},
    hlmatrixcontrolnldeletes{YType::uint32, "hlMatrixControlNlDeletes"},
    hlmatrixcontrolnldroppedframes{YType::uint32, "hlMatrixControlNlDroppedFrames"},
    hlmatrixcontrolnlinserts{YType::uint32, "hlMatrixControlNlInserts"},
    hlmatrixcontrolnlmaxdesiredentries{YType::int32, "hlMatrixControlNlMaxDesiredEntries"},
    hlmatrixcontrolowner{YType::str, "hlMatrixControlOwner"},
    hlmatrixcontrolstatus{YType::enumeration, "hlMatrixControlStatus"}
{

    yang_name = "hlMatrixControlEntry"; yang_parent_name = "hlMatrixControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::~Hlmatrixcontrolentry()
{
}

bool RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::has_data() const
{
    return hlmatrixcontrolindex.is_set
	|| hlmatrixcontrolaldeletes.is_set
	|| hlmatrixcontrolaldroppedframes.is_set
	|| hlmatrixcontrolalinserts.is_set
	|| hlmatrixcontrolalmaxdesiredentries.is_set
	|| hlmatrixcontroldatasource.is_set
	|| hlmatrixcontrolnldeletes.is_set
	|| hlmatrixcontrolnldroppedframes.is_set
	|| hlmatrixcontrolnlinserts.is_set
	|| hlmatrixcontrolnlmaxdesiredentries.is_set
	|| hlmatrixcontrolowner.is_set
	|| hlmatrixcontrolstatus.is_set;
}

bool RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(hlmatrixcontrolaldeletes.yfilter)
	|| ydk::is_set(hlmatrixcontrolaldroppedframes.yfilter)
	|| ydk::is_set(hlmatrixcontrolalinserts.yfilter)
	|| ydk::is_set(hlmatrixcontrolalmaxdesiredentries.yfilter)
	|| ydk::is_set(hlmatrixcontroldatasource.yfilter)
	|| ydk::is_set(hlmatrixcontrolnldeletes.yfilter)
	|| ydk::is_set(hlmatrixcontrolnldroppedframes.yfilter)
	|| ydk::is_set(hlmatrixcontrolnlinserts.yfilter)
	|| ydk::is_set(hlmatrixcontrolnlmaxdesiredentries.yfilter)
	|| ydk::is_set(hlmatrixcontrolowner.yfilter)
	|| ydk::is_set(hlmatrixcontrolstatus.yfilter);
}

std::string RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/hlMatrixControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlMatrixControlEntry" <<"[hlMatrixControlIndex='" <<hlmatrixcontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (hlmatrixcontrolaldeletes.is_set || is_set(hlmatrixcontrolaldeletes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolaldeletes.get_name_leafdata());
    if (hlmatrixcontrolaldroppedframes.is_set || is_set(hlmatrixcontrolaldroppedframes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolaldroppedframes.get_name_leafdata());
    if (hlmatrixcontrolalinserts.is_set || is_set(hlmatrixcontrolalinserts.yfilter)) leaf_name_data.push_back(hlmatrixcontrolalinserts.get_name_leafdata());
    if (hlmatrixcontrolalmaxdesiredentries.is_set || is_set(hlmatrixcontrolalmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlmatrixcontrolalmaxdesiredentries.get_name_leafdata());
    if (hlmatrixcontroldatasource.is_set || is_set(hlmatrixcontroldatasource.yfilter)) leaf_name_data.push_back(hlmatrixcontroldatasource.get_name_leafdata());
    if (hlmatrixcontrolnldeletes.is_set || is_set(hlmatrixcontrolnldeletes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnldeletes.get_name_leafdata());
    if (hlmatrixcontrolnldroppedframes.is_set || is_set(hlmatrixcontrolnldroppedframes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnldroppedframes.get_name_leafdata());
    if (hlmatrixcontrolnlinserts.is_set || is_set(hlmatrixcontrolnlinserts.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnlinserts.get_name_leafdata());
    if (hlmatrixcontrolnlmaxdesiredentries.is_set || is_set(hlmatrixcontrolnlmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnlmaxdesiredentries.get_name_leafdata());
    if (hlmatrixcontrolowner.is_set || is_set(hlmatrixcontrolowner.yfilter)) leaf_name_data.push_back(hlmatrixcontrolowner.get_name_leafdata());
    if (hlmatrixcontrolstatus.is_set || is_set(hlmatrixcontrolstatus.yfilter)) leaf_name_data.push_back(hlmatrixcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex = value;
        hlmatrixcontrolindex.value_namespace = name_space;
        hlmatrixcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlAlDeletes")
    {
        hlmatrixcontrolaldeletes = value;
        hlmatrixcontrolaldeletes.value_namespace = name_space;
        hlmatrixcontrolaldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlAlDroppedFrames")
    {
        hlmatrixcontrolaldroppedframes = value;
        hlmatrixcontrolaldroppedframes.value_namespace = name_space;
        hlmatrixcontrolaldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlAlInserts")
    {
        hlmatrixcontrolalinserts = value;
        hlmatrixcontrolalinserts.value_namespace = name_space;
        hlmatrixcontrolalinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlAlMaxDesiredEntries")
    {
        hlmatrixcontrolalmaxdesiredentries = value;
        hlmatrixcontrolalmaxdesiredentries.value_namespace = name_space;
        hlmatrixcontrolalmaxdesiredentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlDataSource")
    {
        hlmatrixcontroldatasource = value;
        hlmatrixcontroldatasource.value_namespace = name_space;
        hlmatrixcontroldatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlNlDeletes")
    {
        hlmatrixcontrolnldeletes = value;
        hlmatrixcontrolnldeletes.value_namespace = name_space;
        hlmatrixcontrolnldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlNlDroppedFrames")
    {
        hlmatrixcontrolnldroppedframes = value;
        hlmatrixcontrolnldroppedframes.value_namespace = name_space;
        hlmatrixcontrolnldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlNlInserts")
    {
        hlmatrixcontrolnlinserts = value;
        hlmatrixcontrolnlinserts.value_namespace = name_space;
        hlmatrixcontrolnlinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlNlMaxDesiredEntries")
    {
        hlmatrixcontrolnlmaxdesiredentries = value;
        hlmatrixcontrolnlmaxdesiredentries.value_namespace = name_space;
        hlmatrixcontrolnlmaxdesiredentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlOwner")
    {
        hlmatrixcontrolowner = value;
        hlmatrixcontrolowner.value_namespace = name_space;
        hlmatrixcontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlStatus")
    {
        hlmatrixcontrolstatus = value;
        hlmatrixcontrolstatus.value_namespace = name_space;
        hlmatrixcontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlDeletes")
    {
        hlmatrixcontrolaldeletes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlDroppedFrames")
    {
        hlmatrixcontrolaldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlInserts")
    {
        hlmatrixcontrolalinserts.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlMaxDesiredEntries")
    {
        hlmatrixcontrolalmaxdesiredentries.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlDataSource")
    {
        hlmatrixcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlDeletes")
    {
        hlmatrixcontrolnldeletes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlDroppedFrames")
    {
        hlmatrixcontrolnldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlInserts")
    {
        hlmatrixcontrolnlinserts.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlMaxDesiredEntries")
    {
        hlmatrixcontrolnlmaxdesiredentries.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlOwner")
    {
        hlmatrixcontrolowner.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlStatus")
    {
        hlmatrixcontrolstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "hlMatrixControlAlDeletes" || name == "hlMatrixControlAlDroppedFrames" || name == "hlMatrixControlAlInserts" || name == "hlMatrixControlAlMaxDesiredEntries" || name == "hlMatrixControlDataSource" || name == "hlMatrixControlNlDeletes" || name == "hlMatrixControlNlDroppedFrames" || name == "hlMatrixControlNlInserts" || name == "hlMatrixControlNlMaxDesiredEntries" || name == "hlMatrixControlOwner" || name == "hlMatrixControlStatus")
        return true;
    return false;
}

RMON2MIB::Netconfigtable::Netconfigtable()
{

    yang_name = "netConfigTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Netconfigtable::~Netconfigtable()
{
}

bool RMON2MIB::Netconfigtable::has_data() const
{
    for (std::size_t index=0; index<netconfigentry.size(); index++)
    {
        if(netconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Netconfigtable::has_operation() const
{
    for (std::size_t index=0; index<netconfigentry.size(); index++)
    {
        if(netconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Netconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Netconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Netconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Netconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netConfigEntry")
    {
        for(auto const & c : netconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Netconfigtable::Netconfigentry>();
        c->parent = this;
        netconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Netconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : netconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Netconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Netconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Netconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netConfigEntry")
        return true;
    return false;
}

RMON2MIB::Netconfigtable::Netconfigentry::Netconfigentry()
    :
    ifindex{YType::str, "ifIndex"},
    netconfigipaddress{YType::str, "netConfigIPAddress"},
    netconfigstatus{YType::enumeration, "netConfigStatus"},
    netconfigsubnetmask{YType::str, "netConfigSubnetMask"}
{

    yang_name = "netConfigEntry"; yang_parent_name = "netConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Netconfigtable::Netconfigentry::~Netconfigentry()
{
}

bool RMON2MIB::Netconfigtable::Netconfigentry::has_data() const
{
    return ifindex.is_set
	|| netconfigipaddress.is_set
	|| netconfigstatus.is_set
	|| netconfigsubnetmask.is_set;
}

bool RMON2MIB::Netconfigtable::Netconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(netconfigipaddress.yfilter)
	|| ydk::is_set(netconfigstatus.yfilter)
	|| ydk::is_set(netconfigsubnetmask.yfilter);
}

std::string RMON2MIB::Netconfigtable::Netconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/netConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Netconfigtable::Netconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netConfigEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Netconfigtable::Netconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (netconfigipaddress.is_set || is_set(netconfigipaddress.yfilter)) leaf_name_data.push_back(netconfigipaddress.get_name_leafdata());
    if (netconfigstatus.is_set || is_set(netconfigstatus.yfilter)) leaf_name_data.push_back(netconfigstatus.get_name_leafdata());
    if (netconfigsubnetmask.is_set || is_set(netconfigsubnetmask.yfilter)) leaf_name_data.push_back(netconfigsubnetmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Netconfigtable::Netconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Netconfigtable::Netconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Netconfigtable::Netconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netConfigIPAddress")
    {
        netconfigipaddress = value;
        netconfigipaddress.value_namespace = name_space;
        netconfigipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netConfigStatus")
    {
        netconfigstatus = value;
        netconfigstatus.value_namespace = name_space;
        netconfigstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netConfigSubnetMask")
    {
        netconfigsubnetmask = value;
        netconfigsubnetmask.value_namespace = name_space;
        netconfigsubnetmask.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Netconfigtable::Netconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "netConfigIPAddress")
    {
        netconfigipaddress.yfilter = yfilter;
    }
    if(value_path == "netConfigStatus")
    {
        netconfigstatus.yfilter = yfilter;
    }
    if(value_path == "netConfigSubnetMask")
    {
        netconfigsubnetmask.yfilter = yfilter;
    }
}

bool RMON2MIB::Netconfigtable::Netconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "netConfigIPAddress" || name == "netConfigStatus" || name == "netConfigSubnetMask")
        return true;
    return false;
}

RMON2MIB::Nlhosttable::Nlhosttable()
{

    yang_name = "nlHostTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlhosttable::~Nlhosttable()
{
}

bool RMON2MIB::Nlhosttable::has_data() const
{
    for (std::size_t index=0; index<nlhostentry.size(); index++)
    {
        if(nlhostentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Nlhosttable::has_operation() const
{
    for (std::size_t index=0; index<nlhostentry.size(); index++)
    {
        if(nlhostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Nlhosttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlhosttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlHostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlhosttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlhosttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlHostEntry")
    {
        for(auto const & c : nlhostentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Nlhosttable::Nlhostentry>();
        c->parent = this;
        nlhostentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlhosttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlhostentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Nlhosttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Nlhosttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Nlhosttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlHostEntry")
        return true;
    return false;
}

RMON2MIB::Nlhosttable::Nlhostentry::Nlhostentry()
    :
    hlhostcontrolindex{YType::str, "hlHostControlIndex"},
    nlhosttimemark{YType::uint32, "nlHostTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlhostaddress{YType::str, "nlHostAddress"},
    nlhostcreatetime{YType::uint32, "nlHostCreateTime"},
    nlhostinoctets{YType::uint32, "nlHostInOctets"},
    nlhostinpkts{YType::uint32, "nlHostInPkts"},
    nlhostoutmacnonunicastpkts{YType::uint32, "nlHostOutMacNonUnicastPkts"},
    nlhostoutoctets{YType::uint32, "nlHostOutOctets"},
    nlhostoutpkts{YType::uint32, "nlHostOutPkts"}
{

    yang_name = "nlHostEntry"; yang_parent_name = "nlHostTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlhosttable::Nlhostentry::~Nlhostentry()
{
}

bool RMON2MIB::Nlhosttable::Nlhostentry::has_data() const
{
    return hlhostcontrolindex.is_set
	|| nlhosttimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlhostaddress.is_set
	|| nlhostcreatetime.is_set
	|| nlhostinoctets.is_set
	|| nlhostinpkts.is_set
	|| nlhostoutmacnonunicastpkts.is_set
	|| nlhostoutoctets.is_set
	|| nlhostoutpkts.is_set;
}

bool RMON2MIB::Nlhosttable::Nlhostentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlhostcontrolindex.yfilter)
	|| ydk::is_set(nlhosttimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlhostaddress.yfilter)
	|| ydk::is_set(nlhostcreatetime.yfilter)
	|| ydk::is_set(nlhostinoctets.yfilter)
	|| ydk::is_set(nlhostinpkts.yfilter)
	|| ydk::is_set(nlhostoutmacnonunicastpkts.yfilter)
	|| ydk::is_set(nlhostoutoctets.yfilter)
	|| ydk::is_set(nlhostoutpkts.yfilter);
}

std::string RMON2MIB::Nlhosttable::Nlhostentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlHostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlhosttable::Nlhostentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlHostEntry" <<"[hlHostControlIndex='" <<hlhostcontrolindex <<"']" <<"[nlHostTimeMark='" <<nlhosttimemark <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']" <<"[nlHostAddress='" <<nlhostaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlhosttable::Nlhostentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlhostcontrolindex.is_set || is_set(hlhostcontrolindex.yfilter)) leaf_name_data.push_back(hlhostcontrolindex.get_name_leafdata());
    if (nlhosttimemark.is_set || is_set(nlhosttimemark.yfilter)) leaf_name_data.push_back(nlhosttimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlhostaddress.is_set || is_set(nlhostaddress.yfilter)) leaf_name_data.push_back(nlhostaddress.get_name_leafdata());
    if (nlhostcreatetime.is_set || is_set(nlhostcreatetime.yfilter)) leaf_name_data.push_back(nlhostcreatetime.get_name_leafdata());
    if (nlhostinoctets.is_set || is_set(nlhostinoctets.yfilter)) leaf_name_data.push_back(nlhostinoctets.get_name_leafdata());
    if (nlhostinpkts.is_set || is_set(nlhostinpkts.yfilter)) leaf_name_data.push_back(nlhostinpkts.get_name_leafdata());
    if (nlhostoutmacnonunicastpkts.is_set || is_set(nlhostoutmacnonunicastpkts.yfilter)) leaf_name_data.push_back(nlhostoutmacnonunicastpkts.get_name_leafdata());
    if (nlhostoutoctets.is_set || is_set(nlhostoutoctets.yfilter)) leaf_name_data.push_back(nlhostoutoctets.get_name_leafdata());
    if (nlhostoutpkts.is_set || is_set(nlhostoutpkts.yfilter)) leaf_name_data.push_back(nlhostoutpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlhosttable::Nlhostentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlhosttable::Nlhostentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Nlhosttable::Nlhostentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex = value;
        hlhostcontrolindex.value_namespace = name_space;
        hlhostcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostTimeMark")
    {
        nlhosttimemark = value;
        nlhosttimemark.value_namespace = name_space;
        nlhosttimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostAddress")
    {
        nlhostaddress = value;
        nlhostaddress.value_namespace = name_space;
        nlhostaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostCreateTime")
    {
        nlhostcreatetime = value;
        nlhostcreatetime.value_namespace = name_space;
        nlhostcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostInOctets")
    {
        nlhostinoctets = value;
        nlhostinoctets.value_namespace = name_space;
        nlhostinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostInPkts")
    {
        nlhostinpkts = value;
        nlhostinpkts.value_namespace = name_space;
        nlhostinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostOutMacNonUnicastPkts")
    {
        nlhostoutmacnonunicastpkts = value;
        nlhostoutmacnonunicastpkts.value_namespace = name_space;
        nlhostoutmacnonunicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostOutOctets")
    {
        nlhostoutoctets = value;
        nlhostoutoctets.value_namespace = name_space;
        nlhostoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostOutPkts")
    {
        nlhostoutpkts = value;
        nlhostoutpkts.value_namespace = name_space;
        nlhostoutpkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Nlhosttable::Nlhostentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex.yfilter = yfilter;
    }
    if(value_path == "nlHostTimeMark")
    {
        nlhosttimemark.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlHostAddress")
    {
        nlhostaddress.yfilter = yfilter;
    }
    if(value_path == "nlHostCreateTime")
    {
        nlhostcreatetime.yfilter = yfilter;
    }
    if(value_path == "nlHostInOctets")
    {
        nlhostinoctets.yfilter = yfilter;
    }
    if(value_path == "nlHostInPkts")
    {
        nlhostinpkts.yfilter = yfilter;
    }
    if(value_path == "nlHostOutMacNonUnicastPkts")
    {
        nlhostoutmacnonunicastpkts.yfilter = yfilter;
    }
    if(value_path == "nlHostOutOctets")
    {
        nlhostoutoctets.yfilter = yfilter;
    }
    if(value_path == "nlHostOutPkts")
    {
        nlhostoutpkts.yfilter = yfilter;
    }
}

bool RMON2MIB::Nlhosttable::Nlhostentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlIndex" || name == "nlHostTimeMark" || name == "protocolDirLocalIndex" || name == "nlHostAddress" || name == "nlHostCreateTime" || name == "nlHostInOctets" || name == "nlHostInPkts" || name == "nlHostOutMacNonUnicastPkts" || name == "nlHostOutOctets" || name == "nlHostOutPkts")
        return true;
    return false;
}

RMON2MIB::Nlmatrixdstable::Nlmatrixdstable()
{

    yang_name = "nlMatrixDSTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixdstable::~Nlmatrixdstable()
{
}

bool RMON2MIB::Nlmatrixdstable::has_data() const
{
    for (std::size_t index=0; index<nlmatrixdsentry.size(); index++)
    {
        if(nlmatrixdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Nlmatrixdstable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixdsentry.size(); index++)
    {
        if(nlmatrixdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Nlmatrixdstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixdstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixdstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixdstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixDSEntry")
    {
        for(auto const & c : nlmatrixdsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry>();
        c->parent = this;
        nlmatrixdsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixdstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmatrixdsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Nlmatrixdstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Nlmatrixdstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Nlmatrixdstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixDSEntry")
        return true;
    return false;
}

RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::Nlmatrixdsentry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    nlmatrixdstimemark{YType::uint32, "nlMatrixDSTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixdsdestaddress{YType::str, "nlMatrixDSDestAddress"},
    nlmatrixdssourceaddress{YType::str, "nlMatrixDSSourceAddress"},
    nlmatrixdscreatetime{YType::uint32, "nlMatrixDSCreateTime"},
    nlmatrixdsoctets{YType::uint32, "nlMatrixDSOctets"},
    nlmatrixdspkts{YType::uint32, "nlMatrixDSPkts"}
{

    yang_name = "nlMatrixDSEntry"; yang_parent_name = "nlMatrixDSTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::~Nlmatrixdsentry()
{
}

bool RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::has_data() const
{
    return hlmatrixcontrolindex.is_set
	|| nlmatrixdstimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixdsdestaddress.is_set
	|| nlmatrixdssourceaddress.is_set
	|| nlmatrixdscreatetime.is_set
	|| nlmatrixdsoctets.is_set
	|| nlmatrixdspkts.is_set;
}

bool RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(nlmatrixdstimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixdsdestaddress.yfilter)
	|| ydk::is_set(nlmatrixdssourceaddress.yfilter)
	|| ydk::is_set(nlmatrixdscreatetime.yfilter)
	|| ydk::is_set(nlmatrixdsoctets.yfilter)
	|| ydk::is_set(nlmatrixdspkts.yfilter);
}

std::string RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixDSEntry" <<"[hlMatrixControlIndex='" <<hlmatrixcontrolindex <<"']" <<"[nlMatrixDSTimeMark='" <<nlmatrixdstimemark <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']" <<"[nlMatrixDSDestAddress='" <<nlmatrixdsdestaddress <<"']" <<"[nlMatrixDSSourceAddress='" <<nlmatrixdssourceaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (nlmatrixdstimemark.is_set || is_set(nlmatrixdstimemark.yfilter)) leaf_name_data.push_back(nlmatrixdstimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixdsdestaddress.is_set || is_set(nlmatrixdsdestaddress.yfilter)) leaf_name_data.push_back(nlmatrixdsdestaddress.get_name_leafdata());
    if (nlmatrixdssourceaddress.is_set || is_set(nlmatrixdssourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixdssourceaddress.get_name_leafdata());
    if (nlmatrixdscreatetime.is_set || is_set(nlmatrixdscreatetime.yfilter)) leaf_name_data.push_back(nlmatrixdscreatetime.get_name_leafdata());
    if (nlmatrixdsoctets.is_set || is_set(nlmatrixdsoctets.yfilter)) leaf_name_data.push_back(nlmatrixdsoctets.get_name_leafdata());
    if (nlmatrixdspkts.is_set || is_set(nlmatrixdspkts.yfilter)) leaf_name_data.push_back(nlmatrixdspkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex = value;
        hlmatrixcontrolindex.value_namespace = name_space;
        hlmatrixcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSTimeMark")
    {
        nlmatrixdstimemark = value;
        nlmatrixdstimemark.value_namespace = name_space;
        nlmatrixdstimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSDestAddress")
    {
        nlmatrixdsdestaddress = value;
        nlmatrixdsdestaddress.value_namespace = name_space;
        nlmatrixdsdestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSSourceAddress")
    {
        nlmatrixdssourceaddress = value;
        nlmatrixdssourceaddress.value_namespace = name_space;
        nlmatrixdssourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSCreateTime")
    {
        nlmatrixdscreatetime = value;
        nlmatrixdscreatetime.value_namespace = name_space;
        nlmatrixdscreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSOctets")
    {
        nlmatrixdsoctets = value;
        nlmatrixdsoctets.value_namespace = name_space;
        nlmatrixdsoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSPkts")
    {
        nlmatrixdspkts = value;
        nlmatrixdspkts.value_namespace = name_space;
        nlmatrixdspkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSTimeMark")
    {
        nlmatrixdstimemark.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSDestAddress")
    {
        nlmatrixdsdestaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSSourceAddress")
    {
        nlmatrixdssourceaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSCreateTime")
    {
        nlmatrixdscreatetime.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSOctets")
    {
        nlmatrixdsoctets.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSPkts")
    {
        nlmatrixdspkts.yfilter = yfilter;
    }
}

bool RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "nlMatrixDSTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixDSDestAddress" || name == "nlMatrixDSSourceAddress" || name == "nlMatrixDSCreateTime" || name == "nlMatrixDSOctets" || name == "nlMatrixDSPkts")
        return true;
    return false;
}

RMON2MIB::Nlmatrixsdtable::Nlmatrixsdtable()
{

    yang_name = "nlMatrixSDTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixsdtable::~Nlmatrixsdtable()
{
}

bool RMON2MIB::Nlmatrixsdtable::has_data() const
{
    for (std::size_t index=0; index<nlmatrixsdentry.size(); index++)
    {
        if(nlmatrixsdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Nlmatrixsdtable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixsdentry.size(); index++)
    {
        if(nlmatrixsdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Nlmatrixsdtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixsdtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixSDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixsdtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixsdtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixSDEntry")
    {
        for(auto const & c : nlmatrixsdentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry>();
        c->parent = this;
        nlmatrixsdentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixsdtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmatrixsdentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Nlmatrixsdtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Nlmatrixsdtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Nlmatrixsdtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixSDEntry")
        return true;
    return false;
}

RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::Nlmatrixsdentry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    nlmatrixsdtimemark{YType::uint32, "nlMatrixSDTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixsdsourceaddress{YType::str, "nlMatrixSDSourceAddress"},
    nlmatrixsddestaddress{YType::str, "nlMatrixSDDestAddress"},
    nlmatrixsdcreatetime{YType::uint32, "nlMatrixSDCreateTime"},
    nlmatrixsdoctets{YType::uint32, "nlMatrixSDOctets"},
    nlmatrixsdpkts{YType::uint32, "nlMatrixSDPkts"}
{

    yang_name = "nlMatrixSDEntry"; yang_parent_name = "nlMatrixSDTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::~Nlmatrixsdentry()
{
}

bool RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::has_data() const
{
    return hlmatrixcontrolindex.is_set
	|| nlmatrixsdtimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixsdsourceaddress.is_set
	|| nlmatrixsddestaddress.is_set
	|| nlmatrixsdcreatetime.is_set
	|| nlmatrixsdoctets.is_set
	|| nlmatrixsdpkts.is_set;
}

bool RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(nlmatrixsdtimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixsdsourceaddress.yfilter)
	|| ydk::is_set(nlmatrixsddestaddress.yfilter)
	|| ydk::is_set(nlmatrixsdcreatetime.yfilter)
	|| ydk::is_set(nlmatrixsdoctets.yfilter)
	|| ydk::is_set(nlmatrixsdpkts.yfilter);
}

std::string RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixSDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixSDEntry" <<"[hlMatrixControlIndex='" <<hlmatrixcontrolindex <<"']" <<"[nlMatrixSDTimeMark='" <<nlmatrixsdtimemark <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']" <<"[nlMatrixSDSourceAddress='" <<nlmatrixsdsourceaddress <<"']" <<"[nlMatrixSDDestAddress='" <<nlmatrixsddestaddress <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (nlmatrixsdtimemark.is_set || is_set(nlmatrixsdtimemark.yfilter)) leaf_name_data.push_back(nlmatrixsdtimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixsdsourceaddress.is_set || is_set(nlmatrixsdsourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixsdsourceaddress.get_name_leafdata());
    if (nlmatrixsddestaddress.is_set || is_set(nlmatrixsddestaddress.yfilter)) leaf_name_data.push_back(nlmatrixsddestaddress.get_name_leafdata());
    if (nlmatrixsdcreatetime.is_set || is_set(nlmatrixsdcreatetime.yfilter)) leaf_name_data.push_back(nlmatrixsdcreatetime.get_name_leafdata());
    if (nlmatrixsdoctets.is_set || is_set(nlmatrixsdoctets.yfilter)) leaf_name_data.push_back(nlmatrixsdoctets.get_name_leafdata());
    if (nlmatrixsdpkts.is_set || is_set(nlmatrixsdpkts.yfilter)) leaf_name_data.push_back(nlmatrixsdpkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex = value;
        hlmatrixcontrolindex.value_namespace = name_space;
        hlmatrixcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDTimeMark")
    {
        nlmatrixsdtimemark = value;
        nlmatrixsdtimemark.value_namespace = name_space;
        nlmatrixsdtimemark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDSourceAddress")
    {
        nlmatrixsdsourceaddress = value;
        nlmatrixsdsourceaddress.value_namespace = name_space;
        nlmatrixsdsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDDestAddress")
    {
        nlmatrixsddestaddress = value;
        nlmatrixsddestaddress.value_namespace = name_space;
        nlmatrixsddestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDCreateTime")
    {
        nlmatrixsdcreatetime = value;
        nlmatrixsdcreatetime.value_namespace = name_space;
        nlmatrixsdcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDOctets")
    {
        nlmatrixsdoctets = value;
        nlmatrixsdoctets.value_namespace = name_space;
        nlmatrixsdoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDPkts")
    {
        nlmatrixsdpkts = value;
        nlmatrixsdpkts.value_namespace = name_space;
        nlmatrixsdpkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDTimeMark")
    {
        nlmatrixsdtimemark.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDSourceAddress")
    {
        nlmatrixsdsourceaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDDestAddress")
    {
        nlmatrixsddestaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDCreateTime")
    {
        nlmatrixsdcreatetime.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDOctets")
    {
        nlmatrixsdoctets.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDPkts")
    {
        nlmatrixsdpkts.yfilter = yfilter;
    }
}

bool RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "nlMatrixSDTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixSDSourceAddress" || name == "nlMatrixSDDestAddress" || name == "nlMatrixSDCreateTime" || name == "nlMatrixSDOctets" || name == "nlMatrixSDPkts")
        return true;
    return false;
}

RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontroltable()
{

    yang_name = "nlMatrixTopNControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixtopncontroltable::~Nlmatrixtopncontroltable()
{
}

bool RMON2MIB::Nlmatrixtopncontroltable::has_data() const
{
    for (std::size_t index=0; index<nlmatrixtopncontrolentry.size(); index++)
    {
        if(nlmatrixtopncontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Nlmatrixtopncontroltable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixtopncontrolentry.size(); index++)
    {
        if(nlmatrixtopncontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Nlmatrixtopncontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixtopncontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixtopncontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixtopncontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixTopNControlEntry")
    {
        for(auto const & c : nlmatrixtopncontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry>();
        c->parent = this;
        nlmatrixtopncontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixtopncontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmatrixtopncontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Nlmatrixtopncontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Nlmatrixtopncontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Nlmatrixtopncontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNControlEntry")
        return true;
    return false;
}

RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::Nlmatrixtopncontrolentry()
    :
    nlmatrixtopncontrolindex{YType::int32, "nlMatrixTopNControlIndex"},
    nlmatrixtopncontrolduration{YType::int32, "nlMatrixTopNControlDuration"},
    nlmatrixtopncontrolgeneratedreports{YType::uint32, "nlMatrixTopNControlGeneratedReports"},
    nlmatrixtopncontrolgrantedsize{YType::int32, "nlMatrixTopNControlGrantedSize"},
    nlmatrixtopncontrolmatrixindex{YType::int32, "nlMatrixTopNControlMatrixIndex"},
    nlmatrixtopncontrolowner{YType::str, "nlMatrixTopNControlOwner"},
    nlmatrixtopncontrolratebase{YType::enumeration, "nlMatrixTopNControlRateBase"},
    nlmatrixtopncontrolrequestedsize{YType::int32, "nlMatrixTopNControlRequestedSize"},
    nlmatrixtopncontrolstarttime{YType::uint32, "nlMatrixTopNControlStartTime"},
    nlmatrixtopncontrolstatus{YType::enumeration, "nlMatrixTopNControlStatus"},
    nlmatrixtopncontroltimeremaining{YType::int32, "nlMatrixTopNControlTimeRemaining"}
{

    yang_name = "nlMatrixTopNControlEntry"; yang_parent_name = "nlMatrixTopNControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::~Nlmatrixtopncontrolentry()
{
}

bool RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::has_data() const
{
    return nlmatrixtopncontrolindex.is_set
	|| nlmatrixtopncontrolduration.is_set
	|| nlmatrixtopncontrolgeneratedreports.is_set
	|| nlmatrixtopncontrolgrantedsize.is_set
	|| nlmatrixtopncontrolmatrixindex.is_set
	|| nlmatrixtopncontrolowner.is_set
	|| nlmatrixtopncontrolratebase.is_set
	|| nlmatrixtopncontrolrequestedsize.is_set
	|| nlmatrixtopncontrolstarttime.is_set
	|| nlmatrixtopncontrolstatus.is_set
	|| nlmatrixtopncontroltimeremaining.is_set;
}

bool RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmatrixtopncontrolindex.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolduration.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolgeneratedreports.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolgrantedsize.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolmatrixindex.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolowner.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolratebase.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolrequestedsize.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolstarttime.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolstatus.yfilter)
	|| ydk::is_set(nlmatrixtopncontroltimeremaining.yfilter);
}

std::string RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixTopNControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNControlEntry" <<"[nlMatrixTopNControlIndex='" <<nlmatrixtopncontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmatrixtopncontrolindex.is_set || is_set(nlmatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolindex.get_name_leafdata());
    if (nlmatrixtopncontrolduration.is_set || is_set(nlmatrixtopncontrolduration.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolduration.get_name_leafdata());
    if (nlmatrixtopncontrolgeneratedreports.is_set || is_set(nlmatrixtopncontrolgeneratedreports.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolgeneratedreports.get_name_leafdata());
    if (nlmatrixtopncontrolgrantedsize.is_set || is_set(nlmatrixtopncontrolgrantedsize.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolgrantedsize.get_name_leafdata());
    if (nlmatrixtopncontrolmatrixindex.is_set || is_set(nlmatrixtopncontrolmatrixindex.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolmatrixindex.get_name_leafdata());
    if (nlmatrixtopncontrolowner.is_set || is_set(nlmatrixtopncontrolowner.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolowner.get_name_leafdata());
    if (nlmatrixtopncontrolratebase.is_set || is_set(nlmatrixtopncontrolratebase.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolratebase.get_name_leafdata());
    if (nlmatrixtopncontrolrequestedsize.is_set || is_set(nlmatrixtopncontrolrequestedsize.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolrequestedsize.get_name_leafdata());
    if (nlmatrixtopncontrolstarttime.is_set || is_set(nlmatrixtopncontrolstarttime.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolstarttime.get_name_leafdata());
    if (nlmatrixtopncontrolstatus.is_set || is_set(nlmatrixtopncontrolstatus.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolstatus.get_name_leafdata());
    if (nlmatrixtopncontroltimeremaining.is_set || is_set(nlmatrixtopncontroltimeremaining.yfilter)) leaf_name_data.push_back(nlmatrixtopncontroltimeremaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlMatrixTopNControlIndex")
    {
        nlmatrixtopncontrolindex = value;
        nlmatrixtopncontrolindex.value_namespace = name_space;
        nlmatrixtopncontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlDuration")
    {
        nlmatrixtopncontrolduration = value;
        nlmatrixtopncontrolduration.value_namespace = name_space;
        nlmatrixtopncontrolduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlGeneratedReports")
    {
        nlmatrixtopncontrolgeneratedreports = value;
        nlmatrixtopncontrolgeneratedreports.value_namespace = name_space;
        nlmatrixtopncontrolgeneratedreports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlGrantedSize")
    {
        nlmatrixtopncontrolgrantedsize = value;
        nlmatrixtopncontrolgrantedsize.value_namespace = name_space;
        nlmatrixtopncontrolgrantedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlMatrixIndex")
    {
        nlmatrixtopncontrolmatrixindex = value;
        nlmatrixtopncontrolmatrixindex.value_namespace = name_space;
        nlmatrixtopncontrolmatrixindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlOwner")
    {
        nlmatrixtopncontrolowner = value;
        nlmatrixtopncontrolowner.value_namespace = name_space;
        nlmatrixtopncontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlRateBase")
    {
        nlmatrixtopncontrolratebase = value;
        nlmatrixtopncontrolratebase.value_namespace = name_space;
        nlmatrixtopncontrolratebase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlRequestedSize")
    {
        nlmatrixtopncontrolrequestedsize = value;
        nlmatrixtopncontrolrequestedsize.value_namespace = name_space;
        nlmatrixtopncontrolrequestedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlStartTime")
    {
        nlmatrixtopncontrolstarttime = value;
        nlmatrixtopncontrolstarttime.value_namespace = name_space;
        nlmatrixtopncontrolstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlStatus")
    {
        nlmatrixtopncontrolstatus = value;
        nlmatrixtopncontrolstatus.value_namespace = name_space;
        nlmatrixtopncontrolstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlTimeRemaining")
    {
        nlmatrixtopncontroltimeremaining = value;
        nlmatrixtopncontroltimeremaining.value_namespace = name_space;
        nlmatrixtopncontroltimeremaining.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlMatrixTopNControlIndex")
    {
        nlmatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlDuration")
    {
        nlmatrixtopncontrolduration.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlGeneratedReports")
    {
        nlmatrixtopncontrolgeneratedreports.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlGrantedSize")
    {
        nlmatrixtopncontrolgrantedsize.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlMatrixIndex")
    {
        nlmatrixtopncontrolmatrixindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlOwner")
    {
        nlmatrixtopncontrolowner.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlRateBase")
    {
        nlmatrixtopncontrolratebase.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlRequestedSize")
    {
        nlmatrixtopncontrolrequestedsize.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlStartTime")
    {
        nlmatrixtopncontrolstarttime.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlStatus")
    {
        nlmatrixtopncontrolstatus.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlTimeRemaining")
    {
        nlmatrixtopncontroltimeremaining.yfilter = yfilter;
    }
}

bool RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNControlIndex" || name == "nlMatrixTopNControlDuration" || name == "nlMatrixTopNControlGeneratedReports" || name == "nlMatrixTopNControlGrantedSize" || name == "nlMatrixTopNControlMatrixIndex" || name == "nlMatrixTopNControlOwner" || name == "nlMatrixTopNControlRateBase" || name == "nlMatrixTopNControlRequestedSize" || name == "nlMatrixTopNControlStartTime" || name == "nlMatrixTopNControlStatus" || name == "nlMatrixTopNControlTimeRemaining")
        return true;
    return false;
}

RMON2MIB::Nlmatrixtopntable::Nlmatrixtopntable()
{

    yang_name = "nlMatrixTopNTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixtopntable::~Nlmatrixtopntable()
{
}

bool RMON2MIB::Nlmatrixtopntable::has_data() const
{
    for (std::size_t index=0; index<nlmatrixtopnentry.size(); index++)
    {
        if(nlmatrixtopnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Nlmatrixtopntable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixtopnentry.size(); index++)
    {
        if(nlmatrixtopnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Nlmatrixtopntable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixtopntable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixtopntable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixtopntable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixTopNEntry")
    {
        for(auto const & c : nlmatrixtopnentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry>();
        c->parent = this;
        nlmatrixtopnentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixtopntable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nlmatrixtopnentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Nlmatrixtopntable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Nlmatrixtopntable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Nlmatrixtopntable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNEntry")
        return true;
    return false;
}

RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::Nlmatrixtopnentry()
    :
    nlmatrixtopncontrolindex{YType::str, "nlMatrixTopNControlIndex"},
    nlmatrixtopnindex{YType::int32, "nlMatrixTopNIndex"},
    nlmatrixtopndestaddress{YType::str, "nlMatrixTopNDestAddress"},
    nlmatrixtopnoctetrate{YType::uint32, "nlMatrixTopNOctetRate"},
    nlmatrixtopnpktrate{YType::uint32, "nlMatrixTopNPktRate"},
    nlmatrixtopnprotocoldirlocalindex{YType::int32, "nlMatrixTopNProtocolDirLocalIndex"},
    nlmatrixtopnreverseoctetrate{YType::uint32, "nlMatrixTopNReverseOctetRate"},
    nlmatrixtopnreversepktrate{YType::uint32, "nlMatrixTopNReversePktRate"},
    nlmatrixtopnsourceaddress{YType::str, "nlMatrixTopNSourceAddress"}
{

    yang_name = "nlMatrixTopNEntry"; yang_parent_name = "nlMatrixTopNTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::~Nlmatrixtopnentry()
{
}

bool RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::has_data() const
{
    return nlmatrixtopncontrolindex.is_set
	|| nlmatrixtopnindex.is_set
	|| nlmatrixtopndestaddress.is_set
	|| nlmatrixtopnoctetrate.is_set
	|| nlmatrixtopnpktrate.is_set
	|| nlmatrixtopnprotocoldirlocalindex.is_set
	|| nlmatrixtopnreverseoctetrate.is_set
	|| nlmatrixtopnreversepktrate.is_set
	|| nlmatrixtopnsourceaddress.is_set;
}

bool RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmatrixtopncontrolindex.yfilter)
	|| ydk::is_set(nlmatrixtopnindex.yfilter)
	|| ydk::is_set(nlmatrixtopndestaddress.yfilter)
	|| ydk::is_set(nlmatrixtopnoctetrate.yfilter)
	|| ydk::is_set(nlmatrixtopnpktrate.yfilter)
	|| ydk::is_set(nlmatrixtopnprotocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixtopnreverseoctetrate.yfilter)
	|| ydk::is_set(nlmatrixtopnreversepktrate.yfilter)
	|| ydk::is_set(nlmatrixtopnsourceaddress.yfilter);
}

std::string RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixTopNTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNEntry" <<"[nlMatrixTopNControlIndex='" <<nlmatrixtopncontrolindex <<"']" <<"[nlMatrixTopNIndex='" <<nlmatrixtopnindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmatrixtopncontrolindex.is_set || is_set(nlmatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolindex.get_name_leafdata());
    if (nlmatrixtopnindex.is_set || is_set(nlmatrixtopnindex.yfilter)) leaf_name_data.push_back(nlmatrixtopnindex.get_name_leafdata());
    if (nlmatrixtopndestaddress.is_set || is_set(nlmatrixtopndestaddress.yfilter)) leaf_name_data.push_back(nlmatrixtopndestaddress.get_name_leafdata());
    if (nlmatrixtopnoctetrate.is_set || is_set(nlmatrixtopnoctetrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnoctetrate.get_name_leafdata());
    if (nlmatrixtopnpktrate.is_set || is_set(nlmatrixtopnpktrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnpktrate.get_name_leafdata());
    if (nlmatrixtopnprotocoldirlocalindex.is_set || is_set(nlmatrixtopnprotocoldirlocalindex.yfilter)) leaf_name_data.push_back(nlmatrixtopnprotocoldirlocalindex.get_name_leafdata());
    if (nlmatrixtopnreverseoctetrate.is_set || is_set(nlmatrixtopnreverseoctetrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnreverseoctetrate.get_name_leafdata());
    if (nlmatrixtopnreversepktrate.is_set || is_set(nlmatrixtopnreversepktrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnreversepktrate.get_name_leafdata());
    if (nlmatrixtopnsourceaddress.is_set || is_set(nlmatrixtopnsourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixtopnsourceaddress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlMatrixTopNControlIndex")
    {
        nlmatrixtopncontrolindex = value;
        nlmatrixtopncontrolindex.value_namespace = name_space;
        nlmatrixtopncontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNIndex")
    {
        nlmatrixtopnindex = value;
        nlmatrixtopnindex.value_namespace = name_space;
        nlmatrixtopnindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNDestAddress")
    {
        nlmatrixtopndestaddress = value;
        nlmatrixtopndestaddress.value_namespace = name_space;
        nlmatrixtopndestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNOctetRate")
    {
        nlmatrixtopnoctetrate = value;
        nlmatrixtopnoctetrate.value_namespace = name_space;
        nlmatrixtopnoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNPktRate")
    {
        nlmatrixtopnpktrate = value;
        nlmatrixtopnpktrate.value_namespace = name_space;
        nlmatrixtopnpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNProtocolDirLocalIndex")
    {
        nlmatrixtopnprotocoldirlocalindex = value;
        nlmatrixtopnprotocoldirlocalindex.value_namespace = name_space;
        nlmatrixtopnprotocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNReverseOctetRate")
    {
        nlmatrixtopnreverseoctetrate = value;
        nlmatrixtopnreverseoctetrate.value_namespace = name_space;
        nlmatrixtopnreverseoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNReversePktRate")
    {
        nlmatrixtopnreversepktrate = value;
        nlmatrixtopnreversepktrate.value_namespace = name_space;
        nlmatrixtopnreversepktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNSourceAddress")
    {
        nlmatrixtopnsourceaddress = value;
        nlmatrixtopnsourceaddress.value_namespace = name_space;
        nlmatrixtopnsourceaddress.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlMatrixTopNControlIndex")
    {
        nlmatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNIndex")
    {
        nlmatrixtopnindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNDestAddress")
    {
        nlmatrixtopndestaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNOctetRate")
    {
        nlmatrixtopnoctetrate.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNPktRate")
    {
        nlmatrixtopnpktrate.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNProtocolDirLocalIndex")
    {
        nlmatrixtopnprotocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNReverseOctetRate")
    {
        nlmatrixtopnreverseoctetrate.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNReversePktRate")
    {
        nlmatrixtopnreversepktrate.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNSourceAddress")
    {
        nlmatrixtopnsourceaddress.yfilter = yfilter;
    }
}

bool RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNControlIndex" || name == "nlMatrixTopNIndex" || name == "nlMatrixTopNDestAddress" || name == "nlMatrixTopNOctetRate" || name == "nlMatrixTopNPktRate" || name == "nlMatrixTopNProtocolDirLocalIndex" || name == "nlMatrixTopNReverseOctetRate" || name == "nlMatrixTopNReversePktRate" || name == "nlMatrixTopNSourceAddress")
        return true;
    return false;
}

RMON2MIB::Probeconfig::Probeconfig()
    :
    netdefaultgateway{YType::str, "netDefaultGateway"},
    probecapabilities{YType::str, "probeCapabilities"},
    probedatetime{YType::str, "probeDateTime"},
    probedownloadaction{YType::enumeration, "probeDownloadAction"},
    probedownloadfile{YType::str, "probeDownloadFile"},
    probedownloadstatus{YType::enumeration, "probeDownloadStatus"},
    probedownloadtftpserver{YType::str, "probeDownloadTFTPServer"},
    probehardwarerev{YType::str, "probeHardwareRev"},
    proberesetcontrol{YType::enumeration, "probeResetControl"},
    probesoftwarerev{YType::str, "probeSoftwareRev"}
{

    yang_name = "probeConfig"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Probeconfig::~Probeconfig()
{
}

bool RMON2MIB::Probeconfig::has_data() const
{
    return netdefaultgateway.is_set
	|| probecapabilities.is_set
	|| probedatetime.is_set
	|| probedownloadaction.is_set
	|| probedownloadfile.is_set
	|| probedownloadstatus.is_set
	|| probedownloadtftpserver.is_set
	|| probehardwarerev.is_set
	|| proberesetcontrol.is_set
	|| probesoftwarerev.is_set;
}

bool RMON2MIB::Probeconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(netdefaultgateway.yfilter)
	|| ydk::is_set(probecapabilities.yfilter)
	|| ydk::is_set(probedatetime.yfilter)
	|| ydk::is_set(probedownloadaction.yfilter)
	|| ydk::is_set(probedownloadfile.yfilter)
	|| ydk::is_set(probedownloadstatus.yfilter)
	|| ydk::is_set(probedownloadtftpserver.yfilter)
	|| ydk::is_set(probehardwarerev.yfilter)
	|| ydk::is_set(proberesetcontrol.yfilter)
	|| ydk::is_set(probesoftwarerev.yfilter);
}

std::string RMON2MIB::Probeconfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Probeconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probeConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Probeconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netdefaultgateway.is_set || is_set(netdefaultgateway.yfilter)) leaf_name_data.push_back(netdefaultgateway.get_name_leafdata());
    if (probecapabilities.is_set || is_set(probecapabilities.yfilter)) leaf_name_data.push_back(probecapabilities.get_name_leafdata());
    if (probedatetime.is_set || is_set(probedatetime.yfilter)) leaf_name_data.push_back(probedatetime.get_name_leafdata());
    if (probedownloadaction.is_set || is_set(probedownloadaction.yfilter)) leaf_name_data.push_back(probedownloadaction.get_name_leafdata());
    if (probedownloadfile.is_set || is_set(probedownloadfile.yfilter)) leaf_name_data.push_back(probedownloadfile.get_name_leafdata());
    if (probedownloadstatus.is_set || is_set(probedownloadstatus.yfilter)) leaf_name_data.push_back(probedownloadstatus.get_name_leafdata());
    if (probedownloadtftpserver.is_set || is_set(probedownloadtftpserver.yfilter)) leaf_name_data.push_back(probedownloadtftpserver.get_name_leafdata());
    if (probehardwarerev.is_set || is_set(probehardwarerev.yfilter)) leaf_name_data.push_back(probehardwarerev.get_name_leafdata());
    if (proberesetcontrol.is_set || is_set(proberesetcontrol.yfilter)) leaf_name_data.push_back(proberesetcontrol.get_name_leafdata());
    if (probesoftwarerev.is_set || is_set(probesoftwarerev.yfilter)) leaf_name_data.push_back(probesoftwarerev.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Probeconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Probeconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Probeconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "netDefaultGateway")
    {
        netdefaultgateway = value;
        netdefaultgateway.value_namespace = name_space;
        netdefaultgateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeCapabilities")
    {
        probecapabilities = value;
        probecapabilities.value_namespace = name_space;
        probecapabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDateTime")
    {
        probedatetime = value;
        probedatetime.value_namespace = name_space;
        probedatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadAction")
    {
        probedownloadaction = value;
        probedownloadaction.value_namespace = name_space;
        probedownloadaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadFile")
    {
        probedownloadfile = value;
        probedownloadfile.value_namespace = name_space;
        probedownloadfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadStatus")
    {
        probedownloadstatus = value;
        probedownloadstatus.value_namespace = name_space;
        probedownloadstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadTFTPServer")
    {
        probedownloadtftpserver = value;
        probedownloadtftpserver.value_namespace = name_space;
        probedownloadtftpserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeHardwareRev")
    {
        probehardwarerev = value;
        probehardwarerev.value_namespace = name_space;
        probehardwarerev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeResetControl")
    {
        proberesetcontrol = value;
        proberesetcontrol.value_namespace = name_space;
        proberesetcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeSoftwareRev")
    {
        probesoftwarerev = value;
        probesoftwarerev.value_namespace = name_space;
        probesoftwarerev.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Probeconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "netDefaultGateway")
    {
        netdefaultgateway.yfilter = yfilter;
    }
    if(value_path == "probeCapabilities")
    {
        probecapabilities.yfilter = yfilter;
    }
    if(value_path == "probeDateTime")
    {
        probedatetime.yfilter = yfilter;
    }
    if(value_path == "probeDownloadAction")
    {
        probedownloadaction.yfilter = yfilter;
    }
    if(value_path == "probeDownloadFile")
    {
        probedownloadfile.yfilter = yfilter;
    }
    if(value_path == "probeDownloadStatus")
    {
        probedownloadstatus.yfilter = yfilter;
    }
    if(value_path == "probeDownloadTFTPServer")
    {
        probedownloadtftpserver.yfilter = yfilter;
    }
    if(value_path == "probeHardwareRev")
    {
        probehardwarerev.yfilter = yfilter;
    }
    if(value_path == "probeResetControl")
    {
        proberesetcontrol.yfilter = yfilter;
    }
    if(value_path == "probeSoftwareRev")
    {
        probesoftwarerev.yfilter = yfilter;
    }
}

bool RMON2MIB::Probeconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netDefaultGateway" || name == "probeCapabilities" || name == "probeDateTime" || name == "probeDownloadAction" || name == "probeDownloadFile" || name == "probeDownloadStatus" || name == "probeDownloadTFTPServer" || name == "probeHardwareRev" || name == "probeResetControl" || name == "probeSoftwareRev")
        return true;
    return false;
}

RMON2MIB::Protocoldir::Protocoldir()
    :
    protocoldirlastchange{YType::uint32, "protocolDirLastChange"}
{

    yang_name = "protocolDir"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Protocoldir::~Protocoldir()
{
}

bool RMON2MIB::Protocoldir::has_data() const
{
    return protocoldirlastchange.is_set;
}

bool RMON2MIB::Protocoldir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldirlastchange.yfilter);
}

std::string RMON2MIB::Protocoldir::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Protocoldir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Protocoldir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldirlastchange.is_set || is_set(protocoldirlastchange.yfilter)) leaf_name_data.push_back(protocoldirlastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Protocoldir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Protocoldir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Protocoldir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocolDirLastChange")
    {
        protocoldirlastchange = value;
        protocoldirlastchange.value_namespace = name_space;
        protocoldirlastchange.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Protocoldir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDirLastChange")
    {
        protocoldirlastchange.yfilter = yfilter;
    }
}

bool RMON2MIB::Protocoldir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDirLastChange")
        return true;
    return false;
}

RMON2MIB::Protocoldirtable::Protocoldirtable()
{

    yang_name = "protocolDirTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Protocoldirtable::~Protocoldirtable()
{
}

bool RMON2MIB::Protocoldirtable::has_data() const
{
    for (std::size_t index=0; index<protocoldirentry.size(); index++)
    {
        if(protocoldirentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Protocoldirtable::has_operation() const
{
    for (std::size_t index=0; index<protocoldirentry.size(); index++)
    {
        if(protocoldirentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Protocoldirtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Protocoldirtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDirTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Protocoldirtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Protocoldirtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocolDirEntry")
    {
        for(auto const & c : protocoldirentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Protocoldirtable::Protocoldirentry>();
        c->parent = this;
        protocoldirentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Protocoldirtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocoldirentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Protocoldirtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Protocoldirtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Protocoldirtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDirEntry")
        return true;
    return false;
}

RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirentry()
    :
    protocoldirid{YType::str, "protocolDirID"},
    protocoldirparameters{YType::str, "protocolDirParameters"},
    protocoldiraddressmapconfig{YType::enumeration, "protocolDirAddressMapConfig"},
    protocoldirdescr{YType::str, "protocolDirDescr"},
    protocoldirhostconfig{YType::enumeration, "protocolDirHostConfig"},
    protocoldirlocalindex{YType::int32, "protocolDirLocalIndex"},
    protocoldirmatrixconfig{YType::enumeration, "protocolDirMatrixConfig"},
    protocoldirowner{YType::str, "protocolDirOwner"},
    protocoldirstatus{YType::enumeration, "protocolDirStatus"},
    protocoldirtype{YType::str, "protocolDirType"}
{

    yang_name = "protocolDirEntry"; yang_parent_name = "protocolDirTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Protocoldirtable::Protocoldirentry::~Protocoldirentry()
{
}

bool RMON2MIB::Protocoldirtable::Protocoldirentry::has_data() const
{
    return protocoldirid.is_set
	|| protocoldirparameters.is_set
	|| protocoldiraddressmapconfig.is_set
	|| protocoldirdescr.is_set
	|| protocoldirhostconfig.is_set
	|| protocoldirlocalindex.is_set
	|| protocoldirmatrixconfig.is_set
	|| protocoldirowner.is_set
	|| protocoldirstatus.is_set
	|| protocoldirtype.is_set;
}

bool RMON2MIB::Protocoldirtable::Protocoldirentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldirid.yfilter)
	|| ydk::is_set(protocoldirparameters.yfilter)
	|| ydk::is_set(protocoldiraddressmapconfig.yfilter)
	|| ydk::is_set(protocoldirdescr.yfilter)
	|| ydk::is_set(protocoldirhostconfig.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(protocoldirmatrixconfig.yfilter)
	|| ydk::is_set(protocoldirowner.yfilter)
	|| ydk::is_set(protocoldirstatus.yfilter)
	|| ydk::is_set(protocoldirtype.yfilter);
}

std::string RMON2MIB::Protocoldirtable::Protocoldirentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/protocolDirTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Protocoldirtable::Protocoldirentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDirEntry" <<"[protocolDirID='" <<protocoldirid <<"']" <<"[protocolDirParameters='" <<protocoldirparameters <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Protocoldirtable::Protocoldirentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldirid.is_set || is_set(protocoldirid.yfilter)) leaf_name_data.push_back(protocoldirid.get_name_leafdata());
    if (protocoldirparameters.is_set || is_set(protocoldirparameters.yfilter)) leaf_name_data.push_back(protocoldirparameters.get_name_leafdata());
    if (protocoldiraddressmapconfig.is_set || is_set(protocoldiraddressmapconfig.yfilter)) leaf_name_data.push_back(protocoldiraddressmapconfig.get_name_leafdata());
    if (protocoldirdescr.is_set || is_set(protocoldirdescr.yfilter)) leaf_name_data.push_back(protocoldirdescr.get_name_leafdata());
    if (protocoldirhostconfig.is_set || is_set(protocoldirhostconfig.yfilter)) leaf_name_data.push_back(protocoldirhostconfig.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (protocoldirmatrixconfig.is_set || is_set(protocoldirmatrixconfig.yfilter)) leaf_name_data.push_back(protocoldirmatrixconfig.get_name_leafdata());
    if (protocoldirowner.is_set || is_set(protocoldirowner.yfilter)) leaf_name_data.push_back(protocoldirowner.get_name_leafdata());
    if (protocoldirstatus.is_set || is_set(protocoldirstatus.yfilter)) leaf_name_data.push_back(protocoldirstatus.get_name_leafdata());
    if (protocoldirtype.is_set || is_set(protocoldirtype.yfilter)) leaf_name_data.push_back(protocoldirtype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Protocoldirtable::Protocoldirentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Protocoldirtable::Protocoldirentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Protocoldirtable::Protocoldirentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocolDirID")
    {
        protocoldirid = value;
        protocoldirid.value_namespace = name_space;
        protocoldirid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirParameters")
    {
        protocoldirparameters = value;
        protocoldirparameters.value_namespace = name_space;
        protocoldirparameters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirAddressMapConfig")
    {
        protocoldiraddressmapconfig = value;
        protocoldiraddressmapconfig.value_namespace = name_space;
        protocoldiraddressmapconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirDescr")
    {
        protocoldirdescr = value;
        protocoldirdescr.value_namespace = name_space;
        protocoldirdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirHostConfig")
    {
        protocoldirhostconfig = value;
        protocoldirhostconfig.value_namespace = name_space;
        protocoldirhostconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirMatrixConfig")
    {
        protocoldirmatrixconfig = value;
        protocoldirmatrixconfig.value_namespace = name_space;
        protocoldirmatrixconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirOwner")
    {
        protocoldirowner = value;
        protocoldirowner.value_namespace = name_space;
        protocoldirowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirStatus")
    {
        protocoldirstatus = value;
        protocoldirstatus.value_namespace = name_space;
        protocoldirstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirType")
    {
        protocoldirtype = value;
        protocoldirtype.value_namespace = name_space;
        protocoldirtype.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Protocoldirtable::Protocoldirentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDirID")
    {
        protocoldirid.yfilter = yfilter;
    }
    if(value_path == "protocolDirParameters")
    {
        protocoldirparameters.yfilter = yfilter;
    }
    if(value_path == "protocolDirAddressMapConfig")
    {
        protocoldiraddressmapconfig.yfilter = yfilter;
    }
    if(value_path == "protocolDirDescr")
    {
        protocoldirdescr.yfilter = yfilter;
    }
    if(value_path == "protocolDirHostConfig")
    {
        protocoldirhostconfig.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "protocolDirMatrixConfig")
    {
        protocoldirmatrixconfig.yfilter = yfilter;
    }
    if(value_path == "protocolDirOwner")
    {
        protocoldirowner.yfilter = yfilter;
    }
    if(value_path == "protocolDirStatus")
    {
        protocoldirstatus.yfilter = yfilter;
    }
    if(value_path == "protocolDirType")
    {
        protocoldirtype.yfilter = yfilter;
    }
}

bool RMON2MIB::Protocoldirtable::Protocoldirentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDirID" || name == "protocolDirParameters" || name == "protocolDirAddressMapConfig" || name == "protocolDirDescr" || name == "protocolDirHostConfig" || name == "protocolDirLocalIndex" || name == "protocolDirMatrixConfig" || name == "protocolDirOwner" || name == "protocolDirStatus" || name == "protocolDirType")
        return true;
    return false;
}

RMON2MIB::Protocoldistcontroltable::Protocoldistcontroltable()
{

    yang_name = "protocolDistControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Protocoldistcontroltable::~Protocoldistcontroltable()
{
}

bool RMON2MIB::Protocoldistcontroltable::has_data() const
{
    for (std::size_t index=0; index<protocoldistcontrolentry.size(); index++)
    {
        if(protocoldistcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Protocoldistcontroltable::has_operation() const
{
    for (std::size_t index=0; index<protocoldistcontrolentry.size(); index++)
    {
        if(protocoldistcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Protocoldistcontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Protocoldistcontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Protocoldistcontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Protocoldistcontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocolDistControlEntry")
    {
        for(auto const & c : protocoldistcontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry>();
        c->parent = this;
        protocoldistcontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Protocoldistcontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocoldistcontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Protocoldistcontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Protocoldistcontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Protocoldistcontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistControlEntry")
        return true;
    return false;
}

RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::Protocoldistcontrolentry()
    :
    protocoldistcontrolindex{YType::int32, "protocolDistControlIndex"},
    protocoldistcontrolcreatetime{YType::uint32, "protocolDistControlCreateTime"},
    protocoldistcontroldatasource{YType::str, "protocolDistControlDataSource"},
    protocoldistcontroldroppedframes{YType::uint32, "protocolDistControlDroppedFrames"},
    protocoldistcontrolowner{YType::str, "protocolDistControlOwner"},
    protocoldistcontrolstatus{YType::enumeration, "protocolDistControlStatus"}
{

    yang_name = "protocolDistControlEntry"; yang_parent_name = "protocolDistControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::~Protocoldistcontrolentry()
{
}

bool RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::has_data() const
{
    return protocoldistcontrolindex.is_set
	|| protocoldistcontrolcreatetime.is_set
	|| protocoldistcontroldatasource.is_set
	|| protocoldistcontroldroppedframes.is_set
	|| protocoldistcontrolowner.is_set
	|| protocoldistcontrolstatus.is_set;
}

bool RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldistcontrolindex.yfilter)
	|| ydk::is_set(protocoldistcontrolcreatetime.yfilter)
	|| ydk::is_set(protocoldistcontroldatasource.yfilter)
	|| ydk::is_set(protocoldistcontroldroppedframes.yfilter)
	|| ydk::is_set(protocoldistcontrolowner.yfilter)
	|| ydk::is_set(protocoldistcontrolstatus.yfilter);
}

std::string RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/protocolDistControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistControlEntry" <<"[protocolDistControlIndex='" <<protocoldistcontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldistcontrolindex.is_set || is_set(protocoldistcontrolindex.yfilter)) leaf_name_data.push_back(protocoldistcontrolindex.get_name_leafdata());
    if (protocoldistcontrolcreatetime.is_set || is_set(protocoldistcontrolcreatetime.yfilter)) leaf_name_data.push_back(protocoldistcontrolcreatetime.get_name_leafdata());
    if (protocoldistcontroldatasource.is_set || is_set(protocoldistcontroldatasource.yfilter)) leaf_name_data.push_back(protocoldistcontroldatasource.get_name_leafdata());
    if (protocoldistcontroldroppedframes.is_set || is_set(protocoldistcontroldroppedframes.yfilter)) leaf_name_data.push_back(protocoldistcontroldroppedframes.get_name_leafdata());
    if (protocoldistcontrolowner.is_set || is_set(protocoldistcontrolowner.yfilter)) leaf_name_data.push_back(protocoldistcontrolowner.get_name_leafdata());
    if (protocoldistcontrolstatus.is_set || is_set(protocoldistcontrolstatus.yfilter)) leaf_name_data.push_back(protocoldistcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocolDistControlIndex")
    {
        protocoldistcontrolindex = value;
        protocoldistcontrolindex.value_namespace = name_space;
        protocoldistcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistControlCreateTime")
    {
        protocoldistcontrolcreatetime = value;
        protocoldistcontrolcreatetime.value_namespace = name_space;
        protocoldistcontrolcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistControlDataSource")
    {
        protocoldistcontroldatasource = value;
        protocoldistcontroldatasource.value_namespace = name_space;
        protocoldistcontroldatasource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistControlDroppedFrames")
    {
        protocoldistcontroldroppedframes = value;
        protocoldistcontroldroppedframes.value_namespace = name_space;
        protocoldistcontroldroppedframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistControlOwner")
    {
        protocoldistcontrolowner = value;
        protocoldistcontrolowner.value_namespace = name_space;
        protocoldistcontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistControlStatus")
    {
        protocoldistcontrolstatus = value;
        protocoldistcontrolstatus.value_namespace = name_space;
        protocoldistcontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDistControlIndex")
    {
        protocoldistcontrolindex.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlCreateTime")
    {
        protocoldistcontrolcreatetime.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlDataSource")
    {
        protocoldistcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlDroppedFrames")
    {
        protocoldistcontroldroppedframes.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlOwner")
    {
        protocoldistcontrolowner.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlStatus")
    {
        protocoldistcontrolstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistControlIndex" || name == "protocolDistControlCreateTime" || name == "protocolDistControlDataSource" || name == "protocolDistControlDroppedFrames" || name == "protocolDistControlOwner" || name == "protocolDistControlStatus")
        return true;
    return false;
}

RMON2MIB::Protocoldiststatstable::Protocoldiststatstable()
{

    yang_name = "protocolDistStatsTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Protocoldiststatstable::~Protocoldiststatstable()
{
}

bool RMON2MIB::Protocoldiststatstable::has_data() const
{
    for (std::size_t index=0; index<protocoldiststatsentry.size(); index++)
    {
        if(protocoldiststatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Protocoldiststatstable::has_operation() const
{
    for (std::size_t index=0; index<protocoldiststatsentry.size(); index++)
    {
        if(protocoldiststatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Protocoldiststatstable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Protocoldiststatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Protocoldiststatstable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Protocoldiststatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocolDistStatsEntry")
    {
        for(auto const & c : protocoldiststatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry>();
        c->parent = this;
        protocoldiststatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Protocoldiststatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocoldiststatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Protocoldiststatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Protocoldiststatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Protocoldiststatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistStatsEntry")
        return true;
    return false;
}

RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::Protocoldiststatsentry()
    :
    protocoldistcontrolindex{YType::str, "protocolDistControlIndex"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    protocoldiststatsoctets{YType::uint32, "protocolDistStatsOctets"},
    protocoldiststatspkts{YType::uint32, "protocolDistStatsPkts"}
{

    yang_name = "protocolDistStatsEntry"; yang_parent_name = "protocolDistStatsTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::~Protocoldiststatsentry()
{
}

bool RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::has_data() const
{
    return protocoldistcontrolindex.is_set
	|| protocoldirlocalindex.is_set
	|| protocoldiststatsoctets.is_set
	|| protocoldiststatspkts.is_set;
}

bool RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldistcontrolindex.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(protocoldiststatsoctets.yfilter)
	|| ydk::is_set(protocoldiststatspkts.yfilter);
}

std::string RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/protocolDistStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistStatsEntry" <<"[protocolDistControlIndex='" <<protocoldistcontrolindex <<"']" <<"[protocolDirLocalIndex='" <<protocoldirlocalindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldistcontrolindex.is_set || is_set(protocoldistcontrolindex.yfilter)) leaf_name_data.push_back(protocoldistcontrolindex.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (protocoldiststatsoctets.is_set || is_set(protocoldiststatsoctets.yfilter)) leaf_name_data.push_back(protocoldiststatsoctets.get_name_leafdata());
    if (protocoldiststatspkts.is_set || is_set(protocoldiststatspkts.yfilter)) leaf_name_data.push_back(protocoldiststatspkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocolDistControlIndex")
    {
        protocoldistcontrolindex = value;
        protocoldistcontrolindex.value_namespace = name_space;
        protocoldistcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistStatsOctets")
    {
        protocoldiststatsoctets = value;
        protocoldiststatsoctets.value_namespace = name_space;
        protocoldiststatsoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistStatsPkts")
    {
        protocoldiststatspkts = value;
        protocoldiststatspkts.value_namespace = name_space;
        protocoldiststatspkts.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDistControlIndex")
    {
        protocoldistcontrolindex.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "protocolDistStatsOctets")
    {
        protocoldiststatsoctets.yfilter = yfilter;
    }
    if(value_path == "protocolDistStatsPkts")
    {
        protocoldiststatspkts.yfilter = yfilter;
    }
}

bool RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistControlIndex" || name == "protocolDirLocalIndex" || name == "protocolDistStatsOctets" || name == "protocolDistStatsPkts")
        return true;
    return false;
}

RMON2MIB::Serialconfigtable::Serialconfigtable()
{

    yang_name = "serialConfigTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Serialconfigtable::~Serialconfigtable()
{
}

bool RMON2MIB::Serialconfigtable::has_data() const
{
    for (std::size_t index=0; index<serialconfigentry.size(); index++)
    {
        if(serialconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Serialconfigtable::has_operation() const
{
    for (std::size_t index=0; index<serialconfigentry.size(); index++)
    {
        if(serialconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Serialconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Serialconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Serialconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Serialconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serialConfigEntry")
    {
        for(auto const & c : serialconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Serialconfigtable::Serialconfigentry>();
        c->parent = this;
        serialconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Serialconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : serialconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Serialconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Serialconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Serialconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serialConfigEntry")
        return true;
    return false;
}

RMON2MIB::Serialconfigtable::Serialconfigentry::Serialconfigentry()
    :
    ifindex{YType::str, "ifIndex"},
    serialdialouttimeout{YType::int32, "serialDialoutTimeout"},
    serialmode{YType::enumeration, "serialMode"},
    serialmodemconnectresp{YType::str, "serialModemConnectResp"},
    serialmodemhangupstring{YType::str, "serialModemHangUpString"},
    serialmodeminitstring{YType::str, "serialModemInitString"},
    serialmodemnoconnectresp{YType::str, "serialModemNoConnectResp"},
    serialprotocol{YType::enumeration, "serialProtocol"},
    serialstatus{YType::enumeration, "serialStatus"},
    serialtimeout{YType::int32, "serialTimeout"}
{

    yang_name = "serialConfigEntry"; yang_parent_name = "serialConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Serialconfigtable::Serialconfigentry::~Serialconfigentry()
{
}

bool RMON2MIB::Serialconfigtable::Serialconfigentry::has_data() const
{
    return ifindex.is_set
	|| serialdialouttimeout.is_set
	|| serialmode.is_set
	|| serialmodemconnectresp.is_set
	|| serialmodemhangupstring.is_set
	|| serialmodeminitstring.is_set
	|| serialmodemnoconnectresp.is_set
	|| serialprotocol.is_set
	|| serialstatus.is_set
	|| serialtimeout.is_set;
}

bool RMON2MIB::Serialconfigtable::Serialconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(serialdialouttimeout.yfilter)
	|| ydk::is_set(serialmode.yfilter)
	|| ydk::is_set(serialmodemconnectresp.yfilter)
	|| ydk::is_set(serialmodemhangupstring.yfilter)
	|| ydk::is_set(serialmodeminitstring.yfilter)
	|| ydk::is_set(serialmodemnoconnectresp.yfilter)
	|| ydk::is_set(serialprotocol.yfilter)
	|| ydk::is_set(serialstatus.yfilter)
	|| ydk::is_set(serialtimeout.yfilter);
}

std::string RMON2MIB::Serialconfigtable::Serialconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/serialConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Serialconfigtable::Serialconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConfigEntry" <<"[ifIndex='" <<ifindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Serialconfigtable::Serialconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (serialdialouttimeout.is_set || is_set(serialdialouttimeout.yfilter)) leaf_name_data.push_back(serialdialouttimeout.get_name_leafdata());
    if (serialmode.is_set || is_set(serialmode.yfilter)) leaf_name_data.push_back(serialmode.get_name_leafdata());
    if (serialmodemconnectresp.is_set || is_set(serialmodemconnectresp.yfilter)) leaf_name_data.push_back(serialmodemconnectresp.get_name_leafdata());
    if (serialmodemhangupstring.is_set || is_set(serialmodemhangupstring.yfilter)) leaf_name_data.push_back(serialmodemhangupstring.get_name_leafdata());
    if (serialmodeminitstring.is_set || is_set(serialmodeminitstring.yfilter)) leaf_name_data.push_back(serialmodeminitstring.get_name_leafdata());
    if (serialmodemnoconnectresp.is_set || is_set(serialmodemnoconnectresp.yfilter)) leaf_name_data.push_back(serialmodemnoconnectresp.get_name_leafdata());
    if (serialprotocol.is_set || is_set(serialprotocol.yfilter)) leaf_name_data.push_back(serialprotocol.get_name_leafdata());
    if (serialstatus.is_set || is_set(serialstatus.yfilter)) leaf_name_data.push_back(serialstatus.get_name_leafdata());
    if (serialtimeout.is_set || is_set(serialtimeout.yfilter)) leaf_name_data.push_back(serialtimeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Serialconfigtable::Serialconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Serialconfigtable::Serialconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Serialconfigtable::Serialconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialDialoutTimeout")
    {
        serialdialouttimeout = value;
        serialdialouttimeout.value_namespace = name_space;
        serialdialouttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialMode")
    {
        serialmode = value;
        serialmode.value_namespace = name_space;
        serialmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemConnectResp")
    {
        serialmodemconnectresp = value;
        serialmodemconnectresp.value_namespace = name_space;
        serialmodemconnectresp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemHangUpString")
    {
        serialmodemhangupstring = value;
        serialmodemhangupstring.value_namespace = name_space;
        serialmodemhangupstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemInitString")
    {
        serialmodeminitstring = value;
        serialmodeminitstring.value_namespace = name_space;
        serialmodeminitstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemNoConnectResp")
    {
        serialmodemnoconnectresp = value;
        serialmodemnoconnectresp.value_namespace = name_space;
        serialmodemnoconnectresp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialProtocol")
    {
        serialprotocol = value;
        serialprotocol.value_namespace = name_space;
        serialprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialStatus")
    {
        serialstatus = value;
        serialstatus.value_namespace = name_space;
        serialstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialTimeout")
    {
        serialtimeout = value;
        serialtimeout.value_namespace = name_space;
        serialtimeout.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Serialconfigtable::Serialconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "serialDialoutTimeout")
    {
        serialdialouttimeout.yfilter = yfilter;
    }
    if(value_path == "serialMode")
    {
        serialmode.yfilter = yfilter;
    }
    if(value_path == "serialModemConnectResp")
    {
        serialmodemconnectresp.yfilter = yfilter;
    }
    if(value_path == "serialModemHangUpString")
    {
        serialmodemhangupstring.yfilter = yfilter;
    }
    if(value_path == "serialModemInitString")
    {
        serialmodeminitstring.yfilter = yfilter;
    }
    if(value_path == "serialModemNoConnectResp")
    {
        serialmodemnoconnectresp.yfilter = yfilter;
    }
    if(value_path == "serialProtocol")
    {
        serialprotocol.yfilter = yfilter;
    }
    if(value_path == "serialStatus")
    {
        serialstatus.yfilter = yfilter;
    }
    if(value_path == "serialTimeout")
    {
        serialtimeout.yfilter = yfilter;
    }
}

bool RMON2MIB::Serialconfigtable::Serialconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "serialDialoutTimeout" || name == "serialMode" || name == "serialModemConnectResp" || name == "serialModemHangUpString" || name == "serialModemInitString" || name == "serialModemNoConnectResp" || name == "serialProtocol" || name == "serialStatus" || name == "serialTimeout")
        return true;
    return false;
}

RMON2MIB::Serialconnectiontable::Serialconnectiontable()
{

    yang_name = "serialConnectionTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Serialconnectiontable::~Serialconnectiontable()
{
}

bool RMON2MIB::Serialconnectiontable::has_data() const
{
    for (std::size_t index=0; index<serialconnectionentry.size(); index++)
    {
        if(serialconnectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Serialconnectiontable::has_operation() const
{
    for (std::size_t index=0; index<serialconnectionentry.size(); index++)
    {
        if(serialconnectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Serialconnectiontable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Serialconnectiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConnectionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Serialconnectiontable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Serialconnectiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serialConnectionEntry")
    {
        for(auto const & c : serialconnectionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Serialconnectiontable::Serialconnectionentry>();
        c->parent = this;
        serialconnectionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Serialconnectiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : serialconnectionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Serialconnectiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Serialconnectiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Serialconnectiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serialConnectionEntry")
        return true;
    return false;
}

RMON2MIB::Serialconnectiontable::Serialconnectionentry::Serialconnectionentry()
    :
    serialconnectindex{YType::int32, "serialConnectIndex"},
    serialconnectdestipaddress{YType::str, "serialConnectDestIpAddress"},
    serialconnectdialstring{YType::str, "serialConnectDialString"},
    serialconnectowner{YType::str, "serialConnectOwner"},
    serialconnectstatus{YType::enumeration, "serialConnectStatus"},
    serialconnectswitchconnectseq{YType::str, "serialConnectSwitchConnectSeq"},
    serialconnectswitchdisconnectseq{YType::str, "serialConnectSwitchDisconnectSeq"},
    serialconnectswitchresetseq{YType::str, "serialConnectSwitchResetSeq"},
    serialconnecttype{YType::enumeration, "serialConnectType"}
{

    yang_name = "serialConnectionEntry"; yang_parent_name = "serialConnectionTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Serialconnectiontable::Serialconnectionentry::~Serialconnectionentry()
{
}

bool RMON2MIB::Serialconnectiontable::Serialconnectionentry::has_data() const
{
    return serialconnectindex.is_set
	|| serialconnectdestipaddress.is_set
	|| serialconnectdialstring.is_set
	|| serialconnectowner.is_set
	|| serialconnectstatus.is_set
	|| serialconnectswitchconnectseq.is_set
	|| serialconnectswitchdisconnectseq.is_set
	|| serialconnectswitchresetseq.is_set
	|| serialconnecttype.is_set;
}

bool RMON2MIB::Serialconnectiontable::Serialconnectionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serialconnectindex.yfilter)
	|| ydk::is_set(serialconnectdestipaddress.yfilter)
	|| ydk::is_set(serialconnectdialstring.yfilter)
	|| ydk::is_set(serialconnectowner.yfilter)
	|| ydk::is_set(serialconnectstatus.yfilter)
	|| ydk::is_set(serialconnectswitchconnectseq.yfilter)
	|| ydk::is_set(serialconnectswitchdisconnectseq.yfilter)
	|| ydk::is_set(serialconnectswitchresetseq.yfilter)
	|| ydk::is_set(serialconnecttype.yfilter);
}

std::string RMON2MIB::Serialconnectiontable::Serialconnectionentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/serialConnectionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Serialconnectiontable::Serialconnectionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConnectionEntry" <<"[serialConnectIndex='" <<serialconnectindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Serialconnectiontable::Serialconnectionentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serialconnectindex.is_set || is_set(serialconnectindex.yfilter)) leaf_name_data.push_back(serialconnectindex.get_name_leafdata());
    if (serialconnectdestipaddress.is_set || is_set(serialconnectdestipaddress.yfilter)) leaf_name_data.push_back(serialconnectdestipaddress.get_name_leafdata());
    if (serialconnectdialstring.is_set || is_set(serialconnectdialstring.yfilter)) leaf_name_data.push_back(serialconnectdialstring.get_name_leafdata());
    if (serialconnectowner.is_set || is_set(serialconnectowner.yfilter)) leaf_name_data.push_back(serialconnectowner.get_name_leafdata());
    if (serialconnectstatus.is_set || is_set(serialconnectstatus.yfilter)) leaf_name_data.push_back(serialconnectstatus.get_name_leafdata());
    if (serialconnectswitchconnectseq.is_set || is_set(serialconnectswitchconnectseq.yfilter)) leaf_name_data.push_back(serialconnectswitchconnectseq.get_name_leafdata());
    if (serialconnectswitchdisconnectseq.is_set || is_set(serialconnectswitchdisconnectseq.yfilter)) leaf_name_data.push_back(serialconnectswitchdisconnectseq.get_name_leafdata());
    if (serialconnectswitchresetseq.is_set || is_set(serialconnectswitchresetseq.yfilter)) leaf_name_data.push_back(serialconnectswitchresetseq.get_name_leafdata());
    if (serialconnecttype.is_set || is_set(serialconnecttype.yfilter)) leaf_name_data.push_back(serialconnecttype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Serialconnectiontable::Serialconnectionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Serialconnectiontable::Serialconnectionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Serialconnectiontable::Serialconnectionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serialConnectIndex")
    {
        serialconnectindex = value;
        serialconnectindex.value_namespace = name_space;
        serialconnectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectDestIpAddress")
    {
        serialconnectdestipaddress = value;
        serialconnectdestipaddress.value_namespace = name_space;
        serialconnectdestipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectDialString")
    {
        serialconnectdialstring = value;
        serialconnectdialstring.value_namespace = name_space;
        serialconnectdialstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectOwner")
    {
        serialconnectowner = value;
        serialconnectowner.value_namespace = name_space;
        serialconnectowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectStatus")
    {
        serialconnectstatus = value;
        serialconnectstatus.value_namespace = name_space;
        serialconnectstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectSwitchConnectSeq")
    {
        serialconnectswitchconnectseq = value;
        serialconnectswitchconnectseq.value_namespace = name_space;
        serialconnectswitchconnectseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectSwitchDisconnectSeq")
    {
        serialconnectswitchdisconnectseq = value;
        serialconnectswitchdisconnectseq.value_namespace = name_space;
        serialconnectswitchdisconnectseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectSwitchResetSeq")
    {
        serialconnectswitchresetseq = value;
        serialconnectswitchresetseq.value_namespace = name_space;
        serialconnectswitchresetseq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectType")
    {
        serialconnecttype = value;
        serialconnecttype.value_namespace = name_space;
        serialconnecttype.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Serialconnectiontable::Serialconnectionentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serialConnectIndex")
    {
        serialconnectindex.yfilter = yfilter;
    }
    if(value_path == "serialConnectDestIpAddress")
    {
        serialconnectdestipaddress.yfilter = yfilter;
    }
    if(value_path == "serialConnectDialString")
    {
        serialconnectdialstring.yfilter = yfilter;
    }
    if(value_path == "serialConnectOwner")
    {
        serialconnectowner.yfilter = yfilter;
    }
    if(value_path == "serialConnectStatus")
    {
        serialconnectstatus.yfilter = yfilter;
    }
    if(value_path == "serialConnectSwitchConnectSeq")
    {
        serialconnectswitchconnectseq.yfilter = yfilter;
    }
    if(value_path == "serialConnectSwitchDisconnectSeq")
    {
        serialconnectswitchdisconnectseq.yfilter = yfilter;
    }
    if(value_path == "serialConnectSwitchResetSeq")
    {
        serialconnectswitchresetseq.yfilter = yfilter;
    }
    if(value_path == "serialConnectType")
    {
        serialconnecttype.yfilter = yfilter;
    }
}

bool RMON2MIB::Serialconnectiontable::Serialconnectionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serialConnectIndex" || name == "serialConnectDestIpAddress" || name == "serialConnectDialString" || name == "serialConnectOwner" || name == "serialConnectStatus" || name == "serialConnectSwitchConnectSeq" || name == "serialConnectSwitchDisconnectSeq" || name == "serialConnectSwitchResetSeq" || name == "serialConnectType")
        return true;
    return false;
}

RMON2MIB::Trapdesttable::Trapdesttable()
{

    yang_name = "trapDestTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Trapdesttable::~Trapdesttable()
{
}

bool RMON2MIB::Trapdesttable::has_data() const
{
    for (std::size_t index=0; index<trapdestentry.size(); index++)
    {
        if(trapdestentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Trapdesttable::has_operation() const
{
    for (std::size_t index=0; index<trapdestentry.size(); index++)
    {
        if(trapdestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Trapdesttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Trapdesttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trapDestTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Trapdesttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Trapdesttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trapDestEntry")
    {
        for(auto const & c : trapdestentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Trapdesttable::Trapdestentry>();
        c->parent = this;
        trapdestentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Trapdesttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trapdestentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Trapdesttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Trapdesttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Trapdesttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapDestEntry")
        return true;
    return false;
}

RMON2MIB::Trapdesttable::Trapdestentry::Trapdestentry()
    :
    trapdestindex{YType::int32, "trapDestIndex"},
    trapdestaddress{YType::str, "trapDestAddress"},
    trapdestcommunity{YType::str, "trapDestCommunity"},
    trapdestowner{YType::str, "trapDestOwner"},
    trapdestprotocol{YType::enumeration, "trapDestProtocol"},
    trapdeststatus{YType::enumeration, "trapDestStatus"}
{

    yang_name = "trapDestEntry"; yang_parent_name = "trapDestTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Trapdesttable::Trapdestentry::~Trapdestentry()
{
}

bool RMON2MIB::Trapdesttable::Trapdestentry::has_data() const
{
    return trapdestindex.is_set
	|| trapdestaddress.is_set
	|| trapdestcommunity.is_set
	|| trapdestowner.is_set
	|| trapdestprotocol.is_set
	|| trapdeststatus.is_set;
}

bool RMON2MIB::Trapdesttable::Trapdestentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapdestindex.yfilter)
	|| ydk::is_set(trapdestaddress.yfilter)
	|| ydk::is_set(trapdestcommunity.yfilter)
	|| ydk::is_set(trapdestowner.yfilter)
	|| ydk::is_set(trapdestprotocol.yfilter)
	|| ydk::is_set(trapdeststatus.yfilter);
}

std::string RMON2MIB::Trapdesttable::Trapdestentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/trapDestTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Trapdesttable::Trapdestentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trapDestEntry" <<"[trapDestIndex='" <<trapdestindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Trapdesttable::Trapdestentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapdestindex.is_set || is_set(trapdestindex.yfilter)) leaf_name_data.push_back(trapdestindex.get_name_leafdata());
    if (trapdestaddress.is_set || is_set(trapdestaddress.yfilter)) leaf_name_data.push_back(trapdestaddress.get_name_leafdata());
    if (trapdestcommunity.is_set || is_set(trapdestcommunity.yfilter)) leaf_name_data.push_back(trapdestcommunity.get_name_leafdata());
    if (trapdestowner.is_set || is_set(trapdestowner.yfilter)) leaf_name_data.push_back(trapdestowner.get_name_leafdata());
    if (trapdestprotocol.is_set || is_set(trapdestprotocol.yfilter)) leaf_name_data.push_back(trapdestprotocol.get_name_leafdata());
    if (trapdeststatus.is_set || is_set(trapdeststatus.yfilter)) leaf_name_data.push_back(trapdeststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Trapdesttable::Trapdestentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Trapdesttable::Trapdestentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Trapdesttable::Trapdestentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapDestIndex")
    {
        trapdestindex = value;
        trapdestindex.value_namespace = name_space;
        trapdestindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestAddress")
    {
        trapdestaddress = value;
        trapdestaddress.value_namespace = name_space;
        trapdestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestCommunity")
    {
        trapdestcommunity = value;
        trapdestcommunity.value_namespace = name_space;
        trapdestcommunity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestOwner")
    {
        trapdestowner = value;
        trapdestowner.value_namespace = name_space;
        trapdestowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestProtocol")
    {
        trapdestprotocol = value;
        trapdestprotocol.value_namespace = name_space;
        trapdestprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestStatus")
    {
        trapdeststatus = value;
        trapdeststatus.value_namespace = name_space;
        trapdeststatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Trapdesttable::Trapdestentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapDestIndex")
    {
        trapdestindex.yfilter = yfilter;
    }
    if(value_path == "trapDestAddress")
    {
        trapdestaddress.yfilter = yfilter;
    }
    if(value_path == "trapDestCommunity")
    {
        trapdestcommunity.yfilter = yfilter;
    }
    if(value_path == "trapDestOwner")
    {
        trapdestowner.yfilter = yfilter;
    }
    if(value_path == "trapDestProtocol")
    {
        trapdestprotocol.yfilter = yfilter;
    }
    if(value_path == "trapDestStatus")
    {
        trapdeststatus.yfilter = yfilter;
    }
}

bool RMON2MIB::Trapdesttable::Trapdestentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapDestIndex" || name == "trapDestAddress" || name == "trapDestCommunity" || name == "trapDestOwner" || name == "trapDestProtocol" || name == "trapDestStatus")
        return true;
    return false;
}

RMON2MIB::Usrhistorycontroltable::Usrhistorycontroltable()
{

    yang_name = "usrHistoryControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Usrhistorycontroltable::~Usrhistorycontroltable()
{
}

bool RMON2MIB::Usrhistorycontroltable::has_data() const
{
    for (std::size_t index=0; index<usrhistorycontrolentry.size(); index++)
    {
        if(usrhistorycontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Usrhistorycontroltable::has_operation() const
{
    for (std::size_t index=0; index<usrhistorycontrolentry.size(); index++)
    {
        if(usrhistorycontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Usrhistorycontroltable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Usrhistorycontroltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Usrhistorycontroltable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Usrhistorycontroltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usrHistoryControlEntry")
    {
        for(auto const & c : usrhistorycontrolentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry>();
        c->parent = this;
        usrhistorycontrolentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Usrhistorycontroltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : usrhistorycontrolentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Usrhistorycontroltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Usrhistorycontroltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Usrhistorycontroltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlEntry")
        return true;
    return false;
}

RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::Usrhistorycontrolentry()
    :
    usrhistorycontrolindex{YType::int32, "usrHistoryControlIndex"},
    usrhistorycontrolbucketsgranted{YType::int32, "usrHistoryControlBucketsGranted"},
    usrhistorycontrolbucketsrequested{YType::int32, "usrHistoryControlBucketsRequested"},
    usrhistorycontrolinterval{YType::int32, "usrHistoryControlInterval"},
    usrhistorycontrolobjects{YType::int32, "usrHistoryControlObjects"},
    usrhistorycontrolowner{YType::str, "usrHistoryControlOwner"},
    usrhistorycontrolstatus{YType::enumeration, "usrHistoryControlStatus"}
{

    yang_name = "usrHistoryControlEntry"; yang_parent_name = "usrHistoryControlTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::~Usrhistorycontrolentry()
{
}

bool RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::has_data() const
{
    return usrhistorycontrolindex.is_set
	|| usrhistorycontrolbucketsgranted.is_set
	|| usrhistorycontrolbucketsrequested.is_set
	|| usrhistorycontrolinterval.is_set
	|| usrhistorycontrolobjects.is_set
	|| usrhistorycontrolowner.is_set
	|| usrhistorycontrolstatus.is_set;
}

bool RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usrhistorycontrolindex.yfilter)
	|| ydk::is_set(usrhistorycontrolbucketsgranted.yfilter)
	|| ydk::is_set(usrhistorycontrolbucketsrequested.yfilter)
	|| ydk::is_set(usrhistorycontrolinterval.yfilter)
	|| ydk::is_set(usrhistorycontrolobjects.yfilter)
	|| ydk::is_set(usrhistorycontrolowner.yfilter)
	|| ydk::is_set(usrhistorycontrolstatus.yfilter);
}

std::string RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/usrHistoryControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryControlEntry" <<"[usrHistoryControlIndex='" <<usrhistorycontrolindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usrhistorycontrolindex.is_set || is_set(usrhistorycontrolindex.yfilter)) leaf_name_data.push_back(usrhistorycontrolindex.get_name_leafdata());
    if (usrhistorycontrolbucketsgranted.is_set || is_set(usrhistorycontrolbucketsgranted.yfilter)) leaf_name_data.push_back(usrhistorycontrolbucketsgranted.get_name_leafdata());
    if (usrhistorycontrolbucketsrequested.is_set || is_set(usrhistorycontrolbucketsrequested.yfilter)) leaf_name_data.push_back(usrhistorycontrolbucketsrequested.get_name_leafdata());
    if (usrhistorycontrolinterval.is_set || is_set(usrhistorycontrolinterval.yfilter)) leaf_name_data.push_back(usrhistorycontrolinterval.get_name_leafdata());
    if (usrhistorycontrolobjects.is_set || is_set(usrhistorycontrolobjects.yfilter)) leaf_name_data.push_back(usrhistorycontrolobjects.get_name_leafdata());
    if (usrhistorycontrolowner.is_set || is_set(usrhistorycontrolowner.yfilter)) leaf_name_data.push_back(usrhistorycontrolowner.get_name_leafdata());
    if (usrhistorycontrolstatus.is_set || is_set(usrhistorycontrolstatus.yfilter)) leaf_name_data.push_back(usrhistorycontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex = value;
        usrhistorycontrolindex.value_namespace = name_space;
        usrhistorycontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlBucketsGranted")
    {
        usrhistorycontrolbucketsgranted = value;
        usrhistorycontrolbucketsgranted.value_namespace = name_space;
        usrhistorycontrolbucketsgranted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlBucketsRequested")
    {
        usrhistorycontrolbucketsrequested = value;
        usrhistorycontrolbucketsrequested.value_namespace = name_space;
        usrhistorycontrolbucketsrequested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlInterval")
    {
        usrhistorycontrolinterval = value;
        usrhistorycontrolinterval.value_namespace = name_space;
        usrhistorycontrolinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlObjects")
    {
        usrhistorycontrolobjects = value;
        usrhistorycontrolobjects.value_namespace = name_space;
        usrhistorycontrolobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlOwner")
    {
        usrhistorycontrolowner = value;
        usrhistorycontrolowner.value_namespace = name_space;
        usrhistorycontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlStatus")
    {
        usrhistorycontrolstatus = value;
        usrhistorycontrolstatus.value_namespace = name_space;
        usrhistorycontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlBucketsGranted")
    {
        usrhistorycontrolbucketsgranted.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlBucketsRequested")
    {
        usrhistorycontrolbucketsrequested.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlInterval")
    {
        usrhistorycontrolinterval.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlObjects")
    {
        usrhistorycontrolobjects.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlOwner")
    {
        usrhistorycontrolowner.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlStatus")
    {
        usrhistorycontrolstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlIndex" || name == "usrHistoryControlBucketsGranted" || name == "usrHistoryControlBucketsRequested" || name == "usrHistoryControlInterval" || name == "usrHistoryControlObjects" || name == "usrHistoryControlOwner" || name == "usrHistoryControlStatus")
        return true;
    return false;
}

RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjecttable()
{

    yang_name = "usrHistoryObjectTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Usrhistoryobjecttable::~Usrhistoryobjecttable()
{
}

bool RMON2MIB::Usrhistoryobjecttable::has_data() const
{
    for (std::size_t index=0; index<usrhistoryobjectentry.size(); index++)
    {
        if(usrhistoryobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Usrhistoryobjecttable::has_operation() const
{
    for (std::size_t index=0; index<usrhistoryobjectentry.size(); index++)
    {
        if(usrhistoryobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Usrhistoryobjecttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Usrhistoryobjecttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryObjectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Usrhistoryobjecttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Usrhistoryobjecttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usrHistoryObjectEntry")
    {
        for(auto const & c : usrhistoryobjectentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry>();
        c->parent = this;
        usrhistoryobjectentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Usrhistoryobjecttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : usrhistoryobjectentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Usrhistoryobjecttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Usrhistoryobjecttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Usrhistoryobjecttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryObjectEntry")
        return true;
    return false;
}

RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::Usrhistoryobjectentry()
    :
    usrhistorycontrolindex{YType::str, "usrHistoryControlIndex"},
    usrhistoryobjectindex{YType::int32, "usrHistoryObjectIndex"},
    usrhistoryobjectsampletype{YType::enumeration, "usrHistoryObjectSampleType"},
    usrhistoryobjectvariable{YType::str, "usrHistoryObjectVariable"}
{

    yang_name = "usrHistoryObjectEntry"; yang_parent_name = "usrHistoryObjectTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::~Usrhistoryobjectentry()
{
}

bool RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::has_data() const
{
    return usrhistorycontrolindex.is_set
	|| usrhistoryobjectindex.is_set
	|| usrhistoryobjectsampletype.is_set
	|| usrhistoryobjectvariable.is_set;
}

bool RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usrhistorycontrolindex.yfilter)
	|| ydk::is_set(usrhistoryobjectindex.yfilter)
	|| ydk::is_set(usrhistoryobjectsampletype.yfilter)
	|| ydk::is_set(usrhistoryobjectvariable.yfilter);
}

std::string RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/usrHistoryObjectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryObjectEntry" <<"[usrHistoryControlIndex='" <<usrhistorycontrolindex <<"']" <<"[usrHistoryObjectIndex='" <<usrhistoryobjectindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usrhistorycontrolindex.is_set || is_set(usrhistorycontrolindex.yfilter)) leaf_name_data.push_back(usrhistorycontrolindex.get_name_leafdata());
    if (usrhistoryobjectindex.is_set || is_set(usrhistoryobjectindex.yfilter)) leaf_name_data.push_back(usrhistoryobjectindex.get_name_leafdata());
    if (usrhistoryobjectsampletype.is_set || is_set(usrhistoryobjectsampletype.yfilter)) leaf_name_data.push_back(usrhistoryobjectsampletype.get_name_leafdata());
    if (usrhistoryobjectvariable.is_set || is_set(usrhistoryobjectvariable.yfilter)) leaf_name_data.push_back(usrhistoryobjectvariable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex = value;
        usrhistorycontrolindex.value_namespace = name_space;
        usrhistorycontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryObjectIndex")
    {
        usrhistoryobjectindex = value;
        usrhistoryobjectindex.value_namespace = name_space;
        usrhistoryobjectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryObjectSampleType")
    {
        usrhistoryobjectsampletype = value;
        usrhistoryobjectsampletype.value_namespace = name_space;
        usrhistoryobjectsampletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryObjectVariable")
    {
        usrhistoryobjectvariable = value;
        usrhistoryobjectvariable.value_namespace = name_space;
        usrhistoryobjectvariable.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryObjectIndex")
    {
        usrhistoryobjectindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryObjectSampleType")
    {
        usrhistoryobjectsampletype.yfilter = yfilter;
    }
    if(value_path == "usrHistoryObjectVariable")
    {
        usrhistoryobjectvariable.yfilter = yfilter;
    }
}

bool RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlIndex" || name == "usrHistoryObjectIndex" || name == "usrHistoryObjectSampleType" || name == "usrHistoryObjectVariable")
        return true;
    return false;
}

RMON2MIB::Usrhistorytable::Usrhistorytable()
{

    yang_name = "usrHistoryTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Usrhistorytable::~Usrhistorytable()
{
}

bool RMON2MIB::Usrhistorytable::has_data() const
{
    for (std::size_t index=0; index<usrhistoryentry.size(); index++)
    {
        if(usrhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::Usrhistorytable::has_operation() const
{
    for (std::size_t index=0; index<usrhistoryentry.size(); index++)
    {
        if(usrhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::Usrhistorytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Usrhistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Usrhistorytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Usrhistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usrHistoryEntry")
    {
        for(auto const & c : usrhistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<RMON2MIB::Usrhistorytable::Usrhistoryentry>();
        c->parent = this;
        usrhistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Usrhistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : usrhistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void RMON2MIB::Usrhistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::Usrhistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::Usrhistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryEntry")
        return true;
    return false;
}

RMON2MIB::Usrhistorytable::Usrhistoryentry::Usrhistoryentry()
    :
    usrhistorycontrolindex{YType::str, "usrHistoryControlIndex"},
    usrhistorysampleindex{YType::int32, "usrHistorySampleIndex"},
    usrhistoryobjectindex{YType::str, "usrHistoryObjectIndex"},
    usrhistoryabsvalue{YType::uint32, "usrHistoryAbsValue"},
    usrhistoryintervalend{YType::uint32, "usrHistoryIntervalEnd"},
    usrhistoryintervalstart{YType::uint32, "usrHistoryIntervalStart"},
    usrhistoryvalstatus{YType::enumeration, "usrHistoryValStatus"}
{

    yang_name = "usrHistoryEntry"; yang_parent_name = "usrHistoryTable"; is_top_level_class = false; has_list_ancestor = false;
}

RMON2MIB::Usrhistorytable::Usrhistoryentry::~Usrhistoryentry()
{
}

bool RMON2MIB::Usrhistorytable::Usrhistoryentry::has_data() const
{
    return usrhistorycontrolindex.is_set
	|| usrhistorysampleindex.is_set
	|| usrhistoryobjectindex.is_set
	|| usrhistoryabsvalue.is_set
	|| usrhistoryintervalend.is_set
	|| usrhistoryintervalstart.is_set
	|| usrhistoryvalstatus.is_set;
}

bool RMON2MIB::Usrhistorytable::Usrhistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usrhistorycontrolindex.yfilter)
	|| ydk::is_set(usrhistorysampleindex.yfilter)
	|| ydk::is_set(usrhistoryobjectindex.yfilter)
	|| ydk::is_set(usrhistoryabsvalue.yfilter)
	|| ydk::is_set(usrhistoryintervalend.yfilter)
	|| ydk::is_set(usrhistoryintervalstart.yfilter)
	|| ydk::is_set(usrhistoryvalstatus.yfilter);
}

std::string RMON2MIB::Usrhistorytable::Usrhistoryentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/usrHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::Usrhistorytable::Usrhistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryEntry" <<"[usrHistoryControlIndex='" <<usrhistorycontrolindex <<"']" <<"[usrHistorySampleIndex='" <<usrhistorysampleindex <<"']" <<"[usrHistoryObjectIndex='" <<usrhistoryobjectindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::Usrhistorytable::Usrhistoryentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usrhistorycontrolindex.is_set || is_set(usrhistorycontrolindex.yfilter)) leaf_name_data.push_back(usrhistorycontrolindex.get_name_leafdata());
    if (usrhistorysampleindex.is_set || is_set(usrhistorysampleindex.yfilter)) leaf_name_data.push_back(usrhistorysampleindex.get_name_leafdata());
    if (usrhistoryobjectindex.is_set || is_set(usrhistoryobjectindex.yfilter)) leaf_name_data.push_back(usrhistoryobjectindex.get_name_leafdata());
    if (usrhistoryabsvalue.is_set || is_set(usrhistoryabsvalue.yfilter)) leaf_name_data.push_back(usrhistoryabsvalue.get_name_leafdata());
    if (usrhistoryintervalend.is_set || is_set(usrhistoryintervalend.yfilter)) leaf_name_data.push_back(usrhistoryintervalend.get_name_leafdata());
    if (usrhistoryintervalstart.is_set || is_set(usrhistoryintervalstart.yfilter)) leaf_name_data.push_back(usrhistoryintervalstart.get_name_leafdata());
    if (usrhistoryvalstatus.is_set || is_set(usrhistoryvalstatus.yfilter)) leaf_name_data.push_back(usrhistoryvalstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::Usrhistorytable::Usrhistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::Usrhistorytable::Usrhistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void RMON2MIB::Usrhistorytable::Usrhistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex = value;
        usrhistorycontrolindex.value_namespace = name_space;
        usrhistorycontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistorySampleIndex")
    {
        usrhistorysampleindex = value;
        usrhistorysampleindex.value_namespace = name_space;
        usrhistorysampleindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryObjectIndex")
    {
        usrhistoryobjectindex = value;
        usrhistoryobjectindex.value_namespace = name_space;
        usrhistoryobjectindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryAbsValue")
    {
        usrhistoryabsvalue = value;
        usrhistoryabsvalue.value_namespace = name_space;
        usrhistoryabsvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryIntervalEnd")
    {
        usrhistoryintervalend = value;
        usrhistoryintervalend.value_namespace = name_space;
        usrhistoryintervalend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryIntervalStart")
    {
        usrhistoryintervalstart = value;
        usrhistoryintervalstart.value_namespace = name_space;
        usrhistoryintervalstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryValStatus")
    {
        usrhistoryvalstatus = value;
        usrhistoryvalstatus.value_namespace = name_space;
        usrhistoryvalstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::Usrhistorytable::Usrhistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex.yfilter = yfilter;
    }
    if(value_path == "usrHistorySampleIndex")
    {
        usrhistorysampleindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryObjectIndex")
    {
        usrhistoryobjectindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryAbsValue")
    {
        usrhistoryabsvalue.yfilter = yfilter;
    }
    if(value_path == "usrHistoryIntervalEnd")
    {
        usrhistoryintervalend.yfilter = yfilter;
    }
    if(value_path == "usrHistoryIntervalStart")
    {
        usrhistoryintervalstart.yfilter = yfilter;
    }
    if(value_path == "usrHistoryValStatus")
    {
        usrhistoryvalstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::Usrhistorytable::Usrhistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlIndex" || name == "usrHistorySampleIndex" || name == "usrHistoryObjectIndex" || name == "usrHistoryAbsValue" || name == "usrHistoryIntervalEnd" || name == "usrHistoryIntervalStart" || name == "usrHistoryValStatus")
        return true;
    return false;
}

const Enum::YLeaf RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::Almatrixtopncontrolratebase::alMatrixTopNTerminalsPkts {1, "alMatrixTopNTerminalsPkts"};
const Enum::YLeaf RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::Almatrixtopncontrolratebase::alMatrixTopNTerminalsOctets {2, "alMatrixTopNTerminalsOctets"};
const Enum::YLeaf RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::Almatrixtopncontrolratebase::alMatrixTopNAllPkts {3, "alMatrixTopNAllPkts"};
const Enum::YLeaf RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::Almatrixtopncontrolratebase::alMatrixTopNAllOctets {4, "alMatrixTopNAllOctets"};

const Enum::YLeaf RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::Nlmatrixtopncontrolratebase::nlMatrixTopNPkts {1, "nlMatrixTopNPkts"};
const Enum::YLeaf RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::Nlmatrixtopncontrolratebase::nlMatrixTopNOctets {2, "nlMatrixTopNOctets"};

const Enum::YLeaf RMON2MIB::Probeconfig::Proberesetcontrol::running {1, "running"};
const Enum::YLeaf RMON2MIB::Probeconfig::Proberesetcontrol::warmBoot {2, "warmBoot"};
const Enum::YLeaf RMON2MIB::Probeconfig::Proberesetcontrol::coldBoot {3, "coldBoot"};

const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadaction::notDownloading {1, "notDownloading"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadaction::downloadToPROM {2, "downloadToPROM"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadaction::downloadToRAM {3, "downloadToRAM"};

const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadSuccess {1, "downloadSuccess"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadStatusUnknown {2, "downloadStatusUnknown"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadGeneralError {3, "downloadGeneralError"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadNoResponseFromServer {4, "downloadNoResponseFromServer"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadChecksumError {5, "downloadChecksumError"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadIncompatibleImage {6, "downloadIncompatibleImage"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadTftpFileNotFound {7, "downloadTftpFileNotFound"};
const Enum::YLeaf RMON2MIB::Probeconfig::Probedownloadstatus::downloadTftpAccessViolation {8, "downloadTftpAccessViolation"};

const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldiraddressmapconfig::notSupported {1, "notSupported"};
const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldiraddressmapconfig::supportedOff {2, "supportedOff"};
const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldiraddressmapconfig::supportedOn {3, "supportedOn"};

const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirhostconfig::notSupported {1, "notSupported"};
const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirhostconfig::supportedOff {2, "supportedOff"};
const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirhostconfig::supportedOn {3, "supportedOn"};

const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirmatrixconfig::notSupported {1, "notSupported"};
const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirmatrixconfig::supportedOff {2, "supportedOff"};
const Enum::YLeaf RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirmatrixconfig::supportedOn {3, "supportedOn"};

const Enum::YLeaf RMON2MIB::Serialconfigtable::Serialconfigentry::Serialmode::direct {1, "direct"};
const Enum::YLeaf RMON2MIB::Serialconfigtable::Serialconfigentry::Serialmode::modem {2, "modem"};

const Enum::YLeaf RMON2MIB::Serialconfigtable::Serialconfigentry::Serialprotocol::other {1, "other"};
const Enum::YLeaf RMON2MIB::Serialconfigtable::Serialconfigentry::Serialprotocol::slip {2, "slip"};
const Enum::YLeaf RMON2MIB::Serialconfigtable::Serialconfigentry::Serialprotocol::ppp {3, "ppp"};

const Enum::YLeaf RMON2MIB::Serialconnectiontable::Serialconnectionentry::Serialconnecttype::direct {1, "direct"};
const Enum::YLeaf RMON2MIB::Serialconnectiontable::Serialconnectionentry::Serialconnecttype::modem {2, "modem"};
const Enum::YLeaf RMON2MIB::Serialconnectiontable::Serialconnectionentry::Serialconnecttype::switch_ {3, "switch"};
const Enum::YLeaf RMON2MIB::Serialconnectiontable::Serialconnectionentry::Serialconnecttype::modemSwitch {4, "modemSwitch"};

const Enum::YLeaf RMON2MIB::Trapdesttable::Trapdestentry::Trapdestprotocol::ip {1, "ip"};
const Enum::YLeaf RMON2MIB::Trapdesttable::Trapdestentry::Trapdestprotocol::ipx {2, "ipx"};

const Enum::YLeaf RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::Usrhistoryobjectsampletype::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::Usrhistoryobjectsampletype::deltaValue {2, "deltaValue"};

const Enum::YLeaf RMON2MIB::Usrhistorytable::Usrhistoryentry::Usrhistoryvalstatus::valueNotAvailable {1, "valueNotAvailable"};
const Enum::YLeaf RMON2MIB::Usrhistorytable::Usrhistoryentry::Usrhistoryvalstatus::valuePositive {2, "valuePositive"};
const Enum::YLeaf RMON2MIB::Usrhistorytable::Usrhistoryentry::Usrhistoryvalstatus::valueNegative {3, "valueNegative"};


}
}

