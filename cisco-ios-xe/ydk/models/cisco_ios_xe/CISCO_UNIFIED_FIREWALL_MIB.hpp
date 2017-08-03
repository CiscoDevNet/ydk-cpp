#ifndef _CISCO_UNIFIED_FIREWALL_MIB_
#define _CISCO_UNIFIED_FIREWALL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_UNIFIED_FIREWALL_MIB {

class CiscoUnifiedFirewallMib : public ydk::Entity
{
    public:
        CiscoUnifiedFirewallMib();
        ~CiscoUnifiedFirewallMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Cufwconnectionglobals; //type: CiscoUnifiedFirewallMib::Cufwconnectionglobals
        class Cufwconnectionresources; //type: CiscoUnifiedFirewallMib::Cufwconnectionresources
        class Cufwconnectionreportsettings; //type: CiscoUnifiedFirewallMib::Cufwconnectionreportsettings
        class Cufwapplinspectiongrp; //type: CiscoUnifiedFirewallMib::Cufwapplinspectiongrp
        class Cufwurlfilterglobals; //type: CiscoUnifiedFirewallMib::Cufwurlfilterglobals
        class Cufwurlfilterresourceusage; //type: CiscoUnifiedFirewallMib::Cufwurlfilterresourceusage
        class Cufwaaicglobals; //type: CiscoUnifiedFirewallMib::Cufwaaicglobals
        class Cufwaaichttpprotocolstats; //type: CiscoUnifiedFirewallMib::Cufwaaichttpprotocolstats
        class Cufwl2Fwglobals; //type: CiscoUnifiedFirewallMib::Cufwl2Fwglobals
        class Cufwnotifcntlgrp; //type: CiscoUnifiedFirewallMib::Cufwnotifcntlgrp
        class Cufwconnsummarytable; //type: CiscoUnifiedFirewallMib::Cufwconnsummarytable
        class Cufwappconnsummarytable; //type: CiscoUnifiedFirewallMib::Cufwappconnsummarytable
        class Cufwpolicyconnsummarytable; //type: CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable
        class Cufwpolicyappconnsummarytable; //type: CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable
        class Cufwinspectiontable; //type: CiscoUnifiedFirewallMib::Cufwinspectiontable
        class Cufwurlfservertable; //type: CiscoUnifiedFirewallMib::Cufwurlfservertable

        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwaaicglobals> cufwaaicglobals;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwaaichttpprotocolstats> cufwaaichttpprotocolstats;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwappconnsummarytable> cufwappconnsummarytable;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwapplinspectiongrp> cufwapplinspectiongrp;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwconnectionglobals> cufwconnectionglobals;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwconnectionreportsettings> cufwconnectionreportsettings;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwconnectionresources> cufwconnectionresources;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwconnsummarytable> cufwconnsummarytable;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwinspectiontable> cufwinspectiontable;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwl2Fwglobals> cufwl2fwglobals;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwnotifcntlgrp> cufwnotifcntlgrp;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable> cufwpolicyappconnsummarytable;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable> cufwpolicyconnsummarytable;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwurlfilterglobals> cufwurlfilterglobals;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwurlfilterresourceusage> cufwurlfilterresourceusage;
        std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwurlfservertable> cufwurlfservertable;
        
}; // CiscoUnifiedFirewallMib


class CiscoUnifiedFirewallMib::Cufwconnectionglobals : public ydk::Entity
{
    public:
        Cufwconnectionglobals();
        ~Cufwconnectionglobals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwconnglobalnumattempted; //type: uint64
        ydk::YLeaf cufwconnglobalnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwconnglobalnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwconnglobalnumresdeclined; //type: uint64
        ydk::YLeaf cufwconnglobalnumhalfopen; //type: uint32
        ydk::YLeaf cufwconnglobalnumactive; //type: uint32
        ydk::YLeaf cufwconnglobalnumexpired; //type: uint64
        ydk::YLeaf cufwconnglobalnumaborted; //type: uint64
        ydk::YLeaf cufwconnglobalnumembryonic; //type: uint32
        ydk::YLeaf cufwconnglobalconnsetuprate1; //type: uint32
        ydk::YLeaf cufwconnglobalconnsetuprate5; //type: uint32
        ydk::YLeaf cufwconnglobalnumremoteaccess; //type: uint32

}; // CiscoUnifiedFirewallMib::Cufwconnectionglobals


