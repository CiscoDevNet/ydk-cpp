#ifndef _CISCO_LICENSE_MGMT_MIB_
#define _CISCO_LICENSE_MGMT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_LICENSE_MGMT_MIB {

class CISCOLICENSEMGMTMIB : public ydk::Entity
{
    public:
        CISCOLICENSEMGMTMIB();
        ~CISCOLICENSEMGMTMIB();

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

        class ClmgmtLicenseConfiguration; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration
        class ClmgmtLicenseDeviceInformation; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation
        class ClmgmtLicenseNotifObjects; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects
        class ClmgmtLicenseActionTable; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable
        class ClmgmtLicenseActionResultTable; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable
        class ClmgmtLicenseStoreInfoTable; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable
        class ClmgmtLicenseDeviceInfoTable; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable
        class ClmgmtLicenseInfoTable; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable
        class ClmgmtLicensableFeatureTable; //type: CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable
        class ClmgmtDevCredExportActionTable; //type: CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable

        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration> clmgmtlicenseconfiguration;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation> clmgmtlicensedeviceinformation;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects> clmgmtlicensenotifobjects;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable> clmgmtlicenseactiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable> clmgmtlicenseactionresulttable;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable> clmgmtlicensestoreinfotable;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable> clmgmtlicensedeviceinfotable;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable> clmgmtlicenseinfotable;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable> clmgmtlicensablefeaturetable;
        std::shared_ptr<cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable> clmgmtdevcredexportactiontable;
        
}; // CISCOLICENSEMGMTMIB


class CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration : public ydk::Entity
{
    public:
        ClmgmtLicenseConfiguration();
        ~ClmgmtLicenseConfiguration();

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

        ydk::YLeaf clmgmtnextfreelicenseactionindex; //type: uint32

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseConfiguration


class CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation : public ydk::Entity
{
    public:
        ClmgmtLicenseDeviceInformation();
        ~ClmgmtLicenseDeviceInformation();

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

        ydk::YLeaf clmgmtnextfreedevcredexportactionindex; //type: uint32

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInformation


class CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects : public ydk::Entity
{
    public:
        ClmgmtLicenseNotifObjects();
        ~ClmgmtLicenseNotifObjects();

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

        ydk::YLeaf clmgmtlicenseusagenotifenable; //type: boolean
        ydk::YLeaf clmgmtlicensedeploymentnotifenable; //type: boolean
        ydk::YLeaf clmgmtlicenseerrornotifenable; //type: ClmgmtLicenseErrorNotifEnable
        class ClmgmtLicenseErrorNotifEnable;

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects


class CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable : public ydk::Entity
{
    public:
        ClmgmtLicenseActionTable();
        ~ClmgmtLicenseActionTable();

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

        class ClmgmtLicenseActionEntry; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry

        ydk::YList clmgmtlicenseactionentry;
        
}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable


class CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry : public ydk::Entity
{
    public:
        ClmgmtLicenseActionEntry();
        ~ClmgmtLicenseActionEntry();

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

