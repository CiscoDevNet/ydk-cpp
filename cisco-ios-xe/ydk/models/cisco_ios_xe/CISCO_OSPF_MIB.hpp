#ifndef _CISCO_OSPF_MIB_
#define _CISCO_OSPF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_OSPF_MIB {

class CISCOOSPFMIB : public ydk::Entity
{
    public:
        CISCOOSPFMIB();
        ~CISCOOSPFMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Cospfgeneralgroup; //type: CISCOOSPFMIB::Cospfgeneralgroup
        class Cospflsdbtable; //type: CISCOOSPFMIB::Cospflsdbtable
        class Cospfshamlinktable; //type: CISCOOSPFMIB::Cospfshamlinktable
        class Cospflocallsdbtable; //type: CISCOOSPFMIB::Cospflocallsdbtable
        class Cospfvirtlocallsdbtable; //type: CISCOOSPFMIB::Cospfvirtlocallsdbtable
        class Cospfshamlinknbrtable; //type: CISCOOSPFMIB::Cospfshamlinknbrtable
        class Cospfshamlinkstable; //type: CISCOOSPFMIB::Cospfshamlinkstable

        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfgeneralgroup> cospfgeneralgroup;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospflsdbtable> cospflsdbtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfshamlinktable> cospfshamlinktable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospflocallsdbtable> cospflocallsdbtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfvirtlocallsdbtable> cospfvirtlocallsdbtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfshamlinknbrtable> cospfshamlinknbrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfshamlinkstable> cospfshamlinkstable;
        
}; // CISCOOSPFMIB


class CISCOOSPFMIB::Cospfgeneralgroup : public ydk::Entity
{
    public:
        Cospfgeneralgroup();
        ~Cospfgeneralgroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cospfrfc1583compatibility; //type: boolean
        ydk::YLeaf cospfopaquelsasupport; //type: boolean
        ydk::YLeaf cospftrafficengineeringsupport; //type: boolean
        ydk::YLeaf cospfopaqueaslsacount; //type: uint32
        ydk::YLeaf cospfopaqueaslsacksumsum; //type: uint32

}; // CISCOOSPFMIB::Cospfgeneralgroup


class CISCOOSPFMIB::Cospflsdbtable : public ydk::Entity
{
    public:
        Cospflsdbtable();
        ~Cospflsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cospflsdbentry; //type: CISCOOSPFMIB::Cospflsdbtable::Cospflsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospflsdbtable::Cospflsdbentry> > cospflsdbentry;
        
}; // CISCOOSPFMIB::Cospflsdbtable


class CISCOOSPFMIB::Cospflsdbtable::Cospflsdbentry : public ydk::Entity
{
    public:
        Cospflsdbentry();
        ~Cospflsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: string (refers to cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospflsdbtable::Ospflsdbentry::ospflsdbareaid)
        ydk::YLeaf ospflsdbareaid;
        ydk::YLeaf cospflsdbtype; //type: Cospflsdbtype
        //type: string (refers to cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospflsdbtable::Ospflsdbentry::ospflsdblsid)
        ydk::YLeaf ospflsdblsid;
        //type: string (refers to cisco_ios_xe::OSPF_MIB::OSPFMIB::Ospflsdbtable::Ospflsdbentry::ospflsdbrouterid)
        ydk::YLeaf ospflsdbrouterid;
        ydk::YLeaf cospflsdbsequence; //type: int32
        ydk::YLeaf cospflsdbage; //type: int32
        ydk::YLeaf cospflsdbchecksum; //type: int32
        ydk::YLeaf cospflsdbadvertisement; //type: binary
        class Cospflsdbtype;

}; // CISCOOSPFMIB::Cospflsdbtable::Cospflsdbentry


class CISCOOSPFMIB::Cospfshamlinktable : public ydk::Entity
{
    public:
        Cospfshamlinktable();
        ~Cospfshamlinktable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cospfshamlinkentry; //type: CISCOOSPFMIB::Cospfshamlinktable::Cospfshamlinkentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfshamlinktable::Cospfshamlinkentry> > cospfshamlinkentry;
        
}; // CISCOOSPFMIB::Cospfshamlinktable


class CISCOOSPFMIB::Cospfshamlinktable::Cospfshamlinkentry : public ydk::Entity
{
    public:
        Cospfshamlinkentry();
        ~Cospfshamlinkentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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

}; // CISCOOSPFMIB::Cospfshamlinktable::Cospfshamlinkentry


class CISCOOSPFMIB::Cospflocallsdbtable : public ydk::Entity
{
    public:
        Cospflocallsdbtable();
        ~Cospflocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cospflocallsdbentry; //type: CISCOOSPFMIB::Cospflocallsdbtable::Cospflocallsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospflocallsdbtable::Cospflocallsdbentry> > cospflocallsdbentry;
        
}; // CISCOOSPFMIB::Cospflocallsdbtable


class CISCOOSPFMIB::Cospflocallsdbtable::Cospflocallsdbentry : public ydk::Entity
{
    public:
        Cospflocallsdbentry();
        ~Cospflocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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

}; // CISCOOSPFMIB::Cospflocallsdbtable::Cospflocallsdbentry


