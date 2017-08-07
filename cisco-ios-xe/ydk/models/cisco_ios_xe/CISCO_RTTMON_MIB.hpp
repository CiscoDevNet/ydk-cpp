#ifndef _CISCO_RTTMON_MIB_
#define _CISCO_RTTMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_RTTMON_MIB {

class CiscoRttmonMib : public ydk::Entity
{
    public:
        CiscoRttmonMib();
        ~CiscoRttmonMib();

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

        class Rttmonappl; //type: CiscoRttmonMib::Rttmonappl
        class Rttmonapplsupportedrtttypestable; //type: CiscoRttmonMib::Rttmonapplsupportedrtttypestable
        class Rttmonapplsupportedprotocolstable; //type: CiscoRttmonMib::Rttmonapplsupportedprotocolstable
        class Rttmonapplpreconfigedtable; //type: CiscoRttmonMib::Rttmonapplpreconfigedtable
        class Rttmonapplauthtable; //type: CiscoRttmonMib::Rttmonapplauthtable
        class Rttmonctrladmintable; //type: CiscoRttmonMib::Rttmonctrladmintable
        class Rttmonechoadmintable; //type: CiscoRttmonMib::Rttmonechoadmintable
        class Rttmonfileioadmintable; //type: CiscoRttmonMib::Rttmonfileioadmintable
        class Rttmonscriptadmintable; //type: CiscoRttmonMib::Rttmonscriptadmintable
        class Rttmonreacttriggeradmintable; //type: CiscoRttmonMib::Rttmonreacttriggeradmintable
        class Rttmonechopathadmintable; //type: CiscoRttmonMib::Rttmonechopathadmintable
        class Rttmongrpscheduleadmintable; //type: CiscoRttmonMib::Rttmongrpscheduleadmintable
        class Rttmplsvpnmonctrltable; //type: CiscoRttmonMib::Rttmplsvpnmonctrltable
        class Rttmonreacttable; //type: CiscoRttmonMib::Rttmonreacttable
        class Rttmongeneratedopertable; //type: CiscoRttmonMib::Rttmongeneratedopertable
        class Rttmonstatscapturetable; //type: CiscoRttmonMib::Rttmonstatscapturetable
        class Rttmonstatscollecttable; //type: CiscoRttmonMib::Rttmonstatscollecttable
        class Rttmonstatstotalstable; //type: CiscoRttmonMib::Rttmonstatstotalstable
        class Rttmonhttpstatstable; //type: CiscoRttmonMib::Rttmonhttpstatstable
        class Rttmonjitterstatstable; //type: CiscoRttmonMib::Rttmonjitterstatstable
        class Rttmonlpdgrpstatstable; //type: CiscoRttmonMib::Rttmonlpdgrpstatstable
        class Rttmonhistorycollectiontable; //type: CiscoRttmonMib::Rttmonhistorycollectiontable
        class Rttmonlatesthttpopertable; //type: CiscoRttmonMib::Rttmonlatesthttpopertable
        class Rttmonlatestjitteropertable; //type: CiscoRttmonMib::Rttmonlatestjitteropertable

        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonappl> rttmonappl;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplauthtable> rttmonapplauthtable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplpreconfigedtable> rttmonapplpreconfigedtable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplsupportedprotocolstable> rttmonapplsupportedprotocolstable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplsupportedrtttypestable> rttmonapplsupportedrtttypestable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable> rttmonctrladmintable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonechoadmintable> rttmonechoadmintable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonechopathadmintable> rttmonechopathadmintable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonfileioadmintable> rttmonfileioadmintable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmongeneratedopertable> rttmongeneratedopertable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmongrpscheduleadmintable> rttmongrpscheduleadmintable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonhistorycollectiontable> rttmonhistorycollectiontable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonhttpstatstable> rttmonhttpstatstable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonjitterstatstable> rttmonjitterstatstable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonlatesthttpopertable> rttmonlatesthttpopertable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonlatestjitteropertable> rttmonlatestjitteropertable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonlpdgrpstatstable> rttmonlpdgrpstatstable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonreacttable> rttmonreacttable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonreacttriggeradmintable> rttmonreacttriggeradmintable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonscriptadmintable> rttmonscriptadmintable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscapturetable> rttmonstatscapturetable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscollecttable> rttmonstatscollecttable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatstotalstable> rttmonstatstotalstable;
        std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmplsvpnmonctrltable> rttmplsvpnmonctrltable;
        
}; // CiscoRttmonMib


class CiscoRttmonMib::Rttmonappl : public ydk::Entity
{
    public:
        Rttmonappl();
        ~Rttmonappl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmonapplversion; //type: string
        ydk::YLeaf rttmonapplmaxpacketdatasize; //type: int32
        ydk::YLeaf rttmonappltimeoflastset; //type: uint32
        ydk::YLeaf rttmonapplnumctrladminentry; //type: int32
        ydk::YLeaf rttmonapplreset; //type: Rttreset
        ydk::YLeaf rttmonapplpreconfigedreset; //type: Rttreset
        ydk::YLeaf rttmonapplprobecapacity; //type: int32
        ydk::YLeaf rttmonapplfreememlowwatermark; //type: int32
        ydk::YLeaf rttmonappllatestseterror; //type: string
        ydk::YLeaf rttmonapplresponder; //type: boolean
        ydk::YLeaf rttmonappllpdgrpstatsreset; //type: int32

}; // CiscoRttmonMib::Rttmonappl


class CiscoRttmonMib::Rttmonapplsupportedrtttypestable : public ydk::Entity
{
    public:
        Rttmonapplsupportedrtttypestable();
        ~Rttmonapplsupportedrtttypestable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonapplsupportedrtttypesentry; //type: CiscoRttmonMib::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry> > rttmonapplsupportedrtttypesentry;
        
}; // CiscoRttmonMib::Rttmonapplsupportedrtttypestable


class CiscoRttmonMib::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry : public ydk::Entity
{
    public:
        Rttmonapplsupportedrtttypesentry();
        ~Rttmonapplsupportedrtttypesentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmonapplsupportedrtttypes; //type: Rttmonrtttype
        ydk::YLeaf rttmonapplsupportedrtttypesvalid; //type: boolean

}; // CiscoRttmonMib::Rttmonapplsupportedrtttypestable::Rttmonapplsupportedrtttypesentry


