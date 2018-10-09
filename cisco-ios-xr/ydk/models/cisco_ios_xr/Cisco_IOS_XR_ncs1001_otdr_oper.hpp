#ifndef _CISCO_IOS_XR_NCS1001_OTDR_OPER_
#define _CISCO_IOS_XR_NCS1001_OTDR_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1001_otdr_oper {

class HwModule : public ydk::Entity
{
    public:
        HwModule();
        ~HwModule();

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

        class OtdrDetails; //type: HwModule::OtdrDetails
        class Otdrs; //type: HwModule::Otdrs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_otdr_oper::HwModule::OtdrDetails> otdr_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_otdr_oper::HwModule::Otdrs> otdrs;
        
}; // HwModule


class HwModule::OtdrDetails : public ydk::Entity
{
    public:
        OtdrDetails();
        ~OtdrDetails();

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

        class OtdrDetail; //type: HwModule::OtdrDetails::OtdrDetail

        ydk::YList otdr_detail;
        
}; // HwModule::OtdrDetails


class HwModule::OtdrDetails::OtdrDetail : public ydk::Entity
{
    public:
        OtdrDetail();
        ~OtdrDetail();

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

        ydk::YLeaf slot_id; //type: uint32
        class DataTypeDetail; //type: HwModule::OtdrDetails::OtdrDetail::DataTypeDetail

        ydk::YList data_type_detail;
        
}; // HwModule::OtdrDetails::OtdrDetail


class HwModule::OtdrDetails::OtdrDetail::DataTypeDetail : public ydk::Entity
{
    public:
        DataTypeDetail();
        ~DataTypeDetail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otdr_data_type_details; //type: OtsOtdrDataTypeDetails
        class Identifier; //type: HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier

        ydk::YList identifier;
        
}; // HwModule::OtdrDetails::OtdrDetail::DataTypeDetail


class HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf scan_detail; //type: uint32
        class OtdrItem; //type: HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem
        class OtdrScan; //type: HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan
        class OtdrStatus; //type: HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_otdr_oper::HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem> otdr_item;
        ydk::YList otdr_scan;
        ydk::YList otdr_status;
        
}; // HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier


class HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem : public ydk::Entity
{
    public:
        OtdrItem();
        ~OtdrItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otdr_number; //type: uint8
        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf sor_file; //type: string
        ydk::YLeaf sor_directory; //type: string
        ydk::YLeaf scan_mode; //type: OtdrScanMode
        ydk::YLeaf distance; //type: string
        ydk::YLeaf total_orl; //type: string
        class OtdrEvent; //type: HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent

        ydk::YList otdr_event;
        
}; // HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem


class HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent : public ydk::Entity
{
    public:
        OtdrEvent();
        ~OtdrEvent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint16
        ydk::YLeaf type; //type: OtdrEvent
        ydk::YLeaf position; //type: string
        ydk::YLeaf accuracy; //type: string
        ydk::YLeaf magnitude; //type: string
        ydk::YLeaf attenuation; //type: string
        ydk::YLeaf eof_confidence; //type: uint32
        ydk::YLeaf threshold_crossing; //type: uint8

}; // HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrItem::OtdrEvent


class HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan : public ydk::Entity
{
    public:
        OtdrScan();
        ~OtdrScan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint16
        ydk::YLeaf otdr_number; //type: uint8
        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf scan_mode; //type: OtdrScanMode
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf sor_file; //type: string

}; // HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrScan


class HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus : public ydk::Entity
{
    public:
        OtdrStatus();
        ~OtdrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otdr_id; //type: uint8
        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf training_status; //type: OtdrStatus
        ydk::YLeaf measurement_status; //type: OtdrStatus
        ydk::YLeaf progress_pc; //type: uint16

}; // HwModule::OtdrDetails::OtdrDetail::DataTypeDetail::Identifier::OtdrStatus


class HwModule::Otdrs : public ydk::Entity
{
    public:
        Otdrs();
        ~Otdrs();

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

        class Otdr; //type: HwModule::Otdrs::Otdr

        ydk::YList otdr;
        
}; // HwModule::Otdrs


class HwModule::Otdrs::Otdr : public ydk::Entity
{
    public:
        Otdr();
        ~Otdr();

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