        ydk::YLeaf clmgmtlicenseactionindex; //type: uint32
        ydk::YLeaf clmgmtlicenseactionentphysicalindex; //type: int32
        ydk::YLeaf clmgmtlicenseactiontransferprotocol; //type: ClmgmtLicenseTransferProtocol
        ydk::YLeaf clmgmtlicenseserveraddresstype; //type: InetAddressType
        ydk::YLeaf clmgmtlicenseserveraddress; //type: binary
        ydk::YLeaf clmgmtlicenseserverusername; //type: string
        ydk::YLeaf clmgmtlicenseserverpassword; //type: string
        ydk::YLeaf clmgmtlicensefile; //type: string
        ydk::YLeaf clmgmtlicensestore; //type: uint32
        ydk::YLeaf clmgmtlicenseactionlicenseindex; //type: uint32
        ydk::YLeaf clmgmtlicensepermissionticketfile; //type: string
        ydk::YLeaf clmgmtlicenserehostticketfile; //type: string
        ydk::YLeaf clmgmtlicensebackupfile; //type: string
        ydk::YLeaf clmgmtlicensestoponfailure; //type: boolean
        ydk::YLeaf clmgmtlicenseaction; //type: ClmgmtLicenseAction
        ydk::YLeaf clmgmtlicenseactionstate; //type: ClmgmtLicenseActionState
        ydk::YLeaf clmgmtlicensejobqposition; //type: uint32
        ydk::YLeaf clmgmtlicenseactionfailcause; //type: ClmgmtLicenseActionFailCause
        ydk::YLeaf clmgmtlicenseactionstoragetype; //type: StorageType
        ydk::YLeaf clmgmtlicenseactionrowstatus; //type: RowStatus
        ydk::YLeaf clmgmtlicenseaccepteula; //type: boolean
        ydk::YLeaf clmgmtlicenseeulafile; //type: string
        class ClmgmtLicenseAction;

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry


class CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable : public ydk::Entity
{
    public:
        ClmgmtLicenseActionResultTable();
        ~ClmgmtLicenseActionResultTable();

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

        class ClmgmtLicenseActionResultEntry; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry

        ydk::YList clmgmtlicenseactionresultentry;
        
}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable


class CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry : public ydk::Entity
{
    public:
        ClmgmtLicenseActionResultEntry();
        ~ClmgmtLicenseActionResultEntry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_LICENSE_MGMT_MIB::CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::clmgmtlicenseactionindex)
        ydk::YLeaf clmgmtlicenseactionindex;
        ydk::YLeaf clmgmtlicensenumber; //type: uint32
        ydk::YLeaf clmgmtlicenseindivactionstate; //type: ClmgmtLicenseActionState
        ydk::YLeaf clmgmtlicenseindivactionfailcause; //type: ClmgmtLicenseActionFailCause

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseActionResultTable::ClmgmtLicenseActionResultEntry


class CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable : public ydk::Entity
{
    public:
        ClmgmtLicenseStoreInfoTable();
        ~ClmgmtLicenseStoreInfoTable();

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

        class ClmgmtLicenseStoreInfoEntry; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry

        ydk::YList clmgmtlicensestoreinfoentry;
        
}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable


class CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry : public ydk::Entity
{
    public:
        ClmgmtLicenseStoreInfoEntry();
        ~ClmgmtLicenseStoreInfoEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtlicensestoreindex; //type: uint32
        ydk::YLeaf clmgmtlicensestorename; //type: string
        ydk::YLeaf clmgmtlicensestoretotalsize; //type: uint32
        ydk::YLeaf clmgmtlicensestoresizeremaining; //type: uint32

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseStoreInfoTable::ClmgmtLicenseStoreInfoEntry


class CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable : public ydk::Entity
{
    public:
        ClmgmtLicenseDeviceInfoTable();
        ~ClmgmtLicenseDeviceInfoTable();

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

        class ClmgmtLicenseDeviceInfoEntry; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry

        ydk::YList clmgmtlicensedeviceinfoentry;
        
}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable


class CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry : public ydk::Entity
{
    public:
        ClmgmtLicenseDeviceInfoEntry();
        ~ClmgmtLicenseDeviceInfoEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtdefaultlicensestore; //type: uint32

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseDeviceInfoTable::ClmgmtLicenseDeviceInfoEntry


class CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable : public ydk::Entity
{
    public:
        ClmgmtLicenseInfoTable();
        ~ClmgmtLicenseInfoTable();

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

        class ClmgmtLicenseInfoEntry; //type: CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry

        ydk::YList clmgmtlicenseinfoentry;
        
}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable


class CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry : public ydk::Entity
{
    public:
        ClmgmtLicenseInfoEntry();
        ~ClmgmtLicenseInfoEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtlicensestoreused; //type: uint32
        ydk::YLeaf clmgmtlicenseindex; //type: uint32
        ydk::YLeaf clmgmtlicensefeaturename; //type: string
        ydk::YLeaf clmgmtlicensefeatureversion; //type: string
        ydk::YLeaf clmgmtlicensetype; //type: ClmgmtLicenseType
        ydk::YLeaf clmgmtlicensecounted; //type: boolean
        ydk::YLeaf clmgmtlicensevalidityperiod; //type: uint32
        ydk::YLeaf clmgmtlicensevalidityperiodremaining; //type: uint32
        ydk::YLeaf clmgmtlicenseexpiredperiod; //type: uint32
        ydk::YLeaf clmgmtlicensemaxusagecount; //type: uint32
        ydk::YLeaf clmgmtlicenseusagecountremaining; //type: uint32
        ydk::YLeaf clmgmtlicenseeulastatus; //type: boolean
        ydk::YLeaf clmgmtlicensecomments; //type: string
        ydk::YLeaf clmgmtlicensestatus; //type: ClmgmtLicenseStatus
        ydk::YLeaf clmgmtlicensestartdate; //type: string
        ydk::YLeaf clmgmtlicenseenddate; //type: string
        ydk::YLeaf clmgmtlicenseperiodused; //type: uint32
        class ClmgmtLicenseType;
        class ClmgmtLicenseStatus;

}; // CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry


class CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable : public ydk::Entity
{
    public:
        ClmgmtLicensableFeatureTable();
        ~ClmgmtLicensableFeatureTable();

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

        class ClmgmtLicensableFeatureEntry; //type: CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry

        ydk::YList clmgmtlicensablefeatureentry;
        
}; // CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable


class CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry : public ydk::Entity
{
    public:
        ClmgmtLicensableFeatureEntry();
        ~ClmgmtLicensableFeatureEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf clmgmtfeatureindex; //type: uint32
        ydk::YLeaf clmgmtfeaturename; //type: string
        ydk::YLeaf clmgmtfeatureversion; //type: string
        ydk::YLeaf clmgmtfeaturevalidityperiodremaining; //type: uint32
        ydk::YLeaf clmgmtfeaturewhatiscounted; //type: string
        ydk::YLeaf clmgmtfeaturestartdate; //type: string
        ydk::YLeaf clmgmtfeatureenddate; //type: string
        ydk::YLeaf clmgmtfeatureperiodused; //type: uint32

}; // CISCOLICENSEMGMTMIB::ClmgmtLicensableFeatureTable::ClmgmtLicensableFeatureEntry


class CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable : public ydk::Entity
{
    public:
        ClmgmtDevCredExportActionTable();
        ~ClmgmtDevCredExportActionTable();

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

        class ClmgmtDevCredExportActionEntry; //type: CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry

        ydk::YList clmgmtdevcredexportactionentry;
        
}; // CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable


class CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry : public ydk::Entity
{
    public:
        ClmgmtDevCredExportActionEntry();
        ~ClmgmtDevCredExportActionEntry();

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