class CiscoRttmonMib::Rttmonapplsupportedprotocolstable : public ydk::Entity
{
    public:
        Rttmonapplsupportedprotocolstable();
        ~Rttmonapplsupportedprotocolstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonapplsupportedprotocolsentry; //type: CiscoRttmonMib::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry> > rttmonapplsupportedprotocolsentry;
        
}; // CiscoRttmonMib::Rttmonapplsupportedprotocolstable


class CiscoRttmonMib::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry : public ydk::Entity
{
    public:
        Rttmonapplsupportedprotocolsentry();
        ~Rttmonapplsupportedprotocolsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmonapplsupportedprotocols; //type: Rttmonprotocol
        ydk::YLeaf rttmonapplsupportedprotocolsvalid; //type: boolean

}; // CiscoRttmonMib::Rttmonapplsupportedprotocolstable::Rttmonapplsupportedprotocolsentry


class CiscoRttmonMib::Rttmonapplpreconfigedtable : public ydk::Entity
{
    public:
        Rttmonapplpreconfigedtable();
        ~Rttmonapplpreconfigedtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonapplpreconfigedentry; //type: CiscoRttmonMib::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry> > rttmonapplpreconfigedentry;
        
}; // CiscoRttmonMib::Rttmonapplpreconfigedtable


class CiscoRttmonMib::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry : public ydk::Entity
{
    public:
        Rttmonapplpreconfigedentry();
        ~Rttmonapplpreconfigedentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmonapplpreconfigedtype; //type: Rttmonapplpreconfigedtype
        ydk::YLeaf rttmonapplpreconfigedname; //type: string
        ydk::YLeaf rttmonapplpreconfigedvalid; //type: boolean
        class Rttmonapplpreconfigedtype;

}; // CiscoRttmonMib::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry


class CiscoRttmonMib::Rttmonapplauthtable : public ydk::Entity
{
    public:
        Rttmonapplauthtable();
        ~Rttmonapplauthtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonapplauthentry; //type: CiscoRttmonMib::Rttmonapplauthtable::Rttmonapplauthentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonapplauthtable::Rttmonapplauthentry> > rttmonapplauthentry;
        
}; // CiscoRttmonMib::Rttmonapplauthtable


class CiscoRttmonMib::Rttmonapplauthtable::Rttmonapplauthentry : public ydk::Entity
{
    public:
        Rttmonapplauthentry();
        ~Rttmonapplauthentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmonapplauthindex; //type: int32
        ydk::YLeaf rttmonapplauthkeychain; //type: string
        ydk::YLeaf rttmonapplauthkeystring1; //type: string
        ydk::YLeaf rttmonapplauthkeystring2; //type: string
        ydk::YLeaf rttmonapplauthkeystring3; //type: string
        ydk::YLeaf rttmonapplauthkeystring4; //type: string
        ydk::YLeaf rttmonapplauthkeystring5; //type: string
        ydk::YLeaf rttmonapplauthstatus; //type: Rowstatus

}; // CiscoRttmonMib::Rttmonapplauthtable::Rttmonapplauthentry


class CiscoRttmonMib::Rttmonctrladmintable : public ydk::Entity
{
    public:
        Rttmonctrladmintable();
        ~Rttmonctrladmintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonctrladminentry; //type: CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry> > rttmonctrladminentry;
        
}; // CiscoRttmonMib::Rttmonctrladmintable


class CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry : public ydk::Entity
{
    public:
        Rttmonctrladminentry();
        ~Rttmonctrladminentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmonctrladminindex; //type: int32
        ydk::YLeaf rttmonctrladminowner; //type: binary
        ydk::YLeaf rttmonctrladmintag; //type: string
        ydk::YLeaf rttmonctrladminrtttype; //type: Rttmonrtttype
        ydk::YLeaf rttmonctrladminthreshold; //type: int32
        ydk::YLeaf rttmonctrladminfrequency; //type: int32
        ydk::YLeaf rttmonctrladmintimeout; //type: int32
        ydk::YLeaf rttmonctrladminverifydata; //type: boolean
        ydk::YLeaf rttmonctrladminstatus; //type: Rowstatus
        ydk::YLeaf rttmonctrladminnvgen; //type: boolean
        ydk::YLeaf rttmonctrladmingroupname; //type: string
        ydk::YLeaf rttmonscheduleadminrttlife; //type: int32
        ydk::YLeaf rttmonscheduleadminrttstarttime; //type: uint32
        ydk::YLeaf rttmonscheduleadminconceptrowageout; //type: int32
        ydk::YLeaf rttmonscheduleadminrttrecurring; //type: boolean
        ydk::YLeaf rttmonscheduleadminconceptrowageoutv2; //type: int32
        ydk::YLeaf rttmonreactadminconnectionenable; //type: boolean
        ydk::YLeaf rttmonreactadmintimeoutenable; //type: boolean
        ydk::YLeaf rttmonreactadminthresholdtype; //type: Rttmonreactadminthresholdtype
        ydk::YLeaf rttmonreactadminthresholdfalling; //type: int32
        ydk::YLeaf rttmonreactadminthresholdcount; //type: int32
        ydk::YLeaf rttmonreactadminthresholdcount2; //type: int32
        ydk::YLeaf rttmonreactadminactiontype; //type: Rttmonreactadminactiontype
        ydk::YLeaf rttmonreactadminverifyerrorenable; //type: boolean
        ydk::YLeaf rttmonstatisticsadminnumhourgroups; //type: int32
        ydk::YLeaf rttmonstatisticsadminnumpaths; //type: int32
        ydk::YLeaf rttmonstatisticsadminnumhops; //type: int32
        ydk::YLeaf rttmonstatisticsadminnumdistbuckets; //type: int32
        ydk::YLeaf rttmonstatisticsadmindistinterval; //type: int32
        ydk::YLeaf rttmonhistoryadminnumlives; //type: int32
        ydk::YLeaf rttmonhistoryadminnumbuckets; //type: int32
        ydk::YLeaf rttmonhistoryadminnumsamples; //type: int32
        ydk::YLeaf rttmonhistoryadminfilter; //type: Rttmonhistoryadminfilter
        ydk::YLeaf rttmonctrlopermodificationtime; //type: uint32
        ydk::YLeaf rttmonctrloperdiagtext; //type: string
        ydk::YLeaf rttmonctrloperresettime; //type: uint32
        ydk::YLeaf rttmonctrloperoctetsinuse; //type: uint32
        ydk::YLeaf rttmonctrloperconnectionlostoccurred; //type: boolean
        ydk::YLeaf rttmonctrlopertimeoutoccurred; //type: boolean
        ydk::YLeaf rttmonctrloperoverthresholdoccurred; //type: boolean
        ydk::YLeaf rttmonctrlopernumrtts; //type: int32
        ydk::YLeaf rttmonctrloperrttlife; //type: int32
        ydk::YLeaf rttmonctrloperstate; //type: Rttmonctrloperstate
        ydk::YLeaf rttmonctrloperverifyerroroccurred; //type: boolean
        ydk::YLeaf rttmonlatestrttopercompletiontime; //type: uint32
        ydk::YLeaf rttmonlatestrttopersense; //type: Rttresponsesense
        ydk::YLeaf rttmonlatestrttoperapplspecificsense; //type: int32
        ydk::YLeaf rttmonlatestrttopersensedescription; //type: string
        ydk::YLeaf rttmonlatestrttopertime; //type: uint32
        ydk::YLeaf rttmonlatestrttoperaddress; //type: binary
        class Rttmonreactadminthresholdtype;
        class Rttmonreactadminactiontype;
        class Rttmonhistoryadminfilter;
        class Rttmonctrloperstate;

}; // CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry


class CiscoRttmonMib::Rttmonechoadmintable : public ydk::Entity
{
    public:
        Rttmonechoadmintable();
        ~Rttmonechoadmintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonechoadminentry; //type: CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry> > rttmonechoadminentry;
        
}; // CiscoRttmonMib::Rttmonechoadmintable


class CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry : public ydk::Entity
{
    public:
        Rttmonechoadminentry();
        ~Rttmonechoadminentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonechoadminprotocol; //type: Rttmonprotocol
        ydk::YLeaf rttmonechoadmintargetaddress; //type: binary
        ydk::YLeaf rttmonechoadminpktdatarequestsize; //type: int32
        ydk::YLeaf rttmonechoadminpktdataresponsesize; //type: int32
        ydk::YLeaf rttmonechoadmintargetport; //type: int32
        ydk::YLeaf rttmonechoadminsourceaddress; //type: binary
        ydk::YLeaf rttmonechoadminsourceport; //type: int32
        ydk::YLeaf rttmonechoadmincontrolenable; //type: boolean
        ydk::YLeaf rttmonechoadmintos; //type: int32
        ydk::YLeaf rttmonechoadminlsrenable; //type: boolean
        ydk::YLeaf rttmonechoadmintargetaddressstring; //type: string
        ydk::YLeaf rttmonechoadminnameserver; //type: binary
        ydk::YLeaf rttmonechoadminoperation; //type: Rttmonoperation
        ydk::YLeaf rttmonechoadminhttpversion; //type: string
        ydk::YLeaf rttmonechoadminurl; //type: string
        ydk::YLeaf rttmonechoadmincache; //type: boolean
        ydk::YLeaf rttmonechoadmininterval; //type: int32
        ydk::YLeaf rttmonechoadminnumpackets; //type: int32
        ydk::YLeaf rttmonechoadminproxy; //type: string
        ydk::YLeaf rttmonechoadminstring1; //type: string
        ydk::YLeaf rttmonechoadminstring2; //type: string
        ydk::YLeaf rttmonechoadminstring3; //type: string
        ydk::YLeaf rttmonechoadminstring4; //type: string
        ydk::YLeaf rttmonechoadminstring5; //type: string
        ydk::YLeaf rttmonechoadminmode; //type: Rttmonoperation
        ydk::YLeaf rttmonechoadminvrfname; //type: binary
        ydk::YLeaf rttmonechoadmincodectype; //type: Rttmoncodectype
        ydk::YLeaf rttmonechoadmincodecinterval; //type: int32
        ydk::YLeaf rttmonechoadmincodecpayload; //type: int32
        ydk::YLeaf rttmonechoadmincodecnumpackets; //type: int32
        ydk::YLeaf rttmonechoadminicpifadvfactor; //type: int32
        ydk::YLeaf rttmonechoadminlspfectype; //type: Rttmonechoadminlspfectype
        ydk::YLeaf rttmonechoadminlspselector; //type: binary
        ydk::YLeaf rttmonechoadminlspreplymode; //type: Rttmonlsppingreplymode
        ydk::YLeaf rttmonechoadminlspttl; //type: int32
        ydk::YLeaf rttmonechoadminlspexp; //type: int32
        ydk::YLeaf rttmonechoadminprecision; //type: Rttmonechoadminprecision
        ydk::YLeaf rttmonechoadminprobepakpriority; //type: Rttmonechoadminprobepakpriority
        ydk::YLeaf rttmonechoadminowntpsynctolabs; //type: int32
        ydk::YLeaf rttmonechoadminowntpsynctolpct; //type: int32
        ydk::YLeaf rttmonechoadminowntpsynctoltype; //type: Rttmonechoadminowntpsynctoltype
        ydk::YLeaf rttmonechoadmincallednumber; //type: string
        ydk::YLeaf rttmonechoadmindetectpoint; //type: Rttmonoperation
        ydk::YLeaf rttmonechoadmingkregistration; //type: boolean
        ydk::YLeaf rttmonechoadminsourcevoiceport; //type: string
        ydk::YLeaf rttmonechoadmincallduration; //type: int32
        ydk::YLeaf rttmonechoadminlspreplydscp; //type: int32
        ydk::YLeaf rttmonechoadminlspnullshim; //type: boolean
        ydk::YLeaf rttmonechoadmintargetmpid; //type: uint32
        ydk::YLeaf rttmonechoadmintargetdomainname; //type: string
        ydk::YLeaf rttmonechoadmintargetvlan; //type: int32
        ydk::YLeaf rttmonechoadminethernetcos; //type: int32
        ydk::YLeaf rttmonechoadminlspvccvid; //type: int32
        ydk::YLeaf rttmonechoadmintargetevc; //type: string
        ydk::YLeaf rttmonechoadmintargetmepport; //type: boolean
        ydk::YLeaf rttmonechoadminvideotrafficprofile; //type: string
        ydk::YLeaf rttmonechoadmindscp; //type: uint8
        ydk::YLeaf rttmonechoadminreservedsp; //type: Rttmonechoadminreservedsp
        ydk::YLeaf rttmonechoadmininputinterface; //type: int32
        ydk::YLeaf rttmonechoadminemulatesourceaddress; //type: binary
        ydk::YLeaf rttmonechoadminemulatesourceport; //type: int32
        ydk::YLeaf rttmonechoadminemulatetargetaddress; //type: binary
        ydk::YLeaf rttmonechoadminemulatetargetport; //type: int32
        ydk::YLeaf rttmonechoadmintargetmacaddress; //type: string
        ydk::YLeaf rttmonechoadminsourcemacaddress; //type: string
        ydk::YLeaf rttmonechoadminsourcempid; //type: uint32
        ydk::YLeaf rttmonechoadminendpointlistname; //type: string
        ydk::YLeaf rttmonechoadminssm; //type: boolean
        ydk::YLeaf rttmonechoadmincontrolretry; //type: uint32
        ydk::YLeaf rttmonechoadmincontroltimeout; //type: uint32
        ydk::YLeaf rttmonechoadminigmptreeinit; //type: uint32
        ydk::YLeaf rttmonechoadminenableburst; //type: boolean
        ydk::YLeaf rttmonechoadminaggburstcycles; //type: int32
        ydk::YLeaf rttmonechoadminlossrationumframes; //type: int32
        ydk::YLeaf rttmonechoadminavailnumframes; //type: int32
        ydk::YLeaf rttmonechoadmintstampoptimization; //type: boolean
        class Rttmonechoadminlspfectype;
        class Rttmonechoadminprecision;
        class Rttmonechoadminprobepakpriority;
        class Rttmonechoadminowntpsynctoltype;
        class Rttmonechoadminreservedsp;

}; // CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry


class CiscoRttmonMib::Rttmonfileioadmintable : public ydk::Entity
{
    public:
        Rttmonfileioadmintable();
        ~Rttmonfileioadmintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonfileioadminentry; //type: CiscoRttmonMib::Rttmonfileioadmintable::Rttmonfileioadminentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonfileioadmintable::Rttmonfileioadminentry> > rttmonfileioadminentry;
        
}; // CiscoRttmonMib::Rttmonfileioadmintable


class CiscoRttmonMib::Rttmonfileioadmintable::Rttmonfileioadminentry : public ydk::Entity
{
    public:
        Rttmonfileioadminentry();
        ~Rttmonfileioadminentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonfileioadminfilepath; //type: string
        ydk::YLeaf rttmonfileioadminsize; //type: Rttmonfileioadminsize
        ydk::YLeaf rttmonfileioadminaction; //type: Rttmonfileioadminaction
        class Rttmonfileioadminsize;
        class Rttmonfileioadminaction;

}; // CiscoRttmonMib::Rttmonfileioadmintable::Rttmonfileioadminentry


class CiscoRttmonMib::Rttmonscriptadmintable : public ydk::Entity
{
    public:
        Rttmonscriptadmintable();
        ~Rttmonscriptadmintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonscriptadminentry; //type: CiscoRttmonMib::Rttmonscriptadmintable::Rttmonscriptadminentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonscriptadmintable::Rttmonscriptadminentry> > rttmonscriptadminentry;
        
}; // CiscoRttmonMib::Rttmonscriptadmintable


class CiscoRttmonMib::Rttmonscriptadmintable::Rttmonscriptadminentry : public ydk::Entity
{
    public:
        Rttmonscriptadminentry();
        ~Rttmonscriptadminentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonscriptadminname; //type: string
        ydk::YLeaf rttmonscriptadmincmdlineparams; //type: string

}; // CiscoRttmonMib::Rttmonscriptadmintable::Rttmonscriptadminentry


class CiscoRttmonMib::Rttmonreacttriggeradmintable : public ydk::Entity
{
    public:
        Rttmonreacttriggeradmintable();
        ~Rttmonreacttriggeradmintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonreacttriggeradminentry; //type: CiscoRttmonMib::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry> > rttmonreacttriggeradminentry;
        
}; // CiscoRttmonMib::Rttmonreacttriggeradmintable


class CiscoRttmonMib::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry : public ydk::Entity
{
    public:
        Rttmonreacttriggeradminentry();
        ~Rttmonreacttriggeradminentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonreacttriggeradminrttmonctrladminindex; //type: int32
        ydk::YLeaf rttmonreacttriggeradminstatus; //type: Rowstatus
        ydk::YLeaf rttmonreacttriggeroperstate; //type: Rttmonreacttriggeroperstate
        class Rttmonreacttriggeroperstate;

}; // CiscoRttmonMib::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry


class CiscoRttmonMib::Rttmonechopathadmintable : public ydk::Entity
{
    public:
        Rttmonechopathadmintable();
        ~Rttmonechopathadmintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonechopathadminentry; //type: CiscoRttmonMib::Rttmonechopathadmintable::Rttmonechopathadminentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonechopathadmintable::Rttmonechopathadminentry> > rttmonechopathadminentry;
        
}; // CiscoRttmonMib::Rttmonechopathadmintable


class CiscoRttmonMib::Rttmonechopathadmintable::Rttmonechopathadminentry : public ydk::Entity
{
    public:
        Rttmonechopathadminentry();
        ~Rttmonechopathadminentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonechopathadminhopindex; //type: int32
        ydk::YLeaf rttmonechopathadminhopaddress; //type: binary

}; // CiscoRttmonMib::Rttmonechopathadmintable::Rttmonechopathadminentry


class CiscoRttmonMib::Rttmongrpscheduleadmintable : public ydk::Entity
{
    public:
        Rttmongrpscheduleadmintable();
        ~Rttmongrpscheduleadmintable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmongrpscheduleadminentry; //type: CiscoRttmonMib::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry> > rttmongrpscheduleadminentry;
        
}; // CiscoRttmonMib::Rttmongrpscheduleadmintable


class CiscoRttmonMib::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry : public ydk::Entity
{
    public:
        Rttmongrpscheduleadminentry();
        ~Rttmongrpscheduleadminentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmongrpscheduleadminindex; //type: int32
        ydk::YLeaf rttmongrpscheduleadminprobes; //type: string
        ydk::YLeaf rttmongrpscheduleadminperiod; //type: int32
        ydk::YLeaf rttmongrpscheduleadminfrequency; //type: int32
        ydk::YLeaf rttmongrpscheduleadminlife; //type: int32
        ydk::YLeaf rttmongrpscheduleadminageout; //type: int32
        ydk::YLeaf rttmongrpscheduleadminstatus; //type: Rowstatus
        ydk::YLeaf rttmongrpscheduleadminfreqmax; //type: int32
        ydk::YLeaf rttmongrpscheduleadminfreqmin; //type: int32
        ydk::YLeaf rttmongrpscheduleadminstarttime; //type: int32
        ydk::YLeaf rttmongrpscheduleadminadd; //type: boolean
        ydk::YLeaf rttmongrpscheduleadmindelete; //type: boolean
        ydk::YLeaf rttmongrpscheduleadminreset; //type: boolean

}; // CiscoRttmonMib::Rttmongrpscheduleadmintable::Rttmongrpscheduleadminentry


