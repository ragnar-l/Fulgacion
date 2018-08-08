
#ifndef _H_cli_mxp
#define _H_cli_mxp
/* 
 * Copyright (c) 2008-2012, Andy Bierman, All Rights Reserved.
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *

*** Generated by yangdump 2.11-0

  Combined SIL header
  module cli-mxp
  revision 2018-06-24
  namespace http://fulgor.com/ns/cli-mxp

 */

#include <xmlstring.h>

#include "dlq.h"
#include "ncxtypes.h"
#include "op.h"
#include "status.h"
#include "val.h"

#ifdef __cplusplus
extern "C" {
#endif

#define y_cli_mxp_M_cli_mxp (const xmlChar *)"cli-mxp"
#define y_cli_mxp_R_cli_mxp (const xmlChar *)"2018-06-24"

#define y_cli_mxp_N_board_humidity_state (const xmlChar *)"board_humidity_state"
#define y_cli_mxp_N_canal (const xmlChar *)"canal"
#define y_cli_mxp_N_cd_compensacion (const xmlChar *)"cd_compensacion"
#define y_cli_mxp_N_configuracion (const xmlChar *)"configuracion"
#define y_cli_mxp_N_edfa_output_power_config (const xmlChar *)"edfa_output_power_config"
#define y_cli_mxp_N_edfa_output_power_state (const xmlChar *)"edfa_output_power_state"
#define y_cli_mxp_N_fpga_temperature_state (const xmlChar *)"fpga_temperature_state"
#define y_cli_mxp_N_mux_apply_config (const xmlChar *)"mux-apply-config"
#define y_cli_mxp_N_mux_config (const xmlChar *)"mux-config"
#define y_cli_mxp_N_mux_notify (const xmlChar *)"mux-notify"
#define y_cli_mxp_N_mux_notify_activate (const xmlChar *)"mux-notify-activate"
#define y_cli_mxp_N_mux_notify_deactivate (const xmlChar *)"mux-notify-deactivate"
#define y_cli_mxp_N_mux_settings (const xmlChar *)"mux-settings"
#define y_cli_mxp_N_mux_state (const xmlChar *)"mux-state"
#define y_cli_mxp_N_potencia (const xmlChar *)"potencia"
#define y_cli_mxp_N_ringtone (const xmlChar *)"ringtone"
#define y_cli_mxp_N_time_notify_config (const xmlChar *)"time_notify_config"
#define y_cli_mxp_N_tipo_fec_cliente (const xmlChar *)"tipo_fec_cliente"
#define y_cli_mxp_N_tipo_fec_linea (const xmlChar *)"tipo_fec_linea"
#define y_cli_mxp_N_tipo_trafico (const xmlChar *)"tipo_trafico"
#define y_cli_mxp_N_value_notify_config (const xmlChar *)"value_notify_config"
#define y_cli_mxp_N_value_rx_power_notify_config (const xmlChar *)"value_rx_power_notify_config"
#define y_cli_mxp_N_xfp_rx_power (const xmlChar *)"xfp_rx_power"
#define y_cli_mxp_N_xfp_tx_power (const xmlChar *)"xfp_tx_power"

/* container /mux-config */
typedef struct y_cli_mxp_T_mux_config_ {
  xmlChar *configuracion;
  xmlChar *tipo_trafico;
  xmlChar *tipo_fec_linea;
  xmlChar *tipo_fec_cliente;
  xmlChar *canal;
  xmlChar *potencia;
  xmlChar *cd_compensacion;
  int64 edfa_output_power_config;
  int16 time_notify_config;
  int64 value_notify_config;
  xmlChar *value_rx_power_notify_config;
} y_cli_mxp_T_mux_config;

/* container /mux-state */
typedef struct y_cli_mxp_T_mux_state_ {
  int64 fpga_temperature_state;
  int16 board_humidity_state;
  int64 edfa_output_power_state;
  int64 xfp_tx_power;
  int64 xfp_rx_power;
} y_cli_mxp_T_mux_state;

/* container /mux-notify-activate/input */
typedef struct y_cli_mxp_T_mux_notify_activate_input_ {
} y_cli_mxp_T_mux_notify_activate_input;

/* container /mux-notify-activate/output */
typedef struct y_cli_mxp_T_mux_notify_activate_output_ {
} y_cli_mxp_T_mux_notify_activate_output;

/* rpc /mux-notify-activate */
typedef struct y_cli_mxp_T_mux_notify_activate_ {
  y_cli_mxp_T_mux_notify_activate_input input;
  y_cli_mxp_T_mux_notify_activate_output output;
} y_cli_mxp_T_mux_notify_activate;

/* container /mux-notify-deactivate/input */
typedef struct y_cli_mxp_T_mux_notify_deactivate_input_ {
} y_cli_mxp_T_mux_notify_deactivate_input;

/* container /mux-notify-deactivate/output */
typedef struct y_cli_mxp_T_mux_notify_deactivate_output_ {
} y_cli_mxp_T_mux_notify_deactivate_output;

/* rpc /mux-notify-deactivate */
typedef struct y_cli_mxp_T_mux_notify_deactivate_ {
  y_cli_mxp_T_mux_notify_deactivate_input input;
  y_cli_mxp_T_mux_notify_deactivate_output output;
} y_cli_mxp_T_mux_notify_deactivate;

/* container /mux-apply-config/input */
typedef struct y_cli_mxp_T_mux_apply_config_input_ {
} y_cli_mxp_T_mux_apply_config_input;

/* container /mux-apply-config/output */
typedef struct y_cli_mxp_T_mux_apply_config_output_ {
} y_cli_mxp_T_mux_apply_config_output;

/* rpc /mux-apply-config */
typedef struct y_cli_mxp_T_mux_apply_config_ {
  y_cli_mxp_T_mux_apply_config_input input;
  y_cli_mxp_T_mux_apply_config_output output;
} y_cli_mxp_T_mux_apply_config;

/* container /mux-settings/input */
typedef struct y_cli_mxp_T_mux_settings_input_ {
} y_cli_mxp_T_mux_settings_input;

/* container /mux-settings/output */
typedef struct y_cli_mxp_T_mux_settings_output_ {
} y_cli_mxp_T_mux_settings_output;

/* rpc /mux-settings */
typedef struct y_cli_mxp_T_mux_settings_ {
  y_cli_mxp_T_mux_settings_input input;
  y_cli_mxp_T_mux_settings_output output;
} y_cli_mxp_T_mux_settings;

/* notification /mux-notify */
typedef struct y_cli_mxp_T_mux_notify_ {
  xmlChar *ringtone;
} y_cli_mxp_T_mux_notify;

/********************************************************************
* FUNCTION y_cli_mxp_mux_notify_send
* 
* Send a y_cli_mxp_mux_notify notification
* Called by your code when notification event occurs
* 
********************************************************************/
extern void y_cli_mxp_mux_notify_send (
  const xmlChar *ringtone);

/********************************************************************
* FUNCTION y_cli_mxp_init
* 
* initialize the cli-mxp server instrumentation library
* 
* INPUTS:
*    modname == requested module name
*    revision == requested version (NULL for any)
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_cli_mxp_init (
  const xmlChar *modname,
  const xmlChar *revision);

/********************************************************************
* FUNCTION y_cli_mxp_init2
* 
* SIL init phase 2: non-config data structures
* Called after running config is loaded
* 
* RETURNS:
*     error status
********************************************************************/
extern status_t y_cli_mxp_init2 (void);

/********************************************************************
* FUNCTION y_cli_mxp_cleanup
*    cleanup the server instrumentation library
* 
********************************************************************/
extern void y_cli_mxp_cleanup (void);

#ifdef __cplusplus
} /* end extern 'C' */
#endif

#endif