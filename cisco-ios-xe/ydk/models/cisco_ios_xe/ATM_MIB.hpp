#ifndef _ATM_MIB_
#define _ATM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace ATM_MIB {

class ATMMIB : public ydk::Entity
{
    public:
        ATMMIB();
        ~ATMMIB();

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

        class AtmMIBObjects; //type: ATMMIB::AtmMIBObjects
        class AtmInterfaceConfTable; //type: ATMMIB::AtmInterfaceConfTable
        class AtmInterfaceDs3PlcpTable; //type: ATMMIB::AtmInterfaceDs3PlcpTable
        class AtmInterfaceTCTable; //type: ATMMIB::AtmInterfaceTCTable
        class AtmTrafficDescrParamTable; //type: ATMMIB::AtmTrafficDescrParamTable
        class AtmVplTable; //type: ATMMIB::AtmVplTable
        class AtmVclTable; //type: ATMMIB::AtmVclTable
        class AtmVpCrossConnectTable; //type: ATMMIB::AtmVpCrossConnectTable
        class AtmVcCrossConnectTable; //type: ATMMIB::AtmVcCrossConnectTable
        class Aal5VccTable; //type: ATMMIB::Aal5VccTable

        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmMIBObjects> atmmibobjects;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmInterfaceConfTable> atminterfaceconftable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmInterfaceDs3PlcpTable> atminterfaceds3plcptable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmInterfaceTCTable> atminterfacetctable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmTrafficDescrParamTable> atmtrafficdescrparamtable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmVplTable> atmvpltable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable> atmvcltable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmVpCrossConnectTable> atmvpcrossconnecttable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::AtmVcCrossConnectTable> atmvccrossconnecttable;
        std::shared_ptr<cisco_ios_xe::ATM_MIB::ATMMIB::Aal5VccTable> aal5vcctable;
        
}; // ATMMIB


class ATMMIB::AtmMIBObjects : public ydk::Entity
{
    public:
        AtmMIBObjects();
        ~AtmMIBObjects();

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

        ydk::YLeaf atmvpcrossconnectindexnext; //type: int32
        ydk::YLeaf atmvccrossconnectindexnext; //type: int32
        ydk::YLeaf atmtrafficdescrparamindexnext; //type: int32

}; // ATMMIB::AtmMIBObjects


class ATMMIB::AtmInterfaceConfTable : public ydk::Entity
{
    public:
        AtmInterfaceConfTable();
        ~AtmInterfaceConfTable();

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

        class AtmInterfaceConfEntry; //type: ATMMIB::AtmInterfaceConfTable::AtmInterfaceConfEntry

        ydk::YList atminterfaceconfentry;
        
}; // ATMMIB::AtmInterfaceConfTable


class ATMMIB::AtmInterfaceConfTable::AtmInterfaceConfEntry : public ydk::Entity
{
    public:
        AtmInterfaceConfEntry();
        ~AtmInterfaceConfEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfacemaxvpcs; //type: int32
        ydk::YLeaf atminterfacemaxvccs; //type: int32
        ydk::YLeaf atminterfaceconfvpcs; //type: int32
        ydk::YLeaf atminterfaceconfvccs; //type: int32
        ydk::YLeaf atminterfacemaxactivevpibits; //type: int32
        ydk::YLeaf atminterfacemaxactivevcibits; //type: int32
        ydk::YLeaf atminterfaceilmivpi; //type: int32
        ydk::YLeaf atminterfaceilmivci; //type: int32
        ydk::YLeaf atminterfaceaddresstype; //type: AtmInterfaceAddressType
        ydk::YLeaf atminterfaceadminaddress; //type: string
        ydk::YLeaf atminterfacemyneighboripaddress; //type: string
        ydk::YLeaf atminterfacemyneighborifname; //type: string
        ydk::YLeaf atminterfacecurrentmaxvpibits; //type: int32
        ydk::YLeaf atminterfacecurrentmaxvcibits; //type: int32
        ydk::YLeaf atminterfacesubscraddress; //type: string
        ydk::YLeaf atmintfpvcfailures; //type: uint32
        ydk::YLeaf atmintfcurrentlyfailingpvcls; //type: uint32
        ydk::YLeaf atmintfpvcfailurestrapenable; //type: boolean
        ydk::YLeaf atmintfpvcnotificationinterval; //type: int32
        ydk::YLeaf atmpreviouslyfailedpvclinterval; //type: int32
        ydk::YLeaf catmintfcurrentlydowntouppvcls; //type: uint32
        ydk::YLeaf catmintfoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcurrentoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfsegccoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcursegccoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfendccoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcurendccoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfaisrdioamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcuraisrdioamfailingpvcls; //type: uint32
        ydk::YLeaf catmintfanyoamfailedpvcls; //type: uint32
        ydk::YLeaf catmintfcuranyoamfailingpvcls; //type: uint32
        ydk::YLeaf catmintftypeofoamfailure; //type: CatmOAMFailureType
        ydk::YLeaf catmintfoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcurrentoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfsegccoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcursegccoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfendccoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcurendccoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfaisrdioamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcuraisrdioamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintfanyoamrcovedpvcls; //type: uint32
        ydk::YLeaf catmintfcuranyoamrcovingpvcls; //type: uint32
        ydk::YLeaf catmintftypeofoamrecover; //type: CatmOAMRecoveryType
        ydk::YLeaf atmintfcurrentlydowntouppvcls; //type: uint32
        ydk::YLeaf atmintfoamfailedpvcls; //type: uint32
        ydk::YLeaf atmintfcurrentlyoamfailingpvcls; //type: uint32
        class AtmInterfaceAddressType;

}; // ATMMIB::AtmInterfaceConfTable::AtmInterfaceConfEntry


