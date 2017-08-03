#ifndef _CISCO_IPSEC_MIB_
#define _CISCO_IPSEC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSEC_MIB {

class CiscoIpsecMib : public ydk::Entity
{
    public:
        CiscoIpsecMib();
        ~CiscoIpsecMib();

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

        class Cipsisakmpgroup; //type: CiscoIpsecMib::Cipsisakmpgroup
        class Cipsipsecglobals; //type: CiscoIpsecMib::Cipsipsecglobals
        class Cipsipsecstatistics; //type: CiscoIpsecMib::Cipsipsecstatistics
        class Cipssyscapacitygroup; //type: CiscoIpsecMib::Cipssyscapacitygroup
        class Cipstrapcntlgroup; //type: CiscoIpsecMib::Cipstrapcntlgroup
        class Cipsisakmppolicytable; //type: CiscoIpsecMib::Cipsisakmppolicytable
        class Cipsstaticcryptomapsettable; //type: CiscoIpsecMib::Cipsstaticcryptomapsettable
        class Cipsdynamiccryptomapsettable; //type: CiscoIpsecMib::Cipsdynamiccryptomapsettable
        class Cipsstaticcryptomaptable; //type: CiscoIpsecMib::Cipsstaticcryptomaptable
        class Cipscryptomapsetiftable; //type: CiscoIpsecMib::Cipscryptomapsetiftable

        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipscryptomapsetiftable> cipscryptomapsetiftable;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsdynamiccryptomapsettable> cipsdynamiccryptomapsettable;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsipsecglobals> cipsipsecglobals;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsipsecstatistics> cipsipsecstatistics;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsisakmpgroup> cipsisakmpgroup;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsisakmppolicytable> cipsisakmppolicytable;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable> cipsstaticcryptomapsettable;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomaptable> cipsstaticcryptomaptable;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipssyscapacitygroup> cipssyscapacitygroup;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipstrapcntlgroup> cipstrapcntlgroup;
        
}; // CiscoIpsecMib


class CiscoIpsecMib::Cipsisakmpgroup : public ydk::Entity
{
    public:
        Cipsisakmpgroup();
        ~Cipsisakmpgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipsisakmpenabled; //type: boolean
        ydk::YLeaf cipsisakmpidentity; //type: Ikeidentitytype
        ydk::YLeaf cipsisakmpkeepaliveinterval; //type: int32
        ydk::YLeaf cipsnumisakmppolicies; //type: int32

}; // CiscoIpsecMib::Cipsisakmpgroup


class CiscoIpsecMib::Cipsipsecglobals : public ydk::Entity
{
    public:
        Cipsipsecglobals();
        ~Cipsipsecglobals();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipssalifetime; //type: uint32
        ydk::YLeaf cipssalifesize; //type: uint32
        ydk::YLeaf cipsnumstaticcryptomapsets; //type: uint32
        ydk::YLeaf cipsnumcetcryptomapsets; //type: uint32
        ydk::YLeaf cipsnumdynamiccryptomapsets; //type: uint32
        ydk::YLeaf cipsnumtedcryptomapsets; //type: uint32

}; // CiscoIpsecMib::Cipsipsecglobals


class CiscoIpsecMib::Cipsipsecstatistics : public ydk::Entity
{
    public:
        Cipsipsecstatistics();
        ~Cipsipsecstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipsnumtedprobesreceived; //type: uint32
        ydk::YLeaf cipsnumtedprobessent; //type: uint32
        ydk::YLeaf cipsnumtedfailures; //type: uint32

}; // CiscoIpsecMib::Cipsipsecstatistics


class CiscoIpsecMib::Cipssyscapacitygroup : public ydk::Entity
{
    public:
        Cipssyscapacitygroup();
        ~Cipssyscapacitygroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipsmaxsas; //type: int32
        ydk::YLeaf cips3descapable; //type: boolean

}; // CiscoIpsecMib::Cipssyscapacitygroup


class CiscoIpsecMib::Cipstrapcntlgroup : public ydk::Entity
{
    public:
        Cipstrapcntlgroup();
        ~Cipstrapcntlgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipscntlisakmppolicyadded; //type: Trapstatus
        ydk::YLeaf cipscntlisakmppolicydeleted; //type: Trapstatus
        ydk::YLeaf cipscntlcryptomapadded; //type: Trapstatus
        ydk::YLeaf cipscntlcryptomapdeleted; //type: Trapstatus
        ydk::YLeaf cipscntlcryptomapsetattached; //type: Trapstatus
        ydk::YLeaf cipscntlcryptomapsetdetached; //type: Trapstatus
        ydk::YLeaf cipscntltoomanysas; //type: Trapstatus

}; // CiscoIpsecMib::Cipstrapcntlgroup


class CiscoIpsecMib::Cipsisakmppolicytable : public ydk::Entity
{
    public:
        Cipsisakmppolicytable();
        ~Cipsisakmppolicytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipsisakmppolicyentry; //type: CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry> > cipsisakmppolicyentry;
        
}; // CiscoIpsecMib::Cipsisakmppolicytable


class CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry : public ydk::Entity
{
    public:
        Cipsisakmppolicyentry();
        ~Cipsisakmppolicyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipsisakmppolpriority; //type: int32
        ydk::YLeaf cipsisakmppolencr; //type: Encryptalgo
        ydk::YLeaf cipsisakmppolhash; //type: Ikehashalgo
        ydk::YLeaf cipsisakmppolauth; //type: Ikeauthmethod
        ydk::YLeaf cipsisakmppolgroup; //type: Diffhellmangrp
        ydk::YLeaf cipsisakmppollifetime; //type: int32

}; // CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry


class CiscoIpsecMib::Cipsstaticcryptomapsettable : public ydk::Entity
{
    public:
        Cipsstaticcryptomapsettable();
        ~Cipsstaticcryptomapsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipsstaticcryptomapsetentry; //type: CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry> > cipsstaticcryptomapsetentry;
        
}; // CiscoIpsecMib::Cipsstaticcryptomapsettable


class CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry : public ydk::Entity
{
    public:
        Cipsstaticcryptomapsetentry();
        ~Cipsstaticcryptomapsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipsstaticcryptomapsetname; //type: string
        ydk::YLeaf cipsstaticcryptomapsetsize; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumisakmp; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnummanual; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumcet; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumdynamic; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumdisc; //type: uint32
        ydk::YLeaf cipsstaticcryptomapsetnumsas; //type: uint32

}; // CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry


class CiscoIpsecMib::Cipsdynamiccryptomapsettable : public ydk::Entity
{
    public:
        Cipsdynamiccryptomapsettable();
        ~Cipsdynamiccryptomapsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipsdynamiccryptomapsetentry; //type: CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry> > cipsdynamiccryptomapsetentry;
        
}; // CiscoIpsecMib::Cipsdynamiccryptomapsettable


class CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry : public ydk::Entity
{
    public:
        Cipsdynamiccryptomapsetentry();
        ~Cipsdynamiccryptomapsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cipsdynamiccryptomapsetname; //type: string
        ydk::YLeaf cipsdynamiccryptomapsetsize; //type: uint32
        ydk::YLeaf cipsdynamiccryptomapsetnumassoc; //type: uint32

}; // CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry


class CiscoIpsecMib::Cipsstaticcryptomaptable : public ydk::Entity
{
    public:
        Cipsstaticcryptomaptable();
        ~Cipsstaticcryptomaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipsstaticcryptomapentry; //type: CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry> > cipsstaticcryptomapentry;
        
}; // CiscoIpsecMib::Cipsstaticcryptomaptable


class CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry : public ydk::Entity
{
    public:
        Cipsstaticcryptomapentry();
        ~Cipsstaticcryptomapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::cipsstaticcryptomapsetname)
        ydk::YLeaf cipsstaticcryptomapsetname;
        ydk::YLeaf cipsstaticcryptomappriority; //type: int32
        ydk::YLeaf cipsstaticcryptomaptype; //type: Cryptomaptype
        ydk::YLeaf cipsstaticcryptomapdescr; //type: string
        ydk::YLeaf cipsstaticcryptomappeer; //type: binary
        ydk::YLeaf cipsstaticcryptomapnumpeers; //type: int32
        ydk::YLeaf cipsstaticcryptomappfs; //type: Diffhellmangrp
        ydk::YLeaf cipsstaticcryptomaplifetime; //type: int32
        ydk::YLeaf cipsstaticcryptomaplifesize; //type: int32
        ydk::YLeaf cipsstaticcryptomaplevelhost; //type: boolean

}; // CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry


class CiscoIpsecMib::Cipscryptomapsetiftable : public ydk::Entity
{
    public:
        Cipscryptomapsetiftable();
        ~Cipscryptomapsetiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cipscryptomapsetifentry; //type: CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry> > cipscryptomapsetifentry;
        
}; // CiscoIpsecMib::Cipscryptomapsetiftable


class CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry : public ydk::Entity
{
    public:
        Cipscryptomapsetifentry();
        ~Cipscryptomapsetifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: string (refers to CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::cipsstaticcryptomapsetname)
        ydk::YLeaf cipsstaticcryptomapsetname;
        ydk::YLeaf cipscryptomapsetifvirtual; //type: boolean
        ydk::YLeaf cipscryptomapsetifstatus; //type: Cryptomapsetbindstatus

}; // CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry

class Cryptomaptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cryptomapTypeNONE;
        static const ydk::Enum::YLeaf cryptomapTypeMANUAL;
        static const ydk::Enum::YLeaf cryptomapTypeISAKMP;
        static const ydk::Enum::YLeaf cryptomapTypeCET;
        static const ydk::Enum::YLeaf cryptomapTypeDYNAMIC;
        static const ydk::Enum::YLeaf cryptomapTypeDYNAMICDISCOVERY;

};

class Cryptomapsetbindstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf attached;
        static const ydk::Enum::YLeaf detached;

};

class Ikehashalgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha;

};

class Ikeidentitytype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf isakmpIdTypeUNKNOWN;
        static const ydk::Enum::YLeaf isakmpIdTypeADDRESS;
        static const ydk::Enum::YLeaf isakmpIdTypeHOSTNAME;

};

class Diffhellmangrp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf dhGroup1;
        static const ydk::Enum::YLeaf dhGroup2;

};

class Encryptalgo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf des;
        static const ydk::Enum::YLeaf des3;

};

class Ikeauthmethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf preSharedKey;
        static const ydk::Enum::YLeaf rsaSig;
        static const ydk::Enum::YLeaf rsaEncrypt;
        static const ydk::Enum::YLeaf revPublicKey;

};

class Trapstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};


}
}

#endif /* _CISCO_IPSEC_MIB_ */