        ydk::YLeaf clmgmtdevcredexportactionindex; //type: uint32
        ydk::YLeaf clmgmtdevcredentphysicalindex; //type: int32
        ydk::YLeaf clmgmtdevcredtransferprotocol; //type: ClmgmtLicenseTransferProtocol
        ydk::YLeaf clmgmtdevcredserveraddresstype; //type: InetAddressType
        ydk::YLeaf clmgmtdevcredserveraddress; //type: binary
        ydk::YLeaf clmgmtdevcredserverusername; //type: string
        ydk::YLeaf clmgmtdevcredserverpassword; //type: string
        ydk::YLeaf clmgmtdevcredexportfile; //type: string
        ydk::YLeaf clmgmtdevcredcommand; //type: ClmgmtDevCredCommand
        ydk::YLeaf clmgmtdevcredcommandstate; //type: ClmgmtLicenseActionState
        ydk::YLeaf clmgmtdevcredcommandfailcause; //type: ClmgmtDevCredCommandFailCause
        ydk::YLeaf clmgmtdevcredstoragetype; //type: StorageType
        ydk::YLeaf clmgmtdevcredrowstatus; //type: RowStatus
        class ClmgmtDevCredCommand;
        class ClmgmtDevCredCommandFailCause;

}; // CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry

class ClmgmtLicenseActionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf inProgress;
        static const ydk::Enum::YLeaf successful;
        static const ydk::Enum::YLeaf partiallySuccessful;
        static const ydk::Enum::YLeaf failed;

};

class ClmgmtLicenseActionFailCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf generalFailure;
        static const ydk::Enum::YLeaf transferProtocolNotSupported;
        static const ydk::Enum::YLeaf fileServerNotReachable;
        static const ydk::Enum::YLeaf unrecognizedEntPhysicalIndex;
        static const ydk::Enum::YLeaf invalidLicenseFilePath;
        static const ydk::Enum::YLeaf invalidLicenseFile;
        static const ydk::Enum::YLeaf invalidLicenseLine;
        static const ydk::Enum::YLeaf licenseAlreadyExists;
        static const ydk::Enum::YLeaf licenseNotValidForDevice;
        static const ydk::Enum::YLeaf invalidLicenseCount;
        static const ydk::Enum::YLeaf invalidLicensePeriod;
        static const ydk::Enum::YLeaf licenseInUse;
        static const ydk::Enum::YLeaf invalidLicenseStore;
        static const ydk::Enum::YLeaf licenseStorageFull;
        static const ydk::Enum::YLeaf invalidPermissionTicketFile;
        static const ydk::Enum::YLeaf invalidPermissionTicket;
        static const ydk::Enum::YLeaf invalidRehostTicketFile;
        static const ydk::Enum::YLeaf invalidRehostTicket;
        static const ydk::Enum::YLeaf invalidLicenseBackupFile;
        static const ydk::Enum::YLeaf licenseClearInProgress;
        static const ydk::Enum::YLeaf invalidLicenseEULAFile;

};

class ClmgmtLicenseTransferProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf rcp;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf scp;
        static const ydk::Enum::YLeaf sftp;

};

class CISCOLICENSEMGMTMIB::ClmgmtLicenseNotifObjects::ClmgmtLicenseErrorNotifEnable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

};

class CISCOLICENSEMGMTMIB::ClmgmtLicenseActionTable::ClmgmtLicenseActionEntry::ClmgmtLicenseAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noOp;
        static const ydk::Enum::YLeaf install;
        static const ydk::Enum::YLeaf clear;
        static const ydk::Enum::YLeaf processPermissionTicket;
        static const ydk::Enum::YLeaf regenerateLastRehostTicket;
        static const ydk::Enum::YLeaf backup;
        static const ydk::Enum::YLeaf generateEULA;

};

class CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf demo;
        static const ydk::Enum::YLeaf extension;
        static const ydk::Enum::YLeaf gracePeriod;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf paidSubscription;
        static const ydk::Enum::YLeaf evaluationSubscription;
        static const ydk::Enum::YLeaf extensionSubscription;
        static const ydk::Enum::YLeaf evalRightToUse;
        static const ydk::Enum::YLeaf rightToUse;
        static const ydk::Enum::YLeaf permanentRightToUse;

};

class CISCOLICENSEMGMTMIB::ClmgmtLicenseInfoTable::ClmgmtLicenseInfoEntry::ClmgmtLicenseStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf notInUse;
        static const ydk::Enum::YLeaf inUse;
        static const ydk::Enum::YLeaf expiredInUse;
        static const ydk::Enum::YLeaf expiredNotInUse;
        static const ydk::Enum::YLeaf usageCountConsumed;

};

class CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommand : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noOp;
        static const ydk::Enum::YLeaf getDeviceCredentials;

};

class CISCOLICENSEMGMTMIB::ClmgmtDevCredExportActionTable::ClmgmtDevCredExportActionEntry::ClmgmtDevCredCommandFailCause : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf unknownError;
        static const ydk::Enum::YLeaf transferProtocolNotSupported;
        static const ydk::Enum::YLeaf fileServerNotReachable;
        static const ydk::Enum::YLeaf unrecognizedEntPhysicalIndex;
        static const ydk::Enum::YLeaf invalidFile;

};


}
}

#endif /* _CISCO_LICENSE_MGMT_MIB_ */

