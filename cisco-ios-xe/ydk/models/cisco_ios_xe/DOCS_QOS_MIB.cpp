
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DOCS_QOS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DOCS_QOS_MIB {

DOCSQOSMIB::DOCSQOSMIB()
    :
    docsqospktclasstable(std::make_shared<DOCSQOSMIB::DocsQosPktClassTable>())
    , docsqosparamsettable(std::make_shared<DOCSQOSMIB::DocsQosParamSetTable>())
    , docsqosserviceflowtable(std::make_shared<DOCSQOSMIB::DocsQosServiceFlowTable>())
    , docsqosserviceflowstatstable(std::make_shared<DOCSQOSMIB::DocsQosServiceFlowStatsTable>())
    , docsqosupstreamstatstable(std::make_shared<DOCSQOSMIB::DocsQosUpstreamStatsTable>())
    , docsqosdynamicservicestatstable(std::make_shared<DOCSQOSMIB::DocsQosDynamicServiceStatsTable>())
    , docsqosserviceflowlogtable(std::make_shared<DOCSQOSMIB::DocsQosServiceFlowLogTable>())
    , docsqosserviceclasstable(std::make_shared<DOCSQOSMIB::DocsQosServiceClassTable>())
    , docsqosserviceclasspolicytable(std::make_shared<DOCSQOSMIB::DocsQosServiceClassPolicyTable>())
    , docsqosphstable(std::make_shared<DOCSQOSMIB::DocsQosPHSTable>())
    , docsqoscmtsmactosrvflowtable(std::make_shared<DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable>())
{
    docsqospktclasstable->parent = this;
    docsqosparamsettable->parent = this;
    docsqosserviceflowtable->parent = this;
    docsqosserviceflowstatstable->parent = this;
    docsqosupstreamstatstable->parent = this;
    docsqosdynamicservicestatstable->parent = this;
    docsqosserviceflowlogtable->parent = this;
    docsqosserviceclasstable->parent = this;
    docsqosserviceclasspolicytable->parent = this;
    docsqosphstable->parent = this;
    docsqoscmtsmactosrvflowtable->parent = this;

    yang_name = "DOCS-QOS-MIB"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DOCSQOSMIB::~DOCSQOSMIB()
{
}

bool DOCSQOSMIB::has_data() const
{
    if (is_presence_container) return true;
    return (docsqospktclasstable !=  nullptr && docsqospktclasstable->has_data())
	|| (docsqosparamsettable !=  nullptr && docsqosparamsettable->has_data())
	|| (docsqosserviceflowtable !=  nullptr && docsqosserviceflowtable->has_data())
	|| (docsqosserviceflowstatstable !=  nullptr && docsqosserviceflowstatstable->has_data())
	|| (docsqosupstreamstatstable !=  nullptr && docsqosupstreamstatstable->has_data())
	|| (docsqosdynamicservicestatstable !=  nullptr && docsqosdynamicservicestatstable->has_data())
	|| (docsqosserviceflowlogtable !=  nullptr && docsqosserviceflowlogtable->has_data())
	|| (docsqosserviceclasstable !=  nullptr && docsqosserviceclasstable->has_data())
	|| (docsqosserviceclasspolicytable !=  nullptr && docsqosserviceclasspolicytable->has_data())
	|| (docsqosphstable !=  nullptr && docsqosphstable->has_data())
	|| (docsqoscmtsmactosrvflowtable !=  nullptr && docsqoscmtsmactosrvflowtable->has_data());
}

bool DOCSQOSMIB::has_operation() const
{
    return is_set(yfilter)
	|| (docsqospktclasstable !=  nullptr && docsqospktclasstable->has_operation())
	|| (docsqosparamsettable !=  nullptr && docsqosparamsettable->has_operation())
	|| (docsqosserviceflowtable !=  nullptr && docsqosserviceflowtable->has_operation())
	|| (docsqosserviceflowstatstable !=  nullptr && docsqosserviceflowstatstable->has_operation())
	|| (docsqosupstreamstatstable !=  nullptr && docsqosupstreamstatstable->has_operation())
	|| (docsqosdynamicservicestatstable !=  nullptr && docsqosdynamicservicestatstable->has_operation())
	|| (docsqosserviceflowlogtable !=  nullptr && docsqosserviceflowlogtable->has_operation())
	|| (docsqosserviceclasstable !=  nullptr && docsqosserviceclasstable->has_operation())
	|| (docsqosserviceclasspolicytable !=  nullptr && docsqosserviceclasspolicytable->has_operation())
	|| (docsqosphstable !=  nullptr && docsqosphstable->has_operation())
	|| (docsqoscmtsmactosrvflowtable !=  nullptr && docsqoscmtsmactosrvflowtable->has_operation());
}

std::string DOCSQOSMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosPktClassTable")
    {
        if(docsqospktclasstable == nullptr)
        {
            docsqospktclasstable = std::make_shared<DOCSQOSMIB::DocsQosPktClassTable>();
        }
        return docsqospktclasstable;
    }

    if(child_yang_name == "docsQosParamSetTable")
    {
        if(docsqosparamsettable == nullptr)
        {
            docsqosparamsettable = std::make_shared<DOCSQOSMIB::DocsQosParamSetTable>();
        }
        return docsqosparamsettable;
    }

    if(child_yang_name == "docsQosServiceFlowTable")
    {
        if(docsqosserviceflowtable == nullptr)
        {
            docsqosserviceflowtable = std::make_shared<DOCSQOSMIB::DocsQosServiceFlowTable>();
        }
        return docsqosserviceflowtable;
    }

    if(child_yang_name == "docsQosServiceFlowStatsTable")
    {
        if(docsqosserviceflowstatstable == nullptr)
        {
            docsqosserviceflowstatstable = std::make_shared<DOCSQOSMIB::DocsQosServiceFlowStatsTable>();
        }
        return docsqosserviceflowstatstable;
    }

    if(child_yang_name == "docsQosUpstreamStatsTable")
    {
        if(docsqosupstreamstatstable == nullptr)
        {
            docsqosupstreamstatstable = std::make_shared<DOCSQOSMIB::DocsQosUpstreamStatsTable>();
        }
        return docsqosupstreamstatstable;
    }

    if(child_yang_name == "docsQosDynamicServiceStatsTable")
    {
        if(docsqosdynamicservicestatstable == nullptr)
        {
            docsqosdynamicservicestatstable = std::make_shared<DOCSQOSMIB::DocsQosDynamicServiceStatsTable>();
        }
        return docsqosdynamicservicestatstable;
    }

    if(child_yang_name == "docsQosServiceFlowLogTable")
    {
        if(docsqosserviceflowlogtable == nullptr)
        {
            docsqosserviceflowlogtable = std::make_shared<DOCSQOSMIB::DocsQosServiceFlowLogTable>();
        }
        return docsqosserviceflowlogtable;
    }

    if(child_yang_name == "docsQosServiceClassTable")
    {
        if(docsqosserviceclasstable == nullptr)
        {
            docsqosserviceclasstable = std::make_shared<DOCSQOSMIB::DocsQosServiceClassTable>();
        }
        return docsqosserviceclasstable;
    }

    if(child_yang_name == "docsQosServiceClassPolicyTable")
    {
        if(docsqosserviceclasspolicytable == nullptr)
        {
            docsqosserviceclasspolicytable = std::make_shared<DOCSQOSMIB::DocsQosServiceClassPolicyTable>();
        }
        return docsqosserviceclasspolicytable;
    }

    if(child_yang_name == "docsQosPHSTable")
    {
        if(docsqosphstable == nullptr)
        {
            docsqosphstable = std::make_shared<DOCSQOSMIB::DocsQosPHSTable>();
        }
        return docsqosphstable;
    }

    if(child_yang_name == "docsQosCmtsMacToSrvFlowTable")
    {
        if(docsqoscmtsmactosrvflowtable == nullptr)
        {
            docsqoscmtsmactosrvflowtable = std::make_shared<DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable>();
        }
        return docsqoscmtsmactosrvflowtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(docsqospktclasstable != nullptr)
    {
        _children["docsQosPktClassTable"] = docsqospktclasstable;
    }

    if(docsqosparamsettable != nullptr)
    {
        _children["docsQosParamSetTable"] = docsqosparamsettable;
    }

    if(docsqosserviceflowtable != nullptr)
    {
        _children["docsQosServiceFlowTable"] = docsqosserviceflowtable;
    }

    if(docsqosserviceflowstatstable != nullptr)
    {
        _children["docsQosServiceFlowStatsTable"] = docsqosserviceflowstatstable;
    }

    if(docsqosupstreamstatstable != nullptr)
    {
        _children["docsQosUpstreamStatsTable"] = docsqosupstreamstatstable;
    }

    if(docsqosdynamicservicestatstable != nullptr)
    {
        _children["docsQosDynamicServiceStatsTable"] = docsqosdynamicservicestatstable;
    }

    if(docsqosserviceflowlogtable != nullptr)
    {
        _children["docsQosServiceFlowLogTable"] = docsqosserviceflowlogtable;
    }

    if(docsqosserviceclasstable != nullptr)
    {
        _children["docsQosServiceClassTable"] = docsqosserviceclasstable;
    }

    if(docsqosserviceclasspolicytable != nullptr)
    {
        _children["docsQosServiceClassPolicyTable"] = docsqosserviceclasspolicytable;
    }

    if(docsqosphstable != nullptr)
    {
        _children["docsQosPHSTable"] = docsqosphstable;
    }

    if(docsqoscmtsmactosrvflowtable != nullptr)
    {
        _children["docsQosCmtsMacToSrvFlowTable"] = docsqoscmtsmactosrvflowtable;
    }

    return _children;
}

void DOCSQOSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::clone_ptr() const
{
    return std::make_shared<DOCSQOSMIB>();
}

std::string DOCSQOSMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DOCSQOSMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DOCSQOSMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DOCSQOSMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DOCSQOSMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosPktClassTable" || name == "docsQosParamSetTable" || name == "docsQosServiceFlowTable" || name == "docsQosServiceFlowStatsTable" || name == "docsQosUpstreamStatsTable" || name == "docsQosDynamicServiceStatsTable" || name == "docsQosServiceFlowLogTable" || name == "docsQosServiceClassTable" || name == "docsQosServiceClassPolicyTable" || name == "docsQosPHSTable" || name == "docsQosCmtsMacToSrvFlowTable")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassTable()
    :
    docsqospktclassentry(this, {"ifindex", "docsqosserviceflowid", "docsqospktclassid"})
{

    yang_name = "docsQosPktClassTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosPktClassTable::~DocsQosPktClassTable()
{
}

bool DOCSQOSMIB::DocsQosPktClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqospktclassentry.len(); index++)
    {
        if(docsqospktclassentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosPktClassTable::has_operation() const
{
    for (std::size_t index=0; index<docsqospktclassentry.len(); index++)
    {
        if(docsqospktclassentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosPktClassTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosPktClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosPktClassTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosPktClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosPktClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosPktClassEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry>();
        ent_->parent = this;
        docsqospktclassentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosPktClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqospktclassentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosPktClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosPktClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosPktClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosPktClassEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosserviceflowid{YType::str, "docsQosServiceFlowId"},
    docsqospktclassid{YType::int32, "docsQosPktClassId"},
    docsqospktclassdirection{YType::enumeration, "docsQosPktClassDirection"},
    docsqospktclasspriority{YType::int32, "docsQosPktClassPriority"},
    docsqospktclassiptoslow{YType::str, "docsQosPktClassIpTosLow"},
    docsqospktclassiptoshigh{YType::str, "docsQosPktClassIpTosHigh"},
    docsqospktclassiptosmask{YType::str, "docsQosPktClassIpTosMask"},
    docsqospktclassipprotocol{YType::int32, "docsQosPktClassIpProtocol"},
    docsqospktclassipsourceaddr{YType::str, "docsQosPktClassIpSourceAddr"},
    docsqospktclassipsourcemask{YType::str, "docsQosPktClassIpSourceMask"},
    docsqospktclassipdestaddr{YType::str, "docsQosPktClassIpDestAddr"},
    docsqospktclassipdestmask{YType::str, "docsQosPktClassIpDestMask"},
    docsqospktclasssourceportstart{YType::int32, "docsQosPktClassSourcePortStart"},
    docsqospktclasssourceportend{YType::int32, "docsQosPktClassSourcePortEnd"},
    docsqospktclassdestportstart{YType::int32, "docsQosPktClassDestPortStart"},
    docsqospktclassdestportend{YType::int32, "docsQosPktClassDestPortEnd"},
    docsqospktclassdestmacaddr{YType::str, "docsQosPktClassDestMacAddr"},
    docsqospktclassdestmacmask{YType::str, "docsQosPktClassDestMacMask"},
    docsqospktclasssourcemacaddr{YType::str, "docsQosPktClassSourceMacAddr"},
    docsqospktclassenetprotocoltype{YType::enumeration, "docsQosPktClassEnetProtocolType"},
    docsqospktclassenetprotocol{YType::int32, "docsQosPktClassEnetProtocol"},
    docsqospktclassuserpriapplies{YType::int32, "docsQosPktClassUserPriApplies"},
    docsqospktclassuserprilow{YType::int32, "docsQosPktClassUserPriLow"},
    docsqospktclassuserprihigh{YType::int32, "docsQosPktClassUserPriHigh"},
    docsqospktclassvlanid{YType::int32, "docsQosPktClassVlanId"},
    docsqospktclassstate{YType::enumeration, "docsQosPktClassState"},
    docsqospktclasspkts{YType::uint32, "docsQosPktClassPkts"},
    docsqospktclassbitmap{YType::bits, "docsQosPktClassBitMap"},
    docsqospktclassinetsourceaddrtype{YType::enumeration, "docsQosPktClassInetSourceAddrType"},
    docsqospktclassinetsourceaddr{YType::str, "docsQosPktClassInetSourceAddr"},
    docsqospktclassinetsourcemasktype{YType::enumeration, "docsQosPktClassInetSourceMaskType"},
    docsqospktclassinetsourcemask{YType::str, "docsQosPktClassInetSourceMask"},
    docsqospktclassinetdestaddrtype{YType::enumeration, "docsQosPktClassInetDestAddrType"},
    docsqospktclassinetdestaddr{YType::str, "docsQosPktClassInetDestAddr"},
    docsqospktclassinetdestmasktype{YType::enumeration, "docsQosPktClassInetDestMaskType"},
    docsqospktclassinetdestmask{YType::str, "docsQosPktClassInetDestMask"}
{

    yang_name = "docsQosPktClassEntry"; yang_parent_name = "docsQosPktClassTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::~DocsQosPktClassEntry()
{
}

bool DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosserviceflowid.is_set
	|| docsqospktclassid.is_set
	|| docsqospktclassdirection.is_set
	|| docsqospktclasspriority.is_set
	|| docsqospktclassiptoslow.is_set
	|| docsqospktclassiptoshigh.is_set
	|| docsqospktclassiptosmask.is_set
	|| docsqospktclassipprotocol.is_set
	|| docsqospktclassipsourceaddr.is_set
	|| docsqospktclassipsourcemask.is_set
	|| docsqospktclassipdestaddr.is_set
	|| docsqospktclassipdestmask.is_set
	|| docsqospktclasssourceportstart.is_set
	|| docsqospktclasssourceportend.is_set
	|| docsqospktclassdestportstart.is_set
	|| docsqospktclassdestportend.is_set
	|| docsqospktclassdestmacaddr.is_set
	|| docsqospktclassdestmacmask.is_set
	|| docsqospktclasssourcemacaddr.is_set
	|| docsqospktclassenetprotocoltype.is_set
	|| docsqospktclassenetprotocol.is_set
	|| docsqospktclassuserpriapplies.is_set
	|| docsqospktclassuserprilow.is_set
	|| docsqospktclassuserprihigh.is_set
	|| docsqospktclassvlanid.is_set
	|| docsqospktclassstate.is_set
	|| docsqospktclasspkts.is_set
	|| docsqospktclassbitmap.is_set
	|| docsqospktclassinetsourceaddrtype.is_set
	|| docsqospktclassinetsourceaddr.is_set
	|| docsqospktclassinetsourcemasktype.is_set
	|| docsqospktclassinetsourcemask.is_set
	|| docsqospktclassinetdestaddrtype.is_set
	|| docsqospktclassinetdestaddr.is_set
	|| docsqospktclassinetdestmasktype.is_set
	|| docsqospktclassinetdestmask.is_set;
}

bool DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowid.yfilter)
	|| ydk::is_set(docsqospktclassid.yfilter)
	|| ydk::is_set(docsqospktclassdirection.yfilter)
	|| ydk::is_set(docsqospktclasspriority.yfilter)
	|| ydk::is_set(docsqospktclassiptoslow.yfilter)
	|| ydk::is_set(docsqospktclassiptoshigh.yfilter)
	|| ydk::is_set(docsqospktclassiptosmask.yfilter)
	|| ydk::is_set(docsqospktclassipprotocol.yfilter)
	|| ydk::is_set(docsqospktclassipsourceaddr.yfilter)
	|| ydk::is_set(docsqospktclassipsourcemask.yfilter)
	|| ydk::is_set(docsqospktclassipdestaddr.yfilter)
	|| ydk::is_set(docsqospktclassipdestmask.yfilter)
	|| ydk::is_set(docsqospktclasssourceportstart.yfilter)
	|| ydk::is_set(docsqospktclasssourceportend.yfilter)
	|| ydk::is_set(docsqospktclassdestportstart.yfilter)
	|| ydk::is_set(docsqospktclassdestportend.yfilter)
	|| ydk::is_set(docsqospktclassdestmacaddr.yfilter)
	|| ydk::is_set(docsqospktclassdestmacmask.yfilter)
	|| ydk::is_set(docsqospktclasssourcemacaddr.yfilter)
	|| ydk::is_set(docsqospktclassenetprotocoltype.yfilter)
	|| ydk::is_set(docsqospktclassenetprotocol.yfilter)
	|| ydk::is_set(docsqospktclassuserpriapplies.yfilter)
	|| ydk::is_set(docsqospktclassuserprilow.yfilter)
	|| ydk::is_set(docsqospktclassuserprihigh.yfilter)
	|| ydk::is_set(docsqospktclassvlanid.yfilter)
	|| ydk::is_set(docsqospktclassstate.yfilter)
	|| ydk::is_set(docsqospktclasspkts.yfilter)
	|| ydk::is_set(docsqospktclassbitmap.yfilter)
	|| ydk::is_set(docsqospktclassinetsourceaddrtype.yfilter)
	|| ydk::is_set(docsqospktclassinetsourceaddr.yfilter)
	|| ydk::is_set(docsqospktclassinetsourcemasktype.yfilter)
	|| ydk::is_set(docsqospktclassinetsourcemask.yfilter)
	|| ydk::is_set(docsqospktclassinetdestaddrtype.yfilter)
	|| ydk::is_set(docsqospktclassinetdestaddr.yfilter)
	|| ydk::is_set(docsqospktclassinetdestmasktype.yfilter)
	|| ydk::is_set(docsqospktclassinetdestmask.yfilter);
}

std::string DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosPktClassTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosPktClassEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosserviceflowid, "docsQosServiceFlowId");
    ADD_KEY_TOKEN(docsqospktclassid, "docsQosPktClassId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosserviceflowid.is_set || is_set(docsqosserviceflowid.yfilter)) leaf_name_data.push_back(docsqosserviceflowid.get_name_leafdata());
    if (docsqospktclassid.is_set || is_set(docsqospktclassid.yfilter)) leaf_name_data.push_back(docsqospktclassid.get_name_leafdata());
    if (docsqospktclassdirection.is_set || is_set(docsqospktclassdirection.yfilter)) leaf_name_data.push_back(docsqospktclassdirection.get_name_leafdata());
    if (docsqospktclasspriority.is_set || is_set(docsqospktclasspriority.yfilter)) leaf_name_data.push_back(docsqospktclasspriority.get_name_leafdata());
    if (docsqospktclassiptoslow.is_set || is_set(docsqospktclassiptoslow.yfilter)) leaf_name_data.push_back(docsqospktclassiptoslow.get_name_leafdata());
    if (docsqospktclassiptoshigh.is_set || is_set(docsqospktclassiptoshigh.yfilter)) leaf_name_data.push_back(docsqospktclassiptoshigh.get_name_leafdata());
    if (docsqospktclassiptosmask.is_set || is_set(docsqospktclassiptosmask.yfilter)) leaf_name_data.push_back(docsqospktclassiptosmask.get_name_leafdata());
    if (docsqospktclassipprotocol.is_set || is_set(docsqospktclassipprotocol.yfilter)) leaf_name_data.push_back(docsqospktclassipprotocol.get_name_leafdata());
    if (docsqospktclassipsourceaddr.is_set || is_set(docsqospktclassipsourceaddr.yfilter)) leaf_name_data.push_back(docsqospktclassipsourceaddr.get_name_leafdata());
    if (docsqospktclassipsourcemask.is_set || is_set(docsqospktclassipsourcemask.yfilter)) leaf_name_data.push_back(docsqospktclassipsourcemask.get_name_leafdata());
    if (docsqospktclassipdestaddr.is_set || is_set(docsqospktclassipdestaddr.yfilter)) leaf_name_data.push_back(docsqospktclassipdestaddr.get_name_leafdata());
    if (docsqospktclassipdestmask.is_set || is_set(docsqospktclassipdestmask.yfilter)) leaf_name_data.push_back(docsqospktclassipdestmask.get_name_leafdata());
    if (docsqospktclasssourceportstart.is_set || is_set(docsqospktclasssourceportstart.yfilter)) leaf_name_data.push_back(docsqospktclasssourceportstart.get_name_leafdata());
    if (docsqospktclasssourceportend.is_set || is_set(docsqospktclasssourceportend.yfilter)) leaf_name_data.push_back(docsqospktclasssourceportend.get_name_leafdata());
    if (docsqospktclassdestportstart.is_set || is_set(docsqospktclassdestportstart.yfilter)) leaf_name_data.push_back(docsqospktclassdestportstart.get_name_leafdata());
    if (docsqospktclassdestportend.is_set || is_set(docsqospktclassdestportend.yfilter)) leaf_name_data.push_back(docsqospktclassdestportend.get_name_leafdata());
    if (docsqospktclassdestmacaddr.is_set || is_set(docsqospktclassdestmacaddr.yfilter)) leaf_name_data.push_back(docsqospktclassdestmacaddr.get_name_leafdata());
    if (docsqospktclassdestmacmask.is_set || is_set(docsqospktclassdestmacmask.yfilter)) leaf_name_data.push_back(docsqospktclassdestmacmask.get_name_leafdata());
    if (docsqospktclasssourcemacaddr.is_set || is_set(docsqospktclasssourcemacaddr.yfilter)) leaf_name_data.push_back(docsqospktclasssourcemacaddr.get_name_leafdata());
    if (docsqospktclassenetprotocoltype.is_set || is_set(docsqospktclassenetprotocoltype.yfilter)) leaf_name_data.push_back(docsqospktclassenetprotocoltype.get_name_leafdata());
    if (docsqospktclassenetprotocol.is_set || is_set(docsqospktclassenetprotocol.yfilter)) leaf_name_data.push_back(docsqospktclassenetprotocol.get_name_leafdata());
    if (docsqospktclassuserpriapplies.is_set || is_set(docsqospktclassuserpriapplies.yfilter)) leaf_name_data.push_back(docsqospktclassuserpriapplies.get_name_leafdata());
    if (docsqospktclassuserprilow.is_set || is_set(docsqospktclassuserprilow.yfilter)) leaf_name_data.push_back(docsqospktclassuserprilow.get_name_leafdata());
    if (docsqospktclassuserprihigh.is_set || is_set(docsqospktclassuserprihigh.yfilter)) leaf_name_data.push_back(docsqospktclassuserprihigh.get_name_leafdata());
    if (docsqospktclassvlanid.is_set || is_set(docsqospktclassvlanid.yfilter)) leaf_name_data.push_back(docsqospktclassvlanid.get_name_leafdata());
    if (docsqospktclassstate.is_set || is_set(docsqospktclassstate.yfilter)) leaf_name_data.push_back(docsqospktclassstate.get_name_leafdata());
    if (docsqospktclasspkts.is_set || is_set(docsqospktclasspkts.yfilter)) leaf_name_data.push_back(docsqospktclasspkts.get_name_leafdata());
    if (docsqospktclassbitmap.is_set || is_set(docsqospktclassbitmap.yfilter)) leaf_name_data.push_back(docsqospktclassbitmap.get_name_leafdata());
    if (docsqospktclassinetsourceaddrtype.is_set || is_set(docsqospktclassinetsourceaddrtype.yfilter)) leaf_name_data.push_back(docsqospktclassinetsourceaddrtype.get_name_leafdata());
    if (docsqospktclassinetsourceaddr.is_set || is_set(docsqospktclassinetsourceaddr.yfilter)) leaf_name_data.push_back(docsqospktclassinetsourceaddr.get_name_leafdata());
    if (docsqospktclassinetsourcemasktype.is_set || is_set(docsqospktclassinetsourcemasktype.yfilter)) leaf_name_data.push_back(docsqospktclassinetsourcemasktype.get_name_leafdata());
    if (docsqospktclassinetsourcemask.is_set || is_set(docsqospktclassinetsourcemask.yfilter)) leaf_name_data.push_back(docsqospktclassinetsourcemask.get_name_leafdata());
    if (docsqospktclassinetdestaddrtype.is_set || is_set(docsqospktclassinetdestaddrtype.yfilter)) leaf_name_data.push_back(docsqospktclassinetdestaddrtype.get_name_leafdata());
    if (docsqospktclassinetdestaddr.is_set || is_set(docsqospktclassinetdestaddr.yfilter)) leaf_name_data.push_back(docsqospktclassinetdestaddr.get_name_leafdata());
    if (docsqospktclassinetdestmasktype.is_set || is_set(docsqospktclassinetdestmasktype.yfilter)) leaf_name_data.push_back(docsqospktclassinetdestmasktype.get_name_leafdata());
    if (docsqospktclassinetdestmask.is_set || is_set(docsqospktclassinetdestmask.yfilter)) leaf_name_data.push_back(docsqospktclassinetdestmask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid = value;
        docsqosserviceflowid.value_namespace = name_space;
        docsqosserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassId")
    {
        docsqospktclassid = value;
        docsqospktclassid.value_namespace = name_space;
        docsqospktclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassDirection")
    {
        docsqospktclassdirection = value;
        docsqospktclassdirection.value_namespace = name_space;
        docsqospktclassdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassPriority")
    {
        docsqospktclasspriority = value;
        docsqospktclasspriority.value_namespace = name_space;
        docsqospktclasspriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpTosLow")
    {
        docsqospktclassiptoslow = value;
        docsqospktclassiptoslow.value_namespace = name_space;
        docsqospktclassiptoslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpTosHigh")
    {
        docsqospktclassiptoshigh = value;
        docsqospktclassiptoshigh.value_namespace = name_space;
        docsqospktclassiptoshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpTosMask")
    {
        docsqospktclassiptosmask = value;
        docsqospktclassiptosmask.value_namespace = name_space;
        docsqospktclassiptosmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpProtocol")
    {
        docsqospktclassipprotocol = value;
        docsqospktclassipprotocol.value_namespace = name_space;
        docsqospktclassipprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpSourceAddr")
    {
        docsqospktclassipsourceaddr = value;
        docsqospktclassipsourceaddr.value_namespace = name_space;
        docsqospktclassipsourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpSourceMask")
    {
        docsqospktclassipsourcemask = value;
        docsqospktclassipsourcemask.value_namespace = name_space;
        docsqospktclassipsourcemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpDestAddr")
    {
        docsqospktclassipdestaddr = value;
        docsqospktclassipdestaddr.value_namespace = name_space;
        docsqospktclassipdestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassIpDestMask")
    {
        docsqospktclassipdestmask = value;
        docsqospktclassipdestmask.value_namespace = name_space;
        docsqospktclassipdestmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassSourcePortStart")
    {
        docsqospktclasssourceportstart = value;
        docsqospktclasssourceportstart.value_namespace = name_space;
        docsqospktclasssourceportstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassSourcePortEnd")
    {
        docsqospktclasssourceportend = value;
        docsqospktclasssourceportend.value_namespace = name_space;
        docsqospktclasssourceportend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassDestPortStart")
    {
        docsqospktclassdestportstart = value;
        docsqospktclassdestportstart.value_namespace = name_space;
        docsqospktclassdestportstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassDestPortEnd")
    {
        docsqospktclassdestportend = value;
        docsqospktclassdestportend.value_namespace = name_space;
        docsqospktclassdestportend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassDestMacAddr")
    {
        docsqospktclassdestmacaddr = value;
        docsqospktclassdestmacaddr.value_namespace = name_space;
        docsqospktclassdestmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassDestMacMask")
    {
        docsqospktclassdestmacmask = value;
        docsqospktclassdestmacmask.value_namespace = name_space;
        docsqospktclassdestmacmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassSourceMacAddr")
    {
        docsqospktclasssourcemacaddr = value;
        docsqospktclasssourcemacaddr.value_namespace = name_space;
        docsqospktclasssourcemacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassEnetProtocolType")
    {
        docsqospktclassenetprotocoltype = value;
        docsqospktclassenetprotocoltype.value_namespace = name_space;
        docsqospktclassenetprotocoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassEnetProtocol")
    {
        docsqospktclassenetprotocol = value;
        docsqospktclassenetprotocol.value_namespace = name_space;
        docsqospktclassenetprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassUserPriApplies")
    {
        docsqospktclassuserpriapplies = value;
        docsqospktclassuserpriapplies.value_namespace = name_space;
        docsqospktclassuserpriapplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassUserPriLow")
    {
        docsqospktclassuserprilow = value;
        docsqospktclassuserprilow.value_namespace = name_space;
        docsqospktclassuserprilow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassUserPriHigh")
    {
        docsqospktclassuserprihigh = value;
        docsqospktclassuserprihigh.value_namespace = name_space;
        docsqospktclassuserprihigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassVlanId")
    {
        docsqospktclassvlanid = value;
        docsqospktclassvlanid.value_namespace = name_space;
        docsqospktclassvlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassState")
    {
        docsqospktclassstate = value;
        docsqospktclassstate.value_namespace = name_space;
        docsqospktclassstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassPkts")
    {
        docsqospktclasspkts = value;
        docsqospktclasspkts.value_namespace = name_space;
        docsqospktclasspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassBitMap")
    {
        docsqospktclassbitmap[value] = true;
    }
    if(value_path == "docsQosPktClassInetSourceAddrType")
    {
        docsqospktclassinetsourceaddrtype = value;
        docsqospktclassinetsourceaddrtype.value_namespace = name_space;
        docsqospktclassinetsourceaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassInetSourceAddr")
    {
        docsqospktclassinetsourceaddr = value;
        docsqospktclassinetsourceaddr.value_namespace = name_space;
        docsqospktclassinetsourceaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassInetSourceMaskType")
    {
        docsqospktclassinetsourcemasktype = value;
        docsqospktclassinetsourcemasktype.value_namespace = name_space;
        docsqospktclassinetsourcemasktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassInetSourceMask")
    {
        docsqospktclassinetsourcemask = value;
        docsqospktclassinetsourcemask.value_namespace = name_space;
        docsqospktclassinetsourcemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassInetDestAddrType")
    {
        docsqospktclassinetdestaddrtype = value;
        docsqospktclassinetdestaddrtype.value_namespace = name_space;
        docsqospktclassinetdestaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassInetDestAddr")
    {
        docsqospktclassinetdestaddr = value;
        docsqospktclassinetdestaddr.value_namespace = name_space;
        docsqospktclassinetdestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassInetDestMaskType")
    {
        docsqospktclassinetdestmasktype = value;
        docsqospktclassinetdestmasktype.value_namespace = name_space;
        docsqospktclassinetdestmasktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassInetDestMask")
    {
        docsqospktclassinetdestmask = value;
        docsqospktclassinetdestmask.value_namespace = name_space;
        docsqospktclassinetdestmask.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassId")
    {
        docsqospktclassid.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassDirection")
    {
        docsqospktclassdirection.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassPriority")
    {
        docsqospktclasspriority.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpTosLow")
    {
        docsqospktclassiptoslow.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpTosHigh")
    {
        docsqospktclassiptoshigh.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpTosMask")
    {
        docsqospktclassiptosmask.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpProtocol")
    {
        docsqospktclassipprotocol.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpSourceAddr")
    {
        docsqospktclassipsourceaddr.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpSourceMask")
    {
        docsqospktclassipsourcemask.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpDestAddr")
    {
        docsqospktclassipdestaddr.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassIpDestMask")
    {
        docsqospktclassipdestmask.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassSourcePortStart")
    {
        docsqospktclasssourceportstart.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassSourcePortEnd")
    {
        docsqospktclasssourceportend.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassDestPortStart")
    {
        docsqospktclassdestportstart.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassDestPortEnd")
    {
        docsqospktclassdestportend.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassDestMacAddr")
    {
        docsqospktclassdestmacaddr.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassDestMacMask")
    {
        docsqospktclassdestmacmask.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassSourceMacAddr")
    {
        docsqospktclasssourcemacaddr.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassEnetProtocolType")
    {
        docsqospktclassenetprotocoltype.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassEnetProtocol")
    {
        docsqospktclassenetprotocol.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassUserPriApplies")
    {
        docsqospktclassuserpriapplies.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassUserPriLow")
    {
        docsqospktclassuserprilow.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassUserPriHigh")
    {
        docsqospktclassuserprihigh.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassVlanId")
    {
        docsqospktclassvlanid.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassState")
    {
        docsqospktclassstate.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassPkts")
    {
        docsqospktclasspkts.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassBitMap")
    {
        docsqospktclassbitmap.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetSourceAddrType")
    {
        docsqospktclassinetsourceaddrtype.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetSourceAddr")
    {
        docsqospktclassinetsourceaddr.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetSourceMaskType")
    {
        docsqospktclassinetsourcemasktype.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetSourceMask")
    {
        docsqospktclassinetsourcemask.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetDestAddrType")
    {
        docsqospktclassinetdestaddrtype.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetDestAddr")
    {
        docsqospktclassinetdestaddr.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetDestMaskType")
    {
        docsqospktclassinetdestmasktype.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassInetDestMask")
    {
        docsqospktclassinetdestmask.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosServiceFlowId" || name == "docsQosPktClassId" || name == "docsQosPktClassDirection" || name == "docsQosPktClassPriority" || name == "docsQosPktClassIpTosLow" || name == "docsQosPktClassIpTosHigh" || name == "docsQosPktClassIpTosMask" || name == "docsQosPktClassIpProtocol" || name == "docsQosPktClassIpSourceAddr" || name == "docsQosPktClassIpSourceMask" || name == "docsQosPktClassIpDestAddr" || name == "docsQosPktClassIpDestMask" || name == "docsQosPktClassSourcePortStart" || name == "docsQosPktClassSourcePortEnd" || name == "docsQosPktClassDestPortStart" || name == "docsQosPktClassDestPortEnd" || name == "docsQosPktClassDestMacAddr" || name == "docsQosPktClassDestMacMask" || name == "docsQosPktClassSourceMacAddr" || name == "docsQosPktClassEnetProtocolType" || name == "docsQosPktClassEnetProtocol" || name == "docsQosPktClassUserPriApplies" || name == "docsQosPktClassUserPriLow" || name == "docsQosPktClassUserPriHigh" || name == "docsQosPktClassVlanId" || name == "docsQosPktClassState" || name == "docsQosPktClassPkts" || name == "docsQosPktClassBitMap" || name == "docsQosPktClassInetSourceAddrType" || name == "docsQosPktClassInetSourceAddr" || name == "docsQosPktClassInetSourceMaskType" || name == "docsQosPktClassInetSourceMask" || name == "docsQosPktClassInetDestAddrType" || name == "docsQosPktClassInetDestAddr" || name == "docsQosPktClassInetDestMaskType" || name == "docsQosPktClassInetDestMask")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetTable()
    :
    docsqosparamsetentry(this, {"ifindex", "docsqosserviceflowid", "docsqosparamsettype"})
{

    yang_name = "docsQosParamSetTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosParamSetTable::~DocsQosParamSetTable()
{
}

bool DOCSQOSMIB::DocsQosParamSetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosparamsetentry.len(); index++)
    {
        if(docsqosparamsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosParamSetTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosparamsetentry.len(); index++)
    {
        if(docsqosparamsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosParamSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosParamSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosParamSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosParamSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosParamSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosParamSetEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry>();
        ent_->parent = this;
        docsqosparamsetentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosParamSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosparamsetentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosParamSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosParamSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosParamSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosParamSetEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::DocsQosParamSetEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosserviceflowid{YType::str, "docsQosServiceFlowId"},
    docsqosparamsettype{YType::enumeration, "docsQosParamSetType"},
    docsqosparamsetserviceclassname{YType::str, "docsQosParamSetServiceClassName"},
    docsqosparamsetpriority{YType::int32, "docsQosParamSetPriority"},
    docsqosparamsetmaxtrafficrate{YType::uint32, "docsQosParamSetMaxTrafficRate"},
    docsqosparamsetmaxtrafficburst{YType::uint32, "docsQosParamSetMaxTrafficBurst"},
    docsqosparamsetminreservedrate{YType::uint32, "docsQosParamSetMinReservedRate"},
    docsqosparamsetminreservedpkt{YType::int32, "docsQosParamSetMinReservedPkt"},
    docsqosparamsetactivetimeout{YType::int32, "docsQosParamSetActiveTimeout"},
    docsqosparamsetadmittedtimeout{YType::int32, "docsQosParamSetAdmittedTimeout"},
    docsqosparamsetmaxconcatburst{YType::int32, "docsQosParamSetMaxConcatBurst"},
    docsqosparamsetschedulingtype{YType::enumeration, "docsQosParamSetSchedulingType"},
    docsqosparamsetnompollinterval{YType::uint32, "docsQosParamSetNomPollInterval"},
    docsqosparamsettolpolljitter{YType::uint32, "docsQosParamSetTolPollJitter"},
    docsqosparamsetunsolicitgrantsize{YType::int32, "docsQosParamSetUnsolicitGrantSize"},
    docsqosparamsetnomgrantinterval{YType::uint32, "docsQosParamSetNomGrantInterval"},
    docsqosparamsettolgrantjitter{YType::uint32, "docsQosParamSetTolGrantJitter"},
    docsqosparamsetgrantsperinterval{YType::int32, "docsQosParamSetGrantsPerInterval"},
    docsqosparamsettosandmask{YType::str, "docsQosParamSetTosAndMask"},
    docsqosparamsettosormask{YType::str, "docsQosParamSetTosOrMask"},
    docsqosparamsetmaxlatency{YType::uint32, "docsQosParamSetMaxLatency"},
    docsqosparamsetrequestpolicyoct{YType::str, "docsQosParamSetRequestPolicyOct"},
    docsqosparamsetbitmap{YType::bits, "docsQosParamSetBitMap"}
{

    yang_name = "docsQosParamSetEntry"; yang_parent_name = "docsQosParamSetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::~DocsQosParamSetEntry()
{
}

bool DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosserviceflowid.is_set
	|| docsqosparamsettype.is_set
	|| docsqosparamsetserviceclassname.is_set
	|| docsqosparamsetpriority.is_set
	|| docsqosparamsetmaxtrafficrate.is_set
	|| docsqosparamsetmaxtrafficburst.is_set
	|| docsqosparamsetminreservedrate.is_set
	|| docsqosparamsetminreservedpkt.is_set
	|| docsqosparamsetactivetimeout.is_set
	|| docsqosparamsetadmittedtimeout.is_set
	|| docsqosparamsetmaxconcatburst.is_set
	|| docsqosparamsetschedulingtype.is_set
	|| docsqosparamsetnompollinterval.is_set
	|| docsqosparamsettolpolljitter.is_set
	|| docsqosparamsetunsolicitgrantsize.is_set
	|| docsqosparamsetnomgrantinterval.is_set
	|| docsqosparamsettolgrantjitter.is_set
	|| docsqosparamsetgrantsperinterval.is_set
	|| docsqosparamsettosandmask.is_set
	|| docsqosparamsettosormask.is_set
	|| docsqosparamsetmaxlatency.is_set
	|| docsqosparamsetrequestpolicyoct.is_set
	|| docsqosparamsetbitmap.is_set;
}

bool DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowid.yfilter)
	|| ydk::is_set(docsqosparamsettype.yfilter)
	|| ydk::is_set(docsqosparamsetserviceclassname.yfilter)
	|| ydk::is_set(docsqosparamsetpriority.yfilter)
	|| ydk::is_set(docsqosparamsetmaxtrafficrate.yfilter)
	|| ydk::is_set(docsqosparamsetmaxtrafficburst.yfilter)
	|| ydk::is_set(docsqosparamsetminreservedrate.yfilter)
	|| ydk::is_set(docsqosparamsetminreservedpkt.yfilter)
	|| ydk::is_set(docsqosparamsetactivetimeout.yfilter)
	|| ydk::is_set(docsqosparamsetadmittedtimeout.yfilter)
	|| ydk::is_set(docsqosparamsetmaxconcatburst.yfilter)
	|| ydk::is_set(docsqosparamsetschedulingtype.yfilter)
	|| ydk::is_set(docsqosparamsetnompollinterval.yfilter)
	|| ydk::is_set(docsqosparamsettolpolljitter.yfilter)
	|| ydk::is_set(docsqosparamsetunsolicitgrantsize.yfilter)
	|| ydk::is_set(docsqosparamsetnomgrantinterval.yfilter)
	|| ydk::is_set(docsqosparamsettolgrantjitter.yfilter)
	|| ydk::is_set(docsqosparamsetgrantsperinterval.yfilter)
	|| ydk::is_set(docsqosparamsettosandmask.yfilter)
	|| ydk::is_set(docsqosparamsettosormask.yfilter)
	|| ydk::is_set(docsqosparamsetmaxlatency.yfilter)
	|| ydk::is_set(docsqosparamsetrequestpolicyoct.yfilter)
	|| ydk::is_set(docsqosparamsetbitmap.yfilter);
}

std::string DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosParamSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosParamSetEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosserviceflowid, "docsQosServiceFlowId");
    ADD_KEY_TOKEN(docsqosparamsettype, "docsQosParamSetType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosserviceflowid.is_set || is_set(docsqosserviceflowid.yfilter)) leaf_name_data.push_back(docsqosserviceflowid.get_name_leafdata());
    if (docsqosparamsettype.is_set || is_set(docsqosparamsettype.yfilter)) leaf_name_data.push_back(docsqosparamsettype.get_name_leafdata());
    if (docsqosparamsetserviceclassname.is_set || is_set(docsqosparamsetserviceclassname.yfilter)) leaf_name_data.push_back(docsqosparamsetserviceclassname.get_name_leafdata());
    if (docsqosparamsetpriority.is_set || is_set(docsqosparamsetpriority.yfilter)) leaf_name_data.push_back(docsqosparamsetpriority.get_name_leafdata());
    if (docsqosparamsetmaxtrafficrate.is_set || is_set(docsqosparamsetmaxtrafficrate.yfilter)) leaf_name_data.push_back(docsqosparamsetmaxtrafficrate.get_name_leafdata());
    if (docsqosparamsetmaxtrafficburst.is_set || is_set(docsqosparamsetmaxtrafficburst.yfilter)) leaf_name_data.push_back(docsqosparamsetmaxtrafficburst.get_name_leafdata());
    if (docsqosparamsetminreservedrate.is_set || is_set(docsqosparamsetminreservedrate.yfilter)) leaf_name_data.push_back(docsqosparamsetminreservedrate.get_name_leafdata());
    if (docsqosparamsetminreservedpkt.is_set || is_set(docsqosparamsetminreservedpkt.yfilter)) leaf_name_data.push_back(docsqosparamsetminreservedpkt.get_name_leafdata());
    if (docsqosparamsetactivetimeout.is_set || is_set(docsqosparamsetactivetimeout.yfilter)) leaf_name_data.push_back(docsqosparamsetactivetimeout.get_name_leafdata());
    if (docsqosparamsetadmittedtimeout.is_set || is_set(docsqosparamsetadmittedtimeout.yfilter)) leaf_name_data.push_back(docsqosparamsetadmittedtimeout.get_name_leafdata());
    if (docsqosparamsetmaxconcatburst.is_set || is_set(docsqosparamsetmaxconcatburst.yfilter)) leaf_name_data.push_back(docsqosparamsetmaxconcatburst.get_name_leafdata());
    if (docsqosparamsetschedulingtype.is_set || is_set(docsqosparamsetschedulingtype.yfilter)) leaf_name_data.push_back(docsqosparamsetschedulingtype.get_name_leafdata());
    if (docsqosparamsetnompollinterval.is_set || is_set(docsqosparamsetnompollinterval.yfilter)) leaf_name_data.push_back(docsqosparamsetnompollinterval.get_name_leafdata());
    if (docsqosparamsettolpolljitter.is_set || is_set(docsqosparamsettolpolljitter.yfilter)) leaf_name_data.push_back(docsqosparamsettolpolljitter.get_name_leafdata());
    if (docsqosparamsetunsolicitgrantsize.is_set || is_set(docsqosparamsetunsolicitgrantsize.yfilter)) leaf_name_data.push_back(docsqosparamsetunsolicitgrantsize.get_name_leafdata());
    if (docsqosparamsetnomgrantinterval.is_set || is_set(docsqosparamsetnomgrantinterval.yfilter)) leaf_name_data.push_back(docsqosparamsetnomgrantinterval.get_name_leafdata());
    if (docsqosparamsettolgrantjitter.is_set || is_set(docsqosparamsettolgrantjitter.yfilter)) leaf_name_data.push_back(docsqosparamsettolgrantjitter.get_name_leafdata());
    if (docsqosparamsetgrantsperinterval.is_set || is_set(docsqosparamsetgrantsperinterval.yfilter)) leaf_name_data.push_back(docsqosparamsetgrantsperinterval.get_name_leafdata());
    if (docsqosparamsettosandmask.is_set || is_set(docsqosparamsettosandmask.yfilter)) leaf_name_data.push_back(docsqosparamsettosandmask.get_name_leafdata());
    if (docsqosparamsettosormask.is_set || is_set(docsqosparamsettosormask.yfilter)) leaf_name_data.push_back(docsqosparamsettosormask.get_name_leafdata());
    if (docsqosparamsetmaxlatency.is_set || is_set(docsqosparamsetmaxlatency.yfilter)) leaf_name_data.push_back(docsqosparamsetmaxlatency.get_name_leafdata());
    if (docsqosparamsetrequestpolicyoct.is_set || is_set(docsqosparamsetrequestpolicyoct.yfilter)) leaf_name_data.push_back(docsqosparamsetrequestpolicyoct.get_name_leafdata());
    if (docsqosparamsetbitmap.is_set || is_set(docsqosparamsetbitmap.yfilter)) leaf_name_data.push_back(docsqosparamsetbitmap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid = value;
        docsqosserviceflowid.value_namespace = name_space;
        docsqosserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetType")
    {
        docsqosparamsettype = value;
        docsqosparamsettype.value_namespace = name_space;
        docsqosparamsettype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetServiceClassName")
    {
        docsqosparamsetserviceclassname = value;
        docsqosparamsetserviceclassname.value_namespace = name_space;
        docsqosparamsetserviceclassname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetPriority")
    {
        docsqosparamsetpriority = value;
        docsqosparamsetpriority.value_namespace = name_space;
        docsqosparamsetpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetMaxTrafficRate")
    {
        docsqosparamsetmaxtrafficrate = value;
        docsqosparamsetmaxtrafficrate.value_namespace = name_space;
        docsqosparamsetmaxtrafficrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetMaxTrafficBurst")
    {
        docsqosparamsetmaxtrafficburst = value;
        docsqosparamsetmaxtrafficburst.value_namespace = name_space;
        docsqosparamsetmaxtrafficburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetMinReservedRate")
    {
        docsqosparamsetminreservedrate = value;
        docsqosparamsetminreservedrate.value_namespace = name_space;
        docsqosparamsetminreservedrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetMinReservedPkt")
    {
        docsqosparamsetminreservedpkt = value;
        docsqosparamsetminreservedpkt.value_namespace = name_space;
        docsqosparamsetminreservedpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetActiveTimeout")
    {
        docsqosparamsetactivetimeout = value;
        docsqosparamsetactivetimeout.value_namespace = name_space;
        docsqosparamsetactivetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetAdmittedTimeout")
    {
        docsqosparamsetadmittedtimeout = value;
        docsqosparamsetadmittedtimeout.value_namespace = name_space;
        docsqosparamsetadmittedtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetMaxConcatBurst")
    {
        docsqosparamsetmaxconcatburst = value;
        docsqosparamsetmaxconcatburst.value_namespace = name_space;
        docsqosparamsetmaxconcatburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetSchedulingType")
    {
        docsqosparamsetschedulingtype = value;
        docsqosparamsetschedulingtype.value_namespace = name_space;
        docsqosparamsetschedulingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetNomPollInterval")
    {
        docsqosparamsetnompollinterval = value;
        docsqosparamsetnompollinterval.value_namespace = name_space;
        docsqosparamsetnompollinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetTolPollJitter")
    {
        docsqosparamsettolpolljitter = value;
        docsqosparamsettolpolljitter.value_namespace = name_space;
        docsqosparamsettolpolljitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetUnsolicitGrantSize")
    {
        docsqosparamsetunsolicitgrantsize = value;
        docsqosparamsetunsolicitgrantsize.value_namespace = name_space;
        docsqosparamsetunsolicitgrantsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetNomGrantInterval")
    {
        docsqosparamsetnomgrantinterval = value;
        docsqosparamsetnomgrantinterval.value_namespace = name_space;
        docsqosparamsetnomgrantinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetTolGrantJitter")
    {
        docsqosparamsettolgrantjitter = value;
        docsqosparamsettolgrantjitter.value_namespace = name_space;
        docsqosparamsettolgrantjitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetGrantsPerInterval")
    {
        docsqosparamsetgrantsperinterval = value;
        docsqosparamsetgrantsperinterval.value_namespace = name_space;
        docsqosparamsetgrantsperinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetTosAndMask")
    {
        docsqosparamsettosandmask = value;
        docsqosparamsettosandmask.value_namespace = name_space;
        docsqosparamsettosandmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetTosOrMask")
    {
        docsqosparamsettosormask = value;
        docsqosparamsettosormask.value_namespace = name_space;
        docsqosparamsettosormask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetMaxLatency")
    {
        docsqosparamsetmaxlatency = value;
        docsqosparamsetmaxlatency.value_namespace = name_space;
        docsqosparamsetmaxlatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetRequestPolicyOct")
    {
        docsqosparamsetrequestpolicyoct = value;
        docsqosparamsetrequestpolicyoct.value_namespace = name_space;
        docsqosparamsetrequestpolicyoct.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosParamSetBitMap")
    {
        docsqosparamsetbitmap[value] = true;
    }
}

void DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetType")
    {
        docsqosparamsettype.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetServiceClassName")
    {
        docsqosparamsetserviceclassname.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetPriority")
    {
        docsqosparamsetpriority.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetMaxTrafficRate")
    {
        docsqosparamsetmaxtrafficrate.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetMaxTrafficBurst")
    {
        docsqosparamsetmaxtrafficburst.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetMinReservedRate")
    {
        docsqosparamsetminreservedrate.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetMinReservedPkt")
    {
        docsqosparamsetminreservedpkt.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetActiveTimeout")
    {
        docsqosparamsetactivetimeout.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetAdmittedTimeout")
    {
        docsqosparamsetadmittedtimeout.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetMaxConcatBurst")
    {
        docsqosparamsetmaxconcatburst.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetSchedulingType")
    {
        docsqosparamsetschedulingtype.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetNomPollInterval")
    {
        docsqosparamsetnompollinterval.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetTolPollJitter")
    {
        docsqosparamsettolpolljitter.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetUnsolicitGrantSize")
    {
        docsqosparamsetunsolicitgrantsize.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetNomGrantInterval")
    {
        docsqosparamsetnomgrantinterval.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetTolGrantJitter")
    {
        docsqosparamsettolgrantjitter.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetGrantsPerInterval")
    {
        docsqosparamsetgrantsperinterval.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetTosAndMask")
    {
        docsqosparamsettosandmask.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetTosOrMask")
    {
        docsqosparamsettosormask.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetMaxLatency")
    {
        docsqosparamsetmaxlatency.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetRequestPolicyOct")
    {
        docsqosparamsetrequestpolicyoct.yfilter = yfilter;
    }
    if(value_path == "docsQosParamSetBitMap")
    {
        docsqosparamsetbitmap.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosServiceFlowId" || name == "docsQosParamSetType" || name == "docsQosParamSetServiceClassName" || name == "docsQosParamSetPriority" || name == "docsQosParamSetMaxTrafficRate" || name == "docsQosParamSetMaxTrafficBurst" || name == "docsQosParamSetMinReservedRate" || name == "docsQosParamSetMinReservedPkt" || name == "docsQosParamSetActiveTimeout" || name == "docsQosParamSetAdmittedTimeout" || name == "docsQosParamSetMaxConcatBurst" || name == "docsQosParamSetSchedulingType" || name == "docsQosParamSetNomPollInterval" || name == "docsQosParamSetTolPollJitter" || name == "docsQosParamSetUnsolicitGrantSize" || name == "docsQosParamSetNomGrantInterval" || name == "docsQosParamSetTolGrantJitter" || name == "docsQosParamSetGrantsPerInterval" || name == "docsQosParamSetTosAndMask" || name == "docsQosParamSetTosOrMask" || name == "docsQosParamSetMaxLatency" || name == "docsQosParamSetRequestPolicyOct" || name == "docsQosParamSetBitMap")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowTable()
    :
    docsqosserviceflowentry(this, {"ifindex", "docsqosserviceflowid"})
{

    yang_name = "docsQosServiceFlowTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceFlowTable::~DocsQosServiceFlowTable()
{
}

bool DOCSQOSMIB::DocsQosServiceFlowTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosserviceflowentry.len(); index++)
    {
        if(docsqosserviceflowentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosServiceFlowTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosserviceflowentry.len(); index++)
    {
        if(docsqosserviceflowentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceFlowTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceFlowTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceFlowTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceFlowTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceFlowTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosServiceFlowEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry>();
        ent_->parent = this;
        docsqosserviceflowentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceFlowTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosserviceflowentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosServiceFlowTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosServiceFlowTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosServiceFlowTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceFlowEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::DocsQosServiceFlowEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosserviceflowid{YType::uint32, "docsQosServiceFlowId"},
    docsqosserviceflowprovisionedparamsetindex{YType::uint32, "docsQosServiceFlowProvisionedParamSetIndex"},
    docsqosserviceflowadmittedparamsetindex{YType::uint32, "docsQosServiceFlowAdmittedParamSetIndex"},
    docsqosserviceflowactiveparamsetindex{YType::uint32, "docsQosServiceFlowActiveParamSetIndex"},
    docsqosserviceflowsid{YType::uint32, "docsQosServiceFlowSID"},
    docsqosserviceflowdirection{YType::enumeration, "docsQosServiceFlowDirection"},
    docsqosserviceflowprimary{YType::boolean, "docsQosServiceFlowPrimary"},
    docsqosserviceflowactivetimeout{YType::int32, "docsQosServiceFlowActiveTimeout"},
    docsqosserviceflowadmittedtimeout{YType::int32, "docsQosServiceFlowAdmittedTimeout"},
    docsqosserviceflowschedulingtype{YType::enumeration, "docsQosServiceFlowSchedulingType"},
    docsqosserviceflowrequestpolicy{YType::str, "docsQosServiceFlowRequestPolicy"},
    docsqosserviceflowtosandmask{YType::str, "docsQosServiceFlowTosAndMask"},
    docsqosserviceflowtosormask{YType::str, "docsQosServiceFlowTosOrMask"}
{

    yang_name = "docsQosServiceFlowEntry"; yang_parent_name = "docsQosServiceFlowTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::~DocsQosServiceFlowEntry()
{
}

bool DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosserviceflowid.is_set
	|| docsqosserviceflowprovisionedparamsetindex.is_set
	|| docsqosserviceflowadmittedparamsetindex.is_set
	|| docsqosserviceflowactiveparamsetindex.is_set
	|| docsqosserviceflowsid.is_set
	|| docsqosserviceflowdirection.is_set
	|| docsqosserviceflowprimary.is_set
	|| docsqosserviceflowactivetimeout.is_set
	|| docsqosserviceflowadmittedtimeout.is_set
	|| docsqosserviceflowschedulingtype.is_set
	|| docsqosserviceflowrequestpolicy.is_set
	|| docsqosserviceflowtosandmask.is_set
	|| docsqosserviceflowtosormask.is_set;
}

bool DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowid.yfilter)
	|| ydk::is_set(docsqosserviceflowprovisionedparamsetindex.yfilter)
	|| ydk::is_set(docsqosserviceflowadmittedparamsetindex.yfilter)
	|| ydk::is_set(docsqosserviceflowactiveparamsetindex.yfilter)
	|| ydk::is_set(docsqosserviceflowsid.yfilter)
	|| ydk::is_set(docsqosserviceflowdirection.yfilter)
	|| ydk::is_set(docsqosserviceflowprimary.yfilter)
	|| ydk::is_set(docsqosserviceflowactivetimeout.yfilter)
	|| ydk::is_set(docsqosserviceflowadmittedtimeout.yfilter)
	|| ydk::is_set(docsqosserviceflowschedulingtype.yfilter)
	|| ydk::is_set(docsqosserviceflowrequestpolicy.yfilter)
	|| ydk::is_set(docsqosserviceflowtosandmask.yfilter)
	|| ydk::is_set(docsqosserviceflowtosormask.yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosServiceFlowTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceFlowEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosserviceflowid, "docsQosServiceFlowId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosserviceflowid.is_set || is_set(docsqosserviceflowid.yfilter)) leaf_name_data.push_back(docsqosserviceflowid.get_name_leafdata());
    if (docsqosserviceflowprovisionedparamsetindex.is_set || is_set(docsqosserviceflowprovisionedparamsetindex.yfilter)) leaf_name_data.push_back(docsqosserviceflowprovisionedparamsetindex.get_name_leafdata());
    if (docsqosserviceflowadmittedparamsetindex.is_set || is_set(docsqosserviceflowadmittedparamsetindex.yfilter)) leaf_name_data.push_back(docsqosserviceflowadmittedparamsetindex.get_name_leafdata());
    if (docsqosserviceflowactiveparamsetindex.is_set || is_set(docsqosserviceflowactiveparamsetindex.yfilter)) leaf_name_data.push_back(docsqosserviceflowactiveparamsetindex.get_name_leafdata());
    if (docsqosserviceflowsid.is_set || is_set(docsqosserviceflowsid.yfilter)) leaf_name_data.push_back(docsqosserviceflowsid.get_name_leafdata());
    if (docsqosserviceflowdirection.is_set || is_set(docsqosserviceflowdirection.yfilter)) leaf_name_data.push_back(docsqosserviceflowdirection.get_name_leafdata());
    if (docsqosserviceflowprimary.is_set || is_set(docsqosserviceflowprimary.yfilter)) leaf_name_data.push_back(docsqosserviceflowprimary.get_name_leafdata());
    if (docsqosserviceflowactivetimeout.is_set || is_set(docsqosserviceflowactivetimeout.yfilter)) leaf_name_data.push_back(docsqosserviceflowactivetimeout.get_name_leafdata());
    if (docsqosserviceflowadmittedtimeout.is_set || is_set(docsqosserviceflowadmittedtimeout.yfilter)) leaf_name_data.push_back(docsqosserviceflowadmittedtimeout.get_name_leafdata());
    if (docsqosserviceflowschedulingtype.is_set || is_set(docsqosserviceflowschedulingtype.yfilter)) leaf_name_data.push_back(docsqosserviceflowschedulingtype.get_name_leafdata());
    if (docsqosserviceflowrequestpolicy.is_set || is_set(docsqosserviceflowrequestpolicy.yfilter)) leaf_name_data.push_back(docsqosserviceflowrequestpolicy.get_name_leafdata());
    if (docsqosserviceflowtosandmask.is_set || is_set(docsqosserviceflowtosandmask.yfilter)) leaf_name_data.push_back(docsqosserviceflowtosandmask.get_name_leafdata());
    if (docsqosserviceflowtosormask.is_set || is_set(docsqosserviceflowtosormask.yfilter)) leaf_name_data.push_back(docsqosserviceflowtosormask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid = value;
        docsqosserviceflowid.value_namespace = name_space;
        docsqosserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowProvisionedParamSetIndex")
    {
        docsqosserviceflowprovisionedparamsetindex = value;
        docsqosserviceflowprovisionedparamsetindex.value_namespace = name_space;
        docsqosserviceflowprovisionedparamsetindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowAdmittedParamSetIndex")
    {
        docsqosserviceflowadmittedparamsetindex = value;
        docsqosserviceflowadmittedparamsetindex.value_namespace = name_space;
        docsqosserviceflowadmittedparamsetindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowActiveParamSetIndex")
    {
        docsqosserviceflowactiveparamsetindex = value;
        docsqosserviceflowactiveparamsetindex.value_namespace = name_space;
        docsqosserviceflowactiveparamsetindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowSID")
    {
        docsqosserviceflowsid = value;
        docsqosserviceflowsid.value_namespace = name_space;
        docsqosserviceflowsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowDirection")
    {
        docsqosserviceflowdirection = value;
        docsqosserviceflowdirection.value_namespace = name_space;
        docsqosserviceflowdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowPrimary")
    {
        docsqosserviceflowprimary = value;
        docsqosserviceflowprimary.value_namespace = name_space;
        docsqosserviceflowprimary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowActiveTimeout")
    {
        docsqosserviceflowactivetimeout = value;
        docsqosserviceflowactivetimeout.value_namespace = name_space;
        docsqosserviceflowactivetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowAdmittedTimeout")
    {
        docsqosserviceflowadmittedtimeout = value;
        docsqosserviceflowadmittedtimeout.value_namespace = name_space;
        docsqosserviceflowadmittedtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowSchedulingType")
    {
        docsqosserviceflowschedulingtype = value;
        docsqosserviceflowschedulingtype.value_namespace = name_space;
        docsqosserviceflowschedulingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowRequestPolicy")
    {
        docsqosserviceflowrequestpolicy = value;
        docsqosserviceflowrequestpolicy.value_namespace = name_space;
        docsqosserviceflowrequestpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowTosAndMask")
    {
        docsqosserviceflowtosandmask = value;
        docsqosserviceflowtosandmask.value_namespace = name_space;
        docsqosserviceflowtosandmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowTosOrMask")
    {
        docsqosserviceflowtosormask = value;
        docsqosserviceflowtosormask.value_namespace = name_space;
        docsqosserviceflowtosormask.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowProvisionedParamSetIndex")
    {
        docsqosserviceflowprovisionedparamsetindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowAdmittedParamSetIndex")
    {
        docsqosserviceflowadmittedparamsetindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowActiveParamSetIndex")
    {
        docsqosserviceflowactiveparamsetindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowSID")
    {
        docsqosserviceflowsid.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowDirection")
    {
        docsqosserviceflowdirection.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowPrimary")
    {
        docsqosserviceflowprimary.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowActiveTimeout")
    {
        docsqosserviceflowactivetimeout.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowAdmittedTimeout")
    {
        docsqosserviceflowadmittedtimeout.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowSchedulingType")
    {
        docsqosserviceflowschedulingtype.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowRequestPolicy")
    {
        docsqosserviceflowrequestpolicy.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowTosAndMask")
    {
        docsqosserviceflowtosandmask.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowTosOrMask")
    {
        docsqosserviceflowtosormask.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosServiceFlowTable::DocsQosServiceFlowEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosServiceFlowId" || name == "docsQosServiceFlowProvisionedParamSetIndex" || name == "docsQosServiceFlowAdmittedParamSetIndex" || name == "docsQosServiceFlowActiveParamSetIndex" || name == "docsQosServiceFlowSID" || name == "docsQosServiceFlowDirection" || name == "docsQosServiceFlowPrimary" || name == "docsQosServiceFlowActiveTimeout" || name == "docsQosServiceFlowAdmittedTimeout" || name == "docsQosServiceFlowSchedulingType" || name == "docsQosServiceFlowRequestPolicy" || name == "docsQosServiceFlowTosAndMask" || name == "docsQosServiceFlowTosOrMask")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsTable()
    :
    docsqosserviceflowstatsentry(this, {"ifindex", "docsqosserviceflowid"})
{

    yang_name = "docsQosServiceFlowStatsTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceFlowStatsTable::~DocsQosServiceFlowStatsTable()
{
}

bool DOCSQOSMIB::DocsQosServiceFlowStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosserviceflowstatsentry.len(); index++)
    {
        if(docsqosserviceflowstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosServiceFlowStatsTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosserviceflowstatsentry.len(); index++)
    {
        if(docsqosserviceflowstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceFlowStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceFlowStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceFlowStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceFlowStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceFlowStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosServiceFlowStatsEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry>();
        ent_->parent = this;
        docsqosserviceflowstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceFlowStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosserviceflowstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosServiceFlowStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosServiceFlowStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosServiceFlowStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceFlowStatsEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::DocsQosServiceFlowStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosserviceflowid{YType::str, "docsQosServiceFlowId"},
    docsqosserviceflowpkts{YType::uint32, "docsQosServiceFlowPkts"},
    docsqosserviceflowoctets{YType::uint32, "docsQosServiceFlowOctets"},
    docsqosserviceflowtimecreated{YType::uint32, "docsQosServiceFlowTimeCreated"},
    docsqosserviceflowtimeactive{YType::uint32, "docsQosServiceFlowTimeActive"},
    docsqosserviceflowphsunknowns{YType::uint32, "docsQosServiceFlowPHSUnknowns"},
    docsqosserviceflowpoliceddroppkts{YType::uint32, "docsQosServiceFlowPolicedDropPkts"},
    docsqosserviceflowpoliceddelaypkts{YType::uint32, "docsQosServiceFlowPolicedDelayPkts"}
{

    yang_name = "docsQosServiceFlowStatsEntry"; yang_parent_name = "docsQosServiceFlowStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::~DocsQosServiceFlowStatsEntry()
{
}

bool DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosserviceflowid.is_set
	|| docsqosserviceflowpkts.is_set
	|| docsqosserviceflowoctets.is_set
	|| docsqosserviceflowtimecreated.is_set
	|| docsqosserviceflowtimeactive.is_set
	|| docsqosserviceflowphsunknowns.is_set
	|| docsqosserviceflowpoliceddroppkts.is_set
	|| docsqosserviceflowpoliceddelaypkts.is_set;
}

bool DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowid.yfilter)
	|| ydk::is_set(docsqosserviceflowpkts.yfilter)
	|| ydk::is_set(docsqosserviceflowoctets.yfilter)
	|| ydk::is_set(docsqosserviceflowtimecreated.yfilter)
	|| ydk::is_set(docsqosserviceflowtimeactive.yfilter)
	|| ydk::is_set(docsqosserviceflowphsunknowns.yfilter)
	|| ydk::is_set(docsqosserviceflowpoliceddroppkts.yfilter)
	|| ydk::is_set(docsqosserviceflowpoliceddelaypkts.yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosServiceFlowStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceFlowStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosserviceflowid, "docsQosServiceFlowId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosserviceflowid.is_set || is_set(docsqosserviceflowid.yfilter)) leaf_name_data.push_back(docsqosserviceflowid.get_name_leafdata());
    if (docsqosserviceflowpkts.is_set || is_set(docsqosserviceflowpkts.yfilter)) leaf_name_data.push_back(docsqosserviceflowpkts.get_name_leafdata());
    if (docsqosserviceflowoctets.is_set || is_set(docsqosserviceflowoctets.yfilter)) leaf_name_data.push_back(docsqosserviceflowoctets.get_name_leafdata());
    if (docsqosserviceflowtimecreated.is_set || is_set(docsqosserviceflowtimecreated.yfilter)) leaf_name_data.push_back(docsqosserviceflowtimecreated.get_name_leafdata());
    if (docsqosserviceflowtimeactive.is_set || is_set(docsqosserviceflowtimeactive.yfilter)) leaf_name_data.push_back(docsqosserviceflowtimeactive.get_name_leafdata());
    if (docsqosserviceflowphsunknowns.is_set || is_set(docsqosserviceflowphsunknowns.yfilter)) leaf_name_data.push_back(docsqosserviceflowphsunknowns.get_name_leafdata());
    if (docsqosserviceflowpoliceddroppkts.is_set || is_set(docsqosserviceflowpoliceddroppkts.yfilter)) leaf_name_data.push_back(docsqosserviceflowpoliceddroppkts.get_name_leafdata());
    if (docsqosserviceflowpoliceddelaypkts.is_set || is_set(docsqosserviceflowpoliceddelaypkts.yfilter)) leaf_name_data.push_back(docsqosserviceflowpoliceddelaypkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid = value;
        docsqosserviceflowid.value_namespace = name_space;
        docsqosserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowPkts")
    {
        docsqosserviceflowpkts = value;
        docsqosserviceflowpkts.value_namespace = name_space;
        docsqosserviceflowpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowOctets")
    {
        docsqosserviceflowoctets = value;
        docsqosserviceflowoctets.value_namespace = name_space;
        docsqosserviceflowoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowTimeCreated")
    {
        docsqosserviceflowtimecreated = value;
        docsqosserviceflowtimecreated.value_namespace = name_space;
        docsqosserviceflowtimecreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowTimeActive")
    {
        docsqosserviceflowtimeactive = value;
        docsqosserviceflowtimeactive.value_namespace = name_space;
        docsqosserviceflowtimeactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowPHSUnknowns")
    {
        docsqosserviceflowphsunknowns = value;
        docsqosserviceflowphsunknowns.value_namespace = name_space;
        docsqosserviceflowphsunknowns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowPolicedDropPkts")
    {
        docsqosserviceflowpoliceddroppkts = value;
        docsqosserviceflowpoliceddroppkts.value_namespace = name_space;
        docsqosserviceflowpoliceddroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowPolicedDelayPkts")
    {
        docsqosserviceflowpoliceddelaypkts = value;
        docsqosserviceflowpoliceddelaypkts.value_namespace = name_space;
        docsqosserviceflowpoliceddelaypkts.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowPkts")
    {
        docsqosserviceflowpkts.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowOctets")
    {
        docsqosserviceflowoctets.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowTimeCreated")
    {
        docsqosserviceflowtimecreated.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowTimeActive")
    {
        docsqosserviceflowtimeactive.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowPHSUnknowns")
    {
        docsqosserviceflowphsunknowns.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowPolicedDropPkts")
    {
        docsqosserviceflowpoliceddroppkts.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowPolicedDelayPkts")
    {
        docsqosserviceflowpoliceddelaypkts.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosServiceFlowStatsTable::DocsQosServiceFlowStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosServiceFlowId" || name == "docsQosServiceFlowPkts" || name == "docsQosServiceFlowOctets" || name == "docsQosServiceFlowTimeCreated" || name == "docsQosServiceFlowTimeActive" || name == "docsQosServiceFlowPHSUnknowns" || name == "docsQosServiceFlowPolicedDropPkts" || name == "docsQosServiceFlowPolicedDelayPkts")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsTable()
    :
    docsqosupstreamstatsentry(this, {"ifindex", "docsqossid"})
{

    yang_name = "docsQosUpstreamStatsTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosUpstreamStatsTable::~DocsQosUpstreamStatsTable()
{
}

bool DOCSQOSMIB::DocsQosUpstreamStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosupstreamstatsentry.len(); index++)
    {
        if(docsqosupstreamstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosUpstreamStatsTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosupstreamstatsentry.len(); index++)
    {
        if(docsqosupstreamstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosUpstreamStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosUpstreamStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosUpstreamStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosUpstreamStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosUpstreamStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosUpstreamStatsEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry>();
        ent_->parent = this;
        docsqosupstreamstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosUpstreamStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosupstreamstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosUpstreamStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosUpstreamStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosUpstreamStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosUpstreamStatsEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::DocsQosUpstreamStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqossid{YType::int32, "docsQosSID"},
    docsqosupstreamfragments{YType::uint32, "docsQosUpstreamFragments"},
    docsqosupstreamfragdiscards{YType::uint32, "docsQosUpstreamFragDiscards"},
    docsqosupstreamconcatbursts{YType::uint32, "docsQosUpstreamConcatBursts"}
{

    yang_name = "docsQosUpstreamStatsEntry"; yang_parent_name = "docsQosUpstreamStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::~DocsQosUpstreamStatsEntry()
{
}

bool DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqossid.is_set
	|| docsqosupstreamfragments.is_set
	|| docsqosupstreamfragdiscards.is_set
	|| docsqosupstreamconcatbursts.is_set;
}

bool DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqossid.yfilter)
	|| ydk::is_set(docsqosupstreamfragments.yfilter)
	|| ydk::is_set(docsqosupstreamfragdiscards.yfilter)
	|| ydk::is_set(docsqosupstreamconcatbursts.yfilter);
}

std::string DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosUpstreamStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosUpstreamStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqossid, "docsQosSID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqossid.is_set || is_set(docsqossid.yfilter)) leaf_name_data.push_back(docsqossid.get_name_leafdata());
    if (docsqosupstreamfragments.is_set || is_set(docsqosupstreamfragments.yfilter)) leaf_name_data.push_back(docsqosupstreamfragments.get_name_leafdata());
    if (docsqosupstreamfragdiscards.is_set || is_set(docsqosupstreamfragdiscards.yfilter)) leaf_name_data.push_back(docsqosupstreamfragdiscards.get_name_leafdata());
    if (docsqosupstreamconcatbursts.is_set || is_set(docsqosupstreamconcatbursts.yfilter)) leaf_name_data.push_back(docsqosupstreamconcatbursts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosSID")
    {
        docsqossid = value;
        docsqossid.value_namespace = name_space;
        docsqossid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosUpstreamFragments")
    {
        docsqosupstreamfragments = value;
        docsqosupstreamfragments.value_namespace = name_space;
        docsqosupstreamfragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosUpstreamFragDiscards")
    {
        docsqosupstreamfragdiscards = value;
        docsqosupstreamfragdiscards.value_namespace = name_space;
        docsqosupstreamfragdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosUpstreamConcatBursts")
    {
        docsqosupstreamconcatbursts = value;
        docsqosupstreamconcatbursts.value_namespace = name_space;
        docsqosupstreamconcatbursts.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosSID")
    {
        docsqossid.yfilter = yfilter;
    }
    if(value_path == "docsQosUpstreamFragments")
    {
        docsqosupstreamfragments.yfilter = yfilter;
    }
    if(value_path == "docsQosUpstreamFragDiscards")
    {
        docsqosupstreamfragdiscards.yfilter = yfilter;
    }
    if(value_path == "docsQosUpstreamConcatBursts")
    {
        docsqosupstreamconcatbursts.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosUpstreamStatsTable::DocsQosUpstreamStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosSID" || name == "docsQosUpstreamFragments" || name == "docsQosUpstreamFragDiscards" || name == "docsQosUpstreamConcatBursts")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsTable()
    :
    docsqosdynamicservicestatsentry(this, {"ifindex", "docsqosifdirection"})
{

    yang_name = "docsQosDynamicServiceStatsTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosDynamicServiceStatsTable::~DocsQosDynamicServiceStatsTable()
{
}

bool DOCSQOSMIB::DocsQosDynamicServiceStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosdynamicservicestatsentry.len(); index++)
    {
        if(docsqosdynamicservicestatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosDynamicServiceStatsTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosdynamicservicestatsentry.len(); index++)
    {
        if(docsqosdynamicservicestatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosDynamicServiceStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosDynamicServiceStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosDynamicServiceStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosDynamicServiceStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosDynamicServiceStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosDynamicServiceStatsEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry>();
        ent_->parent = this;
        docsqosdynamicservicestatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosDynamicServiceStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosdynamicservicestatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosDynamicServiceStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosDynamicServiceStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosDynamicServiceStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosDynamicServiceStatsEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::DocsQosDynamicServiceStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosifdirection{YType::enumeration, "docsQosIfDirection"},
    docsqosdsareqs{YType::uint32, "docsQosDSAReqs"},
    docsqosdsarsps{YType::uint32, "docsQosDSARsps"},
    docsqosdsaacks{YType::uint32, "docsQosDSAAcks"},
    docsqosdscreqs{YType::uint32, "docsQosDSCReqs"},
    docsqosdscrsps{YType::uint32, "docsQosDSCRsps"},
    docsqosdscacks{YType::uint32, "docsQosDSCAcks"},
    docsqosdsdreqs{YType::uint32, "docsQosDSDReqs"},
    docsqosdsdrsps{YType::uint32, "docsQosDSDRsps"},
    docsqosdynamicadds{YType::uint32, "docsQosDynamicAdds"},
    docsqosdynamicaddfails{YType::uint32, "docsQosDynamicAddFails"},
    docsqosdynamicchanges{YType::uint32, "docsQosDynamicChanges"},
    docsqosdynamicchangefails{YType::uint32, "docsQosDynamicChangeFails"},
    docsqosdynamicdeletes{YType::uint32, "docsQosDynamicDeletes"},
    docsqosdynamicdeletefails{YType::uint32, "docsQosDynamicDeleteFails"},
    docsqosdccreqs{YType::uint32, "docsQosDCCReqs"},
    docsqosdccrsps{YType::uint32, "docsQosDCCRsps"},
    docsqosdccacks{YType::uint32, "docsQosDCCAcks"},
    docsqosdccs{YType::uint32, "docsQosDCCs"},
    docsqosdccfails{YType::uint32, "docsQosDCCFails"},
    docsqosdccrspdeparts{YType::uint32, "docsQosDCCRspDeparts"},
    docsqosdccrsparrives{YType::uint32, "docsQosDCCRspArrives"}
{

    yang_name = "docsQosDynamicServiceStatsEntry"; yang_parent_name = "docsQosDynamicServiceStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::~DocsQosDynamicServiceStatsEntry()
{
}

bool DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosifdirection.is_set
	|| docsqosdsareqs.is_set
	|| docsqosdsarsps.is_set
	|| docsqosdsaacks.is_set
	|| docsqosdscreqs.is_set
	|| docsqosdscrsps.is_set
	|| docsqosdscacks.is_set
	|| docsqosdsdreqs.is_set
	|| docsqosdsdrsps.is_set
	|| docsqosdynamicadds.is_set
	|| docsqosdynamicaddfails.is_set
	|| docsqosdynamicchanges.is_set
	|| docsqosdynamicchangefails.is_set
	|| docsqosdynamicdeletes.is_set
	|| docsqosdynamicdeletefails.is_set
	|| docsqosdccreqs.is_set
	|| docsqosdccrsps.is_set
	|| docsqosdccacks.is_set
	|| docsqosdccs.is_set
	|| docsqosdccfails.is_set
	|| docsqosdccrspdeparts.is_set
	|| docsqosdccrsparrives.is_set;
}

bool DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosifdirection.yfilter)
	|| ydk::is_set(docsqosdsareqs.yfilter)
	|| ydk::is_set(docsqosdsarsps.yfilter)
	|| ydk::is_set(docsqosdsaacks.yfilter)
	|| ydk::is_set(docsqosdscreqs.yfilter)
	|| ydk::is_set(docsqosdscrsps.yfilter)
	|| ydk::is_set(docsqosdscacks.yfilter)
	|| ydk::is_set(docsqosdsdreqs.yfilter)
	|| ydk::is_set(docsqosdsdrsps.yfilter)
	|| ydk::is_set(docsqosdynamicadds.yfilter)
	|| ydk::is_set(docsqosdynamicaddfails.yfilter)
	|| ydk::is_set(docsqosdynamicchanges.yfilter)
	|| ydk::is_set(docsqosdynamicchangefails.yfilter)
	|| ydk::is_set(docsqosdynamicdeletes.yfilter)
	|| ydk::is_set(docsqosdynamicdeletefails.yfilter)
	|| ydk::is_set(docsqosdccreqs.yfilter)
	|| ydk::is_set(docsqosdccrsps.yfilter)
	|| ydk::is_set(docsqosdccacks.yfilter)
	|| ydk::is_set(docsqosdccs.yfilter)
	|| ydk::is_set(docsqosdccfails.yfilter)
	|| ydk::is_set(docsqosdccrspdeparts.yfilter)
	|| ydk::is_set(docsqosdccrsparrives.yfilter);
}

std::string DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosDynamicServiceStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosDynamicServiceStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosifdirection, "docsQosIfDirection");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosifdirection.is_set || is_set(docsqosifdirection.yfilter)) leaf_name_data.push_back(docsqosifdirection.get_name_leafdata());
    if (docsqosdsareqs.is_set || is_set(docsqosdsareqs.yfilter)) leaf_name_data.push_back(docsqosdsareqs.get_name_leafdata());
    if (docsqosdsarsps.is_set || is_set(docsqosdsarsps.yfilter)) leaf_name_data.push_back(docsqosdsarsps.get_name_leafdata());
    if (docsqosdsaacks.is_set || is_set(docsqosdsaacks.yfilter)) leaf_name_data.push_back(docsqosdsaacks.get_name_leafdata());
    if (docsqosdscreqs.is_set || is_set(docsqosdscreqs.yfilter)) leaf_name_data.push_back(docsqosdscreqs.get_name_leafdata());
    if (docsqosdscrsps.is_set || is_set(docsqosdscrsps.yfilter)) leaf_name_data.push_back(docsqosdscrsps.get_name_leafdata());
    if (docsqosdscacks.is_set || is_set(docsqosdscacks.yfilter)) leaf_name_data.push_back(docsqosdscacks.get_name_leafdata());
    if (docsqosdsdreqs.is_set || is_set(docsqosdsdreqs.yfilter)) leaf_name_data.push_back(docsqosdsdreqs.get_name_leafdata());
    if (docsqosdsdrsps.is_set || is_set(docsqosdsdrsps.yfilter)) leaf_name_data.push_back(docsqosdsdrsps.get_name_leafdata());
    if (docsqosdynamicadds.is_set || is_set(docsqosdynamicadds.yfilter)) leaf_name_data.push_back(docsqosdynamicadds.get_name_leafdata());
    if (docsqosdynamicaddfails.is_set || is_set(docsqosdynamicaddfails.yfilter)) leaf_name_data.push_back(docsqosdynamicaddfails.get_name_leafdata());
    if (docsqosdynamicchanges.is_set || is_set(docsqosdynamicchanges.yfilter)) leaf_name_data.push_back(docsqosdynamicchanges.get_name_leafdata());
    if (docsqosdynamicchangefails.is_set || is_set(docsqosdynamicchangefails.yfilter)) leaf_name_data.push_back(docsqosdynamicchangefails.get_name_leafdata());
    if (docsqosdynamicdeletes.is_set || is_set(docsqosdynamicdeletes.yfilter)) leaf_name_data.push_back(docsqosdynamicdeletes.get_name_leafdata());
    if (docsqosdynamicdeletefails.is_set || is_set(docsqosdynamicdeletefails.yfilter)) leaf_name_data.push_back(docsqosdynamicdeletefails.get_name_leafdata());
    if (docsqosdccreqs.is_set || is_set(docsqosdccreqs.yfilter)) leaf_name_data.push_back(docsqosdccreqs.get_name_leafdata());
    if (docsqosdccrsps.is_set || is_set(docsqosdccrsps.yfilter)) leaf_name_data.push_back(docsqosdccrsps.get_name_leafdata());
    if (docsqosdccacks.is_set || is_set(docsqosdccacks.yfilter)) leaf_name_data.push_back(docsqosdccacks.get_name_leafdata());
    if (docsqosdccs.is_set || is_set(docsqosdccs.yfilter)) leaf_name_data.push_back(docsqosdccs.get_name_leafdata());
    if (docsqosdccfails.is_set || is_set(docsqosdccfails.yfilter)) leaf_name_data.push_back(docsqosdccfails.get_name_leafdata());
    if (docsqosdccrspdeparts.is_set || is_set(docsqosdccrspdeparts.yfilter)) leaf_name_data.push_back(docsqosdccrspdeparts.get_name_leafdata());
    if (docsqosdccrsparrives.is_set || is_set(docsqosdccrsparrives.yfilter)) leaf_name_data.push_back(docsqosdccrsparrives.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosIfDirection")
    {
        docsqosifdirection = value;
        docsqosifdirection.value_namespace = name_space;
        docsqosifdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSAReqs")
    {
        docsqosdsareqs = value;
        docsqosdsareqs.value_namespace = name_space;
        docsqosdsareqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSARsps")
    {
        docsqosdsarsps = value;
        docsqosdsarsps.value_namespace = name_space;
        docsqosdsarsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSAAcks")
    {
        docsqosdsaacks = value;
        docsqosdsaacks.value_namespace = name_space;
        docsqosdsaacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSCReqs")
    {
        docsqosdscreqs = value;
        docsqosdscreqs.value_namespace = name_space;
        docsqosdscreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSCRsps")
    {
        docsqosdscrsps = value;
        docsqosdscrsps.value_namespace = name_space;
        docsqosdscrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSCAcks")
    {
        docsqosdscacks = value;
        docsqosdscacks.value_namespace = name_space;
        docsqosdscacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSDReqs")
    {
        docsqosdsdreqs = value;
        docsqosdsdreqs.value_namespace = name_space;
        docsqosdsdreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDSDRsps")
    {
        docsqosdsdrsps = value;
        docsqosdsdrsps.value_namespace = name_space;
        docsqosdsdrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDynamicAdds")
    {
        docsqosdynamicadds = value;
        docsqosdynamicadds.value_namespace = name_space;
        docsqosdynamicadds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDynamicAddFails")
    {
        docsqosdynamicaddfails = value;
        docsqosdynamicaddfails.value_namespace = name_space;
        docsqosdynamicaddfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDynamicChanges")
    {
        docsqosdynamicchanges = value;
        docsqosdynamicchanges.value_namespace = name_space;
        docsqosdynamicchanges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDynamicChangeFails")
    {
        docsqosdynamicchangefails = value;
        docsqosdynamicchangefails.value_namespace = name_space;
        docsqosdynamicchangefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDynamicDeletes")
    {
        docsqosdynamicdeletes = value;
        docsqosdynamicdeletes.value_namespace = name_space;
        docsqosdynamicdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDynamicDeleteFails")
    {
        docsqosdynamicdeletefails = value;
        docsqosdynamicdeletefails.value_namespace = name_space;
        docsqosdynamicdeletefails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDCCReqs")
    {
        docsqosdccreqs = value;
        docsqosdccreqs.value_namespace = name_space;
        docsqosdccreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDCCRsps")
    {
        docsqosdccrsps = value;
        docsqosdccrsps.value_namespace = name_space;
        docsqosdccrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDCCAcks")
    {
        docsqosdccacks = value;
        docsqosdccacks.value_namespace = name_space;
        docsqosdccacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDCCs")
    {
        docsqosdccs = value;
        docsqosdccs.value_namespace = name_space;
        docsqosdccs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDCCFails")
    {
        docsqosdccfails = value;
        docsqosdccfails.value_namespace = name_space;
        docsqosdccfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDCCRspDeparts")
    {
        docsqosdccrspdeparts = value;
        docsqosdccrspdeparts.value_namespace = name_space;
        docsqosdccrspdeparts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosDCCRspArrives")
    {
        docsqosdccrsparrives = value;
        docsqosdccrsparrives.value_namespace = name_space;
        docsqosdccrsparrives.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosIfDirection")
    {
        docsqosifdirection.yfilter = yfilter;
    }
    if(value_path == "docsQosDSAReqs")
    {
        docsqosdsareqs.yfilter = yfilter;
    }
    if(value_path == "docsQosDSARsps")
    {
        docsqosdsarsps.yfilter = yfilter;
    }
    if(value_path == "docsQosDSAAcks")
    {
        docsqosdsaacks.yfilter = yfilter;
    }
    if(value_path == "docsQosDSCReqs")
    {
        docsqosdscreqs.yfilter = yfilter;
    }
    if(value_path == "docsQosDSCRsps")
    {
        docsqosdscrsps.yfilter = yfilter;
    }
    if(value_path == "docsQosDSCAcks")
    {
        docsqosdscacks.yfilter = yfilter;
    }
    if(value_path == "docsQosDSDReqs")
    {
        docsqosdsdreqs.yfilter = yfilter;
    }
    if(value_path == "docsQosDSDRsps")
    {
        docsqosdsdrsps.yfilter = yfilter;
    }
    if(value_path == "docsQosDynamicAdds")
    {
        docsqosdynamicadds.yfilter = yfilter;
    }
    if(value_path == "docsQosDynamicAddFails")
    {
        docsqosdynamicaddfails.yfilter = yfilter;
    }
    if(value_path == "docsQosDynamicChanges")
    {
        docsqosdynamicchanges.yfilter = yfilter;
    }
    if(value_path == "docsQosDynamicChangeFails")
    {
        docsqosdynamicchangefails.yfilter = yfilter;
    }
    if(value_path == "docsQosDynamicDeletes")
    {
        docsqosdynamicdeletes.yfilter = yfilter;
    }
    if(value_path == "docsQosDynamicDeleteFails")
    {
        docsqosdynamicdeletefails.yfilter = yfilter;
    }
    if(value_path == "docsQosDCCReqs")
    {
        docsqosdccreqs.yfilter = yfilter;
    }
    if(value_path == "docsQosDCCRsps")
    {
        docsqosdccrsps.yfilter = yfilter;
    }
    if(value_path == "docsQosDCCAcks")
    {
        docsqosdccacks.yfilter = yfilter;
    }
    if(value_path == "docsQosDCCs")
    {
        docsqosdccs.yfilter = yfilter;
    }
    if(value_path == "docsQosDCCFails")
    {
        docsqosdccfails.yfilter = yfilter;
    }
    if(value_path == "docsQosDCCRspDeparts")
    {
        docsqosdccrspdeparts.yfilter = yfilter;
    }
    if(value_path == "docsQosDCCRspArrives")
    {
        docsqosdccrsparrives.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosDynamicServiceStatsTable::DocsQosDynamicServiceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosIfDirection" || name == "docsQosDSAReqs" || name == "docsQosDSARsps" || name == "docsQosDSAAcks" || name == "docsQosDSCReqs" || name == "docsQosDSCRsps" || name == "docsQosDSCAcks" || name == "docsQosDSDReqs" || name == "docsQosDSDRsps" || name == "docsQosDynamicAdds" || name == "docsQosDynamicAddFails" || name == "docsQosDynamicChanges" || name == "docsQosDynamicChangeFails" || name == "docsQosDynamicDeletes" || name == "docsQosDynamicDeleteFails" || name == "docsQosDCCReqs" || name == "docsQosDCCRsps" || name == "docsQosDCCAcks" || name == "docsQosDCCs" || name == "docsQosDCCFails" || name == "docsQosDCCRspDeparts" || name == "docsQosDCCRspArrives")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogTable()
    :
    docsqosserviceflowlogentry(this, {"docsqosserviceflowlogindex"})
{

    yang_name = "docsQosServiceFlowLogTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceFlowLogTable::~DocsQosServiceFlowLogTable()
{
}

bool DOCSQOSMIB::DocsQosServiceFlowLogTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosserviceflowlogentry.len(); index++)
    {
        if(docsqosserviceflowlogentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosServiceFlowLogTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosserviceflowlogentry.len(); index++)
    {
        if(docsqosserviceflowlogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceFlowLogTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceFlowLogTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceFlowLogTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceFlowLogTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceFlowLogTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosServiceFlowLogEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry>();
        ent_->parent = this;
        docsqosserviceflowlogentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceFlowLogTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosserviceflowlogentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosServiceFlowLogTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosServiceFlowLogTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosServiceFlowLogTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceFlowLogEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::DocsQosServiceFlowLogEntry()
    :
    docsqosserviceflowlogindex{YType::uint32, "docsQosServiceFlowLogIndex"},
    docsqosserviceflowlogifindex{YType::int32, "docsQosServiceFlowLogIfIndex"},
    docsqosserviceflowlogsfid{YType::uint32, "docsQosServiceFlowLogSFID"},
    docsqosserviceflowlogcmmac{YType::str, "docsQosServiceFlowLogCmMac"},
    docsqosserviceflowlogpkts{YType::uint32, "docsQosServiceFlowLogPkts"},
    docsqosserviceflowlogoctets{YType::uint32, "docsQosServiceFlowLogOctets"},
    docsqosserviceflowlogtimedeleted{YType::uint32, "docsQosServiceFlowLogTimeDeleted"},
    docsqosserviceflowlogtimecreated{YType::uint32, "docsQosServiceFlowLogTimeCreated"},
    docsqosserviceflowlogtimeactive{YType::uint32, "docsQosServiceFlowLogTimeActive"},
    docsqosserviceflowlogdirection{YType::enumeration, "docsQosServiceFlowLogDirection"},
    docsqosserviceflowlogprimary{YType::boolean, "docsQosServiceFlowLogPrimary"},
    docsqosserviceflowlogserviceclassname{YType::str, "docsQosServiceFlowLogServiceClassName"},
    docsqosserviceflowlogpoliceddroppkts{YType::uint32, "docsQosServiceFlowLogPolicedDropPkts"},
    docsqosserviceflowlogpoliceddelaypkts{YType::uint32, "docsQosServiceFlowLogPolicedDelayPkts"},
    docsqosserviceflowlogcontrol{YType::enumeration, "docsQosServiceFlowLogControl"}
{

    yang_name = "docsQosServiceFlowLogEntry"; yang_parent_name = "docsQosServiceFlowLogTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::~DocsQosServiceFlowLogEntry()
{
}

bool DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsqosserviceflowlogindex.is_set
	|| docsqosserviceflowlogifindex.is_set
	|| docsqosserviceflowlogsfid.is_set
	|| docsqosserviceflowlogcmmac.is_set
	|| docsqosserviceflowlogpkts.is_set
	|| docsqosserviceflowlogoctets.is_set
	|| docsqosserviceflowlogtimedeleted.is_set
	|| docsqosserviceflowlogtimecreated.is_set
	|| docsqosserviceflowlogtimeactive.is_set
	|| docsqosserviceflowlogdirection.is_set
	|| docsqosserviceflowlogprimary.is_set
	|| docsqosserviceflowlogserviceclassname.is_set
	|| docsqosserviceflowlogpoliceddroppkts.is_set
	|| docsqosserviceflowlogpoliceddelaypkts.is_set
	|| docsqosserviceflowlogcontrol.is_set;
}

bool DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsqosserviceflowlogindex.yfilter)
	|| ydk::is_set(docsqosserviceflowlogifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowlogsfid.yfilter)
	|| ydk::is_set(docsqosserviceflowlogcmmac.yfilter)
	|| ydk::is_set(docsqosserviceflowlogpkts.yfilter)
	|| ydk::is_set(docsqosserviceflowlogoctets.yfilter)
	|| ydk::is_set(docsqosserviceflowlogtimedeleted.yfilter)
	|| ydk::is_set(docsqosserviceflowlogtimecreated.yfilter)
	|| ydk::is_set(docsqosserviceflowlogtimeactive.yfilter)
	|| ydk::is_set(docsqosserviceflowlogdirection.yfilter)
	|| ydk::is_set(docsqosserviceflowlogprimary.yfilter)
	|| ydk::is_set(docsqosserviceflowlogserviceclassname.yfilter)
	|| ydk::is_set(docsqosserviceflowlogpoliceddroppkts.yfilter)
	|| ydk::is_set(docsqosserviceflowlogpoliceddelaypkts.yfilter)
	|| ydk::is_set(docsqosserviceflowlogcontrol.yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosServiceFlowLogTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceFlowLogEntry";
    ADD_KEY_TOKEN(docsqosserviceflowlogindex, "docsQosServiceFlowLogIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsqosserviceflowlogindex.is_set || is_set(docsqosserviceflowlogindex.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogindex.get_name_leafdata());
    if (docsqosserviceflowlogifindex.is_set || is_set(docsqosserviceflowlogifindex.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogifindex.get_name_leafdata());
    if (docsqosserviceflowlogsfid.is_set || is_set(docsqosserviceflowlogsfid.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogsfid.get_name_leafdata());
    if (docsqosserviceflowlogcmmac.is_set || is_set(docsqosserviceflowlogcmmac.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogcmmac.get_name_leafdata());
    if (docsqosserviceflowlogpkts.is_set || is_set(docsqosserviceflowlogpkts.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogpkts.get_name_leafdata());
    if (docsqosserviceflowlogoctets.is_set || is_set(docsqosserviceflowlogoctets.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogoctets.get_name_leafdata());
    if (docsqosserviceflowlogtimedeleted.is_set || is_set(docsqosserviceflowlogtimedeleted.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogtimedeleted.get_name_leafdata());
    if (docsqosserviceflowlogtimecreated.is_set || is_set(docsqosserviceflowlogtimecreated.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogtimecreated.get_name_leafdata());
    if (docsqosserviceflowlogtimeactive.is_set || is_set(docsqosserviceflowlogtimeactive.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogtimeactive.get_name_leafdata());
    if (docsqosserviceflowlogdirection.is_set || is_set(docsqosserviceflowlogdirection.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogdirection.get_name_leafdata());
    if (docsqosserviceflowlogprimary.is_set || is_set(docsqosserviceflowlogprimary.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogprimary.get_name_leafdata());
    if (docsqosserviceflowlogserviceclassname.is_set || is_set(docsqosserviceflowlogserviceclassname.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogserviceclassname.get_name_leafdata());
    if (docsqosserviceflowlogpoliceddroppkts.is_set || is_set(docsqosserviceflowlogpoliceddroppkts.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogpoliceddroppkts.get_name_leafdata());
    if (docsqosserviceflowlogpoliceddelaypkts.is_set || is_set(docsqosserviceflowlogpoliceddelaypkts.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogpoliceddelaypkts.get_name_leafdata());
    if (docsqosserviceflowlogcontrol.is_set || is_set(docsqosserviceflowlogcontrol.yfilter)) leaf_name_data.push_back(docsqosserviceflowlogcontrol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsQosServiceFlowLogIndex")
    {
        docsqosserviceflowlogindex = value;
        docsqosserviceflowlogindex.value_namespace = name_space;
        docsqosserviceflowlogindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogIfIndex")
    {
        docsqosserviceflowlogifindex = value;
        docsqosserviceflowlogifindex.value_namespace = name_space;
        docsqosserviceflowlogifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogSFID")
    {
        docsqosserviceflowlogsfid = value;
        docsqosserviceflowlogsfid.value_namespace = name_space;
        docsqosserviceflowlogsfid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogCmMac")
    {
        docsqosserviceflowlogcmmac = value;
        docsqosserviceflowlogcmmac.value_namespace = name_space;
        docsqosserviceflowlogcmmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogPkts")
    {
        docsqosserviceflowlogpkts = value;
        docsqosserviceflowlogpkts.value_namespace = name_space;
        docsqosserviceflowlogpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogOctets")
    {
        docsqosserviceflowlogoctets = value;
        docsqosserviceflowlogoctets.value_namespace = name_space;
        docsqosserviceflowlogoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogTimeDeleted")
    {
        docsqosserviceflowlogtimedeleted = value;
        docsqosserviceflowlogtimedeleted.value_namespace = name_space;
        docsqosserviceflowlogtimedeleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogTimeCreated")
    {
        docsqosserviceflowlogtimecreated = value;
        docsqosserviceflowlogtimecreated.value_namespace = name_space;
        docsqosserviceflowlogtimecreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogTimeActive")
    {
        docsqosserviceflowlogtimeactive = value;
        docsqosserviceflowlogtimeactive.value_namespace = name_space;
        docsqosserviceflowlogtimeactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogDirection")
    {
        docsqosserviceflowlogdirection = value;
        docsqosserviceflowlogdirection.value_namespace = name_space;
        docsqosserviceflowlogdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogPrimary")
    {
        docsqosserviceflowlogprimary = value;
        docsqosserviceflowlogprimary.value_namespace = name_space;
        docsqosserviceflowlogprimary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogServiceClassName")
    {
        docsqosserviceflowlogserviceclassname = value;
        docsqosserviceflowlogserviceclassname.value_namespace = name_space;
        docsqosserviceflowlogserviceclassname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogPolicedDropPkts")
    {
        docsqosserviceflowlogpoliceddroppkts = value;
        docsqosserviceflowlogpoliceddroppkts.value_namespace = name_space;
        docsqosserviceflowlogpoliceddroppkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogPolicedDelayPkts")
    {
        docsqosserviceflowlogpoliceddelaypkts = value;
        docsqosserviceflowlogpoliceddelaypkts.value_namespace = name_space;
        docsqosserviceflowlogpoliceddelaypkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowLogControl")
    {
        docsqosserviceflowlogcontrol = value;
        docsqosserviceflowlogcontrol.value_namespace = name_space;
        docsqosserviceflowlogcontrol.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsQosServiceFlowLogIndex")
    {
        docsqosserviceflowlogindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogIfIndex")
    {
        docsqosserviceflowlogifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogSFID")
    {
        docsqosserviceflowlogsfid.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogCmMac")
    {
        docsqosserviceflowlogcmmac.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogPkts")
    {
        docsqosserviceflowlogpkts.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogOctets")
    {
        docsqosserviceflowlogoctets.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogTimeDeleted")
    {
        docsqosserviceflowlogtimedeleted.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogTimeCreated")
    {
        docsqosserviceflowlogtimecreated.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogTimeActive")
    {
        docsqosserviceflowlogtimeactive.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogDirection")
    {
        docsqosserviceflowlogdirection.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogPrimary")
    {
        docsqosserviceflowlogprimary.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogServiceClassName")
    {
        docsqosserviceflowlogserviceclassname.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogPolicedDropPkts")
    {
        docsqosserviceflowlogpoliceddroppkts.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogPolicedDelayPkts")
    {
        docsqosserviceflowlogpoliceddelaypkts.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowLogControl")
    {
        docsqosserviceflowlogcontrol.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceFlowLogIndex" || name == "docsQosServiceFlowLogIfIndex" || name == "docsQosServiceFlowLogSFID" || name == "docsQosServiceFlowLogCmMac" || name == "docsQosServiceFlowLogPkts" || name == "docsQosServiceFlowLogOctets" || name == "docsQosServiceFlowLogTimeDeleted" || name == "docsQosServiceFlowLogTimeCreated" || name == "docsQosServiceFlowLogTimeActive" || name == "docsQosServiceFlowLogDirection" || name == "docsQosServiceFlowLogPrimary" || name == "docsQosServiceFlowLogServiceClassName" || name == "docsQosServiceFlowLogPolicedDropPkts" || name == "docsQosServiceFlowLogPolicedDelayPkts" || name == "docsQosServiceFlowLogControl")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassTable()
    :
    docsqosserviceclassentry(this, {"docsqosserviceclassname"})
{

    yang_name = "docsQosServiceClassTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceClassTable::~DocsQosServiceClassTable()
{
}

bool DOCSQOSMIB::DocsQosServiceClassTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosserviceclassentry.len(); index++)
    {
        if(docsqosserviceclassentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosServiceClassTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosserviceclassentry.len(); index++)
    {
        if(docsqosserviceclassentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceClassTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceClassTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceClassTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceClassTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceClassTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosServiceClassEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry>();
        ent_->parent = this;
        docsqosserviceclassentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceClassTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosserviceclassentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosServiceClassTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosServiceClassTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosServiceClassTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceClassEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::DocsQosServiceClassEntry()
    :
    docsqosserviceclassname{YType::str, "docsQosServiceClassName"},
    docsqosserviceclassparamsetindex{YType::uint32, "docsQosServiceClassParamSetIndex"},
    docsqosserviceclassstatus{YType::enumeration, "docsQosServiceClassStatus"},
    docsqosserviceclasspriority{YType::int32, "docsQosServiceClassPriority"},
    docsqosserviceclassmaxtrafficrate{YType::uint32, "docsQosServiceClassMaxTrafficRate"},
    docsqosserviceclassmaxtrafficburst{YType::uint32, "docsQosServiceClassMaxTrafficBurst"},
    docsqosserviceclassminreservedrate{YType::uint32, "docsQosServiceClassMinReservedRate"},
    docsqosserviceclassminreservedpkt{YType::int32, "docsQosServiceClassMinReservedPkt"},
    docsqosserviceclassmaxconcatburst{YType::int32, "docsQosServiceClassMaxConcatBurst"},
    docsqosserviceclassnompollinterval{YType::uint32, "docsQosServiceClassNomPollInterval"},
    docsqosserviceclasstolpolljitter{YType::uint32, "docsQosServiceClassTolPollJitter"},
    docsqosserviceclassunsolicitgrantsize{YType::int32, "docsQosServiceClassUnsolicitGrantSize"},
    docsqosserviceclassnomgrantinterval{YType::uint32, "docsQosServiceClassNomGrantInterval"},
    docsqosserviceclasstolgrantjitter{YType::uint32, "docsQosServiceClassTolGrantJitter"},
    docsqosserviceclassgrantsperinterval{YType::int32, "docsQosServiceClassGrantsPerInterval"},
    docsqosserviceclassmaxlatency{YType::uint32, "docsQosServiceClassMaxLatency"},
    docsqosserviceclassactivetimeout{YType::int32, "docsQosServiceClassActiveTimeout"},
    docsqosserviceclassadmittedtimeout{YType::int32, "docsQosServiceClassAdmittedTimeout"},
    docsqosserviceclassschedulingtype{YType::enumeration, "docsQosServiceClassSchedulingType"},
    docsqosserviceclassrequestpolicy{YType::str, "docsQosServiceClassRequestPolicy"},
    docsqosserviceclasstosandmask{YType::str, "docsQosServiceClassTosAndMask"},
    docsqosserviceclasstosormask{YType::str, "docsQosServiceClassTosOrMask"},
    docsqosserviceclassdirection{YType::enumeration, "docsQosServiceClassDirection"}
{

    yang_name = "docsQosServiceClassEntry"; yang_parent_name = "docsQosServiceClassTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::~DocsQosServiceClassEntry()
{
}

bool DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsqosserviceclassname.is_set
	|| docsqosserviceclassparamsetindex.is_set
	|| docsqosserviceclassstatus.is_set
	|| docsqosserviceclasspriority.is_set
	|| docsqosserviceclassmaxtrafficrate.is_set
	|| docsqosserviceclassmaxtrafficburst.is_set
	|| docsqosserviceclassminreservedrate.is_set
	|| docsqosserviceclassminreservedpkt.is_set
	|| docsqosserviceclassmaxconcatburst.is_set
	|| docsqosserviceclassnompollinterval.is_set
	|| docsqosserviceclasstolpolljitter.is_set
	|| docsqosserviceclassunsolicitgrantsize.is_set
	|| docsqosserviceclassnomgrantinterval.is_set
	|| docsqosserviceclasstolgrantjitter.is_set
	|| docsqosserviceclassgrantsperinterval.is_set
	|| docsqosserviceclassmaxlatency.is_set
	|| docsqosserviceclassactivetimeout.is_set
	|| docsqosserviceclassadmittedtimeout.is_set
	|| docsqosserviceclassschedulingtype.is_set
	|| docsqosserviceclassrequestpolicy.is_set
	|| docsqosserviceclasstosandmask.is_set
	|| docsqosserviceclasstosormask.is_set
	|| docsqosserviceclassdirection.is_set;
}

bool DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsqosserviceclassname.yfilter)
	|| ydk::is_set(docsqosserviceclassparamsetindex.yfilter)
	|| ydk::is_set(docsqosserviceclassstatus.yfilter)
	|| ydk::is_set(docsqosserviceclasspriority.yfilter)
	|| ydk::is_set(docsqosserviceclassmaxtrafficrate.yfilter)
	|| ydk::is_set(docsqosserviceclassmaxtrafficburst.yfilter)
	|| ydk::is_set(docsqosserviceclassminreservedrate.yfilter)
	|| ydk::is_set(docsqosserviceclassminreservedpkt.yfilter)
	|| ydk::is_set(docsqosserviceclassmaxconcatburst.yfilter)
	|| ydk::is_set(docsqosserviceclassnompollinterval.yfilter)
	|| ydk::is_set(docsqosserviceclasstolpolljitter.yfilter)
	|| ydk::is_set(docsqosserviceclassunsolicitgrantsize.yfilter)
	|| ydk::is_set(docsqosserviceclassnomgrantinterval.yfilter)
	|| ydk::is_set(docsqosserviceclasstolgrantjitter.yfilter)
	|| ydk::is_set(docsqosserviceclassgrantsperinterval.yfilter)
	|| ydk::is_set(docsqosserviceclassmaxlatency.yfilter)
	|| ydk::is_set(docsqosserviceclassactivetimeout.yfilter)
	|| ydk::is_set(docsqosserviceclassadmittedtimeout.yfilter)
	|| ydk::is_set(docsqosserviceclassschedulingtype.yfilter)
	|| ydk::is_set(docsqosserviceclassrequestpolicy.yfilter)
	|| ydk::is_set(docsqosserviceclasstosandmask.yfilter)
	|| ydk::is_set(docsqosserviceclasstosormask.yfilter)
	|| ydk::is_set(docsqosserviceclassdirection.yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosServiceClassTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceClassEntry";
    ADD_KEY_TOKEN(docsqosserviceclassname, "docsQosServiceClassName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsqosserviceclassname.is_set || is_set(docsqosserviceclassname.yfilter)) leaf_name_data.push_back(docsqosserviceclassname.get_name_leafdata());
    if (docsqosserviceclassparamsetindex.is_set || is_set(docsqosserviceclassparamsetindex.yfilter)) leaf_name_data.push_back(docsqosserviceclassparamsetindex.get_name_leafdata());
    if (docsqosserviceclassstatus.is_set || is_set(docsqosserviceclassstatus.yfilter)) leaf_name_data.push_back(docsqosserviceclassstatus.get_name_leafdata());
    if (docsqosserviceclasspriority.is_set || is_set(docsqosserviceclasspriority.yfilter)) leaf_name_data.push_back(docsqosserviceclasspriority.get_name_leafdata());
    if (docsqosserviceclassmaxtrafficrate.is_set || is_set(docsqosserviceclassmaxtrafficrate.yfilter)) leaf_name_data.push_back(docsqosserviceclassmaxtrafficrate.get_name_leafdata());
    if (docsqosserviceclassmaxtrafficburst.is_set || is_set(docsqosserviceclassmaxtrafficburst.yfilter)) leaf_name_data.push_back(docsqosserviceclassmaxtrafficburst.get_name_leafdata());
    if (docsqosserviceclassminreservedrate.is_set || is_set(docsqosserviceclassminreservedrate.yfilter)) leaf_name_data.push_back(docsqosserviceclassminreservedrate.get_name_leafdata());
    if (docsqosserviceclassminreservedpkt.is_set || is_set(docsqosserviceclassminreservedpkt.yfilter)) leaf_name_data.push_back(docsqosserviceclassminreservedpkt.get_name_leafdata());
    if (docsqosserviceclassmaxconcatburst.is_set || is_set(docsqosserviceclassmaxconcatburst.yfilter)) leaf_name_data.push_back(docsqosserviceclassmaxconcatburst.get_name_leafdata());
    if (docsqosserviceclassnompollinterval.is_set || is_set(docsqosserviceclassnompollinterval.yfilter)) leaf_name_data.push_back(docsqosserviceclassnompollinterval.get_name_leafdata());
    if (docsqosserviceclasstolpolljitter.is_set || is_set(docsqosserviceclasstolpolljitter.yfilter)) leaf_name_data.push_back(docsqosserviceclasstolpolljitter.get_name_leafdata());
    if (docsqosserviceclassunsolicitgrantsize.is_set || is_set(docsqosserviceclassunsolicitgrantsize.yfilter)) leaf_name_data.push_back(docsqosserviceclassunsolicitgrantsize.get_name_leafdata());
    if (docsqosserviceclassnomgrantinterval.is_set || is_set(docsqosserviceclassnomgrantinterval.yfilter)) leaf_name_data.push_back(docsqosserviceclassnomgrantinterval.get_name_leafdata());
    if (docsqosserviceclasstolgrantjitter.is_set || is_set(docsqosserviceclasstolgrantjitter.yfilter)) leaf_name_data.push_back(docsqosserviceclasstolgrantjitter.get_name_leafdata());
    if (docsqosserviceclassgrantsperinterval.is_set || is_set(docsqosserviceclassgrantsperinterval.yfilter)) leaf_name_data.push_back(docsqosserviceclassgrantsperinterval.get_name_leafdata());
    if (docsqosserviceclassmaxlatency.is_set || is_set(docsqosserviceclassmaxlatency.yfilter)) leaf_name_data.push_back(docsqosserviceclassmaxlatency.get_name_leafdata());
    if (docsqosserviceclassactivetimeout.is_set || is_set(docsqosserviceclassactivetimeout.yfilter)) leaf_name_data.push_back(docsqosserviceclassactivetimeout.get_name_leafdata());
    if (docsqosserviceclassadmittedtimeout.is_set || is_set(docsqosserviceclassadmittedtimeout.yfilter)) leaf_name_data.push_back(docsqosserviceclassadmittedtimeout.get_name_leafdata());
    if (docsqosserviceclassschedulingtype.is_set || is_set(docsqosserviceclassschedulingtype.yfilter)) leaf_name_data.push_back(docsqosserviceclassschedulingtype.get_name_leafdata());
    if (docsqosserviceclassrequestpolicy.is_set || is_set(docsqosserviceclassrequestpolicy.yfilter)) leaf_name_data.push_back(docsqosserviceclassrequestpolicy.get_name_leafdata());
    if (docsqosserviceclasstosandmask.is_set || is_set(docsqosserviceclasstosandmask.yfilter)) leaf_name_data.push_back(docsqosserviceclasstosandmask.get_name_leafdata());
    if (docsqosserviceclasstosormask.is_set || is_set(docsqosserviceclasstosormask.yfilter)) leaf_name_data.push_back(docsqosserviceclasstosormask.get_name_leafdata());
    if (docsqosserviceclassdirection.is_set || is_set(docsqosserviceclassdirection.yfilter)) leaf_name_data.push_back(docsqosserviceclassdirection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsQosServiceClassName")
    {
        docsqosserviceclassname = value;
        docsqosserviceclassname.value_namespace = name_space;
        docsqosserviceclassname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassParamSetIndex")
    {
        docsqosserviceclassparamsetindex = value;
        docsqosserviceclassparamsetindex.value_namespace = name_space;
        docsqosserviceclassparamsetindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassStatus")
    {
        docsqosserviceclassstatus = value;
        docsqosserviceclassstatus.value_namespace = name_space;
        docsqosserviceclassstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassPriority")
    {
        docsqosserviceclasspriority = value;
        docsqosserviceclasspriority.value_namespace = name_space;
        docsqosserviceclasspriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassMaxTrafficRate")
    {
        docsqosserviceclassmaxtrafficrate = value;
        docsqosserviceclassmaxtrafficrate.value_namespace = name_space;
        docsqosserviceclassmaxtrafficrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassMaxTrafficBurst")
    {
        docsqosserviceclassmaxtrafficburst = value;
        docsqosserviceclassmaxtrafficburst.value_namespace = name_space;
        docsqosserviceclassmaxtrafficburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassMinReservedRate")
    {
        docsqosserviceclassminreservedrate = value;
        docsqosserviceclassminreservedrate.value_namespace = name_space;
        docsqosserviceclassminreservedrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassMinReservedPkt")
    {
        docsqosserviceclassminreservedpkt = value;
        docsqosserviceclassminreservedpkt.value_namespace = name_space;
        docsqosserviceclassminreservedpkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassMaxConcatBurst")
    {
        docsqosserviceclassmaxconcatburst = value;
        docsqosserviceclassmaxconcatburst.value_namespace = name_space;
        docsqosserviceclassmaxconcatburst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassNomPollInterval")
    {
        docsqosserviceclassnompollinterval = value;
        docsqosserviceclassnompollinterval.value_namespace = name_space;
        docsqosserviceclassnompollinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassTolPollJitter")
    {
        docsqosserviceclasstolpolljitter = value;
        docsqosserviceclasstolpolljitter.value_namespace = name_space;
        docsqosserviceclasstolpolljitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassUnsolicitGrantSize")
    {
        docsqosserviceclassunsolicitgrantsize = value;
        docsqosserviceclassunsolicitgrantsize.value_namespace = name_space;
        docsqosserviceclassunsolicitgrantsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassNomGrantInterval")
    {
        docsqosserviceclassnomgrantinterval = value;
        docsqosserviceclassnomgrantinterval.value_namespace = name_space;
        docsqosserviceclassnomgrantinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassTolGrantJitter")
    {
        docsqosserviceclasstolgrantjitter = value;
        docsqosserviceclasstolgrantjitter.value_namespace = name_space;
        docsqosserviceclasstolgrantjitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassGrantsPerInterval")
    {
        docsqosserviceclassgrantsperinterval = value;
        docsqosserviceclassgrantsperinterval.value_namespace = name_space;
        docsqosserviceclassgrantsperinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassMaxLatency")
    {
        docsqosserviceclassmaxlatency = value;
        docsqosserviceclassmaxlatency.value_namespace = name_space;
        docsqosserviceclassmaxlatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassActiveTimeout")
    {
        docsqosserviceclassactivetimeout = value;
        docsqosserviceclassactivetimeout.value_namespace = name_space;
        docsqosserviceclassactivetimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassAdmittedTimeout")
    {
        docsqosserviceclassadmittedtimeout = value;
        docsqosserviceclassadmittedtimeout.value_namespace = name_space;
        docsqosserviceclassadmittedtimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassSchedulingType")
    {
        docsqosserviceclassschedulingtype = value;
        docsqosserviceclassschedulingtype.value_namespace = name_space;
        docsqosserviceclassschedulingtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassRequestPolicy")
    {
        docsqosserviceclassrequestpolicy = value;
        docsqosserviceclassrequestpolicy.value_namespace = name_space;
        docsqosserviceclassrequestpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassTosAndMask")
    {
        docsqosserviceclasstosandmask = value;
        docsqosserviceclasstosandmask.value_namespace = name_space;
        docsqosserviceclasstosandmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassTosOrMask")
    {
        docsqosserviceclasstosormask = value;
        docsqosserviceclasstosormask.value_namespace = name_space;
        docsqosserviceclasstosormask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassDirection")
    {
        docsqosserviceclassdirection = value;
        docsqosserviceclassdirection.value_namespace = name_space;
        docsqosserviceclassdirection.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsQosServiceClassName")
    {
        docsqosserviceclassname.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassParamSetIndex")
    {
        docsqosserviceclassparamsetindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassStatus")
    {
        docsqosserviceclassstatus.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassPriority")
    {
        docsqosserviceclasspriority.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassMaxTrafficRate")
    {
        docsqosserviceclassmaxtrafficrate.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassMaxTrafficBurst")
    {
        docsqosserviceclassmaxtrafficburst.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassMinReservedRate")
    {
        docsqosserviceclassminreservedrate.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassMinReservedPkt")
    {
        docsqosserviceclassminreservedpkt.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassMaxConcatBurst")
    {
        docsqosserviceclassmaxconcatburst.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassNomPollInterval")
    {
        docsqosserviceclassnompollinterval.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassTolPollJitter")
    {
        docsqosserviceclasstolpolljitter.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassUnsolicitGrantSize")
    {
        docsqosserviceclassunsolicitgrantsize.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassNomGrantInterval")
    {
        docsqosserviceclassnomgrantinterval.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassTolGrantJitter")
    {
        docsqosserviceclasstolgrantjitter.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassGrantsPerInterval")
    {
        docsqosserviceclassgrantsperinterval.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassMaxLatency")
    {
        docsqosserviceclassmaxlatency.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassActiveTimeout")
    {
        docsqosserviceclassactivetimeout.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassAdmittedTimeout")
    {
        docsqosserviceclassadmittedtimeout.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassSchedulingType")
    {
        docsqosserviceclassschedulingtype.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassRequestPolicy")
    {
        docsqosserviceclassrequestpolicy.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassTosAndMask")
    {
        docsqosserviceclasstosandmask.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassTosOrMask")
    {
        docsqosserviceclasstosormask.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassDirection")
    {
        docsqosserviceclassdirection.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosServiceClassTable::DocsQosServiceClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceClassName" || name == "docsQosServiceClassParamSetIndex" || name == "docsQosServiceClassStatus" || name == "docsQosServiceClassPriority" || name == "docsQosServiceClassMaxTrafficRate" || name == "docsQosServiceClassMaxTrafficBurst" || name == "docsQosServiceClassMinReservedRate" || name == "docsQosServiceClassMinReservedPkt" || name == "docsQosServiceClassMaxConcatBurst" || name == "docsQosServiceClassNomPollInterval" || name == "docsQosServiceClassTolPollJitter" || name == "docsQosServiceClassUnsolicitGrantSize" || name == "docsQosServiceClassNomGrantInterval" || name == "docsQosServiceClassTolGrantJitter" || name == "docsQosServiceClassGrantsPerInterval" || name == "docsQosServiceClassMaxLatency" || name == "docsQosServiceClassActiveTimeout" || name == "docsQosServiceClassAdmittedTimeout" || name == "docsQosServiceClassSchedulingType" || name == "docsQosServiceClassRequestPolicy" || name == "docsQosServiceClassTosAndMask" || name == "docsQosServiceClassTosOrMask" || name == "docsQosServiceClassDirection")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyTable()
    :
    docsqosserviceclasspolicyentry(this, {"docsqosserviceclasspolicyindex"})
{

    yang_name = "docsQosServiceClassPolicyTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceClassPolicyTable::~DocsQosServiceClassPolicyTable()
{
}

bool DOCSQOSMIB::DocsQosServiceClassPolicyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosserviceclasspolicyentry.len(); index++)
    {
        if(docsqosserviceclasspolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosServiceClassPolicyTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosserviceclasspolicyentry.len(); index++)
    {
        if(docsqosserviceclasspolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceClassPolicyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceClassPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceClassPolicyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceClassPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceClassPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosServiceClassPolicyEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry>();
        ent_->parent = this;
        docsqosserviceclasspolicyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceClassPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosserviceclasspolicyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosServiceClassPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosServiceClassPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosServiceClassPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceClassPolicyEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::DocsQosServiceClassPolicyEntry()
    :
    docsqosserviceclasspolicyindex{YType::int32, "docsQosServiceClassPolicyIndex"},
    docsqosserviceclasspolicyname{YType::str, "docsQosServiceClassPolicyName"},
    docsqosserviceclasspolicyrulepriority{YType::int32, "docsQosServiceClassPolicyRulePriority"},
    docsqosserviceclasspolicystatus{YType::enumeration, "docsQosServiceClassPolicyStatus"}
{

    yang_name = "docsQosServiceClassPolicyEntry"; yang_parent_name = "docsQosServiceClassPolicyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::~DocsQosServiceClassPolicyEntry()
{
}

bool DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsqosserviceclasspolicyindex.is_set
	|| docsqosserviceclasspolicyname.is_set
	|| docsqosserviceclasspolicyrulepriority.is_set
	|| docsqosserviceclasspolicystatus.is_set;
}

bool DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsqosserviceclasspolicyindex.yfilter)
	|| ydk::is_set(docsqosserviceclasspolicyname.yfilter)
	|| ydk::is_set(docsqosserviceclasspolicyrulepriority.yfilter)
	|| ydk::is_set(docsqosserviceclasspolicystatus.yfilter);
}

std::string DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosServiceClassPolicyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosServiceClassPolicyEntry";
    ADD_KEY_TOKEN(docsqosserviceclasspolicyindex, "docsQosServiceClassPolicyIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsqosserviceclasspolicyindex.is_set || is_set(docsqosserviceclasspolicyindex.yfilter)) leaf_name_data.push_back(docsqosserviceclasspolicyindex.get_name_leafdata());
    if (docsqosserviceclasspolicyname.is_set || is_set(docsqosserviceclasspolicyname.yfilter)) leaf_name_data.push_back(docsqosserviceclasspolicyname.get_name_leafdata());
    if (docsqosserviceclasspolicyrulepriority.is_set || is_set(docsqosserviceclasspolicyrulepriority.yfilter)) leaf_name_data.push_back(docsqosserviceclasspolicyrulepriority.get_name_leafdata());
    if (docsqosserviceclasspolicystatus.is_set || is_set(docsqosserviceclasspolicystatus.yfilter)) leaf_name_data.push_back(docsqosserviceclasspolicystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsQosServiceClassPolicyIndex")
    {
        docsqosserviceclasspolicyindex = value;
        docsqosserviceclasspolicyindex.value_namespace = name_space;
        docsqosserviceclasspolicyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassPolicyName")
    {
        docsqosserviceclasspolicyname = value;
        docsqosserviceclasspolicyname.value_namespace = name_space;
        docsqosserviceclasspolicyname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassPolicyRulePriority")
    {
        docsqosserviceclasspolicyrulepriority = value;
        docsqosserviceclasspolicyrulepriority.value_namespace = name_space;
        docsqosserviceclasspolicyrulepriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceClassPolicyStatus")
    {
        docsqosserviceclasspolicystatus = value;
        docsqosserviceclasspolicystatus.value_namespace = name_space;
        docsqosserviceclasspolicystatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsQosServiceClassPolicyIndex")
    {
        docsqosserviceclasspolicyindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassPolicyName")
    {
        docsqosserviceclasspolicyname.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassPolicyRulePriority")
    {
        docsqosserviceclasspolicyrulepriority.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceClassPolicyStatus")
    {
        docsqosserviceclasspolicystatus.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosServiceClassPolicyTable::DocsQosServiceClassPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosServiceClassPolicyIndex" || name == "docsQosServiceClassPolicyName" || name == "docsQosServiceClassPolicyRulePriority" || name == "docsQosServiceClassPolicyStatus")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSTable()
    :
    docsqosphsentry(this, {"ifindex", "docsqosserviceflowid", "docsqospktclassid"})
{

    yang_name = "docsQosPHSTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosPHSTable::~DocsQosPHSTable()
{
}

bool DOCSQOSMIB::DocsQosPHSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqosphsentry.len(); index++)
    {
        if(docsqosphsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosPHSTable::has_operation() const
{
    for (std::size_t index=0; index<docsqosphsentry.len(); index++)
    {
        if(docsqosphsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosPHSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosPHSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosPHSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosPHSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosPHSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosPHSEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry>();
        ent_->parent = this;
        docsqosphsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosPHSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqosphsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosPHSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosPHSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosPHSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosPHSEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::DocsQosPHSEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsqosserviceflowid{YType::str, "docsQosServiceFlowId"},
    docsqospktclassid{YType::str, "docsQosPktClassId"},
    docsqosphsfield{YType::str, "docsQosPHSField"},
    docsqosphsmask{YType::str, "docsQosPHSMask"},
    docsqosphssize{YType::int32, "docsQosPHSSize"},
    docsqosphsverify{YType::boolean, "docsQosPHSVerify"},
    docsqosphsclassifierindex{YType::int32, "docsQosPHSClassifierIndex"},
    docsqosphsindex{YType::int32, "docsQosPHSIndex"}
{

    yang_name = "docsQosPHSEntry"; yang_parent_name = "docsQosPHSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::~DocsQosPHSEntry()
{
}

bool DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsqosserviceflowid.is_set
	|| docsqospktclassid.is_set
	|| docsqosphsfield.is_set
	|| docsqosphsmask.is_set
	|| docsqosphssize.is_set
	|| docsqosphsverify.is_set
	|| docsqosphsclassifierindex.is_set
	|| docsqosphsindex.is_set;
}

bool DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsqosserviceflowid.yfilter)
	|| ydk::is_set(docsqospktclassid.yfilter)
	|| ydk::is_set(docsqosphsfield.yfilter)
	|| ydk::is_set(docsqosphsmask.yfilter)
	|| ydk::is_set(docsqosphssize.yfilter)
	|| ydk::is_set(docsqosphsverify.yfilter)
	|| ydk::is_set(docsqosphsclassifierindex.yfilter)
	|| ydk::is_set(docsqosphsindex.yfilter);
}

std::string DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosPHSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosPHSEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsqosserviceflowid, "docsQosServiceFlowId");
    ADD_KEY_TOKEN(docsqospktclassid, "docsQosPktClassId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsqosserviceflowid.is_set || is_set(docsqosserviceflowid.yfilter)) leaf_name_data.push_back(docsqosserviceflowid.get_name_leafdata());
    if (docsqospktclassid.is_set || is_set(docsqospktclassid.yfilter)) leaf_name_data.push_back(docsqospktclassid.get_name_leafdata());
    if (docsqosphsfield.is_set || is_set(docsqosphsfield.yfilter)) leaf_name_data.push_back(docsqosphsfield.get_name_leafdata());
    if (docsqosphsmask.is_set || is_set(docsqosphsmask.yfilter)) leaf_name_data.push_back(docsqosphsmask.get_name_leafdata());
    if (docsqosphssize.is_set || is_set(docsqosphssize.yfilter)) leaf_name_data.push_back(docsqosphssize.get_name_leafdata());
    if (docsqosphsverify.is_set || is_set(docsqosphsverify.yfilter)) leaf_name_data.push_back(docsqosphsverify.get_name_leafdata());
    if (docsqosphsclassifierindex.is_set || is_set(docsqosphsclassifierindex.yfilter)) leaf_name_data.push_back(docsqosphsclassifierindex.get_name_leafdata());
    if (docsqosphsindex.is_set || is_set(docsqosphsindex.yfilter)) leaf_name_data.push_back(docsqosphsindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid = value;
        docsqosserviceflowid.value_namespace = name_space;
        docsqosserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPktClassId")
    {
        docsqospktclassid = value;
        docsqospktclassid.value_namespace = name_space;
        docsqospktclassid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPHSField")
    {
        docsqosphsfield = value;
        docsqosphsfield.value_namespace = name_space;
        docsqosphsfield.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPHSMask")
    {
        docsqosphsmask = value;
        docsqosphsmask.value_namespace = name_space;
        docsqosphsmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPHSSize")
    {
        docsqosphssize = value;
        docsqosphssize.value_namespace = name_space;
        docsqosphssize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPHSVerify")
    {
        docsqosphsverify = value;
        docsqosphsverify.value_namespace = name_space;
        docsqosphsverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPHSClassifierIndex")
    {
        docsqosphsclassifierindex = value;
        docsqosphsclassifierindex.value_namespace = name_space;
        docsqosphsclassifierindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosPHSIndex")
    {
        docsqosphsindex = value;
        docsqosphsindex.value_namespace = name_space;
        docsqosphsindex.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsQosServiceFlowId")
    {
        docsqosserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsQosPktClassId")
    {
        docsqospktclassid.yfilter = yfilter;
    }
    if(value_path == "docsQosPHSField")
    {
        docsqosphsfield.yfilter = yfilter;
    }
    if(value_path == "docsQosPHSMask")
    {
        docsqosphsmask.yfilter = yfilter;
    }
    if(value_path == "docsQosPHSSize")
    {
        docsqosphssize.yfilter = yfilter;
    }
    if(value_path == "docsQosPHSVerify")
    {
        docsqosphsverify.yfilter = yfilter;
    }
    if(value_path == "docsQosPHSClassifierIndex")
    {
        docsqosphsclassifierindex.yfilter = yfilter;
    }
    if(value_path == "docsQosPHSIndex")
    {
        docsqosphsindex.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosPHSTable::DocsQosPHSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsQosServiceFlowId" || name == "docsQosPktClassId" || name == "docsQosPHSField" || name == "docsQosPHSMask" || name == "docsQosPHSSize" || name == "docsQosPHSVerify" || name == "docsQosPHSClassifierIndex" || name == "docsQosPHSIndex")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowTable()
    :
    docsqoscmtsmactosrvflowentry(this, {"docsqoscmtscmmac", "docsqoscmtsserviceflowid"})
{

    yang_name = "docsQosCmtsMacToSrvFlowTable"; yang_parent_name = "DOCS-QOS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::~DocsQosCmtsMacToSrvFlowTable()
{
}

bool DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsqoscmtsmactosrvflowentry.len(); index++)
    {
        if(docsqoscmtsmactosrvflowentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::has_operation() const
{
    for (std::size_t index=0; index<docsqoscmtsmactosrvflowentry.len(); index++)
    {
        if(docsqoscmtsmactosrvflowentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosCmtsMacToSrvFlowTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsQosCmtsMacToSrvFlowEntry")
    {
        auto ent_ = std::make_shared<DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry>();
        ent_->parent = this;
        docsqoscmtsmactosrvflowentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docsqoscmtsmactosrvflowentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosCmtsMacToSrvFlowEntry")
        return true;
    return false;
}

DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::DocsQosCmtsMacToSrvFlowEntry()
    :
    docsqoscmtscmmac{YType::str, "docsQosCmtsCmMac"},
    docsqoscmtsserviceflowid{YType::uint32, "docsQosCmtsServiceFlowId"},
    docsqoscmtsifindex{YType::int32, "docsQosCmtsIfIndex"}
{

    yang_name = "docsQosCmtsMacToSrvFlowEntry"; yang_parent_name = "docsQosCmtsMacToSrvFlowTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::~DocsQosCmtsMacToSrvFlowEntry()
{
}

bool DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsqoscmtscmmac.is_set
	|| docsqoscmtsserviceflowid.is_set
	|| docsqoscmtsifindex.is_set;
}

bool DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsqoscmtscmmac.yfilter)
	|| ydk::is_set(docsqoscmtsserviceflowid.yfilter)
	|| ydk::is_set(docsqoscmtsifindex.yfilter);
}

std::string DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-QOS-MIB:DOCS-QOS-MIB/docsQosCmtsMacToSrvFlowTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsQosCmtsMacToSrvFlowEntry";
    ADD_KEY_TOKEN(docsqoscmtscmmac, "docsQosCmtsCmMac");
    ADD_KEY_TOKEN(docsqoscmtsserviceflowid, "docsQosCmtsServiceFlowId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsqoscmtscmmac.is_set || is_set(docsqoscmtscmmac.yfilter)) leaf_name_data.push_back(docsqoscmtscmmac.get_name_leafdata());
    if (docsqoscmtsserviceflowid.is_set || is_set(docsqoscmtsserviceflowid.yfilter)) leaf_name_data.push_back(docsqoscmtsserviceflowid.get_name_leafdata());
    if (docsqoscmtsifindex.is_set || is_set(docsqoscmtsifindex.yfilter)) leaf_name_data.push_back(docsqoscmtsifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsQosCmtsCmMac")
    {
        docsqoscmtscmmac = value;
        docsqoscmtscmmac.value_namespace = name_space;
        docsqoscmtscmmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosCmtsServiceFlowId")
    {
        docsqoscmtsserviceflowid = value;
        docsqoscmtsserviceflowid.value_namespace = name_space;
        docsqoscmtsserviceflowid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsQosCmtsIfIndex")
    {
        docsqoscmtsifindex = value;
        docsqoscmtsifindex.value_namespace = name_space;
        docsqoscmtsifindex.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsQosCmtsCmMac")
    {
        docsqoscmtscmmac.yfilter = yfilter;
    }
    if(value_path == "docsQosCmtsServiceFlowId")
    {
        docsqoscmtsserviceflowid.yfilter = yfilter;
    }
    if(value_path == "docsQosCmtsIfIndex")
    {
        docsqoscmtsifindex.yfilter = yfilter;
    }
}

bool DOCSQOSMIB::DocsQosCmtsMacToSrvFlowTable::DocsQosCmtsMacToSrvFlowEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsQosCmtsCmMac" || name == "docsQosCmtsServiceFlowId" || name == "docsQosCmtsIfIndex")
        return true;
    return false;
}

const Enum::YLeaf IfDirection::downstream {1, "downstream"};
const Enum::YLeaf IfDirection::upstream {2, "upstream"};

const Enum::YLeaf SchedulingType::undefined {1, "undefined"};
const Enum::YLeaf SchedulingType::bestEffort {2, "bestEffort"};
const Enum::YLeaf SchedulingType::nonRealTimePollingService {3, "nonRealTimePollingService"};
const Enum::YLeaf SchedulingType::realTimePollingService {4, "realTimePollingService"};
const Enum::YLeaf SchedulingType::unsolictedGrantServiceWithAD {5, "unsolictedGrantServiceWithAD"};
const Enum::YLeaf SchedulingType::unsolictedGrantService {6, "unsolictedGrantService"};

const Enum::YLeaf DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassEnetProtocolType::none {0, "none"};
const Enum::YLeaf DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassEnetProtocolType::ethertype {1, "ethertype"};
const Enum::YLeaf DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassEnetProtocolType::dsap {2, "dsap"};
const Enum::YLeaf DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassEnetProtocolType::mac {3, "mac"};
const Enum::YLeaf DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassEnetProtocolType::all {4, "all"};

const Enum::YLeaf DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassState::active {1, "active"};
const Enum::YLeaf DOCSQOSMIB::DocsQosPktClassTable::DocsQosPktClassEntry::DocsQosPktClassState::inactive {2, "inactive"};

const Enum::YLeaf DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::DocsQosParamSetType::active {1, "active"};
const Enum::YLeaf DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::DocsQosParamSetType::admitted {2, "admitted"};
const Enum::YLeaf DOCSQOSMIB::DocsQosParamSetTable::DocsQosParamSetEntry::DocsQosParamSetType::provisioned {3, "provisioned"};

const Enum::YLeaf DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::DocsQosServiceFlowLogControl::active {1, "active"};
const Enum::YLeaf DOCSQOSMIB::DocsQosServiceFlowLogTable::DocsQosServiceFlowLogEntry::DocsQosServiceFlowLogControl::destroy {6, "destroy"};


}
}

