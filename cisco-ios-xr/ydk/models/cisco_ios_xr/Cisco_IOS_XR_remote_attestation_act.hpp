#ifndef _CISCO_IOS_XR_REMOTE_ATTESTATION_ACT_
#define _CISCO_IOS_XR_REMOTE_ATTESTATION_ACT_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_remote_attestation_act {

class GetCertificate : public ydk::Entity
{
    public:
        GetCertificate();
        ~GetCertificate();

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

        class Input; //type: GetCertificate::Input
        class Output; //type: GetCertificate::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetCertificate::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetCertificate::Output> output;
        
}; // GetCertificate


class GetCertificate::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf nonce; //type: binary
        ydk::YLeaf certificate_identifier; //type: string
        ydk::YLeaf location; //type: string

}; // GetCertificate::Input


class GetCertificate::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        class GetCertificateResponse; //type: GetCertificate::Output::GetCertificateResponse

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetCertificate::Output::GetCertificateResponse> get_certificate_response;
        
}; // GetCertificate::Output


class GetCertificate::Output::GetCertificateResponse : public ydk::Entity
{
    public:
        GetCertificateResponse();
        ~GetCertificateResponse();

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

        class SystemCertificates; //type: GetCertificate::Output::GetCertificateResponse::SystemCertificates

        ydk::YList system_certificates;
        
}; // GetCertificate::Output::GetCertificateResponse


class GetCertificate::Output::GetCertificateResponse::SystemCertificates : public ydk::Entity
{
    public:
        SystemCertificates();
        ~SystemCertificates();

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

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf nonce; //type: binary
        ydk::YLeaf signature_version; //type: uint32
        ydk::YLeaf signature; //type: binary
        class Certificates; //type: GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates> certificates;
        
}; // GetCertificate::Output::GetCertificateResponse::SystemCertificates


class GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates : public ydk::Entity
{
    public:
        Certificates();
        ~Certificates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Certificate; //type: GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate

        ydk::YList certificate;
        
}; // GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates


class GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate : public ydk::Entity
{
    public:
        Certificate();
        ~Certificate();

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
        ydk::YLeaf value_; //type: binary

}; // GetCertificate::Output::GetCertificateResponse::SystemCertificates::Certificates::Certificate

class AttestPlatformConfigRegisters : public ydk::Entity
{
    public:
        AttestPlatformConfigRegisters();
        ~AttestPlatformConfigRegisters();

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

        class Input; //type: AttestPlatformConfigRegisters::Input
        class Output; //type: AttestPlatformConfigRegisters::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::AttestPlatformConfigRegisters::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::AttestPlatformConfigRegisters::Output> output;
        
}; // AttestPlatformConfigRegisters


class AttestPlatformConfigRegisters::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf nonce; //type: binary
        ydk::YLeaf attestation_certificate_identifier; //type: string
        ydk::YLeaf location; //type: string
        ydk::YLeafList pcr_index; //type: list of  uint16

}; // AttestPlatformConfigRegisters::Input


class AttestPlatformConfigRegisters::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        class PlatformConfigRegisters; //type: AttestPlatformConfigRegisters::Output::PlatformConfigRegisters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::AttestPlatformConfigRegisters::Output::PlatformConfigRegisters> platform_config_registers;
        
}; // AttestPlatformConfigRegisters::Output


class AttestPlatformConfigRegisters::Output::PlatformConfigRegisters : public ydk::Entity
{
    public:
        PlatformConfigRegisters();
        ~PlatformConfigRegisters();

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

        ydk::YLeaf nonce; //type: binary
        class NodeData; //type: AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData

        ydk::YList node_data;
        
}; // AttestPlatformConfigRegisters::Output::PlatformConfigRegisters


class AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

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

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf up_time; //type: uint32
        ydk::YLeaf pcr_quote; //type: binary
        ydk::YLeaf pcr_quote_signature; //type: binary
        class PCR; //type: AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR

        ydk::YList pcr;
        
}; // AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData


class AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR : public ydk::Entity
{
    public:
        PCR();
        ~PCR();

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
        ydk::YLeafList value_; //type: list of  uint8

}; // AttestPlatformConfigRegisters::Output::PlatformConfigRegisters::NodeData::PCR

class GetPlatformBootIntegrityEventLogs : public ydk::Entity
{
    public:
        GetPlatformBootIntegrityEventLogs();
        ~GetPlatformBootIntegrityEventLogs();

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

