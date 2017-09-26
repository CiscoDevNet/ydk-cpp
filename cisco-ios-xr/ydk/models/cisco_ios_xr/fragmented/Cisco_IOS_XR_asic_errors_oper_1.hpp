#ifndef _CISCO_IOS_XR_ASIC_ERRORS_OPER_1_
#define _CISCO_IOS_XR_ASIC_ERRORS_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_asic_errors_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asic_errors_oper {


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors : public ydk::Entity
{
    public:
        MultipleBitSoftErrors();
        ~MultipleBitSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::MultipleBitSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard : public ydk::Entity
{
    public:
        OutofResourceHard();
        ~OutofResourceHard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceHard::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft : public ydk::Entity
{
    public:
        OutofResourceSoft();
        ~OutofResourceSoft();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::OutofResourceSoft::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors : public ydk::Entity
{
    public:
        ParityHardErrors();
        ~ParityHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParityHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors : public ydk::Entity
{
    public:
        ParitySoftErrors();
        ~ParitySoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ParitySoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors : public ydk::Entity
{
    public:
        ResetHardErrors();
        ~ResetHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors : public ydk::Entity
{
    public:
        ResetSoftErrors();
        ~ResetSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::ResetSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors : public ydk::Entity
{
    public:
        SingleBitHardErrors();
        ~SingleBitHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors : public ydk::Entity
{
    public:
        SingleBitSoftErrors();
        ~SingleBitSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::SingleBitSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors : public ydk::Entity
{
    public:
        TimeOutHardErrors();
        ~TimeOutHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors : public ydk::Entity
{
    public:
        TimeOutSoftErrors();
        ~TimeOutSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::TimeOutSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors : public ydk::Entity
{
    public:
        UcodeHardErrors();
        ~UcodeHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors : public ydk::Entity
{
    public:
        UcodeSoftErrors();
        ~UcodeSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UcodeSoftErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors : public ydk::Entity
{
    public:
        UnexpectedHardErrors();
        ~UnexpectedHardErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedHardErrors::Error::LastErr


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors : public ydk::Entity
{
    public:
        UnexpectedSoftErrors();
        ~UnexpectedSoftErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Error; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error> > error;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error : public ydk::Entity
{
    public:
        Error();
        ~Error();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf asic_info; //type: string
        ydk::YLeaf node_key; //type: uint32
        ydk::YLeaf alarm_on; //type: boolean
        ydk::YLeaf thresh_hi; //type: uint32
        ydk::YLeaf period_hi; //type: uint32
        ydk::YLeaf thresh_lo; //type: uint32
        ydk::YLeaf period_lo; //type: uint32
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf intr_type; //type: uint32
        ydk::YLeaf leaf_id; //type: uint32
        ydk::YLeaf last_cleared; //type: uint64
        class CsrsInfo; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo
        class LastErr; //type: AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo> > csrs_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_asic_errors_oper::AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr> > last_err;
        
}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo : public ydk::Entity
{
    public:
        CsrsInfo();
        ~CsrsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: uint64
        ydk::YLeaf width; //type: uint32

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::CsrsInfo


class AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr : public ydk::Entity
{
    public:
        LastErr();
        ~LastErr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf at_time; //type: uint64
        ydk::YLeaf at_time_nsec; //type: uint64
        ydk::YLeaf counter_val; //type: uint32
        ydk::YLeaf error_desc; //type: string
        ydk::YLeafList error_regval; //type: list of  uint8

}; // AsicErrors::Nodes::Node::AsicInformation::Instances::Instance::ErrorPath::UnexpectedSoftErrors::Error::LastErr


}
}

#endif /* _CISCO_IOS_XR_ASIC_ERRORS_OPER_1_ */

