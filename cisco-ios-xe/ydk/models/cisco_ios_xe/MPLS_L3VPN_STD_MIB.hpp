#ifndef _MPLS_L3VPN_STD_MIB_
#define _MPLS_L3VPN_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_L3VPN_STD_MIB {

class MPLSL3VPNSTDMIB : public ydk::Entity
{
    public:
        MPLSL3VPNSTDMIB();
        ~MPLSL3VPNSTDMIB();

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

        class MplsL3VpnScalars; //type: MPLSL3VPNSTDMIB::MplsL3VpnScalars
        class MplsL3VpnIfConfTable; //type: MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable
        class MplsL3VpnVrfTable; //type: MPLSL3VPNSTDMIB::MplsL3VpnVrfTable
        class MplsL3VpnVrfRTTable; //type: MPLSL3VPNSTDMIB::MplsL3VpnVrfRTTable
        class MplsL3VpnVrfRteTable; //type: MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable

        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnScalars> mplsl3vpnscalars;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable> mplsl3vpnifconftable;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnVrfTable> mplsl3vpnvrftable;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnVrfRTTable> mplsl3vpnvrfrttable;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable> mplsl3vpnvrfrtetable;
        
}; // MPLSL3VPNSTDMIB


class MPLSL3VPNSTDMIB::MplsL3VpnScalars : public ydk::Entity
{
    public:
        MplsL3VpnScalars();
        ~MplsL3VpnScalars();

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

        ydk::YLeaf mplsl3vpnconfiguredvrfs; //type: uint32
        ydk::YLeaf mplsl3vpnactivevrfs; //type: uint32
        ydk::YLeaf mplsl3vpnconnectedinterfaces; //type: uint32
        ydk::YLeaf mplsl3vpnnotificationenable; //type: boolean
        ydk::YLeaf mplsl3vpnvrfconfmaxpossrts; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfrtemxthrshtime; //type: uint32
        ydk::YLeaf mplsl3vpnilllblrcvthrsh; //type: uint32

}; // MPLSL3VPNSTDMIB::MplsL3VpnScalars


class MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable : public ydk::Entity
{
    public:
        MplsL3VpnIfConfTable();
        ~MplsL3VpnIfConfTable();

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

        class MplsL3VpnIfConfEntry; //type: MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable::MplsL3VpnIfConfEntry

        ydk::YList mplsl3vpnifconfentry;
        
}; // MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable


class MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable::MplsL3VpnIfConfEntry : public ydk::Entity
{
    public:
        MplsL3VpnIfConfEntry();
        ~MplsL3VpnIfConfEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry::mplsl3vpnvrfname)
        ydk::YLeaf mplsl3vpnvrfname;
        ydk::YLeaf mplsl3vpnifconfindex; //type: int32
        ydk::YLeaf mplsl3vpnifvpnclassification; //type: MplsL3VpnIfVpnClassification
        ydk::YLeaf mplsl3vpnifvpnroutedistprotocol; //type: MplsL3VpnIfVpnRouteDistProtocol
        ydk::YLeaf mplsl3vpnifconfstoragetype; //type: StorageType
        ydk::YLeaf mplsl3vpnifconfrowstatus; //type: RowStatus
        class MplsL3VpnIfVpnClassification;

}; // MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable::MplsL3VpnIfConfEntry


class MPLSL3VPNSTDMIB::MplsL3VpnVrfTable : public ydk::Entity
{
    public:
        MplsL3VpnVrfTable();
        ~MplsL3VpnVrfTable();

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

        class MplsL3VpnVrfEntry; //type: MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry

        ydk::YList mplsl3vpnvrfentry;
        
}; // MPLSL3VPNSTDMIB::MplsL3VpnVrfTable


class MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry : public ydk::Entity
{
    public:
        MplsL3VpnVrfEntry();
        ~MplsL3VpnVrfEntry();

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

        ydk::YLeaf mplsl3vpnvrfname; //type: binary
        ydk::YLeaf mplsl3vpnvrfvpnid; //type: binary
        ydk::YLeaf mplsl3vpnvrfdescription; //type: string
        ydk::YLeaf mplsl3vpnvrfrd; //type: binary
        ydk::YLeaf mplsl3vpnvrfcreationtime; //type: uint32
        ydk::YLeaf mplsl3vpnvrfoperstatus; //type: MplsL3VpnVrfOperStatus
        ydk::YLeaf mplsl3vpnvrfactiveinterfaces; //type: uint32
        ydk::YLeaf mplsl3vpnvrfassociatedinterfaces; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfmidrtethresh; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfhighrtethresh; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfmaxroutes; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconflastchanged; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfrowstatus; //type: RowStatus
        ydk::YLeaf mplsl3vpnvrfconfadminstatus; //type: MplsL3VpnVrfConfAdminStatus
        ydk::YLeaf mplsl3vpnvrfconfstoragetype; //type: StorageType
        ydk::YLeaf mplsl3vpnvrfsecillegallblvltns; //type: uint32
        ydk::YLeaf mplsl3vpnvrfsecdiscontinuitytime; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfroutesadded; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfroutesdeleted; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfcurrnumroutes; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfroutesdropped; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfdisctime; //type: uint32
        class MplsL3VpnVrfOperStatus;
        class MplsL3VpnVrfConfAdminStatus;

}; // MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry


class MPLSL3VPNSTDMIB::MplsL3VpnVrfRTTable : public ydk::Entity
{
    public:
        MplsL3VpnVrfRTTable();
        ~MplsL3VpnVrfRTTable();

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

        class MplsL3VpnVrfRTEntry; //type: MPLSL3VPNSTDMIB::MplsL3VpnVrfRTTable::MplsL3VpnVrfRTEntry

        ydk::YList mplsl3vpnvrfrtentry;
        
}; // MPLSL3VPNSTDMIB::MplsL3VpnVrfRTTable


class MPLSL3VPNSTDMIB::MplsL3VpnVrfRTTable::MplsL3VpnVrfRTEntry : public ydk::Entity
{
    public:
        MplsL3VpnVrfRTEntry();
        ~MplsL3VpnVrfRTEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry::mplsl3vpnvrfname)
        ydk::YLeaf mplsl3vpnvrfname;
        ydk::YLeaf mplsl3vpnvrfrtindex; //type: uint32
        ydk::YLeaf mplsl3vpnvrfrttype; //type: MplsL3VpnRtType
        ydk::YLeaf mplsl3vpnvrfrt; //type: binary
        ydk::YLeaf mplsl3vpnvrfrtdescr; //type: string
        ydk::YLeaf mplsl3vpnvrfrtrowstatus; //type: RowStatus
        ydk::YLeaf mplsl3vpnvrfrtstoragetype; //type: StorageType

}; // MPLSL3VPNSTDMIB::MplsL3VpnVrfRTTable::MplsL3VpnVrfRTEntry


class MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable : public ydk::Entity
{
    public:
        MplsL3VpnVrfRteTable();
        ~MplsL3VpnVrfRteTable();

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

        class MplsL3VpnVrfRteEntry; //type: MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable::MplsL3VpnVrfRteEntry

        ydk::YList mplsl3vpnvrfrteentry;
        
}; // MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable


class MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable::MplsL3VpnVrfRteEntry : public ydk::Entity
{
    public:
        MplsL3VpnVrfRteEntry();
        ~MplsL3VpnVrfRteEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry::mplsl3vpnvrfname)
        ydk::YLeaf mplsl3vpnvrfname;
        ydk::YLeaf mplsl3vpnvrfrteinetcidrdesttype; //type: InetAddressType
        ydk::YLeaf mplsl3vpnvrfrteinetcidrdest; //type: binary
        ydk::YLeaf mplsl3vpnvrfrteinetcidrpfxlen; //type: uint32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrpolicy; //type: string
        ydk::YLeaf mplsl3vpnvrfrteinetcidrnhoptype; //type: InetAddressType
        ydk::YLeaf mplsl3vpnvrfrteinetcidrnexthop; //type: binary
        ydk::YLeaf mplsl3vpnvrfrteinetcidrifindex; //type: int32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrtype; //type: MplsL3VpnVrfRteInetCidrType
        ydk::YLeaf mplsl3vpnvrfrteinetcidrproto; //type: IANAipRouteProtocol
        ydk::YLeaf mplsl3vpnvrfrteinetcidrage; //type: uint32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrnexthopas; //type: uint32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrmetric1; //type: int32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrmetric2; //type: int32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrmetric3; //type: int32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrmetric4; //type: int32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrmetric5; //type: int32
        ydk::YLeaf mplsl3vpnvrfrtexcpointer; //type: binary
        ydk::YLeaf mplsl3vpnvrfrteinetcidrstatus; //type: RowStatus
        class MplsL3VpnVrfRteInetCidrType;

}; // MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable::MplsL3VpnVrfRteEntry

class MplsL3VpnRtType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;
        static const ydk::Enum::YLeaf both;

};

class MPLSL3VPNSTDMIB::MplsL3VpnIfConfTable::MplsL3VpnIfConfEntry::MplsL3VpnIfVpnClassification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf carrierOfCarrier;
        static const ydk::Enum::YLeaf enterprise;
        static const ydk::Enum::YLeaf interProvider;

};

class MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry::MplsL3VpnVrfOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class MPLSL3VPNSTDMIB::MplsL3VpnVrfTable::MplsL3VpnVrfEntry::MplsL3VpnVrfConfAdminStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};

class MPLSL3VPNSTDMIB::MplsL3VpnVrfRteTable::MplsL3VpnVrfRteEntry::MplsL3VpnVrfRteInetCidrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;
        static const ydk::Enum::YLeaf blackhole;

};


}
}

#endif /* _MPLS_L3VPN_STD_MIB_ */