class ATMMIB::AtmInterfaceDs3PlcpTable : public ydk::Entity
{
    public:
        AtmInterfaceDs3PlcpTable();
        ~AtmInterfaceDs3PlcpTable();

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

        class AtmInterfaceDs3PlcpEntry; //type: ATMMIB::AtmInterfaceDs3PlcpTable::AtmInterfaceDs3PlcpEntry

        ydk::YList atminterfaceds3plcpentry;
        
}; // ATMMIB::AtmInterfaceDs3PlcpTable


class ATMMIB::AtmInterfaceDs3PlcpTable::AtmInterfaceDs3PlcpEntry : public ydk::Entity
{
    public:
        AtmInterfaceDs3PlcpEntry();
        ~AtmInterfaceDs3PlcpEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfaceds3plcpsefss; //type: uint32
        ydk::YLeaf atminterfaceds3plcpalarmstate; //type: AtmInterfaceDs3PlcpAlarmState
        ydk::YLeaf atminterfaceds3plcpuass; //type: uint32
        class AtmInterfaceDs3PlcpAlarmState;

}; // ATMMIB::AtmInterfaceDs3PlcpTable::AtmInterfaceDs3PlcpEntry


class ATMMIB::AtmInterfaceTCTable : public ydk::Entity
{
    public:
        AtmInterfaceTCTable();
        ~AtmInterfaceTCTable();

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

        class AtmInterfaceTCEntry; //type: ATMMIB::AtmInterfaceTCTable::AtmInterfaceTCEntry

        ydk::YList atminterfacetcentry;
        
}; // ATMMIB::AtmInterfaceTCTable


class ATMMIB::AtmInterfaceTCTable::AtmInterfaceTCEntry : public ydk::Entity
{
    public:
        AtmInterfaceTCEntry();
        ~AtmInterfaceTCEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atminterfaceocdevents; //type: uint32
        ydk::YLeaf atminterfacetcalarmstate; //type: AtmInterfaceTCAlarmState
        class AtmInterfaceTCAlarmState;

}; // ATMMIB::AtmInterfaceTCTable::AtmInterfaceTCEntry


class ATMMIB::AtmTrafficDescrParamTable : public ydk::Entity
{
    public:
        AtmTrafficDescrParamTable();
        ~AtmTrafficDescrParamTable();

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

        class AtmTrafficDescrParamEntry; //type: ATMMIB::AtmTrafficDescrParamTable::AtmTrafficDescrParamEntry

        ydk::YList atmtrafficdescrparamentry;
        
}; // ATMMIB::AtmTrafficDescrParamTable


class ATMMIB::AtmTrafficDescrParamTable::AtmTrafficDescrParamEntry : public ydk::Entity
{
    public:
        AtmTrafficDescrParamEntry();
        ~AtmTrafficDescrParamEntry();

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

