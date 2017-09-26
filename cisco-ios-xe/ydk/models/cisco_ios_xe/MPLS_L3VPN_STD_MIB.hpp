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

        class Mplsl3Vpnscalars; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnscalars
        class Mplsl3Vpnifconftable; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable
        class Mplsl3Vpnvrftable; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable
        class Mplsl3Vpnvrfrttable; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable
        class Mplsl3Vpnvrfrtetable; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable

        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable> mplsl3vpnifconftable;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnscalars> mplsl3vpnscalars;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable> mplsl3vpnvrfrtetable;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable> mplsl3vpnvrfrttable;
        std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable> mplsl3vpnvrftable;
        
}; // MPLSL3VPNSTDMIB


class MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable : public ydk::Entity
{
    public:
        Mplsl3Vpnifconftable();
        ~Mplsl3Vpnifconftable();

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

        class Mplsl3Vpnifconfentry; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry> > mplsl3vpnifconfentry;
        
}; // MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable


class MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry : public ydk::Entity
{
    public:
        Mplsl3Vpnifconfentry();
        ~Mplsl3Vpnifconfentry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::mplsl3vpnvrfname)
        ydk::YLeaf mplsl3vpnvrfname;
        ydk::YLeaf mplsl3vpnifconfindex; //type: int32
        ydk::YLeaf mplsl3vpnifvpnclassification; //type: Mplsl3Vpnifvpnclassification
        ydk::YLeaf mplsl3vpnifvpnroutedistprotocol; //type: Mplsl3Vpnifvpnroutedistprotocol
        ydk::YLeaf mplsl3vpnifconfstoragetype; //type: StorageType
        ydk::YLeaf mplsl3vpnifconfrowstatus; //type: RowStatus
        class Mplsl3Vpnifvpnclassification;

}; // MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry


class MPLSL3VPNSTDMIB::Mplsl3Vpnscalars : public ydk::Entity
{
    public:
        Mplsl3Vpnscalars();
        ~Mplsl3Vpnscalars();

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

}; // MPLSL3VPNSTDMIB::Mplsl3Vpnscalars


class MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable : public ydk::Entity
{
    public:
        Mplsl3Vpnvrfrtetable();
        ~Mplsl3Vpnvrfrtetable();

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

        class Mplsl3Vpnvrfrteentry; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry> > mplsl3vpnvrfrteentry;
        
}; // MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable


class MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry : public ydk::Entity
{
    public:
        Mplsl3Vpnvrfrteentry();
        ~Mplsl3Vpnvrfrteentry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::mplsl3vpnvrfname)
        ydk::YLeaf mplsl3vpnvrfname;
        ydk::YLeaf mplsl3vpnvrfrteinetcidrdesttype; //type: InetAddressType
        ydk::YLeaf mplsl3vpnvrfrteinetcidrdest; //type: binary
        ydk::YLeaf mplsl3vpnvrfrteinetcidrpfxlen; //type: uint32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrpolicy; //type: string
        ydk::YLeaf mplsl3vpnvrfrteinetcidrnhoptype; //type: InetAddressType
        ydk::YLeaf mplsl3vpnvrfrteinetcidrnexthop; //type: binary
        ydk::YLeaf mplsl3vpnvrfrteinetcidrifindex; //type: int32
        ydk::YLeaf mplsl3vpnvrfrteinetcidrtype; //type: Mplsl3Vpnvrfrteinetcidrtype
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
        class Mplsl3Vpnvrfrteinetcidrtype;

}; // MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry


class MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable : public ydk::Entity
{
    public:
        Mplsl3Vpnvrfrttable();
        ~Mplsl3Vpnvrfrttable();

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

        class Mplsl3Vpnvrfrtentry; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry> > mplsl3vpnvrfrtentry;
        
}; // MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable


class MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry : public ydk::Entity
{
    public:
        Mplsl3Vpnvrfrtentry();
        ~Mplsl3Vpnvrfrtentry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::mplsl3vpnvrfname)
        ydk::YLeaf mplsl3vpnvrfname;
        ydk::YLeaf mplsl3vpnvrfrtindex; //type: uint32
        ydk::YLeaf mplsl3vpnvrfrttype; //type: MplsL3VpnRtType
        ydk::YLeaf mplsl3vpnvrfrt; //type: binary
        ydk::YLeaf mplsl3vpnvrfrtdescr; //type: string
        ydk::YLeaf mplsl3vpnvrfrtrowstatus; //type: RowStatus
        ydk::YLeaf mplsl3vpnvrfrtstoragetype; //type: StorageType

}; // MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrttable::Mplsl3Vpnvrfrtentry


class MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable : public ydk::Entity
{
    public:
        Mplsl3Vpnvrftable();
        ~Mplsl3Vpnvrftable();

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

        class Mplsl3Vpnvrfentry; //type: MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry

        std::vector<std::shared_ptr<cisco_ios_xe::MPLS_L3VPN_STD_MIB::MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry> > mplsl3vpnvrfentry;
        
}; // MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable


class MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry : public ydk::Entity
{
    public:
        Mplsl3Vpnvrfentry();
        ~Mplsl3Vpnvrfentry();

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
        ydk::YLeaf mplsl3vpnvrfoperstatus; //type: Mplsl3Vpnvrfoperstatus
        ydk::YLeaf mplsl3vpnvrfactiveinterfaces; //type: uint32
        ydk::YLeaf mplsl3vpnvrfassociatedinterfaces; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfmidrtethresh; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfhighrtethresh; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfmaxroutes; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconflastchanged; //type: uint32
        ydk::YLeaf mplsl3vpnvrfconfrowstatus; //type: RowStatus
        ydk::YLeaf mplsl3vpnvrfconfadminstatus; //type: Mplsl3Vpnvrfconfadminstatus
        ydk::YLeaf mplsl3vpnvrfconfstoragetype; //type: StorageType
        ydk::YLeaf mplsl3vpnvrfsecillegallblvltns; //type: uint32
        ydk::YLeaf mplsl3vpnvrfsecdiscontinuitytime; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfroutesadded; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfroutesdeleted; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfcurrnumroutes; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfroutesdropped; //type: uint32
        ydk::YLeaf mplsl3vpnvrfperfdisctime; //type: uint32
        class Mplsl3Vpnvrfoperstatus;
        class Mplsl3Vpnvrfconfadminstatus;

}; // MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry

class MplsL3VpnRtType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;
        static const ydk::Enum::YLeaf both;

};

class MPLSL3VPNSTDMIB::Mplsl3Vpnifconftable::Mplsl3Vpnifconfentry::Mplsl3Vpnifvpnclassification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf carrierOfCarrier;
        static const ydk::Enum::YLeaf enterprise;
        static const ydk::Enum::YLeaf interProvider;

};

class MPLSL3VPNSTDMIB::Mplsl3Vpnvrfrtetable::Mplsl3Vpnvrfrteentry::Mplsl3Vpnvrfrteinetcidrtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf reject;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf remote;
        static const ydk::Enum::YLeaf blackhole;

};

class MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfoperstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

};

class MPLSL3VPNSTDMIB::Mplsl3Vpnvrftable::Mplsl3Vpnvrfentry::Mplsl3Vpnvrfconfadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};


}
}

#endif /* _MPLS_L3VPN_STD_MIB_ */

