
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
    protocoldir(std::make_shared<RMON2MIB::ProtocolDir>())
    , addressmap(std::make_shared<RMON2MIB::AddressMap>())
    , probeconfig(std::make_shared<RMON2MIB::ProbeConfig>())
    , protocoldirtable(std::make_shared<RMON2MIB::ProtocolDirTable>())
    , protocoldistcontroltable(std::make_shared<RMON2MIB::ProtocolDistControlTable>())
    , protocoldiststatstable(std::make_shared<RMON2MIB::ProtocolDistStatsTable>())
    , addressmapcontroltable(std::make_shared<RMON2MIB::AddressMapControlTable>())
    , addressmaptable(std::make_shared<RMON2MIB::AddressMapTable>())
    , hlhostcontroltable(std::make_shared<RMON2MIB::HlHostControlTable>())
    , nlhosttable(std::make_shared<RMON2MIB::NlHostTable>())
    , hlmatrixcontroltable(std::make_shared<RMON2MIB::HlMatrixControlTable>())
    , nlmatrixsdtable(std::make_shared<RMON2MIB::NlMatrixSDTable>())
    , nlmatrixdstable(std::make_shared<RMON2MIB::NlMatrixDSTable>())
    , nlmatrixtopncontroltable(std::make_shared<RMON2MIB::NlMatrixTopNControlTable>())
    , nlmatrixtopntable(std::make_shared<RMON2MIB::NlMatrixTopNTable>())
    , alhosttable(std::make_shared<RMON2MIB::AlHostTable>())
    , almatrixsdtable(std::make_shared<RMON2MIB::AlMatrixSDTable>())
    , almatrixdstable(std::make_shared<RMON2MIB::AlMatrixDSTable>())
    , almatrixtopncontroltable(std::make_shared<RMON2MIB::AlMatrixTopNControlTable>())
    , almatrixtopntable(std::make_shared<RMON2MIB::AlMatrixTopNTable>())
    , usrhistorycontroltable(std::make_shared<RMON2MIB::UsrHistoryControlTable>())
    , usrhistoryobjecttable(std::make_shared<RMON2MIB::UsrHistoryObjectTable>())
    , usrhistorytable(std::make_shared<RMON2MIB::UsrHistoryTable>())
    , serialconfigtable(std::make_shared<RMON2MIB::SerialConfigTable>())
    , netconfigtable(std::make_shared<RMON2MIB::NetConfigTable>())
    , trapdesttable(std::make_shared<RMON2MIB::TrapDestTable>())
    , serialconnectiontable(std::make_shared<RMON2MIB::SerialConnectionTable>())
{
    protocoldir->parent = this;
    addressmap->parent = this;
    probeconfig->parent = this;
    protocoldirtable->parent = this;
    protocoldistcontroltable->parent = this;
    protocoldiststatstable->parent = this;
    addressmapcontroltable->parent = this;
    addressmaptable->parent = this;
    hlhostcontroltable->parent = this;
    nlhosttable->parent = this;
    hlmatrixcontroltable->parent = this;
    nlmatrixsdtable->parent = this;
    nlmatrixdstable->parent = this;
    nlmatrixtopncontroltable->parent = this;
    nlmatrixtopntable->parent = this;
    alhosttable->parent = this;
    almatrixsdtable->parent = this;
    almatrixdstable->parent = this;
    almatrixtopncontroltable->parent = this;
    almatrixtopntable->parent = this;
    usrhistorycontroltable->parent = this;
    usrhistoryobjecttable->parent = this;
    usrhistorytable->parent = this;
    serialconfigtable->parent = this;
    netconfigtable->parent = this;
    trapdesttable->parent = this;
    serialconnectiontable->parent = this;

    yang_name = "RMON2-MIB"; yang_parent_name = "RMON2-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

RMON2MIB::~RMON2MIB()
{
}

bool RMON2MIB::has_data() const
{
    if (is_presence_container) return true;
    return (protocoldir !=  nullptr && protocoldir->has_data())
	|| (addressmap !=  nullptr && addressmap->has_data())
	|| (probeconfig !=  nullptr && probeconfig->has_data())
	|| (protocoldirtable !=  nullptr && protocoldirtable->has_data())
	|| (protocoldistcontroltable !=  nullptr && protocoldistcontroltable->has_data())
	|| (protocoldiststatstable !=  nullptr && protocoldiststatstable->has_data())
	|| (addressmapcontroltable !=  nullptr && addressmapcontroltable->has_data())
	|| (addressmaptable !=  nullptr && addressmaptable->has_data())
	|| (hlhostcontroltable !=  nullptr && hlhostcontroltable->has_data())
	|| (nlhosttable !=  nullptr && nlhosttable->has_data())
	|| (hlmatrixcontroltable !=  nullptr && hlmatrixcontroltable->has_data())
	|| (nlmatrixsdtable !=  nullptr && nlmatrixsdtable->has_data())
	|| (nlmatrixdstable !=  nullptr && nlmatrixdstable->has_data())
	|| (nlmatrixtopncontroltable !=  nullptr && nlmatrixtopncontroltable->has_data())
	|| (nlmatrixtopntable !=  nullptr && nlmatrixtopntable->has_data())
	|| (alhosttable !=  nullptr && alhosttable->has_data())
	|| (almatrixsdtable !=  nullptr && almatrixsdtable->has_data())
	|| (almatrixdstable !=  nullptr && almatrixdstable->has_data())
	|| (almatrixtopncontroltable !=  nullptr && almatrixtopncontroltable->has_data())
	|| (almatrixtopntable !=  nullptr && almatrixtopntable->has_data())
	|| (usrhistorycontroltable !=  nullptr && usrhistorycontroltable->has_data())
	|| (usrhistoryobjecttable !=  nullptr && usrhistoryobjecttable->has_data())
	|| (usrhistorytable !=  nullptr && usrhistorytable->has_data())
	|| (serialconfigtable !=  nullptr && serialconfigtable->has_data())
	|| (netconfigtable !=  nullptr && netconfigtable->has_data())
	|| (trapdesttable !=  nullptr && trapdesttable->has_data())
	|| (serialconnectiontable !=  nullptr && serialconnectiontable->has_data());
}

bool RMON2MIB::has_operation() const
{
    return is_set(yfilter)
	|| (protocoldir !=  nullptr && protocoldir->has_operation())
	|| (addressmap !=  nullptr && addressmap->has_operation())
	|| (probeconfig !=  nullptr && probeconfig->has_operation())
	|| (protocoldirtable !=  nullptr && protocoldirtable->has_operation())
	|| (protocoldistcontroltable !=  nullptr && protocoldistcontroltable->has_operation())
	|| (protocoldiststatstable !=  nullptr && protocoldiststatstable->has_operation())
	|| (addressmapcontroltable !=  nullptr && addressmapcontroltable->has_operation())
	|| (addressmaptable !=  nullptr && addressmaptable->has_operation())
	|| (hlhostcontroltable !=  nullptr && hlhostcontroltable->has_operation())
	|| (nlhosttable !=  nullptr && nlhosttable->has_operation())
	|| (hlmatrixcontroltable !=  nullptr && hlmatrixcontroltable->has_operation())
	|| (nlmatrixsdtable !=  nullptr && nlmatrixsdtable->has_operation())
	|| (nlmatrixdstable !=  nullptr && nlmatrixdstable->has_operation())
	|| (nlmatrixtopncontroltable !=  nullptr && nlmatrixtopncontroltable->has_operation())
	|| (nlmatrixtopntable !=  nullptr && nlmatrixtopntable->has_operation())
	|| (alhosttable !=  nullptr && alhosttable->has_operation())
	|| (almatrixsdtable !=  nullptr && almatrixsdtable->has_operation())
	|| (almatrixdstable !=  nullptr && almatrixdstable->has_operation())
	|| (almatrixtopncontroltable !=  nullptr && almatrixtopncontroltable->has_operation())
	|| (almatrixtopntable !=  nullptr && almatrixtopntable->has_operation())
	|| (usrhistorycontroltable !=  nullptr && usrhistorycontroltable->has_operation())
	|| (usrhistoryobjecttable !=  nullptr && usrhistoryobjecttable->has_operation())
	|| (usrhistorytable !=  nullptr && usrhistorytable->has_operation())
	|| (serialconfigtable !=  nullptr && serialconfigtable->has_operation())
	|| (netconfigtable !=  nullptr && netconfigtable->has_operation())
	|| (trapdesttable !=  nullptr && trapdesttable->has_operation())
	|| (serialconnectiontable !=  nullptr && serialconnectiontable->has_operation());
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
    if(child_yang_name == "protocolDir")
    {
        if(protocoldir == nullptr)
        {
            protocoldir = std::make_shared<RMON2MIB::ProtocolDir>();
        }
        return protocoldir;
    }

    if(child_yang_name == "addressMap")
    {
        if(addressmap == nullptr)
        {
            addressmap = std::make_shared<RMON2MIB::AddressMap>();
        }
        return addressmap;
    }

    if(child_yang_name == "probeConfig")
    {
        if(probeconfig == nullptr)
        {
            probeconfig = std::make_shared<RMON2MIB::ProbeConfig>();
        }
        return probeconfig;
    }

    if(child_yang_name == "protocolDirTable")
    {
        if(protocoldirtable == nullptr)
        {
            protocoldirtable = std::make_shared<RMON2MIB::ProtocolDirTable>();
        }
        return protocoldirtable;
    }

    if(child_yang_name == "protocolDistControlTable")
    {
        if(protocoldistcontroltable == nullptr)
        {
            protocoldistcontroltable = std::make_shared<RMON2MIB::ProtocolDistControlTable>();
        }
        return protocoldistcontroltable;
    }

    if(child_yang_name == "protocolDistStatsTable")
    {
        if(protocoldiststatstable == nullptr)
        {
            protocoldiststatstable = std::make_shared<RMON2MIB::ProtocolDistStatsTable>();
        }
        return protocoldiststatstable;
    }

    if(child_yang_name == "addressMapControlTable")
    {
        if(addressmapcontroltable == nullptr)
        {
            addressmapcontroltable = std::make_shared<RMON2MIB::AddressMapControlTable>();
        }
        return addressmapcontroltable;
    }

    if(child_yang_name == "addressMapTable")
    {
        if(addressmaptable == nullptr)
        {
            addressmaptable = std::make_shared<RMON2MIB::AddressMapTable>();
        }
        return addressmaptable;
    }

    if(child_yang_name == "hlHostControlTable")
    {
        if(hlhostcontroltable == nullptr)
        {
            hlhostcontroltable = std::make_shared<RMON2MIB::HlHostControlTable>();
        }
        return hlhostcontroltable;
    }

    if(child_yang_name == "nlHostTable")
    {
        if(nlhosttable == nullptr)
        {
            nlhosttable = std::make_shared<RMON2MIB::NlHostTable>();
        }
        return nlhosttable;
    }

    if(child_yang_name == "hlMatrixControlTable")
    {
        if(hlmatrixcontroltable == nullptr)
        {
            hlmatrixcontroltable = std::make_shared<RMON2MIB::HlMatrixControlTable>();
        }
        return hlmatrixcontroltable;
    }

    if(child_yang_name == "nlMatrixSDTable")
    {
        if(nlmatrixsdtable == nullptr)
        {
            nlmatrixsdtable = std::make_shared<RMON2MIB::NlMatrixSDTable>();
        }
        return nlmatrixsdtable;
    }

    if(child_yang_name == "nlMatrixDSTable")
    {
        if(nlmatrixdstable == nullptr)
        {
            nlmatrixdstable = std::make_shared<RMON2MIB::NlMatrixDSTable>();
        }
        return nlmatrixdstable;
    }

    if(child_yang_name == "nlMatrixTopNControlTable")
    {
        if(nlmatrixtopncontroltable == nullptr)
        {
            nlmatrixtopncontroltable = std::make_shared<RMON2MIB::NlMatrixTopNControlTable>();
        }
        return nlmatrixtopncontroltable;
    }

    if(child_yang_name == "nlMatrixTopNTable")
    {
        if(nlmatrixtopntable == nullptr)
        {
            nlmatrixtopntable = std::make_shared<RMON2MIB::NlMatrixTopNTable>();
        }
        return nlmatrixtopntable;
    }

    if(child_yang_name == "alHostTable")
    {
        if(alhosttable == nullptr)
        {
            alhosttable = std::make_shared<RMON2MIB::AlHostTable>();
        }
        return alhosttable;
    }

    if(child_yang_name == "alMatrixSDTable")
    {
        if(almatrixsdtable == nullptr)
        {
            almatrixsdtable = std::make_shared<RMON2MIB::AlMatrixSDTable>();
        }
        return almatrixsdtable;
    }

    if(child_yang_name == "alMatrixDSTable")
    {
        if(almatrixdstable == nullptr)
        {
            almatrixdstable = std::make_shared<RMON2MIB::AlMatrixDSTable>();
        }
        return almatrixdstable;
    }

    if(child_yang_name == "alMatrixTopNControlTable")
    {
        if(almatrixtopncontroltable == nullptr)
        {
            almatrixtopncontroltable = std::make_shared<RMON2MIB::AlMatrixTopNControlTable>();
        }
        return almatrixtopncontroltable;
    }

    if(child_yang_name == "alMatrixTopNTable")
    {
        if(almatrixtopntable == nullptr)
        {
            almatrixtopntable = std::make_shared<RMON2MIB::AlMatrixTopNTable>();
        }
        return almatrixtopntable;
    }

    if(child_yang_name == "usrHistoryControlTable")
    {
        if(usrhistorycontroltable == nullptr)
        {
            usrhistorycontroltable = std::make_shared<RMON2MIB::UsrHistoryControlTable>();
        }
        return usrhistorycontroltable;
    }

    if(child_yang_name == "usrHistoryObjectTable")
    {
        if(usrhistoryobjecttable == nullptr)
        {
            usrhistoryobjecttable = std::make_shared<RMON2MIB::UsrHistoryObjectTable>();
        }
        return usrhistoryobjecttable;
    }

    if(child_yang_name == "usrHistoryTable")
    {
        if(usrhistorytable == nullptr)
        {
            usrhistorytable = std::make_shared<RMON2MIB::UsrHistoryTable>();
        }
        return usrhistorytable;
    }

    if(child_yang_name == "serialConfigTable")
    {
        if(serialconfigtable == nullptr)
        {
            serialconfigtable = std::make_shared<RMON2MIB::SerialConfigTable>();
        }
        return serialconfigtable;
    }

    if(child_yang_name == "netConfigTable")
    {
        if(netconfigtable == nullptr)
        {
            netconfigtable = std::make_shared<RMON2MIB::NetConfigTable>();
        }
        return netconfigtable;
    }

    if(child_yang_name == "trapDestTable")
    {
        if(trapdesttable == nullptr)
        {
            trapdesttable = std::make_shared<RMON2MIB::TrapDestTable>();
        }
        return trapdesttable;
    }

    if(child_yang_name == "serialConnectionTable")
    {
        if(serialconnectiontable == nullptr)
        {
            serialconnectiontable = std::make_shared<RMON2MIB::SerialConnectionTable>();
        }
        return serialconnectiontable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocoldir != nullptr)
    {
        children["protocolDir"] = protocoldir;
    }

    if(addressmap != nullptr)
    {
        children["addressMap"] = addressmap;
    }

    if(probeconfig != nullptr)
    {
        children["probeConfig"] = probeconfig;
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

    if(addressmapcontroltable != nullptr)
    {
        children["addressMapControlTable"] = addressmapcontroltable;
    }

    if(addressmaptable != nullptr)
    {
        children["addressMapTable"] = addressmaptable;
    }

    if(hlhostcontroltable != nullptr)
    {
        children["hlHostControlTable"] = hlhostcontroltable;
    }

    if(nlhosttable != nullptr)
    {
        children["nlHostTable"] = nlhosttable;
    }

    if(hlmatrixcontroltable != nullptr)
    {
        children["hlMatrixControlTable"] = hlmatrixcontroltable;
    }

    if(nlmatrixsdtable != nullptr)
    {
        children["nlMatrixSDTable"] = nlmatrixsdtable;
    }

    if(nlmatrixdstable != nullptr)
    {
        children["nlMatrixDSTable"] = nlmatrixdstable;
    }

    if(nlmatrixtopncontroltable != nullptr)
    {
        children["nlMatrixTopNControlTable"] = nlmatrixtopncontroltable;
    }

    if(nlmatrixtopntable != nullptr)
    {
        children["nlMatrixTopNTable"] = nlmatrixtopntable;
    }

    if(alhosttable != nullptr)
    {
        children["alHostTable"] = alhosttable;
    }

    if(almatrixsdtable != nullptr)
    {
        children["alMatrixSDTable"] = almatrixsdtable;
    }

    if(almatrixdstable != nullptr)
    {
        children["alMatrixDSTable"] = almatrixdstable;
    }

    if(almatrixtopncontroltable != nullptr)
    {
        children["alMatrixTopNControlTable"] = almatrixtopncontroltable;
    }

    if(almatrixtopntable != nullptr)
    {
        children["alMatrixTopNTable"] = almatrixtopntable;
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

    if(serialconfigtable != nullptr)
    {
        children["serialConfigTable"] = serialconfigtable;
    }

    if(netconfigtable != nullptr)
    {
        children["netConfigTable"] = netconfigtable;
    }

    if(trapdesttable != nullptr)
    {
        children["trapDestTable"] = trapdesttable;
    }

    if(serialconnectiontable != nullptr)
    {
        children["serialConnectionTable"] = serialconnectiontable;
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
    if(name == "protocolDir" || name == "addressMap" || name == "probeConfig" || name == "protocolDirTable" || name == "protocolDistControlTable" || name == "protocolDistStatsTable" || name == "addressMapControlTable" || name == "addressMapTable" || name == "hlHostControlTable" || name == "nlHostTable" || name == "hlMatrixControlTable" || name == "nlMatrixSDTable" || name == "nlMatrixDSTable" || name == "nlMatrixTopNControlTable" || name == "nlMatrixTopNTable" || name == "alHostTable" || name == "alMatrixSDTable" || name == "alMatrixDSTable" || name == "alMatrixTopNControlTable" || name == "alMatrixTopNTable" || name == "usrHistoryControlTable" || name == "usrHistoryObjectTable" || name == "usrHistoryTable" || name == "serialConfigTable" || name == "netConfigTable" || name == "trapDestTable" || name == "serialConnectionTable")
        return true;
    return false;
}

RMON2MIB::ProtocolDir::ProtocolDir()
    :
    protocoldirlastchange{YType::uint32, "protocolDirLastChange"}
{

    yang_name = "protocolDir"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProtocolDir::~ProtocolDir()
{
}

bool RMON2MIB::ProtocolDir::has_data() const
{
    if (is_presence_container) return true;
    return protocoldirlastchange.is_set;
}

bool RMON2MIB::ProtocolDir::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldirlastchange.yfilter);
}

std::string RMON2MIB::ProtocolDir::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProtocolDir::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDir";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProtocolDir::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldirlastchange.is_set || is_set(protocoldirlastchange.yfilter)) leaf_name_data.push_back(protocoldirlastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProtocolDir::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProtocolDir::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::ProtocolDir::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocolDirLastChange")
    {
        protocoldirlastchange = value;
        protocoldirlastchange.value_namespace = name_space;
        protocoldirlastchange.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::ProtocolDir::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDirLastChange")
    {
        protocoldirlastchange.yfilter = yfilter;
    }
}

bool RMON2MIB::ProtocolDir::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDirLastChange")
        return true;
    return false;
}

RMON2MIB::AddressMap::AddressMap()
    :
    addressmapinserts{YType::uint32, "addressMapInserts"},
    addressmapdeletes{YType::uint32, "addressMapDeletes"},
    addressmapmaxdesiredentries{YType::int32, "addressMapMaxDesiredEntries"}
{

    yang_name = "addressMap"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AddressMap::~AddressMap()
{
}

bool RMON2MIB::AddressMap::has_data() const
{
    if (is_presence_container) return true;
    return addressmapinserts.is_set
	|| addressmapdeletes.is_set
	|| addressmapmaxdesiredentries.is_set;
}

bool RMON2MIB::AddressMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addressmapinserts.yfilter)
	|| ydk::is_set(addressmapdeletes.yfilter)
	|| ydk::is_set(addressmapmaxdesiredentries.yfilter);
}