        ydk::YLeaf atmtrafficdescrparamindex; //type: int32
        ydk::YLeaf atmtrafficdescrtype; //type: string
        ydk::YLeaf atmtrafficdescrparam1; //type: int32
        ydk::YLeaf atmtrafficdescrparam2; //type: int32
        ydk::YLeaf atmtrafficdescrparam3; //type: int32
        ydk::YLeaf atmtrafficdescrparam4; //type: int32
        ydk::YLeaf atmtrafficdescrparam5; //type: int32
        ydk::YLeaf atmtrafficqosclass; //type: int32
        ydk::YLeaf atmtrafficdescrrowstatus; //type: RowStatus
        ydk::YLeaf atmservicecategory; //type: AtmServiceCategory
        ydk::YLeaf atmtrafficframediscard; //type: boolean

}; // ATMMIB::AtmTrafficDescrParamTable::AtmTrafficDescrParamEntry


class ATMMIB::AtmVplTable : public ydk::Entity
{
    public:
        AtmVplTable();
        ~AtmVplTable();

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

        class AtmVplEntry; //type: ATMMIB::AtmVplTable::AtmVplEntry

        ydk::YList atmvplentry;
        
}; // ATMMIB::AtmVplTable


class ATMMIB::AtmVplTable::AtmVplEntry : public ydk::Entity
{
    public:
        AtmVplEntry();
        ~AtmVplEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atmvplvpi; //type: int32
        ydk::YLeaf atmvpladminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvploperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvpllastchange; //type: uint32
        ydk::YLeaf atmvplreceivetrafficdescrindex; //type: int32
        ydk::YLeaf atmvpltransmittrafficdescrindex; //type: int32
        ydk::YLeaf atmvplcrossconnectidentifier; //type: int32
        ydk::YLeaf atmvplrowstatus; //type: RowStatus
        ydk::YLeaf atmvplcasttype; //type: AtmConnCastType
        ydk::YLeaf atmvplconnkind; //type: AtmConnKind

}; // ATMMIB::AtmVplTable::AtmVplEntry


class ATMMIB::AtmVclTable : public ydk::Entity
{
    public:
        AtmVclTable();
        ~AtmVclTable();

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

        class AtmVclEntry; //type: ATMMIB::AtmVclTable::AtmVclEntry

        ydk::YList atmvclentry;
        
}; // ATMMIB::AtmVclTable


class ATMMIB::AtmVclTable::AtmVclEntry : public ydk::Entity
{
    public:
        AtmVclEntry();
        ~AtmVclEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf atmvclvpi; //type: int32
        ydk::YLeaf atmvclvci; //type: int32
        ydk::YLeaf atmvcladminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvcloperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvcllastchange; //type: uint32
        ydk::YLeaf atmvclreceivetrafficdescrindex; //type: int32
        ydk::YLeaf atmvcltransmittrafficdescrindex; //type: int32
        ydk::YLeaf atmvccaaltype; //type: AtmVccAalType
        ydk::YLeaf atmvccaal5cpcstransmitsdusize; //type: int32
        ydk::YLeaf atmvccaal5cpcsreceivesdusize; //type: int32
        ydk::YLeaf atmvccaal5encapstype; //type: AtmVccAal5EncapsType
        ydk::YLeaf atmvclcrossconnectidentifier; //type: int32
        ydk::YLeaf atmvclrowstatus; //type: RowStatus
        ydk::YLeaf atmvclcasttype; //type: AtmConnCastType
        ydk::YLeaf atmvclconnkind; //type: AtmConnKind
        ydk::YLeaf catmxvcloamloopbackfreq; //type: uint32
        ydk::YLeaf catmxvcloamretryfreq; //type: uint32
        ydk::YLeaf catmxvcloamupretrycount; //type: uint32
        ydk::YLeaf catmxvcloamdownretrycount; //type: uint32
        ydk::YLeaf catmxvcloamendccactcount; //type: uint32
        ydk::YLeaf catmxvcloamendccdeactcount; //type: uint32
        ydk::YLeaf catmxvcloamendccretryfreq; //type: uint32
        ydk::YLeaf catmxvcloamsegccactcount; //type: uint32
        ydk::YLeaf catmxvcloamsegccdeactcount; //type: uint32
        ydk::YLeaf catmxvcloamsegccretryfreq; //type: uint32
        ydk::YLeaf catmxvcloammanage; //type: boolean
        ydk::YLeaf catmxvcloamloopbkstatus; //type: CatmxVclOamLoopBkStatus
        ydk::YLeaf catmxvcloamvcstate; //type: CatmxVclOamVcState
        ydk::YLeaf catmxvcloamendccstatus; //type: OamCCStatus
        ydk::YLeaf catmxvcloamsegccstatus; //type: OamCCStatus
        ydk::YLeaf catmxvcloamendccvcstate; //type: OamCCVcState
        ydk::YLeaf catmxvcloamsegccvcstate; //type: OamCCVcState
        ydk::YLeaf catmxvcloamcellsreceived; //type: uint32
        ydk::YLeaf catmxvcloamcellssent; //type: uint32
        ydk::YLeaf catmxvcloamcellsdropped; //type: uint32
        ydk::YLeaf catmxvcloaminf5ais; //type: uint32
        ydk::YLeaf catmxvcloamoutf5ais; //type: uint32
        ydk::YLeaf catmxvcloaminf5rdi; //type: uint32
        ydk::YLeaf catmxvcloamoutf5rdi; //type: uint32
        class AtmVccAalType;
        class AtmVccAal5EncapsType;
        class CatmxVclOamLoopBkStatus;
        class CatmxVclOamVcState;

}; // ATMMIB::AtmVclTable::AtmVclEntry