class CISCOOSPFMIB::Cospfvirtlocallsdbtable : public ydk::Entity
{
    public:
        Cospfvirtlocallsdbtable();
        ~Cospfvirtlocallsdbtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cospfvirtlocallsdbentry; //type: CISCOOSPFMIB::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry> > cospfvirtlocallsdbentry;
        
}; // CISCOOSPFMIB::Cospfvirtlocallsdbtable


class CISCOOSPFMIB::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry : public ydk::Entity
{
    public:
        Cospfvirtlocallsdbentry();
        ~Cospfvirtlocallsdbentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

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

}; // CISCOOSPFMIB::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry


class CISCOOSPFMIB::Cospfshamlinknbrtable : public ydk::Entity
{
    public:
        Cospfshamlinknbrtable();
        ~Cospfshamlinknbrtable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cospfshamlinknbrentry; //type: CISCOOSPFMIB::Cospfshamlinknbrtable::Cospfshamlinknbrentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfshamlinknbrtable::Cospfshamlinknbrentry> > cospfshamlinknbrentry;
        
}; // CISCOOSPFMIB::Cospfshamlinknbrtable


class CISCOOSPFMIB::Cospfshamlinknbrtable::Cospfshamlinknbrentry : public ydk::Entity
{
    public:
        Cospfshamlinknbrentry();
        ~Cospfshamlinknbrentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cospfshamlinkslocalipaddrtype; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfshamlinkstable::Cospfshamlinksentry::cospfshamlinkslocalipaddr)
        ydk::YLeaf cospfshamlinkslocalipaddr;
        ydk::YLeaf cospfshamlinknbrarea; //type: string
        ydk::YLeaf cospfshamlinknbripaddrtype; //type: InetAddressType
        ydk::YLeaf cospfshamlinknbripaddr; //type: binary
        ydk::YLeaf cospfshamlinknbrrtrid; //type: string
        ydk::YLeaf cospfshamlinknbroptions; //type: int32
        ydk::YLeaf cospfshamlinknbrstate; //type: Cospfshamlinknbrstate
        ydk::YLeaf cospfshamlinknbrevents; //type: uint32
        ydk::YLeaf cospfshamlinknbrlsretransqlen; //type: uint32
        ydk::YLeaf cospfshamlinknbrhellosuppressed; //type: boolean
        class Cospfshamlinknbrstate;

}; // CISCOOSPFMIB::Cospfshamlinknbrtable::Cospfshamlinknbrentry


class CISCOOSPFMIB::Cospfshamlinkstable : public ydk::Entity
{
    public:
        Cospfshamlinkstable();
        ~Cospfshamlinkstable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cospfshamlinksentry; //type: CISCOOSPFMIB::Cospfshamlinkstable::Cospfshamlinksentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::Cospfshamlinkstable::Cospfshamlinksentry> > cospfshamlinksentry;
        
}; // CISCOOSPFMIB::Cospfshamlinkstable


class CISCOOSPFMIB::Cospfshamlinkstable::Cospfshamlinksentry : public ydk::Entity
{
    public:
        Cospfshamlinksentry();
        ~Cospfshamlinksentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cospfshamlinksareaid; //type: string
        ydk::YLeaf cospfshamlinkslocalipaddrtype; //type: InetAddressType
        ydk::YLeaf cospfshamlinkslocalipaddr; //type: binary
        ydk::YLeaf cospfshamlinksremoteipaddrtype; //type: InetAddressType
        ydk::YLeaf cospfshamlinksremoteipaddr; //type: binary
        ydk::YLeaf cospfshamlinksretransinterval; //type: int32
        ydk::YLeaf cospfshamlinkshellointerval; //type: int32
        ydk::YLeaf cospfshamlinksrtrdeadinterval; //type: int32
        ydk::YLeaf cospfshamlinksstate; //type: Cospfshamlinksstate
        ydk::YLeaf cospfshamlinksevents; //type: uint32
        ydk::YLeaf cospfshamlinksmetric; //type: int32
        class Cospfshamlinksstate;

}; // CISCOOSPFMIB::Cospfshamlinkstable::Cospfshamlinksentry

class CISCOOSPFMIB::Cospflsdbtable::Cospflsdbentry::Cospflsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf areaOpaqueLink;
        static const ydk::Enum::YLeaf asOpaqueLink;

};

class CISCOOSPFMIB::Cospfshamlinktable::Cospfshamlinkentry::Cospfshamlinkstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};

class CISCOOSPFMIB::Cospflocallsdbtable::Cospflocallsdbentry::Cospflocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class CISCOOSPFMIB::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::Cospfvirtlocallsdbtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class CISCOOSPFMIB::Cospfshamlinknbrtable::Cospfshamlinknbrentry::Cospfshamlinknbrstate : public ydk::Enum
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

class CISCOOSPFMIB::Cospfshamlinkstable::Cospfshamlinksentry::Cospfshamlinksstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};


}
}

#endif /* _CISCO_OSPF_MIB_ */