        class Input; //type: GetPlatformBootIntegrityEventLogs::Input
        class Output; //type: GetPlatformBootIntegrityEventLogs::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetPlatformBootIntegrityEventLogs::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetPlatformBootIntegrityEventLogs::Output> output;
        
}; // GetPlatformBootIntegrityEventLogs


class GetPlatformBootIntegrityEventLogs::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf location; //type: string
        ydk::YLeaf start_event_number; //type: uint64
        ydk::YLeaf end_event_number; //type: uint64

}; // GetPlatformBootIntegrityEventLogs::Input


class GetPlatformBootIntegrityEventLogs::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        class SystemBootIntegrity; //type: GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity> system_boot_integrity;
        
}; // GetPlatformBootIntegrityEventLogs::Output


class GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity : public ydk::Entity
{
    public:
        SystemBootIntegrity();
        ~SystemBootIntegrity();

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

        class NodeData; //type: GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData

        ydk::YList node_data;
        
}; // GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity


class GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

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

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf up_time; //type: uint32
        class EventLog; //type: GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog

        ydk::YList event_log;
        
}; // GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData


class GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog : public ydk::Entity
{
    public:
        EventLog();
        ~EventLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_number; //type: uint32
        ydk::YLeaf event_type; //type: uint32
        ydk::YLeaf pcr_index; //type: uint16
        ydk::YLeaf event_size; //type: uint32
        ydk::YLeaf event_data; //type: binary
        class DigestList; //type: GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList

        ydk::YList digest_list;
        
}; // GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog


class GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList : public ydk::Entity
{
    public:
        DigestList();
        ~DigestList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf digest_hash_algorithm; //type: DigestHashAlgorithm
        ydk::YLeaf digest; //type: binary
        class DigestHashAlgorithm;

}; // GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList

class GetPlatformImaEventLogs : public ydk::Entity
{
    public:
        GetPlatformImaEventLogs();
        ~GetPlatformImaEventLogs();

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

        class Input; //type: GetPlatformImaEventLogs::Input
        class Output; //type: GetPlatformImaEventLogs::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetPlatformImaEventLogs::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetPlatformImaEventLogs::Output> output;
        
}; // GetPlatformImaEventLogs


class GetPlatformImaEventLogs::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

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

        ydk::YLeaf location; //type: string
        ydk::YLeaf start_event_number; //type: uint64
        ydk::YLeaf end_event_number; //type: uint64

}; // GetPlatformImaEventLogs::Input


class GetPlatformImaEventLogs::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

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

        class SystemIma; //type: GetPlatformImaEventLogs::Output::SystemIma

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_remote_attestation_act::GetPlatformImaEventLogs::Output::SystemIma> system_ima;
        
}; // GetPlatformImaEventLogs::Output


class GetPlatformImaEventLogs::Output::SystemIma : public ydk::Entity
{
    public:
        SystemIma();
        ~SystemIma();

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

        class NodeData; //type: GetPlatformImaEventLogs::Output::SystemIma::NodeData

        ydk::YList node_data;
        
}; // GetPlatformImaEventLogs::Output::SystemIma


class GetPlatformImaEventLogs::Output::SystemIma::NodeData : public ydk::Entity
{
    public:
        NodeData();
        ~NodeData();

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

        ydk::YLeaf node_location; //type: string
        ydk::YLeaf up_time; //type: uint32
        class ImaEventLog; //type: GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog

        ydk::YList ima_event_log;
        
}; // GetPlatformImaEventLogs::Output::SystemIma::NodeData


class GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog : public ydk::Entity
{
    public:
        ImaEventLog();
        ~ImaEventLog();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf event_number; //type: uint64
        ydk::YLeaf ima_template; //type: string
        ydk::YLeaf filename_hint; //type: string
        ydk::YLeaf filedata_hash; //type: binary
        ydk::YLeaf template_hash_algorithm; //type: string
        ydk::YLeaf template_hash; //type: binary
        ydk::YLeaf pcr_index; //type: uint16
        ydk::YLeaf signature; //type: binary

}; // GetPlatformImaEventLogs::Output::SystemIma::NodeData::ImaEventLog

class GetPlatformBootIntegrityEventLogs::Output::SystemBootIntegrity::NodeData::EventLog::DigestList::DigestHashAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf SHA1;
        static const ydk::Enum::YLeaf SHA256;
        static const ydk::Enum::YLeaf SHA384;
        static const ydk::Enum::YLeaf SHA512;

};


}
}

#endif /* _CISCO_IOS_XR_REMOTE_ATTESTATION_ACT_ */

