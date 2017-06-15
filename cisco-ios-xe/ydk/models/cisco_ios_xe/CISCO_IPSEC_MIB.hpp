#ifndef _CISCO_IPSEC_MIB_
#define _CISCO_IPSEC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IPSEC_MIB {

class CiscoIpsecMib : public Entity
{
    public:
        CiscoIpsecMib();
        ~CiscoIpsecMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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

        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipscryptomapsetiftable> cipscryptomapsetiftable_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsdynamiccryptomapsettable> cipsdynamiccryptomapsettable_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsipsecglobals> cipsipsecglobals_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsipsecstatistics> cipsipsecstatistics_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsisakmpgroup> cipsisakmpgroup_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsisakmppolicytable> cipsisakmppolicytable_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable> cipsstaticcryptomapsettable_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomaptable> cipsstaticcryptomaptable_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipssyscapacitygroup> cipssyscapacitygroup_;
        std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipstrapcntlgroup> cipstrapcntlgroup_;
        
}; // CiscoIpsecMib


class CiscoIpsecMib::Cipsisakmpgroup : public Entity
{
    public:
        Cipsisakmpgroup();
        ~Cipsisakmpgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsisakmpenabled; //type: boolean
        YLeaf cipsisakmpidentity; //type: IkeidentitytypeEnum
        YLeaf cipsisakmpkeepaliveinterval; //type: int32
        YLeaf cipsnumisakmppolicies; //type: int32

}; // CiscoIpsecMib::Cipsisakmpgroup


class CiscoIpsecMib::Cipsipsecglobals : public Entity
{
    public:
        Cipsipsecglobals();
        ~Cipsipsecglobals();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipssalifetime; //type: uint32
        YLeaf cipssalifesize; //type: uint32
        YLeaf cipsnumstaticcryptomapsets; //type: uint32
        YLeaf cipsnumcetcryptomapsets; //type: uint32
        YLeaf cipsnumdynamiccryptomapsets; //type: uint32
        YLeaf cipsnumtedcryptomapsets; //type: uint32

}; // CiscoIpsecMib::Cipsipsecglobals


class CiscoIpsecMib::Cipsipsecstatistics : public Entity
{
    public:
        Cipsipsecstatistics();
        ~Cipsipsecstatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsnumtedprobesreceived; //type: uint32
        YLeaf cipsnumtedprobessent; //type: uint32
        YLeaf cipsnumtedfailures; //type: uint32

}; // CiscoIpsecMib::Cipsipsecstatistics


class CiscoIpsecMib::Cipssyscapacitygroup : public Entity
{
    public:
        Cipssyscapacitygroup();
        ~Cipssyscapacitygroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsmaxsas; //type: int32
        YLeaf cips3descapable; //type: boolean

}; // CiscoIpsecMib::Cipssyscapacitygroup


class CiscoIpsecMib::Cipstrapcntlgroup : public Entity
{
    public:
        Cipstrapcntlgroup();
        ~Cipstrapcntlgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipscntlisakmppolicyadded; //type: TrapstatusEnum
        YLeaf cipscntlisakmppolicydeleted; //type: TrapstatusEnum
        YLeaf cipscntlcryptomapadded; //type: TrapstatusEnum
        YLeaf cipscntlcryptomapdeleted; //type: TrapstatusEnum
        YLeaf cipscntlcryptomapsetattached; //type: TrapstatusEnum
        YLeaf cipscntlcryptomapsetdetached; //type: TrapstatusEnum
        YLeaf cipscntltoomanysas; //type: TrapstatusEnum

}; // CiscoIpsecMib::Cipstrapcntlgroup


class CiscoIpsecMib::Cipsisakmppolicytable : public Entity
{
    public:
        Cipsisakmppolicytable();
        ~Cipsisakmppolicytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsisakmppolicyentry; //type: CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry> > cipsisakmppolicyentry_;
        
}; // CiscoIpsecMib::Cipsisakmppolicytable


class CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry : public Entity
{
    public:
        Cipsisakmppolicyentry();
        ~Cipsisakmppolicyentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsisakmppolpriority; //type: int32
        YLeaf cipsisakmppolencr; //type: EncryptalgoEnum
        YLeaf cipsisakmppolhash; //type: IkehashalgoEnum
        YLeaf cipsisakmppolauth; //type: IkeauthmethodEnum
        YLeaf cipsisakmppolgroup; //type: DiffhellmangrpEnum
        YLeaf cipsisakmppollifetime; //type: int32

}; // CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry


class CiscoIpsecMib::Cipsstaticcryptomapsettable : public Entity
{
    public:
        Cipsstaticcryptomapsettable();
        ~Cipsstaticcryptomapsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsstaticcryptomapsetentry; //type: CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry> > cipsstaticcryptomapsetentry_;
        
}; // CiscoIpsecMib::Cipsstaticcryptomapsettable


class CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry : public Entity
{
    public:
        Cipsstaticcryptomapsetentry();
        ~Cipsstaticcryptomapsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsstaticcryptomapsetname; //type: string
        YLeaf cipsstaticcryptomapsetsize; //type: uint32
        YLeaf cipsstaticcryptomapsetnumisakmp; //type: uint32
        YLeaf cipsstaticcryptomapsetnummanual; //type: uint32
        YLeaf cipsstaticcryptomapsetnumcet; //type: uint32
        YLeaf cipsstaticcryptomapsetnumdynamic; //type: uint32
        YLeaf cipsstaticcryptomapsetnumdisc; //type: uint32
        YLeaf cipsstaticcryptomapsetnumsas; //type: uint32

}; // CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry


class CiscoIpsecMib::Cipsdynamiccryptomapsettable : public Entity
{
    public:
        Cipsdynamiccryptomapsettable();
        ~Cipsdynamiccryptomapsettable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsdynamiccryptomapsetentry; //type: CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry> > cipsdynamiccryptomapsetentry_;
        
}; // CiscoIpsecMib::Cipsdynamiccryptomapsettable


class CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry : public Entity
{
    public:
        Cipsdynamiccryptomapsetentry();
        ~Cipsdynamiccryptomapsetentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cipsdynamiccryptomapsetname; //type: string
        YLeaf cipsdynamiccryptomapsetsize; //type: uint32
        YLeaf cipsdynamiccryptomapsetnumassoc; //type: uint32

}; // CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry


class CiscoIpsecMib::Cipsstaticcryptomaptable : public Entity
{
    public:
        Cipsstaticcryptomaptable();
        ~Cipsstaticcryptomaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipsstaticcryptomapentry; //type: CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry> > cipsstaticcryptomapentry_;
        
}; // CiscoIpsecMib::Cipsstaticcryptomaptable


class CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry : public Entity
{
    public:
        Cipsstaticcryptomapentry();
        ~Cipsstaticcryptomapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::cipsstaticcryptomapsetname)
        YLeaf cipsstaticcryptomapsetname;
        YLeaf cipsstaticcryptomappriority; //type: int32
        YLeaf cipsstaticcryptomaptype; //type: CryptomaptypeEnum
        YLeaf cipsstaticcryptomapdescr; //type: string
        YLeaf cipsstaticcryptomappeer; //type: binary
        YLeaf cipsstaticcryptomapnumpeers; //type: int32
        YLeaf cipsstaticcryptomappfs; //type: DiffhellmangrpEnum
        YLeaf cipsstaticcryptomaplifetime; //type: int32
        YLeaf cipsstaticcryptomaplifesize; //type: int32
        YLeaf cipsstaticcryptomaplevelhost; //type: boolean

}; // CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry


class CiscoIpsecMib::Cipscryptomapsetiftable : public Entity
{
    public:
        Cipscryptomapsetiftable();
        ~Cipscryptomapsetiftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cipscryptomapsetifentry; //type: CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry

        std::vector<std::shared_ptr<CISCO_IPSEC_MIB::CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry> > cipscryptomapsetifentry_;
        
}; // CiscoIpsecMib::Cipscryptomapsetiftable


class CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry : public Entity
{
    public:
        Cipscryptomapsetifentry();
        ~Cipscryptomapsetifentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: string (refers to CISCO_IPSEC_MIB::CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::cipsstaticcryptomapsetname)
        YLeaf cipsstaticcryptomapsetname;
        YLeaf cipscryptomapsetifvirtual; //type: boolean
        YLeaf cipscryptomapsetifstatus; //type: CryptomapsetbindstatusEnum

}; // CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry

class IkehashalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf md5;
        static const Enum::YLeaf sha;

};

class CryptomaptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf cryptomapTypeNONE;
        static const Enum::YLeaf cryptomapTypeMANUAL;
        static const Enum::YLeaf cryptomapTypeISAKMP;
        static const Enum::YLeaf cryptomapTypeCET;
        static const Enum::YLeaf cryptomapTypeDYNAMIC;
        static const Enum::YLeaf cryptomapTypeDYNAMICDISCOVERY;

};

class IkeidentitytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf isakmpIdTypeUNKNOWN;
        static const Enum::YLeaf isakmpIdTypeADDRESS;
        static const Enum::YLeaf isakmpIdTypeHOSTNAME;

};

class TrapstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class EncryptalgoEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf des;
        static const Enum::YLeaf des3;

};

class IkeauthmethodEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf preSharedKey;
        static const Enum::YLeaf rsaSig;
        static const Enum::YLeaf rsaEncrypt;
        static const Enum::YLeaf revPublicKey;

};

class CryptomapsetbindstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf attached;
        static const Enum::YLeaf detached;

};

class DiffhellmangrpEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf dhGroup1;
        static const Enum::YLeaf dhGroup2;

};


}
}

#endif /* _CISCO_IPSEC_MIB_ */

