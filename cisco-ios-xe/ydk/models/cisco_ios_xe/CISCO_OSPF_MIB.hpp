#ifndef _CISCO_OSPF_MIB_
#define _CISCO_OSPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_OSPF_MIB {

class CiscoOspfMib : public ydk::Entity
{
    public:
        CiscoOspfMib();
        ~CiscoOspfMib();

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


class CiscoOspfMib::Cospfgeneralgroup : public ydk::Entity
{
    public:
        Cospfgeneralgroup();
        ~Cospfgeneralgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cospfrfc1583compatibility; //type: boolean
        ydk::YLeaf cospfopaquelsasupport; //type: boolean
        ydk::YLeaf cospftrafficengineeringsupport; //type: boolean
        ydk::YLeaf cospfopaqueaslsacount; //type: uint32
        ydk::YLeaf cospfopaqueaslsacksumsum; //type: uint32

}; // CiscoOspfMib::Cospfgeneralgroup


class CiscoOspfMib::Cospflsdbtable : public ydk::Entity
{
    public:
        Cospflsdbtable();
        ~Cospflsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cospflsdbentry; //type: CiscoOspfMib::Cospflsdbtable::Cospflsdbentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospflsdbtable::Cospflsdbentry> > cospflsdbentry;
        
}; // CiscoOspfMib::Cospflsdbtable


class CiscoOspfMib::Cospflsdbtable::Cospflsdbentry : public ydk::Entity
{
    public:
        Cospflsdbentry();
        ~Cospflsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: string (refers to OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry::ospflsdbareaid)
        ydk::YLeaf ospflsdbareaid;
        ydk::YLeaf cospflsdbtype; //type: Cospflsdbtype
        //type: string (refers to OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry::ospflsdblsid)
        ydk::YLeaf ospflsdblsid;
        //type: string (refers to OSPF_MIB::OspfMib::Ospflsdbtable::Ospflsdbentry::ospflsdbrouterid)
        ydk::YLeaf ospflsdbrouterid;
        ydk::YLeaf cospflsdbsequence; //type: int32
        ydk::YLeaf cospflsdbage; //type: int32
        ydk::YLeaf cospflsdbchecksum; //type: int32
        ydk::YLeaf cospflsdbadvertisement; //type: binary
        class Cospflsdbtype;

}; // CiscoOspfMib::Cospflsdbtable::Cospflsdbentry


class CiscoOspfMib::Cospfshamlinktable : public ydk::Entity
{
    public:
        Cospfshamlinktable();
        ~Cospfshamlinktable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cospfshamlinkentry; //type: CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry> > cospfshamlinkentry;
        
}; // CiscoOspfMib::Cospfshamlinktable


class CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry : public ydk::Entity
{
    public:
        Cospfshamlinkentry();
        ~Cospfshamlinkentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cospfshamlinkareaid; //type: string
        ydk::YLeaf cospfshamlinklocalipaddress; //type: string
        ydk::YLeaf cospfshamlinkneighborid; //type: string
        ydk::YLeaf cospfshamlinkretransinterval; //type: int32
        ydk::YLeaf cospfshamlinkhellointerval; //type: int32
        ydk::YLeaf cospfshamlinkrtrdeadinterval; //type: int32
        ydk::YLeaf cospfshamlinkstate; //type: Cospfshamlinkstate
        ydk::YLeaf cospfshamlinkevents; //type: uint32
        ydk::YLeaf cospfshamlinkmetric; //type: int32
        class Cospfshamlinkstate;

}; // CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry


class CiscoOspfMib::Cospflocallsdbtable : public ydk::Entity
{
    public:
        Cospflocallsdbtable();
        ~Cospflocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cospflocallsdbentry; //type: CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry> > cospflocallsdbentry;
        
}; // CiscoOspfMib::Cospflocallsdbtable


class CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry : public ydk::Entity
{
    public:
        Cospflocallsdbentry();
        ~Cospflocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cospflocallsdbipaddress; //type: string
        ydk::YLeaf cospflocallsdbaddresslessif; //type: int32
        ydk::YLeaf cospflocallsdbtype; //type: Cospflocallsdbtype
        ydk::YLeaf cospflocallsdblsid; //type: string
        ydk::YLeaf cospflocallsdbrouterid; //type: string
        ydk::YLeaf cospflocallsdbsequence; //type: int32
        ydk::YLeaf cospflocallsdbage; //type: int32
        ydk::YLeaf cospflocallsdbchecksum; //type: uint32
        ydk::YLeaf cospflocallsdbadvertisement; //type: binary
        class Cospflocallsdbtype;

}; // CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry


class CiscoOspfMib::Cospfvirtlocallsdbtable : public ydk::Entity
{
    public:
        Cospfvirtlocallsdbtable();
        ~Cospfvirtlocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cospfvirtlocallsdbentry; //type: CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry> > cospfvirtlocallsdbentry;
        
}; // CiscoOspfMib::Cospfvirtlocallsdbtable


class CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry : public ydk::Entity
{
    public:
        Cospfvirtlocallsdbentry();
        ~Cospfvirtlocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cospfvirtlocallsdbtransitarea; //type: string
        ydk::YLeaf cospfvirtlocallsdbneighbor; //type: string
        ydk::YLeaf cospfvirtlocallsdbtype; //type: Cospfvirtlocallsdbtype
        ydk::YLeaf cospfvirtlocallsdblsid; //type: string
        ydk::YLeaf cospfvirtlocallsdbrouterid; //type: string
        ydk::YLeaf cospfvirtlocallsdbsequence; //type: int32
        ydk::YLeaf cospfvirtlocallsdbage; //type: int32
        ydk::YLeaf cospfvirtlocallsdbchecksum; //type: uint32
        ydk::YLeaf cospfvirtlocallsdbadvertisement; //type: binary
        class Cospfvirtlocallsdbtype;

}; // CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry


class CiscoOspfMib::Cospfshamlinknbrtable : public ydk::Entity
{
    public:
        Cospfshamlinknbrtable();
        ~Cospfshamlinknbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cospfshamlinknbrentry; //type: CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry> > cospfshamlinknbrentry;
        
}; // CiscoOspfMib::Cospfshamlinknbrtable


class CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry : public ydk::Entity
{
    public:
        Cospfshamlinknbrentry();
        ~Cospfshamlinknbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cospfshamlinkslocalipaddrtype; //type: Inetaddresstype
        //type: binary (refers to CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::cospfshamlinkslocalipaddr)
        ydk::YLeaf cospfshamlinkslocalipaddr;
        ydk::YLeaf cospfshamlinknbrarea; //type: string
        ydk::YLeaf cospfshamlinknbripaddrtype; //type: Inetaddresstype
        ydk::YLeaf cospfshamlinknbripaddr; //type: binary
        ydk::YLeaf cospfshamlinknbrrtrid; //type: string
        ydk::YLeaf cospfshamlinknbroptions; //type: int32
        ydk::YLeaf cospfshamlinknbrstate; //type: Cospfshamlinknbrstate
        ydk::YLeaf cospfshamlinknbrevents; //type: uint32
        ydk::YLeaf cospfshamlinknbrlsretransqlen; //type: uint32
        ydk::YLeaf cospfshamlinknbrhellosuppressed; //type: boolean
        class Cospfshamlinknbrstate;

}; // CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry


class CiscoOspfMib::Cospfshamlinkstable : public ydk::Entity
{
    public:
        Cospfshamlinkstable();
        ~Cospfshamlinkstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cospfshamlinksentry; //type: CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry

        std::vector<std::shared_ptr<CISCO_OSPF_MIB::CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry> > cospfshamlinksentry;
        
}; // CiscoOspfMib::Cospfshamlinkstable


class CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry : public ydk::Entity
{
    public:
        Cospfshamlinksentry();
        ~Cospfshamlinksentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cospfshamlinksareaid; //type: string
        ydk::YLeaf cospfshamlinkslocalipaddrtype; //type: Inetaddresstype
        ydk::YLeaf cospfshamlinkslocalipaddr; //type: binary
        ydk::YLeaf cospfshamlinksremoteipaddrtype; //type: Inetaddresstype
        ydk::YLeaf cospfshamlinksremoteipaddr; //type: binary
        ydk::YLeaf cospfshamlinksretransinterval; //type: int32
        ydk::YLeaf cospfshamlinkshellointerval; //type: int32
        ydk::YLeaf cospfshamlinksrtrdeadinterval; //type: int32
        ydk::YLeaf cospfshamlinksstate; //type: Cospfshamlinksstate
        ydk::YLeaf cospfshamlinksevents; //type: uint32
        ydk::YLeaf cospfshamlinksmetric; //type: int32
        class Cospfshamlinksstate;

}; // CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry

class CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::Cospflsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf areaOpaqueLink;
        static const ydk::Enum::YLeaf asOpaqueLink;

};

class CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::Cospfshamlinkstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};

class CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::Cospflocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::Cospfvirtlocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::Cospfshamlinknbrstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf attempt;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf twoWay;
        static const ydk::Enum::YLeaf exchangeStart;
        static const ydk::Enum::YLeaf exchange;
        static const ydk::Enum::YLeaf loading;
        static const ydk::Enum::YLeaf full;

};

class CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::Cospfshamlinksstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};


}
}

#endif /* _CISCO_OSPF_MIB_ */