class CiscoRttmonMib::Rttmplsvpnmonctrltable : public ydk::Entity
{
    public:
        Rttmplsvpnmonctrltable();
        ~Rttmplsvpnmonctrltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmplsvpnmonctrlentry; //type: CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry> > rttmplsvpnmonctrlentry;
        
}; // CiscoRttmonMib::Rttmplsvpnmonctrltable


class CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry : public ydk::Entity
{
    public:
        Rttmplsvpnmonctrlentry();
        ~Rttmplsvpnmonctrlentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmplsvpnmonctrlindex; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlrtttype; //type: Rttmplsvpnmonrtttype
        ydk::YLeaf rttmplsvpnmonctrlvrfname; //type: binary
        ydk::YLeaf rttmplsvpnmonctrltag; //type: string
        ydk::YLeaf rttmplsvpnmonctrlthreshold; //type: int32
        ydk::YLeaf rttmplsvpnmonctrltimeout; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlscaninterval; //type: int32
        ydk::YLeaf rttmplsvpnmonctrldelscanfactor; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlexp; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlrequestsize; //type: int32
        ydk::YLeaf rttmplsvpnmonctrlverifydata; //type: boolean
        ydk::YLeaf rttmplsvpnmonctrlstoragetype; //type: Storagetype
        ydk::YLeaf rttmplsvpnmonctrlprobelist; //type: string
        ydk::YLeaf rttmplsvpnmonctrlstatus; //type: Rowstatus
        ydk::YLeaf rttmplsvpnmonctrllpd; //type: boolean
        ydk::YLeaf rttmplsvpnmonctrllpdgrplist; //type: string
        ydk::YLeaf rttmplsvpnmonctrllpdcomptime; //type: int32
        ydk::YLeaf rttmplsvpnmontypeinterval; //type: int32
        ydk::YLeaf rttmplsvpnmontypenumpackets; //type: int32
        ydk::YLeaf rttmplsvpnmontypedestport; //type: int32
        ydk::YLeaf rttmplsvpnmontypesecfreqtype; //type: Rttmplsvpnmontypesecfreqtype
        ydk::YLeaf rttmplsvpnmontypesecfreqvalue; //type: int32
        ydk::YLeaf rttmplsvpnmontypelspselector; //type: binary
        ydk::YLeaf rttmplsvpnmontypelspreplymode; //type: Rttmonlsppingreplymode
        ydk::YLeaf rttmplsvpnmontypelspttl; //type: int32
        ydk::YLeaf rttmplsvpnmontypelspreplydscp; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdmaxsessions; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdsesstimeout; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdechotimeout; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdechointerval; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdechonullshim; //type: boolean
        ydk::YLeaf rttmplsvpnmontypelpdscanperiod; //type: int32
        ydk::YLeaf rttmplsvpnmontypelpdstathours; //type: int32
        ydk::YLeaf rttmplsvpnmonschedulerttstarttime; //type: uint32
        ydk::YLeaf rttmplsvpnmonscheduleperiod; //type: int32
        ydk::YLeaf rttmplsvpnmonschedulefrequency; //type: int32
        ydk::YLeaf rttmplsvpnmonreactconnectionenable; //type: boolean
        ydk::YLeaf rttmplsvpnmonreacttimeoutenable; //type: boolean
        ydk::YLeaf rttmplsvpnmonreactthresholdtype; //type: Rttmplsvpnmonreactthresholdtype
        ydk::YLeaf rttmplsvpnmonreactthresholdcount; //type: int32
        ydk::YLeaf rttmplsvpnmonreactactiontype; //type: Rttmplsvpnmonreactactiontype
        ydk::YLeaf rttmplsvpnmonreactlpdnotifytype; //type: Rttmplsvpnmonreactlpdnotifytype
        ydk::YLeaf rttmplsvpnmonreactlpdretrycount; //type: int32
        class Rttmplsvpnmontypesecfreqtype;
        class Rttmplsvpnmonreactthresholdtype;
        class Rttmplsvpnmonreactactiontype;
        class Rttmplsvpnmonreactlpdnotifytype;

}; // CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry


class CiscoRttmonMib::Rttmonreacttable : public ydk::Entity
{
    public:
        Rttmonreacttable();
        ~Rttmonreacttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonreactentry; //type: CiscoRttmonMib::Rttmonreacttable::Rttmonreactentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonreacttable::Rttmonreactentry> > rttmonreactentry;
        
}; // CiscoRttmonMib::Rttmonreacttable


class CiscoRttmonMib::Rttmonreacttable::Rttmonreactentry : public ydk::Entity
{
    public:
        Rttmonreactentry();
        ~Rttmonreactentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonreactconfigindex; //type: int32
        ydk::YLeaf rttmonreactvar; //type: Rttmonreactvar
        ydk::YLeaf rttmonreactthresholdtype; //type: Rttmonreactthresholdtype
        ydk::YLeaf rttmonreactactiontype; //type: Rttmonreactactiontype
        ydk::YLeaf rttmonreactthresholdrising; //type: int32
        ydk::YLeaf rttmonreactthresholdfalling; //type: int32
        ydk::YLeaf rttmonreactthresholdcountx; //type: int32
        ydk::YLeaf rttmonreactthresholdcounty; //type: int32
        ydk::YLeaf rttmonreactvalue; //type: int32
        ydk::YLeaf rttmonreactoccurred; //type: boolean
        ydk::YLeaf rttmonreactstatus; //type: Rowstatus
        class Rttmonreactthresholdtype;
        class Rttmonreactactiontype;

}; // CiscoRttmonMib::Rttmonreacttable::Rttmonreactentry


class CiscoRttmonMib::Rttmongeneratedopertable : public ydk::Entity
{
    public:
        Rttmongeneratedopertable();
        ~Rttmongeneratedopertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmongeneratedoperentry; //type: CiscoRttmonMib::Rttmongeneratedopertable::Rttmongeneratedoperentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmongeneratedopertable::Rttmongeneratedoperentry> > rttmongeneratedoperentry;
        
}; // CiscoRttmonMib::Rttmongeneratedopertable


class CiscoRttmonMib::Rttmongeneratedopertable::Rttmongeneratedoperentry : public ydk::Entity
{
    public:
        Rttmongeneratedoperentry();
        ~Rttmongeneratedoperentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmongeneratedoperrespipaddrtype; //type: Inetaddresstype
        ydk::YLeaf rttmongeneratedoperrespipaddr; //type: binary
        ydk::YLeaf rttmongeneratedoperctrladminindex; //type: uint32

}; // CiscoRttmonMib::Rttmongeneratedopertable::Rttmongeneratedoperentry


