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

        class CospfGeneralGroup; //type: CISCOOSPFMIB::CospfGeneralGroup
        class CospfLsdbTable; //type: CISCOOSPFMIB::CospfLsdbTable
        class CospfShamLinkTable; //type: CISCOOSPFMIB::CospfShamLinkTable
        class CospfLocalLsdbTable; //type: CISCOOSPFMIB::CospfLocalLsdbTable
        class CospfVirtLocalLsdbTable; //type: CISCOOSPFMIB::CospfVirtLocalLsdbTable
        class CospfShamLinkNbrTable; //type: CISCOOSPFMIB::CospfShamLinkNbrTable
        class CospfShamLinksTable; //type: CISCOOSPFMIB::CospfShamLinksTable

        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfGeneralGroup> cospfgeneralgroup;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfLsdbTable> cospflsdbtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfShamLinkTable> cospfshamlinktable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfLocalLsdbTable> cospflocallsdbtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfVirtLocalLsdbTable> cospfvirtlocallsdbtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfShamLinkNbrTable> cospfshamlinknbrtable;
        std::shared_ptr<cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfShamLinksTable> cospfshamlinkstable;
        
}; // CISCOOSPFMIB


class CISCOOSPFMIB::CospfGeneralGroup : public ydk::Entity
{
    public:
        CospfGeneralGroup();
        ~CospfGeneralGroup();

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

}; // CISCOOSPFMIB::CospfGeneralGroup


class CISCOOSPFMIB::CospfLsdbTable : public ydk::Entity
{
    public:
        CospfLsdbTable();
        ~CospfLsdbTable();

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

        class CospfLsdbEntry; //type: CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry

        ydk::YList cospflsdbentry;
        
}; // CISCOOSPFMIB::CospfLsdbTable


class CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry : public ydk::Entity
{
    public:
        CospfLsdbEntry();
        ~CospfLsdbEntry();

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

        //type: string (refers to cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfLsdbTable::OspfLsdbEntry::ospflsdbareaid)
        ydk::YLeaf ospflsdbareaid;
        ydk::YLeaf cospflsdbtype; //type: CospfLsdbType
        //type: string (refers to cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfLsdbTable::OspfLsdbEntry::ospflsdblsid)
        ydk::YLeaf ospflsdblsid;
        //type: string (refers to cisco_ios_xe::OSPF_MIB::OSPFMIB::OspfLsdbTable::OspfLsdbEntry::ospflsdbrouterid)
        ydk::YLeaf ospflsdbrouterid;
        ydk::YLeaf cospflsdbsequence; //type: int32
        ydk::YLeaf cospflsdbage; //type: int32
        ydk::YLeaf cospflsdbchecksum; //type: int32
        ydk::YLeaf cospflsdbadvertisement; //type: binary
        class CospfLsdbType;

}; // CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry


class CISCOOSPFMIB::CospfShamLinkTable : public ydk::Entity
{
    public:
        CospfShamLinkTable();
        ~CospfShamLinkTable();

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

        class CospfShamLinkEntry; //type: CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry

        ydk::YList cospfshamlinkentry;
        
}; // CISCOOSPFMIB::CospfShamLinkTable


class CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry : public ydk::Entity
{
    public:
        CospfShamLinkEntry();
        ~CospfShamLinkEntry();

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
        ydk::YLeaf cospfshamlinkstate; //type: CospfShamLinkState
        ydk::YLeaf cospfshamlinkevents; //type: uint32
        ydk::YLeaf cospfshamlinkmetric; //type: int32
        class CospfShamLinkState;

}; // CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry


class CISCOOSPFMIB::CospfLocalLsdbTable : public ydk::Entity
{
    public:
        CospfLocalLsdbTable();
        ~CospfLocalLsdbTable();

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

        class CospfLocalLsdbEntry; //type: CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry

        ydk::YList cospflocallsdbentry;
        
}; // CISCOOSPFMIB::CospfLocalLsdbTable


class CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry : public ydk::Entity
{
    public:
        CospfLocalLsdbEntry();
        ~CospfLocalLsdbEntry();

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
        ydk::YLeaf cospflocallsdbtype; //type: CospfLocalLsdbType
        ydk::YLeaf cospflocallsdblsid; //type: string
        ydk::YLeaf cospflocallsdbrouterid; //type: string
        ydk::YLeaf cospflocallsdbsequence; //type: int32
        ydk::YLeaf cospflocallsdbage; //type: int32
        ydk::YLeaf cospflocallsdbchecksum; //type: uint32
        ydk::YLeaf cospflocallsdbadvertisement; //type: binary
        class CospfLocalLsdbType;

}; // CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry


class CISCOOSPFMIB::CospfVirtLocalLsdbTable : public ydk::Entity
{
    public:
        CospfVirtLocalLsdbTable();
        ~CospfVirtLocalLsdbTable();

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

        class CospfVirtLocalLsdbEntry; //type: CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry

        ydk::YList cospfvirtlocallsdbentry;
        
}; // CISCOOSPFMIB::CospfVirtLocalLsdbTable


class CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry : public ydk::Entity
{
    public:
        CospfVirtLocalLsdbEntry();
        ~CospfVirtLocalLsdbEntry();

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
        ydk::YLeaf cospfvirtlocallsdbtype; //type: CospfVirtLocalLsdbType
        ydk::YLeaf cospfvirtlocallsdblsid; //type: string
        ydk::YLeaf cospfvirtlocallsdbrouterid; //type: string
        ydk::YLeaf cospfvirtlocallsdbsequence; //type: int32
        ydk::YLeaf cospfvirtlocallsdbage; //type: int32
        ydk::YLeaf cospfvirtlocallsdbchecksum; //type: uint32
        ydk::YLeaf cospfvirtlocallsdbadvertisement; //type: binary
        class CospfVirtLocalLsdbType;

}; // CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry


class CISCOOSPFMIB::CospfShamLinkNbrTable : public ydk::Entity
{
    public:
        CospfShamLinkNbrTable();
        ~CospfShamLinkNbrTable();

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

        class CospfShamLinkNbrEntry; //type: CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry

        ydk::YList cospfshamlinknbrentry;
        
}; // CISCOOSPFMIB::CospfShamLinkNbrTable


class CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry : public ydk::Entity
{
    public:
        CospfShamLinkNbrEntry();
        ~CospfShamLinkNbrEntry();

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
        //type: binary (refers to cisco_ios_xe::CISCO_OSPF_MIB::CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::cospfshamlinkslocalipaddr)
        ydk::YLeaf cospfshamlinkslocalipaddr;
        ydk::YLeaf cospfshamlinknbrarea; //type: string
        ydk::YLeaf cospfshamlinknbripaddrtype; //type: InetAddressType
        ydk::YLeaf cospfshamlinknbripaddr; //type: binary
        ydk::YLeaf cospfshamlinknbrrtrid; //type: string
        ydk::YLeaf cospfshamlinknbroptions; //type: int32
        ydk::YLeaf cospfshamlinknbrstate; //type: CospfShamLinkNbrState
        ydk::YLeaf cospfshamlinknbrevents; //type: uint32
        ydk::YLeaf cospfshamlinknbrlsretransqlen; //type: uint32
        ydk::YLeaf cospfshamlinknbrhellosuppressed; //type: boolean
        class CospfShamLinkNbrState;

}; // CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry


class CISCOOSPFMIB::CospfShamLinksTable : public ydk::Entity
{
    public:
        CospfShamLinksTable();
        ~CospfShamLinksTable();

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

        class CospfShamLinksEntry; //type: CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry

        ydk::YList cospfshamlinksentry;
        
}; // CISCOOSPFMIB::CospfShamLinksTable


class CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry : public ydk::Entity
{
    public:
        CospfShamLinksEntry();
        ~CospfShamLinksEntry();

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
        ydk::YLeaf cospfshamlinksstate; //type: CospfShamLinksState
        ydk::YLeaf cospfshamlinksevents; //type: uint32
        ydk::YLeaf cospfshamlinksmetric; //type: int32
        class CospfShamLinksState;

}; // CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry

class CISCOOSPFMIB::CospfLsdbTable::CospfLsdbEntry::CospfLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf areaOpaqueLink;
        static const ydk::Enum::YLeaf asOpaqueLink;

};

class CISCOOSPFMIB::CospfShamLinkTable::CospfShamLinkEntry::CospfShamLinkState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};

class CISCOOSPFMIB::CospfLocalLsdbTable::CospfLocalLsdbEntry::CospfLocalLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class CISCOOSPFMIB::CospfVirtLocalLsdbTable::CospfVirtLocalLsdbEntry::CospfVirtLocalLsdbType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf localOpaqueLink;

};

class CISCOOSPFMIB::CospfShamLinkNbrTable::CospfShamLinkNbrEntry::CospfShamLinkNbrState : public ydk::Enum
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

class CISCOOSPFMIB::CospfShamLinksTable::CospfShamLinksEntry::CospfShamLinksState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf pointToPoint;

};


}
}

#endif /* _CISCO_OSPF_MIB_ */