class CiscoUnifiedFirewallMib::Cufwconnectionresources : public ydk::Entity
{
    public:
        Cufwconnectionresources();
        ~Cufwconnectionresources();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwconnresmemoryusage; //type: uint32
        ydk::YLeaf cufwconnresactiveconnmemoryusage; //type: uint32
        ydk::YLeaf cufwconnreshoconnmemoryusage; //type: uint32
        ydk::YLeaf cufwconnresembrconnmemoryusage; //type: uint32

}; // CiscoUnifiedFirewallMib::Cufwconnectionresources


class CiscoUnifiedFirewallMib::Cufwconnectionreportsettings : public ydk::Entity
{
    public:
        Cufwconnectionreportsettings();
        ~Cufwconnectionreportsettings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwconnreptappstats; //type: boolean
        ydk::YLeaf cufwconnreptappstatslastchanged; //type: uint32

}; // CiscoUnifiedFirewallMib::Cufwconnectionreportsettings


class CiscoUnifiedFirewallMib::Cufwapplinspectiongrp : public ydk::Entity
{
    public:
        Cufwapplinspectiongrp();
        ~Cufwapplinspectiongrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwaiaudittrailenabled; //type: boolean
        ydk::YLeaf cufwaialertenabled; //type: boolean

}; // CiscoUnifiedFirewallMib::Cufwapplinspectiongrp


class CiscoUnifiedFirewallMib::Cufwurlfilterglobals : public ydk::Entity
{
    public:
        Cufwurlfilterglobals();
        ~Cufwurlfilterglobals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwurlffunctionenabled; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumprocessed; //type: uint64
        ydk::YLeaf cufwurlfrequestsprocrate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsprocrate5; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumallowed; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumdenied; //type: uint64
        ydk::YLeaf cufwurlfrequestsdeniedrate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsdeniedrate5; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumcacheallowed; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumcachedenied; //type: uint64
        ydk::YLeaf cufwurlfallowmodereqnumallowed; //type: uint64
        ydk::YLeaf cufwurlfallowmodereqnumdenied; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumresdropped; //type: uint64
        ydk::YLeaf cufwurlfrequestsresdroprate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsresdroprate5; //type: uint32
        ydk::YLeaf cufwurlfnumservertimeouts; //type: uint64
        ydk::YLeaf cufwurlfnumserverretries; //type: uint64
        ydk::YLeaf cufwurlfresponsesnumlate; //type: uint64
        ydk::YLeaf cufwurlfurlaccrespsnumresdropped; //type: uint64

}; // CiscoUnifiedFirewallMib::Cufwurlfilterglobals


class CiscoUnifiedFirewallMib::Cufwurlfilterresourceusage : public ydk::Entity
{
    public:
        Cufwurlfilterresourceusage();
        ~Cufwurlfilterresourceusage();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwurlfrestotalrequestcachesize; //type: uint32
        ydk::YLeaf cufwurlfrestotalrespcachesize; //type: uint32

}; // CiscoUnifiedFirewallMib::Cufwurlfilterresourceusage


class CiscoUnifiedFirewallMib::Cufwaaicglobals : public ydk::Entity
{
    public:
        Cufwaaicglobals();
        ~Cufwaaicglobals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwaaicglobalnumbadprotocolops; //type: uint64
        ydk::YLeaf cufwaaicglobalnumbadpdusize; //type: uint64
        ydk::YLeaf cufwaaicglobalnumbadportrange; //type: uint64

}; // CiscoUnifiedFirewallMib::Cufwaaicglobals


class CiscoUnifiedFirewallMib::Cufwaaichttpprotocolstats : public ydk::Entity
{
    public:
        Cufwaaichttpprotocolstats();
        ~Cufwaaichttpprotocolstats();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwaaichttpnumbadprotocolops; //type: uint64
        ydk::YLeaf cufwaaichttpnumbadpdusize; //type: uint64
        ydk::YLeaf cufwaaichttpnumtunneledconns; //type: uint64
        ydk::YLeaf cufwaaichttpnumlargeuris; //type: uint64
        ydk::YLeaf cufwaaichttpnumbadcontent; //type: uint64
        ydk::YLeaf cufwaaichttpnummismatchcontent; //type: uint64
        ydk::YLeaf cufwaaichttpnumdoubleencodedpkts; //type: uint64

}; // CiscoUnifiedFirewallMib::Cufwaaichttpprotocolstats