class CiscoRttmonMib::Rttmonstatscapturetable : public ydk::Entity
{
    public:
        Rttmonstatscapturetable();
        ~Rttmonstatscapturetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonstatscaptureentry; //type: CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry> > rttmonstatscaptureentry;
        
}; // CiscoRttmonMib::Rttmonstatscapturetable


class CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry : public ydk::Entity
{
    public:
        Rttmonstatscaptureentry();
        ~Rttmonstatscaptureentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonstatscapturestarttimeindex; //type: uint32
        ydk::YLeaf rttmonstatscapturepathindex; //type: int32
        ydk::YLeaf rttmonstatscapturehopindex; //type: int32
        ydk::YLeaf rttmonstatscapturedistindex; //type: int32
        ydk::YLeaf rttmonstatscapturecompletions; //type: int32
        ydk::YLeaf rttmonstatscaptureoverthresholds; //type: int32
        ydk::YLeaf rttmonstatscapturesumcompletiontime; //type: uint32
        ydk::YLeaf rttmonstatscapturesumcompletiontime2low; //type: uint32
        ydk::YLeaf rttmonstatscapturesumcompletiontime2high; //type: uint32
        ydk::YLeaf rttmonstatscapturecompletiontimemax; //type: uint32
        ydk::YLeaf rttmonstatscapturecompletiontimemin; //type: uint32

}; // CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry


class CiscoRttmonMib::Rttmonstatscollecttable : public ydk::Entity
{
    public:
        Rttmonstatscollecttable();
        ~Rttmonstatscollecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonstatscollectentry; //type: CiscoRttmonMib::Rttmonstatscollecttable::Rttmonstatscollectentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscollecttable::Rttmonstatscollectentry> > rttmonstatscollectentry;
        
}; // CiscoRttmonMib::Rttmonstatscollecttable


class CiscoRttmonMib::Rttmonstatscollecttable::Rttmonstatscollectentry : public ydk::Entity
{
    public:
        Rttmonstatscollectentry();
        ~Rttmonstatscollectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        //type: uint32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry::rttmonstatscapturestarttimeindex)
        ydk::YLeaf rttmonstatscapturestarttimeindex;
        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry::rttmonstatscapturepathindex)
        ydk::YLeaf rttmonstatscapturepathindex;
        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry::rttmonstatscapturehopindex)
        ydk::YLeaf rttmonstatscapturehopindex;
        ydk::YLeaf rttmonstatscollectnumdisconnects; //type: int32
        ydk::YLeaf rttmonstatscollecttimeouts; //type: int32
        ydk::YLeaf rttmonstatscollectbusies; //type: int32
        ydk::YLeaf rttmonstatscollectnoconnections; //type: int32
        ydk::YLeaf rttmonstatscollectdrops; //type: int32
        ydk::YLeaf rttmonstatscollectsequenceerrors; //type: int32
        ydk::YLeaf rttmonstatscollectverifyerrors; //type: int32
        ydk::YLeaf rttmonstatscollectaddress; //type: binary
        ydk::YLeaf rttmoncontrolenableerrors; //type: int32
        ydk::YLeaf rttmonstatsretrieveerrors; //type: int32
        ydk::YLeaf rttmonstatscollectctrlenerrors; //type: int32
        ydk::YLeaf rttmonstatscollectretrieveerrors; //type: int32

}; // CiscoRttmonMib::Rttmonstatscollecttable::Rttmonstatscollectentry


class CiscoRttmonMib::Rttmonstatstotalstable : public ydk::Entity
{
    public:
        Rttmonstatstotalstable();
        ~Rttmonstatstotalstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonstatstotalsentry; //type: CiscoRttmonMib::Rttmonstatstotalstable::Rttmonstatstotalsentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatstotalstable::Rttmonstatstotalsentry> > rttmonstatstotalsentry;
        
}; // CiscoRttmonMib::Rttmonstatstotalstable


class CiscoRttmonMib::Rttmonstatstotalstable::Rttmonstatstotalsentry : public ydk::Entity
{
    public:
        Rttmonstatstotalsentry();
        ~Rttmonstatstotalsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        //type: uint32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonstatscapturetable::Rttmonstatscaptureentry::rttmonstatscapturestarttimeindex)
        ydk::YLeaf rttmonstatscapturestarttimeindex;
        ydk::YLeaf rttmonstatstotalselapsedtime; //type: int32
        ydk::YLeaf rttmonstatstotalsinitiations; //type: int32

}; // CiscoRttmonMib::Rttmonstatstotalstable::Rttmonstatstotalsentry


class CiscoRttmonMib::Rttmonhttpstatstable : public ydk::Entity
{
    public:
        Rttmonhttpstatstable();
        ~Rttmonhttpstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonhttpstatsentry; //type: CiscoRttmonMib::Rttmonhttpstatstable::Rttmonhttpstatsentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonhttpstatstable::Rttmonhttpstatsentry> > rttmonhttpstatsentry;
        
}; // CiscoRttmonMib::Rttmonhttpstatstable


class CiscoRttmonMib::Rttmonhttpstatstable::Rttmonhttpstatsentry : public ydk::Entity
{
    public:
        Rttmonhttpstatsentry();
        ~Rttmonhttpstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonhttpstatsstarttimeindex; //type: uint32
        ydk::YLeaf rttmonhttpstatscompletions; //type: uint32
        ydk::YLeaf rttmonhttpstatsoverthresholds; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttsum2low; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttsum2high; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttmin; //type: uint32
        ydk::YLeaf rttmonhttpstatsrttmax; //type: uint32
        ydk::YLeaf rttmonhttpstatsdnsrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatstcpconnectrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatstransactionrttsum; //type: uint32
        ydk::YLeaf rttmonhttpstatsmessagebodyoctetssum; //type: uint32
        ydk::YLeaf rttmonhttpstatsdnsservertimeout; //type: uint32
        ydk::YLeaf rttmonhttpstatstcpconnecttimeout; //type: uint32
        ydk::YLeaf rttmonhttpstatstransactiontimeout; //type: uint32
        ydk::YLeaf rttmonhttpstatsdnsqueryerror; //type: uint32
        ydk::YLeaf rttmonhttpstatshttperror; //type: uint32
        ydk::YLeaf rttmonhttpstatserror; //type: uint32
        ydk::YLeaf rttmonhttpstatsbusies; //type: uint32

}; // CiscoRttmonMib::Rttmonhttpstatstable::Rttmonhttpstatsentry