        ydk::YLeaf slot_id; //type: uint32
        class DataType; //type: HwModule::Otdrs::Otdr::DataType

        ydk::YList data_type;
        
}; // HwModule::Otdrs::Otdr


class HwModule::Otdrs::Otdr::DataType : public ydk::Entity
{
    public:
        DataType();
        ~DataType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otdr_data_type; //type: OtsOtdrData
        class OtdrItem; //type: HwModule::Otdrs::Otdr::DataType::OtdrItem
        class OtdrScan; //type: HwModule::Otdrs::Otdr::DataType::OtdrScan
        class OtdrStatus; //type: HwModule::Otdrs::Otdr::DataType::OtdrStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ncs1001_otdr_oper::HwModule::Otdrs::Otdr::DataType::OtdrItem> otdr_item;
        ydk::YList otdr_scan;
        ydk::YList otdr_status;
        
}; // HwModule::Otdrs::Otdr::DataType


class HwModule::Otdrs::Otdr::DataType::OtdrItem : public ydk::Entity
{
    public:
        OtdrItem();
        ~OtdrItem();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otdr_number; //type: uint8
        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf sor_file; //type: string
        ydk::YLeaf sor_directory; //type: string
        ydk::YLeaf scan_mode; //type: OtdrScanMode
        ydk::YLeaf distance; //type: string
        ydk::YLeaf total_orl; //type: string
        class OtdrEvent; //type: HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent

        ydk::YList otdr_event;
        
}; // HwModule::Otdrs::Otdr::DataType::OtdrItem


class HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent : public ydk::Entity
{
    public:
        OtdrEvent();
        ~OtdrEvent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_id; //type: uint16
        ydk::YLeaf type; //type: OtdrEvent
        ydk::YLeaf position; //type: string
        ydk::YLeaf accuracy; //type: string
        ydk::YLeaf magnitude; //type: string
        ydk::YLeaf attenuation; //type: string
        ydk::YLeaf eof_confidence; //type: uint32
        ydk::YLeaf threshold_crossing; //type: uint8

}; // HwModule::Otdrs::Otdr::DataType::OtdrItem::OtdrEvent


class HwModule::Otdrs::Otdr::DataType::OtdrScan : public ydk::Entity
{
    public:
        OtdrScan();
        ~OtdrScan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint16
        ydk::YLeaf otdr_number; //type: uint8
        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf scan_mode; //type: OtdrScanMode
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf sor_file; //type: string

}; // HwModule::Otdrs::Otdr::DataType::OtdrScan


class HwModule::Otdrs::Otdr::DataType::OtdrStatus : public ydk::Entity
{
    public:
        OtdrStatus();
        ~OtdrStatus();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otdr_id; //type: uint8
        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf training_status; //type: OtdrStatus
        ydk::YLeaf measurement_status; //type: OtdrStatus
        ydk::YLeaf progress_pc; //type: uint16

}; // HwModule::Otdrs::Otdr::DataType::OtdrStatus

class Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direction_tx;
        static const ydk::Enum::YLeaf direction_rx;

};

class OtdrEvent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otdr_event_type_loss;
        static const ydk::Enum::YLeaf otdr_event_type_reflect_ion;
        static const ydk::Enum::YLeaf otdr_event_type_loss_and_reflect_ion;
        static const ydk::Enum::YLeaf otdr_event_type_end_of_fiber;

};

class OtsOtdrDataTypeDetails : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf scan_details;
        static const ydk::Enum::YLeaf base_line_details;

};

class OtdrScanMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otdr_scan_auto;
        static const ydk::Enum::YLeaf otdr_scan_expert;

};

class OtdrStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otdr_status_unknown;
        static const ydk::Enum::YLeaf otdr_status_ok;
        static const ydk::Enum::YLeaf otdr_status_orl_progress;
        static const ydk::Enum::YLeaf otdr_status_otdr_progress;
        static const ydk::Enum::YLeaf otdr_status_progress;
        static const ydk::Enum::YLeaf otdr_status_failure;
        static const ydk::Enum::YLeaf otdr_status_aborted;

};

class OtsOtdrData : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf status;
        static const ydk::Enum::YLeaf scan;
        static const ydk::Enum::YLeaf base_line;

};


}
}

#endif /* _CISCO_IOS_XR_NCS1001_OTDR_OPER_ */