std::string RMON2MIB::AddressMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AddressMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AddressMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addressmapinserts.is_set || is_set(addressmapinserts.yfilter)) leaf_name_data.push_back(addressmapinserts.get_name_leafdata());
    if (addressmapdeletes.is_set || is_set(addressmapdeletes.yfilter)) leaf_name_data.push_back(addressmapdeletes.get_name_leafdata());
    if (addressmapmaxdesiredentries.is_set || is_set(addressmapmaxdesiredentries.yfilter)) leaf_name_data.push_back(addressmapmaxdesiredentries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AddressMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AddressMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AddressMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addressMapInserts")
    {
        addressmapinserts = value;
        addressmapinserts.value_namespace = name_space;
        addressmapinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapDeletes")
    {
        addressmapdeletes = value;
        addressmapdeletes.value_namespace = name_space;
        addressmapdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapMaxDesiredEntries")
    {
        addressmapmaxdesiredentries = value;
        addressmapmaxdesiredentries.value_namespace = name_space;
        addressmapmaxdesiredentries.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::AddressMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addressMapInserts")
    {
        addressmapinserts.yfilter = yfilter;
    }
    if(value_path == "addressMapDeletes")
    {
        addressmapdeletes.yfilter = yfilter;
    }
    if(value_path == "addressMapMaxDesiredEntries")
    {
        addressmapmaxdesiredentries.yfilter = yfilter;
    }
}

bool RMON2MIB::AddressMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapInserts" || name == "addressMapDeletes" || name == "addressMapMaxDesiredEntries")
        return true;
    return false;
}

RMON2MIB::ProbeConfig::ProbeConfig()
    :
    probecapabilities{YType::str, "probeCapabilities"},
    probesoftwarerev{YType::str, "probeSoftwareRev"},
    probehardwarerev{YType::str, "probeHardwareRev"},
    probedatetime{YType::str, "probeDateTime"},
    proberesetcontrol{YType::enumeration, "probeResetControl"},
    probedownloadfile{YType::str, "probeDownloadFile"},
    probedownloadtftpserver{YType::str, "probeDownloadTFTPServer"},
    probedownloadaction{YType::enumeration, "probeDownloadAction"},
    probedownloadstatus{YType::enumeration, "probeDownloadStatus"},
    netdefaultgateway{YType::str, "netDefaultGateway"}
{

    yang_name = "probeConfig"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProbeConfig::~ProbeConfig()
{
}

bool RMON2MIB::ProbeConfig::has_data() const
{
    if (is_presence_container) return true;
    return probecapabilities.is_set
	|| probesoftwarerev.is_set
	|| probehardwarerev.is_set
	|| probedatetime.is_set
	|| proberesetcontrol.is_set
	|| probedownloadfile.is_set
	|| probedownloadtftpserver.is_set
	|| probedownloadaction.is_set
	|| probedownloadstatus.is_set
	|| netdefaultgateway.is_set;
}

bool RMON2MIB::ProbeConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(probecapabilities.yfilter)
	|| ydk::is_set(probesoftwarerev.yfilter)
	|| ydk::is_set(probehardwarerev.yfilter)
	|| ydk::is_set(probedatetime.yfilter)
	|| ydk::is_set(proberesetcontrol.yfilter)
	|| ydk::is_set(probedownloadfile.yfilter)
	|| ydk::is_set(probedownloadtftpserver.yfilter)
	|| ydk::is_set(probedownloadaction.yfilter)
	|| ydk::is_set(probedownloadstatus.yfilter)
	|| ydk::is_set(netdefaultgateway.yfilter);
}

std::string RMON2MIB::ProbeConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProbeConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probeConfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProbeConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (probecapabilities.is_set || is_set(probecapabilities.yfilter)) leaf_name_data.push_back(probecapabilities.get_name_leafdata());
    if (probesoftwarerev.is_set || is_set(probesoftwarerev.yfilter)) leaf_name_data.push_back(probesoftwarerev.get_name_leafdata());
    if (probehardwarerev.is_set || is_set(probehardwarerev.yfilter)) leaf_name_data.push_back(probehardwarerev.get_name_leafdata());
    if (probedatetime.is_set || is_set(probedatetime.yfilter)) leaf_name_data.push_back(probedatetime.get_name_leafdata());
    if (proberesetcontrol.is_set || is_set(proberesetcontrol.yfilter)) leaf_name_data.push_back(proberesetcontrol.get_name_leafdata());
    if (probedownloadfile.is_set || is_set(probedownloadfile.yfilter)) leaf_name_data.push_back(probedownloadfile.get_name_leafdata());
    if (probedownloadtftpserver.is_set || is_set(probedownloadtftpserver.yfilter)) leaf_name_data.push_back(probedownloadtftpserver.get_name_leafdata());
    if (probedownloadaction.is_set || is_set(probedownloadaction.yfilter)) leaf_name_data.push_back(probedownloadaction.get_name_leafdata());
    if (probedownloadstatus.is_set || is_set(probedownloadstatus.yfilter)) leaf_name_data.push_back(probedownloadstatus.get_name_leafdata());
    if (netdefaultgateway.is_set || is_set(netdefaultgateway.yfilter)) leaf_name_data.push_back(netdefaultgateway.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProbeConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProbeConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::ProbeConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "probeCapabilities")
    {
        probecapabilities = value;
        probecapabilities.value_namespace = name_space;
        probecapabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeSoftwareRev")
    {
        probesoftwarerev = value;
        probesoftwarerev.value_namespace = name_space;
        probesoftwarerev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeHardwareRev")
    {
        probehardwarerev = value;
        probehardwarerev.value_namespace = name_space;
        probehardwarerev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDateTime")
    {
        probedatetime = value;
        probedatetime.value_namespace = name_space;
        probedatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeResetControl")
    {
        proberesetcontrol = value;
        proberesetcontrol.value_namespace = name_space;
        proberesetcontrol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadFile")
    {
        probedownloadfile = value;
        probedownloadfile.value_namespace = name_space;
        probedownloadfile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadTFTPServer")
    {
        probedownloadtftpserver = value;
        probedownloadtftpserver.value_namespace = name_space;
        probedownloadtftpserver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadAction")
    {
        probedownloadaction = value;
        probedownloadaction.value_namespace = name_space;
        probedownloadaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probeDownloadStatus")
    {
        probedownloadstatus = value;
        probedownloadstatus.value_namespace = name_space;
        probedownloadstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netDefaultGateway")
    {
        netdefaultgateway = value;
        netdefaultgateway.value_namespace = name_space;
        netdefaultgateway.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::ProbeConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "probeCapabilities")
    {
        probecapabilities.yfilter = yfilter;
    }
    if(value_path == "probeSoftwareRev")
    {
        probesoftwarerev.yfilter = yfilter;
    }
    if(value_path == "probeHardwareRev")
    {
        probehardwarerev.yfilter = yfilter;
    }
    if(value_path == "probeDateTime")
    {
        probedatetime.yfilter = yfilter;
    }
    if(value_path == "probeResetControl")
    {
        proberesetcontrol.yfilter = yfilter;
    }
    if(value_path == "probeDownloadFile")
    {
        probedownloadfile.yfilter = yfilter;
    }
    if(value_path == "probeDownloadTFTPServer")
    {
        probedownloadtftpserver.yfilter = yfilter;
    }
    if(value_path == "probeDownloadAction")
    {
        probedownloadaction.yfilter = yfilter;
    }
    if(value_path == "probeDownloadStatus")
    {
        probedownloadstatus.yfilter = yfilter;
    }
    if(value_path == "netDefaultGateway")
    {
        netdefaultgateway.yfilter = yfilter;
    }
}

bool RMON2MIB::ProbeConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probeCapabilities" || name == "probeSoftwareRev" || name == "probeHardwareRev" || name == "probeDateTime" || name == "probeResetControl" || name == "probeDownloadFile" || name == "probeDownloadTFTPServer" || name == "probeDownloadAction" || name == "probeDownloadStatus" || name == "netDefaultGateway")
        return true;
    return false;
}

RMON2MIB::ProtocolDirTable::ProtocolDirTable()
    :
    protocoldirentry(this, {"protocoldirid", "protocoldirparameters"})
{

    yang_name = "protocolDirTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProtocolDirTable::~ProtocolDirTable()
{
}

bool RMON2MIB::ProtocolDirTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocoldirentry.len(); index++)
    {
        if(protocoldirentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::ProtocolDirTable::has_operation() const
{
    for (std::size_t index=0; index<protocoldirentry.len(); index++)
    {
        if(protocoldirentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::ProtocolDirTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProtocolDirTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDirTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProtocolDirTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProtocolDirTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocolDirEntry")
    {
        auto c = std::make_shared<RMON2MIB::ProtocolDirTable::ProtocolDirEntry>();
        c->parent = this;
        protocoldirentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProtocolDirTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocoldirentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::ProtocolDirTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::ProtocolDirTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::ProtocolDirTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDirEntry")
        return true;
    return false;
}

RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirEntry()
    :
    protocoldirid{YType::str, "protocolDirID"},
    protocoldirparameters{YType::str, "protocolDirParameters"},
    protocoldirlocalindex{YType::int32, "protocolDirLocalIndex"},
    protocoldirdescr{YType::str, "protocolDirDescr"},
    protocoldirtype{YType::str, "protocolDirType"},
    protocoldiraddressmapconfig{YType::enumeration, "protocolDirAddressMapConfig"},
    protocoldirhostconfig{YType::enumeration, "protocolDirHostConfig"},
    protocoldirmatrixconfig{YType::enumeration, "protocolDirMatrixConfig"},
    protocoldirowner{YType::str, "protocolDirOwner"},
    protocoldirstatus{YType::enumeration, "protocolDirStatus"}
{

    yang_name = "protocolDirEntry"; yang_parent_name = "protocolDirTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProtocolDirTable::ProtocolDirEntry::~ProtocolDirEntry()
{
}

bool RMON2MIB::ProtocolDirTable::ProtocolDirEntry::has_data() const
{
    if (is_presence_container) return true;
    return protocoldirid.is_set
	|| protocoldirparameters.is_set
	|| protocoldirlocalindex.is_set
	|| protocoldirdescr.is_set
	|| protocoldirtype.is_set
	|| protocoldiraddressmapconfig.is_set
	|| protocoldirhostconfig.is_set
	|| protocoldirmatrixconfig.is_set
	|| protocoldirowner.is_set
	|| protocoldirstatus.is_set;
}

bool RMON2MIB::ProtocolDirTable::ProtocolDirEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldirid.yfilter)
	|| ydk::is_set(protocoldirparameters.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(protocoldirdescr.yfilter)
	|| ydk::is_set(protocoldirtype.yfilter)
	|| ydk::is_set(protocoldiraddressmapconfig.yfilter)
	|| ydk::is_set(protocoldirhostconfig.yfilter)
	|| ydk::is_set(protocoldirmatrixconfig.yfilter)
	|| ydk::is_set(protocoldirowner.yfilter)
	|| ydk::is_set(protocoldirstatus.yfilter);
}

std::string RMON2MIB::ProtocolDirTable::ProtocolDirEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/protocolDirTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProtocolDirTable::ProtocolDirEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDirEntry";
    ADD_KEY_TOKEN(protocoldirid, "protocolDirID");
    ADD_KEY_TOKEN(protocoldirparameters, "protocolDirParameters");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProtocolDirTable::ProtocolDirEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldirid.is_set || is_set(protocoldirid.yfilter)) leaf_name_data.push_back(protocoldirid.get_name_leafdata());
    if (protocoldirparameters.is_set || is_set(protocoldirparameters.yfilter)) leaf_name_data.push_back(protocoldirparameters.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (protocoldirdescr.is_set || is_set(protocoldirdescr.yfilter)) leaf_name_data.push_back(protocoldirdescr.get_name_leafdata());
    if (protocoldirtype.is_set || is_set(protocoldirtype.yfilter)) leaf_name_data.push_back(protocoldirtype.get_name_leafdata());
    if (protocoldiraddressmapconfig.is_set || is_set(protocoldiraddressmapconfig.yfilter)) leaf_name_data.push_back(protocoldiraddressmapconfig.get_name_leafdata());
    if (protocoldirhostconfig.is_set || is_set(protocoldirhostconfig.yfilter)) leaf_name_data.push_back(protocoldirhostconfig.get_name_leafdata());
    if (protocoldirmatrixconfig.is_set || is_set(protocoldirmatrixconfig.yfilter)) leaf_name_data.push_back(protocoldirmatrixconfig.get_name_leafdata());
    if (protocoldirowner.is_set || is_set(protocoldirowner.yfilter)) leaf_name_data.push_back(protocoldirowner.get_name_leafdata());
    if (protocoldirstatus.is_set || is_set(protocoldirstatus.yfilter)) leaf_name_data.push_back(protocoldirstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProtocolDirTable::ProtocolDirEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProtocolDirTable::ProtocolDirEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::ProtocolDirTable::ProtocolDirEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex = value;
        protocoldirlocalindex.value_namespace = name_space;
        protocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirDescr")
    {
        protocoldirdescr = value;
        protocoldirdescr.value_namespace = name_space;
        protocoldirdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirType")
    {
        protocoldirtype = value;
        protocoldirtype.value_namespace = name_space;
        protocoldirtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirAddressMapConfig")
    {
        protocoldiraddressmapconfig = value;
        protocoldiraddressmapconfig.value_namespace = name_space;
        protocoldiraddressmapconfig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDirHostConfig")
    {
        protocoldirhostconfig = value;
        protocoldirhostconfig.value_namespace = name_space;
        protocoldirhostconfig.value_namespace_prefix = name_space_prefix;
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
}

void RMON2MIB::ProtocolDirTable::ProtocolDirEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDirID")
    {
        protocoldirid.yfilter = yfilter;
    }
    if(value_path == "protocolDirParameters")
    {
        protocoldirparameters.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "protocolDirDescr")
    {
        protocoldirdescr.yfilter = yfilter;
    }
    if(value_path == "protocolDirType")
    {
        protocoldirtype.yfilter = yfilter;
    }
    if(value_path == "protocolDirAddressMapConfig")
    {
        protocoldiraddressmapconfig.yfilter = yfilter;
    }
    if(value_path == "protocolDirHostConfig")
    {
        protocoldirhostconfig.yfilter = yfilter;
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
}

bool RMON2MIB::ProtocolDirTable::ProtocolDirEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDirID" || name == "protocolDirParameters" || name == "protocolDirLocalIndex" || name == "protocolDirDescr" || name == "protocolDirType" || name == "protocolDirAddressMapConfig" || name == "protocolDirHostConfig" || name == "protocolDirMatrixConfig" || name == "protocolDirOwner" || name == "protocolDirStatus")
        return true;
    return false;
}

RMON2MIB::ProtocolDistControlTable::ProtocolDistControlTable()
    :
    protocoldistcontrolentry(this, {"protocoldistcontrolindex"})
{

    yang_name = "protocolDistControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProtocolDistControlTable::~ProtocolDistControlTable()
{
}

bool RMON2MIB::ProtocolDistControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocoldistcontrolentry.len(); index++)
    {
        if(protocoldistcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::ProtocolDistControlTable::has_operation() const
{
    for (std::size_t index=0; index<protocoldistcontrolentry.len(); index++)
    {
        if(protocoldistcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::ProtocolDistControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProtocolDistControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProtocolDistControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProtocolDistControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocolDistControlEntry")
    {
        auto c = std::make_shared<RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry>();
        c->parent = this;
        protocoldistcontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProtocolDistControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocoldistcontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::ProtocolDistControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::ProtocolDistControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::ProtocolDistControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistControlEntry")
        return true;
    return false;
}

RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::ProtocolDistControlEntry()
    :
    protocoldistcontrolindex{YType::int32, "protocolDistControlIndex"},
    protocoldistcontroldatasource{YType::str, "protocolDistControlDataSource"},
    protocoldistcontroldroppedframes{YType::uint32, "protocolDistControlDroppedFrames"},
    protocoldistcontrolcreatetime{YType::uint32, "protocolDistControlCreateTime"},
    protocoldistcontrolowner{YType::str, "protocolDistControlOwner"},
    protocoldistcontrolstatus{YType::enumeration, "protocolDistControlStatus"}
{

    yang_name = "protocolDistControlEntry"; yang_parent_name = "protocolDistControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::~ProtocolDistControlEntry()
{
}

bool RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return protocoldistcontrolindex.is_set
	|| protocoldistcontroldatasource.is_set
	|| protocoldistcontroldroppedframes.is_set
	|| protocoldistcontrolcreatetime.is_set
	|| protocoldistcontrolowner.is_set
	|| protocoldistcontrolstatus.is_set;
}

bool RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldistcontrolindex.yfilter)
	|| ydk::is_set(protocoldistcontroldatasource.yfilter)
	|| ydk::is_set(protocoldistcontroldroppedframes.yfilter)
	|| ydk::is_set(protocoldistcontrolcreatetime.yfilter)
	|| ydk::is_set(protocoldistcontrolowner.yfilter)
	|| ydk::is_set(protocoldistcontrolstatus.yfilter);
}

std::string RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/protocolDistControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistControlEntry";
    ADD_KEY_TOKEN(protocoldistcontrolindex, "protocolDistControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldistcontrolindex.is_set || is_set(protocoldistcontrolindex.yfilter)) leaf_name_data.push_back(protocoldistcontrolindex.get_name_leafdata());
    if (protocoldistcontroldatasource.is_set || is_set(protocoldistcontroldatasource.yfilter)) leaf_name_data.push_back(protocoldistcontroldatasource.get_name_leafdata());
    if (protocoldistcontroldroppedframes.is_set || is_set(protocoldistcontroldroppedframes.yfilter)) leaf_name_data.push_back(protocoldistcontroldroppedframes.get_name_leafdata());
    if (protocoldistcontrolcreatetime.is_set || is_set(protocoldistcontrolcreatetime.yfilter)) leaf_name_data.push_back(protocoldistcontrolcreatetime.get_name_leafdata());
    if (protocoldistcontrolowner.is_set || is_set(protocoldistcontrolowner.yfilter)) leaf_name_data.push_back(protocoldistcontrolowner.get_name_leafdata());
    if (protocoldistcontrolstatus.is_set || is_set(protocoldistcontrolstatus.yfilter)) leaf_name_data.push_back(protocoldistcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocolDistControlIndex")
    {
        protocoldistcontrolindex = value;
        protocoldistcontrolindex.value_namespace = name_space;
        protocoldistcontrolindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "protocolDistControlCreateTime")
    {
        protocoldistcontrolcreatetime = value;
        protocoldistcontrolcreatetime.value_namespace = name_space;
        protocoldistcontrolcreatetime.value_namespace_prefix = name_space_prefix;
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

void RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDistControlIndex")
    {
        protocoldistcontrolindex.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlDataSource")
    {
        protocoldistcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlDroppedFrames")
    {
        protocoldistcontroldroppedframes.yfilter = yfilter;
    }
    if(value_path == "protocolDistControlCreateTime")
    {
        protocoldistcontrolcreatetime.yfilter = yfilter;
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

bool RMON2MIB::ProtocolDistControlTable::ProtocolDistControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistControlIndex" || name == "protocolDistControlDataSource" || name == "protocolDistControlDroppedFrames" || name == "protocolDistControlCreateTime" || name == "protocolDistControlOwner" || name == "protocolDistControlStatus")
        return true;
    return false;
}

RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsTable()
    :
    protocoldiststatsentry(this, {"protocoldistcontrolindex", "protocoldirlocalindex"})
{

    yang_name = "protocolDistStatsTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProtocolDistStatsTable::~ProtocolDistStatsTable()
{
}

bool RMON2MIB::ProtocolDistStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocoldiststatsentry.len(); index++)
    {
        if(protocoldiststatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::ProtocolDistStatsTable::has_operation() const
{
    for (std::size_t index=0; index<protocoldiststatsentry.len(); index++)
    {
        if(protocoldiststatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::ProtocolDistStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProtocolDistStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProtocolDistStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProtocolDistStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocolDistStatsEntry")
    {
        auto c = std::make_shared<RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry>();
        c->parent = this;
        protocoldiststatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProtocolDistStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : protocoldiststatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::ProtocolDistStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::ProtocolDistStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::ProtocolDistStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistStatsEntry")
        return true;
    return false;
}

RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::ProtocolDistStatsEntry()
    :
    protocoldistcontrolindex{YType::str, "protocolDistControlIndex"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    protocoldiststatspkts{YType::uint32, "protocolDistStatsPkts"},
    protocoldiststatsoctets{YType::uint32, "protocolDistStatsOctets"}
{

    yang_name = "protocolDistStatsEntry"; yang_parent_name = "protocolDistStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::~ProtocolDistStatsEntry()
{
}

bool RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return protocoldistcontrolindex.is_set
	|| protocoldirlocalindex.is_set
	|| protocoldiststatspkts.is_set
	|| protocoldiststatsoctets.is_set;
}

bool RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocoldistcontrolindex.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(protocoldiststatspkts.yfilter)
	|| ydk::is_set(protocoldiststatsoctets.yfilter);
}

std::string RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/protocolDistStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocolDistStatsEntry";
    ADD_KEY_TOKEN(protocoldistcontrolindex, "protocolDistControlIndex");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocoldistcontrolindex.is_set || is_set(protocoldistcontrolindex.yfilter)) leaf_name_data.push_back(protocoldistcontrolindex.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (protocoldiststatspkts.is_set || is_set(protocoldiststatspkts.yfilter)) leaf_name_data.push_back(protocoldiststatspkts.get_name_leafdata());
    if (protocoldiststatsoctets.is_set || is_set(protocoldiststatsoctets.yfilter)) leaf_name_data.push_back(protocoldiststatsoctets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "protocolDistStatsPkts")
    {
        protocoldiststatspkts = value;
        protocoldiststatspkts.value_namespace = name_space;
        protocoldiststatspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocolDistStatsOctets")
    {
        protocoldiststatsoctets = value;
        protocoldiststatsoctets.value_namespace = name_space;
        protocoldiststatsoctets.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocolDistControlIndex")
    {
        protocoldistcontrolindex.yfilter = yfilter;
    }
    if(value_path == "protocolDirLocalIndex")
    {
        protocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "protocolDistStatsPkts")
    {
        protocoldiststatspkts.yfilter = yfilter;
    }
    if(value_path == "protocolDistStatsOctets")
    {
        protocoldiststatsoctets.yfilter = yfilter;
    }
}

bool RMON2MIB::ProtocolDistStatsTable::ProtocolDistStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocolDistControlIndex" || name == "protocolDirLocalIndex" || name == "protocolDistStatsPkts" || name == "protocolDistStatsOctets")
        return true;
    return false;
}

RMON2MIB::AddressMapControlTable::AddressMapControlTable()
    :
    addressmapcontrolentry(this, {"addressmapcontrolindex"})
{

    yang_name = "addressMapControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AddressMapControlTable::~AddressMapControlTable()
{
}

bool RMON2MIB::AddressMapControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addressmapcontrolentry.len(); index++)
    {
        if(addressmapcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::AddressMapControlTable::has_operation() const
{
    for (std::size_t index=0; index<addressmapcontrolentry.len(); index++)
    {
        if(addressmapcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::AddressMapControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AddressMapControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AddressMapControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AddressMapControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressMapControlEntry")
    {
        auto c = std::make_shared<RMON2MIB::AddressMapControlTable::AddressMapControlEntry>();
        c->parent = this;
        addressmapcontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AddressMapControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addressmapcontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::AddressMapControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::AddressMapControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::AddressMapControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapControlEntry")
        return true;
    return false;
}

RMON2MIB::AddressMapControlTable::AddressMapControlEntry::AddressMapControlEntry()
    :
    addressmapcontrolindex{YType::int32, "addressMapControlIndex"},
    addressmapcontroldatasource{YType::str, "addressMapControlDataSource"},
    addressmapcontroldroppedframes{YType::uint32, "addressMapControlDroppedFrames"},
    addressmapcontrolowner{YType::str, "addressMapControlOwner"},
    addressmapcontrolstatus{YType::enumeration, "addressMapControlStatus"}
{

    yang_name = "addressMapControlEntry"; yang_parent_name = "addressMapControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AddressMapControlTable::AddressMapControlEntry::~AddressMapControlEntry()
{
}

bool RMON2MIB::AddressMapControlTable::AddressMapControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return addressmapcontrolindex.is_set
	|| addressmapcontroldatasource.is_set
	|| addressmapcontroldroppedframes.is_set
	|| addressmapcontrolowner.is_set
	|| addressmapcontrolstatus.is_set;
}

bool RMON2MIB::AddressMapControlTable::AddressMapControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addressmapcontrolindex.yfilter)
	|| ydk::is_set(addressmapcontroldatasource.yfilter)
	|| ydk::is_set(addressmapcontroldroppedframes.yfilter)
	|| ydk::is_set(addressmapcontrolowner.yfilter)
	|| ydk::is_set(addressmapcontrolstatus.yfilter);
}

std::string RMON2MIB::AddressMapControlTable::AddressMapControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/addressMapControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AddressMapControlTable::AddressMapControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapControlEntry";
    ADD_KEY_TOKEN(addressmapcontrolindex, "addressMapControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AddressMapControlTable::AddressMapControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addressmapcontrolindex.is_set || is_set(addressmapcontrolindex.yfilter)) leaf_name_data.push_back(addressmapcontrolindex.get_name_leafdata());
    if (addressmapcontroldatasource.is_set || is_set(addressmapcontroldatasource.yfilter)) leaf_name_data.push_back(addressmapcontroldatasource.get_name_leafdata());
    if (addressmapcontroldroppedframes.is_set || is_set(addressmapcontroldroppedframes.yfilter)) leaf_name_data.push_back(addressmapcontroldroppedframes.get_name_leafdata());
    if (addressmapcontrolowner.is_set || is_set(addressmapcontrolowner.yfilter)) leaf_name_data.push_back(addressmapcontrolowner.get_name_leafdata());
    if (addressmapcontrolstatus.is_set || is_set(addressmapcontrolstatus.yfilter)) leaf_name_data.push_back(addressmapcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AddressMapControlTable::AddressMapControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AddressMapControlTable::AddressMapControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AddressMapControlTable::AddressMapControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void RMON2MIB::AddressMapControlTable::AddressMapControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool RMON2MIB::AddressMapControlTable::AddressMapControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapControlIndex" || name == "addressMapControlDataSource" || name == "addressMapControlDroppedFrames" || name == "addressMapControlOwner" || name == "addressMapControlStatus")
        return true;
    return false;
}

RMON2MIB::AddressMapTable::AddressMapTable()
    :
    addressmapentry(this, {"addressmaptimemark", "protocoldirlocalindex", "addressmapnetworkaddress", "addressmapsource"})
{

    yang_name = "addressMapTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AddressMapTable::~AddressMapTable()
{
}

bool RMON2MIB::AddressMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<addressmapentry.len(); index++)
    {
        if(addressmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::AddressMapTable::has_operation() const
{
    for (std::size_t index=0; index<addressmapentry.len(); index++)
    {
        if(addressmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::AddressMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AddressMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AddressMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AddressMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addressMapEntry")
    {
        auto c = std::make_shared<RMON2MIB::AddressMapTable::AddressMapEntry>();
        c->parent = this;
        addressmapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AddressMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : addressmapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::AddressMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::AddressMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::AddressMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapEntry")
        return true;
    return false;
}

RMON2MIB::AddressMapTable::AddressMapEntry::AddressMapEntry()
    :
    addressmaptimemark{YType::uint32, "addressMapTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    addressmapnetworkaddress{YType::str, "addressMapNetworkAddress"},
    addressmapsource{YType::str, "addressMapSource"},
    addressmapphysicaladdress{YType::str, "addressMapPhysicalAddress"},
    addressmaplastchange{YType::uint32, "addressMapLastChange"}
{

    yang_name = "addressMapEntry"; yang_parent_name = "addressMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AddressMapTable::AddressMapEntry::~AddressMapEntry()
{
}

bool RMON2MIB::AddressMapTable::AddressMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return addressmaptimemark.is_set
	|| protocoldirlocalindex.is_set
	|| addressmapnetworkaddress.is_set
	|| addressmapsource.is_set
	|| addressmapphysicaladdress.is_set
	|| addressmaplastchange.is_set;
}

bool RMON2MIB::AddressMapTable::AddressMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addressmaptimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(addressmapnetworkaddress.yfilter)
	|| ydk::is_set(addressmapsource.yfilter)
	|| ydk::is_set(addressmapphysicaladdress.yfilter)
	|| ydk::is_set(addressmaplastchange.yfilter);
}

std::string RMON2MIB::AddressMapTable::AddressMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/addressMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AddressMapTable::AddressMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addressMapEntry";
    ADD_KEY_TOKEN(addressmaptimemark, "addressMapTimeMark");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    ADD_KEY_TOKEN(addressmapnetworkaddress, "addressMapNetworkAddress");
    ADD_KEY_TOKEN(addressmapsource, "addressMapSource");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AddressMapTable::AddressMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addressmaptimemark.is_set || is_set(addressmaptimemark.yfilter)) leaf_name_data.push_back(addressmaptimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (addressmapnetworkaddress.is_set || is_set(addressmapnetworkaddress.yfilter)) leaf_name_data.push_back(addressmapnetworkaddress.get_name_leafdata());
    if (addressmapsource.is_set || is_set(addressmapsource.yfilter)) leaf_name_data.push_back(addressmapsource.get_name_leafdata());
    if (addressmapphysicaladdress.is_set || is_set(addressmapphysicaladdress.yfilter)) leaf_name_data.push_back(addressmapphysicaladdress.get_name_leafdata());
    if (addressmaplastchange.is_set || is_set(addressmaplastchange.yfilter)) leaf_name_data.push_back(addressmaplastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AddressMapTable::AddressMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AddressMapTable::AddressMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AddressMapTable::AddressMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "addressMapPhysicalAddress")
    {
        addressmapphysicaladdress = value;
        addressmapphysicaladdress.value_namespace = name_space;
        addressmapphysicaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addressMapLastChange")
    {
        addressmaplastchange = value;
        addressmaplastchange.value_namespace = name_space;
        addressmaplastchange.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::AddressMapTable::AddressMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "addressMapPhysicalAddress")
    {
        addressmapphysicaladdress.yfilter = yfilter;
    }
    if(value_path == "addressMapLastChange")
    {
        addressmaplastchange.yfilter = yfilter;
    }
}

bool RMON2MIB::AddressMapTable::AddressMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addressMapTimeMark" || name == "protocolDirLocalIndex" || name == "addressMapNetworkAddress" || name == "addressMapSource" || name == "addressMapPhysicalAddress" || name == "addressMapLastChange")
        return true;
    return false;
}

RMON2MIB::HlHostControlTable::HlHostControlTable()
    :
    hlhostcontrolentry(this, {"hlhostcontrolindex"})
{

    yang_name = "hlHostControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::HlHostControlTable::~HlHostControlTable()
{
}

bool RMON2MIB::HlHostControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hlhostcontrolentry.len(); index++)
    {
        if(hlhostcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::HlHostControlTable::has_operation() const
{
    for (std::size_t index=0; index<hlhostcontrolentry.len(); index++)
    {
        if(hlhostcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::HlHostControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::HlHostControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlHostControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::HlHostControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::HlHostControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hlHostControlEntry")
    {
        auto c = std::make_shared<RMON2MIB::HlHostControlTable::HlHostControlEntry>();
        c->parent = this;
        hlhostcontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::HlHostControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hlhostcontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::HlHostControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::HlHostControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::HlHostControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlEntry")
        return true;
    return false;
}

RMON2MIB::HlHostControlTable::HlHostControlEntry::HlHostControlEntry()
    :
    hlhostcontrolindex{YType::int32, "hlHostControlIndex"},
    hlhostcontroldatasource{YType::str, "hlHostControlDataSource"},
    hlhostcontrolnldroppedframes{YType::uint32, "hlHostControlNlDroppedFrames"},
    hlhostcontrolnlinserts{YType::uint32, "hlHostControlNlInserts"},
    hlhostcontrolnldeletes{YType::uint32, "hlHostControlNlDeletes"},
    hlhostcontrolnlmaxdesiredentries{YType::int32, "hlHostControlNlMaxDesiredEntries"},
    hlhostcontrolaldroppedframes{YType::uint32, "hlHostControlAlDroppedFrames"},
    hlhostcontrolalinserts{YType::uint32, "hlHostControlAlInserts"},
    hlhostcontrolaldeletes{YType::uint32, "hlHostControlAlDeletes"},
    hlhostcontrolalmaxdesiredentries{YType::int32, "hlHostControlAlMaxDesiredEntries"},
    hlhostcontrolowner{YType::str, "hlHostControlOwner"},
    hlhostcontrolstatus{YType::enumeration, "hlHostControlStatus"}
{

    yang_name = "hlHostControlEntry"; yang_parent_name = "hlHostControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::HlHostControlTable::HlHostControlEntry::~HlHostControlEntry()
{
}

bool RMON2MIB::HlHostControlTable::HlHostControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlhostcontrolindex.is_set
	|| hlhostcontroldatasource.is_set
	|| hlhostcontrolnldroppedframes.is_set
	|| hlhostcontrolnlinserts.is_set
	|| hlhostcontrolnldeletes.is_set
	|| hlhostcontrolnlmaxdesiredentries.is_set
	|| hlhostcontrolaldroppedframes.is_set
	|| hlhostcontrolalinserts.is_set
	|| hlhostcontrolaldeletes.is_set
	|| hlhostcontrolalmaxdesiredentries.is_set
	|| hlhostcontrolowner.is_set
	|| hlhostcontrolstatus.is_set;
}

bool RMON2MIB::HlHostControlTable::HlHostControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlhostcontrolindex.yfilter)
	|| ydk::is_set(hlhostcontroldatasource.yfilter)
	|| ydk::is_set(hlhostcontrolnldroppedframes.yfilter)
	|| ydk::is_set(hlhostcontrolnlinserts.yfilter)
	|| ydk::is_set(hlhostcontrolnldeletes.yfilter)
	|| ydk::is_set(hlhostcontrolnlmaxdesiredentries.yfilter)
	|| ydk::is_set(hlhostcontrolaldroppedframes.yfilter)
	|| ydk::is_set(hlhostcontrolalinserts.yfilter)
	|| ydk::is_set(hlhostcontrolaldeletes.yfilter)
	|| ydk::is_set(hlhostcontrolalmaxdesiredentries.yfilter)
	|| ydk::is_set(hlhostcontrolowner.yfilter)
	|| ydk::is_set(hlhostcontrolstatus.yfilter);
}

std::string RMON2MIB::HlHostControlTable::HlHostControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/hlHostControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::HlHostControlTable::HlHostControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlHostControlEntry";
    ADD_KEY_TOKEN(hlhostcontrolindex, "hlHostControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::HlHostControlTable::HlHostControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlhostcontrolindex.is_set || is_set(hlhostcontrolindex.yfilter)) leaf_name_data.push_back(hlhostcontrolindex.get_name_leafdata());
    if (hlhostcontroldatasource.is_set || is_set(hlhostcontroldatasource.yfilter)) leaf_name_data.push_back(hlhostcontroldatasource.get_name_leafdata());
    if (hlhostcontrolnldroppedframes.is_set || is_set(hlhostcontrolnldroppedframes.yfilter)) leaf_name_data.push_back(hlhostcontrolnldroppedframes.get_name_leafdata());
    if (hlhostcontrolnlinserts.is_set || is_set(hlhostcontrolnlinserts.yfilter)) leaf_name_data.push_back(hlhostcontrolnlinserts.get_name_leafdata());
    if (hlhostcontrolnldeletes.is_set || is_set(hlhostcontrolnldeletes.yfilter)) leaf_name_data.push_back(hlhostcontrolnldeletes.get_name_leafdata());
    if (hlhostcontrolnlmaxdesiredentries.is_set || is_set(hlhostcontrolnlmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlhostcontrolnlmaxdesiredentries.get_name_leafdata());
    if (hlhostcontrolaldroppedframes.is_set || is_set(hlhostcontrolaldroppedframes.yfilter)) leaf_name_data.push_back(hlhostcontrolaldroppedframes.get_name_leafdata());
    if (hlhostcontrolalinserts.is_set || is_set(hlhostcontrolalinserts.yfilter)) leaf_name_data.push_back(hlhostcontrolalinserts.get_name_leafdata());
    if (hlhostcontrolaldeletes.is_set || is_set(hlhostcontrolaldeletes.yfilter)) leaf_name_data.push_back(hlhostcontrolaldeletes.get_name_leafdata());
    if (hlhostcontrolalmaxdesiredentries.is_set || is_set(hlhostcontrolalmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlhostcontrolalmaxdesiredentries.get_name_leafdata());
    if (hlhostcontrolowner.is_set || is_set(hlhostcontrolowner.yfilter)) leaf_name_data.push_back(hlhostcontrolowner.get_name_leafdata());
    if (hlhostcontrolstatus.is_set || is_set(hlhostcontrolstatus.yfilter)) leaf_name_data.push_back(hlhostcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::HlHostControlTable::HlHostControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::HlHostControlTable::HlHostControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::HlHostControlTable::HlHostControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex = value;
        hlhostcontrolindex.value_namespace = name_space;
        hlhostcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlDataSource")
    {
        hlhostcontroldatasource = value;
        hlhostcontroldatasource.value_namespace = name_space;
        hlhostcontroldatasource.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hlHostControlNlDeletes")
    {
        hlhostcontrolnldeletes = value;
        hlhostcontrolnldeletes.value_namespace = name_space;
        hlhostcontrolnldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlNlMaxDesiredEntries")
    {
        hlhostcontrolnlmaxdesiredentries = value;
        hlhostcontrolnlmaxdesiredentries.value_namespace = name_space;
        hlhostcontrolnlmaxdesiredentries.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hlHostControlAlDeletes")
    {
        hlhostcontrolaldeletes = value;
        hlhostcontrolaldeletes.value_namespace = name_space;
        hlhostcontrolaldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlHostControlAlMaxDesiredEntries")
    {
        hlhostcontrolalmaxdesiredentries = value;
        hlhostcontrolalmaxdesiredentries.value_namespace = name_space;
        hlhostcontrolalmaxdesiredentries.value_namespace_prefix = name_space_prefix;
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

void RMON2MIB::HlHostControlTable::HlHostControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlHostControlIndex")
    {
        hlhostcontrolindex.yfilter = yfilter;
    }
    if(value_path == "hlHostControlDataSource")
    {
        hlhostcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlDroppedFrames")
    {
        hlhostcontrolnldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlInserts")
    {
        hlhostcontrolnlinserts.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlDeletes")
    {
        hlhostcontrolnldeletes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlNlMaxDesiredEntries")
    {
        hlhostcontrolnlmaxdesiredentries.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlDroppedFrames")
    {
        hlhostcontrolaldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlInserts")
    {
        hlhostcontrolalinserts.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlDeletes")
    {
        hlhostcontrolaldeletes.yfilter = yfilter;
    }
    if(value_path == "hlHostControlAlMaxDesiredEntries")
    {
        hlhostcontrolalmaxdesiredentries.yfilter = yfilter;
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

bool RMON2MIB::HlHostControlTable::HlHostControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlIndex" || name == "hlHostControlDataSource" || name == "hlHostControlNlDroppedFrames" || name == "hlHostControlNlInserts" || name == "hlHostControlNlDeletes" || name == "hlHostControlNlMaxDesiredEntries" || name == "hlHostControlAlDroppedFrames" || name == "hlHostControlAlInserts" || name == "hlHostControlAlDeletes" || name == "hlHostControlAlMaxDesiredEntries" || name == "hlHostControlOwner" || name == "hlHostControlStatus")
        return true;
    return false;
}

RMON2MIB::NlHostTable::NlHostTable()
    :
    nlhostentry(this, {"hlhostcontrolindex", "nlhosttimemark", "protocoldirlocalindex", "nlhostaddress"})
{

    yang_name = "nlHostTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlHostTable::~NlHostTable()
{
}

bool RMON2MIB::NlHostTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlhostentry.len(); index++)
    {
        if(nlhostentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::NlHostTable::has_operation() const
{
    for (std::size_t index=0; index<nlhostentry.len(); index++)
    {
        if(nlhostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::NlHostTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlHostTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlHostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlHostTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlHostTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlHostEntry")
    {
        auto c = std::make_shared<RMON2MIB::NlHostTable::NlHostEntry>();
        c->parent = this;
        nlhostentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlHostTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlhostentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::NlHostTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::NlHostTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::NlHostTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlHostEntry")
        return true;
    return false;
}

RMON2MIB::NlHostTable::NlHostEntry::NlHostEntry()
    :
    hlhostcontrolindex{YType::str, "hlHostControlIndex"},
    nlhosttimemark{YType::uint32, "nlHostTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlhostaddress{YType::str, "nlHostAddress"},
    nlhostinpkts{YType::uint32, "nlHostInPkts"},
    nlhostoutpkts{YType::uint32, "nlHostOutPkts"},
    nlhostinoctets{YType::uint32, "nlHostInOctets"},
    nlhostoutoctets{YType::uint32, "nlHostOutOctets"},
    nlhostoutmacnonunicastpkts{YType::uint32, "nlHostOutMacNonUnicastPkts"},
    nlhostcreatetime{YType::uint32, "nlHostCreateTime"}
{

    yang_name = "nlHostEntry"; yang_parent_name = "nlHostTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlHostTable::NlHostEntry::~NlHostEntry()
{
}

bool RMON2MIB::NlHostTable::NlHostEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlhostcontrolindex.is_set
	|| nlhosttimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlhostaddress.is_set
	|| nlhostinpkts.is_set
	|| nlhostoutpkts.is_set
	|| nlhostinoctets.is_set
	|| nlhostoutoctets.is_set
	|| nlhostoutmacnonunicastpkts.is_set
	|| nlhostcreatetime.is_set;
}

bool RMON2MIB::NlHostTable::NlHostEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlhostcontrolindex.yfilter)
	|| ydk::is_set(nlhosttimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlhostaddress.yfilter)
	|| ydk::is_set(nlhostinpkts.yfilter)
	|| ydk::is_set(nlhostoutpkts.yfilter)
	|| ydk::is_set(nlhostinoctets.yfilter)
	|| ydk::is_set(nlhostoutoctets.yfilter)
	|| ydk::is_set(nlhostoutmacnonunicastpkts.yfilter)
	|| ydk::is_set(nlhostcreatetime.yfilter);
}

std::string RMON2MIB::NlHostTable::NlHostEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlHostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlHostTable::NlHostEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlHostEntry";
    ADD_KEY_TOKEN(hlhostcontrolindex, "hlHostControlIndex");
    ADD_KEY_TOKEN(nlhosttimemark, "nlHostTimeMark");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    ADD_KEY_TOKEN(nlhostaddress, "nlHostAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlHostTable::NlHostEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlhostcontrolindex.is_set || is_set(hlhostcontrolindex.yfilter)) leaf_name_data.push_back(hlhostcontrolindex.get_name_leafdata());
    if (nlhosttimemark.is_set || is_set(nlhosttimemark.yfilter)) leaf_name_data.push_back(nlhosttimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlhostaddress.is_set || is_set(nlhostaddress.yfilter)) leaf_name_data.push_back(nlhostaddress.get_name_leafdata());
    if (nlhostinpkts.is_set || is_set(nlhostinpkts.yfilter)) leaf_name_data.push_back(nlhostinpkts.get_name_leafdata());
    if (nlhostoutpkts.is_set || is_set(nlhostoutpkts.yfilter)) leaf_name_data.push_back(nlhostoutpkts.get_name_leafdata());
    if (nlhostinoctets.is_set || is_set(nlhostinoctets.yfilter)) leaf_name_data.push_back(nlhostinoctets.get_name_leafdata());
    if (nlhostoutoctets.is_set || is_set(nlhostoutoctets.yfilter)) leaf_name_data.push_back(nlhostoutoctets.get_name_leafdata());
    if (nlhostoutmacnonunicastpkts.is_set || is_set(nlhostoutmacnonunicastpkts.yfilter)) leaf_name_data.push_back(nlhostoutmacnonunicastpkts.get_name_leafdata());
    if (nlhostcreatetime.is_set || is_set(nlhostcreatetime.yfilter)) leaf_name_data.push_back(nlhostcreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlHostTable::NlHostEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlHostTable::NlHostEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::NlHostTable::NlHostEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nlHostInPkts")
    {
        nlhostinpkts = value;
        nlhostinpkts.value_namespace = name_space;
        nlhostinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostOutPkts")
    {
        nlhostoutpkts = value;
        nlhostoutpkts.value_namespace = name_space;
        nlhostoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostInOctets")
    {
        nlhostinoctets = value;
        nlhostinoctets.value_namespace = name_space;
        nlhostinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostOutOctets")
    {
        nlhostoutoctets = value;
        nlhostoutoctets.value_namespace = name_space;
        nlhostoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostOutMacNonUnicastPkts")
    {
        nlhostoutmacnonunicastpkts = value;
        nlhostoutmacnonunicastpkts.value_namespace = name_space;
        nlhostoutmacnonunicastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlHostCreateTime")
    {
        nlhostcreatetime = value;
        nlhostcreatetime.value_namespace = name_space;
        nlhostcreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::NlHostTable::NlHostEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "nlHostInPkts")
    {
        nlhostinpkts.yfilter = yfilter;
    }
    if(value_path == "nlHostOutPkts")
    {
        nlhostoutpkts.yfilter = yfilter;
    }
    if(value_path == "nlHostInOctets")
    {
        nlhostinoctets.yfilter = yfilter;
    }
    if(value_path == "nlHostOutOctets")
    {
        nlhostoutoctets.yfilter = yfilter;
    }
    if(value_path == "nlHostOutMacNonUnicastPkts")
    {
        nlhostoutmacnonunicastpkts.yfilter = yfilter;
    }
    if(value_path == "nlHostCreateTime")
    {
        nlhostcreatetime.yfilter = yfilter;
    }
}

bool RMON2MIB::NlHostTable::NlHostEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlIndex" || name == "nlHostTimeMark" || name == "protocolDirLocalIndex" || name == "nlHostAddress" || name == "nlHostInPkts" || name == "nlHostOutPkts" || name == "nlHostInOctets" || name == "nlHostOutOctets" || name == "nlHostOutMacNonUnicastPkts" || name == "nlHostCreateTime")
        return true;
    return false;
}

RMON2MIB::HlMatrixControlTable::HlMatrixControlTable()
    :
    hlmatrixcontrolentry(this, {"hlmatrixcontrolindex"})
{

    yang_name = "hlMatrixControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::HlMatrixControlTable::~HlMatrixControlTable()
{
}

bool RMON2MIB::HlMatrixControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hlmatrixcontrolentry.len(); index++)
    {
        if(hlmatrixcontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::HlMatrixControlTable::has_operation() const
{
    for (std::size_t index=0; index<hlmatrixcontrolentry.len(); index++)
    {
        if(hlmatrixcontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::HlMatrixControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::HlMatrixControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlMatrixControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::HlMatrixControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::HlMatrixControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hlMatrixControlEntry")
    {
        auto c = std::make_shared<RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry>();
        c->parent = this;
        hlmatrixcontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::HlMatrixControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : hlmatrixcontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::HlMatrixControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::HlMatrixControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::HlMatrixControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlEntry")
        return true;
    return false;
}

RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::HlMatrixControlEntry()
    :
    hlmatrixcontrolindex{YType::int32, "hlMatrixControlIndex"},
    hlmatrixcontroldatasource{YType::str, "hlMatrixControlDataSource"},
    hlmatrixcontrolnldroppedframes{YType::uint32, "hlMatrixControlNlDroppedFrames"},
    hlmatrixcontrolnlinserts{YType::uint32, "hlMatrixControlNlInserts"},
    hlmatrixcontrolnldeletes{YType::uint32, "hlMatrixControlNlDeletes"},
    hlmatrixcontrolnlmaxdesiredentries{YType::int32, "hlMatrixControlNlMaxDesiredEntries"},
    hlmatrixcontrolaldroppedframes{YType::uint32, "hlMatrixControlAlDroppedFrames"},
    hlmatrixcontrolalinserts{YType::uint32, "hlMatrixControlAlInserts"},
    hlmatrixcontrolaldeletes{YType::uint32, "hlMatrixControlAlDeletes"},
    hlmatrixcontrolalmaxdesiredentries{YType::int32, "hlMatrixControlAlMaxDesiredEntries"},
    hlmatrixcontrolowner{YType::str, "hlMatrixControlOwner"},
    hlmatrixcontrolstatus{YType::enumeration, "hlMatrixControlStatus"}
{

    yang_name = "hlMatrixControlEntry"; yang_parent_name = "hlMatrixControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::~HlMatrixControlEntry()
{
}

bool RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlmatrixcontrolindex.is_set
	|| hlmatrixcontroldatasource.is_set
	|| hlmatrixcontrolnldroppedframes.is_set
	|| hlmatrixcontrolnlinserts.is_set
	|| hlmatrixcontrolnldeletes.is_set
	|| hlmatrixcontrolnlmaxdesiredentries.is_set
	|| hlmatrixcontrolaldroppedframes.is_set
	|| hlmatrixcontrolalinserts.is_set
	|| hlmatrixcontrolaldeletes.is_set
	|| hlmatrixcontrolalmaxdesiredentries.is_set
	|| hlmatrixcontrolowner.is_set
	|| hlmatrixcontrolstatus.is_set;
}

bool RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(hlmatrixcontroldatasource.yfilter)
	|| ydk::is_set(hlmatrixcontrolnldroppedframes.yfilter)
	|| ydk::is_set(hlmatrixcontrolnlinserts.yfilter)
	|| ydk::is_set(hlmatrixcontrolnldeletes.yfilter)
	|| ydk::is_set(hlmatrixcontrolnlmaxdesiredentries.yfilter)
	|| ydk::is_set(hlmatrixcontrolaldroppedframes.yfilter)
	|| ydk::is_set(hlmatrixcontrolalinserts.yfilter)
	|| ydk::is_set(hlmatrixcontrolaldeletes.yfilter)
	|| ydk::is_set(hlmatrixcontrolalmaxdesiredentries.yfilter)
	|| ydk::is_set(hlmatrixcontrolowner.yfilter)
	|| ydk::is_set(hlmatrixcontrolstatus.yfilter);
}

std::string RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/hlMatrixControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hlMatrixControlEntry";
    ADD_KEY_TOKEN(hlmatrixcontrolindex, "hlMatrixControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (hlmatrixcontroldatasource.is_set || is_set(hlmatrixcontroldatasource.yfilter)) leaf_name_data.push_back(hlmatrixcontroldatasource.get_name_leafdata());
    if (hlmatrixcontrolnldroppedframes.is_set || is_set(hlmatrixcontrolnldroppedframes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnldroppedframes.get_name_leafdata());
    if (hlmatrixcontrolnlinserts.is_set || is_set(hlmatrixcontrolnlinserts.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnlinserts.get_name_leafdata());
    if (hlmatrixcontrolnldeletes.is_set || is_set(hlmatrixcontrolnldeletes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnldeletes.get_name_leafdata());
    if (hlmatrixcontrolnlmaxdesiredentries.is_set || is_set(hlmatrixcontrolnlmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlmatrixcontrolnlmaxdesiredentries.get_name_leafdata());
    if (hlmatrixcontrolaldroppedframes.is_set || is_set(hlmatrixcontrolaldroppedframes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolaldroppedframes.get_name_leafdata());
    if (hlmatrixcontrolalinserts.is_set || is_set(hlmatrixcontrolalinserts.yfilter)) leaf_name_data.push_back(hlmatrixcontrolalinserts.get_name_leafdata());
    if (hlmatrixcontrolaldeletes.is_set || is_set(hlmatrixcontrolaldeletes.yfilter)) leaf_name_data.push_back(hlmatrixcontrolaldeletes.get_name_leafdata());
    if (hlmatrixcontrolalmaxdesiredentries.is_set || is_set(hlmatrixcontrolalmaxdesiredentries.yfilter)) leaf_name_data.push_back(hlmatrixcontrolalmaxdesiredentries.get_name_leafdata());
    if (hlmatrixcontrolowner.is_set || is_set(hlmatrixcontrolowner.yfilter)) leaf_name_data.push_back(hlmatrixcontrolowner.get_name_leafdata());
    if (hlmatrixcontrolstatus.is_set || is_set(hlmatrixcontrolstatus.yfilter)) leaf_name_data.push_back(hlmatrixcontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex = value;
        hlmatrixcontrolindex.value_namespace = name_space;
        hlmatrixcontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlDataSource")
    {
        hlmatrixcontroldatasource = value;
        hlmatrixcontroldatasource.value_namespace = name_space;
        hlmatrixcontroldatasource.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hlMatrixControlNlDeletes")
    {
        hlmatrixcontrolnldeletes = value;
        hlmatrixcontrolnldeletes.value_namespace = name_space;
        hlmatrixcontrolnldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlNlMaxDesiredEntries")
    {
        hlmatrixcontrolnlmaxdesiredentries = value;
        hlmatrixcontrolnlmaxdesiredentries.value_namespace = name_space;
        hlmatrixcontrolnlmaxdesiredentries.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "hlMatrixControlAlDeletes")
    {
        hlmatrixcontrolaldeletes = value;
        hlmatrixcontrolaldeletes.value_namespace = name_space;
        hlmatrixcontrolaldeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hlMatrixControlAlMaxDesiredEntries")
    {
        hlmatrixcontrolalmaxdesiredentries = value;
        hlmatrixcontrolalmaxdesiredentries.value_namespace = name_space;
        hlmatrixcontrolalmaxdesiredentries.value_namespace_prefix = name_space_prefix;
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

void RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hlMatrixControlIndex")
    {
        hlmatrixcontrolindex.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlDataSource")
    {
        hlmatrixcontroldatasource.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlDroppedFrames")
    {
        hlmatrixcontrolnldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlInserts")
    {
        hlmatrixcontrolnlinserts.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlDeletes")
    {
        hlmatrixcontrolnldeletes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlNlMaxDesiredEntries")
    {
        hlmatrixcontrolnlmaxdesiredentries.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlDroppedFrames")
    {
        hlmatrixcontrolaldroppedframes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlInserts")
    {
        hlmatrixcontrolalinserts.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlDeletes")
    {
        hlmatrixcontrolaldeletes.yfilter = yfilter;
    }
    if(value_path == "hlMatrixControlAlMaxDesiredEntries")
    {
        hlmatrixcontrolalmaxdesiredentries.yfilter = yfilter;
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

bool RMON2MIB::HlMatrixControlTable::HlMatrixControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "hlMatrixControlDataSource" || name == "hlMatrixControlNlDroppedFrames" || name == "hlMatrixControlNlInserts" || name == "hlMatrixControlNlDeletes" || name == "hlMatrixControlNlMaxDesiredEntries" || name == "hlMatrixControlAlDroppedFrames" || name == "hlMatrixControlAlInserts" || name == "hlMatrixControlAlDeletes" || name == "hlMatrixControlAlMaxDesiredEntries" || name == "hlMatrixControlOwner" || name == "hlMatrixControlStatus")
        return true;
    return false;
}

RMON2MIB::NlMatrixSDTable::NlMatrixSDTable()
    :
    nlmatrixsdentry(this, {"hlmatrixcontrolindex", "nlmatrixsdtimemark", "protocoldirlocalindex", "nlmatrixsdsourceaddress", "nlmatrixsddestaddress"})
{

    yang_name = "nlMatrixSDTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixSDTable::~NlMatrixSDTable()
{
}

bool RMON2MIB::NlMatrixSDTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlmatrixsdentry.len(); index++)
    {
        if(nlmatrixsdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::NlMatrixSDTable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixsdentry.len(); index++)
    {
        if(nlmatrixsdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::NlMatrixSDTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixSDTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixSDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixSDTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixSDTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixSDEntry")
    {
        auto c = std::make_shared<RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry>();
        c->parent = this;
        nlmatrixsdentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixSDTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlmatrixsdentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::NlMatrixSDTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::NlMatrixSDTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::NlMatrixSDTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixSDEntry")
        return true;
    return false;
}

RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::NlMatrixSDEntry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    nlmatrixsdtimemark{YType::uint32, "nlMatrixSDTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixsdsourceaddress{YType::str, "nlMatrixSDSourceAddress"},
    nlmatrixsddestaddress{YType::str, "nlMatrixSDDestAddress"},
    nlmatrixsdpkts{YType::uint32, "nlMatrixSDPkts"},
    nlmatrixsdoctets{YType::uint32, "nlMatrixSDOctets"},
    nlmatrixsdcreatetime{YType::uint32, "nlMatrixSDCreateTime"}
{

    yang_name = "nlMatrixSDEntry"; yang_parent_name = "nlMatrixSDTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::~NlMatrixSDEntry()
{
}

bool RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlmatrixcontrolindex.is_set
	|| nlmatrixsdtimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixsdsourceaddress.is_set
	|| nlmatrixsddestaddress.is_set
	|| nlmatrixsdpkts.is_set
	|| nlmatrixsdoctets.is_set
	|| nlmatrixsdcreatetime.is_set;
}

bool RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(nlmatrixsdtimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixsdsourceaddress.yfilter)
	|| ydk::is_set(nlmatrixsddestaddress.yfilter)
	|| ydk::is_set(nlmatrixsdpkts.yfilter)
	|| ydk::is_set(nlmatrixsdoctets.yfilter)
	|| ydk::is_set(nlmatrixsdcreatetime.yfilter);
}

std::string RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixSDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixSDEntry";
    ADD_KEY_TOKEN(hlmatrixcontrolindex, "hlMatrixControlIndex");
    ADD_KEY_TOKEN(nlmatrixsdtimemark, "nlMatrixSDTimeMark");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    ADD_KEY_TOKEN(nlmatrixsdsourceaddress, "nlMatrixSDSourceAddress");
    ADD_KEY_TOKEN(nlmatrixsddestaddress, "nlMatrixSDDestAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (nlmatrixsdtimemark.is_set || is_set(nlmatrixsdtimemark.yfilter)) leaf_name_data.push_back(nlmatrixsdtimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixsdsourceaddress.is_set || is_set(nlmatrixsdsourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixsdsourceaddress.get_name_leafdata());
    if (nlmatrixsddestaddress.is_set || is_set(nlmatrixsddestaddress.yfilter)) leaf_name_data.push_back(nlmatrixsddestaddress.get_name_leafdata());
    if (nlmatrixsdpkts.is_set || is_set(nlmatrixsdpkts.yfilter)) leaf_name_data.push_back(nlmatrixsdpkts.get_name_leafdata());
    if (nlmatrixsdoctets.is_set || is_set(nlmatrixsdoctets.yfilter)) leaf_name_data.push_back(nlmatrixsdoctets.get_name_leafdata());
    if (nlmatrixsdcreatetime.is_set || is_set(nlmatrixsdcreatetime.yfilter)) leaf_name_data.push_back(nlmatrixsdcreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nlMatrixSDPkts")
    {
        nlmatrixsdpkts = value;
        nlmatrixsdpkts.value_namespace = name_space;
        nlmatrixsdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDOctets")
    {
        nlmatrixsdoctets = value;
        nlmatrixsdoctets.value_namespace = name_space;
        nlmatrixsdoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixSDCreateTime")
    {
        nlmatrixsdcreatetime = value;
        nlmatrixsdcreatetime.value_namespace = name_space;
        nlmatrixsdcreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "nlMatrixSDPkts")
    {
        nlmatrixsdpkts.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDOctets")
    {
        nlmatrixsdoctets.yfilter = yfilter;
    }
    if(value_path == "nlMatrixSDCreateTime")
    {
        nlmatrixsdcreatetime.yfilter = yfilter;
    }
}

bool RMON2MIB::NlMatrixSDTable::NlMatrixSDEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "nlMatrixSDTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixSDSourceAddress" || name == "nlMatrixSDDestAddress" || name == "nlMatrixSDPkts" || name == "nlMatrixSDOctets" || name == "nlMatrixSDCreateTime")
        return true;
    return false;
}

RMON2MIB::NlMatrixDSTable::NlMatrixDSTable()
    :
    nlmatrixdsentry(this, {"hlmatrixcontrolindex", "nlmatrixdstimemark", "protocoldirlocalindex", "nlmatrixdsdestaddress", "nlmatrixdssourceaddress"})
{

    yang_name = "nlMatrixDSTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixDSTable::~NlMatrixDSTable()
{
}

bool RMON2MIB::NlMatrixDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlmatrixdsentry.len(); index++)
    {
        if(nlmatrixdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::NlMatrixDSTable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixdsentry.len(); index++)
    {
        if(nlmatrixdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::NlMatrixDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixDSEntry")
    {
        auto c = std::make_shared<RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry>();
        c->parent = this;
        nlmatrixdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlmatrixdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::NlMatrixDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::NlMatrixDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::NlMatrixDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixDSEntry")
        return true;
    return false;
}

RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::NlMatrixDSEntry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    nlmatrixdstimemark{YType::uint32, "nlMatrixDSTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixdsdestaddress{YType::str, "nlMatrixDSDestAddress"},
    nlmatrixdssourceaddress{YType::str, "nlMatrixDSSourceAddress"},
    nlmatrixdspkts{YType::uint32, "nlMatrixDSPkts"},
    nlmatrixdsoctets{YType::uint32, "nlMatrixDSOctets"},
    nlmatrixdscreatetime{YType::uint32, "nlMatrixDSCreateTime"}
{

    yang_name = "nlMatrixDSEntry"; yang_parent_name = "nlMatrixDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::~NlMatrixDSEntry()
{
}

bool RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlmatrixcontrolindex.is_set
	|| nlmatrixdstimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixdsdestaddress.is_set
	|| nlmatrixdssourceaddress.is_set
	|| nlmatrixdspkts.is_set
	|| nlmatrixdsoctets.is_set
	|| nlmatrixdscreatetime.is_set;
}

bool RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(nlmatrixdstimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixdsdestaddress.yfilter)
	|| ydk::is_set(nlmatrixdssourceaddress.yfilter)
	|| ydk::is_set(nlmatrixdspkts.yfilter)
	|| ydk::is_set(nlmatrixdsoctets.yfilter)
	|| ydk::is_set(nlmatrixdscreatetime.yfilter);
}

std::string RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixDSEntry";
    ADD_KEY_TOKEN(hlmatrixcontrolindex, "hlMatrixControlIndex");
    ADD_KEY_TOKEN(nlmatrixdstimemark, "nlMatrixDSTimeMark");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    ADD_KEY_TOKEN(nlmatrixdsdestaddress, "nlMatrixDSDestAddress");
    ADD_KEY_TOKEN(nlmatrixdssourceaddress, "nlMatrixDSSourceAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (nlmatrixdstimemark.is_set || is_set(nlmatrixdstimemark.yfilter)) leaf_name_data.push_back(nlmatrixdstimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixdsdestaddress.is_set || is_set(nlmatrixdsdestaddress.yfilter)) leaf_name_data.push_back(nlmatrixdsdestaddress.get_name_leafdata());
    if (nlmatrixdssourceaddress.is_set || is_set(nlmatrixdssourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixdssourceaddress.get_name_leafdata());
    if (nlmatrixdspkts.is_set || is_set(nlmatrixdspkts.yfilter)) leaf_name_data.push_back(nlmatrixdspkts.get_name_leafdata());
    if (nlmatrixdsoctets.is_set || is_set(nlmatrixdsoctets.yfilter)) leaf_name_data.push_back(nlmatrixdsoctets.get_name_leafdata());
    if (nlmatrixdscreatetime.is_set || is_set(nlmatrixdscreatetime.yfilter)) leaf_name_data.push_back(nlmatrixdscreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nlMatrixDSPkts")
    {
        nlmatrixdspkts = value;
        nlmatrixdspkts.value_namespace = name_space;
        nlmatrixdspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSOctets")
    {
        nlmatrixdsoctets = value;
        nlmatrixdsoctets.value_namespace = name_space;
        nlmatrixdsoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixDSCreateTime")
    {
        nlmatrixdscreatetime = value;
        nlmatrixdscreatetime.value_namespace = name_space;
        nlmatrixdscreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "nlMatrixDSPkts")
    {
        nlmatrixdspkts.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSOctets")
    {
        nlmatrixdsoctets.yfilter = yfilter;
    }
    if(value_path == "nlMatrixDSCreateTime")
    {
        nlmatrixdscreatetime.yfilter = yfilter;
    }
}

bool RMON2MIB::NlMatrixDSTable::NlMatrixDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "nlMatrixDSTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixDSDestAddress" || name == "nlMatrixDSSourceAddress" || name == "nlMatrixDSPkts" || name == "nlMatrixDSOctets" || name == "nlMatrixDSCreateTime")
        return true;
    return false;
}

RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlTable()
    :
    nlmatrixtopncontrolentry(this, {"nlmatrixtopncontrolindex"})
{

    yang_name = "nlMatrixTopNControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixTopNControlTable::~NlMatrixTopNControlTable()
{
}

bool RMON2MIB::NlMatrixTopNControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlmatrixtopncontrolentry.len(); index++)
    {
        if(nlmatrixtopncontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::NlMatrixTopNControlTable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixtopncontrolentry.len(); index++)
    {
        if(nlmatrixtopncontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::NlMatrixTopNControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixTopNControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixTopNControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixTopNControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixTopNControlEntry")
    {
        auto c = std::make_shared<RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry>();
        c->parent = this;
        nlmatrixtopncontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixTopNControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlmatrixtopncontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::NlMatrixTopNControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::NlMatrixTopNControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::NlMatrixTopNControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNControlEntry")
        return true;
    return false;
}

RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::NlMatrixTopNControlEntry()
    :
    nlmatrixtopncontrolindex{YType::int32, "nlMatrixTopNControlIndex"},
    nlmatrixtopncontrolmatrixindex{YType::int32, "nlMatrixTopNControlMatrixIndex"},
    nlmatrixtopncontrolratebase{YType::enumeration, "nlMatrixTopNControlRateBase"},
    nlmatrixtopncontroltimeremaining{YType::int32, "nlMatrixTopNControlTimeRemaining"},
    nlmatrixtopncontrolgeneratedreports{YType::uint32, "nlMatrixTopNControlGeneratedReports"},
    nlmatrixtopncontrolduration{YType::int32, "nlMatrixTopNControlDuration"},
    nlmatrixtopncontrolrequestedsize{YType::int32, "nlMatrixTopNControlRequestedSize"},
    nlmatrixtopncontrolgrantedsize{YType::int32, "nlMatrixTopNControlGrantedSize"},
    nlmatrixtopncontrolstarttime{YType::uint32, "nlMatrixTopNControlStartTime"},
    nlmatrixtopncontrolowner{YType::str, "nlMatrixTopNControlOwner"},
    nlmatrixtopncontrolstatus{YType::enumeration, "nlMatrixTopNControlStatus"}
{

    yang_name = "nlMatrixTopNControlEntry"; yang_parent_name = "nlMatrixTopNControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::~NlMatrixTopNControlEntry()
{
}

bool RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return nlmatrixtopncontrolindex.is_set
	|| nlmatrixtopncontrolmatrixindex.is_set
	|| nlmatrixtopncontrolratebase.is_set
	|| nlmatrixtopncontroltimeremaining.is_set
	|| nlmatrixtopncontrolgeneratedreports.is_set
	|| nlmatrixtopncontrolduration.is_set
	|| nlmatrixtopncontrolrequestedsize.is_set
	|| nlmatrixtopncontrolgrantedsize.is_set
	|| nlmatrixtopncontrolstarttime.is_set
	|| nlmatrixtopncontrolowner.is_set
	|| nlmatrixtopncontrolstatus.is_set;
}

bool RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmatrixtopncontrolindex.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolmatrixindex.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolratebase.yfilter)
	|| ydk::is_set(nlmatrixtopncontroltimeremaining.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolgeneratedreports.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolduration.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolrequestedsize.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolgrantedsize.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolstarttime.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolowner.yfilter)
	|| ydk::is_set(nlmatrixtopncontrolstatus.yfilter);
}

std::string RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixTopNControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNControlEntry";
    ADD_KEY_TOKEN(nlmatrixtopncontrolindex, "nlMatrixTopNControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmatrixtopncontrolindex.is_set || is_set(nlmatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolindex.get_name_leafdata());
    if (nlmatrixtopncontrolmatrixindex.is_set || is_set(nlmatrixtopncontrolmatrixindex.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolmatrixindex.get_name_leafdata());
    if (nlmatrixtopncontrolratebase.is_set || is_set(nlmatrixtopncontrolratebase.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolratebase.get_name_leafdata());
    if (nlmatrixtopncontroltimeremaining.is_set || is_set(nlmatrixtopncontroltimeremaining.yfilter)) leaf_name_data.push_back(nlmatrixtopncontroltimeremaining.get_name_leafdata());
    if (nlmatrixtopncontrolgeneratedreports.is_set || is_set(nlmatrixtopncontrolgeneratedreports.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolgeneratedreports.get_name_leafdata());
    if (nlmatrixtopncontrolduration.is_set || is_set(nlmatrixtopncontrolduration.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolduration.get_name_leafdata());
    if (nlmatrixtopncontrolrequestedsize.is_set || is_set(nlmatrixtopncontrolrequestedsize.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolrequestedsize.get_name_leafdata());
    if (nlmatrixtopncontrolgrantedsize.is_set || is_set(nlmatrixtopncontrolgrantedsize.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolgrantedsize.get_name_leafdata());
    if (nlmatrixtopncontrolstarttime.is_set || is_set(nlmatrixtopncontrolstarttime.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolstarttime.get_name_leafdata());
    if (nlmatrixtopncontrolowner.is_set || is_set(nlmatrixtopncontrolowner.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolowner.get_name_leafdata());
    if (nlmatrixtopncontrolstatus.is_set || is_set(nlmatrixtopncontrolstatus.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlMatrixTopNControlIndex")
    {
        nlmatrixtopncontrolindex = value;
        nlmatrixtopncontrolindex.value_namespace = name_space;
        nlmatrixtopncontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlMatrixIndex")
    {
        nlmatrixtopncontrolmatrixindex = value;
        nlmatrixtopncontrolmatrixindex.value_namespace = name_space;
        nlmatrixtopncontrolmatrixindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlRateBase")
    {
        nlmatrixtopncontrolratebase = value;
        nlmatrixtopncontrolratebase.value_namespace = name_space;
        nlmatrixtopncontrolratebase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlTimeRemaining")
    {
        nlmatrixtopncontroltimeremaining = value;
        nlmatrixtopncontroltimeremaining.value_namespace = name_space;
        nlmatrixtopncontroltimeremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlGeneratedReports")
    {
        nlmatrixtopncontrolgeneratedreports = value;
        nlmatrixtopncontrolgeneratedreports.value_namespace = name_space;
        nlmatrixtopncontrolgeneratedreports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlDuration")
    {
        nlmatrixtopncontrolduration = value;
        nlmatrixtopncontrolduration.value_namespace = name_space;
        nlmatrixtopncontrolduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlRequestedSize")
    {
        nlmatrixtopncontrolrequestedsize = value;
        nlmatrixtopncontrolrequestedsize.value_namespace = name_space;
        nlmatrixtopncontrolrequestedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlGrantedSize")
    {
        nlmatrixtopncontrolgrantedsize = value;
        nlmatrixtopncontrolgrantedsize.value_namespace = name_space;
        nlmatrixtopncontrolgrantedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlStartTime")
    {
        nlmatrixtopncontrolstarttime = value;
        nlmatrixtopncontrolstarttime.value_namespace = name_space;
        nlmatrixtopncontrolstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlOwner")
    {
        nlmatrixtopncontrolowner = value;
        nlmatrixtopncontrolowner.value_namespace = name_space;
        nlmatrixtopncontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNControlStatus")
    {
        nlmatrixtopncontrolstatus = value;
        nlmatrixtopncontrolstatus.value_namespace = name_space;
        nlmatrixtopncontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlMatrixTopNControlIndex")
    {
        nlmatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlMatrixIndex")
    {
        nlmatrixtopncontrolmatrixindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlRateBase")
    {
        nlmatrixtopncontrolratebase.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlTimeRemaining")
    {
        nlmatrixtopncontroltimeremaining.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlGeneratedReports")
    {
        nlmatrixtopncontrolgeneratedreports.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlDuration")
    {
        nlmatrixtopncontrolduration.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlRequestedSize")
    {
        nlmatrixtopncontrolrequestedsize.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlGrantedSize")
    {
        nlmatrixtopncontrolgrantedsize.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlStartTime")
    {
        nlmatrixtopncontrolstarttime.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlOwner")
    {
        nlmatrixtopncontrolowner.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNControlStatus")
    {
        nlmatrixtopncontrolstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNControlIndex" || name == "nlMatrixTopNControlMatrixIndex" || name == "nlMatrixTopNControlRateBase" || name == "nlMatrixTopNControlTimeRemaining" || name == "nlMatrixTopNControlGeneratedReports" || name == "nlMatrixTopNControlDuration" || name == "nlMatrixTopNControlRequestedSize" || name == "nlMatrixTopNControlGrantedSize" || name == "nlMatrixTopNControlStartTime" || name == "nlMatrixTopNControlOwner" || name == "nlMatrixTopNControlStatus")
        return true;
    return false;
}

RMON2MIB::NlMatrixTopNTable::NlMatrixTopNTable()
    :
    nlmatrixtopnentry(this, {"nlmatrixtopncontrolindex", "nlmatrixtopnindex"})
{

    yang_name = "nlMatrixTopNTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixTopNTable::~NlMatrixTopNTable()
{
}

bool RMON2MIB::NlMatrixTopNTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nlmatrixtopnentry.len(); index++)
    {
        if(nlmatrixtopnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::NlMatrixTopNTable::has_operation() const
{
    for (std::size_t index=0; index<nlmatrixtopnentry.len(); index++)
    {
        if(nlmatrixtopnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::NlMatrixTopNTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixTopNTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixTopNTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixTopNTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nlMatrixTopNEntry")
    {
        auto c = std::make_shared<RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry>();
        c->parent = this;
        nlmatrixtopnentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixTopNTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nlmatrixtopnentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::NlMatrixTopNTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::NlMatrixTopNTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::NlMatrixTopNTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNEntry")
        return true;
    return false;
}

RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::NlMatrixTopNEntry()
    :
    nlmatrixtopncontrolindex{YType::str, "nlMatrixTopNControlIndex"},
    nlmatrixtopnindex{YType::int32, "nlMatrixTopNIndex"},
    nlmatrixtopnprotocoldirlocalindex{YType::int32, "nlMatrixTopNProtocolDirLocalIndex"},
    nlmatrixtopnsourceaddress{YType::str, "nlMatrixTopNSourceAddress"},
    nlmatrixtopndestaddress{YType::str, "nlMatrixTopNDestAddress"},
    nlmatrixtopnpktrate{YType::uint32, "nlMatrixTopNPktRate"},
    nlmatrixtopnreversepktrate{YType::uint32, "nlMatrixTopNReversePktRate"},
    nlmatrixtopnoctetrate{YType::uint32, "nlMatrixTopNOctetRate"},
    nlmatrixtopnreverseoctetrate{YType::uint32, "nlMatrixTopNReverseOctetRate"}
{

    yang_name = "nlMatrixTopNEntry"; yang_parent_name = "nlMatrixTopNTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::~NlMatrixTopNEntry()
{
}

bool RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::has_data() const
{
    if (is_presence_container) return true;
    return nlmatrixtopncontrolindex.is_set
	|| nlmatrixtopnindex.is_set
	|| nlmatrixtopnprotocoldirlocalindex.is_set
	|| nlmatrixtopnsourceaddress.is_set
	|| nlmatrixtopndestaddress.is_set
	|| nlmatrixtopnpktrate.is_set
	|| nlmatrixtopnreversepktrate.is_set
	|| nlmatrixtopnoctetrate.is_set
	|| nlmatrixtopnreverseoctetrate.is_set;
}

bool RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlmatrixtopncontrolindex.yfilter)
	|| ydk::is_set(nlmatrixtopnindex.yfilter)
	|| ydk::is_set(nlmatrixtopnprotocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixtopnsourceaddress.yfilter)
	|| ydk::is_set(nlmatrixtopndestaddress.yfilter)
	|| ydk::is_set(nlmatrixtopnpktrate.yfilter)
	|| ydk::is_set(nlmatrixtopnreversepktrate.yfilter)
	|| ydk::is_set(nlmatrixtopnoctetrate.yfilter)
	|| ydk::is_set(nlmatrixtopnreverseoctetrate.yfilter);
}

std::string RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/nlMatrixTopNTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nlMatrixTopNEntry";
    ADD_KEY_TOKEN(nlmatrixtopncontrolindex, "nlMatrixTopNControlIndex");
    ADD_KEY_TOKEN(nlmatrixtopnindex, "nlMatrixTopNIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlmatrixtopncontrolindex.is_set || is_set(nlmatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(nlmatrixtopncontrolindex.get_name_leafdata());
    if (nlmatrixtopnindex.is_set || is_set(nlmatrixtopnindex.yfilter)) leaf_name_data.push_back(nlmatrixtopnindex.get_name_leafdata());
    if (nlmatrixtopnprotocoldirlocalindex.is_set || is_set(nlmatrixtopnprotocoldirlocalindex.yfilter)) leaf_name_data.push_back(nlmatrixtopnprotocoldirlocalindex.get_name_leafdata());
    if (nlmatrixtopnsourceaddress.is_set || is_set(nlmatrixtopnsourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixtopnsourceaddress.get_name_leafdata());
    if (nlmatrixtopndestaddress.is_set || is_set(nlmatrixtopndestaddress.yfilter)) leaf_name_data.push_back(nlmatrixtopndestaddress.get_name_leafdata());
    if (nlmatrixtopnpktrate.is_set || is_set(nlmatrixtopnpktrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnpktrate.get_name_leafdata());
    if (nlmatrixtopnreversepktrate.is_set || is_set(nlmatrixtopnreversepktrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnreversepktrate.get_name_leafdata());
    if (nlmatrixtopnoctetrate.is_set || is_set(nlmatrixtopnoctetrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnoctetrate.get_name_leafdata());
    if (nlmatrixtopnreverseoctetrate.is_set || is_set(nlmatrixtopnreverseoctetrate.yfilter)) leaf_name_data.push_back(nlmatrixtopnreverseoctetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "nlMatrixTopNProtocolDirLocalIndex")
    {
        nlmatrixtopnprotocoldirlocalindex = value;
        nlmatrixtopnprotocoldirlocalindex.value_namespace = name_space;
        nlmatrixtopnprotocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNSourceAddress")
    {
        nlmatrixtopnsourceaddress = value;
        nlmatrixtopnsourceaddress.value_namespace = name_space;
        nlmatrixtopnsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNDestAddress")
    {
        nlmatrixtopndestaddress = value;
        nlmatrixtopndestaddress.value_namespace = name_space;
        nlmatrixtopndestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNPktRate")
    {
        nlmatrixtopnpktrate = value;
        nlmatrixtopnpktrate.value_namespace = name_space;
        nlmatrixtopnpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNReversePktRate")
    {
        nlmatrixtopnreversepktrate = value;
        nlmatrixtopnreversepktrate.value_namespace = name_space;
        nlmatrixtopnreversepktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNOctetRate")
    {
        nlmatrixtopnoctetrate = value;
        nlmatrixtopnoctetrate.value_namespace = name_space;
        nlmatrixtopnoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nlMatrixTopNReverseOctetRate")
    {
        nlmatrixtopnreverseoctetrate = value;
        nlmatrixtopnreverseoctetrate.value_namespace = name_space;
        nlmatrixtopnreverseoctetrate.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlMatrixTopNControlIndex")
    {
        nlmatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNIndex")
    {
        nlmatrixtopnindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNProtocolDirLocalIndex")
    {
        nlmatrixtopnprotocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNSourceAddress")
    {
        nlmatrixtopnsourceaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNDestAddress")
    {
        nlmatrixtopndestaddress.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNPktRate")
    {
        nlmatrixtopnpktrate.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNReversePktRate")
    {
        nlmatrixtopnreversepktrate.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNOctetRate")
    {
        nlmatrixtopnoctetrate.yfilter = yfilter;
    }
    if(value_path == "nlMatrixTopNReverseOctetRate")
    {
        nlmatrixtopnreverseoctetrate.yfilter = yfilter;
    }
}

bool RMON2MIB::NlMatrixTopNTable::NlMatrixTopNEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlMatrixTopNControlIndex" || name == "nlMatrixTopNIndex" || name == "nlMatrixTopNProtocolDirLocalIndex" || name == "nlMatrixTopNSourceAddress" || name == "nlMatrixTopNDestAddress" || name == "nlMatrixTopNPktRate" || name == "nlMatrixTopNReversePktRate" || name == "nlMatrixTopNOctetRate" || name == "nlMatrixTopNReverseOctetRate")
        return true;
    return false;
}

RMON2MIB::AlHostTable::AlHostTable()
    :
    alhostentry(this, {"hlhostcontrolindex", "alhosttimemark", "protocoldirlocalindex", "nlhostaddress", "protocoldirlocalindex_2"})
{

    yang_name = "alHostTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlHostTable::~AlHostTable()
{
}

bool RMON2MIB::AlHostTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<alhostentry.len(); index++)
    {
        if(alhostentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::AlHostTable::has_operation() const
{
    for (std::size_t index=0; index<alhostentry.len(); index++)
    {
        if(alhostentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::AlHostTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlHostTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alHostTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlHostTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlHostTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alHostEntry")
    {
        auto c = std::make_shared<RMON2MIB::AlHostTable::AlHostEntry>();
        c->parent = this;
        alhostentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlHostTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : alhostentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::AlHostTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::AlHostTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::AlHostTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alHostEntry")
        return true;
    return false;
}

RMON2MIB::AlHostTable::AlHostEntry::AlHostEntry()
    :
    hlhostcontrolindex{YType::str, "hlHostControlIndex"},
    alhosttimemark{YType::uint32, "alHostTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlhostaddress{YType::str, "nlHostAddress"},
    protocoldirlocalindex_2{YType::str, "protocolDirLocalIndex_2"},
    alhostinpkts{YType::uint32, "alHostInPkts"},
    alhostoutpkts{YType::uint32, "alHostOutPkts"},
    alhostinoctets{YType::uint32, "alHostInOctets"},
    alhostoutoctets{YType::uint32, "alHostOutOctets"},
    alhostcreatetime{YType::uint32, "alHostCreateTime"}
{

    yang_name = "alHostEntry"; yang_parent_name = "alHostTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlHostTable::AlHostEntry::~AlHostEntry()
{
}

bool RMON2MIB::AlHostTable::AlHostEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlhostcontrolindex.is_set
	|| alhosttimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlhostaddress.is_set
	|| protocoldirlocalindex_2.is_set
	|| alhostinpkts.is_set
	|| alhostoutpkts.is_set
	|| alhostinoctets.is_set
	|| alhostoutoctets.is_set
	|| alhostcreatetime.is_set;
}

bool RMON2MIB::AlHostTable::AlHostEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlhostcontrolindex.yfilter)
	|| ydk::is_set(alhosttimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlhostaddress.yfilter)
	|| ydk::is_set(protocoldirlocalindex_2.yfilter)
	|| ydk::is_set(alhostinpkts.yfilter)
	|| ydk::is_set(alhostoutpkts.yfilter)
	|| ydk::is_set(alhostinoctets.yfilter)
	|| ydk::is_set(alhostoutoctets.yfilter)
	|| ydk::is_set(alhostcreatetime.yfilter);
}

std::string RMON2MIB::AlHostTable::AlHostEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alHostTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlHostTable::AlHostEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alHostEntry";
    ADD_KEY_TOKEN(hlhostcontrolindex, "hlHostControlIndex");
    ADD_KEY_TOKEN(alhosttimemark, "alHostTimeMark");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    ADD_KEY_TOKEN(nlhostaddress, "nlHostAddress");
    ADD_KEY_TOKEN(protocoldirlocalindex_2, "protocolDirLocalIndex_2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlHostTable::AlHostEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlhostcontrolindex.is_set || is_set(hlhostcontrolindex.yfilter)) leaf_name_data.push_back(hlhostcontrolindex.get_name_leafdata());
    if (alhosttimemark.is_set || is_set(alhosttimemark.yfilter)) leaf_name_data.push_back(alhosttimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlhostaddress.is_set || is_set(nlhostaddress.yfilter)) leaf_name_data.push_back(nlhostaddress.get_name_leafdata());
    if (protocoldirlocalindex_2.is_set || is_set(protocoldirlocalindex_2.yfilter)) leaf_name_data.push_back(protocoldirlocalindex_2.get_name_leafdata());
    if (alhostinpkts.is_set || is_set(alhostinpkts.yfilter)) leaf_name_data.push_back(alhostinpkts.get_name_leafdata());
    if (alhostoutpkts.is_set || is_set(alhostoutpkts.yfilter)) leaf_name_data.push_back(alhostoutpkts.get_name_leafdata());
    if (alhostinoctets.is_set || is_set(alhostinoctets.yfilter)) leaf_name_data.push_back(alhostinoctets.get_name_leafdata());
    if (alhostoutoctets.is_set || is_set(alhostoutoctets.yfilter)) leaf_name_data.push_back(alhostoutoctets.get_name_leafdata());
    if (alhostcreatetime.is_set || is_set(alhostcreatetime.yfilter)) leaf_name_data.push_back(alhostcreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlHostTable::AlHostEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlHostTable::AlHostEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AlHostTable::AlHostEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "alHostInPkts")
    {
        alhostinpkts = value;
        alhostinpkts.value_namespace = name_space;
        alhostinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostOutPkts")
    {
        alhostoutpkts = value;
        alhostoutpkts.value_namespace = name_space;
        alhostoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostInOctets")
    {
        alhostinoctets = value;
        alhostinoctets.value_namespace = name_space;
        alhostinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostOutOctets")
    {
        alhostoutoctets = value;
        alhostoutoctets.value_namespace = name_space;
        alhostoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alHostCreateTime")
    {
        alhostcreatetime = value;
        alhostcreatetime.value_namespace = name_space;
        alhostcreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::AlHostTable::AlHostEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "alHostInPkts")
    {
        alhostinpkts.yfilter = yfilter;
    }
    if(value_path == "alHostOutPkts")
    {
        alhostoutpkts.yfilter = yfilter;
    }
    if(value_path == "alHostInOctets")
    {
        alhostinoctets.yfilter = yfilter;
    }
    if(value_path == "alHostOutOctets")
    {
        alhostoutoctets.yfilter = yfilter;
    }
    if(value_path == "alHostCreateTime")
    {
        alhostcreatetime.yfilter = yfilter;
    }
}

bool RMON2MIB::AlHostTable::AlHostEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlHostControlIndex" || name == "alHostTimeMark" || name == "protocolDirLocalIndex" || name == "nlHostAddress" || name == "protocolDirLocalIndex_2" || name == "alHostInPkts" || name == "alHostOutPkts" || name == "alHostInOctets" || name == "alHostOutOctets" || name == "alHostCreateTime")
        return true;
    return false;
}

RMON2MIB::AlMatrixSDTable::AlMatrixSDTable()
    :
    almatrixsdentry(this, {"hlmatrixcontrolindex", "almatrixsdtimemark", "protocoldirlocalindex", "nlmatrixsdsourceaddress", "nlmatrixsddestaddress", "protocoldirlocalindex_2"})
{

    yang_name = "alMatrixSDTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixSDTable::~AlMatrixSDTable()
{
}

bool RMON2MIB::AlMatrixSDTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<almatrixsdentry.len(); index++)
    {
        if(almatrixsdentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::AlMatrixSDTable::has_operation() const
{
    for (std::size_t index=0; index<almatrixsdentry.len(); index++)
    {
        if(almatrixsdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::AlMatrixSDTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixSDTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixSDTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixSDTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixSDTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixSDEntry")
    {
        auto c = std::make_shared<RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry>();
        c->parent = this;
        almatrixsdentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixSDTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : almatrixsdentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::AlMatrixSDTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::AlMatrixSDTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::AlMatrixSDTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixSDEntry")
        return true;
    return false;
}

RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::AlMatrixSDEntry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    almatrixsdtimemark{YType::uint32, "alMatrixSDTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixsdsourceaddress{YType::str, "nlMatrixSDSourceAddress"},
    nlmatrixsddestaddress{YType::str, "nlMatrixSDDestAddress"},
    protocoldirlocalindex_2{YType::str, "protocolDirLocalIndex_2"},
    almatrixsdpkts{YType::uint32, "alMatrixSDPkts"},
    almatrixsdoctets{YType::uint32, "alMatrixSDOctets"},
    almatrixsdcreatetime{YType::uint32, "alMatrixSDCreateTime"}
{

    yang_name = "alMatrixSDEntry"; yang_parent_name = "alMatrixSDTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::~AlMatrixSDEntry()
{
}

bool RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlmatrixcontrolindex.is_set
	|| almatrixsdtimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixsdsourceaddress.is_set
	|| nlmatrixsddestaddress.is_set
	|| protocoldirlocalindex_2.is_set
	|| almatrixsdpkts.is_set
	|| almatrixsdoctets.is_set
	|| almatrixsdcreatetime.is_set;
}

bool RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(almatrixsdtimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixsdsourceaddress.yfilter)
	|| ydk::is_set(nlmatrixsddestaddress.yfilter)
	|| ydk::is_set(protocoldirlocalindex_2.yfilter)
	|| ydk::is_set(almatrixsdpkts.yfilter)
	|| ydk::is_set(almatrixsdoctets.yfilter)
	|| ydk::is_set(almatrixsdcreatetime.yfilter);
}

std::string RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixSDTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixSDEntry";
    ADD_KEY_TOKEN(hlmatrixcontrolindex, "hlMatrixControlIndex");
    ADD_KEY_TOKEN(almatrixsdtimemark, "alMatrixSDTimeMark");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    ADD_KEY_TOKEN(nlmatrixsdsourceaddress, "nlMatrixSDSourceAddress");
    ADD_KEY_TOKEN(nlmatrixsddestaddress, "nlMatrixSDDestAddress");
    ADD_KEY_TOKEN(protocoldirlocalindex_2, "protocolDirLocalIndex_2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (almatrixsdtimemark.is_set || is_set(almatrixsdtimemark.yfilter)) leaf_name_data.push_back(almatrixsdtimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixsdsourceaddress.is_set || is_set(nlmatrixsdsourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixsdsourceaddress.get_name_leafdata());
    if (nlmatrixsddestaddress.is_set || is_set(nlmatrixsddestaddress.yfilter)) leaf_name_data.push_back(nlmatrixsddestaddress.get_name_leafdata());
    if (protocoldirlocalindex_2.is_set || is_set(protocoldirlocalindex_2.yfilter)) leaf_name_data.push_back(protocoldirlocalindex_2.get_name_leafdata());
    if (almatrixsdpkts.is_set || is_set(almatrixsdpkts.yfilter)) leaf_name_data.push_back(almatrixsdpkts.get_name_leafdata());
    if (almatrixsdoctets.is_set || is_set(almatrixsdoctets.yfilter)) leaf_name_data.push_back(almatrixsdoctets.get_name_leafdata());
    if (almatrixsdcreatetime.is_set || is_set(almatrixsdcreatetime.yfilter)) leaf_name_data.push_back(almatrixsdcreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "alMatrixSDPkts")
    {
        almatrixsdpkts = value;
        almatrixsdpkts.value_namespace = name_space;
        almatrixsdpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixSDOctets")
    {
        almatrixsdoctets = value;
        almatrixsdoctets.value_namespace = name_space;
        almatrixsdoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixSDCreateTime")
    {
        almatrixsdcreatetime = value;
        almatrixsdcreatetime.value_namespace = name_space;
        almatrixsdcreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "alMatrixSDPkts")
    {
        almatrixsdpkts.yfilter = yfilter;
    }
    if(value_path == "alMatrixSDOctets")
    {
        almatrixsdoctets.yfilter = yfilter;
    }
    if(value_path == "alMatrixSDCreateTime")
    {
        almatrixsdcreatetime.yfilter = yfilter;
    }
}

bool RMON2MIB::AlMatrixSDTable::AlMatrixSDEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "alMatrixSDTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixSDSourceAddress" || name == "nlMatrixSDDestAddress" || name == "protocolDirLocalIndex_2" || name == "alMatrixSDPkts" || name == "alMatrixSDOctets" || name == "alMatrixSDCreateTime")
        return true;
    return false;
}

RMON2MIB::AlMatrixDSTable::AlMatrixDSTable()
    :
    almatrixdsentry(this, {"hlmatrixcontrolindex", "almatrixdstimemark", "protocoldirlocalindex", "nlmatrixdsdestaddress", "nlmatrixdssourceaddress", "protocoldirlocalindex_2"})
{

    yang_name = "alMatrixDSTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixDSTable::~AlMatrixDSTable()
{
}

bool RMON2MIB::AlMatrixDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<almatrixdsentry.len(); index++)
    {
        if(almatrixdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::AlMatrixDSTable::has_operation() const
{
    for (std::size_t index=0; index<almatrixdsentry.len(); index++)
    {
        if(almatrixdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::AlMatrixDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixDSEntry")
    {
        auto c = std::make_shared<RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry>();
        c->parent = this;
        almatrixdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : almatrixdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::AlMatrixDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::AlMatrixDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::AlMatrixDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixDSEntry")
        return true;
    return false;
}

RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::AlMatrixDSEntry()
    :
    hlmatrixcontrolindex{YType::str, "hlMatrixControlIndex"},
    almatrixdstimemark{YType::uint32, "alMatrixDSTimeMark"},
    protocoldirlocalindex{YType::str, "protocolDirLocalIndex"},
    nlmatrixdsdestaddress{YType::str, "nlMatrixDSDestAddress"},
    nlmatrixdssourceaddress{YType::str, "nlMatrixDSSourceAddress"},
    protocoldirlocalindex_2{YType::str, "protocolDirLocalIndex_2"},
    almatrixdspkts{YType::uint32, "alMatrixDSPkts"},
    almatrixdsoctets{YType::uint32, "alMatrixDSOctets"},
    almatrixdscreatetime{YType::uint32, "alMatrixDSCreateTime"}
{

    yang_name = "alMatrixDSEntry"; yang_parent_name = "alMatrixDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::~AlMatrixDSEntry()
{
}

bool RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return hlmatrixcontrolindex.is_set
	|| almatrixdstimemark.is_set
	|| protocoldirlocalindex.is_set
	|| nlmatrixdsdestaddress.is_set
	|| nlmatrixdssourceaddress.is_set
	|| protocoldirlocalindex_2.is_set
	|| almatrixdspkts.is_set
	|| almatrixdsoctets.is_set
	|| almatrixdscreatetime.is_set;
}

bool RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hlmatrixcontrolindex.yfilter)
	|| ydk::is_set(almatrixdstimemark.yfilter)
	|| ydk::is_set(protocoldirlocalindex.yfilter)
	|| ydk::is_set(nlmatrixdsdestaddress.yfilter)
	|| ydk::is_set(nlmatrixdssourceaddress.yfilter)
	|| ydk::is_set(protocoldirlocalindex_2.yfilter)
	|| ydk::is_set(almatrixdspkts.yfilter)
	|| ydk::is_set(almatrixdsoctets.yfilter)
	|| ydk::is_set(almatrixdscreatetime.yfilter);
}

std::string RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixDSEntry";
    ADD_KEY_TOKEN(hlmatrixcontrolindex, "hlMatrixControlIndex");
    ADD_KEY_TOKEN(almatrixdstimemark, "alMatrixDSTimeMark");
    ADD_KEY_TOKEN(protocoldirlocalindex, "protocolDirLocalIndex");
    ADD_KEY_TOKEN(nlmatrixdsdestaddress, "nlMatrixDSDestAddress");
    ADD_KEY_TOKEN(nlmatrixdssourceaddress, "nlMatrixDSSourceAddress");
    ADD_KEY_TOKEN(protocoldirlocalindex_2, "protocolDirLocalIndex_2");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hlmatrixcontrolindex.is_set || is_set(hlmatrixcontrolindex.yfilter)) leaf_name_data.push_back(hlmatrixcontrolindex.get_name_leafdata());
    if (almatrixdstimemark.is_set || is_set(almatrixdstimemark.yfilter)) leaf_name_data.push_back(almatrixdstimemark.get_name_leafdata());
    if (protocoldirlocalindex.is_set || is_set(protocoldirlocalindex.yfilter)) leaf_name_data.push_back(protocoldirlocalindex.get_name_leafdata());
    if (nlmatrixdsdestaddress.is_set || is_set(nlmatrixdsdestaddress.yfilter)) leaf_name_data.push_back(nlmatrixdsdestaddress.get_name_leafdata());
    if (nlmatrixdssourceaddress.is_set || is_set(nlmatrixdssourceaddress.yfilter)) leaf_name_data.push_back(nlmatrixdssourceaddress.get_name_leafdata());
    if (protocoldirlocalindex_2.is_set || is_set(protocoldirlocalindex_2.yfilter)) leaf_name_data.push_back(protocoldirlocalindex_2.get_name_leafdata());
    if (almatrixdspkts.is_set || is_set(almatrixdspkts.yfilter)) leaf_name_data.push_back(almatrixdspkts.get_name_leafdata());
    if (almatrixdsoctets.is_set || is_set(almatrixdsoctets.yfilter)) leaf_name_data.push_back(almatrixdsoctets.get_name_leafdata());
    if (almatrixdscreatetime.is_set || is_set(almatrixdscreatetime.yfilter)) leaf_name_data.push_back(almatrixdscreatetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "alMatrixDSPkts")
    {
        almatrixdspkts = value;
        almatrixdspkts.value_namespace = name_space;
        almatrixdspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixDSOctets")
    {
        almatrixdsoctets = value;
        almatrixdsoctets.value_namespace = name_space;
        almatrixdsoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixDSCreateTime")
    {
        almatrixdscreatetime = value;
        almatrixdscreatetime.value_namespace = name_space;
        almatrixdscreatetime.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "alMatrixDSPkts")
    {
        almatrixdspkts.yfilter = yfilter;
    }
    if(value_path == "alMatrixDSOctets")
    {
        almatrixdsoctets.yfilter = yfilter;
    }
    if(value_path == "alMatrixDSCreateTime")
    {
        almatrixdscreatetime.yfilter = yfilter;
    }
}

bool RMON2MIB::AlMatrixDSTable::AlMatrixDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hlMatrixControlIndex" || name == "alMatrixDSTimeMark" || name == "protocolDirLocalIndex" || name == "nlMatrixDSDestAddress" || name == "nlMatrixDSSourceAddress" || name == "protocolDirLocalIndex_2" || name == "alMatrixDSPkts" || name == "alMatrixDSOctets" || name == "alMatrixDSCreateTime")
        return true;
    return false;
}

RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlTable()
    :
    almatrixtopncontrolentry(this, {"almatrixtopncontrolindex"})
{

    yang_name = "alMatrixTopNControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixTopNControlTable::~AlMatrixTopNControlTable()
{
}

bool RMON2MIB::AlMatrixTopNControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<almatrixtopncontrolentry.len(); index++)
    {
        if(almatrixtopncontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::AlMatrixTopNControlTable::has_operation() const
{
    for (std::size_t index=0; index<almatrixtopncontrolentry.len(); index++)
    {
        if(almatrixtopncontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::AlMatrixTopNControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixTopNControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixTopNControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixTopNControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixTopNControlEntry")
    {
        auto c = std::make_shared<RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry>();
        c->parent = this;
        almatrixtopncontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixTopNControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : almatrixtopncontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::AlMatrixTopNControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::AlMatrixTopNControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::AlMatrixTopNControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNControlEntry")
        return true;
    return false;
}

RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::AlMatrixTopNControlEntry()
    :
    almatrixtopncontrolindex{YType::int32, "alMatrixTopNControlIndex"},
    almatrixtopncontrolmatrixindex{YType::int32, "alMatrixTopNControlMatrixIndex"},
    almatrixtopncontrolratebase{YType::enumeration, "alMatrixTopNControlRateBase"},
    almatrixtopncontroltimeremaining{YType::int32, "alMatrixTopNControlTimeRemaining"},
    almatrixtopncontrolgeneratedreports{YType::uint32, "alMatrixTopNControlGeneratedReports"},
    almatrixtopncontrolduration{YType::int32, "alMatrixTopNControlDuration"},
    almatrixtopncontrolrequestedsize{YType::int32, "alMatrixTopNControlRequestedSize"},
    almatrixtopncontrolgrantedsize{YType::int32, "alMatrixTopNControlGrantedSize"},
    almatrixtopncontrolstarttime{YType::uint32, "alMatrixTopNControlStartTime"},
    almatrixtopncontrolowner{YType::str, "alMatrixTopNControlOwner"},
    almatrixtopncontrolstatus{YType::enumeration, "alMatrixTopNControlStatus"}
{

    yang_name = "alMatrixTopNControlEntry"; yang_parent_name = "alMatrixTopNControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::~AlMatrixTopNControlEntry()
{
}

bool RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return almatrixtopncontrolindex.is_set
	|| almatrixtopncontrolmatrixindex.is_set
	|| almatrixtopncontrolratebase.is_set
	|| almatrixtopncontroltimeremaining.is_set
	|| almatrixtopncontrolgeneratedreports.is_set
	|| almatrixtopncontrolduration.is_set
	|| almatrixtopncontrolrequestedsize.is_set
	|| almatrixtopncontrolgrantedsize.is_set
	|| almatrixtopncontrolstarttime.is_set
	|| almatrixtopncontrolowner.is_set
	|| almatrixtopncontrolstatus.is_set;
}

bool RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(almatrixtopncontrolindex.yfilter)
	|| ydk::is_set(almatrixtopncontrolmatrixindex.yfilter)
	|| ydk::is_set(almatrixtopncontrolratebase.yfilter)
	|| ydk::is_set(almatrixtopncontroltimeremaining.yfilter)
	|| ydk::is_set(almatrixtopncontrolgeneratedreports.yfilter)
	|| ydk::is_set(almatrixtopncontrolduration.yfilter)
	|| ydk::is_set(almatrixtopncontrolrequestedsize.yfilter)
	|| ydk::is_set(almatrixtopncontrolgrantedsize.yfilter)
	|| ydk::is_set(almatrixtopncontrolstarttime.yfilter)
	|| ydk::is_set(almatrixtopncontrolowner.yfilter)
	|| ydk::is_set(almatrixtopncontrolstatus.yfilter);
}

std::string RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixTopNControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNControlEntry";
    ADD_KEY_TOKEN(almatrixtopncontrolindex, "alMatrixTopNControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (almatrixtopncontrolindex.is_set || is_set(almatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(almatrixtopncontrolindex.get_name_leafdata());
    if (almatrixtopncontrolmatrixindex.is_set || is_set(almatrixtopncontrolmatrixindex.yfilter)) leaf_name_data.push_back(almatrixtopncontrolmatrixindex.get_name_leafdata());
    if (almatrixtopncontrolratebase.is_set || is_set(almatrixtopncontrolratebase.yfilter)) leaf_name_data.push_back(almatrixtopncontrolratebase.get_name_leafdata());
    if (almatrixtopncontroltimeremaining.is_set || is_set(almatrixtopncontroltimeremaining.yfilter)) leaf_name_data.push_back(almatrixtopncontroltimeremaining.get_name_leafdata());
    if (almatrixtopncontrolgeneratedreports.is_set || is_set(almatrixtopncontrolgeneratedreports.yfilter)) leaf_name_data.push_back(almatrixtopncontrolgeneratedreports.get_name_leafdata());
    if (almatrixtopncontrolduration.is_set || is_set(almatrixtopncontrolduration.yfilter)) leaf_name_data.push_back(almatrixtopncontrolduration.get_name_leafdata());
    if (almatrixtopncontrolrequestedsize.is_set || is_set(almatrixtopncontrolrequestedsize.yfilter)) leaf_name_data.push_back(almatrixtopncontrolrequestedsize.get_name_leafdata());
    if (almatrixtopncontrolgrantedsize.is_set || is_set(almatrixtopncontrolgrantedsize.yfilter)) leaf_name_data.push_back(almatrixtopncontrolgrantedsize.get_name_leafdata());
    if (almatrixtopncontrolstarttime.is_set || is_set(almatrixtopncontrolstarttime.yfilter)) leaf_name_data.push_back(almatrixtopncontrolstarttime.get_name_leafdata());
    if (almatrixtopncontrolowner.is_set || is_set(almatrixtopncontrolowner.yfilter)) leaf_name_data.push_back(almatrixtopncontrolowner.get_name_leafdata());
    if (almatrixtopncontrolstatus.is_set || is_set(almatrixtopncontrolstatus.yfilter)) leaf_name_data.push_back(almatrixtopncontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alMatrixTopNControlIndex")
    {
        almatrixtopncontrolindex = value;
        almatrixtopncontrolindex.value_namespace = name_space;
        almatrixtopncontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlMatrixIndex")
    {
        almatrixtopncontrolmatrixindex = value;
        almatrixtopncontrolmatrixindex.value_namespace = name_space;
        almatrixtopncontrolmatrixindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlRateBase")
    {
        almatrixtopncontrolratebase = value;
        almatrixtopncontrolratebase.value_namespace = name_space;
        almatrixtopncontrolratebase.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlTimeRemaining")
    {
        almatrixtopncontroltimeremaining = value;
        almatrixtopncontroltimeremaining.value_namespace = name_space;
        almatrixtopncontroltimeremaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlGeneratedReports")
    {
        almatrixtopncontrolgeneratedreports = value;
        almatrixtopncontrolgeneratedreports.value_namespace = name_space;
        almatrixtopncontrolgeneratedreports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlDuration")
    {
        almatrixtopncontrolduration = value;
        almatrixtopncontrolduration.value_namespace = name_space;
        almatrixtopncontrolduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlRequestedSize")
    {
        almatrixtopncontrolrequestedsize = value;
        almatrixtopncontrolrequestedsize.value_namespace = name_space;
        almatrixtopncontrolrequestedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlGrantedSize")
    {
        almatrixtopncontrolgrantedsize = value;
        almatrixtopncontrolgrantedsize.value_namespace = name_space;
        almatrixtopncontrolgrantedsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlStartTime")
    {
        almatrixtopncontrolstarttime = value;
        almatrixtopncontrolstarttime.value_namespace = name_space;
        almatrixtopncontrolstarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlOwner")
    {
        almatrixtopncontrolowner = value;
        almatrixtopncontrolowner.value_namespace = name_space;
        almatrixtopncontrolowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNControlStatus")
    {
        almatrixtopncontrolstatus = value;
        almatrixtopncontrolstatus.value_namespace = name_space;
        almatrixtopncontrolstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alMatrixTopNControlIndex")
    {
        almatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlMatrixIndex")
    {
        almatrixtopncontrolmatrixindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlRateBase")
    {
        almatrixtopncontrolratebase.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlTimeRemaining")
    {
        almatrixtopncontroltimeremaining.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlGeneratedReports")
    {
        almatrixtopncontrolgeneratedreports.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlDuration")
    {
        almatrixtopncontrolduration.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlRequestedSize")
    {
        almatrixtopncontrolrequestedsize.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlGrantedSize")
    {
        almatrixtopncontrolgrantedsize.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlStartTime")
    {
        almatrixtopncontrolstarttime.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlOwner")
    {
        almatrixtopncontrolowner.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNControlStatus")
    {
        almatrixtopncontrolstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNControlIndex" || name == "alMatrixTopNControlMatrixIndex" || name == "alMatrixTopNControlRateBase" || name == "alMatrixTopNControlTimeRemaining" || name == "alMatrixTopNControlGeneratedReports" || name == "alMatrixTopNControlDuration" || name == "alMatrixTopNControlRequestedSize" || name == "alMatrixTopNControlGrantedSize" || name == "alMatrixTopNControlStartTime" || name == "alMatrixTopNControlOwner" || name == "alMatrixTopNControlStatus")
        return true;
    return false;
}

RMON2MIB::AlMatrixTopNTable::AlMatrixTopNTable()
    :
    almatrixtopnentry(this, {"almatrixtopncontrolindex", "almatrixtopnindex"})
{

    yang_name = "alMatrixTopNTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixTopNTable::~AlMatrixTopNTable()
{
}

bool RMON2MIB::AlMatrixTopNTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<almatrixtopnentry.len(); index++)
    {
        if(almatrixtopnentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::AlMatrixTopNTable::has_operation() const
{
    for (std::size_t index=0; index<almatrixtopnentry.len(); index++)
    {
        if(almatrixtopnentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::AlMatrixTopNTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixTopNTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixTopNTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixTopNTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "alMatrixTopNEntry")
    {
        auto c = std::make_shared<RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry>();
        c->parent = this;
        almatrixtopnentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixTopNTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : almatrixtopnentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::AlMatrixTopNTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::AlMatrixTopNTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::AlMatrixTopNTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNEntry")
        return true;
    return false;
}

RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::AlMatrixTopNEntry()
    :
    almatrixtopncontrolindex{YType::str, "alMatrixTopNControlIndex"},
    almatrixtopnindex{YType::int32, "alMatrixTopNIndex"},
    almatrixtopnprotocoldirlocalindex{YType::int32, "alMatrixTopNProtocolDirLocalIndex"},
    almatrixtopnsourceaddress{YType::str, "alMatrixTopNSourceAddress"},
    almatrixtopndestaddress{YType::str, "alMatrixTopNDestAddress"},
    almatrixtopnappprotocoldirlocalindex{YType::int32, "alMatrixTopNAppProtocolDirLocalIndex"},
    almatrixtopnpktrate{YType::uint32, "alMatrixTopNPktRate"},
    almatrixtopnreversepktrate{YType::uint32, "alMatrixTopNReversePktRate"},
    almatrixtopnoctetrate{YType::uint32, "alMatrixTopNOctetRate"},
    almatrixtopnreverseoctetrate{YType::uint32, "alMatrixTopNReverseOctetRate"}
{

    yang_name = "alMatrixTopNEntry"; yang_parent_name = "alMatrixTopNTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::~AlMatrixTopNEntry()
{
}

bool RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::has_data() const
{
    if (is_presence_container) return true;
    return almatrixtopncontrolindex.is_set
	|| almatrixtopnindex.is_set
	|| almatrixtopnprotocoldirlocalindex.is_set
	|| almatrixtopnsourceaddress.is_set
	|| almatrixtopndestaddress.is_set
	|| almatrixtopnappprotocoldirlocalindex.is_set
	|| almatrixtopnpktrate.is_set
	|| almatrixtopnreversepktrate.is_set
	|| almatrixtopnoctetrate.is_set
	|| almatrixtopnreverseoctetrate.is_set;
}

bool RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(almatrixtopncontrolindex.yfilter)
	|| ydk::is_set(almatrixtopnindex.yfilter)
	|| ydk::is_set(almatrixtopnprotocoldirlocalindex.yfilter)
	|| ydk::is_set(almatrixtopnsourceaddress.yfilter)
	|| ydk::is_set(almatrixtopndestaddress.yfilter)
	|| ydk::is_set(almatrixtopnappprotocoldirlocalindex.yfilter)
	|| ydk::is_set(almatrixtopnpktrate.yfilter)
	|| ydk::is_set(almatrixtopnreversepktrate.yfilter)
	|| ydk::is_set(almatrixtopnoctetrate.yfilter)
	|| ydk::is_set(almatrixtopnreverseoctetrate.yfilter);
}

std::string RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/alMatrixTopNTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alMatrixTopNEntry";
    ADD_KEY_TOKEN(almatrixtopncontrolindex, "alMatrixTopNControlIndex");
    ADD_KEY_TOKEN(almatrixtopnindex, "alMatrixTopNIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (almatrixtopncontrolindex.is_set || is_set(almatrixtopncontrolindex.yfilter)) leaf_name_data.push_back(almatrixtopncontrolindex.get_name_leafdata());
    if (almatrixtopnindex.is_set || is_set(almatrixtopnindex.yfilter)) leaf_name_data.push_back(almatrixtopnindex.get_name_leafdata());
    if (almatrixtopnprotocoldirlocalindex.is_set || is_set(almatrixtopnprotocoldirlocalindex.yfilter)) leaf_name_data.push_back(almatrixtopnprotocoldirlocalindex.get_name_leafdata());
    if (almatrixtopnsourceaddress.is_set || is_set(almatrixtopnsourceaddress.yfilter)) leaf_name_data.push_back(almatrixtopnsourceaddress.get_name_leafdata());
    if (almatrixtopndestaddress.is_set || is_set(almatrixtopndestaddress.yfilter)) leaf_name_data.push_back(almatrixtopndestaddress.get_name_leafdata());
    if (almatrixtopnappprotocoldirlocalindex.is_set || is_set(almatrixtopnappprotocoldirlocalindex.yfilter)) leaf_name_data.push_back(almatrixtopnappprotocoldirlocalindex.get_name_leafdata());
    if (almatrixtopnpktrate.is_set || is_set(almatrixtopnpktrate.yfilter)) leaf_name_data.push_back(almatrixtopnpktrate.get_name_leafdata());
    if (almatrixtopnreversepktrate.is_set || is_set(almatrixtopnreversepktrate.yfilter)) leaf_name_data.push_back(almatrixtopnreversepktrate.get_name_leafdata());
    if (almatrixtopnoctetrate.is_set || is_set(almatrixtopnoctetrate.yfilter)) leaf_name_data.push_back(almatrixtopnoctetrate.get_name_leafdata());
    if (almatrixtopnreverseoctetrate.is_set || is_set(almatrixtopnreverseoctetrate.yfilter)) leaf_name_data.push_back(almatrixtopnreverseoctetrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "alMatrixTopNProtocolDirLocalIndex")
    {
        almatrixtopnprotocoldirlocalindex = value;
        almatrixtopnprotocoldirlocalindex.value_namespace = name_space;
        almatrixtopnprotocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNSourceAddress")
    {
        almatrixtopnsourceaddress = value;
        almatrixtopnsourceaddress.value_namespace = name_space;
        almatrixtopnsourceaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNDestAddress")
    {
        almatrixtopndestaddress = value;
        almatrixtopndestaddress.value_namespace = name_space;
        almatrixtopndestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNAppProtocolDirLocalIndex")
    {
        almatrixtopnappprotocoldirlocalindex = value;
        almatrixtopnappprotocoldirlocalindex.value_namespace = name_space;
        almatrixtopnappprotocoldirlocalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNPktRate")
    {
        almatrixtopnpktrate = value;
        almatrixtopnpktrate.value_namespace = name_space;
        almatrixtopnpktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNReversePktRate")
    {
        almatrixtopnreversepktrate = value;
        almatrixtopnreversepktrate.value_namespace = name_space;
        almatrixtopnreversepktrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNOctetRate")
    {
        almatrixtopnoctetrate = value;
        almatrixtopnoctetrate.value_namespace = name_space;
        almatrixtopnoctetrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alMatrixTopNReverseOctetRate")
    {
        almatrixtopnreverseoctetrate = value;
        almatrixtopnreverseoctetrate.value_namespace = name_space;
        almatrixtopnreverseoctetrate.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alMatrixTopNControlIndex")
    {
        almatrixtopncontrolindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNIndex")
    {
        almatrixtopnindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNProtocolDirLocalIndex")
    {
        almatrixtopnprotocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNSourceAddress")
    {
        almatrixtopnsourceaddress.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNDestAddress")
    {
        almatrixtopndestaddress.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNAppProtocolDirLocalIndex")
    {
        almatrixtopnappprotocoldirlocalindex.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNPktRate")
    {
        almatrixtopnpktrate.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNReversePktRate")
    {
        almatrixtopnreversepktrate.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNOctetRate")
    {
        almatrixtopnoctetrate.yfilter = yfilter;
    }
    if(value_path == "alMatrixTopNReverseOctetRate")
    {
        almatrixtopnreverseoctetrate.yfilter = yfilter;
    }
}

bool RMON2MIB::AlMatrixTopNTable::AlMatrixTopNEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alMatrixTopNControlIndex" || name == "alMatrixTopNIndex" || name == "alMatrixTopNProtocolDirLocalIndex" || name == "alMatrixTopNSourceAddress" || name == "alMatrixTopNDestAddress" || name == "alMatrixTopNAppProtocolDirLocalIndex" || name == "alMatrixTopNPktRate" || name == "alMatrixTopNReversePktRate" || name == "alMatrixTopNOctetRate" || name == "alMatrixTopNReverseOctetRate")
        return true;
    return false;
}

RMON2MIB::UsrHistoryControlTable::UsrHistoryControlTable()
    :
    usrhistorycontrolentry(this, {"usrhistorycontrolindex"})
{

    yang_name = "usrHistoryControlTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::UsrHistoryControlTable::~UsrHistoryControlTable()
{
}

bool RMON2MIB::UsrHistoryControlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usrhistorycontrolentry.len(); index++)
    {
        if(usrhistorycontrolentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::UsrHistoryControlTable::has_operation() const
{
    for (std::size_t index=0; index<usrhistorycontrolentry.len(); index++)
    {
        if(usrhistorycontrolentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::UsrHistoryControlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::UsrHistoryControlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryControlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::UsrHistoryControlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::UsrHistoryControlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usrHistoryControlEntry")
    {
        auto c = std::make_shared<RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry>();
        c->parent = this;
        usrhistorycontrolentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::UsrHistoryControlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usrhistorycontrolentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::UsrHistoryControlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::UsrHistoryControlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::UsrHistoryControlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlEntry")
        return true;
    return false;
}

RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::UsrHistoryControlEntry()
    :
    usrhistorycontrolindex{YType::int32, "usrHistoryControlIndex"},
    usrhistorycontrolobjects{YType::int32, "usrHistoryControlObjects"},
    usrhistorycontrolbucketsrequested{YType::int32, "usrHistoryControlBucketsRequested"},
    usrhistorycontrolbucketsgranted{YType::int32, "usrHistoryControlBucketsGranted"},
    usrhistorycontrolinterval{YType::int32, "usrHistoryControlInterval"},
    usrhistorycontrolowner{YType::str, "usrHistoryControlOwner"},
    usrhistorycontrolstatus{YType::enumeration, "usrHistoryControlStatus"}
{

    yang_name = "usrHistoryControlEntry"; yang_parent_name = "usrHistoryControlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::~UsrHistoryControlEntry()
{
}

bool RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::has_data() const
{
    if (is_presence_container) return true;
    return usrhistorycontrolindex.is_set
	|| usrhistorycontrolobjects.is_set
	|| usrhistorycontrolbucketsrequested.is_set
	|| usrhistorycontrolbucketsgranted.is_set
	|| usrhistorycontrolinterval.is_set
	|| usrhistorycontrolowner.is_set
	|| usrhistorycontrolstatus.is_set;
}

bool RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usrhistorycontrolindex.yfilter)
	|| ydk::is_set(usrhistorycontrolobjects.yfilter)
	|| ydk::is_set(usrhistorycontrolbucketsrequested.yfilter)
	|| ydk::is_set(usrhistorycontrolbucketsgranted.yfilter)
	|| ydk::is_set(usrhistorycontrolinterval.yfilter)
	|| ydk::is_set(usrhistorycontrolowner.yfilter)
	|| ydk::is_set(usrhistorycontrolstatus.yfilter);
}

std::string RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/usrHistoryControlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryControlEntry";
    ADD_KEY_TOKEN(usrhistorycontrolindex, "usrHistoryControlIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usrhistorycontrolindex.is_set || is_set(usrhistorycontrolindex.yfilter)) leaf_name_data.push_back(usrhistorycontrolindex.get_name_leafdata());
    if (usrhistorycontrolobjects.is_set || is_set(usrhistorycontrolobjects.yfilter)) leaf_name_data.push_back(usrhistorycontrolobjects.get_name_leafdata());
    if (usrhistorycontrolbucketsrequested.is_set || is_set(usrhistorycontrolbucketsrequested.yfilter)) leaf_name_data.push_back(usrhistorycontrolbucketsrequested.get_name_leafdata());
    if (usrhistorycontrolbucketsgranted.is_set || is_set(usrhistorycontrolbucketsgranted.yfilter)) leaf_name_data.push_back(usrhistorycontrolbucketsgranted.get_name_leafdata());
    if (usrhistorycontrolinterval.is_set || is_set(usrhistorycontrolinterval.yfilter)) leaf_name_data.push_back(usrhistorycontrolinterval.get_name_leafdata());
    if (usrhistorycontrolowner.is_set || is_set(usrhistorycontrolowner.yfilter)) leaf_name_data.push_back(usrhistorycontrolowner.get_name_leafdata());
    if (usrhistorycontrolstatus.is_set || is_set(usrhistorycontrolstatus.yfilter)) leaf_name_data.push_back(usrhistorycontrolstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex = value;
        usrhistorycontrolindex.value_namespace = name_space;
        usrhistorycontrolindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlObjects")
    {
        usrhistorycontrolobjects = value;
        usrhistorycontrolobjects.value_namespace = name_space;
        usrhistorycontrolobjects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlBucketsRequested")
    {
        usrhistorycontrolbucketsrequested = value;
        usrhistorycontrolbucketsrequested.value_namespace = name_space;
        usrhistorycontrolbucketsrequested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlBucketsGranted")
    {
        usrhistorycontrolbucketsgranted = value;
        usrhistorycontrolbucketsgranted.value_namespace = name_space;
        usrhistorycontrolbucketsgranted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryControlInterval")
    {
        usrhistorycontrolinterval = value;
        usrhistorycontrolinterval.value_namespace = name_space;
        usrhistorycontrolinterval.value_namespace_prefix = name_space_prefix;
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

void RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlObjects")
    {
        usrhistorycontrolobjects.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlBucketsRequested")
    {
        usrhistorycontrolbucketsrequested.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlBucketsGranted")
    {
        usrhistorycontrolbucketsgranted.yfilter = yfilter;
    }
    if(value_path == "usrHistoryControlInterval")
    {
        usrhistorycontrolinterval.yfilter = yfilter;
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

bool RMON2MIB::UsrHistoryControlTable::UsrHistoryControlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlIndex" || name == "usrHistoryControlObjects" || name == "usrHistoryControlBucketsRequested" || name == "usrHistoryControlBucketsGranted" || name == "usrHistoryControlInterval" || name == "usrHistoryControlOwner" || name == "usrHistoryControlStatus")
        return true;
    return false;
}

RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectTable()
    :
    usrhistoryobjectentry(this, {"usrhistorycontrolindex", "usrhistoryobjectindex"})
{

    yang_name = "usrHistoryObjectTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::UsrHistoryObjectTable::~UsrHistoryObjectTable()
{
}

bool RMON2MIB::UsrHistoryObjectTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usrhistoryobjectentry.len(); index++)
    {
        if(usrhistoryobjectentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::UsrHistoryObjectTable::has_operation() const
{
    for (std::size_t index=0; index<usrhistoryobjectentry.len(); index++)
    {
        if(usrhistoryobjectentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::UsrHistoryObjectTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::UsrHistoryObjectTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryObjectTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::UsrHistoryObjectTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::UsrHistoryObjectTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usrHistoryObjectEntry")
    {
        auto c = std::make_shared<RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry>();
        c->parent = this;
        usrhistoryobjectentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::UsrHistoryObjectTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usrhistoryobjectentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::UsrHistoryObjectTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::UsrHistoryObjectTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::UsrHistoryObjectTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryObjectEntry")
        return true;
    return false;
}

RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::UsrHistoryObjectEntry()
    :
    usrhistorycontrolindex{YType::str, "usrHistoryControlIndex"},
    usrhistoryobjectindex{YType::int32, "usrHistoryObjectIndex"},
    usrhistoryobjectvariable{YType::str, "usrHistoryObjectVariable"},
    usrhistoryobjectsampletype{YType::enumeration, "usrHistoryObjectSampleType"}
{

    yang_name = "usrHistoryObjectEntry"; yang_parent_name = "usrHistoryObjectTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::~UsrHistoryObjectEntry()
{
}

bool RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::has_data() const
{
    if (is_presence_container) return true;
    return usrhistorycontrolindex.is_set
	|| usrhistoryobjectindex.is_set
	|| usrhistoryobjectvariable.is_set
	|| usrhistoryobjectsampletype.is_set;
}

bool RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usrhistorycontrolindex.yfilter)
	|| ydk::is_set(usrhistoryobjectindex.yfilter)
	|| ydk::is_set(usrhistoryobjectvariable.yfilter)
	|| ydk::is_set(usrhistoryobjectsampletype.yfilter);
}

std::string RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/usrHistoryObjectTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryObjectEntry";
    ADD_KEY_TOKEN(usrhistorycontrolindex, "usrHistoryControlIndex");
    ADD_KEY_TOKEN(usrhistoryobjectindex, "usrHistoryObjectIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usrhistorycontrolindex.is_set || is_set(usrhistorycontrolindex.yfilter)) leaf_name_data.push_back(usrhistorycontrolindex.get_name_leafdata());
    if (usrhistoryobjectindex.is_set || is_set(usrhistoryobjectindex.yfilter)) leaf_name_data.push_back(usrhistoryobjectindex.get_name_leafdata());
    if (usrhistoryobjectvariable.is_set || is_set(usrhistoryobjectvariable.yfilter)) leaf_name_data.push_back(usrhistoryobjectvariable.get_name_leafdata());
    if (usrhistoryobjectsampletype.is_set || is_set(usrhistoryobjectsampletype.yfilter)) leaf_name_data.push_back(usrhistoryobjectsampletype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "usrHistoryObjectVariable")
    {
        usrhistoryobjectvariable = value;
        usrhistoryobjectvariable.value_namespace = name_space;
        usrhistoryobjectvariable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryObjectSampleType")
    {
        usrhistoryobjectsampletype = value;
        usrhistoryobjectsampletype.value_namespace = name_space;
        usrhistoryobjectsampletype.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usrHistoryControlIndex")
    {
        usrhistorycontrolindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryObjectIndex")
    {
        usrhistoryobjectindex.yfilter = yfilter;
    }
    if(value_path == "usrHistoryObjectVariable")
    {
        usrhistoryobjectvariable.yfilter = yfilter;
    }
    if(value_path == "usrHistoryObjectSampleType")
    {
        usrhistoryobjectsampletype.yfilter = yfilter;
    }
}

bool RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlIndex" || name == "usrHistoryObjectIndex" || name == "usrHistoryObjectVariable" || name == "usrHistoryObjectSampleType")
        return true;
    return false;
}

RMON2MIB::UsrHistoryTable::UsrHistoryTable()
    :
    usrhistoryentry(this, {"usrhistorycontrolindex", "usrhistorysampleindex", "usrhistoryobjectindex"})
{

    yang_name = "usrHistoryTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::UsrHistoryTable::~UsrHistoryTable()
{
}

bool RMON2MIB::UsrHistoryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usrhistoryentry.len(); index++)
    {
        if(usrhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::UsrHistoryTable::has_operation() const
{
    for (std::size_t index=0; index<usrhistoryentry.len(); index++)
    {
        if(usrhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::UsrHistoryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::UsrHistoryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::UsrHistoryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::UsrHistoryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usrHistoryEntry")
    {
        auto c = std::make_shared<RMON2MIB::UsrHistoryTable::UsrHistoryEntry>();
        c->parent = this;
        usrhistoryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::UsrHistoryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : usrhistoryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::UsrHistoryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::UsrHistoryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::UsrHistoryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryEntry")
        return true;
    return false;
}

RMON2MIB::UsrHistoryTable::UsrHistoryEntry::UsrHistoryEntry()
    :
    usrhistorycontrolindex{YType::str, "usrHistoryControlIndex"},
    usrhistorysampleindex{YType::int32, "usrHistorySampleIndex"},
    usrhistoryobjectindex{YType::str, "usrHistoryObjectIndex"},
    usrhistoryintervalstart{YType::uint32, "usrHistoryIntervalStart"},
    usrhistoryintervalend{YType::uint32, "usrHistoryIntervalEnd"},
    usrhistoryabsvalue{YType::uint32, "usrHistoryAbsValue"},
    usrhistoryvalstatus{YType::enumeration, "usrHistoryValStatus"}
{

    yang_name = "usrHistoryEntry"; yang_parent_name = "usrHistoryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::UsrHistoryTable::UsrHistoryEntry::~UsrHistoryEntry()
{
}

bool RMON2MIB::UsrHistoryTable::UsrHistoryEntry::has_data() const
{
    if (is_presence_container) return true;
    return usrhistorycontrolindex.is_set
	|| usrhistorysampleindex.is_set
	|| usrhistoryobjectindex.is_set
	|| usrhistoryintervalstart.is_set
	|| usrhistoryintervalend.is_set
	|| usrhistoryabsvalue.is_set
	|| usrhistoryvalstatus.is_set;
}

bool RMON2MIB::UsrHistoryTable::UsrHistoryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usrhistorycontrolindex.yfilter)
	|| ydk::is_set(usrhistorysampleindex.yfilter)
	|| ydk::is_set(usrhistoryobjectindex.yfilter)
	|| ydk::is_set(usrhistoryintervalstart.yfilter)
	|| ydk::is_set(usrhistoryintervalend.yfilter)
	|| ydk::is_set(usrhistoryabsvalue.yfilter)
	|| ydk::is_set(usrhistoryvalstatus.yfilter);
}

std::string RMON2MIB::UsrHistoryTable::UsrHistoryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/usrHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::UsrHistoryTable::UsrHistoryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usrHistoryEntry";
    ADD_KEY_TOKEN(usrhistorycontrolindex, "usrHistoryControlIndex");
    ADD_KEY_TOKEN(usrhistorysampleindex, "usrHistorySampleIndex");
    ADD_KEY_TOKEN(usrhistoryobjectindex, "usrHistoryObjectIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::UsrHistoryTable::UsrHistoryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usrhistorycontrolindex.is_set || is_set(usrhistorycontrolindex.yfilter)) leaf_name_data.push_back(usrhistorycontrolindex.get_name_leafdata());
    if (usrhistorysampleindex.is_set || is_set(usrhistorysampleindex.yfilter)) leaf_name_data.push_back(usrhistorysampleindex.get_name_leafdata());
    if (usrhistoryobjectindex.is_set || is_set(usrhistoryobjectindex.yfilter)) leaf_name_data.push_back(usrhistoryobjectindex.get_name_leafdata());
    if (usrhistoryintervalstart.is_set || is_set(usrhistoryintervalstart.yfilter)) leaf_name_data.push_back(usrhistoryintervalstart.get_name_leafdata());
    if (usrhistoryintervalend.is_set || is_set(usrhistoryintervalend.yfilter)) leaf_name_data.push_back(usrhistoryintervalend.get_name_leafdata());
    if (usrhistoryabsvalue.is_set || is_set(usrhistoryabsvalue.yfilter)) leaf_name_data.push_back(usrhistoryabsvalue.get_name_leafdata());
    if (usrhistoryvalstatus.is_set || is_set(usrhistoryvalstatus.yfilter)) leaf_name_data.push_back(usrhistoryvalstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::UsrHistoryTable::UsrHistoryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::UsrHistoryTable::UsrHistoryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::UsrHistoryTable::UsrHistoryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "usrHistoryIntervalStart")
    {
        usrhistoryintervalstart = value;
        usrhistoryintervalstart.value_namespace = name_space;
        usrhistoryintervalstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryIntervalEnd")
    {
        usrhistoryintervalend = value;
        usrhistoryintervalend.value_namespace = name_space;
        usrhistoryintervalend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryAbsValue")
    {
        usrhistoryabsvalue = value;
        usrhistoryabsvalue.value_namespace = name_space;
        usrhistoryabsvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usrHistoryValStatus")
    {
        usrhistoryvalstatus = value;
        usrhistoryvalstatus.value_namespace = name_space;
        usrhistoryvalstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::UsrHistoryTable::UsrHistoryEntry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "usrHistoryIntervalStart")
    {
        usrhistoryintervalstart.yfilter = yfilter;
    }
    if(value_path == "usrHistoryIntervalEnd")
    {
        usrhistoryintervalend.yfilter = yfilter;
    }
    if(value_path == "usrHistoryAbsValue")
    {
        usrhistoryabsvalue.yfilter = yfilter;
    }
    if(value_path == "usrHistoryValStatus")
    {
        usrhistoryvalstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::UsrHistoryTable::UsrHistoryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usrHistoryControlIndex" || name == "usrHistorySampleIndex" || name == "usrHistoryObjectIndex" || name == "usrHistoryIntervalStart" || name == "usrHistoryIntervalEnd" || name == "usrHistoryAbsValue" || name == "usrHistoryValStatus")
        return true;
    return false;
}

RMON2MIB::SerialConfigTable::SerialConfigTable()
    :
    serialconfigentry(this, {"ifindex"})
{

    yang_name = "serialConfigTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::SerialConfigTable::~SerialConfigTable()
{
}

bool RMON2MIB::SerialConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serialconfigentry.len(); index++)
    {
        if(serialconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::SerialConfigTable::has_operation() const
{
    for (std::size_t index=0; index<serialconfigentry.len(); index++)
    {
        if(serialconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::SerialConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::SerialConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::SerialConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::SerialConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serialConfigEntry")
    {
        auto c = std::make_shared<RMON2MIB::SerialConfigTable::SerialConfigEntry>();
        c->parent = this;
        serialconfigentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::SerialConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serialconfigentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::SerialConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::SerialConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::SerialConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serialConfigEntry")
        return true;
    return false;
}

RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialConfigEntry()
    :
    ifindex{YType::str, "ifIndex"},
    serialmode{YType::enumeration, "serialMode"},
    serialprotocol{YType::enumeration, "serialProtocol"},
    serialtimeout{YType::int32, "serialTimeout"},
    serialmodeminitstring{YType::str, "serialModemInitString"},
    serialmodemhangupstring{YType::str, "serialModemHangUpString"},
    serialmodemconnectresp{YType::str, "serialModemConnectResp"},
    serialmodemnoconnectresp{YType::str, "serialModemNoConnectResp"},
    serialdialouttimeout{YType::int32, "serialDialoutTimeout"},
    serialstatus{YType::enumeration, "serialStatus"}
{

    yang_name = "serialConfigEntry"; yang_parent_name = "serialConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::SerialConfigTable::SerialConfigEntry::~SerialConfigEntry()
{
}

bool RMON2MIB::SerialConfigTable::SerialConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| serialmode.is_set
	|| serialprotocol.is_set
	|| serialtimeout.is_set
	|| serialmodeminitstring.is_set
	|| serialmodemhangupstring.is_set
	|| serialmodemconnectresp.is_set
	|| serialmodemnoconnectresp.is_set
	|| serialdialouttimeout.is_set
	|| serialstatus.is_set;
}

bool RMON2MIB::SerialConfigTable::SerialConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(serialmode.yfilter)
	|| ydk::is_set(serialprotocol.yfilter)
	|| ydk::is_set(serialtimeout.yfilter)
	|| ydk::is_set(serialmodeminitstring.yfilter)
	|| ydk::is_set(serialmodemhangupstring.yfilter)
	|| ydk::is_set(serialmodemconnectresp.yfilter)
	|| ydk::is_set(serialmodemnoconnectresp.yfilter)
	|| ydk::is_set(serialdialouttimeout.yfilter)
	|| ydk::is_set(serialstatus.yfilter);
}

std::string RMON2MIB::SerialConfigTable::SerialConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/serialConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::SerialConfigTable::SerialConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConfigEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::SerialConfigTable::SerialConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (serialmode.is_set || is_set(serialmode.yfilter)) leaf_name_data.push_back(serialmode.get_name_leafdata());
    if (serialprotocol.is_set || is_set(serialprotocol.yfilter)) leaf_name_data.push_back(serialprotocol.get_name_leafdata());
    if (serialtimeout.is_set || is_set(serialtimeout.yfilter)) leaf_name_data.push_back(serialtimeout.get_name_leafdata());
    if (serialmodeminitstring.is_set || is_set(serialmodeminitstring.yfilter)) leaf_name_data.push_back(serialmodeminitstring.get_name_leafdata());
    if (serialmodemhangupstring.is_set || is_set(serialmodemhangupstring.yfilter)) leaf_name_data.push_back(serialmodemhangupstring.get_name_leafdata());
    if (serialmodemconnectresp.is_set || is_set(serialmodemconnectresp.yfilter)) leaf_name_data.push_back(serialmodemconnectresp.get_name_leafdata());
    if (serialmodemnoconnectresp.is_set || is_set(serialmodemnoconnectresp.yfilter)) leaf_name_data.push_back(serialmodemnoconnectresp.get_name_leafdata());
    if (serialdialouttimeout.is_set || is_set(serialdialouttimeout.yfilter)) leaf_name_data.push_back(serialdialouttimeout.get_name_leafdata());
    if (serialstatus.is_set || is_set(serialstatus.yfilter)) leaf_name_data.push_back(serialstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::SerialConfigTable::SerialConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::SerialConfigTable::SerialConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::SerialConfigTable::SerialConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialMode")
    {
        serialmode = value;
        serialmode.value_namespace = name_space;
        serialmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialProtocol")
    {
        serialprotocol = value;
        serialprotocol.value_namespace = name_space;
        serialprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialTimeout")
    {
        serialtimeout = value;
        serialtimeout.value_namespace = name_space;
        serialtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemInitString")
    {
        serialmodeminitstring = value;
        serialmodeminitstring.value_namespace = name_space;
        serialmodeminitstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemHangUpString")
    {
        serialmodemhangupstring = value;
        serialmodemhangupstring.value_namespace = name_space;
        serialmodemhangupstring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemConnectResp")
    {
        serialmodemconnectresp = value;
        serialmodemconnectresp.value_namespace = name_space;
        serialmodemconnectresp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialModemNoConnectResp")
    {
        serialmodemnoconnectresp = value;
        serialmodemnoconnectresp.value_namespace = name_space;
        serialmodemnoconnectresp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialDialoutTimeout")
    {
        serialdialouttimeout = value;
        serialdialouttimeout.value_namespace = name_space;
        serialdialouttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialStatus")
    {
        serialstatus = value;
        serialstatus.value_namespace = name_space;
        serialstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::SerialConfigTable::SerialConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "serialMode")
    {
        serialmode.yfilter = yfilter;
    }
    if(value_path == "serialProtocol")
    {
        serialprotocol.yfilter = yfilter;
    }
    if(value_path == "serialTimeout")
    {
        serialtimeout.yfilter = yfilter;
    }
    if(value_path == "serialModemInitString")
    {
        serialmodeminitstring.yfilter = yfilter;
    }
    if(value_path == "serialModemHangUpString")
    {
        serialmodemhangupstring.yfilter = yfilter;
    }
    if(value_path == "serialModemConnectResp")
    {
        serialmodemconnectresp.yfilter = yfilter;
    }
    if(value_path == "serialModemNoConnectResp")
    {
        serialmodemnoconnectresp.yfilter = yfilter;
    }
    if(value_path == "serialDialoutTimeout")
    {
        serialdialouttimeout.yfilter = yfilter;
    }
    if(value_path == "serialStatus")
    {
        serialstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::SerialConfigTable::SerialConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "serialMode" || name == "serialProtocol" || name == "serialTimeout" || name == "serialModemInitString" || name == "serialModemHangUpString" || name == "serialModemConnectResp" || name == "serialModemNoConnectResp" || name == "serialDialoutTimeout" || name == "serialStatus")
        return true;
    return false;
}

RMON2MIB::NetConfigTable::NetConfigTable()
    :
    netconfigentry(this, {"ifindex"})
{

    yang_name = "netConfigTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NetConfigTable::~NetConfigTable()
{
}

bool RMON2MIB::NetConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<netconfigentry.len(); index++)
    {
        if(netconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::NetConfigTable::has_operation() const
{
    for (std::size_t index=0; index<netconfigentry.len(); index++)
    {
        if(netconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::NetConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NetConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NetConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NetConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netConfigEntry")
    {
        auto c = std::make_shared<RMON2MIB::NetConfigTable::NetConfigEntry>();
        c->parent = this;
        netconfigentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NetConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : netconfigentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::NetConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::NetConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::NetConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netConfigEntry")
        return true;
    return false;
}

RMON2MIB::NetConfigTable::NetConfigEntry::NetConfigEntry()
    :
    ifindex{YType::str, "ifIndex"},
    netconfigipaddress{YType::str, "netConfigIPAddress"},
    netconfigsubnetmask{YType::str, "netConfigSubnetMask"},
    netconfigstatus{YType::enumeration, "netConfigStatus"}
{

    yang_name = "netConfigEntry"; yang_parent_name = "netConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::NetConfigTable::NetConfigEntry::~NetConfigEntry()
{
}

bool RMON2MIB::NetConfigTable::NetConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| netconfigipaddress.is_set
	|| netconfigsubnetmask.is_set
	|| netconfigstatus.is_set;
}

bool RMON2MIB::NetConfigTable::NetConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(netconfigipaddress.yfilter)
	|| ydk::is_set(netconfigsubnetmask.yfilter)
	|| ydk::is_set(netconfigstatus.yfilter);
}

std::string RMON2MIB::NetConfigTable::NetConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/netConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::NetConfigTable::NetConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netConfigEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::NetConfigTable::NetConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (netconfigipaddress.is_set || is_set(netconfigipaddress.yfilter)) leaf_name_data.push_back(netconfigipaddress.get_name_leafdata());
    if (netconfigsubnetmask.is_set || is_set(netconfigsubnetmask.yfilter)) leaf_name_data.push_back(netconfigsubnetmask.get_name_leafdata());
    if (netconfigstatus.is_set || is_set(netconfigstatus.yfilter)) leaf_name_data.push_back(netconfigstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::NetConfigTable::NetConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::NetConfigTable::NetConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::NetConfigTable::NetConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "netConfigSubnetMask")
    {
        netconfigsubnetmask = value;
        netconfigsubnetmask.value_namespace = name_space;
        netconfigsubnetmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netConfigStatus")
    {
        netconfigstatus = value;
        netconfigstatus.value_namespace = name_space;
        netconfigstatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::NetConfigTable::NetConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "netConfigIPAddress")
    {
        netconfigipaddress.yfilter = yfilter;
    }
    if(value_path == "netConfigSubnetMask")
    {
        netconfigsubnetmask.yfilter = yfilter;
    }
    if(value_path == "netConfigStatus")
    {
        netconfigstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::NetConfigTable::NetConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "netConfigIPAddress" || name == "netConfigSubnetMask" || name == "netConfigStatus")
        return true;
    return false;
}

RMON2MIB::TrapDestTable::TrapDestTable()
    :
    trapdestentry(this, {"trapdestindex"})
{

    yang_name = "trapDestTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::TrapDestTable::~TrapDestTable()
{
}

bool RMON2MIB::TrapDestTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trapdestentry.len(); index++)
    {
        if(trapdestentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::TrapDestTable::has_operation() const
{
    for (std::size_t index=0; index<trapdestentry.len(); index++)
    {
        if(trapdestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::TrapDestTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::TrapDestTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trapDestTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::TrapDestTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::TrapDestTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trapDestEntry")
    {
        auto c = std::make_shared<RMON2MIB::TrapDestTable::TrapDestEntry>();
        c->parent = this;
        trapdestentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::TrapDestTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : trapdestentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::TrapDestTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::TrapDestTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::TrapDestTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapDestEntry")
        return true;
    return false;
}

RMON2MIB::TrapDestTable::TrapDestEntry::TrapDestEntry()
    :
    trapdestindex{YType::int32, "trapDestIndex"},
    trapdestcommunity{YType::str, "trapDestCommunity"},
    trapdestprotocol{YType::enumeration, "trapDestProtocol"},
    trapdestaddress{YType::str, "trapDestAddress"},
    trapdestowner{YType::str, "trapDestOwner"},
    trapdeststatus{YType::enumeration, "trapDestStatus"}
{

    yang_name = "trapDestEntry"; yang_parent_name = "trapDestTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::TrapDestTable::TrapDestEntry::~TrapDestEntry()
{
}

bool RMON2MIB::TrapDestTable::TrapDestEntry::has_data() const
{
    if (is_presence_container) return true;
    return trapdestindex.is_set
	|| trapdestcommunity.is_set
	|| trapdestprotocol.is_set
	|| trapdestaddress.is_set
	|| trapdestowner.is_set
	|| trapdeststatus.is_set;
}

bool RMON2MIB::TrapDestTable::TrapDestEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trapdestindex.yfilter)
	|| ydk::is_set(trapdestcommunity.yfilter)
	|| ydk::is_set(trapdestprotocol.yfilter)
	|| ydk::is_set(trapdestaddress.yfilter)
	|| ydk::is_set(trapdestowner.yfilter)
	|| ydk::is_set(trapdeststatus.yfilter);
}

std::string RMON2MIB::TrapDestTable::TrapDestEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/trapDestTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::TrapDestTable::TrapDestEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trapDestEntry";
    ADD_KEY_TOKEN(trapdestindex, "trapDestIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::TrapDestTable::TrapDestEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trapdestindex.is_set || is_set(trapdestindex.yfilter)) leaf_name_data.push_back(trapdestindex.get_name_leafdata());
    if (trapdestcommunity.is_set || is_set(trapdestcommunity.yfilter)) leaf_name_data.push_back(trapdestcommunity.get_name_leafdata());
    if (trapdestprotocol.is_set || is_set(trapdestprotocol.yfilter)) leaf_name_data.push_back(trapdestprotocol.get_name_leafdata());
    if (trapdestaddress.is_set || is_set(trapdestaddress.yfilter)) leaf_name_data.push_back(trapdestaddress.get_name_leafdata());
    if (trapdestowner.is_set || is_set(trapdestowner.yfilter)) leaf_name_data.push_back(trapdestowner.get_name_leafdata());
    if (trapdeststatus.is_set || is_set(trapdeststatus.yfilter)) leaf_name_data.push_back(trapdeststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::TrapDestTable::TrapDestEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::TrapDestTable::TrapDestEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::TrapDestTable::TrapDestEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trapDestIndex")
    {
        trapdestindex = value;
        trapdestindex.value_namespace = name_space;
        trapdestindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestCommunity")
    {
        trapdestcommunity = value;
        trapdestcommunity.value_namespace = name_space;
        trapdestcommunity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestProtocol")
    {
        trapdestprotocol = value;
        trapdestprotocol.value_namespace = name_space;
        trapdestprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestAddress")
    {
        trapdestaddress = value;
        trapdestaddress.value_namespace = name_space;
        trapdestaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestOwner")
    {
        trapdestowner = value;
        trapdestowner.value_namespace = name_space;
        trapdestowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trapDestStatus")
    {
        trapdeststatus = value;
        trapdeststatus.value_namespace = name_space;
        trapdeststatus.value_namespace_prefix = name_space_prefix;
    }
}

void RMON2MIB::TrapDestTable::TrapDestEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trapDestIndex")
    {
        trapdestindex.yfilter = yfilter;
    }
    if(value_path == "trapDestCommunity")
    {
        trapdestcommunity.yfilter = yfilter;
    }
    if(value_path == "trapDestProtocol")
    {
        trapdestprotocol.yfilter = yfilter;
    }
    if(value_path == "trapDestAddress")
    {
        trapdestaddress.yfilter = yfilter;
    }
    if(value_path == "trapDestOwner")
    {
        trapdestowner.yfilter = yfilter;
    }
    if(value_path == "trapDestStatus")
    {
        trapdeststatus.yfilter = yfilter;
    }
}

bool RMON2MIB::TrapDestTable::TrapDestEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trapDestIndex" || name == "trapDestCommunity" || name == "trapDestProtocol" || name == "trapDestAddress" || name == "trapDestOwner" || name == "trapDestStatus")
        return true;
    return false;
}

RMON2MIB::SerialConnectionTable::SerialConnectionTable()
    :
    serialconnectionentry(this, {"serialconnectindex"})
{

    yang_name = "serialConnectionTable"; yang_parent_name = "RMON2-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::SerialConnectionTable::~SerialConnectionTable()
{
}

bool RMON2MIB::SerialConnectionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<serialconnectionentry.len(); index++)
    {
        if(serialconnectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool RMON2MIB::SerialConnectionTable::has_operation() const
{
    for (std::size_t index=0; index<serialconnectionentry.len(); index++)
    {
        if(serialconnectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string RMON2MIB::SerialConnectionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::SerialConnectionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConnectionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::SerialConnectionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::SerialConnectionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serialConnectionEntry")
    {
        auto c = std::make_shared<RMON2MIB::SerialConnectionTable::SerialConnectionEntry>();
        c->parent = this;
        serialconnectionentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::SerialConnectionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : serialconnectionentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void RMON2MIB::SerialConnectionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void RMON2MIB::SerialConnectionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool RMON2MIB::SerialConnectionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serialConnectionEntry")
        return true;
    return false;
}

RMON2MIB::SerialConnectionTable::SerialConnectionEntry::SerialConnectionEntry()
    :
    serialconnectindex{YType::int32, "serialConnectIndex"},
    serialconnectdestipaddress{YType::str, "serialConnectDestIpAddress"},
    serialconnecttype{YType::enumeration, "serialConnectType"},
    serialconnectdialstring{YType::str, "serialConnectDialString"},
    serialconnectswitchconnectseq{YType::str, "serialConnectSwitchConnectSeq"},
    serialconnectswitchdisconnectseq{YType::str, "serialConnectSwitchDisconnectSeq"},
    serialconnectswitchresetseq{YType::str, "serialConnectSwitchResetSeq"},
    serialconnectowner{YType::str, "serialConnectOwner"},
    serialconnectstatus{YType::enumeration, "serialConnectStatus"}
{

    yang_name = "serialConnectionEntry"; yang_parent_name = "serialConnectionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

RMON2MIB::SerialConnectionTable::SerialConnectionEntry::~SerialConnectionEntry()
{
}

bool RMON2MIB::SerialConnectionTable::SerialConnectionEntry::has_data() const
{
    if (is_presence_container) return true;
    return serialconnectindex.is_set
	|| serialconnectdestipaddress.is_set
	|| serialconnecttype.is_set
	|| serialconnectdialstring.is_set
	|| serialconnectswitchconnectseq.is_set
	|| serialconnectswitchdisconnectseq.is_set
	|| serialconnectswitchresetseq.is_set
	|| serialconnectowner.is_set
	|| serialconnectstatus.is_set;
}

bool RMON2MIB::SerialConnectionTable::SerialConnectionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serialconnectindex.yfilter)
	|| ydk::is_set(serialconnectdestipaddress.yfilter)
	|| ydk::is_set(serialconnecttype.yfilter)
	|| ydk::is_set(serialconnectdialstring.yfilter)
	|| ydk::is_set(serialconnectswitchconnectseq.yfilter)
	|| ydk::is_set(serialconnectswitchdisconnectseq.yfilter)
	|| ydk::is_set(serialconnectswitchresetseq.yfilter)
	|| ydk::is_set(serialconnectowner.yfilter)
	|| ydk::is_set(serialconnectstatus.yfilter);
}

std::string RMON2MIB::SerialConnectionTable::SerialConnectionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RMON2-MIB:RMON2-MIB/serialConnectionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string RMON2MIB::SerialConnectionTable::SerialConnectionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serialConnectionEntry";
    ADD_KEY_TOKEN(serialconnectindex, "serialConnectIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > RMON2MIB::SerialConnectionTable::SerialConnectionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serialconnectindex.is_set || is_set(serialconnectindex.yfilter)) leaf_name_data.push_back(serialconnectindex.get_name_leafdata());
    if (serialconnectdestipaddress.is_set || is_set(serialconnectdestipaddress.yfilter)) leaf_name_data.push_back(serialconnectdestipaddress.get_name_leafdata());
    if (serialconnecttype.is_set || is_set(serialconnecttype.yfilter)) leaf_name_data.push_back(serialconnecttype.get_name_leafdata());
    if (serialconnectdialstring.is_set || is_set(serialconnectdialstring.yfilter)) leaf_name_data.push_back(serialconnectdialstring.get_name_leafdata());
    if (serialconnectswitchconnectseq.is_set || is_set(serialconnectswitchconnectseq.yfilter)) leaf_name_data.push_back(serialconnectswitchconnectseq.get_name_leafdata());
    if (serialconnectswitchdisconnectseq.is_set || is_set(serialconnectswitchdisconnectseq.yfilter)) leaf_name_data.push_back(serialconnectswitchdisconnectseq.get_name_leafdata());
    if (serialconnectswitchresetseq.is_set || is_set(serialconnectswitchresetseq.yfilter)) leaf_name_data.push_back(serialconnectswitchresetseq.get_name_leafdata());
    if (serialconnectowner.is_set || is_set(serialconnectowner.yfilter)) leaf_name_data.push_back(serialconnectowner.get_name_leafdata());
    if (serialconnectstatus.is_set || is_set(serialconnectstatus.yfilter)) leaf_name_data.push_back(serialconnectstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> RMON2MIB::SerialConnectionTable::SerialConnectionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> RMON2MIB::SerialConnectionTable::SerialConnectionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void RMON2MIB::SerialConnectionTable::SerialConnectionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "serialConnectType")
    {
        serialconnecttype = value;
        serialconnecttype.value_namespace = name_space;
        serialconnecttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serialConnectDialString")
    {
        serialconnectdialstring = value;
        serialconnectdialstring.value_namespace = name_space;
        serialconnectdialstring.value_namespace_prefix = name_space_prefix;
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
}

void RMON2MIB::SerialConnectionTable::SerialConnectionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serialConnectIndex")
    {
        serialconnectindex.yfilter = yfilter;
    }
    if(value_path == "serialConnectDestIpAddress")
    {
        serialconnectdestipaddress.yfilter = yfilter;
    }
    if(value_path == "serialConnectType")
    {
        serialconnecttype.yfilter = yfilter;
    }
    if(value_path == "serialConnectDialString")
    {
        serialconnectdialstring.yfilter = yfilter;
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
    if(value_path == "serialConnectOwner")
    {
        serialconnectowner.yfilter = yfilter;
    }
    if(value_path == "serialConnectStatus")
    {
        serialconnectstatus.yfilter = yfilter;
    }
}

bool RMON2MIB::SerialConnectionTable::SerialConnectionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serialConnectIndex" || name == "serialConnectDestIpAddress" || name == "serialConnectType" || name == "serialConnectDialString" || name == "serialConnectSwitchConnectSeq" || name == "serialConnectSwitchDisconnectSeq" || name == "serialConnectSwitchResetSeq" || name == "serialConnectOwner" || name == "serialConnectStatus")
        return true;
    return false;
}

const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeResetControl::running {1, "running"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeResetControl::warmBoot {2, "warmBoot"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeResetControl::coldBoot {3, "coldBoot"};

const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadAction::notDownloading {1, "notDownloading"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadAction::downloadToPROM {2, "downloadToPROM"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadAction::downloadToRAM {3, "downloadToRAM"};

const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadSuccess {1, "downloadSuccess"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadStatusUnknown {2, "downloadStatusUnknown"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadGeneralError {3, "downloadGeneralError"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadNoResponseFromServer {4, "downloadNoResponseFromServer"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadChecksumError {5, "downloadChecksumError"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadIncompatibleImage {6, "downloadIncompatibleImage"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadTftpFileNotFound {7, "downloadTftpFileNotFound"};
const Enum::YLeaf RMON2MIB::ProbeConfig::ProbeDownloadStatus::downloadTftpAccessViolation {8, "downloadTftpAccessViolation"};

const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirAddressMapConfig::notSupported {1, "notSupported"};
const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirAddressMapConfig::supportedOff {2, "supportedOff"};
const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirAddressMapConfig::supportedOn {3, "supportedOn"};

const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirHostConfig::notSupported {1, "notSupported"};
const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirHostConfig::supportedOff {2, "supportedOff"};
const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirHostConfig::supportedOn {3, "supportedOn"};

const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirMatrixConfig::notSupported {1, "notSupported"};
const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirMatrixConfig::supportedOff {2, "supportedOff"};
const Enum::YLeaf RMON2MIB::ProtocolDirTable::ProtocolDirEntry::ProtocolDirMatrixConfig::supportedOn {3, "supportedOn"};

const Enum::YLeaf RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::NlMatrixTopNControlRateBase::nlMatrixTopNPkts {1, "nlMatrixTopNPkts"};
const Enum::YLeaf RMON2MIB::NlMatrixTopNControlTable::NlMatrixTopNControlEntry::NlMatrixTopNControlRateBase::nlMatrixTopNOctets {2, "nlMatrixTopNOctets"};

const Enum::YLeaf RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::AlMatrixTopNControlRateBase::alMatrixTopNTerminalsPkts {1, "alMatrixTopNTerminalsPkts"};
const Enum::YLeaf RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::AlMatrixTopNControlRateBase::alMatrixTopNTerminalsOctets {2, "alMatrixTopNTerminalsOctets"};
const Enum::YLeaf RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::AlMatrixTopNControlRateBase::alMatrixTopNAllPkts {3, "alMatrixTopNAllPkts"};
const Enum::YLeaf RMON2MIB::AlMatrixTopNControlTable::AlMatrixTopNControlEntry::AlMatrixTopNControlRateBase::alMatrixTopNAllOctets {4, "alMatrixTopNAllOctets"};

const Enum::YLeaf RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::UsrHistoryObjectSampleType::absoluteValue {1, "absoluteValue"};
const Enum::YLeaf RMON2MIB::UsrHistoryObjectTable::UsrHistoryObjectEntry::UsrHistoryObjectSampleType::deltaValue {2, "deltaValue"};

const Enum::YLeaf RMON2MIB::UsrHistoryTable::UsrHistoryEntry::UsrHistoryValStatus::valueNotAvailable {1, "valueNotAvailable"};
const Enum::YLeaf RMON2MIB::UsrHistoryTable::UsrHistoryEntry::UsrHistoryValStatus::valuePositive {2, "valuePositive"};
const Enum::YLeaf RMON2MIB::UsrHistoryTable::UsrHistoryEntry::UsrHistoryValStatus::valueNegative {3, "valueNegative"};

const Enum::YLeaf RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialMode::direct {1, "direct"};
const Enum::YLeaf RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialMode::modem {2, "modem"};

const Enum::YLeaf RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialProtocol::other {1, "other"};
const Enum::YLeaf RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialProtocol::slip {2, "slip"};
const Enum::YLeaf RMON2MIB::SerialConfigTable::SerialConfigEntry::SerialProtocol::ppp {3, "ppp"};

const Enum::YLeaf RMON2MIB::TrapDestTable::TrapDestEntry::TrapDestProtocol::ip {1, "ip"};
const Enum::YLeaf RMON2MIB::TrapDestTable::TrapDestEntry::TrapDestProtocol::ipx {2, "ipx"};

const Enum::YLeaf RMON2MIB::SerialConnectionTable::SerialConnectionEntry::SerialConnectType::direct {1, "direct"};
const Enum::YLeaf RMON2MIB::SerialConnectionTable::SerialConnectionEntry::SerialConnectType::modem {2, "modem"};
const Enum::YLeaf RMON2MIB::SerialConnectionTable::SerialConnectionEntry::SerialConnectType::switch_ {3, "switch"};
const Enum::YLeaf RMON2MIB::SerialConnectionTable::SerialConnectionEntry::SerialConnectType::modemSwitch {4, "modemSwitch"};


}
}