class CiscoRttmonMib::Rttmonjitterstatstable : public ydk::Entity
{
    public:
        Rttmonjitterstatstable();
        ~Rttmonjitterstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonjitterstatsentry; //type: CiscoRttmonMib::Rttmonjitterstatstable::Rttmonjitterstatsentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonjitterstatstable::Rttmonjitterstatsentry> > rttmonjitterstatsentry;
        
}; // CiscoRttmonMib::Rttmonjitterstatstable


class CiscoRttmonMib::Rttmonjitterstatstable::Rttmonjitterstatsentry : public ydk::Entity
{
    public:
        Rttmonjitterstatsentry();
        ~Rttmonjitterstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonjitterstatsstarttimeindex; //type: uint32
        ydk::YLeaf rttmonjitterstatscompletions; //type: uint32
        ydk::YLeaf rttmonjitterstatsoverthresholds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofrtt; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsum; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsum2low; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsum2high; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttmin; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttmax; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofpositivessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivessdlow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivessdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofnegativessd; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativessdlow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativessdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofpositivesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivesdslow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2positivesdshigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssumofnegativesds; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativesdslow; //type: uint32
        ydk::YLeaf rttmonjitterstatssum2negativesdshigh; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketlosssd; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketlossds; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketoutofsequence; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketmia; //type: uint32
        ydk::YLeaf rttmonjitterstatspacketlatearrival; //type: uint32
        ydk::YLeaf rttmonjitterstatserror; //type: uint32
        ydk::YLeaf rttmonjitterstatsbusies; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumsd; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2sdlow; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2sdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowminsd; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxsd; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumds; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2dslow; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsum2dshigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowminds; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxds; //type: uint32
        ydk::YLeaf rttmonjitterstatsnumofow; //type: uint32
        ydk::YLeaf rttmonjitterstatsowminsdnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxsdnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmindsnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsowmaxdsnew; //type: uint32
        ydk::YLeaf rttmonjitterstatsminofmos; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxofmos; //type: uint32
        ydk::YLeaf rttmonjitterstatsminoficpif; //type: uint32
        ydk::YLeaf rttmonjitterstatsmaxoficpif; //type: uint32
        ydk::YLeaf rttmonjitterstatsiajout; //type: uint32
        ydk::YLeaf rttmonjitterstatsiajin; //type: uint32
        ydk::YLeaf rttmonjitterstatsavgjitter; //type: uint32
        ydk::YLeaf rttmonjitterstatsavgjittersd; //type: uint32
        ydk::YLeaf rttmonjitterstatsavgjitterds; //type: uint32
        ydk::YLeaf rttmonjitterstatsunsyncrts; //type: uint32
        ydk::YLeaf rttmonjitterstatsrttsumhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumsdhigh; //type: uint32
        ydk::YLeaf rttmonjitterstatsowsumdshigh; //type: uint32

}; // CiscoRttmonMib::Rttmonjitterstatstable::Rttmonjitterstatsentry


class CiscoRttmonMib::Rttmonlpdgrpstatstable : public ydk::Entity
{
    public:
        Rttmonlpdgrpstatstable();
        ~Rttmonlpdgrpstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonlpdgrpstatsentry; //type: CiscoRttmonMib::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry> > rttmonlpdgrpstatsentry;
        
}; // CiscoRttmonMib::Rttmonlpdgrpstatstable


class CiscoRttmonMib::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry : public ydk::Entity
{
    public:
        Rttmonlpdgrpstatsentry();
        ~Rttmonlpdgrpstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rttmonlpdgrpstatsgroupindex; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsstarttimeindex; //type: uint32
        ydk::YLeaf rttmonlpdgrpstatstargetpe; //type: binary
        ydk::YLeaf rttmonlpdgrpstatsnumofpass; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsnumoffail; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsnumoftimeout; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsavgrtt; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsminrtt; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsmaxrtt; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsminnumpaths; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsmaxnumpaths; //type: int32
        ydk::YLeaf rttmonlpdgrpstatslpdstarttime; //type: uint32
        ydk::YLeaf rttmonlpdgrpstatslpdfailoccurred; //type: boolean
        ydk::YLeaf rttmonlpdgrpstatslpdfailcause; //type: Rttmplsvpnmonlpdfailuresense
        ydk::YLeaf rttmonlpdgrpstatslpdcomptime; //type: int32
        ydk::YLeaf rttmonlpdgrpstatsgroupstatus; //type: Rttmplsvpnmonlpdgrpstatus
        ydk::YLeaf rttmonlpdgrpstatsgroupprobeindex; //type: int32
        ydk::YLeaf rttmonlpdgrpstatspathids; //type: string
        ydk::YLeaf rttmonlpdgrpstatsprobestatus; //type: string
        ydk::YLeaf rttmonlpdgrpstatsresettime; //type: uint32

}; // CiscoRttmonMib::Rttmonlpdgrpstatstable::Rttmonlpdgrpstatsentry


class CiscoRttmonMib::Rttmonhistorycollectiontable : public ydk::Entity
{
    public:
        Rttmonhistorycollectiontable();
        ~Rttmonhistorycollectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonhistorycollectionentry; //type: CiscoRttmonMib::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry> > rttmonhistorycollectionentry;
        
}; // CiscoRttmonMib::Rttmonhistorycollectiontable


class CiscoRttmonMib::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry : public ydk::Entity
{
    public:
        Rttmonhistorycollectionentry();
        ~Rttmonhistorycollectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonhistorycollectionlifeindex; //type: int32
        ydk::YLeaf rttmonhistorycollectionbucketindex; //type: int32
        ydk::YLeaf rttmonhistorycollectionsampleindex; //type: int32
        ydk::YLeaf rttmonhistorycollectionsampletime; //type: uint32
        ydk::YLeaf rttmonhistorycollectionaddress; //type: binary
        ydk::YLeaf rttmonhistorycollectioncompletiontime; //type: uint32
        ydk::YLeaf rttmonhistorycollectionsense; //type: Rttresponsesense
        ydk::YLeaf rttmonhistorycollectionapplspecificsense; //type: int32
        ydk::YLeaf rttmonhistorycollectionsensedescription; //type: string

}; // CiscoRttmonMib::Rttmonhistorycollectiontable::Rttmonhistorycollectionentry


