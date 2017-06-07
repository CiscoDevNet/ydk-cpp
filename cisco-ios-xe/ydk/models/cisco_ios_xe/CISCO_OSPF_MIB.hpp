#ifndef _CISCO_OSPF_MIB_
#define _CISCO_OSPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_OSPF_MIB {

class CiscoOspfMib : public Entity
{
    public:
        CiscoOspfMib();
        ~CiscoOspfMib();

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

        class Cospfgeneralgroup; //type: CiscoOspfMib::Cospfgeneralgroup
        class Cospflsdbtable; //type: CiscoOspfMib::Cospflsdbtable
        class Cospfshamlinktable; //type: CiscoOspfMib::Cospfshamlinktable
        class Cospflocallsdbtable; //type: CiscoOspfMib::Cospflocallsdbtable
        class Cospfvirtlocallsdbtable; //type: CiscoOspfMib::Cospfvirtlocallsdbtable
        class Cospfshamlinknbrtable; //type: CiscoOspfMib::Cospfshamlinknbrtable
        class Cospfshamlinkstable; //type: CiscoOspfMib::Cospfshamlinkstable

        std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfgeneralgroup> cospfgeneralgroup;
        std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospflocallsdbtable> cospflocallsdbtable;
        std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospflsdbtable> cospflsdbtable;
        std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinknbrtable> cospfshamlinknbrtable;
        std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinkstable> cospfshamlinkstable;
        std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinktable> cospfshamlinktable;
        std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfvirtlocallsdbtable> cospfvirtlocallsdbtable;
        
}; // CiscoOspfMib


class CiscoOspfMib::Cospfgeneralgroup : public Entity
{
    public:
        Cospfgeneralgroup();
        ~Cospfgeneralgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cospfrfc1583compatibility; //type: boolean
        YLeaf cospfopaquelsasupport; //type: boolean
        YLeaf cospftrafficengineeringsupport; //type: boolean
        YLeaf cospfopaqueaslsacount; //type: uint32
        YLeaf cospfopaqueaslsacksumsum; //type: uint32

}; // CiscoOspfMib::Cospfgeneralgroup


class CiscoOspfMib::Cospflsdbtable : public Entity
{
    public:
        Cospflsdbtable();
        ~Cospflsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cospflsdbentry; //type: CiscoOspfMib::Cospflsdbtable::Cospflsdbentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospflsdbtable::Cospflsdbentry> > cospflsdbentry;
        
}; // CiscoOspfMib::Cospflsdbtable


class CiscoOspfMib::Cospflsdbtable::Cospflsdbentry : public Entity
{
    public:
        Cospflsdbentry();
        ~Cospflsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: string (refers to OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry::ospflsdbareaid)
        YLeaf ospflsdbareaid;
        YLeaf cospflsdbtype; //type: CospflsdbtypeEnum
        //type: string (refers to OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry::ospflsdblsid)
        YLeaf ospflsdblsid;
        //type: string (refers to OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry::ospflsdbrouterid)
        YLeaf ospflsdbrouterid;
        YLeaf cospflsdbsequence; //type: int32
        YLeaf cospflsdbage; //type: int32
        YLeaf cospflsdbchecksum; //type: int32
        YLeaf cospflsdbadvertisement; //type: binary
        class CospflsdbtypeEnum;

}; // CiscoOspfMib::Cospflsdbtable::Cospflsdbentry


class CiscoOspfMib::Cospfshamlinktable : public Entity
{
    public:
        Cospfshamlinktable();
        ~Cospfshamlinktable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cospfshamlinkentry; //type: CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry> > cospfshamlinkentry;
        
}; // CiscoOspfMib::Cospfshamlinktable


class CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry : public Entity
{
    public:
        Cospfshamlinkentry();
        ~Cospfshamlinkentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cospfshamlinkareaid; //type: string
        YLeaf cospfshamlinklocalipaddress; //type: string
        YLeaf cospfshamlinkneighborid; //type: string
        YLeaf cospfshamlinkretransinterval; //type: int32
        YLeaf cospfshamlinkhellointerval; //type: int32
        YLeaf cospfshamlinkrtrdeadinterval; //type: int32
        YLeaf cospfshamlinkstate; //type: CospfshamlinkstateEnum
        YLeaf cospfshamlinkevents; //type: uint32
        YLeaf cospfshamlinkmetric; //type: int32
        class CospfshamlinkstateEnum;

}; // CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry


class CiscoOspfMib::Cospflocallsdbtable : public Entity
{
    public:
        Cospflocallsdbtable();
        ~Cospflocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cospflocallsdbentry; //type: CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry> > cospflocallsdbentry;
        
}; // CiscoOspfMib::Cospflocallsdbtable


class CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry : public Entity
{
    public:
        Cospflocallsdbentry();
        ~Cospflocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cospflocallsdbipaddress; //type: string
        YLeaf cospflocallsdbaddresslessif; //type: int32
        YLeaf cospflocallsdbtype; //type: CospflocallsdbtypeEnum
        YLeaf cospflocallsdblsid; //type: string
        YLeaf cospflocallsdbrouterid; //type: string
        YLeaf cospflocallsdbsequence; //type: int32
        YLeaf cospflocallsdbage; //type: int32
        YLeaf cospflocallsdbchecksum; //type: uint32
        YLeaf cospflocallsdbadvertisement; //type: binary
        class CospflocallsdbtypeEnum;

}; // CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry


class CiscoOspfMib::Cospfvirtlocallsdbtable : public Entity
{
    public:
        Cospfvirtlocallsdbtable();
        ~Cospfvirtlocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cospfvirtlocallsdbentry; //type: CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry> > cospfvirtlocallsdbentry;
        
}; // CiscoOspfMib::Cospfvirtlocallsdbtable


class CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry : public Entity
{
    public:
        Cospfvirtlocallsdbentry();
        ~Cospfvirtlocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cospfvirtlocallsdbtransitarea; //type: string
        YLeaf cospfvirtlocallsdbneighbor; //type: string
        YLeaf cospfvirtlocallsdbtype; //type: CospfvirtlocallsdbtypeEnum
        YLeaf cospfvirtlocallsdblsid; //type: string
        YLeaf cospfvirtlocallsdbrouterid; //type: string
        YLeaf cospfvirtlocallsdbsequence; //type: int32
        YLeaf cospfvirtlocallsdbage; //type: int32
        YLeaf cospfvirtlocallsdbchecksum; //type: uint32
        YLeaf cospfvirtlocallsdbadvertisement; //type: binary
        class CospfvirtlocallsdbtypeEnum;

}; // CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry


class CiscoOspfMib::Cospfshamlinknbrtable : public Entity
{
    public:
        Cospfshamlinknbrtable();
        ~Cospfshamlinknbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cospfshamlinknbrentry; //type: CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry> > cospfshamlinknbrentry;
        
}; // CiscoOspfMib::Cospfshamlinknbrtable


class CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry : public Entity
{
    public:
        Cospfshamlinknbrentry();
        ~Cospfshamlinknbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cospfshamlinkslocalipaddrtype; //type: InetaddresstypeEnum
        //type: binary (refers to CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::cospfshamlinkslocalipaddr)
        YLeaf cospfshamlinkslocalipaddr;
        YLeaf cospfshamlinknbrarea; //type: string
        YLeaf cospfshamlinknbripaddrtype; //type: InetaddresstypeEnum
        YLeaf cospfshamlinknbripaddr; //type: binary
        YLeaf cospfshamlinknbrrtrid; //type: string
        YLeaf cospfshamlinknbroptions; //type: int32
        YLeaf cospfshamlinknbrstate; //type: CospfshamlinknbrstateEnum
        YLeaf cospfshamlinknbrevents; //type: uint32
        YLeaf cospfshamlinknbrlsretransqlen; //type: uint32
        YLeaf cospfshamlinknbrhellosuppressed; //type: boolean
        class CospfshamlinknbrstateEnum;

}; // CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry


class CiscoOspfMib::Cospfshamlinkstable : public Entity
{
    public:
        Cospfshamlinkstable();
        ~Cospfshamlinkstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cospfshamlinksentry; //type: CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry> > cospfshamlinksentry;
        
}; // CiscoOspfMib::Cospfshamlinkstable


class CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry : public Entity
{
    public:
        Cospfshamlinksentry();
        ~Cospfshamlinksentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cospfshamlinksareaid; //type: string
        YLeaf cospfshamlinkslocalipaddrtype; //type: InetaddresstypeEnum
        YLeaf cospfshamlinkslocalipaddr; //type: binary
        YLeaf cospfshamlinksremoteipaddrtype; //type: InetaddresstypeEnum
        YLeaf cospfshamlinksremoteipaddr; //type: binary
        YLeaf cospfshamlinksretransinterval; //type: int32
        YLeaf cospfshamlinkshellointerval; //type: int32
        YLeaf cospfshamlinksrtrdeadinterval; //type: int32
        YLeaf cospfshamlinksstate; //type: CospfshamlinksstateEnum
        YLeaf cospfshamlinksevents; //type: uint32
        YLeaf cospfshamlinksmetric; //type: int32
        class CospfshamlinksstateEnum;

}; // CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry

class CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::CospflsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf areaOpaqueLink;
        static const Enum::YLeaf asOpaqueLink;

};

class CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::CospfshamlinkstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf pointToPoint;

};

class CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::CospflocallsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf localOpaqueLink;

};

class CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::CospfvirtlocallsdbtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf localOpaqueLink;

};

class CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf attempt;
        static const Enum::YLeaf init;
        static const Enum::YLeaf twoWay;
        static const Enum::YLeaf exchangeStart;
        static const Enum::YLeaf exchange;
        static const Enum::YLeaf loading;
        static const Enum::YLeaf full;

};

class CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::CospfshamlinksstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf pointToPoint;

};


}
}

#endif /* _CISCO_OSPF_MIB_ */