class ATMMIB::AtmVpCrossConnectTable : public ydk::Entity
{
    public:
        AtmVpCrossConnectTable();
        ~AtmVpCrossConnectTable();

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

        class AtmVpCrossConnectEntry; //type: ATMMIB::AtmVpCrossConnectTable::AtmVpCrossConnectEntry

        ydk::YList atmvpcrossconnectentry;
        
}; // ATMMIB::AtmVpCrossConnectTable


class ATMMIB::AtmVpCrossConnectTable::AtmVpCrossConnectEntry : public ydk::Entity
{
    public:
        AtmVpCrossConnectEntry();
        ~AtmVpCrossConnectEntry();

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

        ydk::YLeaf atmvpcrossconnectindex; //type: int32
        ydk::YLeaf atmvpcrossconnectlowifindex; //type: int32
        ydk::YLeaf atmvpcrossconnectlowvpi; //type: int32
        ydk::YLeaf atmvpcrossconnecthighifindex; //type: int32
        ydk::YLeaf atmvpcrossconnecthighvpi; //type: int32
        ydk::YLeaf atmvpcrossconnectadminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvpcrossconnectl2hoperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvpcrossconnecth2loperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvpcrossconnectl2hlastchange; //type: uint32
        ydk::YLeaf atmvpcrossconnecth2llastchange; //type: uint32
        ydk::YLeaf atmvpcrossconnectrowstatus; //type: RowStatus

}; // ATMMIB::AtmVpCrossConnectTable::AtmVpCrossConnectEntry


class ATMMIB::AtmVcCrossConnectTable : public ydk::Entity
{
    public:
        AtmVcCrossConnectTable();
        ~AtmVcCrossConnectTable();

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

        class AtmVcCrossConnectEntry; //type: ATMMIB::AtmVcCrossConnectTable::AtmVcCrossConnectEntry

        ydk::YList atmvccrossconnectentry;
        
}; // ATMMIB::AtmVcCrossConnectTable


class ATMMIB::AtmVcCrossConnectTable::AtmVcCrossConnectEntry : public ydk::Entity
{
    public:
        AtmVcCrossConnectEntry();
        ~AtmVcCrossConnectEntry();

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

        ydk::YLeaf atmvccrossconnectindex; //type: int32
        ydk::YLeaf atmvccrossconnectlowifindex; //type: int32
        ydk::YLeaf atmvccrossconnectlowvpi; //type: int32
        ydk::YLeaf atmvccrossconnectlowvci; //type: int32
        ydk::YLeaf atmvccrossconnecthighifindex; //type: int32
        ydk::YLeaf atmvccrossconnecthighvpi; //type: int32
        ydk::YLeaf atmvccrossconnecthighvci; //type: int32
        ydk::YLeaf atmvccrossconnectadminstatus; //type: AtmVorXAdminStatus
        ydk::YLeaf atmvccrossconnectl2hoperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvccrossconnecth2loperstatus; //type: AtmVorXOperStatus
        ydk::YLeaf atmvccrossconnectl2hlastchange; //type: uint32
        ydk::YLeaf atmvccrossconnecth2llastchange; //type: uint32
        ydk::YLeaf atmvccrossconnectrowstatus; //type: RowStatus

}; // ATMMIB::AtmVcCrossConnectTable::AtmVcCrossConnectEntry


class ATMMIB::Aal5VccTable : public ydk::Entity
{
    public:
        Aal5VccTable();
        ~Aal5VccTable();

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