class CiscoRttmonMib::Rttmonlatesthttpopertable : public ydk::Entity
{
    public:
        Rttmonlatesthttpopertable();
        ~Rttmonlatesthttpopertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonlatesthttpoperentry; //type: CiscoRttmonMib::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry> > rttmonlatesthttpoperentry;
        
}; // CiscoRttmonMib::Rttmonlatesthttpopertable


class CiscoRttmonMib::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry : public ydk::Entity
{
    public:
        Rttmonlatesthttpoperentry();
        ~Rttmonlatesthttpoperentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonlatesthttpoperrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpoperdnsrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpopertcpconnectrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpopertransactionrtt; //type: uint32
        ydk::YLeaf rttmonlatesthttpopermessagebodyoctets; //type: uint32
        ydk::YLeaf rttmonlatesthttpopersense; //type: Rttresponsesense
        ydk::YLeaf rttmonlatesthttperrorsensedescription; //type: string

}; // CiscoRttmonMib::Rttmonlatesthttpopertable::Rttmonlatesthttpoperentry


class CiscoRttmonMib::Rttmonlatestjitteropertable : public ydk::Entity
{
    public:
        Rttmonlatestjitteropertable();
        ~Rttmonlatestjitteropertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Rttmonlatestjitteroperentry; //type: CiscoRttmonMib::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry

        std::vector<std::shared_ptr<CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry> > rttmonlatestjitteroperentry;
        
}; // CiscoRttmonMib::Rttmonlatestjitteropertable


class CiscoRttmonMib::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry : public ydk::Entity
{
    public:
        Rttmonlatestjitteroperentry();
        ~Rttmonlatestjitteroperentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_RTTMON_MIB::CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::rttmonctrladminindex)
        ydk::YLeaf rttmonctrladminindex;
        ydk::YLeaf rttmonlatestjitteropernumofrtt; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsum; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsum2; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttmin; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttmax; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofpositivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2positivessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofnegativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2negativessd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofpositivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2positivesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperminofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermaxofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersumofnegativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersum2negativesds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketlosssd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketlossds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketoutofsequence; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketmia; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperpacketlatearrival; //type: uint32
        ydk::YLeaf rttmonlatestjitteropersense; //type: Rttresponsesense
        ydk::YLeaf rttmonlatestjittererrorsensedescription; //type: string
        ydk::YLeaf rttmonlatestjitteroperowsumsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2sd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowminsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowmaxsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsumds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2ds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowminds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowmaxds; //type: uint32
        ydk::YLeaf rttmonlatestjitteropernumofow; //type: uint32
        ydk::YLeaf rttmonlatestjitteropermos; //type: uint32
        ydk::YLeaf rttmonlatestjitteropericpif; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperiajout; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperiajin; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperavgjitter; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperavgsdj; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperavgdsj; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowavgsd; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowavgds; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperntpstate; //type: Rttmonlatestjitteroperntpstate
        ydk::YLeaf rttmonlatestjitteroperunsyncrts; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsumhigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperrttsum2high; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsumsdhigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2sdhigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsumdshigh; //type: uint32
        ydk::YLeaf rttmonlatestjitteroperowsum2dshigh; //type: uint32
        class Rttmonlatestjitteroperntpstate;

}; // CiscoRttmonMib::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry

class CiscoRttmonMib::Rttmonapplpreconfigedtable::Rttmonapplpreconfigedentry::Rttmonapplpreconfigedtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf filePath;
        static const ydk::Enum::YLeaf scriptName;

};

class CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminthresholdtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

};

class CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonreactadminactiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf nmvtOnly;
        static const ydk::Enum::YLeaf triggerOnly;
        static const ydk::Enum::YLeaf trapAndNmvt;
        static const ydk::Enum::YLeaf trapAndTrigger;
        static const ydk::Enum::YLeaf nmvtAndTrigger;
        static const ydk::Enum::YLeaf trapNmvtAndTrigger;

};

class CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonhistoryadminfilter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf failures;

};

class CiscoRttmonMib::Rttmonctrladmintable::Rttmonctrladminentry::Rttmonctrloperstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf orderlyStop;
        static const ydk::Enum::YLeaf immediateStop;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf restart;

};

class CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminlspfectype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldpIpv4Prefix;

};

class CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminprecision : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf microseconds;

};

class CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminprobepakpriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf high;

};

class CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminowntpsynctoltype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf percent;
        static const ydk::Enum::YLeaf absolute;

};

class CiscoRttmonMib::Rttmonechoadmintable::Rttmonechoadminentry::Rttmonechoadminreservedsp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf be;
        static const ydk::Enum::YLeaf gs;
        static const ydk::Enum::YLeaf na;

};

class CiscoRttmonMib::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminsize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf n256;
        static const ydk::Enum::YLeaf n1k;
        static const ydk::Enum::YLeaf n64k;
        static const ydk::Enum::YLeaf n128k;
        static const ydk::Enum::YLeaf n256k;

};

class CiscoRttmonMib::Rttmonfileioadmintable::Rttmonfileioadminentry::Rttmonfileioadminaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf write;
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf writeRead;

};

class CiscoRttmonMib::Rttmonreacttriggeradmintable::Rttmonreacttriggeradminentry::Rttmonreacttriggeroperstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf pending;

};

class CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmontypesecfreqtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf connectionLoss;
        static const ydk::Enum::YLeaf both;

};

class CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactthresholdtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;

};

class CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactactiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapOnly;

};

class CiscoRttmonMib::Rttmplsvpnmonctrltable::Rttmplsvpnmonctrlentry::Rttmplsvpnmonreactlpdnotifytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lpdPathDiscovery;
        static const ydk::Enum::YLeaf lpdGroupStatus;
        static const ydk::Enum::YLeaf lpdAll;

};

class CiscoRttmonMib::Rttmonreacttable::Rttmonreactentry::Rttmonreactthresholdtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf consecutive;
        static const ydk::Enum::YLeaf xOfy;
        static const ydk::Enum::YLeaf average;

};

class CiscoRttmonMib::Rttmonreacttable::Rttmonreactentry::Rttmonreactactiontype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trapOnly;
        static const ydk::Enum::YLeaf triggerOnly;
        static const ydk::Enum::YLeaf trapAndTrigger;

};

class CiscoRttmonMib::Rttmonlatestjitteropertable::Rttmonlatestjitteroperentry::Rttmonlatestjitteroperntpstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf outOfSync;

};


}
}

#endif /* _CISCO_RTTMON_MIB_ */