class CiscoUnifiedFirewallMib::Cufwl2Fwglobals : public ydk::Entity
{
    public:
        Cufwl2Fwglobals();
        ~Cufwl2Fwglobals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwl2globalenablestealthmode; //type: boolean
        ydk::YLeaf cufwl2globalarpcachesize; //type: int32
        ydk::YLeaf cufwl2globalenablearpinspection; //type: boolean
        ydk::YLeaf cufwl2globalnumarprequests; //type: uint64
        ydk::YLeaf cufwl2globalnumicmprequests; //type: uint64
        ydk::YLeaf cufwl2globalnumfloods; //type: uint64
        ydk::YLeaf cufwl2globalnumdrops; //type: uint64
        ydk::YLeaf cufwl2globalarpoverflowrate5; //type: uint32
        ydk::YLeaf cufwl2globalnumbadarpresponses; //type: uint64
        ydk::YLeaf cufwl2globalnumspoofedarpresps; //type: uint64

}; // CiscoUnifiedFirewallMib::Cufwl2Fwglobals


class CiscoUnifiedFirewallMib::Cufwnotifcntlgrp : public ydk::Entity
{
    public:
        Cufwnotifcntlgrp();
        ~Cufwnotifcntlgrp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwcntlurlfserverstatuschange; //type: boolean
        ydk::YLeaf cufwcntll2staticmacaddressmoved; //type: boolean

}; // CiscoUnifiedFirewallMib::Cufwnotifcntlgrp


class CiscoUnifiedFirewallMib::Cufwconnsummarytable : public ydk::Entity
{
    public:
        Cufwconnsummarytable();
        ~Cufwconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cufwconnsummaryentry; //type: CiscoUnifiedFirewallMib::Cufwconnsummarytable::Cufwconnsummaryentry

        std::vector<std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwconnsummarytable::Cufwconnsummaryentry> > cufwconnsummaryentry;
        
}; // CiscoUnifiedFirewallMib::Cufwconnsummarytable


class CiscoUnifiedFirewallMib::Cufwconnsummarytable::Cufwconnsummaryentry : public ydk::Entity
{
    public:
        Cufwconnsummaryentry();
        ~Cufwconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwconnprotocol; //type: Cfwnetworkprotocol
        ydk::YLeaf cufwconnnumattempted; //type: uint64
        ydk::YLeaf cufwconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwconnnumactive; //type: uint32
        ydk::YLeaf cufwconnnumaborted; //type: uint64
        ydk::YLeaf cufwconnsetuprate1; //type: uint32
        ydk::YLeaf cufwconnsetuprate5; //type: uint32

}; // CiscoUnifiedFirewallMib::Cufwconnsummarytable::Cufwconnsummaryentry


class CiscoUnifiedFirewallMib::Cufwappconnsummarytable : public ydk::Entity
{
    public:
        Cufwappconnsummarytable();
        ~Cufwappconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cufwappconnsummaryentry; //type: CiscoUnifiedFirewallMib::Cufwappconnsummarytable::Cufwappconnsummaryentry

        std::vector<std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwappconnsummarytable::Cufwappconnsummaryentry> > cufwappconnsummaryentry;
        
}; // CiscoUnifiedFirewallMib::Cufwappconnsummarytable


class CiscoUnifiedFirewallMib::Cufwappconnsummarytable::Cufwappconnsummaryentry : public ydk::Entity
{
    public:
        Cufwappconnsummaryentry();
        ~Cufwappconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwappconnprotocol; //type: Cfwapplicationprotocol
        ydk::YLeaf cufwappconnnumattempted; //type: uint64
        ydk::YLeaf cufwappconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwappconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwappconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwappconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwappconnnumactive; //type: uint32
        ydk::YLeaf cufwappconnnumaborted; //type: uint64
        ydk::YLeaf cufwappconnsetuprate1; //type: uint32
        ydk::YLeaf cufwappconnsetuprate5; //type: uint32

}; // CiscoUnifiedFirewallMib::Cufwappconnsummarytable::Cufwappconnsummaryentry


class CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable : public ydk::Entity
{
    public:
        Cufwpolicyconnsummarytable();
        ~Cufwpolicyconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cufwpolicyconnsummaryentry; //type: CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry

        std::vector<std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry> > cufwpolicyconnsummaryentry;
        
}; // CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable


class CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry : public ydk::Entity
{
    public:
        Cufwpolicyconnsummaryentry();
        ~Cufwpolicyconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwpolconnpolicy; //type: binary
        ydk::YLeaf cufwpolconnpolicytargettype; //type: Cfwpolicytargettype
        ydk::YLeaf cufwpolconnpolicytarget; //type: binary
        ydk::YLeaf cufwpolconnprotocol; //type: Cfwnetworkprotocol
        ydk::YLeaf cufwpolconnnumattempted; //type: uint64
        ydk::YLeaf cufwpolconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwpolconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwpolconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwpolconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwpolconnnumactive; //type: uint32
        ydk::YLeaf cufwpolconnnumaborted; //type: uint64

}; // CiscoUnifiedFirewallMib::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry


class CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable : public ydk::Entity
{
    public:
        Cufwpolicyappconnsummarytable();
        ~Cufwpolicyappconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cufwpolicyappconnsummaryentry; //type: CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry

        std::vector<std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry> > cufwpolicyappconnsummaryentry;
        
}; // CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable


class CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry : public ydk::Entity
{
    public:
        Cufwpolicyappconnsummaryentry();
        ~Cufwpolicyappconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwpolappconnpolicy; //type: binary
        ydk::YLeaf cufwpolappconnpolicytargettype; //type: Cfwpolicytargettype
        ydk::YLeaf cufwpolappconnpolicytarget; //type: binary
        ydk::YLeaf cufwpolappconnprotocol; //type: Cfwapplicationprotocol
        ydk::YLeaf cufwpolappconnnumattempted; //type: uint64
        ydk::YLeaf cufwpolappconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwpolappconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwpolappconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwpolappconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwpolappconnnumactive; //type: uint32
        ydk::YLeaf cufwpolappconnnumaborted; //type: uint64

}; // CiscoUnifiedFirewallMib::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry


class CiscoUnifiedFirewallMib::Cufwinspectiontable : public ydk::Entity
{
    public:
        Cufwinspectiontable();
        ~Cufwinspectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cufwinspectionentry; //type: CiscoUnifiedFirewallMib::Cufwinspectiontable::Cufwinspectionentry

        std::vector<std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwinspectiontable::Cufwinspectionentry> > cufwinspectionentry;
        
}; // CiscoUnifiedFirewallMib::Cufwinspectiontable


class CiscoUnifiedFirewallMib::Cufwinspectiontable::Cufwinspectionentry : public ydk::Entity
{
    public:
        Cufwinspectionentry();
        ~Cufwinspectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwinspectionpolicyname; //type: binary
        ydk::YLeaf cufwinspectionprotocol; //type: Cfwapplicationprotocol
        ydk::YLeaf cufwinspectionstatus; //type: boolean

}; // CiscoUnifiedFirewallMib::Cufwinspectiontable::Cufwinspectionentry


class CiscoUnifiedFirewallMib::Cufwurlfservertable : public ydk::Entity
{
    public:
        Cufwurlfservertable();
        ~Cufwurlfservertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cufwurlfserverentry; //type: CiscoUnifiedFirewallMib::Cufwurlfservertable::Cufwurlfserverentry

        std::vector<std::shared_ptr<CISCO_UNIFIED_FIREWALL_MIB::CiscoUnifiedFirewallMib::Cufwurlfservertable::Cufwurlfserverentry> > cufwurlfserverentry;
        
}; // CiscoUnifiedFirewallMib::Cufwurlfservertable


class CiscoUnifiedFirewallMib::Cufwurlfservertable::Cufwurlfserverentry : public ydk::Entity
{
    public:
        Cufwurlfserverentry();
        ~Cufwurlfserverentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cufwurlfserveraddrtype; //type: Inetaddresstype
        ydk::YLeaf cufwurlfserveraddress; //type: binary
        ydk::YLeaf cufwurlfserverport; //type: uint16
        ydk::YLeaf cufwurlfservervendor; //type: Cfwurlfvendorid
        ydk::YLeaf cufwurlfserverstatus; //type: Cfwurlserverstatus
        ydk::YLeaf cufwurlfserverreqsnumprocessed; //type: uint64
        ydk::YLeaf cufwurlfserverreqsnumallowed; //type: uint64
        ydk::YLeaf cufwurlfserverreqsnumdenied; //type: uint64
        ydk::YLeaf cufwurlfservernumtimeouts; //type: uint64
        ydk::YLeaf cufwurlfservernumretries; //type: uint64
        ydk::YLeaf cufwurlfserverrespsnumreceived; //type: uint64
        ydk::YLeaf cufwurlfserverrespsnumlate; //type: uint64
        ydk::YLeaf cufwurlfserveravgresptime1; //type: uint32
        ydk::YLeaf cufwurlfserveravgresptime5; //type: uint32

}; // CiscoUnifiedFirewallMib::Cufwurlfservertable::Cufwurlfserverentry


}
}

#endif /* _CISCO_UNIFIED_FIREWALL_MIB_ */