        class Aal5VccEntry; //type: ATMMIB::Aal5VccTable::Aal5VccEntry

        ydk::YList aal5vccentry;
        
}; // ATMMIB::Aal5VccTable


class ATMMIB::Aal5VccTable::Aal5VccEntry : public ydk::Entity
{
    public:
        Aal5VccEntry();
        ~Aal5VccEntry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf aal5vccvpi; //type: int32
        ydk::YLeaf aal5vccvci; //type: int32
        ydk::YLeaf aal5vcccrcerrors; //type: uint32
        ydk::YLeaf aal5vccsartimeouts; //type: uint32
        ydk::YLeaf aal5vccoversizedsdus; //type: uint32
        ydk::YLeaf caal5vccextcompenabled; //type: boolean
        ydk::YLeaf caal5vccextvoice; //type: boolean
        ydk::YLeaf caal5vccextinf5oamcells; //type: uint32
        ydk::YLeaf caal5vccextoutf5oamcells; //type: uint32
        ydk::YLeaf caal5vccinpkts; //type: uint32
        ydk::YLeaf caal5vccoutpkts; //type: uint32
        ydk::YLeaf caal5vccinoctets; //type: uint32
        ydk::YLeaf caal5vccoutoctets; //type: uint32
        ydk::YLeaf caal5vccindroppedpkts; //type: uint32
        ydk::YLeaf caal5vccoutdroppedpkts; //type: uint32
        ydk::YLeaf caal5vccindroppedoctets; //type: uint32
        ydk::YLeaf caal5vccoutdroppedoctets; //type: uint32
        ydk::YLeaf caal5vcchcinpkts; //type: uint64
        ydk::YLeaf caal5vcchcoutpkts; //type: uint64
        ydk::YLeaf caal5vcchcinoctets; //type: uint64
        ydk::YLeaf caal5vcchcoutoctets; //type: uint64

}; // ATMMIB::Aal5VccTable::Aal5VccEntry

class ATMMIB::AtmInterfaceConfTable::AtmInterfaceConfEntry::AtmInterfaceAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf private_;
        static const ydk::Enum::YLeaf nsapE164;
        static const ydk::Enum::YLeaf nativeE164;
        static const ydk::Enum::YLeaf other;

};

class ATMMIB::AtmInterfaceDs3PlcpTable::AtmInterfaceDs3PlcpEntry::AtmInterfaceDs3PlcpAlarmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAlarm;
        static const ydk::Enum::YLeaf receivedFarEndAlarm;
        static const ydk::Enum::YLeaf incomingLOF;

};

class ATMMIB::AtmInterfaceTCTable::AtmInterfaceTCEntry::AtmInterfaceTCAlarmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noAlarm;
        static const ydk::Enum::YLeaf lcdFailure;

};

class ATMMIB::AtmVclTable::AtmVclEntry::AtmVccAalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf aal1;
        static const ydk::Enum::YLeaf aal34;
        static const ydk::Enum::YLeaf aal5;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf aal2;

};

class ATMMIB::AtmVclTable::AtmVclEntry::AtmVccAal5EncapsType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vcMultiplexRoutedProtocol;
        static const ydk::Enum::YLeaf vcMultiplexBridgedProtocol8023;
        static const ydk::Enum::YLeaf vcMultiplexBridgedProtocol8025;
        static const ydk::Enum::YLeaf vcMultiplexBridgedProtocol8026;
        static const ydk::Enum::YLeaf vcMultiplexLANemulation8023;
        static const ydk::Enum::YLeaf vcMultiplexLANemulation8025;
        static const ydk::Enum::YLeaf llcEncapsulation;
        static const ydk::Enum::YLeaf multiprotocolFrameRelaySscs;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf unknown;

};

class ATMMIB::AtmVclTable::AtmVclEntry::CatmxVclOamLoopBkStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf sent;
        static const ydk::Enum::YLeaf received;
        static const ydk::Enum::YLeaf failed;

};

class ATMMIB::AtmVclTable::AtmVclEntry::CatmxVclOamVcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downRetry;
        static const ydk::Enum::YLeaf verified;
        static const ydk::Enum::YLeaf notVerified;
        static const ydk::Enum::YLeaf upRetry;
        static const ydk::Enum::YLeaf aisRDI;
        static const ydk::Enum::YLeaf aisOut;
        static const ydk::Enum::YLeaf notManaged;

};


}
}

#endif /* _ATM_MIB_ */

